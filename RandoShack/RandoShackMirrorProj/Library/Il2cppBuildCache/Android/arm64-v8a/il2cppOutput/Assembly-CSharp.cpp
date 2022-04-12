#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<PoseSkeleton/SkeletonBone>
struct List_1_t688ED07644F422D31DF8155B574BCB5AB9379052;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;
// PoseSkeleton/SkeletonBone[]
struct SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// FetchPose
struct FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PoseSkeleton
struct PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62;
// FetchPose/<extractFile>d__19
struct U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768;
// FetchPose/<prepareModel>d__15
struct U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PoseSkeleton/SkeletonBone
struct SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t688ED07644F422D31DF8155B574BCB5AB9379052_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral10A23FAEF258DD57935B9AB04913E4CB319D4C37;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral28937B46C4D59836E586CAEC99D0E804D3E72B85;
IL2CPP_EXTERN_C String_t* _stringLiteral7F440119CE2795C564494BFBB78B1ED59EE798D0;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB72C442A3E50CB1CC17C74D0F3E2040632AC7F23;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralED10A1035D0CA70A166B71635269E3D0EE92AB99;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA18FD564E4CF31FE3CA6AA4B251580242BC48A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8E57EDFD90B1726B568251A48A29CE9D0EC1009A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7EB4E533606DCD0A348C715552C7C191BD596A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m04E4E8B4F7110CA9A757640D94B50CFD2053ECD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3C9DEDC5F63C6BA37EDA165E25BE63575FC2C317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CextractFileU3Ed__19_System_Collections_IEnumerator_Reset_mEB59019985849846AB03B0EC135F5EC14DDEAA77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CprepareModelU3Ed__15_System_Collections_IEnumerator_Reset_mA75AE42505ECB6BE1D80FB4E123EE1D586A5E05F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BodyPart_t770A4E4A5B01778DF8887C534EBC94E851E6BDF9_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<PoseSkeleton/SkeletonBone>
struct List_1_t688ED07644F422D31DF8155B574BCB5AB9379052  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052, ____items_1)); }
	inline SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA* get__items_1() const { return ____items_1; }
	inline SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t688ED07644F422D31DF8155B574BCB5AB9379052_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052_StaticFields, ____emptyArray_5)); }
	inline SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SkeletonBoneU5BU5D_t058A1E0BB466D1A488D353C46BAABD34996C18AA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// FetchPose/<extractFile>d__19
struct U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768  : public RuntimeObject
{
public:
	// System.Int32 FetchPose/<extractFile>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FetchPose/<extractFile>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String FetchPose/<extractFile>d__19::assetPath
	String_t* ___assetPath_2;
	// System.String FetchPose/<extractFile>d__19::assetFile
	String_t* ___assetFile_3;
	// System.String FetchPose/<extractFile>d__19::<sourcePath>5__2
	String_t* ___U3CsourcePathU3E5__2_4;
	// System.String FetchPose/<extractFile>d__19::<destinationPath>5__3
	String_t* ___U3CdestinationPathU3E5__3_5;
	// UnityEngine.WWW FetchPose/<extractFile>d__19::<w>5__4
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * ___U3CwU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_assetPath_2() { return static_cast<int32_t>(offsetof(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768, ___assetPath_2)); }
	inline String_t* get_assetPath_2() const { return ___assetPath_2; }
	inline String_t** get_address_of_assetPath_2() { return &___assetPath_2; }
	inline void set_assetPath_2(String_t* value)
	{
		___assetPath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetPath_2), (void*)value);
	}

	inline static int32_t get_offset_of_assetFile_3() { return static_cast<int32_t>(offsetof(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768, ___assetFile_3)); }
	inline String_t* get_assetFile_3() const { return ___assetFile_3; }
	inline String_t** get_address_of_assetFile_3() { return &___assetFile_3; }
	inline void set_assetFile_3(String_t* value)
	{
		___assetFile_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetFile_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsourcePathU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768, ___U3CsourcePathU3E5__2_4)); }
	inline String_t* get_U3CsourcePathU3E5__2_4() const { return ___U3CsourcePathU3E5__2_4; }
	inline String_t** get_address_of_U3CsourcePathU3E5__2_4() { return &___U3CsourcePathU3E5__2_4; }
	inline void set_U3CsourcePathU3E5__2_4(String_t* value)
	{
		___U3CsourcePathU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsourcePathU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdestinationPathU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768, ___U3CdestinationPathU3E5__3_5)); }
	inline String_t* get_U3CdestinationPathU3E5__3_5() const { return ___U3CdestinationPathU3E5__3_5; }
	inline String_t** get_address_of_U3CdestinationPathU3E5__3_5() { return &___U3CdestinationPathU3E5__3_5; }
	inline void set_U3CdestinationPathU3E5__3_5(String_t* value)
	{
		___U3CdestinationPathU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdestinationPathU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768, ___U3CwU3E5__4_6)); }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * get_U3CwU3E5__4_6() const { return ___U3CwU3E5__4_6; }
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 ** get_address_of_U3CwU3E5__4_6() { return &___U3CwU3E5__4_6; }
	inline void set_U3CwU3E5__4_6(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * value)
	{
		___U3CwU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwU3E5__4_6), (void*)value);
	}
};


// FetchPose/<prepareModel>d__15
struct U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1  : public RuntimeObject
{
public:
	// System.Int32 FetchPose/<prepareModel>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FetchPose/<prepareModel>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// FetchPose FetchPose/<prepareModel>d__15::<>4__this
	FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * ___U3CU3E4__this_2;
	// System.String FetchPose/<prepareModel>d__15::<modelfile>5__2
	String_t* ___U3CmodelfileU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1, ___U3CU3E4__this_2)); }
	inline FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmodelfileU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1, ___U3CmodelfileU3E5__2_3)); }
	inline String_t* get_U3CmodelfileU3E5__2_3() const { return ___U3CmodelfileU3E5__2_3; }
	inline String_t** get_address_of_U3CmodelfileU3E5__2_3() { return &___U3CmodelfileU3E5__2_3; }
	inline void set_U3CmodelfileU3E5__2_3(String_t* value)
	{
		___U3CmodelfileU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmodelfileU3E5__2_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<PoseSkeleton/SkeletonBone>
struct Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D, ___list_0)); }
	inline List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * get_list_0() const { return ___list_0; }
	inline List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D, ___current_3)); }
	inline SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * get_current_3() const { return ___current_3; }
	inline SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WebCamKind
struct WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2 
{
public:
	// System.Int32 UnityEngine.WebCamKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PoseSkeleton/BodyPart
struct BodyPart_t770A4E4A5B01778DF8887C534EBC94E851E6BDF9 
{
public:
	// System.Int32 PoseSkeleton/BodyPart::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BodyPart_t770A4E4A5B01778DF8887C534EBC94E851E6BDF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* ___m_Resolutions_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthCameraName_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_DepthCameraName_1)); }
	inline String_t* get_m_DepthCameraName_1() const { return ___m_DepthCameraName_1; }
	inline String_t** get_address_of_m_DepthCameraName_1() { return &___m_DepthCameraName_1; }
	inline void set_m_DepthCameraName_1(String_t* value)
	{
		___m_DepthCameraName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DepthCameraName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_Kind_3() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Kind_3)); }
	inline int32_t get_m_Kind_3() const { return ___m_Kind_3; }
	inline int32_t* get_address_of_m_Kind_3() { return &___m_Kind_3; }
	inline void set_m_Kind_3(int32_t value)
	{
		___m_Kind_3 = value;
	}

	inline static int32_t get_offset_of_m_Resolutions_4() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Resolutions_4)); }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* get_m_Resolutions_4() const { return ___m_Resolutions_4; }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597** get_address_of_m_Resolutions_4() { return &___m_Resolutions_4; }
	inline void set_m_Resolutions_4(ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* value)
	{
		___m_Resolutions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resolutions_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};

// PoseSkeleton/SkeletonBone
struct SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5  : public RuntimeObject
{
public:
	// UnityEngine.GameObject PoseSkeleton/SkeletonBone::boneObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boneObject_0;
	// PoseSkeleton/BodyPart PoseSkeleton/SkeletonBone::from
	int32_t ___from_1;
	// PoseSkeleton/BodyPart PoseSkeleton/SkeletonBone::to
	int32_t ___to_2;

public:
	inline static int32_t get_offset_of_boneObject_0() { return static_cast<int32_t>(offsetof(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5, ___boneObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boneObject_0() const { return ___boneObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boneObject_0() { return &___boneObject_0; }
	inline void set_boneObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boneObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_from_1() { return static_cast<int32_t>(offsetof(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5, ___from_1)); }
	inline int32_t get_from_1() const { return ___from_1; }
	inline int32_t* get_address_of_from_1() { return &___from_1; }
	inline void set_from_1(int32_t value)
	{
		___from_1 = value;
	}

	inline static int32_t get_offset_of_to_2() { return static_cast<int32_t>(offsetof(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5, ___to_2)); }
	inline int32_t get_to_2() const { return ___to_2; }
	inline int32_t* get_address_of_to_2() { return &___to_2; }
	inline void set_to_2(int32_t value)
	{
		___to_2 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// FetchPose
struct FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material FetchPose::camTexMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___camTexMaterial_4;
	// UnityEngine.WebCamTexture FetchPose::webcamTexture
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___webcamTexture_5;
	// System.Int32 FetchPose::numPointsInPose
	int32_t ___numPointsInPose_6;
	// PoseSkeleton FetchPose::poseVisualizer
	PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * ___poseVisualizer_7;
	// System.Boolean FetchPose::dataReady
	bool ___dataReady_8;
	// System.Int32 FetchPose::currentCamera
	int32_t ___currentCamera_9;
	// UnityEngine.UI.Text FetchPose::outputText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___outputText_10;
	// System.Boolean FetchPose::overrideCapture
	bool ___overrideCapture_11;

public:
	inline static int32_t get_offset_of_camTexMaterial_4() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___camTexMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_camTexMaterial_4() const { return ___camTexMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_camTexMaterial_4() { return &___camTexMaterial_4; }
	inline void set_camTexMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___camTexMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camTexMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_webcamTexture_5() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___webcamTexture_5)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_webcamTexture_5() const { return ___webcamTexture_5; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_webcamTexture_5() { return &___webcamTexture_5; }
	inline void set_webcamTexture_5(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___webcamTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webcamTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_numPointsInPose_6() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___numPointsInPose_6)); }
	inline int32_t get_numPointsInPose_6() const { return ___numPointsInPose_6; }
	inline int32_t* get_address_of_numPointsInPose_6() { return &___numPointsInPose_6; }
	inline void set_numPointsInPose_6(int32_t value)
	{
		___numPointsInPose_6 = value;
	}

	inline static int32_t get_offset_of_poseVisualizer_7() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___poseVisualizer_7)); }
	inline PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * get_poseVisualizer_7() const { return ___poseVisualizer_7; }
	inline PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 ** get_address_of_poseVisualizer_7() { return &___poseVisualizer_7; }
	inline void set_poseVisualizer_7(PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * value)
	{
		___poseVisualizer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseVisualizer_7), (void*)value);
	}

	inline static int32_t get_offset_of_dataReady_8() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___dataReady_8)); }
	inline bool get_dataReady_8() const { return ___dataReady_8; }
	inline bool* get_address_of_dataReady_8() { return &___dataReady_8; }
	inline void set_dataReady_8(bool value)
	{
		___dataReady_8 = value;
	}

	inline static int32_t get_offset_of_currentCamera_9() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___currentCamera_9)); }
	inline int32_t get_currentCamera_9() const { return ___currentCamera_9; }
	inline int32_t* get_address_of_currentCamera_9() { return &___currentCamera_9; }
	inline void set_currentCamera_9(int32_t value)
	{
		___currentCamera_9 = value;
	}

	inline static int32_t get_offset_of_outputText_10() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___outputText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_outputText_10() const { return ___outputText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_outputText_10() { return &___outputText_10; }
	inline void set_outputText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___outputText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputText_10), (void*)value);
	}

	inline static int32_t get_offset_of_overrideCapture_11() { return static_cast<int32_t>(offsetof(FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E, ___overrideCapture_11)); }
	inline bool get_overrideCapture_11() const { return ___overrideCapture_11; }
	inline bool* get_address_of_overrideCapture_11() { return &___overrideCapture_11; }
	inline void set_overrideCapture_11(bool value)
	{
		___overrideCapture_11 = value;
	}
};


// PoseSkeleton
struct PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PoseSkeleton::pointMarkerTemplate
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pointMarkerTemplate_4;
	// UnityEngine.GameObject PoseSkeleton::boneTemplate
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boneTemplate_5;
	// UnityEngine.GameObject[] PoseSkeleton::markers
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___markers_6;
	// System.Int32 PoseSkeleton::numPointsInPose
	int32_t ___numPointsInPose_7;
	// System.Collections.Generic.List`1<PoseSkeleton/SkeletonBone> PoseSkeleton::bones
	List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * ___bones_8;

public:
	inline static int32_t get_offset_of_pointMarkerTemplate_4() { return static_cast<int32_t>(offsetof(PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55, ___pointMarkerTemplate_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pointMarkerTemplate_4() const { return ___pointMarkerTemplate_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pointMarkerTemplate_4() { return &___pointMarkerTemplate_4; }
	inline void set_pointMarkerTemplate_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pointMarkerTemplate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointMarkerTemplate_4), (void*)value);
	}

	inline static int32_t get_offset_of_boneTemplate_5() { return static_cast<int32_t>(offsetof(PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55, ___boneTemplate_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boneTemplate_5() const { return ___boneTemplate_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boneTemplate_5() { return &___boneTemplate_5; }
	inline void set_boneTemplate_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boneTemplate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneTemplate_5), (void*)value);
	}

	inline static int32_t get_offset_of_markers_6() { return static_cast<int32_t>(offsetof(PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55, ___markers_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_markers_6() const { return ___markers_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_markers_6() { return &___markers_6; }
	inline void set_markers_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___markers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markers_6), (void*)value);
	}

	inline static int32_t get_offset_of_numPointsInPose_7() { return static_cast<int32_t>(offsetof(PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55, ___numPointsInPose_7)); }
	inline int32_t get_numPointsInPose_7() const { return ___numPointsInPose_7; }
	inline int32_t* get_address_of_numPointsInPose_7() { return &___numPointsInPose_7; }
	inline void set_numPointsInPose_7(int32_t value)
	{
		___numPointsInPose_7 = value;
	}

	inline static int32_t get_offset_of_bones_8() { return static_cast<int32_t>(offsetof(PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55, ___bones_8)); }
	inline List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * get_bones_8() const { return ___bones_8; }
	inline List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 ** get_address_of_bones_8() { return &___bones_8; }
	inline void set_bones_8(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * value)
	{
		___bones_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  m_Items[1];

public:
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70_gshared (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_gshared (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___nativeArray0, const RuntimeMethod* method);
// !0[] Unity.Collections.NativeArray`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030_gshared (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C (const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4 (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * __this, const RuntimeMethod* method);
// System.String UnityEngine.WebCamTexture::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamTexture_get_deviceName_m607F286D9E9EB13ABC2AA3534BF61F0199AA18B5 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m55FF77D033EF17D83A6B717418EBA39F174B5708 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_deviceName_m23C47F0425912AED7601687E9B1578C3012ED4E4 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void FetchPose::showCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_showCameras_mD3ABDC82986AED9D34CE5ACA4B4F3B4BC5BB4CED (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m6819D615D58318888B7B90D47A7252A81894344F (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator FetchPose::prepareModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchPose_prepareModel_mCAE5AEBF51FDFFD5E0B10456E89608BB9C50194B (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void FetchPose/<prepareModel>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprepareModelU3Ed__15__ctor_m061862F92A1B8F6CC43E68CE9FDAA04FE83E53A7 (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70 (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_m7D61B2296A172A4C4636D325CAE5757D60170B6F (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_gshared)(___nativeArray0, method);
}
// System.Int32 FetchPose::computePose(System.IntPtr,System.Int32,System.Int32,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchPose_computePose_mC41968F2223017E541C2CEEAB0A074CBC60A3760 (intptr_t ___texture0, int32_t ___w1, int32_t ___h2, float* ___results3, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !0[] Unity.Collections.NativeArray`1<System.Single>::ToArray()
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030 (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *, const RuntimeMethod*))NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030_gshared)(__this, method);
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Texture2D::GetRawTextureData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Texture2D_GetRawTextureData_m60C0B5EF034F31FE1824B31AC1DE71042E2ACB55 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 FetchPose::computePoseData(System.Byte[],System.Int32,System.Int32,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchPose_computePoseData_mA8026BBF6D1379E2D47AE761CF53F37135DCA956 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___imageData0, int32_t ___w1, int32_t ___h2, float* ___results3, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Single[] FetchPose::retrievePoseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FetchPose_retrievePoseData_mFB94676144D7F67AA1ADBCD1861447EBAA54645D (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void PoseSkeleton::updatePose(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSkeleton_updatePose_mCFBD26278A193CA5899431825F1598D03C6AE15D (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, const RuntimeMethod* method);
// System.Void FetchPose/<extractFile>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextractFileU3Ed__19__ctor_mB86A57298234513D609F830A9CF67E43B9B52D45 (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<PoseSkeleton/SkeletonBone>::.ctor()
inline void List_1__ctor_m3C9DEDC5F63C6BA37EDA165E25BE63575FC2C317 (List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void PoseSkeleton/SkeletonBone::.ctor(PoseSkeleton/BodyPart,PoseSkeleton/BodyPart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * __this, int32_t ___f0, int32_t ___t1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<PoseSkeleton/SkeletonBone>::Add(!0)
inline void List_1_Add_m55F4310CA420A1B671273392130758D11752179C (List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * __this, SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 *, SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.Vector3 PoseSkeleton::poseToVector(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PoseSkeleton_poseToVector_mE5658A2BD27B79E1894100C2316598EB33E17C62 (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, int32_t ___i1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<PoseSkeleton/SkeletonBone>::GetEnumerator()
inline Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D  List_1_GetEnumerator_m04E4E8B4F7110CA9A757640D94B50CFD2053ECD7 (List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D  (*) (List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<PoseSkeleton/SkeletonBone>::get_Current()
inline SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * Enumerator_get_Current_m7EB4E533606DCD0A348C715552C7C191BD596A6A_inline (Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D * __this, const RuntimeMethod* method)
{
	return ((  SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * (*) (Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m3D2B71DA51EA167C367FD275B7B28241C565F127 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<PoseSkeleton/SkeletonBone>::MoveNext()
inline bool Enumerator_MoveNext_m8E57EDFD90B1726B568251A48A29CE9D0EC1009A (Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PoseSkeleton/SkeletonBone>::Dispose()
inline void Enumerator_Dispose_mA18FD564E4CF31FE3CA6AA4B251580242BC48A3C (Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void PoseSkeleton::drawPosePoints(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSkeleton_drawPosePoints_m05904D426509289121811EE7CB9F058401FAEE86 (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, const RuntimeMethod* method);
// System.Void PoseSkeleton::drawSkeleton(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSkeleton_drawSkeleton_m22593A66854263933330A262DD01B8CC21E733F7 (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWW::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator FetchPose::extractFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchPose_extractFile_m8DC7F8BC9940D0475C48D9D2A468B46A35228BAD (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, String_t* ___assetPath0, String_t* ___assetFile1, const RuntimeMethod* method);
// System.Void FetchPose::initPose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_initPose_mDBD9A37B8F05843276D55A8D0372F659585EAEC7 (String_t* ___modelfile0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_poseinterface_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL initPose(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_poseinterface_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL computePose(intptr_t, int32_t, int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_poseinterface_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL computePoseData(uint8_t*, int32_t, int32_t, float*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FetchPose::initPose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_initPose_mDBD9A37B8F05843276D55A8D0372F659585EAEC7 (String_t* ___modelfile0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_poseinterface_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("poseinterface"), "initPose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___modelfile0' to native representation
	char* ____modelfile0_marshaled = NULL;
	____modelfile0_marshaled = il2cpp_codegen_marshal_string(___modelfile0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_poseinterface_INTERNAL
	reinterpret_cast<PInvokeFunc>(initPose)(____modelfile0_marshaled);
	#else
	il2cppPInvokeFunc(____modelfile0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___modelfile0' native representation
	il2cpp_codegen_marshal_free(____modelfile0_marshaled);
	____modelfile0_marshaled = NULL;

}
// System.Int32 FetchPose::computePose(System.IntPtr,System.Int32,System.Int32,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchPose_computePose_mC41968F2223017E541C2CEEAB0A074CBC60A3760 (intptr_t ___texture0, int32_t ___w1, int32_t ___h2, float* ___results3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_poseinterface_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("poseinterface"), "computePose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_poseinterface_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(computePose)(___texture0, ___w1, ___h2, ___results3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___texture0, ___w1, ___h2, ___results3);
	#endif

	return returnValue;
}
// System.Int32 FetchPose::computePoseData(System.Byte[],System.Int32,System.Int32,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FetchPose_computePoseData_mA8026BBF6D1379E2D47AE761CF53F37135DCA956 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___imageData0, int32_t ___w1, int32_t ___h2, float* ___results3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t, int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_poseinterface_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("poseinterface"), "computePoseData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___imageData0' to native representation
	uint8_t* ____imageData0_marshaled = NULL;
	if (___imageData0 != NULL)
	{
		____imageData0_marshaled = reinterpret_cast<uint8_t*>((___imageData0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_poseinterface_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(computePoseData)(____imageData0_marshaled, ___w1, ___h2, ___results3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____imageData0_marshaled, ___w1, ___h2, ___results3);
	#endif

	return returnValue;
}
// System.Void FetchPose::toggleCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_toggleCapture_mDED3840686FABD0CEB9896C98E3337EE5824FB2C (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	{
		// overrideCapture = !overrideCapture;
		bool L_0 = __this->get_overrideCapture_11();
		__this->set_overrideCapture_11((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void FetchPose::showCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_showCameras_mD3ABDC82986AED9D34CE5ACA4B4F3B4BC5BB4CED (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* V_0 = NULL;
	int32_t V_1 = 0;
	WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_2 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_3 = NULL;
	{
		// outputText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_outputText_10();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// foreach (WebCamDevice d in WebCamTexture.devices)
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_1;
		L_1 = WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C(/*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_006d;
	}

IL_001a:
	{
		// foreach (WebCamDevice d in WebCamTexture.devices)
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// outputText.text += d.name + (d.name == webcamTexture.deviceName ? "*" : "") + "\n";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_outputText_10();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		String_t* L_9;
		L_9 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_2), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_2), /*hidden argument*/NULL);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_11 = __this->get_webcamTexture_5();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = WebCamTexture_get_deviceName_m607F286D9E9EB13ABC2AA3534BF61F0199AA18B5(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, L_12, /*hidden argument*/NULL);
		G_B2_0 = L_9;
		G_B2_1 = L_8;
		G_B2_2 = L_7;
		if (L_13)
		{
			G_B3_0 = L_9;
			G_B3_1 = L_8;
			G_B3_2 = L_7;
			goto IL_0055;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		goto IL_005a;
	}

IL_0055:
	{
		G_B4_0 = _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
	}

IL_005a:
	{
		String_t* L_14;
		L_14 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B4_2, G_B4_1, G_B4_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		NullCheck(G_B4_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_3, L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_006d:
	{
		// foreach (WebCamDevice d in WebCamTexture.devices)
		int32_t L_16 = V_1;
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FetchPose::nextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_nextCamera_mC8F3415B969DB31F97C2D6FFAAF4C9322EF07C0A (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	{
		// currentCamera = (currentCamera + 1) %
		// WebCamTexture.devices.Length;
		int32_t L_0 = __this->get_currentCamera_9();
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_1;
		L_1 = WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C(/*hidden argument*/NULL);
		NullCheck(L_1);
		__this->set_currentCamera_9(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))));
		// webcamTexture.Stop();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_2 = __this->get_webcamTexture_5();
		NullCheck(L_2);
		WebCamTexture_Stop_m55FF77D033EF17D83A6B717418EBA39F174B5708(L_2, /*hidden argument*/NULL);
		// webcamTexture.deviceName = WebCamTexture.devices[currentCamera].name;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_3 = __this->get_webcamTexture_5();
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_4;
		L_4 = WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C(/*hidden argument*/NULL);
		int32_t L_5 = __this->get_currentCamera_9();
		NullCheck(L_4);
		String_t* L_6;
		L_6 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		NullCheck(L_3);
		WebCamTexture_set_deviceName_m23C47F0425912AED7601687E9B1578C3012ED4E4(L_3, L_6, /*hidden argument*/NULL);
		// webcamTexture.Play();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_7 = __this->get_webcamTexture_5();
		NullCheck(L_7);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_7, /*hidden argument*/NULL);
		// showCameras();
		FetchPose_showCameras_mD3ABDC82986AED9D34CE5ACA4B4F3B4BC5BB4CED(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FetchPose::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_Start_m1B6B336F8DCDADC10D4EE806FF599270A22EA3A9 (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webcamTexture = new WebCamTexture();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 *)il2cpp_codegen_object_new(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m6819D615D58318888B7B90D47A7252A81894344F(L_0, /*hidden argument*/NULL);
		__this->set_webcamTexture_5(L_0);
		// showCameras();
		FetchPose_showCameras_mD3ABDC82986AED9D34CE5ACA4B4F3B4BC5BB4CED(__this, /*hidden argument*/NULL);
		// camTexMaterial.mainTexture = webcamTexture;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_camTexMaterial_4();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_2 = __this->get_webcamTexture_5();
		NullCheck(L_1);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_1, L_2, /*hidden argument*/NULL);
		// webcamTexture.Play();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_3 = __this->get_webcamTexture_5();
		NullCheck(L_3);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_3, /*hidden argument*/NULL);
		// dataReady = false;
		__this->set_dataReady_8((bool)0);
		// StartCoroutine(prepareModel());
		RuntimeObject* L_4;
		L_4 = FetchPose_prepareModel_mCAE5AEBF51FDFFD5E0B10456E89608BB9C50194B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FetchPose::prepareModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchPose_prepareModel_mCAE5AEBF51FDFFD5E0B10456E89608BB9C50194B (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * L_0 = (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 *)il2cpp_codegen_object_new(U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1_il2cpp_TypeInfo_var);
		U3CprepareModelU3Ed__15__ctor_m061862F92A1B8F6CC43E68CE9FDAA04FE83E53A7(L_0, 0, /*hidden argument*/NULL);
		U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Single[] FetchPose::retrievePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FetchPose_retrievePose_m426DC80B3C9FD1B8A46FCCF884A4D6919ADA5699 (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28937B46C4D59836E586CAEC99D0E804D3E72B85);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// NativeArray<float> pose = new NativeArray<float>
		//     (numPointsInPose * 3, Allocator.Temp);
		int32_t L_0 = __this->get_numPointsInPose_6();
		NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_0), ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)3)), 2, 1, /*hidden argument*/NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70_RuntimeMethod_var);
		// int result = computePose(webcamTexture.GetNativeTexturePtr(), webcamTexture.width, webcamTexture.height, (float*)NativeArrayUnsafeUtility.GetUnsafePtr(pose));
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_1 = __this->get_webcamTexture_5();
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = Texture_GetNativeTexturePtr_m7D61B2296A172A4C4636D325CAE5757D60170B6F(L_1, /*hidden argument*/NULL);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_3 = __this->get_webcamTexture_5();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_5 = __this->get_webcamTexture_5();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_7 = V_0;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		int32_t L_9;
		L_9 = FetchPose_computePose_mC41968F2223017E541C2CEEAB0A074CBC60A3760((intptr_t)L_2, L_4, L_6, (float*)(float*)L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// Debug.Log("Got result " + result + " " + pose[0] + " " + pose[1] + " " + pose[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral28937B46C4D59836E586CAEC99D0E804D3E72B85);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral28937B46C4D59836E586CAEC99D0E804D3E72B85);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		float L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_0))->___m_Buffer_0, 0);
		V_2 = L_16;
		String_t* L_17;
		L_17 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		float L_20;
		L_20 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_0))->___m_Buffer_0, 1);
		V_2 = L_20;
		String_t* L_21;
		L_21 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		float L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_0))->___m_Buffer_0, 2);
		V_2 = L_24;
		String_t* L_25;
		L_25 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		// return pose.ToArray();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27;
		L_27 = NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_0), /*hidden argument*/NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030_RuntimeMethod_var);
		return L_27;
	}
}
// System.Single[] FetchPose::retrievePoseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FetchPose_retrievePoseData_mFB94676144D7F67AA1ADBCD1861447EBAA54645D (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Texture2D image = new Texture2D(camTexMaterial.mainTexture.width, camTexMaterial.mainTexture.height, TextureFormat.RGB24, false);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_camTexMaterial_4();
		NullCheck(L_0);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_1;
		L_1 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_camTexMaterial_4();
		NullCheck(L_3);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_4;
		L_4 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_6, L_2, L_5, 3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		// RenderTexture renderTexture = new RenderTexture(camTexMaterial.mainTexture.width, camTexMaterial.mainTexture.height, 24);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_camTexMaterial_4();
		NullCheck(L_7);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8;
		L_8 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_camTexMaterial_4();
		NullCheck(L_10);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_11;
		L_11 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF(L_13, L_9, L_12, ((int32_t)24), /*hidden argument*/NULL);
		V_1 = L_13;
		// Graphics.Blit(camTexMaterial.mainTexture, renderTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_camTexMaterial_4();
		NullCheck(L_14);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_15;
		L_15 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_14, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_15, L_16, /*hidden argument*/NULL);
		// RenderTexture.active = renderTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = V_1;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_17, /*hidden argument*/NULL);
		// image.ReadPixels(new Rect(0, 0, renderTexture.width, renderTexture.height), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_23), (0.0f), (0.0f), ((float)((float)L_20)), ((float)((float)L_22)), /*hidden argument*/NULL);
		NullCheck(L_18);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_18, L_23, 0, 0, /*hidden argument*/NULL);
		// image.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24 = V_0;
		NullCheck(L_24);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_24, /*hidden argument*/NULL);
		// NativeArray<float> pose = new NativeArray<float>(numPointsInPose * 3, Allocator.Temp);
		int32_t L_25 = __this->get_numPointsInPose_6();
		NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_2), ((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)3)), 2, 1, /*hidden argument*/NativeArray_1__ctor_m2C60DAD578735166C8FE9CBB619760E1DBAF1C70_RuntimeMethod_var);
		// int result = computePoseData(image.GetRawTextureData(), image.width, image.height, (float*)NativeArrayUnsafeUtility.GetUnsafePtr(pose));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = V_0;
		NullCheck(L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
		L_27 = Texture2D_GetRawTextureData_m60C0B5EF034F31FE1824B31AC1DE71042E2ACB55(L_26, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_28);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  L_32 = V_2;
		void* L_33;
		L_33 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B(L_32, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m550475F35DC7B026E539C71A9CA2FF7E0DCBB64B_RuntimeMethod_var);
		int32_t L_34;
		L_34 = FetchPose_computePoseData_mA8026BBF6D1379E2D47AE761CF53F37135DCA956(L_27, L_29, L_31, (float*)(float*)L_33, /*hidden argument*/NULL);
		// Destroy(renderTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_35 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
		// Destroy(image);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_0;
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_36, /*hidden argument*/NULL);
		// return pose.ToArray();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37;
		L_37 = NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030((NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 *)(&V_2), /*hidden argument*/NativeArray_1_ToArray_mE5C5A13639895E80612426CB1D1E40130A3FE030_RuntimeMethod_var);
		return L_37;
	}
}
// System.Void FetchPose::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose_Update_mD0B0C94FE68E3DFD982F9A9FC44A52789F4B3733 (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F440119CE2795C564494BFBB78B1ED59EE798D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB72C442A3E50CB1CC17C74D0F3E2040632AC7F23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		//  if (dataReady && (overrideCapture || (Input.GetAxis
		// ("Fire1") > 0)))
		bool L_0 = __this->get_dataReady_8();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		bool L_1 = __this->get_overrideCapture_11();
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}

IL_0021:
	{
		// float startTime = Time.realtimeSinceStartup;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		V_0 = L_3;
		// float[] pose = retrievePoseData();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4;
		L_4 = FetchPose_retrievePoseData_mFB94676144D7F67AA1ADBCD1861447EBAA54645D(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		// float endTime = Time.realtimeSinceStartup;
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		V_2 = L_5;
		// Debug.Log("Pose tracked in " + (endTime - startTime).ToString("F6") + " seconds");
		float L_6 = V_2;
		float L_7 = V_0;
		V_3 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7));
		String_t* L_8;
		L_8 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_3), _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral7F440119CE2795C564494BFBB78B1ED59EE798D0, L_8, _stringLiteralB72C442A3E50CB1CC17C74D0F3E2040632AC7F23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// poseVisualizer.updatePose(pose);
		PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * L_10 = __this->get_poseVisualizer_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = V_1;
		NullCheck(L_10);
		PoseSkeleton_updatePose_mCFBD26278A193CA5899431825F1598D03C6AE15D(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FetchPose::extractFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FetchPose_extractFile_m8DC7F8BC9940D0475C48D9D2A468B46A35228BAD (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, String_t* ___assetPath0, String_t* ___assetFile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * L_0 = (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 *)il2cpp_codegen_object_new(U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768_il2cpp_TypeInfo_var);
		U3CextractFileU3Ed__19__ctor_mB86A57298234513D609F830A9CF67E43B9B52D45(L_0, 0, /*hidden argument*/NULL);
		U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * L_1 = L_0;
		String_t* L_2 = ___assetPath0;
		NullCheck(L_1);
		L_1->set_assetPath_2(L_2);
		U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * L_3 = L_1;
		String_t* L_4 = ___assetFile1;
		NullCheck(L_3);
		L_3->set_assetFile_3(L_4);
		return L_3;
	}
}
// System.Void FetchPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FetchPose__ctor_m2ECB0D6AFC383D2AC2DC7CCB16152BCF92D8736F (FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * __this, const RuntimeMethod* method)
{
	{
		// private int numPointsInPose = 17;
		__this->set_numPointsInPose_6(((int32_t)17));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PoseSkeleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSkeleton__ctor_mEFF42DC1D2BFBF5438ED379E78DE5AFB4FF8CC88 (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyPart_t770A4E4A5B01778DF8887C534EBC94E851E6BDF9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3C9DEDC5F63C6BA37EDA165E25BE63575FC2C317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t688ED07644F422D31DF8155B574BCB5AB9379052_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PoseSkeleton()
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// numPointsInPose = Enum.GetNames(typeof(BodyPart)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (BodyPart_t770A4E4A5B01778DF8887C534EBC94E851E6BDF9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		__this->set_numPointsInPose_7(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		// markers = new GameObject[numPointsInPose];
		int32_t L_3 = __this->get_numPointsInPose_7();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->set_markers_6(L_4);
		// bones = new List<SkeletonBone>();
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_5 = (List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 *)il2cpp_codegen_object_new(List_1_t688ED07644F422D31DF8155B574BCB5AB9379052_il2cpp_TypeInfo_var);
		List_1__ctor_m3C9DEDC5F63C6BA37EDA165E25BE63575FC2C317(L_5, /*hidden argument*/List_1__ctor_m3C9DEDC5F63C6BA37EDA165E25BE63575FC2C317_RuntimeMethod_var);
		__this->set_bones_8(L_5);
		// bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Right_eye));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_6 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_7 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_7, 1, 2, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_6, L_7, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Left_shoulder));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_8 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_9 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_9, 1, 5, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_8, L_9, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_eye, BodyPart.Right_shoulder));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_10 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_11 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_11, 2, 6, /*hidden argument*/NULL);
		NullCheck(L_10);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_10, L_11, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Left_ear));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_12 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_13 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_13, 1, 3, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_12, L_13, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_eye, BodyPart.Right_ear));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_14 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_15 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_15, 2, 4, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_14, L_15, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Nose));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_16 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_17 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_17, 1, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_16, L_17, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_eye, BodyPart.Nose));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_18 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_19 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_19, 2, 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_18, L_19, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_hip, BodyPart.Left_shoulder));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_20 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_21 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_21, ((int32_t)11), 5, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_20, L_21, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_hip, BodyPart.Right_shoulder));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_22 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_23 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_23, ((int32_t)12), 6, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_22, L_23, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_hip, BodyPart.Right_hip));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_24 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_25 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_25, ((int32_t)11), ((int32_t)12), /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_24, L_25, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_shoulder, BodyPart.Right_shoulder));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_26 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_27 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_27, 5, 6, /*hidden argument*/NULL);
		NullCheck(L_26);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_26, L_27, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_shoulder, BodyPart.Left_elbow));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_28 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_29 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_29, 5, 7, /*hidden argument*/NULL);
		NullCheck(L_28);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_28, L_29, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_elbow, BodyPart.Left_wrist));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_30 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_31 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_31, 7, ((int32_t)9), /*hidden argument*/NULL);
		NullCheck(L_30);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_30, L_31, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_shoulder, BodyPart.Right_elbow));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_32 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_33 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_33, 6, 8, /*hidden argument*/NULL);
		NullCheck(L_32);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_32, L_33, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_elbow, BodyPart.Right_wrist));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_34 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_35 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_35, 8, ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_34);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_34, L_35, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_hip, BodyPart.Left_knee));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_36 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_37 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_37, ((int32_t)11), ((int32_t)13), /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_36, L_37, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Left_knee, BodyPart.Left_ankle));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_38 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_39 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_39, ((int32_t)13), ((int32_t)15), /*hidden argument*/NULL);
		NullCheck(L_38);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_38, L_39, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_hip, BodyPart.Right_knee));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_40 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_41 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_41, ((int32_t)12), ((int32_t)14), /*hidden argument*/NULL);
		NullCheck(L_40);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_40, L_41, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// bones.Add(new SkeletonBone(BodyPart.Right_knee, BodyPart.Right_ankle));
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_42 = __this->get_bones_8();
		SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_43 = (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 *)il2cpp_codegen_object_new(SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5_il2cpp_TypeInfo_var);
		SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B(L_43, ((int32_t)14), ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_42);
		List_1_Add_m55F4310CA420A1B671273392130758D11752179C(L_42, L_43, /*hidden argument*/List_1_Add_m55F4310CA420A1B671273392130758D11752179C_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Vector3 PoseSkeleton::poseToVector(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PoseSkeleton_poseToVector_mE5658A2BD27B79E1894100C2316598EB33E17C62 (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, int32_t ___i1, const RuntimeMethod* method)
{
	{
		// return new Vector3(-(10.0f * rawPoseData[i * 3 + 0] - 5.0f), 0.0f, -(10.0f * rawPoseData[i * 3 + 1] - 5.0f));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___rawPoseData0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)3));
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___rawPoseData0;
		int32_t L_5 = ___i1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)3)), (int32_t)1));
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), ((-((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_3)), (float)(5.0f))))), (0.0f), ((-((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_7)), (float)(5.0f))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void PoseSkeleton::drawPosePoints(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSkeleton_drawPosePoints_m05904D426509289121811EE7CB9F058401FAEE86 (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < numPointsInPose; i++)
		V_0 = 0;
		goto IL_008d;
	}

IL_0007:
	{
		// if (markers[i] == null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_markers_6();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// markers[i] = Instantiate(pointMarkerTemplate);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_markers_6();
		int32_t L_6 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_pointMarkerTemplate_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		// markers[i].transform.SetParent(this.transform, false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_markers_6();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_13, L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// markers[i].transform.localPosition = poseToVector(rawPoseData, i);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_markers_6();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = ___rawPoseData0;
		int32_t L_21 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = PoseSkeleton_poseToVector_mE5658A2BD27B79E1894100C2316598EB33E17C62(__this, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_19, L_22, /*hidden argument*/NULL);
		// if (rawPoseData[i * 3 + 2] < 0.0f)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = ___rawPoseData0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)3)), (int32_t)2));
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((float)L_26) < ((float)(0.0f)))))
		{
			goto IL_007b;
		}
	}
	{
		// markers[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = __this->get_markers_6();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0089;
	}

IL_007b:
	{
		// markers[i].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_31 = __this->get_markers_6();
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)1, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// for (int i = 0; i < numPointsInPose; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_008d:
	{
		// for (int i = 0; i < numPointsInPose; i++)
		int32_t L_36 = V_0;
		int32_t L_37 = __this->get_numPointsInPose_7();
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PoseSkeleton::drawSkeleton(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSkeleton_drawSkeleton_m22593A66854263933330A262DD01B8CC21E733F7 (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA18FD564E4CF31FE3CA6AA4B251580242BC48A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8E57EDFD90B1726B568251A48A29CE9D0EC1009A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7EB4E533606DCD0A348C715552C7C191BD596A6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m04E4E8B4F7110CA9A757640D94B50CFD2053ECD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (SkeletonBone b in bones)
		List_1_t688ED07644F422D31DF8155B574BCB5AB9379052 * L_0 = __this->get_bones_8();
		NullCheck(L_0);
		Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D  L_1;
		L_1 = List_1_GetEnumerator_m04E4E8B4F7110CA9A757640D94B50CFD2053ECD7(L_0, /*hidden argument*/List_1_GetEnumerator_m04E4E8B4F7110CA9A757640D94B50CFD2053ECD7_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0142;
		}

IL_0011:
		{
			// foreach (SkeletonBone b in bones)
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_2;
			L_2 = Enumerator_get_Current_m7EB4E533606DCD0A348C715552C7C191BD596A6A_inline((Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7EB4E533606DCD0A348C715552C7C191BD596A6A_RuntimeMethod_var);
			V_1 = L_2;
			// Vector3 from = poseToVector(rawPoseData, (int)b.from);
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___rawPoseData0;
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_from_1();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = PoseSkeleton_poseToVector_mE5658A2BD27B79E1894100C2316598EB33E17C62(__this, L_3, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			// Vector3 to = poseToVector(rawPoseData, (int)b.to);
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___rawPoseData0;
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = L_8->get_to_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
			L_10 = PoseSkeleton_poseToVector_mE5658A2BD27B79E1894100C2316598EB33E17C62(__this, L_7, L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			// float len = 0.5f * (to - from).magnitude;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			float L_14;
			L_14 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
			V_4 = ((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_14));
			// if (len > 0.01f)
			float L_15 = V_4;
			if ((!(((float)L_15) > ((float)(0.00999999978f)))))
			{
				goto IL_0142;
			}
		}

IL_0059:
		{
			// if (b.boneObject == null)
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_16 = V_1;
			NullCheck(L_16);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16->get_boneObject_0();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_008f;
			}
		}

IL_0067:
		{
			// b.boneObject = Instantiate(boneTemplate);
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_19 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_boneTemplate_5();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
			L_21 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_20, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			NullCheck(L_19);
			L_19->set_boneObject_0(L_21);
			// b.boneObject.transform.SetParent(this.transform, false);
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_22 = V_1;
			NullCheck(L_22);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = L_22->get_boneObject_0();
			NullCheck(L_23);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
			L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
			L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_24);
			Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_24, L_25, (bool)0, /*hidden argument*/NULL);
		}

IL_008f:
		{
			// b.boneObject.transform.up = transform.worldToLocalMatrix.MultiplyVector(to - from);
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_26 = V_1;
			NullCheck(L_26);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = L_26->get_boneObject_0();
			NullCheck(L_27);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
			L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
			L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_29);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_30;
			L_30 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D(L_29, /*hidden argument*/NULL);
			V_6 = L_30;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_31, L_32, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
			L_34 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_6), L_33, /*hidden argument*/NULL);
			NullCheck(L_28);
			Transform_set_up_m3D2B71DA51EA167C367FD275B7B28241C565F127(L_28, L_34, /*hidden argument*/NULL);
			// b.boneObject.transform.localPosition = (from + to) / 2.0f;
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_35 = V_1;
			NullCheck(L_35);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = L_35->get_boneObject_0();
			NullCheck(L_36);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
			L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
			L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_38, L_39, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_40, (2.0f), /*hidden argument*/NULL);
			NullCheck(L_37);
			Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_37, L_41, /*hidden argument*/NULL);
			// b.boneObject.transform.localScale = new Vector3(0.3f, 1.0f * len, 0.3f);
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_42 = V_1;
			NullCheck(L_42);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = L_42->get_boneObject_0();
			NullCheck(L_43);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
			L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
			float L_45 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			memset((&L_46), 0, sizeof(L_46));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_46), (0.300000012f), ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_45)), (0.300000012f), /*hidden argument*/NULL);
			NullCheck(L_44);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_44, L_46, /*hidden argument*/NULL);
			// if ((rawPoseData[(int)b.from * 3 + 2] < 0.0f) || (rawPoseData[(int)b.to * 3 + 2] < 0.0f))
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = ___rawPoseData0;
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_48 = V_1;
			NullCheck(L_48);
			int32_t L_49 = L_48->get_from_1();
			NullCheck(L_47);
			int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_49, (int32_t)3)), (int32_t)2));
			float L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
			if ((((float)L_51) < ((float)(0.0f))))
			{
				goto IL_0128;
			}
		}

IL_0115:
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = ___rawPoseData0;
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_53 = V_1;
			NullCheck(L_53);
			int32_t L_54 = L_53->get_to_2();
			NullCheck(L_52);
			int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)3)), (int32_t)2));
			float L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			if ((!(((float)L_56) < ((float)(0.0f)))))
			{
				goto IL_0136;
			}
		}

IL_0128:
		{
			// b.boneObject.SetActive(false);
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_57 = V_1;
			NullCheck(L_57);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = L_57->get_boneObject_0();
			NullCheck(L_58);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_58, (bool)0, /*hidden argument*/NULL);
			// }
			goto IL_0142;
		}

IL_0136:
		{
			// b.boneObject.SetActive(true);
			SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * L_59 = V_1;
			NullCheck(L_59);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = L_59->get_boneObject_0();
			NullCheck(L_60);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_60, (bool)1, /*hidden argument*/NULL);
		}

IL_0142:
		{
			// foreach (SkeletonBone b in bones)
			bool L_61;
			L_61 = Enumerator_MoveNext_m8E57EDFD90B1726B568251A48A29CE9D0EC1009A((Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8E57EDFD90B1726B568251A48A29CE9D0EC1009A_RuntimeMethod_var);
			if (L_61)
			{
				goto IL_0011;
			}
		}

IL_014e:
		{
			IL2CPP_LEAVE(0x15E, FINALLY_0150);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0150;
	}

FINALLY_0150:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA18FD564E4CF31FE3CA6AA4B251580242BC48A3C((Enumerator_tE927435AEF283452C293D74C2E2AFAA40456BC6D *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA18FD564E4CF31FE3CA6AA4B251580242BC48A3C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(336)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(336)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x15E, IL_015e)
	}

IL_015e:
	{
		// }
		return;
	}
}
// System.Void PoseSkeleton::updatePose(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSkeleton_updatePose_mCFBD26278A193CA5899431825F1598D03C6AE15D (PoseSkeleton_tAF58A76FF68AF2DC87AFE4749D8D7AE494764D55 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___rawPoseData0, const RuntimeMethod* method)
{
	{
		// drawPosePoints(rawPoseData);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___rawPoseData0;
		PoseSkeleton_drawPosePoints_m05904D426509289121811EE7CB9F058401FAEE86(__this, L_0, /*hidden argument*/NULL);
		// drawSkeleton(rawPoseData);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___rawPoseData0;
		PoseSkeleton_drawSkeleton_m22593A66854263933330A262DD01B8CC21E733F7(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FetchPose/<extractFile>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextractFileU3Ed__19__ctor_mB86A57298234513D609F830A9CF67E43B9B52D45 (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FetchPose/<extractFile>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextractFileU3Ed__19_System_IDisposable_Dispose_m1E602CE3E64CD68A50F2386B0230E9753CD05FF4 (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FetchPose/<extractFile>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CextractFileU3Ed__19_MoveNext_m0B209A87E464318A320A88AB29E952B568EDE12F (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	Exception_t * G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00b0;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// string sourcePath = Application.streamingAssetsPath + "/" + assetPath + assetFile;
		String_t* L_3;
		L_3 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_4 = __this->get_assetPath_2();
		String_t* L_5 = __this->get_assetFile_3();
		String_t* L_6;
		L_6 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3CsourcePathU3E5__2_4(L_6);
		// if ((sourcePath.Length > 0) && (sourcePath[0] == '/'))
		String_t* L_7 = __this->get_U3CsourcePathU3E5__2_4();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_9 = __this->get_U3CsourcePathU3E5__2_4();
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_006f;
		}
	}
	{
		// sourcePath = "file://" + sourcePath;
		String_t* L_11 = __this->get_U3CsourcePathU3E5__2_4();
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_11, /*hidden argument*/NULL);
		__this->set_U3CsourcePathU3E5__2_4(L_12);
	}

IL_006f:
	{
		// string destinationPath = Application.persistentDataPath + "/" + assetFile;
		String_t* L_13;
		L_13 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_14 = __this->get_assetFile_3();
		String_t* L_15;
		L_15 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_13, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_14, /*hidden argument*/NULL);
		__this->set_U3CdestinationPathU3E5__3_5(L_15);
		// WWW w = new WWW(sourcePath);
		String_t* L_16 = __this->get_U3CsourcePathU3E5__2_4();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_17 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_17, L_16, /*hidden argument*/NULL);
		__this->set_U3CwU3E5__4_6(L_17);
		// yield return w;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_18 = __this->get_U3CwU3E5__4_6();
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b7:
	try
	{ // begin try (depth: 1)
		// File.WriteAllBytes(destinationPath, w.bytes);
		String_t* L_19 = __this->get_U3CdestinationPathU3E5__3_5();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_20 = __this->get_U3CwU3E5__4_6();
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
		L_21 = WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A(L_20, /*hidden argument*/NULL);
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_19, L_21, /*hidden argument*/NULL);
		// }
		goto IL_00f9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cf;
		}
		throw e;
	}

CATCH_00cf:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.Log("Issue writing " + destinationPath + " " + e);
			String_t* L_22 = __this->get_U3CdestinationPathU3E5__3_5();
			Exception_t * L_23 = V_1;
			Exception_t * L_24 = L_23;
			G_B10_0 = L_24;
			G_B10_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745));
			G_B10_2 = L_22;
			G_B10_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED10A1035D0CA70A166B71635269E3D0EE92AB99));
			if (L_24)
			{
				G_B11_0 = L_24;
				G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745));
				G_B11_2 = L_22;
				G_B11_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED10A1035D0CA70A166B71635269E3D0EE92AB99));
				goto IL_00e8;
			}
		}

IL_00e4:
		{
			G_B12_0 = ((String_t*)(NULL));
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			G_B12_3 = G_B10_3;
			goto IL_00ed;
		}

IL_00e8:
		{
			NullCheck(G_B11_0);
			String_t* L_25;
			L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
			G_B12_0 = L_25;
			G_B12_1 = G_B11_1;
			G_B12_2 = G_B11_2;
			G_B12_3 = G_B11_3;
		}

IL_00ed:
		{
			String_t* L_26;
			L_26 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B12_3, G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00f9;
		}
	} // end catch (depth: 1)

IL_00f9:
	{
		// Debug.Log(sourcePath + " -> " + destinationPath + " " + w.bytes.Length);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		String_t* L_29 = __this->get_U3CsourcePathU3E5__2_4();
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_28;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		String_t* L_32 = __this->get_U3CdestinationPathU3E5__3_5();
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_31;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_35 = __this->get_U3CwU3E5__4_6();
		NullCheck(L_35);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36;
		L_36 = WWW_get_bytes_m378FCCD8E91FB7FE7FA22E05BA3FE528CD7EAF1A(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)));
		String_t* L_37;
		L_37 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_37);
		String_t* L_38;
		L_38 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_38, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object FetchPose/<extractFile>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CextractFileU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD80FF73DB919D7AA848BEA5D5D0AFA42A8A175D9 (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FetchPose/<extractFile>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CextractFileU3Ed__19_System_Collections_IEnumerator_Reset_mEB59019985849846AB03B0EC135F5EC14DDEAA77 (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CextractFileU3Ed__19_System_Collections_IEnumerator_Reset_mEB59019985849846AB03B0EC135F5EC14DDEAA77_RuntimeMethod_var)));
	}
}
// System.Object FetchPose/<extractFile>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CextractFileU3Ed__19_System_Collections_IEnumerator_get_Current_mD9B8049125D0299F1265E4A1D5FBB62CB8D2CE3D (U3CextractFileU3Ed__19_t514AA94301B7BFE34459C588A4705610AE9EF768 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FetchPose/<prepareModel>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprepareModelU3Ed__15__ctor_m061862F92A1B8F6CC43E68CE9FDAA04FE83E53A7 (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FetchPose/<prepareModel>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprepareModelU3Ed__15_System_IDisposable_Dispose_m0CE771DBFCD55F7B378A9886352524226A8B69BE (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FetchPose/<prepareModel>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CprepareModelU3Ed__15_MoveNext_m0F5CF7381CF56BDC338DDD51468DC1E4A57E1A43 (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A23FAEF258DD57935B9AB04913E4CB319D4C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// string modelfile = "posenet_mobilenet_v1_100_257x257_m culti_kpt_stripped.tflite";
		__this->set_U3CmodelfileU3E5__2_3(_stringLiteral10A23FAEF258DD57935B9AB04913E4CB319D4C37);
		// yield return StartCoroutine(extractFile("", modelfile));
		FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * L_4 = V_1;
		FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * L_5 = V_1;
		String_t* L_6 = __this->get_U3CmodelfileU3E5__2_3();
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = FetchPose_extractFile_m8DC7F8BC9940D0475C48D9D2A468B46A35228BAD(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// initPose(Application.persistentDataPath + "/" + modelfile);
		String_t* L_9;
		L_9 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_10 = __this->get_U3CmodelfileU3E5__2_3();
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_9, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_10, /*hidden argument*/NULL);
		FetchPose_initPose_mDBD9A37B8F05843276D55A8D0372F659585EAEC7(L_11, /*hidden argument*/NULL);
		// dataReady = true;
		FetchPose_tE8A1E9E6FA87F1C9BC28029B77201D2F2B647C6E * L_12 = V_1;
		NullCheck(L_12);
		L_12->set_dataReady_8((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object FetchPose/<prepareModel>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CprepareModelU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE93284450C47D7F79E668C4F79FE5B3E7EAED30C (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FetchPose/<prepareModel>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprepareModelU3Ed__15_System_Collections_IEnumerator_Reset_mA75AE42505ECB6BE1D80FB4E123EE1D586A5E05F (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CprepareModelU3Ed__15_System_Collections_IEnumerator_Reset_mA75AE42505ECB6BE1D80FB4E123EE1D586A5E05F_RuntimeMethod_var)));
	}
}
// System.Object FetchPose/<prepareModel>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CprepareModelU3Ed__15_System_Collections_IEnumerator_get_Current_mA9675F00DF2BDAB128F701DFA4F4A58AD64BA4E6 (U3CprepareModelU3Ed__15_t9A98BC8A331D38D9CE8C33CDF86748FA8C9FCBD1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PoseSkeleton/SkeletonBone::.ctor(PoseSkeleton/BodyPart,PoseSkeleton/BodyPart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonBone__ctor_mEE0928957470FEEF26FEE17D738E546F3586809B (SkeletonBone_tD2909ABC2C79D1349FAD9951B21983D8DD7FDEF5 * __this, int32_t ___f0, int32_t ___t1, const RuntimeMethod* method)
{
	{
		// public SkeletonBone(BodyPart f, BodyPart t)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// boneObject = null;
		__this->set_boneObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// from = f;
		int32_t L_0 = ___f0;
		__this->set_from_1(L_0);
		// to = t;
		int32_t L_1 = ___t1;
		__this->set_to_2(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
