// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "Hidden/M_Fern_01"
{
	Properties
	{
		_MainTex ("Fern Texture", 2D) = "white" {}
		_WPOWaveSpeed("WPO WaveSpeed",Range(0,1)) = 0.2
		_WPOXSpeed("WPOX Speed",Range(0,5)) = 1.0
		_WPOYSpeed("WPOY Speed",Range(0,5)) = 1.0
		_WPOWaveTile("WPO WaveTile",float) = 500
		_WPOWaveSample("WPO Wave Sample",2D) = "white" {}
		_PivotPainterWindSpeed("Pivot Painter WindSpeed",Range(0,5)) = 3
		_PivotWindNoiseScale("PivotWindNoiseScale",float) = 200
		_PivotXSpeed("PivotX Speed",Range(0,1)) = 0.08
		_WindNoiseTexture("Wind Noise Texture",2D) = "white" {}
		_PivotWindMax("Pivot WindMax",float) = 1.0
		_PivotWindMin("Pivot WindMin",float) = 0.0
		_FernIceNoiseN("Fern IceNoise N",2D) = "white" {}
		_FernN("Fern N",2D) = "white" {}
		_FernTillingNoiseN("Fern Tilling Noise N",2D) = "white" {}

		//_White("_White",2D) = "white" {}
		//_ColorWhite("ColorWhite", Color) = (0,0,0,1)
	}
		SubShader
	{
		// No culling or depth
		Cull Off ZWrite Off ZTest Always

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#include "UnityCG.cginc"


			//sampler2D _White;
			sampler2D _MainTex;
			float2 uv_MainTex;
			float _WPOWaveSpeed;
			float _WPOWaveTile;
			sampler2D _WPOWaveSample;
			float _WPOXSpeed;
			float _WPOYSpeed;
			float _PivotWindNoiseScale;
	 		float _PivotPainterWindSpeed;
			float _PivotXSpeed;
			sampler2D _WindNoiseTexture;
			float _PivotWindMax;
			float _PivotWindMin;
			sampler2D _FernIceNoiseN;
			sampler2D _FernN;
			sampler2D _FernTillingNoiseN;

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
				float2 uv2 : TEXCOORD2;
				float2 uv3 : TEXCOORD3;
				float3 normal : NORMAL;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
			};

			float3 RotationAroundAxis(float3 normalizeRotationAxis, float rotationAngle, float3 PositionOnAxis, float3 Position)
			{
				// Project Position onto the rotation axis and find the closest point on the axis to Position
				float3 ClosestPointOnAxis = PositionOnAxis + normalizeRotationAxis * dot(normalizeRotationAxis, Position - PositionOnAxis);
				// Construct orthogonal axes in the plane of the rotation
				float3 UAxis = Position - ClosestPointOnAxis;
				float3 VAxis = cross(normalizeRotationAxis, UAxis);
				float CosAngle = cos(rotationAngle);
				float SinAngle = sin(rotationAngle);
				// Rotate using the orthogonal axes
				float3 R = UAxis * CosAngle + VAxis * SinAngle;
				// Reconstruct the rotated world space position
				float3 RotatedPosition = ClosestPointOnAxis + R;
				// Convert from position to a position offset
				return RotatedPosition - Position;
			}

			float3 WPOWind(appdata v,float alphaWPO)
			{
				//WPOWind Rotate about axis WPO compatible with instanced/grouped static meshes
				//float2 wordCoordsXY = mul(unity_ObjectToWorld, v.vertex).xy / _WPOWaveTile;
				float2 wordCoordsXY =  v.vertex.xy / _WPOWaveTile;
				//float2 wordCoordsXY =  v.vertex.xy / _WPOWaveTile;
				//Panner X/Y Axis move 
				float3 pannerColorX = UnpackNormal(tex2Dlod(_WPOWaveSample, float4((wordCoordsXY + _Time.x * 0.3 * _WPOWaveSpeed * float2(_WPOXSpeed, 0)), 0, 0))).rgb;
				//pannerColorX = float3(pannerColorX.x, pannerColorX.z, pannerColorX.y);
				float3 pannerColorY = UnpackNormal(tex2Dlod(_WPOWaveSample, float4((wordCoordsXY + _Time.x * 0.3 * _WPOWaveSpeed * float2(0, _WPOYSpeed)), 0, 0))).rgb;
				//pannerColorY = float3(pannerColorY.x, pannerColorY.z, pannerColorY.y);
				
				//get the rotation angle
				float  pannerAngle = (normalize(pannerColorX + pannerColorY)).r;
				//float3 vertexNormal = mul(v.normal, (float3x3)unity_WorldToObject);
				float3 vertexNormal = v.normal;
				float3 rotarionNormal = float3(vertexNormal.x, vertexNormal.z, -vertexNormal.y);
				float3 WPOWaveAmountXYZ = RotationAroundAxis(rotarionNormal, pannerAngle, fixed3(0, 0, -50), fixed3(0, 0, 0));
				float3 WPOFloat3 = float3(WPOWaveAmountXYZ.x * 0.02, WPOWaveAmountXYZ.z * 0.02, WPOWaveAmountXYZ.y * 0.02);
				//float3 WPOFloat3 = float3(WPOWaveAmountXYZ.x * 0.02, WPOWaveAmountXYZ.y * 0.02, -WPOWaveAmountXYZ.z * 0.02);
				return lerp(fixed3(0, 0, 0), WPOFloat3, alphaWPO);
			}

			float3 PivotPainterWind(appdata v, float pivotAlpha, float3 pivotPosition)
			{
				float pivotRandomValue = v.uv.g;
				//float WPOWindFloat = WPOWind(v, pivotAlpha);
				float3 windVector = lerp(fixed3(1, 0, 0), fixed3(0, 1, 0), v.uv3.g);
				float3 normalWindVector = cross(normalize(windVector),fixed3(0,0,1));
				float2 pivotCoordsXY = float2(dot(pivotPosition, normalWindVector),dot(windVector, pivotPosition)) / _PivotWindNoiseScale;
				float timePivotSpeed = _Time.x * _PivotPainterWindSpeed + pivotAlpha;
				float2 unNew = pivotCoordsXY + float2(_PivotXSpeed, 0)*timePivotSpeed;
				
				float pannerColorG = (tex2Dlod(_WindNoiseTexture, float4(unNew, 0, 0))).g;
				float pivotRotarionAngle = mul(lerp(_PivotWindMax, _PivotWindMin, pannerColorG), lerp(fixed(1), fixed(0), pivotAlpha));
				//float3 pivotFloat3 = RotationAroundAxis(normalWindVector, pivotRotarionAngle, pivotPosition, mul(unity_ObjectToWorld, v.vertex).xyz);
				float3 pivotFloat3 = RotationAroundAxis(normalWindVector, pivotRotarionAngle, pivotPosition, v.vertex.xyz);
				return float3(pivotFloat3.x, pivotFloat3.z, pivotFloat3.y);
			}

			v2f vert (appdata v)
			{
				v2f o;
				//get the vertex world position offest
				//float3 pivotPosition = mul(float3(v.uv2, v.uv3.x) + fixed3(0, -1, 0), (float3x3)unity_WorldToObject);
				float3 pivotPosition = float3(v.uv2, v.uv3.x) + fixed3(0, -1, 0);
				float globalAlpha = v.vertex.a;
				float3 pivot = PivotPainterWind(v, globalAlpha, pivotPosition);
				float3 wind = WPOWind(v, globalAlpha);
				float3 worldPositionOffset = pivot + wind;

				////Take the input of a normal map
				//float3 fernIce = mul(tex2D(_FernIceNoiseN, v.uv * 10).xyz, fixed3(1, 1, 0));
				//float3 fernN = mul(tex2D(_FernN, v.uv).xyz, 2);
				//float3 fernTilling = mul(tex2D(_FernTillingNoiseN, v.uv * 2).xyz, fixed3(1, 1, 0));
				//float3 fernNormal = normalize(fernIce + fernN + fernTilling);
				
				/*mul(pow(tex2D(_MainTex, v.uv).g, 3), 4);*/
				
				//o.vertex = mul(UNITY_MATRIX_VP, mul(unity_ObjectToWorld, v.vertex + float4(wind, 1.0)));
				float roughness = tex2D(_MainTex, v.uv*10).r;
				
				o.vertex = UnityObjectToClipPos(v.vertex + float4(wind, 1.0));
				//o.vertex = float4(WPOWind(v, globalAlpha), 1.0);
				o.uv = v.uv;
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				fixed4 col = tex2D(_MainTex, i.uv);
				//float3 color1 = lerp(mul(tex2D(_MainTex, i.uv).xyz, fixed(0.536, 0.615, 1)), (mul(tex2D(_MainTex, i.uv).xyz, 3)*0.3, fresnel(_FernN));
				//fixed4  color2 = float4(color1, _MaxTex.a);
				//get the material subsurtface color
				/*float3 subSurfaceColor = mul(tex2D(_MainTex, i.uv), fixed3(0.0379, 0.04, 0.1));*/
				
				// just invert the colors
				col.rgb = 1 - col.rgb;
				return col;
			}
			ENDCG
		}
	}
}
