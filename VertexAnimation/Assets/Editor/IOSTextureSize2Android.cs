using UnityEngine;
using UnityEditor;

namespace GiantEditor2
{
    public class IOSTextureSize2Android : MonoBehaviour
    {
        //此方法将贴图的ios importsetting中大小信息映射到android importsetting
        [MenuItem("Giant Tools/IOS Texture Size to Android",false,0)]
        static public void SetIOSTextureSize2Android()
        {
            TextureImporterPlatformSettings iphoneTexImporterSettings;
            TextureImporterPlatformSettings androidTexImporterSettings;

            Object[] textures = Selection.GetFiltered(typeof(Texture2D), SelectionMode.DeepAssets);
            foreach (Texture2D texture in textures)
            {
                string path = AssetDatabase.GetAssetPath(texture);
                TextureImporter texImporter = AssetImporter.GetAtPath(path) as TextureImporter;
                                
                //获得Texture iPhone和Android平台的设置 如果为空则不进行操作
                iphoneTexImporterSettings = texImporter.GetPlatformTextureSettings("iPhone");
                if (iphoneTexImporterSettings == null || !iphoneTexImporterSettings.overridden)
                    continue;

                androidTexImporterSettings = texImporter.GetPlatformTextureSettings("Android");
                if (androidTexImporterSettings == null)
                    continue;

                androidTexImporterSettings.overridden = true;
                //将iPhone 平台上maxTextureSize  resizeAlgorithm两个属性映射到Android平台
                androidTexImporterSettings.maxTextureSize = iphoneTexImporterSettings.maxTextureSize;
                androidTexImporterSettings.resizeAlgorithm = iphoneTexImporterSettings.resizeAlgorithm;

                texImporter.SetPlatformTextureSettings(androidTexImporterSettings);
                texImporter.SaveAndReimport();
                //EditorUtility.DisplayProgressBar();
                //EditorUtility.ClearProgressBar();
            }

            AssetDatabase.Refresh();
        }
    }
}
