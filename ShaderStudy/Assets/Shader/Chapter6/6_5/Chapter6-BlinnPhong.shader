﻿Shader "Unity Shaders Book/Chapter 6/Specular Blinn-Phong"
{
	Properties
	{
		_Diffuse("Diffuse", Color) = (1, 1, 1, 1)
		_Specular("Specular", Color) = (1, 1, 1, 1)
		_Gloss("Gloss", Range(8.0, 256)) = 20
	}
		SubShader
	{
		Pass
		{
			Tags {"LightMode" = "ForwardBase"}
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
		// make fog work
		#pragma multi_compile_fog

		#include "UnityCG.cginc"
		#include "Lighting.cginc"

		fixed4 _Diffuse;
		fixed4 _Specular;
		fixed _Gloss;

		struct a2v
		{
			float4 vertex : POSITION;
			float3 normal : NORMAL;
		};

		struct v2f
		{
			float4 pos : SV_POSITION;
			float3 worldNormal : TEXCOORD0;
			float3 worldPos : TEXCOORD1;
		};


		v2f vert(a2v v)
		{
			v2f o;

			o.pos = UnityObjectToClipPos(v.vertex);

			o.worldNormal = mul(v.normal, (float3x3)unity_WorldToObject);

			o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;

			return o;
		}

		fixed4 frag(v2f i) : SV_Target
		{
			//环境光
			fixed3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz;

		//世界坐标系下法线
		fixed3 worldNormal = normalize(i.worldNormal);
		//light 
		fixed3 worldLightDir = normalize(_WorldSpaceLightPos0.xyz);
		//compute diffuse term
		fixed3 diffuse = _LightColor0.rgb * _Diffuse.rgb * saturate(dot(worldNormal, worldLightDir));
		//reflect direction in world space
		fixed3 reflectDir = normalize(reflect(-worldLightDir, worldNormal));
		//View Direction in the world space
		fixed3 viewDir = normalize(_WorldSpaceCameraPos.xyz - i.worldPos.xyz);
		fixed3 halfDir = normalize(worldLightDir + viewDir);
		fixed3 specular = _LightColor0.rgb * _Specular.rgb * pow(max(0, dot(worldNormal, halfDir)), _Gloss);

		return fixed4(ambient + diffuse + specular, 1.0);
	}
	ENDCG
}
	}
		Fallback "Specular"
}
