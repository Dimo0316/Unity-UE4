Shader "Unity Shaders Book/Chapter 5/Simple Shader"
{
	Properties
	{
		//_MainTex ("Texture", 2D) = "white" {}
		_Color("Color Tint", Color) = (1.0, 1.0, 1.0, 1.0)
	}
		SubShader
	{
		//Tags { "RenderType"="Opaque" }
		//LOD 100

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#pragma multi_compile_fog

			#include "UnityCG.cginc"

			fixed4 _Color;

			//顶点着色器的输入
			struct a2v {
				//PODITION语义告诉Unity，用模型空间的顶点坐标填充vertex变量
				float4 vertex : POSITION;
				//NORMAL语义告诉Unity，用模型空间的法线方向填充normal变量
				float3 normal : NORMAL;
				//TEXCOORD0语义告诉Unity，用模型的第一套纹理坐标填充texcoord变量
				float4 texcoord : TEXCOORD0;
			};
			
			//使用一个结构体来定义顶点着色器的输出
			struct v2f {
				//SV_POSITION语义告诉Unity，pos里包含了顶点在裁剪空间中的位置信息
				float4 pos : SV_POSITION;
				//COLOR0语义可以用来存储颜色信息
				fixed3 color : COLOR0;
			};

			v2f vert(a2v v ) 
			{
				v2f o;
				o.pos = UnityObjectToClipPos(v.vertex);
				//v.normal包含了顶点的法线方向，其分量范围在[-1.0,1.0]
				//下面代码把分量范围映射到了[0.0,1.0]
				//存储到o.color中传递给片元着色器
				o.color = v.normal * 0.5 + fixed3(0.5, 0.5, 0.5);
				return o;

			}
			fixed4 frag(v2f i) : SV_Target
			{
				fixed3 c = i.color;
				c *= _Color.rgb;
				return fixed4(c, 1.0);
			}

			ENDCG
		}
	}
}
