// Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)

#ifndef AVATAR_CUSTOM_INCLUDED
#define AVATAR_CUSTOM_INCLUDED

// TODO*: Documentation here

#include "AvatarCustomTypes.cginc"
#include "OvrAvatarVertexFetch.hlsl"

void OvrPopulateVertexDataFromExternalTexture(bool hasTangents, bool applyOffsetAndBias, inout OvrVertexData vertData) {
  const uint vertexId = vertData.vertexId;

  int numAttributes = 2;

  if (hasTangents) {
    numAttributes = 3;
    vertData.tangent = OvrGetVertexTangentFromTexture(
      vertexId,
      numAttributes,
      applyOffsetAndBias,
      _OvrAttributeInterpolationValue);
  }

  vertData.position = OvrGetVertexPositionFromTexture(
    vertexId,
    numAttributes,
    applyOffsetAndBias,
    _OvrAttributeInterpolationValue);
  vertData.normal = OvrGetVertexNormalFromTexture(
    vertexId,
    numAttributes,
    applyOffsetAndBias,
    _OvrAttributeInterpolationValue);
}

#ifdef OVR_SUPPORT_EXTERNAL_BUFFERS
  void OvrPopulateVertexDataFromExternalBuffers(bool hasTangents, bool interpolateAttributes, inout OvrVertexData vertData) {
    const uint vertexId = vertData.vertexId;

    [branch]
    if (interpolateAttributes) {
      const float lerpValue = _OvrAttributeInterpolationValue;

      const uint numPosEntriesPerVert = 2u;
      const uint numFrenetEntriesPerVert = hasTangents ? 4u : 2u;

      const uint posEntryIndex = vertexId * numPosEntriesPerVert;
      const uint normEntryIndex = vertexId * numFrenetEntriesPerVert;

      // Grab the latest animation frame's position as well as the previous animation frame's position
      // Apriori knowledge that previous animation frame's position entry is next to this one
      const float3 pos0 = OvrGetPositionEntryFromExternalBuffer(posEntryIndex);
      const float3 pos1 = OvrGetPositionEntryFromExternalBuffer(posEntryIndex + 1u);
      const float3 norm0 = OvrGetFrenetEntryFromExternalBuffer(normEntryIndex);
      const float3 norm1 = OvrGetFrenetEntryFromExternalBuffer(normEntryIndex + 1u);

      vertData.position = float4(lerp(pos0, pos1, lerpValue), 1.0);
      vertData.normal = lerp(norm0, norm1, lerpValue);

      [branch]
      if (hasTangents) {
        const uint tanEntryIndex = normEntryIndex + 2u;
        const float4 tan0 = OvrGetFrenetEntryFromExternalBuffer(tanEntryIndex);
        const float3 tan1 = OvrGetFrenetEntryFromExternalBuffer(tanEntryIndex + 1u).xyz;

        vertData.tangent = float4(lerp(tan0, tan1, lerpValue), tan0.w);
      }
    } else {
      const uint numFrenetEntriesPerVert = hasTangents ? 2u : 1u;

      const uint posEntryIndex = vertexId;
      const uint normEntryIndex = vertexId * numFrenetEntriesPerVert;

      vertData.position = float4(OvrGetPositionEntryFromExternalBuffer(posEntryIndex), 1.0);
      vertData.normal = OvrGetFrenetEntryFromExternalBuffer(normEntryIndex);

      [branch]
      if (hasTangents) {
        const uint tanEntryIndex = normEntryIndex + 1u;
        vertData.tangent = OvrGetFrenetEntryFromExternalBuffer(tanEntryIndex);
      }
    }
  }
#endif


// First, define a function which takes explicit data types, then define a macro which expands
// an arbitrary vertex structure definition into the function parameters
OvrVertexData OvrCreateVertexData(
  float4 vPos,
  float3 vNorm,
  float4 vTan,
  uint vertexId)
{
  // Backward compatibility/optimization support if application is ok with additional variants
  // The shader compiler should optimize out branches that are based on static const values
#if defined(OVR_VERTEX_FETCH_VERT_BUFFER)
  static const int fetchMode = OVR_VERTEX_FETCH_MODE_STRUCT;
#elif defined(OVR_VERTEX_FETCH_EXTERNAL_BUFFER) && defined(OVR_SUPPORT_EXTERNAL_BUFFERS)
  static const int fetchMode = OVR_VERTEX_FETCH_MODE_EXTERNAL_BUFFERS;
#elif defined(OVR_VERTEX_FETCH_TEXTURE) || defined(OVR_VERTEX_FETCH_TEXTURE_UNORM)
  static const int fetchMode = OVR_VERTEX_FETCH_MODE_EXTERNAL_TEXTURES;
#else
  const int fetchMode = _OvrVertexFetchMode;
#endif

#if defined(OVR_VERTEX_HAS_TANGENTS)
  static const bool hasTangents = true;
#elif defined(OVR_VERTEX_NO_TANGENTS)
  static const bool hasTangents = false;
#else
  const bool hasTangents = _OvrHasTangents;
#endif

#if defined(OVR_VERTEX_INTERPOLATE_ATTRIBUTES)
  static const bool interpolateAttributes = true;
#elif defined(OVR_VERTEX_DO_NOT_INTERPOLATE_ATTRIBUTES)
  static const bool interpolateAttributes = false;
#else
  const bool interpolateAttributes = _OvrInterpolateAttributes;
#endif

  OvrVertexData vertData;
  vertData.vertexId = vertexId;
  vertData.position = vPos;
  vertData.normal = vNorm;
  vertData.tangent = vTan;

  // Hope that the compiler branches here. The [branch] attribute here seems to lead to compile
  // probably due to "use of gradient function, such as tex3d"
  if (fetchMode == OVR_VERTEX_FETCH_MODE_EXTERNAL_TEXTURES) {
    // Backwards compatibility with existing keywords.
    // OVR_VERTEX_FETCH_TEXTURE_UNORM means normalized attributes, OVR_VERTEX_FETCH_TEXTURE
    // means not normalized. Neither keyword means that the "fetch mode" was via
    // a property and there is no property for normalized attributes or not. So in that
    // scenario, always apply offset and bias
    #if defined(OVR_VERTEX_FETCH_TEXTURE)
      static const bool applyOffsetAndBias = false;
    #else
      static const bool applyOffsetAndBias = true;
    #endif

    OvrPopulateVertexDataFromExternalTexture(hasTangents, applyOffsetAndBias, vertData);
// #ifdef OVR_SUPPORT_EXTERNAL_BUFFERS
//   } else if (fetchMode == OVR_VERTEX_FETCH_MODE_EXTERNAL_BUFFERS) {
//     OvrPopulateVertexDataFromExternalBuffers(hasTangents, interpolateAttributes, vertData);
// #endif
  }

  return vertData;
} // end OvrCreateVertexData

#define OVR_CREATE_VERTEX_DATA(v) \
  OvrCreateVertexData( \
    OVR_GET_VERTEX_POSITION_FIELD(v), \
    OVR_GET_VERTEX_NORMAL_FIELD(v), \
    OVR_GET_VERTEX_TANGENT_FIELD(v), \
    OVR_GET_VERTEX_VERT_ID_FIELD(v))

// Initialization for "required fields" in the vertex input struct for the vertex shader.
// Written as a macro to be expandable in future
#define OVR_INITIALIZE_VERTEX_FIELDS(v)

// Initializes the fields for a defined default vertex structure
void OvrInitializeDefaultAppdata(inout OvrDefaultAppdata v) {
  OVR_INITIALIZE_VERTEX_FIELDS(v);
  UNITY_SETUP_INSTANCE_ID(v);
}

// Initializes the fields for a defined default vertex structure
// and creates the OvrVertexData for the vertex as well as overrides
// applicable fields in OvrDefaultAppdata with fields from OvrVertexData.
// Mainly useful in surface shader vertex functions.
OvrVertexData OvrInitializeDefaultAppdataAndPopulateWithVertexData(inout OvrDefaultAppdata v) {
  OvrInitializeDefaultAppdata(v);
  OvrVertexData vertexData = OVR_CREATE_VERTEX_DATA(v);

  OVR_SET_VERTEX_POSITION_FIELD(v, vertexData.position);
  OVR_SET_VERTEX_NORMAL_FIELD(v, vertexData.normal);
  OVR_SET_VERTEX_TANGENT_FIELD(v, vertexData.tangent);

  return vertexData;
}

#endif // AVATAR_CUSTOM_INCLUDED
