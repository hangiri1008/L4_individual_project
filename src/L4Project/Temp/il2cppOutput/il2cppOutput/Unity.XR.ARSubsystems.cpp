#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t44607A9BE5154ED0C7924B81776A709724545E6C;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F;
// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct Subsystem_1_t1D44399B8190A9E3533EE5C5D5915B75D79B2E66;
// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider
struct IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t493CA5F0CB7E1F442AE0EE5332BB356314E5545E;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider
struct IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_tDC6E6E465FE3E4D385429760EF0C84832A09A3D7;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079;

IL2CPP_EXTERN_C RuntimeClass* BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2094B13032FCEFF9F44101810E1CE0C1EC613A12;
IL2CPP_EXTERN_C String_t* _stringLiteral39BF4FB45444043D19EFF93848D9F1A0BEA05065;
IL2CPP_EXTERN_C String_t* _stringLiteral40EB8A6D17A1FA9CEBAFE1F18BB8257C8CE3E703;
IL2CPP_EXTERN_C String_t* _stringLiteral7C03747EBF75A7387EC3D27DFB6D3745E9C17ED0;
IL2CPP_EXTERN_C String_t* _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3;
IL2CPP_EXTERN_C String_t* _stringLiteral9C4E8CB62B5C9AA47AEDDAC7C3F9DA543AECB0F9;
IL2CPP_EXTERN_C String_t* _stringLiteralB39A7E18F4E7B76A8C729E54E8852F98B5EA76F3;
IL2CPP_EXTERN_C String_t* _stringLiteralC94A2BBDF45E627BA76EC101C53EBB78511EF25A;
IL2CPP_EXTERN_C String_t* _stringLiteralE1C335A2C6879B71DEF15974899188C18337946C;
IL2CPP_EXTERN_C String_t* _stringLiteralE332FA3F4AA7C1B36A55D7D5A431D2A3C360524D;
IL2CPP_EXTERN_C const RuntimeMethod* IProvider_GetBoundary_mDFF4A2DB4FB60A6032D141463F0A6239EB0E0182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IProvider_Raycast_m70674ED49690ED8304135E4E57023D6F4EF031E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IProvider_Raycast_m82D63262EEC3A07B14B897B9D2549340D4FB4E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1__ctor_m134908D621A09F653200766A20A68191B399091F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1__ctor_m859AB7FE00DDB9E7C49DAA6F594CB4AF7B6E903F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1_get_SubsystemDescriptor_mD9F3F4ECB180FF40D21E57235A6D775BDB014D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_2__ctor_mFC39B7350AB7CABBA957518F6BD2E16FF410E33C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneSubsystem_GetBoundary_m8E8F373A0147BF4BB2E51B8EB12CBD85244A598F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BoundedPlane_Equals_mE1F35325F340F3CCC6662E73296FFDF8B0436C4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoundedPlane_GetDefault_mDC1F2DC14F5C53295558B28FA102CE5CD774660A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoundedPlane_ToString_mC00A85440C02CCFFD015A56BC18154E709DF4646_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoundedPlane_get_extents_mC0F005CBFDA55C68EF9CC52FBC8C0FC07854CBBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_GetBoundary_mDFF4A2DB4FB60A6032D141463F0A6239EB0E0182_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_Raycast_m70674ED49690ED8304135E4E57023D6F4EF031E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IProvider_Raycast_m82D63262EEC3A07B14B897B9D2549340D4FB4E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_Equals_mBB92F3933E2215399757A70A3704E580DD32406C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId__cctor_m4EBC45AC6693CBEFB8B222F0EE6D8DAEC841264E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CDUnity_XR_ARSubsystems_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneSubsystem_GetBoundary_m8E8F373A0147BF4BB2E51B8EB12CBD85244A598F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneSubsystem__ctor_mD446FA374A919AF2EDD1A1D7C47913E621CBF809_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRRaycastHit_Equals_m0A24B5C58B6CA930CDD05F6F17F54FD60DA10DE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRRaycastHit_GetDefault_mB7D3A8CFE226FD38DDDA4B1C2DE3162FD3B6BE2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRRaycastSubsystem__ctor_mE8BD2BFB3AFD44403F3A663CA5D5AAC707419506_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tD4E2C466946EFCC911763D21CD7F606F5D963632 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Subsystem
struct  Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions
struct  SessionAvailabilityExtensions_tB752BB8E4FBD8671A4C947FB3000A6E9601C863C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider
struct  IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider
struct  IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider
struct  IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct  SubsystemDescriptor_1_t48ED9E3737B28FD562E12CA231ED3487E383D773  : public SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct  SubsystemDescriptor_1_t27A8F3D552922AA16C799BCC575330BC6DF59F47  : public SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4
{
public:

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemDescriptor_1_t0679ED150419770F94E42102F28D688E8F1DC9DA  : public SubsystemDescriptor_t889FE96B75F157379A8337541A119F08DD9C75D4
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  Subsystem_1_tA832EBA21E41FF7EBCA30AE7C32EC78033F63E37  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct  Subsystem_1_t1D44399B8190A9E3533EE5C5D5915B75D79B2E66  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7  : public Subsystem_t6B987736D8E48098F860AC55D76905DE1F48CE8C
{
public:

public:
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct  PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct  SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389  : public Subsystem_1_tA832EBA21E41FF7EBCA30AE7C32EC78033F63E37
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct  XRPlaneSubsystemDescriptor_t493CA5F0CB7E1F442AE0EE5332BB356314E5545E  : public SubsystemDescriptor_1_t48ED9E3737B28FD562E12CA231ED3487E383D773
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t493CA5F0CB7E1F442AE0EE5332BB356314E5545E, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_2() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_2() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_2; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct  XRRaycastSubsystemDescriptor_tDC6E6E465FE3E4D385429760EF0C84832A09A3D7  : public SubsystemDescriptor_1_t27A8F3D552922AA16C799BCC575330BC6DF59F47
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tDC6E6E465FE3E4D385429760EF0C84832A09A3D7, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tDC6E6E465FE3E4D385429760EF0C84832A09A3D7, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_2)); }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079  : public SubsystemDescriptor_1_t0679ED150419770F94E42102F28D688E8F1DC9DA
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079, ___U3CsupportsInstallU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_2() const { return ___U3CsupportsInstallU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_2() { return &___U3CsupportsInstallU3Ek__BackingField_2; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct  NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_1() const { return ___m_SubsumedById_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_1() { return &___m_SubsumedById_1; }
	inline void set_m_SubsumedById_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_5)); }
	inline int32_t get_m_Alignment_5() const { return ___m_Alignment_5; }
	inline int32_t* get_address_of_m_Alignment_5() { return &___m_Alignment_5; }
	inline void set_m_Alignment_5(int32_t value)
	{
		___m_Alignment_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct  Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_2;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_HitType_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_HitType_3)); }
	inline int32_t get_m_HitType_3() const { return ___m_HitType_3; }
	inline int32_t* get_address_of_m_HitType_3() { return &___m_HitType_3; }
	inline void set_m_HitType_3(int32_t value)
	{
		___m_HitType_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct  XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Added_1)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Updated_2)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct  XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909  : public TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389
{
public:
	// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_Provider
	IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_DefaultPlane
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___m_DefaultPlane_3;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_Provider_2)); }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultPlane_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_DefaultPlane_3)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_m_DefaultPlane_3() const { return ___m_DefaultPlane_3; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_m_DefaultPlane_3() { return &___m_DefaultPlane_3; }
	inline void set_m_DefaultPlane_3(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___m_DefaultPlane_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct  XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20  : public Subsystem_1_t1D44399B8190A9E3533EE5C5D5915B75D79B2E66
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Provider
	IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_DefaultRaycastHit
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_DefaultRaycastHit_3;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_Provider_2)); }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultRaycastHit_3() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_DefaultRaycastHit_3)); }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  get_m_DefaultRaycastHit_3() const { return ___m_DefaultRaycastHit_3; }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * get_address_of_m_DefaultRaycastHit_3() { return &___m_DefaultRaycastHit_3; }
	inline void set_m_DefaultRaycastHit_3(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  value)
	{
		___m_DefaultRaycastHit_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mF1761D396F2FC0B6BA3AA3F0DCDF7577A946B13A_gshared (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_mC68B5063E7E4A583B43FEACDC0764CD8F43EEEE2_gshared (Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F * __this, const RuntimeMethod* method);
// !0 UnityEngine.Subsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Subsystem_1_get_SubsystemDescriptor_mA35B9EF0D8FB264CBDA2C501B3C251816226A412_gshared (Subsystem_1_t730D4B66354D4BECD6DEDE1050EA133DF9B7A61F * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t ___result0, const RuntimeMethod* method);

// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline (const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_mDDF989B081F8AE085F44F32D2CC2CBF283A91E7D (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___subsumedBy1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center3, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_subsumedById_m77895AF3F9E056F4816CB9177209586E98967889_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_center_m1AB8ED2CBDC8F4A85358F98A8DD832436818505F_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_extents_mC0F005CBFDA55C68EF9CC52FBC8C0FC07854CBBB (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_size_mC49BFA58CD7CE92C2470C82F30EA6F8A4F38B854_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m85C46D81426435F0B9399ABAF80AC5342A2F7137_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m715E5D9C20481ED26B239C0865C9A934EB114E8F_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B (intptr_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_mC00A85440C02CCFFD015A56BC18154E709DF4646 (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m45A1269EAC68DE7B82FDC42D04073236B2FD333C (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_mE1F35325F340F3CCC6662E73296FFDF8B0436C4D (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m0A6AE0C85A4AEEA127235FB5A32056F630E3749A (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_mE003D802E745B7D4891C72388C0E80E9F8FA45DD (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_m867264C8DF91FF8DC3AD957EF1625902CDEBAEDD (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___other0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_m497D3C74C918FDE476EA168A431DAE4E135E88B4 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD (uint64_t* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mBB92F3933E2215399757A70A3704E580DD32406C (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_mFC39B7350AB7CABBA957518F6BD2E16FF410E33C (TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389 *, const RuntimeMethod*))TrackingSubsystem_2__ctor_mF1761D396F2FC0B6BA3AA3F0DCDF7577A946B13A_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  BoundedPlane_GetDefault_mDC1F2DC14F5C53295558B28FA102CE5CD774660A (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_m522E98C4B6FD85F8386911C5BC497DE4968E3961 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, float ___distance2, int32_t ___hitType3, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRRaycastHit_get_pose_mE0B0A754E818C6FF3675A41CA95185A3E608C8C3_inline (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_mC748DE6ED96B0C735DCA4AD320FA0BF522246D19_inline (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m74F67C2F858CF9669399A90DC761E0E763C0827F (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m2E3F746F63AC5ED95DF5E79AB43C2DE8A8E42E60 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m0A24B5C58B6CA930CDD05F6F17F54FD60DA10DE5 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>::.ctor()
inline void Subsystem_1__ctor_m134908D621A09F653200766A20A68191B399091F (Subsystem_1_t1D44399B8190A9E3533EE5C5D5915B75D79B2E66 * __this, const RuntimeMethod* method)
{
	((  void (*) (Subsystem_1_t1D44399B8190A9E3533EE5C5D5915B75D79B2E66 *, const RuntimeMethod*))Subsystem_1__ctor_mC68B5063E7E4A583B43FEACDC0764CD8F43EEEE2_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  XRRaycastHit_GetDefault_mB7D3A8CFE226FD38DDDA4B1C2DE3162FD3B6BE2F (const RuntimeMethod* method);
// !0 UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * Subsystem_1_get_SubsystemDescriptor_mD9F3F4ECB180FF40D21E57235A6D775BDB014D9B (Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * (*) (Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7 *, const RuntimeMethod*))Subsystem_1_get_SubsystemDescriptor_mA35B9EF0D8FB264CBDA2C501B3C251816226A412_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void Subsystem_1__ctor_m859AB7FE00DDB9E7C49DAA6F594CB4AF7B6E903F (Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Subsystem_1_t749909AA5D71BD615BDF40BDE7C8F81B8D63F4C7 *, const RuntimeMethod*))Subsystem_1__ctor_mC68B5063E7E4A583B43FEACDC0764CD8F43EEEE2_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(___result0, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(___result0, method);
}
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___other0, const RuntimeMethod* method);
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
// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  BoundedPlane_GetDefault_mDC1F2DC14F5C53295558B28FA102CE5CD774660A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane_GetDefault_mDC1F2DC14F5C53295558B28FA102CE5CD774660A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline(/*hidden argument*/NULL);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_5;
		memset((&L_5), 0, sizeof(L_5));
		BoundedPlane__ctor_mDDF989B081F8AE085F44F32D2CC2CBF283A91E7D((&L_5), L_0, L_1, L_2, L_3, L_4, 0, 0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_mDDF989B081F8AE085F44F32D2CC2CBF283A91E7D (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___subsumedBy1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center3, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		__this->set_m_TrackableId_0(L_0);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___subsumedBy1;
		__this->set_m_SubsumedById_1(L_1);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = ___pose2;
		__this->set_m_Pose_3(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___center3;
		__this->set_m_Center_2(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___size4;
		__this->set_m_Size_4(L_4);
		int32_t L_5 = ___alignment5;
		__this->set_m_Alignment_5(L_5);
		int32_t L_6 = ___trackingState6;
		__this->set_m_TrackingState_6(L_6);
		intptr_t L_7 = ___nativePtr7;
		__this->set_m_NativePtr_7((intptr_t)L_7);
		return;
	}
}
IL2CPP_EXTERN_C  void BoundedPlane__ctor_mDDF989B081F8AE085F44F32D2CC2CBF283A91E7D_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___subsumedBy1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center3, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	BoundedPlane__ctor_mDDF989B081F8AE085F44F32D2CC2CBF283A91E7D(_thisAdjusted, ___trackableId0, ___subsumedBy1, ___pose2, ___center3, ___size4, ___alignment5, ___trackingState6, ___nativePtr7, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_subsumedById_m77895AF3F9E056F4816CB9177209586E98967889 (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_SubsumedById_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_subsumedById_m77895AF3F9E056F4816CB9177209586E98967889_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_subsumedById_m77895AF3F9E056F4816CB9177209586E98967889_inline(_thisAdjusted, method);
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_center_m1AB8ED2CBDC8F4A85358F98A8DD832436818505F (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_Center_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_center_m1AB8ED2CBDC8F4A85358F98A8DD832436818505F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_center_m1AB8ED2CBDC8F4A85358F98A8DD832436818505F_inline(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_extents_mC0F005CBFDA55C68EF9CC52FBC8C0FC07854CBBB (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane_get_extents_mC0F005CBFDA55C68EF9CC52FBC8C0FC07854CBBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_Size_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_0, (0.5f), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_extents_mC0F005CBFDA55C68EF9CC52FBC8C0FC07854CBBB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_extents_mC0F005CBFDA55C68EF9CC52FBC8C0FC07854CBBB(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_size_mC49BFA58CD7CE92C2470C82F30EA6F8A4F38B854 (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_Size_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_size_mC49BFA58CD7CE92C2470C82F30EA6F8A4F38B854_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_size_mC49BFA58CD7CE92C2470C82F30EA6F8A4F38B854_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m85C46D81426435F0B9399ABAF80AC5342A2F7137 (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Alignment_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_alignment_m85C46D81426435F0B9399ABAF80AC5342A2F7137_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_alignment_m85C46D81426435F0B9399ABAF80AC5342A2F7137_inline(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008 (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline(_thisAdjusted, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m715E5D9C20481ED26B239C0865C9A934EB114E8F (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_NativePtr_7();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t BoundedPlane_get_nativePtr_m715E5D9C20481ED26B239C0865C9A934EB114E8F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_get_nativePtr_m715E5D9C20481ED26B239C0865C9A934EB114E8F_inline(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_mC00A85440C02CCFFD015A56BC18154E709DF4646 (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane_ToString_mC00A85440C02CCFFD015A56BC18154E709DF4646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_3 = L_2;
		RuntimeObject * L_4 = Box(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = BoundedPlane_get_subsumedById_m77895AF3F9E056F4816CB9177209586E98967889_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_7 = L_6;
		RuntimeObject * L_8 = Box(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_10 = BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_11 = L_10;
		RuntimeObject * L_12 = Box(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = BoundedPlane_get_center_m1AB8ED2CBDC8F4A85358F98A8DD832436818505F_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = L_14;
		RuntimeObject * L_16 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_13;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = BoundedPlane_get_size_mC49BFA58CD7CE92C2470C82F30EA6F8A4F38B854_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18;
		RuntimeObject * L_20 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_17;
		int32_t L_22 = BoundedPlane_get_alignment_m85C46D81426435F0B9399ABAF80AC5342A2F7137_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_21;
		int32_t L_26 = BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_25;
		intptr_t L_30 = BoundedPlane_get_nativePtr_m715E5D9C20481ED26B239C0865C9A934EB114E8F_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_30;
		int64_t L_31 = IntPtr_ToInt64_mDD00D5F4AD380F40D31B60E9C57843CC3C12BD6B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		int64_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_33);
		String_t* L_34 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral7C03747EBF75A7387EC3D27DFB6D3745E9C17ED0, L_29, /*hidden argument*/NULL);
		return L_34;
	}
}
IL2CPP_EXTERN_C  String_t* BoundedPlane_ToString_mC00A85440C02CCFFD015A56BC18154E709DF4646_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_ToString_mC00A85440C02CCFFD015A56BC18154E709DF4646(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_mE1F35325F340F3CCC6662E73296FFDF8B0436C4D (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane_Equals_mE1F35325F340F3CCC6662E73296FFDF8B0436C4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = BoundedPlane_Equals_m45A1269EAC68DE7B82FDC42D04073236B2FD333C((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)__this, ((*(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)UnBox(L_2, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_mE1F35325F340F3CCC6662E73296FFDF8B0436C4D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_Equals_mE1F35325F340F3CCC6662E73296FFDF8B0436C4D(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_mE003D802E745B7D4891C72388C0E80E9F8FA45DD (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_TrackableId_0();
		int32_t L_1 = TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, /*hidden argument*/NULL);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_2 = __this->get_address_of_m_SubsumedById_1();
		int32_t L_3 = TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_2, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_4 = __this->get_address_of_m_Pose_3();
		int32_t L_5 = Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_4, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_6 = __this->get_address_of_m_Center_2();
		int32_t L_7 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_6, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_8 = __this->get_address_of_m_Size_4();
		int32_t L_9 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_m_Alignment_5();
		V_0 = L_10;
		int32_t L_11 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_12 = __this->get_m_TrackingState_6();
		V_0 = L_12;
		int32_t L_13 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t* L_14 = __this->get_address_of_m_NativePtr_7();
		int32_t L_15 = IntPtr_GetHashCode_m0A6AE0C85A4AEEA127235FB5A32056F630E3749A((intptr_t*)L_14, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13)), (int32_t)((int32_t)486187739))), (int32_t)L_15));
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_GetHashCode_mE003D802E745B7D4891C72388C0E80E9F8FA45DD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_GetHashCode_mE003D802E745B7D4891C72388C0E80E9F8FA45DD(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m45A1269EAC68DE7B82FDC42D04073236B2FD333C (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___other0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_TrackableId_0();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_1 = ___other0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = L_1.get_m_TrackableId_0();
		bool L_3 = TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_4 = __this->get_address_of_m_SubsumedById_1();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_5 = ___other0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = L_5.get_m_SubsumedById_1();
		bool L_7 = TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008d;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_8 = __this->get_address_of_m_Pose_3();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_9 = ___other0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_10 = L_9.get_m_Pose_3();
		bool L_11 = Pose_Equals_m867264C8DF91FF8DC3AD957EF1625902CDEBAEDD((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008d;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_12 = __this->get_address_of_m_Center_2();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_13 = ___other0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = L_13.get_m_Center_2();
		bool L_15 = Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_16 = __this->get_address_of_m_Size_4();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_17 = ___other0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = L_17.get_m_Size_4();
		bool L_19 = Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_20 = __this->get_m_Alignment_5();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_21 = ___other0;
		int32_t L_22 = L_21.get_m_Alignment_5();
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_23 = __this->get_m_TrackingState_6();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_24 = ___other0;
		int32_t L_25 = L_24.get_m_TrackingState_6();
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_008d;
		}
	}
	{
		intptr_t L_26 = __this->get_m_NativePtr_7();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_27 = ___other0;
		intptr_t L_28 = L_27.get_m_NativePtr_7();
		bool L_29 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_26, (intptr_t)L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_008d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_m45A1269EAC68DE7B82FDC42D04073236B2FD333C_AdjustorThunk (RuntimeObject * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___other0, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * _thisAdjusted = reinterpret_cast<BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *>(__this + 1);
	return BoundedPlane_Equals_m45A1269EAC68DE7B82FDC42D04073236B2FD333C(_thisAdjusted, ___other0, method);
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
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_mA0E371DBCB2DB69E066EA4DCADC76721AAD04ABA (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m30AE248D1BBF1C669EE32FE5976A35C16152DC9C (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
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
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var))->get_s_InvalidId_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_m497D3C74C918FDE476EA168A431DAE4E135E88B4 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___subId10;
		__this->set_m_SubId1_1(L_0);
		uint64_t L_1 = ___subId21;
		__this->set_m_SubId2_2(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_m497D3C74C918FDE476EA168A431DAE4E135E88B4_AdjustorThunk (RuntimeObject * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + 1);
	TrackableId__ctor_m497D3C74C918FDE476EA168A431DAE4E135E88B4(_thisAdjusted, ___subId10, ___subId21, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		String_t* L_1 = UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71((uint64_t*)L_0, _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		String_t* L_3 = UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71((uint64_t*)L_2, _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral9C4E8CB62B5C9AA47AEDDAC7C3F9DA543AECB0F9, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + 1);
	return TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method)
{
	{
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		int32_t L_1 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		int32_t L_3 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + 1);
	return TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mBB92F3933E2215399757A70A3704E580DD32406C (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_Equals_mBB92F3933E2215399757A70A3704E580DD32406C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)__this, ((*(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)UnBox(L_1, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_mBB92F3933E2215399757A70A3704E580DD32406C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + 1);
	return TrackableId_Equals_mBB92F3933E2215399757A70A3704E580DD32406C(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___other0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_SubId1_1();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___other0;
		uint64_t L_2 = L_1.get_m_SubId1_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->get_m_SubId2_2();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___other0;
		uint64_t L_5 = L_4.get_m_SubId2_2();
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___other0, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * _thisAdjusted = reinterpret_cast<TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *>(__this + 1);
	return TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__cctor_m4EBC45AC6693CBEFB8B222F0EE6D8DAEC841264E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId__cctor_m4EBC45AC6693CBEFB8B222F0EE6D8DAEC841264E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TrackableId__ctor_m497D3C74C918FDE476EA168A431DAE4E135E88B4((&L_0), (((int64_t)((int64_t)0))), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var))->set_s_InvalidId_0(L_0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mD446FA374A919AF2EDD1A1D7C47913E621CBF809 (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneSubsystem__ctor_mD446FA374A919AF2EDD1A1D7C47913E621CBF809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackingSubsystem_2__ctor_mFC39B7350AB7CABBA957518F6BD2E16FF410E33C(__this, /*hidden argument*/TrackingSubsystem_2__ctor_mFC39B7350AB7CABBA957518F6BD2E16FF410E33C_RuntimeMethod_var);
		IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * L_0 = VirtFuncInvoker0< IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * >::Invoke(9 /* UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_2(L_0);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_1 = BoundedPlane_GetDefault_mDC1F2DC14F5C53295558B28FA102CE5CD774660A(/*hidden argument*/NULL);
		__this->set_m_DefaultPlane_3(L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_Start_m6519B31B89F3637FD98980E4AA35E1E9B1D31F2F (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ((TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389 *)__this)->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::Start() */, L_1);
	}

IL_0013:
	{
		((TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389 *)__this)->set_m_Running_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_Destroy_m361937D6768C8F23EE9BBB837FD2B1B3B09C29C0 (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ((TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389 *)__this)->get_m_Running_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, __this);
	}

IL_000e:
	{
		IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::Destroy() */, L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_Stop_mEECF17D739C361F155CCE01501A6CC2670D74EBA (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ((TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389 *)__this)->get_m_Running_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::Stop() */, L_1);
	}

IL_0013:
	{
		((TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389 *)__this)->set_m_Running_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::set_planeDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_set_planeDetectionMode_mFBCAB04A242A76CD2BDB00FD922E4E887E45DE3D (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * L_0 = __this->get_m_Provider_2();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::set_planeDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode) */, L_0, L_1);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  XRPlaneSubsystem_GetChanges_m0487B4AE994BA3CE0DD7D9FA365856F4C9F5710B (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	{
		IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * L_0 = __this->get_m_Provider_2();
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_1 = __this->get_m_DefaultPlane_3();
		int32_t L_2 = ___allocator0;
		NullCheck(L_0);
		TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  L_3 = VirtFuncInvoker2< TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE , BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_GetBoundary_m8E8F373A0147BF4BB2E51B8EB12CBD85244A598F (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, int32_t ___allocator1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneSubsystem_GetBoundary_m8E8F373A0147BF4BB2E51B8EB12CBD85244A598F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___allocator1;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralE1C335A2C6879B71DEF15974899188C18337946C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneSubsystem_GetBoundary_m8E8F373A0147BF4BB2E51B8EB12CBD85244A598F_RuntimeMethod_var);
	}

IL_000f:
	{
		int32_t L_2 = ___allocator1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteralE332FA3F4AA7C1B36A55D7D5A431D2A3C360524D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XRPlaneSubsystem_GetBoundary_m8E8F373A0147BF4BB2E51B8EB12CBD85244A598F_RuntimeMethod_var);
	}

IL_001e:
	{
		IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * L_4 = __this->get_m_Provider_2();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ___trackableId0;
		int32_t L_6 = ___allocator1;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_7 = ___boundary2;
		NullCheck(L_4);
		VirtActionInvoker3< TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , int32_t, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * >::Invoke(7 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&) */, L_4, L_5, L_6, (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_7);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Start_m4D38DC661D6B3E3751199BDE4C720B4F2B080A8C (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Stop_mF203975BD8FAA2AD49702F8172D6E8D9677EC391 (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Destroy_m6A031344A40982844F9BF158D05EA847BCBDA390 (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_GetBoundary_mDFF4A2DB4FB60A6032D141463F0A6239EB0E0182 (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, int32_t ___allocator1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_GetBoundary_mDFF4A2DB4FB60A6032D141463F0A6239EB0E0182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, _stringLiteral2094B13032FCEFF9F44101810E1CE0C1EC613A12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IProvider_GetBoundary_mDFF4A2DB4FB60A6032D141463F0A6239EB0E0182_RuntimeMethod_var);
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  IProvider_GetChanges_m565968265ACB120BC15D83E38E4C1AA87796AE6F (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultPlane0, int32_t ___allocator1, const RuntimeMethod* method)
{
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE ));
		TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem_IProvider::set_planeDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_set_planeDetectionMode_m63A9D0C2BCC37166756E6C605A6F4AB80B439AEB (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsBoundaryVertices_m566A87DC259E6BFF79DA388547F9A7AC73A71849 (XRPlaneSubsystemDescriptor_t493CA5F0CB7E1F442AE0EE5332BB356314E5545E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_2();
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
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  XRRaycastHit_GetDefault_mB7D3A8CFE226FD38DDDA4B1C2DE3162FD3B6BE2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRRaycastHit_GetDefault_mB7D3A8CFE226FD38DDDA4B1C2DE3162FD3B6BE2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_2;
		memset((&L_2), 0, sizeof(L_2));
		XRRaycastHit__ctor_m522E98C4B6FD85F8386911C5BC497DE4968E3961((&L_2), L_0, L_1, (0.0f), 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRRaycastHit_get_pose_mE0B0A754E818C6FF3675A41CA95185A3E608C8C3 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRRaycastHit_get_pose_mE0B0A754E818C6FF3675A41CA95185A3E608C8C3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * _thisAdjusted = reinterpret_cast<XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *>(__this + 1);
	return XRRaycastHit_get_pose_mE0B0A754E818C6FF3675A41CA95185A3E608C8C3_inline(_thisAdjusted, method);
}
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_mC748DE6ED96B0C735DCA4AD320FA0BF522246D19 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Distance_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRRaycastHit_get_distance_mC748DE6ED96B0C735DCA4AD320FA0BF522246D19_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * _thisAdjusted = reinterpret_cast<XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *>(__this + 1);
	return XRRaycastHit_get_distance_mC748DE6ED96B0C735DCA4AD320FA0BF522246D19_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_m522E98C4B6FD85F8386911C5BC497DE4968E3961 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, float ___distance2, int32_t ___hitType3, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		__this->set_m_TrackableId_0(L_0);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose1;
		__this->set_m_Pose_1(L_1);
		float L_2 = ___distance2;
		__this->set_m_Distance_2(L_2);
		int32_t L_3 = ___hitType3;
		__this->set_m_HitType_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit__ctor_m522E98C4B6FD85F8386911C5BC497DE4968E3961_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, float ___distance2, int32_t ___hitType3, const RuntimeMethod* method)
{
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * _thisAdjusted = reinterpret_cast<XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *>(__this + 1);
	XRRaycastHit__ctor_m522E98C4B6FD85F8386911C5BC497DE4968E3961(_thisAdjusted, ___trackableId0, ___pose1, ___distance2, ___hitType3, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m74F67C2F858CF9669399A90DC761E0E763C0827F (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_TrackableId_0();
		int32_t L_1 = TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_2 = __this->get_address_of_m_Pose_1();
		int32_t L_3 = Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_m_Distance_2();
		int32_t L_5 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_m_HitType_3();
		V_0 = L_6;
		int32_t L_7 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycastHit_GetHashCode_m74F67C2F858CF9669399A90DC761E0E763C0827F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * _thisAdjusted = reinterpret_cast<XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *>(__this + 1);
	return XRRaycastHit_GetHashCode_m74F67C2F858CF9669399A90DC761E0E763C0827F(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m0A24B5C58B6CA930CDD05F6F17F54FD60DA10DE5 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRRaycastHit_Equals_m0A24B5C58B6CA930CDD05F6F17F54FD60DA10DE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRRaycastHit_Equals_m2E3F746F63AC5ED95DF5E79AB43C2DE8A8E42E60((XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)__this, ((*(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)((XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)UnBox(L_1, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_m0A24B5C58B6CA930CDD05F6F17F54FD60DA10DE5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * _thisAdjusted = reinterpret_cast<XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *>(__this + 1);
	return XRRaycastHit_Equals_m0A24B5C58B6CA930CDD05F6F17F54FD60DA10DE5(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m2E3F746F63AC5ED95DF5E79AB43C2DE8A8E42E60 (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___other0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_TrackableId_0();
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_1 = ___other0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = L_1.get_m_TrackableId_0();
		bool L_3 = TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_4 = __this->get_address_of_m_Pose_1();
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_5 = ___other0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = L_5.get_m_Pose_1();
		bool L_7 = Pose_Equals_m867264C8DF91FF8DC3AD957EF1625902CDEBAEDD((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		float* L_8 = __this->get_address_of_m_Distance_2();
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_9 = ___other0;
		float L_10 = L_9.get_m_Distance_2();
		bool L_11 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = __this->get_m_HitType_3();
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_13 = ___other0;
		int32_t L_14 = L_13.get_m_HitType_3();
		return (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
	}

IL_0048:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_m2E3F746F63AC5ED95DF5E79AB43C2DE8A8E42E60_AdjustorThunk (RuntimeObject * __this, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___other0, const RuntimeMethod* method)
{
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * _thisAdjusted = reinterpret_cast<XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *>(__this + 1);
	return XRRaycastHit_Equals_m2E3F746F63AC5ED95DF5E79AB43C2DE8A8E42E60(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystem_get_running_mBFE65B756056EDD2E1A6F3705A0EF160AE3A6250 (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_mE8BD2BFB3AFD44403F3A663CA5D5AAC707419506 (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRRaycastSubsystem__ctor_mE8BD2BFB3AFD44403F3A663CA5D5AAC707419506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Subsystem_1__ctor_m134908D621A09F653200766A20A68191B399091F(__this, /*hidden argument*/Subsystem_1__ctor_m134908D621A09F653200766A20A68191B399091F_RuntimeMethod_var);
		IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * L_0 = VirtFuncInvoker0< IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * >::Invoke(8 /* UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_2(L_0);
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_1 = XRRaycastHit_GetDefault_mB7D3A8CFE226FD38DDDA4B1C2DE3162FD3B6BE2F(/*hidden argument*/NULL);
		__this->set_m_DefaultRaycastHit_3(L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem_Start_m2E7F871C5D7EDA148909B5755340ABA7C675CFF6 (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::Start() */, L_1);
	}

IL_0013:
	{
		__this->set_m_Running_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem_Stop_mD7FDCC0828E583A482F10F87B7A72776EDCCBEFB (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::Stop() */, L_1);
	}

IL_0013:
	{
		__this->set_m_Running_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem_Destroy_m03960BF9754472F143237FC5F61DAB1695890698 (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, __this);
	}

IL_000e:
	{
		IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::Destroy() */, L_1);
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  XRRaycastSubsystem_Raycast_mD6335AB75E7AD15295138215F593EAB71754E6FA (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, int32_t ___trackableTypeMask1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * L_0 = __this->get_m_Provider_2();
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_1 = __this->get_m_DefaultRaycastHit_3();
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_2 = ___ray0;
		int32_t L_3 = ___trackableTypeMask1;
		int32_t L_4 = ___allocator2;
		NullCheck(L_0);
		NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  L_5 = VirtFuncInvoker4< NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 , XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , int32_t, int32_t >::Invoke(7 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  XRRaycastSubsystem_Raycast_m46598C4ACA7D6AC6B6DA53A92ED1349F327EC6BF (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint0, int32_t ___trackableTypeMask1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * L_0 = __this->get_m_Provider_2();
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_1 = __this->get_m_DefaultRaycastHit_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___screenPoint0;
		int32_t L_3 = ___trackableTypeMask1;
		int32_t L_4 = ___allocator2;
		NullCheck(L_0);
		NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  L_5 = VirtFuncInvoker4< NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 , XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , int32_t, int32_t >::Invoke(8 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Start_m9F256A119E21FD4B787D425A0D522F43925DA75B (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Stop_m93DFFEBF0309C7170B8F5B0991B01A49F0C3DEAB (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Destroy_m975BB77C976B07C32495BC91657E10C834A4294C (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  IProvider_Raycast_m70674ED49690ED8304135E4E57023D6F4EF031E6 (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___defaultRaycastHit0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_Raycast_m70674ED49690ED8304135E4E57023D6F4EF031E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, _stringLiteral40EB8A6D17A1FA9CEBAFE1F18BB8257C8CE3E703, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IProvider_Raycast_m70674ED49690ED8304135E4E57023D6F4EF031E6_RuntimeMethod_var);
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem_IProvider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  IProvider_Raycast_m82D63262EEC3A07B14B897B9D2549340D4FB4E82 (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___defaultRaycastHit0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_Raycast_m82D63262EEC3A07B14B897B9D2549340D4FB4E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, _stringLiteralC94A2BBDF45E627BA76EC101C53EBB78511EF25A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IProvider_Raycast_m82D63262EEC3A07B14B897B9D2549340D4FB4E82_RuntimeMethod_var);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsViewportBasedRaycast_mD71BE0D71A6B3B48DDAB480114F930293C40DF26 (XRRaycastSubsystemDescriptor_tDC6E6E465FE3E4D385429760EF0C84832A09A3D7 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsWorldBasedRaycast_m7CDCA8DFD75903B7169A59254A31EBCB1D1962BD (XRRaycastSubsystemDescriptor_tDC6E6E465FE3E4D385429760EF0C84832A09A3D7 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3();
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_running_m232754CAC70AAC3E051F0607A1B884CB06D80E8C (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * XRSessionSubsystem_GetAvailabilityAsync_mE1444BD33C0A1EAD4982FC0AE64D1251635487ED (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_1 = VirtFuncInvoker0< Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * >::Invoke(11 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::GetAvailabilityAsync() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_0 = Subsystem_1_get_SubsystemDescriptor_mD9F3F4ECB180FF40D21E57235A6D775BDB014D9B(__this, /*hidden argument*/Subsystem_1_get_SubsystemDescriptor_mD9F3F4ECB180FF40D21E57235A6D775BDB014D9B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_2, _stringLiteral39BF4FB45444043D19EFF93848D9F1A0BEA05065, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_RuntimeMethod_var);
	}

IL_0018:
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_3 = __this->get_m_Provider_2();
		NullCheck(L_3);
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_4 = VirtFuncInvoker0< Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * >::Invoke(12 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::InstallAsync() */, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Subsystem_1__ctor_m859AB7FE00DDB9E7C49DAA6F594CB4AF7B6E903F(__this, /*hidden argument*/Subsystem_1__ctor_m859AB7FE00DDB9E7C49DAA6F594CB4AF7B6E903F_RuntimeMethod_var);
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = VirtFuncInvoker0< IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * >::Invoke(8 /* UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Start_mD3C74ABE058ACDDB059F59039682E130F5AA1A56 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Resume() */, L_1);
	}

IL_0013:
	{
		__this->set_m_Running_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Reset_mA6596EEA8C670E2561986B54BB34E0F15A0D5836 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Reset() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Stop_m7FF9AB373659BAB5015E0B29C04DF0BDEE5E40B8 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Pause() */, L_1);
	}

IL_0013:
	{
		__this->set_m_Running_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Destroy_mD1D9972523A8C2234B60819401BA0DDB836108D4 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, __this);
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Destroy() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Update_m168E0641976ED5CD2084BD32692044A2D361B945 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  L_1 = ___updateParams0;
		NullCheck(L_0);
		VirtActionInvoker1< XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  >::Invoke(6 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationPause_mE53A32290C253F808E5B14A11B7917286E86B08A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationPause() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationResume_m4103D0866A4152C9A52E52A306D85EBAD8405F2F (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationResume() */, L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m6CEDC16CB9B224A0302A83BC2C22FC4C0905EB30 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(13 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_trackingState() */, L_0);
		return L_1;
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Resume_mFF2916A860B63F7961E271A1ED22C46225086C9C (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Pause_mFCDC4EDABBB96ED1C5CEDD562B2B03E7EB8EDC46 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Update_m24FCFC96A04E93D1B798A3B197CD2DE361ECBB02 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Destroy_mE25C4725EC835DDDEAAF9250A8705114F5F49FCA (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_Reset_m33C31E9E21380A8D382CC4597D26BDE7FE396003 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_OnApplicationPause_m1EE8D07B8A1B5C6AD9F46AEC4E111BCA900E82C0 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider_OnApplicationResume_mCFD34D915506E46686589E011E208F29AC09795A (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_0 = Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D(0, /*hidden argument*/Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_0 = Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA(4, /*hidden argument*/Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IProvider_get_trackingState_m3D36F03D7C209523EDDFEF23BAFDBD41B56E1128 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_2();
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
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CscreenOrientationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CscreenOrientationU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_U3CscreenDimensionsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = ___value0;
		__this->set_U3CscreenDimensionsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905_AdjustorThunk (RuntimeObject * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_2 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&V_1), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, ((*(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)UnBox(L_1, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1(_thisAdjusted, ___obj0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var, &L_1);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_3 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralB39A7E18F4E7B76A8C729E54E8852F98B5EA76F3, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method)
{
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_2 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_3 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___other0), /*hidden argument*/NULL);
		bool L_4 = Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3_AdjustorThunk (RuntimeObject * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CDUnity_XR_ARSubsystems_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var))->get_s_InvalidId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_subsumedById_m77895AF3F9E056F4816CB9177209586E98967889_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_SubsumedById_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_center_m1AB8ED2CBDC8F4A85358F98A8DD832436818505F_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_Center_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoundedPlane_get_size_mC49BFA58CD7CE92C2470C82F30EA6F8A4F38B854_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_Size_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m85C46D81426435F0B9399ABAF80AC5342A2F7137_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Alignment_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m715E5D9C20481ED26B239C0865C9A934EB114E8F_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_NativePtr_7();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRRaycastHit_get_pose_mE0B0A754E818C6FF3675A41CA95185A3E608C8C3_inline (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_mC748DE6ED96B0C735DCA4AD320FA0BF522246D19_inline (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Distance_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99_inline (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CscreenOrientationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CscreenOrientationU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_U3CscreenDimensionsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905_inline (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = ___value0;
		__this->set_U3CscreenDimensionsU3Ek__BackingField_1(L_0);
		return;
	}
}
