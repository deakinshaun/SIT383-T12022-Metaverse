Shader "Custom/StereoMaterial"
{
    Properties
    {
        LeftTex("Texture",2D) = "White"{}
        RightTex("Texture",2D) = "White"{}
    }
        SubShader
    {
        Tags { "Queue" = "Transparent"
    "RenderType" = "Transparent"}
        LOD 100
        Cull off
        Zwrite off
        Blend SrcAlpha OneMinusSrcAlpha

        Pass{
            CGPROGRAM
           #pragma vertex vert

        #pragma fragment frag


         #include "UnityCG.cginc"
     struct appdata
    {
        float4  vertex:
POSITION;
        float2 uv:TEXCOORD0;
    };
    struct v2f
    {
        float4 objvertex: 
TEXCOORD1;
        float2 uv: TEXCOORD0;
        float4 vertex:
SV_POSITION;
    };
    sampler2D LeftTex;
    sampler2D RightTex;
    float4 LeftTex_ST;
    float4 RightTex_ST;

    v2f vert(appdata v)
    {
        v2f o;
        o.objvertex = v.vertex;
        o.vertex = UnityObjectToClipPos(v.vertex);
        o.uv = TRANSFORM_TEX(v.uv, LeftTex);
        return o;
    }
    fixed4 frag (v2f i) : SV_Target
    {
        fixed2 uv;
    float xz =
        sqrt(i.objvertex.x * i.objvertex.x + i.objvertex.z * i.objvertex.z);
    float latitude = atan2(i.objvertex.y, xz);
    float longtitude = atan2(i.objvertex.z, i.objvertex.x);
    uv.y = 0.5 + latitude / 3.14159;
    uv.x = longtitude / (2 * 3.14159);
    fixed4 col;
    if (unity_StereoEyeIndex > 0)
    {
        col = tex2D(LeftTex, uv);

    }
    else
    {
        col = tex2D(RightTex, uv);
    }
    return col;
    }
        ENDCG
    }
}
}
