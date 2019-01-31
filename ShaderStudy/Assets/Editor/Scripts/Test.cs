using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

public class Test : ScriptableWizard
{
    private int controller = 0;
    public Object Objects = new Object();
    public List<Object> textureList = new List<Object>();
    private List<string> texturePath = new List<string>();
    void OnWizardUpdate()
    {
        Objects = Selection.activeObject;
        helpString = "Select transform to render from and cubemap to render into";
        
        if(0 == controller)
        {
            texturePath.Add(@"E:\Github\Unity_Shaders_Book\Assets\Scenes\Chapter5\Scene_5_2.unity");
            string paths = texturePath[0].Remove(0, Application.dataPath.Length - 6);
            Debug.Log(paths);
            foreach (var path in texturePath)
            {
                textureList.Add(AssetDatabase.LoadAssetAtPath(path.Remove(0, Application.dataPath.Length - 6), typeof(Object))as Object);
            }
            controller++;
        }
    }

    [MenuItem("GameObject/Test")]
    static void RenderCubemap()
    {
        ScriptableWizard.DisplayWizard<Test>("Render cubemap", "关闭");
    }
}