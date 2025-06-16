#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE;
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
struct IEnumerable_1_t2C4D9984AB26780B7445A7F8E2CB39EF08BE2915;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerator_1_tFD3F5331C33DF06B3C764F78468E77157AB47845;
struct IList_1_tA4D2CEB6A7157EA1B92994D6BCC4DD1CACF640BC;
struct List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169;
struct ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39;
struct FlacMetadataU5BU5D_tCD8A3DCB497406E86FD3CD53D2B1E87382DE5CD4;
struct FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CRC8_t9264461E1AE072D1D6E3B267F1FD453431C35C6D;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct Exception_t;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40;
struct FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80;
struct FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46;
struct FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD;
struct FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482;
struct FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0;
struct FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97;
struct FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA;
struct FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD;
struct FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8;
struct FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD;
struct FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E;
struct FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234;
struct FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A;
struct FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497;
struct FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7;
struct FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
struct MethodInfo_t;
struct MulticastDelegate_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
struct U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657;
struct U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tFDFC7BF86756916487291BC20E8DA6C2D89BE968____01D3A3B95A2D93AA179AF2264EDC31F618F5BD6E_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01BC0F9E6764D832B94B324819C01ED5E779071B;
IL2CPP_EXTERN_C String_t* _stringLiteral3F72E28BC2ED6B4358A7DCAE9AF6CD3A89D12B5C;
IL2CPP_EXTERN_C String_t* _stringLiteral5EEDE076CD07BE02CA0EB65C2F344F1813802E95;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCBD8F10928149BEE06DBF3E61F38930493A1A6;
IL2CPP_EXTERN_C String_t* _stringLiteralCB067D8C2B4F1D81CEA5E48F8045179F85C26494;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C5AF5E6CAA52085A29464DD6CE39FFBACE19EE;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA608EC310F707363709EB91E7AB5ABFCC06402;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_m0715CE1AA3A059D32E21203D34661313A013B7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB2BB345883C3D749345EB33B631AA10E7496E8D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC05F00A0B55373DCCC5BAD69438A892759548D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacFrameHeader__ctor_mAFFA21F519C584DE535F7397A7474447B69B5600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacMetadataSeekTable__ctor_mD32C04A3052838C60AC15381FAE186C60A510E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacMetadataStreamInfo__ctor_m8A04D8B0FF955656AF6753E1E991333B4B97AF8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacMetadata_FromStream_m646EA0553D08D2853D384462B858C4E29B8362D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacPreScan_StartScan_m1B0CB764EAB83B834F3740F018CDDAE2FEF14C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacPreScan__ctor_m5A6FDD3E2AA37F2DDD0BEF48F208D78FA3784AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacResidual__ctor_m08367145E362EE8FB81978CB9177DE48E95D3940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlacSubFrameLPC__ctor_m851729811514BC6274CE8F2AA2C2749BEA48E2C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_mA392A65EE53C5023B175561B3850AA6F3A76EF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m07B71F8D858BE9AC9981BAAA366C2F01FB37F5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m44DDF1115E1836E5822E01F24CB8E96993A8746E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_IEnumerator_Reset_mE73BBF435B5655581FFC6817EA4D10183DB56860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CStartScanU3Eb__0_m48A01C760D2AD1D2E7037B208D618091DB9FAC52_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39;
struct FlacMetadataU5BU5D_tCD8A3DCB497406E86FD3CD53D2B1E87382DE5CD4;
struct FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct CRCBase_1_t7A7A93BC0C26FEE280889B4F874A191DBEF59CE3  : public RuntimeObject
{
	int32_t ___tableSize;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___crc_table;
};
struct List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169  : public RuntimeObject
{
	FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer;
	int32_t ___m_maxCharsSize;
	bool ___m_2BytesPerChar;
	bool ___m_isMemoryStream;
	bool ___m_leaveOpen;
};
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD  : public RuntimeObject
{
};
struct FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46  : public RuntimeObject
{
	int32_t ____blocksizeHint;
	int32_t ____sampleRateHint;
	int32_t ___U3CBlockSizeU3Ek__BackingField;
	int32_t ___U3CSampleRateU3Ek__BackingField;
	int32_t ___U3CChannelsU3Ek__BackingField;
	int32_t ___U3CChannelAssignmentU3Ek__BackingField;
	int32_t ___U3CBitsPerSampleU3Ek__BackingField;
	int32_t ___U3CBlockingStrategyU3Ek__BackingField;
	int64_t ___U3CSampleNumberU3Ek__BackingField;
	int32_t ___U3CFrameNumberU3Ek__BackingField;
	uint8_t ___U3CCrc8U3Ek__BackingField;
	bool ___U3CDoCrcU3Ek__BackingField;
	bool ___U3CHasErrorU3Ek__BackingField;
	int64_t ___U3CStreamPositionU3Ek__BackingField;
	bool ___PrintErrors;
};
struct FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD  : public RuntimeObject
{
	int32_t ___U3CMetaDataTypeU3Ek__BackingField;
	bool ___U3CIsLastMetaBlockU3Ek__BackingField;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct FlacPartitionedRice_t8F78D48FE9DF9BB0A9E0F5C3DB0E3F77A077B646  : public RuntimeObject
{
};
struct FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Parameters;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RawBits;
	int32_t ____capByOrder;
};
struct FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream;
	bool ____isRunning;
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* ___ScanFinished;
	List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___U3CFramesU3Ek__BackingField;
	int64_t ___U3CTotalLengthU3Ek__BackingField;
	int64_t ___U3CTotalSamplesU3Ek__BackingField;
};
struct FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8  : public RuntimeObject
{
};
struct FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD  : public RuntimeObject
{
	int64_t ___PlaceHolderPointSampleNumber;
	int64_t ___U3CSampleNumberU3Ek__BackingField;
	int64_t ___U3COffsetU3Ek__BackingField;
	int32_t ___U3CFrameSizeU3Ek__BackingField;
};
struct FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E  : public RuntimeObject
{
};
struct FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A  : public RuntimeObject
{
	int32_t* ___DestinationBuffer;
	int32_t* ___ResidualBuffer;
	FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* ___Content;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CU3E3__stream;
	FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* ___U3CdataU3E5__1;
};
struct U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED  : public RuntimeObject
{
	FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___streamInfo;
	FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* ___U3CU3E4__this;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CRC8_t9264461E1AE072D1D6E3B267F1FD453431C35C6D  : public CRCBase_1_t7A7A93BC0C26FEE280889B4F874A191DBEF59CE3
{
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E 
{
	FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___U3CHeaderU3Ek__BackingField;
	bool ___U3CIsFirstFrameU3Ek__BackingField;
	int64_t ___U3CStreamOffsetU3Ek__BackingField;
	int64_t ___U3CSampleOffsetU3Ek__BackingField;
};
struct FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_pinvoke
{
	FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___U3CHeaderU3Ek__BackingField;
	int32_t ___U3CIsFirstFrameU3Ek__BackingField;
	int64_t ___U3CStreamOffsetU3Ek__BackingField;
	int64_t ___U3CSampleOffsetU3Ek__BackingField;
};
struct FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_com
{
	FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___U3CHeaderU3Ek__BackingField;
	int32_t ___U3CIsFirstFrameU3Ek__BackingField;
	int64_t ___U3CStreamOffsetU3Ek__BackingField;
	int64_t ___U3CSampleOffsetU3Ek__BackingField;
};
struct FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482  : public FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD
{
	FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122* ____seekPoints;
	int32_t ___U3CEntryCountU3Ek__BackingField;
};
struct FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0  : public FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD
{
	int16_t ___U3CMinBlockSizeU3Ek__BackingField;
	int16_t ___U3CMaxBlockSizeU3Ek__BackingField;
	int32_t ___U3CMaxFrameSizeU3Ek__BackingField;
	int32_t ___U3CMinFrameSizeU3Ek__BackingField;
	int32_t ___U3CSampleRateU3Ek__BackingField;
	int32_t ___U3CChannelsU3Ek__BackingField;
	int32_t ___U3CBitsPerSampleU3Ek__BackingField;
	int64_t ___U3CTotalSamplesU3Ek__BackingField;
	String_t* ___U3CMd5U3Ek__BackingField;
};
struct FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* ___U3CFramesU3Ek__BackingField;
};
struct FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234  : public FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E
{
};
struct FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497  : public FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E
{
};
struct FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7  : public FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E
{
};
struct FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B  : public FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread;
	RuntimeObject* ___m_ThreadStartArg;
	RuntimeObject* ___pending_exception;
	MulticastDelegate_t* ___m_Delegate;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext;
	bool ___m_ExecutionContextBelongsToOuterScope;
	RuntimeObject* ___principal;
	int32_t ___principal_version;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E 
{
	List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ____list;
	int32_t ____index;
	int32_t ____version;
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E ____current;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF  : public RuntimeObject
{
	uint8_t* ____storedBuffer;
	int32_t ____bitoffset;
	uint8_t* ____buffer;
	uint32_t ____cache;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____hBuffer;
	int32_t ____position;
};
struct FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80  : public Exception_t
{
	int32_t ___U3CLayerU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE  : public MulticastDelegate_t
{
};
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40  : public BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF
{
};
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
struct List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169_StaticFields
{
	FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39* ___s_emptyArray;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty;
};
struct FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___SampleRateTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___BitPerSampleTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___FlacBlockSizes;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CRC8_t9264461E1AE072D1D6E3B267F1FD453431C35C6D_StaticFields
{
	CRC8_t9264461E1AE072D1D6E3B267F1FD453431C35C6D* ____instance;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture;
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture;
};
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___UnaryTable;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct FlacMetadataU5BU5D_tCD8A3DCB497406E86FD3CD53D2B1E87382DE5CD4  : public RuntimeArray
{
	ALIGN_FIELD (8) FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* m_Items[1];

	inline FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122  : public RuntimeArray
{
	ALIGN_FIELD (8) FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* m_Items[1];

	inline FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39  : public RuntimeArray
{
	ALIGN_FIELD (8) FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E m_Items[1];

	inline FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CHeaderU3Ek__BackingField), (void*)NULL);
	}
	inline FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CHeaderU3Ek__BackingField), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* List_1_AsReadOnly_mA392A65EE53C5023B175561B3850AA6F3A76EF40_gshared (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E List_1_GetEnumerator_m07B71F8D858BE9AC9981BAAA366C2F01FB37F5A0_gshared (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB2BB345883C3D749345EB33B631AA10E7496E8D5_gshared (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_gshared_inline (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC05F00A0B55373DCCC5BAD69438A892759548D9C_gshared (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m44DDF1115E1836E5822E01F24CB8E96993A8746E_gshared (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_gshared_inline (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAB7F3CE282225F2E719E75BB2775B362E89350AD_gshared (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRiceContent__ctor_m8A53BFAD6D644957A13CC64D1318F48A4DB97F2C (FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9 (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, int32_t ___0_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FlacBitReader_ReadUnary_mE6DD659B82CE9F40807C0F7F8819A5485D179ECC (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameConstant__ctor_m3E4BA6EA629FFB6D51FCDD5146451F676F561D50 (FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_bitsPerSample, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameVerbatim__ctor_m1EE5126070C4DFEAD1EF6271CA67390EB70AF0A5 (FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_bitsPerSample, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameLPC__ctor_m851729811514BC6274CE8F2AA2C2749BEA48E2C0 (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_bitsPerSample, int32_t ___4_order, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameFixed__ctor_m87D1EF1A116C9D69A2A0FFAC6DF19FC76EEB5D75 (FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_bitsPerSample, int32_t ___4_order, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadata__ctor_m82D63EBDEC34C759064E00F6D436A902F4058E36 (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_type, bool ___1_lastBlock, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD85F293A64917055AA78D504B87E5F7B81E4FD46 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MinBlockSize_mC8673AA35935CB55DBE3EA07EC5AE2B247D7FC55_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MaxBlockSize_m5985C056322EDE78B9A5B3BCB94D3800516044BC_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacException__ctor_m53BB743F7B0239EC43A4E0B0BD9D598804994735 (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* __this, Exception_t* ___0_innerException, int32_t ___1_layer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacBitReader__ctor_mDA57731B3816EA3A0F3F77F2E3AD7E17319C9302 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, uint8_t* ___0_buffer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MinFrameSize_mFC2A9C0E62D20206EEB55164FBBA126572F53672_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MaxFrameSize_mCF3A8298150F77B505CAF4702FE58B7B0FB516F9_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_SampleRate_m566F176EA48162C05284498E5F6FB80C94197ACA_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_Channels_mE2D86828D60FD04C98C6E95C4BA3F93DB149A83E_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_BitsPerSample_mECB6E178D793E336C2EEEBD0CAAB6B00C4AF3BE2_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitReader_ReadBits64_m5DE5F97BB5607338BBB2194CAB9CD79BDCE9BC5E (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, int32_t ___0_bits, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_TotalSamples_m09E2FE9953DFEF63A651B2C67596B099B4E043C6_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_Md5_mBD99E5646F0872F3DED16D534486240EF805805D_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader__ctor_mAFFA21F519C584DE535F7397A7474447B69B5600 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, bool ___2_doCrc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_DoCrc_mEB06A78543A645E0644CA05454B9EE18F82EBB06_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_StreamPosition_mC0B7F353B62889A4582CF7D7B6CB283D4D726194_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_ParseHeader_mA13DC5A3766D8B3F8B34575FAB630FD0858BA8FC (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_HasError_m03DD07B9F23DD49A5CF1D216D90B89DBD3D8C31E_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader__ctor_mEAA0828225540309266E280EAB04C85A3115E2BA (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t** ___0_buffer, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, bool ___2_doCrc, bool ___3_logError, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_ParseHeader_m095014A9329CBBBDD653F257D7726CBCA2035465 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t** ___0_headerBuffer, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BlockSize_mE1960FD3CDC3C95E44B09D582ED9B6EBA6595DD3_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_SampleRate_mF6606EE4DB937375B138F09C807CDCAD20A44E84_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_SampleRate_m0DEECDF66E3B6075DB55859A3810840E51C6DA97_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_ChannelAssignment_m2A20BEEF0A5DEDC14FDDD270B5AFAB5E10D2A584_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_Channels_m95722D4AB4BE559279F08B8A53840E829541156B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_BitsPerSample_mD7BC750D63E39455B9C606634D7BFD6BE86D91F7_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BitsPerSample_mF8F051281176E9F75CB44C7B3E954FD9BEFF214F_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t FlacMetadataStreamInfo_get_MinBlockSize_m0EDDE521BEB22937873145E4F088A2A74E607D54_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t FlacMetadataStreamInfo_get_MaxBlockSize_m96E6123A709CCC8E1E635DA6B220B7A630EFEBBE_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacBitReader_ReadUTF8_64_m62F3DF97039CB2D8445329DB0578E3727A4FCBEF (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, uint64_t* ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BlockingStrategy_m7D5546CD33A3C2E067AD41F2A60B72A74475F215_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_SampleNumber_mE80FE281D9179F8954F4181B69ED49195E66E240_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacBitReader_ReadUTF8_32_m23346DBB1A31B29D56E5FDFF557D07763657A922 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, uint32_t* ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_FrameNumber_m103E28731FAF73D5351AC10ACEEF0711EDDF0C4B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacFrameHeader_get_DoCrc_mEC039964627D18018803E7BB5C64721A12F1C1B6_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CRC8_t9264461E1AE072D1D6E3B267F1FD453431C35C6D* CRC8_get_Instance_m7F75AD6FC6F47FABEB93E30089B8457D7345DD3F (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* BitReader_get_Buffer_m72D288CA63B9EC07F4B564D7DC7E01023428BE2D_inline (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitReader_get_Position_mDF7B7F2AC08E572A09A896B23125FE84050CAB72_inline (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CRC8_CalcCheckSum_m4242BC557DE2C550CD68CF68BEF6653104B899A3 (CRC8_t9264461E1AE072D1D6E3B267F1FD453431C35C6D* __this, uint8_t* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_Crc8_mBA29531A29EE8D3D6482E787085BC40BA92088D2_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t FlacFrameHeader_get_Crc8_mA25E9FEC8FC88B3D080F24F7AD799FF4424F372B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_BitsPerSample_mD996991E78EF56E101C68EA8212183D8B5DABDD9_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_Channels_m2F2A17D9026CA512946D48F6743B06D74FC9170B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_SampleRate_mF08F52A625C858A4B38857E7949838258426447D_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader__ctor_mC792D1D2EB2A26B2EA18CF599ACC2F4EFBF7E59E (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader__ctor_mA437F1B11EF3B0F4286E446BF9FF79904E522223 (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, uint8_t* ___0_buffer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader_SeekBits_m14A3A016332D3C9A95F767C047AB8A9765EAC333 (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, int32_t ___0_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
inline ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* List_1_AsReadOnly_mA392A65EE53C5023B175561B3850AA6F3A76EF40 (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* (*) (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169*, const RuntimeMethod*))List_1_AsReadOnly_mA392A65EE53C5023B175561B3850AA6F3A76EF40_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScanFinishedEventArgs_set_Frames_m264D6DB77F9D8B188FE016865EA96FC3ED2D3345_inline (FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* __this, ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo__ctor_m8A04D8B0FF955656AF6753E1E991333B4B97AF8E (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_length, bool ___2_lastBlock, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataSeekTable__ctor_mD32C04A3052838C60AC15381FAE186C60A510E42 (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_length, bool ___2_lastBlock, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllMetadataFromStreamU3Ed__1__ctor_mF181EECD929B7C9AA786E6BB82E48AC00FEA3BE6 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlacMetadata_ReadAllMetadataFromStream_mC1070DA7CCC2E66E65D920A49931E9C13D0FCB32 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
inline FlacMetadataU5BU5D_tCD8A3DCB497406E86FD3CD53D2B1E87382DE5CD4* Enumerable_ToArray_TisFlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_m0715CE1AA3A059D32E21203D34661313A013B7B8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  FlacMetadataU5BU5D_tCD8A3DCB497406E86FD3CD53D2B1E87382DE5CD4* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadata_set_MetaDataType_m84645E9F8EA0F260998FB8FBD144CD28C3DB887F_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadata_set_IsLastMetaBlock_mA7612D63FC0D096E525EDBB187A514555217D555_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadata_set_Length_m65DD77A7B97D53F2056D862769E8AB292F6D078A_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* FlacMetadata_FromStream_m646EA0553D08D2853D384462B858C4E29B8362D6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacMetadata_get_IsLastMetaBlock_mFF8CBB946A196DBE8BE04D3D958D9D15AFD787CC_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_Generic_IEnumerableU3CCSCore_Codecs_FLAC_FlacMetadataU3E_GetEnumerator_mF1A484683FCE2EC1DC5939835335E046FDBF4E98 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_StartScan_m1B0CB764EAB83B834F3740F018CDDAE2FEF14C26 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___0_streamInfo, int32_t ___1_mode, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* FlacPreScan_get_Frames_m96102FC47107EEAB79043BB27B73939C3251BBE6_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, const RuntimeMethod* method) ;
inline Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E List_1_GetEnumerator_m07B71F8D858BE9AC9981BAAA366C2F01FB37F5A0 (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E (*) (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169*, const RuntimeMethod*))List_1_GetEnumerator_m07B71F8D858BE9AC9981BAAA366C2F01FB37F5A0_gshared)(__this, method);
}
inline void Enumerator_Dispose_mB2BB345883C3D749345EB33B631AA10E7496E8D5 (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E*, const RuntimeMethod*))Enumerator_Dispose_mB2BB345883C3D749345EB33B631AA10E7496E8D5_gshared)(__this, method);
}
inline FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_inline (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E* __this, const RuntimeMethod* method)
{
	return ((  FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E (*) (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E*, const RuntimeMethod*))Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mC05F00A0B55373DCCC5BAD69438A892759548D9C (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E*, const RuntimeMethod*))Enumerator_MoveNext_mC05F00A0B55373DCCC5BAD69438A892759548D9C_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScan_set_TotalLength_mF1476FE9C3931DC062C05DF682EC78846F7FF7A1_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScan_set_TotalSamples_mD2664B2766ADC93AC58C0BD3BF2495BC64D7EE19_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m998F0C5BAC8975BF07483336AC403A71B315E024 (U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* FlacPreScan_RunScan_m65F0017DBB718EDFF40A878EDF55ECF0BC0816A6 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___0_streamInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScan_set_Frames_mCB0194F2FB1CA14640BFDFEC9B304032C563754F_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* FlacPreScan_ScanThisShit_mA887BD2235E35994470BA9EA1493C2D65919332D (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___0_streamInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_RaiseScanFinished_m7EBA624F613699BE84BA6DB17BB6A2EF9CF1FD61 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___0_frames, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScanFinishedEventArgs__ctor_mD3DA32715D5AD318BEC30CFC8BB1D2023D871266 (FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* __this, List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___0_frames, const RuntimeMethod* method) ;
inline void EventHandler_1_Invoke_m0EE56573787FA69924070D413B7014365E9BCAA0_inline (EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* __this, RuntimeObject* ___0_sender, FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*, RuntimeObject*, FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadata_SkipMetadata_m4AC942E174ED1AC2F3012A8D0B823058835609B6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
inline void List_1__ctor_m44DDF1115E1836E5822E01F24CB8E96993A8746E (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169*, const RuntimeMethod*))List_1__ctor_m44DDF1115E1836E5822E01F24CB8E96993A8746E_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_IsFirstFrame_mFF528869D7640D40EE66F41C0441528D12D91F81_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacPreScan_IsFrame_m6BE3B75E2C23C3FB981661DE16441EAC34C480EA (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, uint8_t** ___0_buffer, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46** ___2_header, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacFrameInformation_get_IsFirstFrame_mAF9EFA2E50AC9980630137D5A21F807EEC8C4002_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_IsFormatEqualTo_mB842B23CE3D8677E0252F920180D368A0B60ADF4 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_StreamOffset_m4D635D167C1F66B39694113A5C114D521CFBA17F_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_Header_mFED08C61F2CD6A6527CF6E83C5207B0E8095B9BC_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_value, const RuntimeMethod* method) ;
inline void List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_inline (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169*, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E, const RuntimeMethod*))List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t FlacFrameInformation_get_SampleOffset_mA328BCEA4FB720802D88B3318653DCE2A2463C57_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_SampleOffset_mC6B1C1A2DCB4C35F8C57FD423A2E6C1E485D556E_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacFrameHeader_get_HasError_mACE7D2B8D8FBEDAC3FB5B45918A0A091294915E3_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t FlacFrameInformation_get_StreamOffset_m703163CE91BDC5849C4C3A323EF076DB7C949B93_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataSeekTable_set_EntryCount_m4A3C390031716091067E099DFA2FAC26704FE7E7_inline (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSeekPoint__ctor_mEC5CB83596A4ABDA2D7EF3ABC3FD1593563961E5 (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_sampleNumber, int64_t ___1_offset, int32_t ___2_frameSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacSeekPoint_set_SampleNumber_mA10FAD1E5580494621228BD66701B737194A820E_inline (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacSeekPoint_set_Offset_mB4808E52C3C94C72F6D03DA948E3F867A3590057_inline (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacSeekPoint_set_FrameSize_m34CAE7D6FA22211EEA623C36C7B81FF8E920BCDC_inline (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRiceContent_UpdateSize_m7E0C168C585BF88ED3C1DB5E96CB13C30CFDDCC1 (FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* __this, int32_t ___0_partitionOrder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitReader_ReadBitsSigned_m3FCB08DE4A5B616455E804675FFCE67E74130611 (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, int32_t ___0_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRice_ReadFlacRiceBlock_mAF4D873D3FC3AE99041213FD8D2B5F76B42FD74F (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, int32_t ___1_nvals, int32_t ___2_riceParameter, int32_t* ___3_ptrDest, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacBitReader_ReadUnarySigned_m280CF634E7DE07DF34980E9CF4B7846C1033A4BE (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRice_ProcessResidual_mF105ACAD6BE5DCAFD894E4AEE15375677B53CE43 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_order, int32_t ___4_partitionOrder, int32_t ___5_codingMethod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacException__ctor_mC3B5E3D8221F165400D744F6B83AE40B8B74E3A7 (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* __this, String_t* ___0_message, int32_t ___1_layer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameBase__ctor_mD7EE6B5C2F65C54462B89C5597166610E788C597 (FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_header, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacResidual__ctor_m08367145E362EE8FB81978CB9177DE48E95D3940 (FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_order, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacSubFrameLPC_Log2_m900F84B6DB56096432F13B782D07B5AF363F2B74 (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameLPC_RestoreLPCSignal32_mCAF1CC26DE28FFA286AC6C95E790C8035D11172A (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, int32_t* ___0_residual, int32_t* ___1_destination, int32_t ___2_length, int32_t ___3_order, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_qlpCoeff, int32_t ___5_lpcShiftNeeded, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameLPC_RestoreLPCSignal64_mDB4D7D145773FEEC21A7EE308FF6956486A0DDC5 (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, int32_t* ___0_residual, int32_t* ___1_destination, int32_t ___2_length, int32_t ___3_order, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_qlpCoeff, int32_t ___5_lpcShiftNeeded, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mAB7F3CE282225F2E719E75BB2775B362E89350AD (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169*, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E, const RuntimeMethod*))List_1_AddWithResize_mAB7F3CE282225F2E719E75BB2775B362E89350AD_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameData__ctor_mA31CD61374DAB19277D01216AF3BE9A641652371 (FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* L_0 = (FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97*)il2cpp_codegen_object_new(FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97_il2cpp_TypeInfo_var);
		FlacPartitionedRiceContent__ctor_m8A53BFAD6D644957A13CC64D1318F48A4DB97F2C(L_0, NULL);
		__this->___Content = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Content), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E* FlacSubFrameBase_GetSubFrame_m3E334D693D6B3013DE447D3CE29C0A18E95B57A5 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___1_data, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___2_header, int32_t ___3_bitsPerSample, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E* V_4 = NULL;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t* V_7 = NULL;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_0 = ___0_reader;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_0, 8, NULL);
		V_2 = L_1;
		uint32_t L_2 = V_2;
		if (!((int32_t)((int32_t)L_2&((int32_t)128))))
		{
			goto IL_0015;
		}
	}
	{
		return (FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E*)NULL;
	}

IL_0015:
	{
		uint32_t L_3 = V_2;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_5 = ___0_reader;
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = FlacBitReader_ReadUnary_mE6DD659B82CE9F40807C0F7F8819A5485D179ECC(L_5, NULL);
		V_6 = L_6;
		int32_t L_7 = V_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = ___3_bitsPerSample;
		int32_t L_9 = V_0;
		___3_bitsPerSample = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_0031:
	{
		uint32_t L_10 = V_2;
		V_5 = ((int32_t)((uint32_t)((int32_t)((int32_t)L_10&((int32_t)126)))>>1));
		uint32_t L_11 = V_5;
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_12 = ___0_reader;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_13 = ___2_header;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_14 = ___1_data;
		int32_t L_15 = ___3_bitsPerSample;
		FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234* L_16 = (FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234*)il2cpp_codegen_object_new(FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234_il2cpp_TypeInfo_var);
		FlacSubFrameConstant__ctor_m3E4BA6EA629FFB6D51FCDD5146451F676F561D50(L_16, L_12, L_13, L_14, L_15, NULL);
		V_4 = L_16;
		goto IL_009a;
	}

IL_004a:
	{
		uint32_t L_17 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_18 = ___0_reader;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_19 = ___2_header;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_20 = ___1_data;
		int32_t L_21 = ___3_bitsPerSample;
		FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B* L_22 = (FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B*)il2cpp_codegen_object_new(FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B_il2cpp_TypeInfo_var);
		FlacSubFrameVerbatim__ctor_m1EE5126070C4DFEAD1EF6271CA67390EB70AF0A5(L_22, L_18, L_19, L_20, L_21, NULL);
		V_4 = L_22;
		goto IL_009a;
	}

IL_005c:
	{
		uint32_t L_23 = V_5;
		if (!((int32_t)((int32_t)L_23&((int32_t)32))))
		{
			goto IL_0079;
		}
	}
	{
		uint32_t L_24 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_24&((int32_t)31))), 1));
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_25 = ___0_reader;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_26 = ___2_header;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_27 = ___1_data;
		int32_t L_28 = ___3_bitsPerSample;
		int32_t L_29 = V_1;
		FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* L_30 = (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7*)il2cpp_codegen_object_new(FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7_il2cpp_TypeInfo_var);
		FlacSubFrameLPC__ctor_m851729811514BC6274CE8F2AA2C2749BEA48E2C0(L_30, L_25, L_26, L_27, L_28, L_29, NULL);
		V_4 = L_30;
		goto IL_009a;
	}

IL_0079:
	{
		uint32_t L_31 = V_5;
		if (!((int32_t)((int32_t)L_31&8)))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_32 = V_5;
		V_1 = ((int32_t)((int32_t)L_32&7));
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) <= ((int32_t)4)))
		{
			goto IL_008a;
		}
	}
	{
		return (FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E*)NULL;
	}

IL_008a:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_34 = ___0_reader;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_35 = ___2_header;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_36 = ___1_data;
		int32_t L_37 = ___3_bitsPerSample;
		int32_t L_38 = V_1;
		FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497* L_39 = (FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497*)il2cpp_codegen_object_new(FlacSubFrameFixed_tB73A69170884FF6D67F1CAFF2448D2FB4139C497_il2cpp_TypeInfo_var);
		FlacSubFrameFixed__ctor_m87D1EF1A116C9D69A2A0FFAC6DF19FC76EEB5D75(L_39, L_34, L_35, L_36, L_37, L_38, NULL);
		V_4 = L_39;
		goto IL_009a;
	}

IL_0098:
	{
		return (FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E*)NULL;
	}

IL_009a:
	{
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_00c9;
		}
	}
	{
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_41 = ___1_data;
		NullCheck(L_41);
		int32_t* L_42 = L_41->___DestinationBuffer;
		V_7 = L_42;
		V_8 = 0;
		goto IL_00bf;
	}

IL_00aa:
	{
		int32_t* L_43 = V_7;
		int32_t* L_44 = L_43;
		V_7 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_44, 4));
		int32_t* L_45 = L_44;
		int32_t L_46 = *((int32_t*)L_45);
		int32_t L_47 = V_0;
		*((int32_t*)L_45) = (int32_t)((int32_t)(L_46<<((int32_t)(L_47&((int32_t)31)))));
		int32_t L_48 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00bf:
	{
		int32_t L_49 = V_8;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_50 = ___2_header;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_50, NULL);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_00aa;
		}
	}

IL_00c9:
	{
		FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E* L_52 = V_4;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameBase__ctor_mD7EE6B5C2F65C54462B89C5597166610E788C597 (FlacSubFrameBase_t52488A40A9432ED1516744FF7A9B79AD5C56209E* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_header, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo__ctor_m8A04D8B0FF955656AF6753E1E991333B4B97AF8E (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_length, bool ___2_lastBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* V_2 = NULL;
	uint8_t* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = ___2_lastBlock;
		int32_t L_1 = ___1_length;
		FlacMetadata__ctor_m82D63EBDEC34C759064E00F6D436A902F4058E36(__this, 0, L_0, L_1, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_mD85F293A64917055AA78D504B87E5F7B81E4FD46(L_4, L_2, L_3, NULL);
		V_0 = L_4;
	}
	try
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = V_0;
		NullCheck(L_5);
		int16_t L_6;
		L_6 = VirtualFuncInvoker0< int16_t >::Invoke(13, L_5);
		FlacMetadataStreamInfo_set_MinBlockSize_mC8673AA35935CB55DBE3EA07EC5AE2B247D7FC55_inline(__this, L_6, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = V_0;
		NullCheck(L_7);
		int16_t L_8;
		L_8 = VirtualFuncInvoker0< int16_t >::Invoke(13, L_7);
		FlacMetadataStreamInfo_set_MaxBlockSize_m5985C056322EDE78B9A5B3BCB94D3800516044BC_inline(__this, L_8, NULL);
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_002f:
	{
		V_2 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = V_2;
		FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* L_10 = (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var)));
		FlacException__ctor_m53BB743F7B0239EC43A4E0B0BD9D598804994735(L_10, L_9, 1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacMetadataStreamInfo__ctor_m8A04D8B0FF955656AF6753E1E991333B4B97AF8E_RuntimeMethod_var)));
	}

IL_0038:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25, L_11, ((int32_t)14));
		V_1 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) == ((int32_t)((int32_t)14))))
		{
			goto IL_0059;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_14 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5EEDE076CD07BE02CA0EB65C2F344F1813802E95)), NULL);
		FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* L_15 = (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var)));
		FlacException__ctor_m53BB743F7B0239EC43A4E0B0BD9D598804994735(L_15, L_14, 1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacMetadataStreamInfo__ctor_m8A04D8B0FF955656AF6753E1E991333B4B97AF8E_RuntimeMethod_var)));
	}

IL_0059:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_4 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006a;
		}
	}

IL_0065:
	{
		V_3 = (uint8_t*)((uintptr_t)0);
		goto IL_0073;
	}

IL_006a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		NullCheck(L_19);
		V_3 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0073:
	{
		uint8_t* L_20 = V_3;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_21 = (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40*)il2cpp_codegen_object_new(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		FlacBitReader__ctor_mDA57731B3816EA3A0F3F77F2E3AD7E17319C9302(L_21, (uint8_t*)((intptr_t)L_20), 0, NULL);
		V_5 = L_21;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_22 = V_5;
		NullCheck(L_22);
		uint32_t L_23;
		L_23 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_22, ((int32_t)24), NULL);
		FlacMetadataStreamInfo_set_MinFrameSize_mFC2A9C0E62D20206EEB55164FBBA126572F53672_inline(__this, L_23, NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_24 = V_5;
		NullCheck(L_24);
		uint32_t L_25;
		L_25 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_24, ((int32_t)24), NULL);
		FlacMetadataStreamInfo_set_MaxFrameSize_mCF3A8298150F77B505CAF4702FE58B7B0FB516F9_inline(__this, L_25, NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_26 = V_5;
		NullCheck(L_26);
		uint32_t L_27;
		L_27 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_26, ((int32_t)20), NULL);
		FlacMetadataStreamInfo_set_SampleRate_m566F176EA48162C05284498E5F6FB80C94197ACA_inline(__this, L_27, NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_28 = V_5;
		NullCheck(L_28);
		uint32_t L_29;
		L_29 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_28, 3, NULL);
		FlacMetadataStreamInfo_set_Channels_mE2D86828D60FD04C98C6E95C4BA3F93DB149A83E_inline(__this, ((int32_t)il2cpp_codegen_add(1, (int32_t)L_29)), NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_30 = V_5;
		NullCheck(L_30);
		uint32_t L_31;
		L_31 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_30, 5, NULL);
		FlacMetadataStreamInfo_set_BitsPerSample_mECB6E178D793E336C2EEEBD0CAAB6B00C4AF3BE2_inline(__this, ((int32_t)il2cpp_codegen_add(1, (int32_t)L_31)), NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_32 = V_5;
		NullCheck(L_32);
		uint64_t L_33;
		L_33 = BitReader_ReadBits64_m5DE5F97BB5607338BBB2194CAB9CD79BDCE9BC5E(L_32, ((int32_t)36), NULL);
		FlacMetadataStreamInfo_set_TotalSamples_m09E2FE9953DFEF63A651B2C67596B099B4E043C6_inline(__this, L_33, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_34 = V_0;
		NullCheck(L_34);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_35;
		L_35 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(23, L_34, ((int32_t)16));
		String_t* L_36;
		L_36 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_35, NULL);
		FlacMetadataStreamInfo_set_Md5_mBD99E5646F0872F3DED16D534486240EF805805D_inline(__this, L_36, NULL);
		V_3 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FlacMetadataStreamInfo_get_MinBlockSize_m0EDDE521BEB22937873145E4F088A2A74E607D54 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CMinBlockSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MinBlockSize_mC8673AA35935CB55DBE3EA07EC5AE2B247D7FC55 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_value;
		__this->___U3CMinBlockSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FlacMetadataStreamInfo_get_MaxBlockSize_m96E6123A709CCC8E1E635DA6B220B7A630EFEBBE (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CMaxBlockSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MaxBlockSize_m5985C056322EDE78B9A5B3BCB94D3800516044BC (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_value;
		__this->___U3CMaxBlockSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_MaxFrameSize_mA318AE919A38E8E57149174C85ED710D7979C200 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaxFrameSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MaxFrameSize_mCF3A8298150F77B505CAF4702FE58B7B0FB516F9 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMaxFrameSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_MinFrameSize_m18BDBFDDDBE3A94E8BE0F14114DBD489FABAB295 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMinFrameSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MinFrameSize_mFC2A9C0E62D20206EEB55164FBBA126572F53672 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMinFrameSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_SampleRate_mF6606EE4DB937375B138F09C807CDCAD20A44E84 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_SampleRate_m566F176EA48162C05284498E5F6FB80C94197ACA (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleRateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_Channels_m948FC291318B21ED4D63252AB48594063EA10B05 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_Channels_mE2D86828D60FD04C98C6E95C4BA3F93DB149A83E (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_BitsPerSample_mD7BC750D63E39455B9C606634D7BFD6BE86D91F7 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitsPerSampleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_BitsPerSample_mECB6E178D793E336C2EEEBD0CAAB6B00C4AF3BE2 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitsPerSampleU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacMetadataStreamInfo_get_TotalSamples_mDDF14B843F6F5C496EAD208BDA35F40076E36D1F (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTotalSamplesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_TotalSamples_m09E2FE9953DFEF63A651B2C67596B099B4E043C6 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTotalSamplesU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FlacMetadataStreamInfo_get_Md5_m3ABEEF2AC16F2387127271AE54640E7B5C93E154 (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMd5U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_Md5_mBD99E5646F0872F3DED16D534486240EF805805D (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMd5U3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMd5U3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlockSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BlockSize_mE1960FD3CDC3C95E44B09D582ED9B6EBA6595DD3 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBlockSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_SampleRate_mF08F52A625C858A4B38857E7949838258426447D (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_SampleRate_m0DEECDF66E3B6075DB55859A3810840E51C6DA97 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleRateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_Channels_m2F2A17D9026CA512946D48F6743B06D74FC9170B (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_Channels_m95722D4AB4BE559279F08B8A53840E829541156B (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_ChannelAssignment_m4BB82CF5AA663771CC13A0CBAE626D4A422E26B1 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelAssignmentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_ChannelAssignment_m2A20BEEF0A5DEDC14FDDD270B5AFAB5E10D2A584 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelAssignmentU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_BitsPerSample_mD996991E78EF56E101C68EA8212183D8B5DABDD9 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitsPerSampleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BitsPerSample_mF8F051281176E9F75CB44C7B3E954FD9BEFF214F (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitsPerSampleU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_BlockingStrategy_mD53D032669750214F7E977DEF26B99FD994E00D3 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlockingStrategyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BlockingStrategy_m7D5546CD33A3C2E067AD41F2A60B72A74475F215 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBlockingStrategyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacFrameHeader_get_SampleNumber_m4045CC25F0DB22B6214092903E30707BBC869326 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CSampleNumberU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_SampleNumber_mE80FE281D9179F8954F4181B69ED49195E66E240 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSampleNumberU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_FrameNumber_m9A734276C23575758B6143DC980B6469B2E41E1C (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFrameNumberU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_FrameNumber_m103E28731FAF73D5351AC10ACEEF0711EDDF0C4B (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFrameNumberU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FlacFrameHeader_get_Crc8_mA25E9FEC8FC88B3D080F24F7AD799FF4424F372B (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CCrc8U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_Crc8_mBA29531A29EE8D3D6482E787085BC40BA92088D2 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CCrc8U3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_get_DoCrc_mEC039964627D18018803E7BB5C64721A12F1C1B6 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDoCrcU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_DoCrc_mEB06A78543A645E0644CA05454B9EE18F82EBB06 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CDoCrcU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_get_HasError_mACE7D2B8D8FBEDAC3FB5B45918A0A091294915E3 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasErrorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_HasError_m03DD07B9F23DD49A5CF1D216D90B89DBD3D8C31E (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CHasErrorU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacFrameHeader_get_StreamPosition_mCD683CFAA41DB6CC759401B7C8D1CBC018612C53 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CStreamPositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_set_StreamPosition_mC0B7F353B62889A4582CF7D7B6CB283D4D726194 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CStreamPositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader__ctor_mD59664CF02B7794F423C5EE26E8F6D6AFE60C576 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		FlacFrameHeader__ctor_mAFFA21F519C584DE535F7397A7474447B69B5600(__this, L_0, (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0*)NULL, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader__ctor_mF301F412F9875A44AF852EB57E09F64475672E34 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_1 = ___1_streamInfo;
		FlacFrameHeader__ctor_mAFFA21F519C584DE535F7397A7474447B69B5600(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader__ctor_mAFFA21F519C584DE535F7397A7474447B69B5600 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, bool ___2_doCrc, const RuntimeMethod* method) 
{
	{
		__this->___PrintErrors = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacFrameHeader__ctor_mAFFA21F519C584DE535F7397A7474447B69B5600_RuntimeMethod_var)));
	}

IL_001b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral01BC0F9E6764D832B94B324819C01ED5E779071B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacFrameHeader__ctor_mAFFA21F519C584DE535F7397A7474447B69B5600_RuntimeMethod_var)));
	}

IL_002e:
	{
		bool L_5 = ___2_doCrc;
		FlacFrameHeader_set_DoCrc_mEB06A78543A645E0644CA05454B9EE18F82EBB06_inline(__this, L_5, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_6);
		FlacFrameHeader_set_StreamPosition_mC0B7F353B62889A4582CF7D7B6CB283D4D726194_inline(__this, L_7, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___0_stream;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_9 = ___1_streamInfo;
		bool L_10;
		L_10 = FlacFrameHeader_ParseHeader_mA13DC5A3766D8B3F8B34575FAB630FD0858BA8FC(__this, L_8, L_9, NULL);
		FlacFrameHeader_set_HasError_m03DD07B9F23DD49A5CF1D216D90B89DBD3D8C31E_inline(__this, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader__ctor_m956881717DA37AE903E551AE23142ABE4F525AAD (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t** ___0_buffer, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, bool ___2_doCrc, const RuntimeMethod* method) 
{
	{
		uint8_t** L_0 = ___0_buffer;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_1 = ___1_streamInfo;
		bool L_2 = ___2_doCrc;
		FlacFrameHeader__ctor_mEAA0828225540309266E280EAB04C85A3115E2BA(__this, L_0, L_1, L_2, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader__ctor_mEAA0828225540309266E280EAB04C85A3115E2BA (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t** ___0_buffer, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, bool ___2_doCrc, bool ___3_logError, const RuntimeMethod* method) 
{
	{
		__this->___PrintErrors = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___3_logError;
		__this->___PrintErrors = L_0;
		bool L_1 = ___2_doCrc;
		FlacFrameHeader_set_DoCrc_mEB06A78543A645E0644CA05454B9EE18F82EBB06_inline(__this, L_1, NULL);
		FlacFrameHeader_set_StreamPosition_mC0B7F353B62889A4582CF7D7B6CB283D4D726194_inline(__this, ((int64_t)(-1)), NULL);
		uint8_t** L_2 = ___0_buffer;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_3 = ___1_streamInfo;
		bool L_4;
		L_4 = FlacFrameHeader_ParseHeader_m095014A9329CBBBDD653F257D7726CBCA2035465(__this, L_2, L_3, NULL);
		FlacFrameHeader_set_HasError_m03DD07B9F23DD49A5CF1D216D90B89DBD3D8C31E_inline(__this, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_ParseHeader_mA13DC5A3766D8B3F8B34575FAB630FD0858BA8FC (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	bool V_5 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_005d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		V_2 = L_7;
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		NullCheck(L_8);
		if (((int32_t)(((RuntimeArray*)L_8)->max_length)))
		{
			goto IL_0027;
		}
	}

IL_0022:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_002f;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		V_1 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_002f:
	{
		uint8_t* L_10 = V_1;
		V_3 = (uint8_t*)((intptr_t)L_10);
		uint8_t* L_11 = V_1;
		V_4 = (uint8_t*)((intptr_t)L_11);
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_12 = ___1_streamInfo;
		bool L_13;
		L_13 = FlacFrameHeader_ParseHeader_m095014A9329CBBBDD653F257D7726CBCA2035465(__this, (&V_4), L_12, NULL);
		V_5 = L_13;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = ___0_stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = L_14;
		NullCheck(L_15);
		int64_t L_16;
		L_16 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		NullCheck(L_17);
		uint8_t* L_18 = V_4;
		uint8_t* L_19 = V_3;
		NullCheck(L_15);
		VirtualActionInvoker1< int64_t >::Invoke(13, L_15, ((int64_t)il2cpp_codegen_subtract(L_16, ((int64_t)il2cpp_codegen_subtract(((int64_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), ((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_18, (intptr_t)L_19))/1))))))));
		bool L_20 = V_5;
		return L_20;
	}

IL_005d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_ParseHeader_m095014A9329CBBBDD653F257D7726CBCA2035465 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t** ___0_headerBuffer, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	{
		uint8_t** L_0 = ___0_headerBuffer;
		int32_t L_1 = *((uint8_t*)(*((intptr_t*)L_0)));
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_02b2;
		}
	}
	{
		uint8_t** L_2 = ___0_headerBuffer;
		int32_t L_3 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_2)), 1)));
		if ((!(((uint32_t)((int32_t)(L_3>>1))) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_02b2;
		}
	}
	{
		uint8_t** L_4 = ___0_headerBuffer;
		int32_t L_5 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_4)), 1)));
		if (!((int32_t)(L_5&2)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		uint8_t** L_6 = ___0_headerBuffer;
		V_1 = (uint8_t*)(*((intptr_t*)L_6));
		uint8_t* L_7 = V_1;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_8 = (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40*)il2cpp_codegen_object_new(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		FlacBitReader__ctor_mDA57731B3816EA3A0F3F77F2E3AD7E17319C9302(L_8, L_7, 0, NULL);
		V_2 = L_8;
		uint8_t** L_9 = ___0_headerBuffer;
		int32_t L_10 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_9)), 2)));
		V_0 = ((int32_t)(L_10>>4));
		V_3 = (-1);
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		V_3 = ((int32_t)192);
		goto IL_008e;
	}

IL_004c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)5)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_15 = V_0;
		V_3 = ((int32_t)(((int32_t)576)<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_15, 2))&((int32_t)31)))));
		goto IL_008e;
	}

IL_0063:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)6)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)7))))
		{
			goto IL_0074;
		}
	}

IL_006b:
	{
		int32_t L_18 = V_0;
		__this->____blocksizeHint = L_18;
		goto IL_008e;
	}

IL_0074:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)8)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)15))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_21 = V_0;
		V_3 = ((int32_t)(((int32_t)256)<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_21, 8))&((int32_t)31)))));
		goto IL_008e;
	}

IL_008c:
	{
		return (bool)0;
	}

IL_008e:
	{
		int32_t L_22 = V_3;
		FlacFrameHeader_set_BlockSize_mE1960FD3CDC3C95E44B09D582ED9B6EBA6595DD3_inline(__this, L_22, NULL);
		uint8_t** L_23 = ___0_headerBuffer;
		int32_t L_24 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_23)), 2)));
		V_0 = ((int32_t)(L_24&((int32_t)15)));
		V_4 = (-1);
		int32_t L_25 = V_0;
		if (L_25)
		{
			goto IL_00b3;
		}
	}
	{
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_26 = ___1_streamInfo;
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_27 = ___1_streamInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = FlacMetadataStreamInfo_get_SampleRate_mF6606EE4DB937375B138F09C807CDCAD20A44E84_inline(L_27, NULL);
		V_4 = L_28;
		goto IL_00dc;
	}

IL_00b1:
	{
		return (bool)0;
	}

IL_00b3:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) < ((int32_t)1)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)11))))
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ((FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_StaticFields*)il2cpp_codegen_static_fields_for(FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_il2cpp_TypeInfo_var))->___SampleRateTable;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = L_34;
		goto IL_00dc;
	}

IL_00c7:
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)12))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)14))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_37 = V_0;
		__this->____sampleRateHint = L_37;
		goto IL_00dc;
	}

IL_00da:
	{
		return (bool)0;
	}

IL_00dc:
	{
		int32_t L_38 = V_4;
		FlacFrameHeader_set_SampleRate_m0DEECDF66E3B6075DB55859A3810840E51C6DA97_inline(__this, L_38, NULL);
		uint8_t** L_39 = ___0_headerBuffer;
		int32_t L_40 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_39)), 3)));
		V_0 = ((int32_t)(L_40>>4));
		int32_t L_41 = V_0;
		if (!((int32_t)(L_41&8)))
		{
			goto IL_010f;
		}
	}
	{
		V_5 = 2;
		int32_t L_42 = V_0;
		if ((((int32_t)((int32_t)(L_42&7))) > ((int32_t)2)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_43 = V_0;
		if ((((int32_t)((int32_t)(L_43&7))) >= ((int32_t)0)))
		{
			goto IL_0102;
		}
	}

IL_0100:
	{
		return (bool)0;
	}

IL_0102:
	{
		int32_t L_44 = V_0;
		FlacFrameHeader_set_ChannelAssignment_m2A20BEEF0A5DEDC14FDDD270B5AFAB5E10D2A584_inline(__this, ((int32_t)il2cpp_codegen_add(((int32_t)(L_44&7)), 1)), NULL);
		goto IL_011b;
	}

IL_010f:
	{
		int32_t L_45 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		FlacFrameHeader_set_ChannelAssignment_m2A20BEEF0A5DEDC14FDDD270B5AFAB5E10D2A584_inline(__this, 0, NULL);
	}

IL_011b:
	{
		int32_t L_46 = V_5;
		FlacFrameHeader_set_Channels_m95722D4AB4BE559279F08B8A53840E829541156B_inline(__this, L_46, NULL);
		uint8_t** L_47 = ___0_headerBuffer;
		int32_t L_48 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_47)), 3)));
		V_0 = ((int32_t)(((int32_t)(L_48&((int32_t)14)))>>1));
		int32_t L_49 = V_0;
		if (L_49)
		{
			goto IL_0140;
		}
	}
	{
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_50 = ___1_streamInfo;
		if (!L_50)
		{
			goto IL_013e;
		}
	}
	{
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_51 = ___1_streamInfo;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = FlacMetadataStreamInfo_get_BitsPerSample_mD7BC750D63E39455B9C606634D7BFD6BE86D91F7_inline(L_51, NULL);
		V_6 = L_52;
		goto IL_0157;
	}

IL_013e:
	{
		return (bool)0;
	}

IL_0140:
	{
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) == ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_54 = V_0;
		if ((((int32_t)L_54) >= ((int32_t)7)))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_55 = V_0;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}

IL_014c:
	{
		return (bool)0;
	}

IL_014e:
	{
		il2cpp_codegen_runtime_class_init_inline(FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ((FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_StaticFields*)il2cpp_codegen_static_fields_for(FlacConstant_tC293B408CCAA0136DFE425D1AB2A6AE487757EBD_il2cpp_TypeInfo_var))->___BitPerSampleTable;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_6 = L_59;
	}

IL_0157:
	{
		int32_t L_60 = V_6;
		FlacFrameHeader_set_BitsPerSample_mF8F051281176E9F75CB44C7B3E954FD9BEFF214F_inline(__this, L_60, NULL);
		uint8_t** L_61 = ___0_headerBuffer;
		int32_t L_62 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_61)), 3)));
		if (!((int32_t)(L_62&1)))
		{
			goto IL_016a;
		}
	}
	{
		return (bool)0;
	}

IL_016a:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_63 = V_2;
		NullCheck(L_63);
		uint32_t L_64;
		L_64 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_63, ((int32_t)32), NULL);
		uint8_t** L_65 = ___0_headerBuffer;
		int32_t L_66 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_65)), 1)));
		if (((int32_t)(L_66&1)))
		{
			goto IL_018d;
		}
	}
	{
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_67 = ___1_streamInfo;
		if (!L_67)
		{
			goto IL_01b0;
		}
	}
	{
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_68 = ___1_streamInfo;
		NullCheck(L_68);
		int16_t L_69;
		L_69 = FlacMetadataStreamInfo_get_MinBlockSize_m0EDDE521BEB22937873145E4F088A2A74E607D54_inline(L_68, NULL);
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_70 = ___1_streamInfo;
		NullCheck(L_70);
		int16_t L_71;
		L_71 = FlacMetadataStreamInfo_get_MaxBlockSize_m96E6123A709CCC8E1E635DA6B220B7A630EFEBBE_inline(L_70, NULL);
		if ((((int32_t)L_69) == ((int32_t)L_71)))
		{
			goto IL_01b0;
		}
	}

IL_018d:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_72 = V_2;
		NullCheck(L_72);
		bool L_73;
		L_73 = FlacBitReader_ReadUTF8_64_m62F3DF97039CB2D8445329DB0578E3727A4FCBEF(L_72, (&V_7), NULL);
		if (!L_73)
		{
			goto IL_01ae;
		}
	}
	{
		uint64_t L_74 = V_7;
		if ((((int64_t)L_74) == ((int64_t)((int64_t)(-1)))))
		{
			goto IL_01ae;
		}
	}
	{
		FlacFrameHeader_set_BlockingStrategy_m7D5546CD33A3C2E067AD41F2A60B72A74475F215_inline(__this, 0, NULL);
		uint64_t L_75 = V_7;
		FlacFrameHeader_set_SampleNumber_mE80FE281D9179F8954F4181B69ED49195E66E240_inline(__this, L_75, NULL);
		goto IL_01d2;
	}

IL_01ae:
	{
		return (bool)0;
	}

IL_01b0:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_76 = V_2;
		NullCheck(L_76);
		bool L_77;
		L_77 = FlacBitReader_ReadUTF8_32_m23346DBB1A31B29D56E5FDFF557D07763657A922(L_76, (&V_8), NULL);
		if (!L_77)
		{
			goto IL_01d0;
		}
	}
	{
		uint32_t L_78 = V_8;
		if ((((int32_t)L_78) == ((int32_t)(-1))))
		{
			goto IL_01d0;
		}
	}
	{
		FlacFrameHeader_set_BlockingStrategy_m7D5546CD33A3C2E067AD41F2A60B72A74475F215_inline(__this, 1, NULL);
		uint32_t L_79 = V_8;
		FlacFrameHeader_set_FrameNumber_m103E28731FAF73D5351AC10ACEEF0711EDDF0C4B_inline(__this, L_79, NULL);
		goto IL_01d2;
	}

IL_01d0:
	{
		return (bool)0;
	}

IL_01d2:
	{
		int32_t L_80 = __this->____blocksizeHint;
		if (!L_80)
		{
			goto IL_0200;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_81 = V_2;
		NullCheck(L_81);
		uint32_t L_82;
		L_82 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_81, 8, NULL);
		V_0 = L_82;
		int32_t L_83 = __this->____blocksizeHint;
		if ((!(((uint32_t)L_83) == ((uint32_t)7))))
		{
			goto IL_01f7;
		}
	}
	{
		int32_t L_84 = V_0;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_85 = V_2;
		NullCheck(L_85);
		uint32_t L_86;
		L_86 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_85, 8, NULL);
		V_0 = ((int32_t)(((int32_t)(L_84<<8))|(int32_t)L_86));
	}

IL_01f7:
	{
		int32_t L_87 = V_0;
		FlacFrameHeader_set_BlockSize_mE1960FD3CDC3C95E44B09D582ED9B6EBA6595DD3_inline(__this, ((int32_t)il2cpp_codegen_add(L_87, 1)), NULL);
	}

IL_0200:
	{
		int32_t L_88 = __this->____sampleRateHint;
		if (!L_88)
		{
			goto IL_025c;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_89 = V_2;
		NullCheck(L_89);
		uint32_t L_90;
		L_90 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_89, 8, NULL);
		V_0 = L_90;
		int32_t L_91 = __this->____sampleRateHint;
		if ((((int32_t)L_91) == ((int32_t)((int32_t)12))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_92 = V_0;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_93 = V_2;
		NullCheck(L_93);
		uint32_t L_94;
		L_94 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_93, 8, NULL);
		V_0 = ((int32_t)(((int32_t)(L_92<<8))|(int32_t)L_94));
	}

IL_0226:
	{
		int32_t L_95 = __this->____sampleRateHint;
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_023f;
		}
	}
	{
		int32_t L_96 = V_0;
		FlacFrameHeader_set_SampleRate_m0DEECDF66E3B6075DB55859A3810840E51C6DA97_inline(__this, ((int32_t)il2cpp_codegen_multiply(L_96, ((int32_t)1000))), NULL);
		goto IL_025c;
	}

IL_023f:
	{
		int32_t L_97 = __this->____sampleRateHint;
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_98 = V_0;
		FlacFrameHeader_set_SampleRate_m0DEECDF66E3B6075DB55859A3810840E51C6DA97_inline(__this, L_98, NULL);
		goto IL_025c;
	}

IL_0252:
	{
		int32_t L_99 = V_0;
		FlacFrameHeader_set_SampleRate_m0DEECDF66E3B6075DB55859A3810840E51C6DA97_inline(__this, ((int32_t)il2cpp_codegen_multiply(L_99, ((int32_t)10))), NULL);
	}

IL_025c:
	{
		bool L_100;
		L_100 = FlacFrameHeader_get_DoCrc_mEC039964627D18018803E7BB5C64721A12F1C1B6_inline(__this, NULL);
		if (!L_100)
		{
			goto IL_0297;
		}
	}
	{
		CRC8_t9264461E1AE072D1D6E3B267F1FD453431C35C6D* L_101;
		L_101 = CRC8_get_Instance_m7F75AD6FC6F47FABEB93E30089B8457D7345DD3F(NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_102 = V_2;
		NullCheck(L_102);
		uint8_t* L_103;
		L_103 = BitReader_get_Buffer_m72D288CA63B9EC07F4B564D7DC7E01023428BE2D_inline(L_102, NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_104 = V_2;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = BitReader_get_Position_mDF7B7F2AC08E572A09A896B23125FE84050CAB72_inline(L_104, NULL);
		NullCheck(L_101);
		uint8_t L_106;
		L_106 = CRC8_CalcCheckSum_m4242BC557DE2C550CD68CF68BEF6653104B899A3(L_101, L_103, 0, L_105, NULL);
		V_9 = L_106;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_107 = V_2;
		NullCheck(L_107);
		uint32_t L_108;
		L_108 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_107, 8, NULL);
		FlacFrameHeader_set_Crc8_mBA29531A29EE8D3D6482E787085BC40BA92088D2_inline(__this, (uint8_t)((int32_t)(uint8_t)L_108), NULL);
		uint8_t L_109;
		L_109 = FlacFrameHeader_get_Crc8_mA25E9FEC8FC88B3D080F24F7AD799FF4424F372B_inline(__this, NULL);
		uint8_t L_110 = V_9;
		if ((((int32_t)L_109) == ((int32_t)L_110)))
		{
			goto IL_02a5;
		}
	}
	{
		return (bool)0;
	}

IL_0297:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_111 = V_2;
		NullCheck(L_111);
		uint32_t L_112;
		L_112 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_111, 8, NULL);
		FlacFrameHeader_set_Crc8_mBA29531A29EE8D3D6482E787085BC40BA92088D2_inline(__this, (uint8_t)((int32_t)(uint8_t)L_112), NULL);
	}

IL_02a5:
	{
		uint8_t** L_113 = ___0_headerBuffer;
		uint8_t** L_114 = ___0_headerBuffer;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_115 = V_2;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = BitReader_get_Position_mDF7B7F2AC08E572A09A896B23125FE84050CAB72_inline(L_115, NULL);
		*((intptr_t*)L_113) = (intptr_t)((intptr_t)il2cpp_codegen_add((*((intptr_t*)L_114)), L_116));
		return (bool)1;
	}

IL_02b2:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameHeader_Error_mE8DB84C71A0BE785C384FBD11475A4B38BD2A513 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, String_t* ___0_msg, String_t* ___1_location, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___PrintErrors;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameHeader_IsFormatEqualTo_mB842B23CE3D8677E0252F920180D368A0B60ADF4 (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_other, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = FlacFrameHeader_get_BitsPerSample_mD996991E78EF56E101C68EA8212183D8B5DABDD9_inline(__this, NULL);
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_1 = ___0_other;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = FlacFrameHeader_get_BitsPerSample_mD996991E78EF56E101C68EA8212183D8B5DABDD9_inline(L_1, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = FlacFrameHeader_get_Channels_m2F2A17D9026CA512946D48F6743B06D74FC9170B_inline(__this, NULL);
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_4 = ___0_other;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = FlacFrameHeader_get_Channels_m2F2A17D9026CA512946D48F6743B06D74FC9170B_inline(L_4, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6;
		L_6 = FlacFrameHeader_get_SampleRate_mF08F52A625C858A4B38857E7949838258426447D_inline(__this, NULL);
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_7 = ___0_other;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = FlacFrameHeader_get_SampleRate_mF08F52A625C858A4B38857E7949838258426447D_inline(L_7, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacBitReader__ctor_m16157E6FCF40D078BDEAE62A37BC45B5DD76A745 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		BitReader__ctor_mC792D1D2EB2A26B2EA18CF599ACC2F4EFBF7E59E(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacBitReader__ctor_mDA57731B3816EA3A0F3F77F2E3AD7E17319C9302 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, uint8_t* ___0_buffer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		BitReader__ctor_mA437F1B11EF3B0F4286E446BF9FF79904E522223(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FlacBitReader_ReadUnary_mE6DD659B82CE9F40807C0F7F8819A5485D179ECC (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		uint32_t L_0;
		L_0 = BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline(__this, NULL);
		V_1 = ((int32_t)((uint32_t)L_0>>((int32_t)24)));
		goto IL_0023;
	}

IL_000e:
	{
		BitReader_SeekBits_m14A3A016332D3C9A95F767C047AB8A9765EAC333(__this, 8, NULL);
		uint32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, 8));
		uint32_t L_2;
		L_2 = BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline(__this, NULL);
		V_1 = ((int32_t)((uint32_t)L_2>>((int32_t)24)));
	}

IL_0023:
	{
		uint32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_000e;
		}
	}
	{
		uint32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_StaticFields*)il2cpp_codegen_static_fields_for(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var))->___UnaryTable;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8));
		uint32_t L_9 = V_0;
		BitReader_SeekBits_m14A3A016332D3C9A95F767C047AB8A9765EAC333(__this, ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_9&7)), 1)), NULL);
		uint32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacBitReader_ReadUnarySigned_m280CF634E7DE07DF34980E9CF4B7846C1033A4BE (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = FlacBitReader_ReadUnary_mE6DD659B82CE9F40807C0F7F8819A5485D179ECC(__this, NULL);
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_0;
		return ((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_1>>1))))^((int64_t)((-((int32_t)((int32_t)L_2&1))))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacBitReader_ReadUTF8_64Signed_m141384C82D25CE8F0421931D6B7CB5987110CDA5 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, int64_t* ___0_result, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = FlacBitReader_ReadUTF8_64_m62F3DF97039CB2D8445329DB0578E3727A4FCBEF(__this, (&V_0), NULL);
		V_1 = L_0;
		int64_t* L_1 = ___0_result;
		uint64_t L_2 = V_0;
		*((int64_t*)L_1) = (int64_t)L_2;
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacBitReader_ReadUTF8_64_m62F3DF97039CB2D8445329DB0578E3727A4FCBEF (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, uint64_t* ___0_result, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint32_t L_0;
		L_0 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(__this, 8, NULL);
		V_0 = L_0;
		uint32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_001b;
		}
	}
	{
		uint32_t L_2 = V_0;
		V_1 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		goto IL_00df;
	}

IL_001b:
	{
		uint32_t L_3 = V_0;
		if (!((int32_t)((int32_t)L_3&((int32_t)192))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_4 = V_0;
		if (((int32_t)((int32_t)L_4&((int32_t)32))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_5 = V_0;
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_5&((int32_t)31)))));
		V_2 = 1;
		goto IL_00df;
	}

IL_0037:
	{
		uint32_t L_6 = V_0;
		if (!((int32_t)((int32_t)L_6&((int32_t)224))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_7 = V_0;
		if (((int32_t)((int32_t)L_7&((int32_t)16))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_8 = V_0;
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_8&((int32_t)15)))));
		V_2 = 2;
		goto IL_00df;
	}

IL_0053:
	{
		uint32_t L_9 = V_0;
		if (!((int32_t)((int32_t)L_9&((int32_t)240))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_10 = V_0;
		if (((int32_t)((int32_t)L_10&8)))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_11 = V_0;
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_11&7))));
		V_2 = 3;
		goto IL_00df;
	}

IL_006a:
	{
		uint32_t L_12 = V_0;
		if (!((int32_t)((int32_t)L_12&((int32_t)248))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_13 = V_0;
		if (((int32_t)((int32_t)L_13&4)))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_14 = V_0;
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_14&3))));
		V_2 = 4;
		goto IL_00df;
	}

IL_0081:
	{
		uint32_t L_15 = V_0;
		if (!((int32_t)((int32_t)L_15&((int32_t)252))))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_16 = V_0;
		if (((int32_t)((int32_t)L_16&2)))
		{
			goto IL_0098;
		}
	}
	{
		uint32_t L_17 = V_0;
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_17&1))));
		V_2 = 5;
		goto IL_00df;
	}

IL_0098:
	{
		uint32_t L_18 = V_0;
		if (!((int32_t)((int32_t)L_18&((int32_t)254))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_19 = V_0;
		if (((int32_t)((int32_t)L_19&1)))
		{
			goto IL_00ad;
		}
	}
	{
		V_1 = ((int64_t)0);
		V_2 = 6;
		goto IL_00df;
	}

IL_00ad:
	{
		uint64_t* L_20 = ___0_result;
		*((int64_t*)L_20) = (int64_t)((int64_t)(-1));
		return (bool)0;
	}

IL_00b3:
	{
		uint32_t L_21;
		L_21 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(__this, 8, NULL);
		V_0 = L_21;
		uint32_t L_22 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_22&((int32_t)192)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_00cf;
		}
	}
	{
		uint64_t* L_23 = ___0_result;
		*((int64_t*)L_23) = (int64_t)((int64_t)(-1));
		return (bool)0;
	}

IL_00cf:
	{
		uint64_t L_24 = V_1;
		V_1 = ((int64_t)((int64_t)L_24<<6));
		uint64_t L_25 = V_1;
		uint32_t L_26 = V_0;
		V_1 = ((int64_t)((int64_t)L_25|((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_26&((int32_t)63)))))));
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00df:
	{
		int32_t L_28 = V_2;
		if (L_28)
		{
			goto IL_00b3;
		}
	}
	{
		uint64_t* L_29 = ___0_result;
		uint64_t L_30 = V_1;
		*((int64_t*)L_29) = (int64_t)L_30;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacBitReader_ReadUTF8_32Signed_mBB75C2B64CC70F76C34F592BF0390D8BF8A00357 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = FlacBitReader_ReadUTF8_32_m23346DBB1A31B29D56E5FDFF557D07763657A922(__this, (&V_0), NULL);
		V_1 = L_0;
		int32_t* L_1 = ___0_result;
		uint32_t L_2 = V_0;
		*((int32_t*)L_1) = (int32_t)L_2;
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacBitReader_ReadUTF8_32_m23346DBB1A31B29D56E5FDFF557D07763657A922 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* __this, uint32_t* ___0_result, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint32_t L_0;
		L_0 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(__this, 8, NULL);
		V_1 = L_0;
		uint32_t L_1 = V_1;
		if (((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_2 = V_1;
		V_0 = L_2;
		V_2 = 0;
		goto IL_00be;
	}

IL_001a:
	{
		uint32_t L_3 = V_1;
		if (!((int32_t)((int32_t)L_3&((int32_t)192))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4&((int32_t)32))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5&((int32_t)31)));
		V_2 = 1;
		goto IL_00be;
	}

IL_0035:
	{
		uint32_t L_6 = V_1;
		if (!((int32_t)((int32_t)L_6&((int32_t)224))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_7 = V_1;
		if (((int32_t)((int32_t)L_7&((int32_t)16))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_8 = V_1;
		V_0 = ((int32_t)((int32_t)L_8&((int32_t)15)));
		V_2 = 2;
		goto IL_00be;
	}

IL_004d:
	{
		uint32_t L_9 = V_1;
		if (!((int32_t)((int32_t)L_9&((int32_t)240))))
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_10 = V_1;
		if (((int32_t)((int32_t)L_10&8)))
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_11 = V_1;
		V_0 = ((int32_t)((int32_t)L_11&7));
		V_2 = 3;
		goto IL_00be;
	}

IL_0063:
	{
		uint32_t L_12 = V_1;
		if (!((int32_t)((int32_t)L_12&((int32_t)248))))
		{
			goto IL_0079;
		}
	}
	{
		uint32_t L_13 = V_1;
		if (((int32_t)((int32_t)L_13&4)))
		{
			goto IL_0079;
		}
	}
	{
		uint32_t L_14 = V_1;
		V_0 = ((int32_t)((int32_t)L_14&3));
		V_2 = 4;
		goto IL_00be;
	}

IL_0079:
	{
		uint32_t L_15 = V_1;
		if (!((int32_t)((int32_t)L_15&((int32_t)252))))
		{
			goto IL_008f;
		}
	}
	{
		uint32_t L_16 = V_1;
		if (((int32_t)((int32_t)L_16&2)))
		{
			goto IL_008f;
		}
	}
	{
		uint32_t L_17 = V_1;
		V_0 = ((int32_t)((int32_t)L_17&1));
		V_2 = 5;
		goto IL_00be;
	}

IL_008f:
	{
		uint32_t* L_18 = ___0_result;
		*((int32_t*)L_18) = (int32_t)(-1);
		return (bool)0;
	}

IL_0094:
	{
		uint32_t L_19;
		L_19 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(__this, 8, NULL);
		V_1 = L_19;
		uint32_t L_20 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_20&((int32_t)192)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_00af;
		}
	}
	{
		uint32_t* L_21 = ___0_result;
		*((int32_t*)L_21) = (int32_t)(-1);
		return (bool)0;
	}

IL_00af:
	{
		uint32_t L_22 = V_0;
		V_0 = ((int32_t)((int32_t)L_22<<6));
		uint32_t L_23 = V_0;
		uint32_t L_24 = V_1;
		V_0 = ((int32_t)((int32_t)L_23|((int32_t)((int32_t)L_24&((int32_t)63)))));
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_00be:
	{
		int32_t L_26 = V_2;
		if (L_26)
		{
			goto IL_0094;
		}
	}
	{
		uint32_t* L_27 = ___0_result;
		uint32_t L_28 = V_0;
		*((int32_t*)L_27) = (int32_t)L_28;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacBitReader__cctor_mB412E02243996A95F4D93A41F47E27A8086CD53E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tFDFC7BF86756916487291BC20E8DA6C2D89BE968____01D3A3B95A2D93AA179AF2264EDC31F618F5BD6E_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tFDFC7BF86756916487291BC20E8DA6C2D89BE968____01D3A3B95A2D93AA179AF2264EDC31F618F5BD6E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_StaticFields*)il2cpp_codegen_static_fields_for(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var))->___UnaryTable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_StaticFields*)il2cpp_codegen_static_fields_for(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var))->___UnaryTable), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* FlacPreScanFinishedEventArgs_get_Frames_mEF50386734E5B842D7E4291B0D9B5F0CD8E49B3B (FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* L_0 = __this->___U3CFramesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScanFinishedEventArgs_set_Frames_m264D6DB77F9D8B188FE016865EA96FC3ED2D3345 (FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* __this, ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* ___0_value, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* L_0 = ___0_value;
		__this->___U3CFramesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFramesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScanFinishedEventArgs__ctor_mD3DA32715D5AD318BEC30CFC8BB1D2023D871266 (FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* __this, List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___0_frames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_mA392A65EE53C5023B175561B3850AA6F3A76EF40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_0 = ___0_frames;
		NullCheck(L_0);
		ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* L_1;
		L_1 = List_1_AsReadOnly_mA392A65EE53C5023B175561B3850AA6F3A76EF40(L_0, List_1_AsReadOnly_mA392A65EE53C5023B175561B3850AA6F3A76EF40_RuntimeMethod_var);
		FlacPreScanFinishedEventArgs_set_Frames_m264D6DB77F9D8B188FE016865EA96FC3ED2D3345_inline(__this, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* FlacMetadata_FromStream_m646EA0553D08D2853D384462B858C4E29B8362D6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* V_4 = NULL;
	int64_t V_5 = 0;
	uint8_t* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_1, L_2, 0, 4);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_4 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB067D8C2B4F1D81CEA5E48F8045179F85C26494)), NULL);
		FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* L_5 = (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var)));
		FlacException__ctor_m53BB743F7B0239EC43A4E0B0BD9D598804994735(L_5, L_4, 1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacMetadata_FromStream_m646EA0553D08D2853D384462B858C4E29B8362D6_RuntimeMethod_var)));
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		V_7 = L_7;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_7;
		NullCheck(L_8);
		if (((int32_t)(((RuntimeArray*)L_8)->max_length)))
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		V_6 = (uint8_t*)((uintptr_t)0);
		goto IL_0040;
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_7;
		NullCheck(L_9);
		V_6 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0040:
	{
		uint8_t* L_10 = V_6;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_11 = (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40*)il2cpp_codegen_object_new(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		FlacBitReader__ctor_mDA57731B3816EA3A0F3F77F2E3AD7E17319C9302(L_11, (uint8_t*)((intptr_t)L_10), 0, NULL);
		V_8 = L_11;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_12 = V_8;
		NullCheck(L_12);
		uint32_t L_13;
		L_13 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_12, 1, NULL);
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_14 = V_8;
		NullCheck(L_14);
		uint32_t L_15;
		L_15 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_14, 7, NULL);
		V_1 = L_15;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_16 = V_8;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_16, ((int32_t)24), NULL);
		V_2 = L_17;
		V_6 = (uint8_t*)((uintptr_t)0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = ___0_stream;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_18);
		V_5 = L_19;
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) <= ((int32_t)6)))
		{
			goto IL_0080;
		}
	}

IL_007e:
	{
		return (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD*)NULL;
	}

IL_0080:
	{
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)3)))
		{
			goto IL_0095;
		}
	}
	{
		goto IL_00a1;
	}

IL_0089:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = ___0_stream;
		int32_t L_25 = V_2;
		bool L_26 = V_0;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_27 = (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0*)il2cpp_codegen_object_new(FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0_il2cpp_TypeInfo_var);
		FlacMetadataStreamInfo__ctor_m8A04D8B0FF955656AF6753E1E991333B4B97AF8E(L_27, L_24, L_25, L_26, NULL);
		V_4 = L_27;
		goto IL_00ab;
	}

IL_0095:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = ___0_stream;
		int32_t L_29 = V_2;
		bool L_30 = V_0;
		FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* L_31 = (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482*)il2cpp_codegen_object_new(FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482_il2cpp_TypeInfo_var);
		FlacMetadataSeekTable__ctor_mD32C04A3052838C60AC15381FAE186C60A510E42(L_31, L_28, L_29, L_30, NULL);
		V_4 = L_31;
		goto IL_00ab;
	}

IL_00a1:
	{
		int32_t L_32 = V_1;
		bool L_33 = V_0;
		int32_t L_34 = V_2;
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_35 = (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD*)il2cpp_codegen_object_new(FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_il2cpp_TypeInfo_var);
		FlacMetadata__ctor_m82D63EBDEC34C759064E00F6D436A902F4058E36(L_35, L_32, L_33, L_34, NULL);
		V_4 = L_35;
	}

IL_00ab:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = ___0_stream;
		int32_t L_37 = V_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_38 = ___0_stream;
		NullCheck(L_38);
		int64_t L_39;
		L_39 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_38);
		int64_t L_40 = V_5;
		NullCheck(L_36);
		int64_t L_41;
		L_41 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(30, L_36, ((int64_t)il2cpp_codegen_subtract(((int64_t)L_37), ((int64_t)il2cpp_codegen_subtract(L_39, L_40)))), 1);
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_42 = V_4;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlacMetadata_ReadAllMetadataFromStream_mC1070DA7CCC2E66E65D920A49931E9C13D0FCB32 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* L_0 = (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657*)il2cpp_codegen_object_new(U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657_il2cpp_TypeInfo_var);
		U3CReadAllMetadataFromStreamU3Ed__1__ctor_mF181EECD929B7C9AA786E6BB82E48AC00FEA3BE6(L_0, ((int32_t)-2), NULL);
		U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* L_1 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_1);
		L_1->___U3CU3E3__stream = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__stream), (void*)L_2);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadata_SkipMetadata_m4AC942E174ED1AC2F3012A8D0B823058835609B6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_m0715CE1AA3A059D32E21203D34661313A013B7B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		RuntimeObject* L_1;
		L_1 = FlacMetadata_ReadAllMetadataFromStream_mC1070DA7CCC2E66E65D920A49931E9C13D0FCB32(L_0, NULL);
		FlacMetadataU5BU5D_tCD8A3DCB497406E86FD3CD53D2B1E87382DE5CD4* L_2;
		L_2 = Enumerable_ToArray_TisFlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_m0715CE1AA3A059D32E21203D34661313A013B7B8(L_1, Enumerable_ToArray_TisFlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD_m0715CE1AA3A059D32E21203D34661313A013B7B8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadata__ctor_m82D63EBDEC34C759064E00F6D436A902F4058E36 (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_type, bool ___1_lastBlock, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_type;
		FlacMetadata_set_MetaDataType_m84645E9F8EA0F260998FB8FBD144CD28C3DB887F_inline(__this, L_0, NULL);
		bool L_1 = ___1_lastBlock;
		FlacMetadata_set_IsLastMetaBlock_mA7612D63FC0D096E525EDBB187A514555217D555_inline(__this, L_1, NULL);
		int32_t L_2 = ___2_length;
		FlacMetadata_set_Length_m65DD77A7B97D53F2056D862769E8AB292F6D078A_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadata_get_MetaDataType_mE9DA0EA8C0A7E2F74C741F481261D7A173CC5535 (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMetaDataTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadata_set_MetaDataType_m84645E9F8EA0F260998FB8FBD144CD28C3DB887F (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMetaDataTypeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacMetadata_get_IsLastMetaBlock_mFF8CBB946A196DBE8BE04D3D958D9D15AFD787CC (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsLastMetaBlockU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadata_set_IsLastMetaBlock_mA7612D63FC0D096E525EDBB187A514555217D555 (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsLastMetaBlockU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadata_get_Length_mCF45422DCE5D6F3AD49A12CFAEFF02804BD2E9AF (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadata_set_Length_m65DD77A7B97D53F2056D862769E8AB292F6D078A (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllMetadataFromStreamU3Ed__1__ctor_mF181EECD929B7C9AA786E6BB82E48AC00FEA3BE6 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___U3CU3El__initialThreadId = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllMetadataFromStreamU3Ed__1_System_IDisposable_Dispose_m227C8D545EFDA02CD5F7B734DD61ECC504BDB914 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadAllMetadataFromStreamU3Ed__1_MoveNext_m16D364F6B2FDEF2336392F64A3B15DDB775062D8 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_0017:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___stream;
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_4;
		L_4 = FlacMetadata_FromStream_m646EA0553D08D2853D384462B858C4E29B8362D6(L_3, NULL);
		__this->___U3CdataU3E5__1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdataU3E5__1), (void*)L_4);
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_5 = __this->___U3CdataU3E5__1;
		__this->___U3CU3E2__current = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_5);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state = (-1);
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_6 = __this->___U3CdataU3E5__1;
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_7 = __this->___U3CdataU3E5__1;
		NullCheck(L_7);
		bool L_8;
		L_8 = FlacMetadata_get_IsLastMetaBlock_mFF8CBB946A196DBE8BE04D3D958D9D15AFD787CC_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		__this->___U3CdataU3E5__1 = (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdataU3E5__1), (void*)(FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD*)NULL);
		goto IL_0017;
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_Generic_IEnumeratorU3CCSCore_Codecs_FLAC_FlacMetadataU3E_get_Current_m3DED6FBFB5DDCC55D5AD0EFA9C78EE7195350C03 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) 
{
	{
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_IEnumerator_Reset_mE73BBF435B5655581FFC6817EA4D10183DB56860 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_IEnumerator_Reset_mE73BBF435B5655581FFC6817EA4D10183DB56860_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_IEnumerator_get_Current_mF92B57B4A0BC69C9BC02DD5FB65BC952A101136C (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) 
{
	{
		FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_Generic_IEnumerableU3CCSCore_Codecs_FLAC_FlacMetadataU3E_GetEnumerator_mF1A484683FCE2EC1DC5939835335E046FDBF4E98 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* L_4 = (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657*)il2cpp_codegen_object_new(U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657_il2cpp_TypeInfo_var);
		U3CReadAllMetadataFromStreamU3Ed__1__ctor_mF181EECD929B7C9AA786E6BB82E48AC00FEA3BE6(L_4, 0, NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* L_5 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___U3CU3E3__stream;
		NullCheck(L_5);
		L_5->___stream = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___stream), (void*)L_6);
		U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_IEnumerable_GetEnumerator_m1DE1AE8B9E9DEBEA5A682FD241D39A06B0B53704 (U3CReadAllMetadataFromStreamU3Ed__1_t649CF54A93AACA042B6BF265BC6E5CDC6D0A6657* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CReadAllMetadataFromStreamU3Ed__1_System_Collections_Generic_IEnumerableU3CCSCore_Codecs_FLAC_FlacMetadataU3E_GetEnumerator_mF1A484683FCE2EC1DC5939835335E046FDBF4E98(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_add_ScanFinished_m5422D3D449F94C7533AFA41981490DF86DC03EB1 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* V_0 = NULL;
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* V_1 = NULL;
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* V_2 = NULL;
	{
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_0 = __this->___ScanFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_2 = V_1;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*)Castclass((RuntimeObject*)L_4, EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE_il2cpp_TypeInfo_var));
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE** L_5 = (EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE**)(&__this->___ScanFinished);
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_6 = V_2;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_7 = V_1;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_9 = V_0;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*)L_9) == ((RuntimeObject*)(EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_remove_ScanFinished_m4B9A500FC882136F0E69CEA23AC204ADF90CA1BF (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* V_0 = NULL;
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* V_1 = NULL;
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* V_2 = NULL;
	{
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_0 = __this->___ScanFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_2 = V_1;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*)Castclass((RuntimeObject*)L_4, EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE_il2cpp_TypeInfo_var));
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE** L_5 = (EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE**)(&__this->___ScanFinished);
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_6 = V_2;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_7 = V_1;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_9 = V_0;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*)L_9) == ((RuntimeObject*)(EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* FlacPreScan_get_Frames_m96102FC47107EEAB79043BB27B73939C3251BBE6 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_0 = __this->___U3CFramesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_set_Frames_mCB0194F2FB1CA14640BFDFEC9B304032C563754F (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_0 = ___0_value;
		__this->___U3CFramesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFramesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacPreScan_get_TotalLength_m71890FF51B3CBDB53FBB330A712F31B1CE83961C (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTotalLengthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_set_TotalLength_mF1476FE9C3931DC062C05DF682EC78846F7FF7A1 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTotalLengthU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacPreScan_get_TotalSamples_m57A1DE93F241A420519A3E77DEACC1FAB3DA2145 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTotalSamplesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_set_TotalSamples_mD2664B2766ADC93AC58C0BD3BF2495BC64D7EE19 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTotalSamplesU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan__ctor_m5A6FDD3E2AA37F2DDD0BEF48F208D78FA3784AA2 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacPreScan__ctor_m5A6FDD3E2AA37F2DDD0BEF48F208D78FA3784AA2_RuntimeMethod_var)));
	}

IL_0014:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7, L_2);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral01BC0F9E6764D832B94B324819C01ED5E779071B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacPreScan__ctor_m5A6FDD3E2AA37F2DDD0BEF48F208D78FA3784AA2_RuntimeMethod_var)));
	}

IL_0027:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
		__this->____stream = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_ScanStream_m169100472F5E2EDE998D5AA0222C25ACA07172E9 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___0_streamInfo, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB2BB345883C3D749345EB33B631AA10E7496E8D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC05F00A0B55373DCCC5BAD69438A892759548D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m07B71F8D858BE9AC9981BAAA366C2F01FB37F5A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E V_3;
	memset((&V_3), 0, sizeof(V_3));
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_0);
		V_0 = L_1;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_2 = ___0_streamInfo;
		int32_t L_3 = ___1_mode;
		FlacPreScan_StartScan_m1B0CB764EAB83B834F3740F018CDDAE2FEF14C26(__this, L_2, L_3, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->____stream;
		int64_t L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< int64_t >::Invoke(13, L_4, L_5);
		V_1 = ((int64_t)0);
		V_2 = ((int64_t)0);
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_6;
		L_6 = FlacPreScan_get_Frames_m96102FC47107EEAB79043BB27B73939C3251BBE6_inline(__this, NULL);
		NullCheck(L_6);
		Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E L_7;
		L_7 = List_1_GetEnumerator_m07B71F8D858BE9AC9981BAAA366C2F01FB37F5A0(L_6, List_1_GetEnumerator_m07B71F8D858BE9AC9981BAAA366C2F01FB37F5A0_RuntimeMethod_var);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				Enumerator_Dispose_mB2BB345883C3D749345EB33B631AA10E7496E8D5((&V_3), Enumerator_Dispose_mB2BB345883C3D749345EB33B631AA10E7496E8D5_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0077_1;
			}

IL_0034_1:
			{
				FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E L_8;
				L_8 = Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_inline((&V_3), Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_RuntimeMethod_var);
				V_4 = L_8;
				int64_t L_9 = V_1;
				FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_10;
				L_10 = FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_inline((&V_4), NULL);
				NullCheck(L_10);
				int32_t L_11;
				L_11 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_10, NULL);
				FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_12;
				L_12 = FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_inline((&V_4), NULL);
				NullCheck(L_12);
				int32_t L_13;
				L_13 = FlacFrameHeader_get_BitsPerSample_mD996991E78EF56E101C68EA8212183D8B5DABDD9_inline(L_12, NULL);
				FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_14;
				L_14 = FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_inline((&V_4), NULL);
				NullCheck(L_14);
				int32_t L_15;
				L_15 = FlacFrameHeader_get_Channels_m2F2A17D9026CA512946D48F6743B06D74FC9170B_inline(L_14, NULL);
				V_1 = ((int64_t)il2cpp_codegen_add(L_9, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_11, L_13)), L_15)))));
				int64_t L_16 = V_2;
				FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_17;
				L_17 = FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_inline((&V_4), NULL);
				NullCheck(L_17);
				int32_t L_18;
				L_18 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_17, NULL);
				V_2 = ((int64_t)il2cpp_codegen_add(L_16, ((int64_t)L_18)));
			}

IL_0077_1:
			{
				bool L_19;
				L_19 = Enumerator_MoveNext_mC05F00A0B55373DCCC5BAD69438A892759548D9C((&V_3), Enumerator_MoveNext_mC05F00A0B55373DCCC5BAD69438A892759548D9C_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_0090;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		int64_t L_20 = V_1;
		FlacPreScan_set_TotalLength_mF1476FE9C3931DC062C05DF682EC78846F7FF7A1_inline(__this, L_20, NULL);
		int64_t L_21 = V_2;
		FlacPreScan_set_TotalSamples_mD2664B2766ADC93AC58C0BD3BF2495BC64D7EE19_inline(__this, L_21, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_StartScan_m1B0CB764EAB83B834F3740F018CDDAE2FEF14C26 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___0_streamInfo, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CStartScanU3Eb__0_m48A01C760D2AD1D2E7037B208D618091DB9FAC52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* L_0 = (U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20_0__ctor_m998F0C5BAC8975BF07483336AC403A71B315E024(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* L_2 = V_0;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_3 = ___0_streamInfo;
		NullCheck(L_2);
		L_2->___streamInfo = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___streamInfo), (void*)L_3);
		bool L_4 = __this->____isRunning;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F72E28BC2ED6B4358A7DCAE9AF6CD3A89D12B5C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacPreScan_StartScan_m1B0CB764EAB83B834F3740F018CDDAE2FEF14C26_RuntimeMethod_var)));
	}

IL_0027:
	{
		__this->____isRunning = (bool)1;
		int32_t L_6 = ___1_mode;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0045;
		}
	}
	{
		U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* L_7 = V_0;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_8 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CStartScanU3Eb__0_m48A01C760D2AD1D2E7037B208D618091DB9FAC52_RuntimeMethod_var), NULL);
		bool L_9;
		L_9 = ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D(L_8, NULL);
		return;
	}

IL_0045:
	{
		U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* L_10 = V_0;
		NullCheck(L_10);
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_11 = L_10->___streamInfo;
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_12;
		L_12 = FlacPreScan_RunScan_m65F0017DBB718EDFF40A878EDF55ECF0BC0816A6(__this, L_11, NULL);
		FlacPreScan_set_Frames_mCB0194F2FB1CA14640BFDFEC9B304032C563754F_inline(__this, L_12, NULL);
		__this->____isRunning = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* FlacPreScan_RunScan_m65F0017DBB718EDFF40A878EDF55ECF0BC0816A6 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___0_streamInfo, const RuntimeMethod* method) 
{
	List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* V_0 = NULL;
	{
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_0 = ___0_streamInfo;
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_1;
		L_1 = FlacPreScan_ScanThisShit_mA887BD2235E35994470BA9EA1493C2D65919332D(__this, L_0, NULL);
		V_0 = L_1;
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_2 = V_0;
		FlacPreScan_RaiseScanFinished_m7EBA624F613699BE84BA6DB17BB6A2EF9CF1FD61(__this, L_2, NULL);
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPreScan_RaiseScanFinished_m7EBA624F613699BE84BA6DB17BB6A2EF9CF1FD61 (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___0_frames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* V_0 = NULL;
	{
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_0 = __this->___ScanFinished;
		V_0 = L_0;
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		EventHandler_1_tD9E4E70440CD0830D5E83C8D2DA72C28F149ABBE* L_2 = V_0;
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_3 = ___0_frames;
		FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* L_4 = (FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD*)il2cpp_codegen_object_new(FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD_il2cpp_TypeInfo_var);
		FlacPreScanFinishedEventArgs__ctor_mD3DA32715D5AD318BEC30CFC8BB1D2023D871266(L_4, L_3, NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m0EE56573787FA69924070D413B7014365E9BCAA0_inline(L_2, __this, L_4, NULL);
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* FlacPreScan_ScanThisShit_mA887BD2235E35994470BA9EA1493C2D65919332D (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___0_streamInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m44DDF1115E1836E5822E01F24CB8E96993A8746E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* V_2 = NULL;
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E V_3;
	memset((&V_3), 0, sizeof(V_3));
	FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* V_10 = NULL;
	FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* V_11 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)50000));
		V_1 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< int64_t >::Invoke(13, L_2, ((int64_t)4));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = V_0;
		FlacMetadata_SkipMetadata_m4AC942E174ED1AC2F3012A8D0B823058835609B6(L_3, NULL);
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_4 = (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169*)il2cpp_codegen_object_new(List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169_il2cpp_TypeInfo_var);
		List_1__ctor_m44DDF1115E1836E5822E01F24CB8E96993A8746E(L_4, List_1__ctor_m44DDF1115E1836E5822E01F24CB8E96993A8746E_RuntimeMethod_var);
		V_2 = L_4;
		il2cpp_codegen_initobj((&V_3), sizeof(FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E));
		FlacFrameInformation_set_IsFirstFrame_mFF528869D7640D40EE66F41C0441528D12D91F81_inline((&V_3), (bool)1, NULL);
		V_4 = (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46*)NULL;
	}

IL_0039:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32, L_5, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
		V_5 = L_8;
		int32_t L_9 = V_5;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)16))))
		{
			goto IL_0151;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		V_7 = L_11;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_7;
		NullCheck(L_12);
		if (((int32_t)(((RuntimeArray*)L_12)->max_length)))
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		V_6 = (uint8_t*)((uintptr_t)0);
		goto IL_006b;
	}

IL_0061:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_7;
		NullCheck(L_13);
		V_6 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_006b:
	{
		uint8_t* L_14 = V_6;
		V_8 = (uint8_t*)((intptr_t)L_14);
		goto IL_0128;
	}

IL_0075:
	{
		uint8_t* L_15 = V_8;
		uint8_t* L_16 = L_15;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, 1));
		int32_t L_17 = *((uint8_t*)L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0128;
		}
	}
	{
		uint8_t* L_18 = V_8;
		int32_t L_19 = *((uint8_t*)L_18);
		if ((!(((uint32_t)((int32_t)(L_19&((int32_t)248)))) == ((uint32_t)((int32_t)248)))))
		{
			goto IL_0128;
		}
	}
	{
		uint8_t* L_20 = V_8;
		V_9 = L_20;
		uint8_t* L_21 = V_8;
		V_8 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_21, 1));
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_22 = ___0_streamInfo;
		bool L_23;
		L_23 = FlacPreScan_IsFrame_m6BE3B75E2C23C3FB981661DE16441EAC34C480EA(__this, (&V_8), L_22, (&V_10), NULL);
		if (!L_23)
		{
			goto IL_0124;
		}
	}
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_24 = V_10;
		V_11 = L_24;
		bool L_25;
		L_25 = FlacFrameInformation_get_IsFirstFrame_mAF9EFA2E50AC9980630137D5A21F807EEC8C4002_inline((&V_3), NULL);
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_26 = V_11;
		V_4 = L_26;
		FlacFrameInformation_set_IsFirstFrame_mFF528869D7640D40EE66F41C0441528D12D91F81_inline((&V_3), (bool)0, NULL);
	}

IL_00ca:
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_27 = V_4;
		if (!L_27)
		{
			goto IL_011e;
		}
	}
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_28 = V_4;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_29 = V_11;
		NullCheck(L_28);
		bool L_30;
		L_30 = FlacFrameHeader_IsFormatEqualTo_mB842B23CE3D8677E0252F920180D368A0B60ADF4(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_011e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_31 = V_0;
		NullCheck(L_31);
		int64_t L_32;
		L_32 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_31);
		int32_t L_33 = V_5;
		uint8_t* L_34 = V_9;
		uint8_t* L_35 = V_6;
		FlacFrameInformation_set_StreamOffset_m4D635D167C1F66B39694113A5C114D521CFBA17F_inline((&V_3), ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(L_32, ((int64_t)L_33))), ((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_34, 1)), ((intptr_t)L_35)))/1))))), NULL);
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_36 = V_11;
		FlacFrameInformation_set_Header_mFED08C61F2CD6A6527CF6E83C5207B0E8095B9BC_inline((&V_3), L_36, NULL);
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_37 = V_2;
		FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E L_38 = V_3;
		NullCheck(L_37);
		List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_inline(L_37, L_38, List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_RuntimeMethod_var);
		FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* L_39 = (&V_3);
		int64_t L_40;
		L_40 = FlacFrameInformation_get_SampleOffset_mA328BCEA4FB720802D88B3318653DCE2A2463C57_inline(L_39, NULL);
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_41 = V_11;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_41, NULL);
		FlacFrameInformation_set_SampleOffset_mC6B1C1A2DCB4C35F8C57FD423A2E6C1E485D556E_inline(L_39, ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)L_42))), NULL);
		goto IL_0128;
	}

IL_011e:
	{
		uint8_t* L_43 = V_9;
		V_8 = L_43;
		goto IL_0128;
	}

IL_0124:
	{
		uint8_t* L_44 = V_9;
		V_8 = L_44;
	}

IL_0128:
	{
		uint8_t* L_45 = V_6;
		int32_t L_46 = V_5;
		uint8_t* L_47 = V_8;
		if ((!(((uintptr_t)((intptr_t)il2cpp_codegen_subtract(((intptr_t)il2cpp_codegen_add(((intptr_t)L_45), L_46)), ((int32_t)16)))) <= ((uintptr_t)L_47))))
		{
			goto IL_0075;
		}
	}
	{
		V_6 = (uint8_t*)((uintptr_t)0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_48 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_49 = L_48;
		NullCheck(L_49);
		int64_t L_50;
		L_50 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_49);
		NullCheck(L_49);
		VirtualActionInvoker1< int64_t >::Invoke(13, L_49, ((int64_t)il2cpp_codegen_subtract(L_50, ((int64_t)((int32_t)16)))));
		goto IL_0039;
	}

IL_0151:
	{
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_51 = V_2;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacPreScan_IsFrame_m6BE3B75E2C23C3FB981661DE16441EAC34C480EA (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, uint8_t** ___0_buffer, FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* ___1_streamInfo, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46** ___2_header, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46** L_0 = ___2_header;
		uint8_t** L_1 = ___0_buffer;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_2 = ___1_streamInfo;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_3 = (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46*)il2cpp_codegen_object_new(FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46_il2cpp_TypeInfo_var);
		FlacFrameHeader__ctor_mEAA0828225540309266E280EAB04C85A3115E2BA(L_3, L_1, L_2, (bool)1, (bool)0, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_3);
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46** L_4 = ___2_header;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_5 = *((FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46**)L_4);
		NullCheck(L_5);
		bool L_6;
		L_6 = FlacFrameHeader_get_HasError_mACE7D2B8D8FBEDAC3FB5B45918A0A091294915E3_inline(L_5, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m998F0C5BAC8975BF07483336AC403A71B315E024 (U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CStartScanU3Eb__0_m48A01C760D2AD1D2E7037B208D618091DB9FAC52 (U3CU3Ec__DisplayClass20_0_tEBD427AC2601B8C5F4378FE411E0C5212E6B55ED* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* L_0 = __this->___U3CU3E4__this;
		FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* L_1 = __this->___U3CU3E4__this;
		FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* L_2 = __this->___streamInfo;
		NullCheck(L_1);
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_3;
		L_3 = FlacPreScan_RunScan_m65F0017DBB718EDFF40A878EDF55ECF0BC0816A6(L_1, L_2, NULL);
		NullCheck(L_0);
		FlacPreScan_set_Frames_mCB0194F2FB1CA14640BFDFEC9B304032C563754F_inline(L_0, L_3, NULL);
		FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* L_4 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->____isRunning = (bool)0;
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
IL2CPP_EXTERN_C void FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshal_pinvoke(const FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E& unmarshaled, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CHeaderU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Header>k__BackingField' of type 'FlacFrameInformation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CHeaderU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshal_pinvoke_back(const FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_pinvoke& marshaled, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E& unmarshaled)
{
	Exception_t* ___U3CHeaderU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Header>k__BackingField' of type 'FlacFrameInformation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CHeaderU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshal_pinvoke_cleanup(FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshal_com(const FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E& unmarshaled, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_com& marshaled)
{
	Exception_t* ___U3CHeaderU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Header>k__BackingField' of type 'FlacFrameInformation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CHeaderU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshal_com_back(const FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_com& marshaled, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E& unmarshaled)
{
	Exception_t* ___U3CHeaderU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Header>k__BackingField' of type 'FlacFrameInformation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CHeaderU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshal_com_cleanup(FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_0 = __this->___U3CHeaderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* _returnValue;
	_returnValue = FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameInformation_set_Header_mFED08C61F2CD6A6527CF6E83C5207B0E8095B9BC (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_value, const RuntimeMethod* method) 
{
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_0 = ___0_value;
		__this->___U3CHeaderU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeaderU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void FlacFrameInformation_set_Header_mFED08C61F2CD6A6527CF6E83C5207B0E8095B9BC_AdjustorThunk (RuntimeObject* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_value, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	FlacFrameInformation_set_Header_mFED08C61F2CD6A6527CF6E83C5207B0E8095B9BC_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlacFrameInformation_get_IsFirstFrame_mAF9EFA2E50AC9980630137D5A21F807EEC8C4002 (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsFirstFrameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool FlacFrameInformation_get_IsFirstFrame_mAF9EFA2E50AC9980630137D5A21F807EEC8C4002_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FlacFrameInformation_get_IsFirstFrame_mAF9EFA2E50AC9980630137D5A21F807EEC8C4002_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameInformation_set_IsFirstFrame_mFF528869D7640D40EE66F41C0441528D12D91F81 (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsFirstFrameU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void FlacFrameInformation_set_IsFirstFrame_mFF528869D7640D40EE66F41C0441528D12D91F81_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	FlacFrameInformation_set_IsFirstFrame_mFF528869D7640D40EE66F41C0441528D12D91F81_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacFrameInformation_get_StreamOffset_m703163CE91BDC5849C4C3A323EF076DB7C949B93 (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CStreamOffsetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t FlacFrameInformation_get_StreamOffset_m703163CE91BDC5849C4C3A323EF076DB7C949B93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = FlacFrameInformation_get_StreamOffset_m703163CE91BDC5849C4C3A323EF076DB7C949B93_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameInformation_set_StreamOffset_m4D635D167C1F66B39694113A5C114D521CFBA17F (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CStreamOffsetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void FlacFrameInformation_set_StreamOffset_m4D635D167C1F66B39694113A5C114D521CFBA17F_AdjustorThunk (RuntimeObject* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	FlacFrameInformation_set_StreamOffset_m4D635D167C1F66B39694113A5C114D521CFBA17F_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacFrameInformation_get_SampleOffset_mA328BCEA4FB720802D88B3318653DCE2A2463C57 (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CSampleOffsetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t FlacFrameInformation_get_SampleOffset_mA328BCEA4FB720802D88B3318653DCE2A2463C57_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = FlacFrameInformation_get_SampleOffset_mA328BCEA4FB720802D88B3318653DCE2A2463C57_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacFrameInformation_set_SampleOffset_mC6B1C1A2DCB4C35F8C57FD423A2E6C1E485D556E (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSampleOffsetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void FlacFrameInformation_set_SampleOffset_mC6B1C1A2DCB4C35F8C57FD423A2E6C1E485D556E_AdjustorThunk (RuntimeObject* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E*>(__this + _offset);
	FlacFrameInformation_set_SampleOffset_mC6B1C1A2DCB4C35F8C57FD423A2E6C1E485D556E_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRiceContent_UpdateSize_m7E0C168C585BF88ED3C1DB5E96CB13C30CFDDCC1 (FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* __this, int32_t ___0_partitionOrder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____capByOrder;
		int32_t L_1 = ___0_partitionOrder;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = ___0_partitionOrder;
		V_0 = ((int32_t)(1<<((int32_t)(L_2&((int32_t)31)))));
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___Parameters = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Parameters), (void*)L_4);
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___RawBits = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RawBits), (void*)L_6);
		int32_t L_7 = ___0_partitionOrder;
		__this->____capByOrder = L_7;
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRiceContent__ctor_m8A53BFAD6D644957A13CC64D1318F48A4DB97F2C (FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* __this, const RuntimeMethod* method) 
{
	{
		__this->____capByOrder = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataSeekTable__ctor_mD32C04A3052838C60AC15381FAE186C60A510E42 (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_length, bool ___2_lastBlock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	int32_t V_2 = 0;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = ___2_lastBlock;
		int32_t L_1 = ___1_length;
		FlacMetadata__ctor_m82D63EBDEC34C759064E00F6D436A902F4058E36(__this, 3, L_0, L_1, NULL);
		int32_t L_2 = ___1_length;
		V_0 = ((int32_t)(L_2/((int32_t)18)));
		int32_t L_3 = V_0;
		FlacMetadataSeekTable_set_EntryCount_m4A3C390031716091067E099DFA2FAC26704FE7E7_inline(__this, L_3, NULL);
		int32_t L_4 = V_0;
		FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122* L_5 = (FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122*)(FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122*)SZArrayNew(FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->____seekPoints = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____seekPoints), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_7, L_6, NULL);
		V_1 = L_7;
	}
	try
	{
		{
			V_2 = 0;
			goto IL_004f_1;
		}

IL_002c_1:
		{
			FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122* L_8 = __this->____seekPoints;
			int32_t L_9 = V_2;
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = V_1;
			NullCheck(L_10);
			int64_t L_11;
			L_11 = VirtualFuncInvoker0< int64_t >::Invoke(17, L_10);
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = V_1;
			NullCheck(L_12);
			int64_t L_13;
			L_13 = VirtualFuncInvoker0< int64_t >::Invoke(17, L_12);
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = V_1;
			NullCheck(L_14);
			int16_t L_15;
			L_15 = VirtualFuncInvoker0< int16_t >::Invoke(13, L_14);
			FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* L_16 = (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD*)il2cpp_codegen_object_new(FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD_il2cpp_TypeInfo_var);
			FlacSeekPoint__ctor_mEC5CB83596A4ABDA2D7EF3ABC3FD1593563961E5(L_16, L_11, L_13, L_15, NULL);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_16);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD*)L_16);
			int32_t L_17 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		}

IL_004f_1:
		{
			int32_t L_18 = V_2;
			int32_t L_19 = V_0;
			if ((((int32_t)L_18) < ((int32_t)L_19)))
			{
				goto IL_002c_1;
			}
		}
		{
			goto IL_005e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0055;
		}
		throw e;
	}

CATCH_0055:
	{
		V_3 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_20 = V_3;
		FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* L_21 = (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var)));
		FlacException__ctor_m53BB743F7B0239EC43A4E0B0BD9D598804994735(L_21, L_20, 1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacMetadataSeekTable__ctor_mD32C04A3052838C60AC15381FAE186C60A510E42_RuntimeMethod_var)));
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacMetadataSeekTable_get_EntryCount_m48150F36C1E18E48DC3EDA528669675034D19842 (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CEntryCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacMetadataSeekTable_set_EntryCount_m4A3C390031716091067E099DFA2FAC26704FE7E7 (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CEntryCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122* FlacMetadataSeekTable_get_SeekPoints_m47B0954AF03C19B6F0627A567F82F55E412483F3 (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, const RuntimeMethod* method) 
{
	{
		FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122* L_0 = __this->____seekPoints;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* FlacMetadataSeekTable_get_Item_m794BFA23D7F630DFD8C961D41F05FC6DA9BF11F9 (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		FlacSeekPointU5BU5D_tCCF470FF804DACEA3EBD8494EC02BCEAF0A1D122* L_0 = __this->____seekPoints;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacSeekPoint_get_SampleNumber_mCE184C7C529B009EDBE7B77D6C50DF35D3503AF1 (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CSampleNumberU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSeekPoint_set_SampleNumber_mA10FAD1E5580494621228BD66701B737194A820E (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSampleNumberU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FlacSeekPoint_get_Offset_m5ED9C28EF31BEA50148357347372F5B2FC46BCB6 (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3COffsetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSeekPoint_set_Offset_mB4808E52C3C94C72F6D03DA948E3F867A3590057 (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3COffsetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacSeekPoint_get_FrameSize_m01111A2C6273DC78F08042480A5E76EDF752325A (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFrameSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSeekPoint_set_FrameSize_m34CAE7D6FA22211EEA623C36C7B81FF8E920BCDC (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFrameSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSeekPoint__ctor_m0A55CE08339F063345AE33B801C3C928891C443B (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, const RuntimeMethod* method) 
{
	{
		__this->___PlaceHolderPointSampleNumber = ((int64_t)(-1));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSeekPoint__ctor_mEC5CB83596A4ABDA2D7EF3ABC3FD1593563961E5 (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_sampleNumber, int64_t ___1_offset, int32_t ___2_frameSize, const RuntimeMethod* method) 
{
	{
		__this->___PlaceHolderPointSampleNumber = ((int64_t)(-1));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int64_t L_0 = ___0_sampleNumber;
		FlacSeekPoint_set_SampleNumber_mA10FAD1E5580494621228BD66701B737194A820E_inline(__this, L_0, NULL);
		int64_t L_1 = ___1_offset;
		FlacSeekPoint_set_Offset_mB4808E52C3C94C72F6D03DA948E3F867A3590057_inline(__this, L_1, NULL);
		int32_t L_2 = ___2_frameSize;
		FlacSeekPoint_set_FrameSize_m34CAE7D6FA22211EEA623C36C7B81FF8E920BCDC_inline(__this, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRice_ProcessResidual_mF105ACAD6BE5DCAFD894E4AEE15375677B53CE43 (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_order, int32_t ___4_partitionOrder, int32_t ___5_codingMethod, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_0 = ___2_data;
		NullCheck(L_0);
		FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* L_1 = L_0->___Content;
		int32_t L_2 = ___4_partitionOrder;
		NullCheck(L_1);
		FlacPartitionedRiceContent_UpdateSize_m7E0C168C585BF88ED3C1DB5E96CB13C30CFDDCC1(L_1, L_2, NULL);
		int32_t L_3 = ___5_codingMethod;
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = 4;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 5;
	}

IL_001a:
	{
		V_1 = G_B3_0;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		G_B6_0 = ((int32_t)15);
		goto IL_0024;
	}

IL_0022:
	{
		G_B6_0 = ((int32_t)31);
	}

IL_0024:
	{
		V_2 = G_B6_0;
		int32_t L_6 = ___4_partitionOrder;
		V_4 = ((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))));
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_7 = ___2_data;
		NullCheck(L_7);
		int32_t* L_8 = L_7->___ResidualBuffer;
		int32_t L_9 = ___3_order;
		V_5 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))));
		V_6 = 0;
		goto IL_00ef;
	}

IL_0043:
	{
		int32_t L_10 = ___4_partitionOrder;
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_11 = ___1_header;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_11, NULL);
		int32_t L_13 = ___3_order;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		goto IL_0075;
	}

IL_0052:
	{
		int32_t L_14 = V_6;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_15 = ___1_header;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_15, NULL);
		int32_t L_17 = ___4_partitionOrder;
		V_3 = ((int32_t)(L_16>>((int32_t)(L_17&((int32_t)31)))));
		goto IL_0075;
	}

IL_0066:
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_18 = ___1_header;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_18, NULL);
		int32_t L_20 = ___4_partitionOrder;
		int32_t L_21 = ___3_order;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_19>>((int32_t)(L_20&((int32_t)31))))), L_21));
	}

IL_0075:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_22 = ___0_reader;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		uint32_t L_24;
		L_24 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_22, L_23, NULL);
		V_7 = L_24;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_25 = ___2_data;
		NullCheck(L_25);
		FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* L_26 = L_25->___Content;
		NullCheck(L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = L_26->___Parameters;
		int32_t L_28 = V_6;
		uint32_t L_29 = V_7;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		uint32_t L_30 = V_7;
		int32_t L_31 = V_2;
		if ((((int64_t)((int64_t)(uint64_t)L_30)) < ((int64_t)((int64_t)L_31))))
		{
			goto IL_00d5;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_32 = ___0_reader;
		NullCheck(L_32);
		uint32_t L_33;
		L_33 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_32, 5, NULL);
		V_8 = L_33;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_34 = ___2_data;
		NullCheck(L_34);
		FlacPartitionedRiceContent_t194FDF32DD3DF869718FD06F893A2727285CDF97* L_35 = L_34->___Content;
		NullCheck(L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35->___RawBits;
		int32_t L_37 = V_6;
		uint32_t L_38 = V_8;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)L_38);
		V_9 = 0;
		goto IL_00ce;
	}

IL_00b3:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_39 = ___0_reader;
		uint32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41;
		L_41 = BitReader_ReadBitsSigned_m3FCB08DE4A5B616455E804675FFCE67E74130611(L_39, L_40, NULL);
		V_10 = L_41;
		int32_t* L_42 = V_5;
		int32_t L_43 = V_10;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t* L_44 = V_5;
		V_5 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_44, 4));
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ce:
	{
		int32_t L_46 = V_9;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00e9;
	}

IL_00d5:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_48 = ___0_reader;
		int32_t L_49 = V_3;
		uint32_t L_50 = V_7;
		int32_t* L_51 = V_5;
		FlacPartitionedRice_ReadFlacRiceBlock_mAF4D873D3FC3AE99041213FD8D2B5F76B42FD74F(L_48, L_49, L_50, L_51, NULL);
		int32_t* L_52 = V_5;
		int32_t L_53 = V_3;
		V_5 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))));
	}

IL_00e9:
	{
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00ef:
	{
		int32_t L_55 = V_6;
		int32_t L_56 = V_4;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0043;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacPartitionedRice_ReadFlacRiceBlock_mAF4D873D3FC3AE99041213FD8D2B5F76B42FD74F (FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, int32_t ___1_nvals, int32_t ___2_riceParameter, int32_t* ___3_ptrDest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_StaticFields*)il2cpp_codegen_static_fields_for(FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40_il2cpp_TypeInfo_var))->___UnaryTable;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0013;
		}
	}

IL_000e:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001b;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_001b:
	{
		int32_t L_4 = ___2_riceParameter;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_4&((int32_t)31))))), 1));
		int32_t L_5 = ___2_riceParameter;
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		V_3 = 0;
		goto IL_003c;
	}

IL_002b:
	{
		int32_t* L_6 = ___3_ptrDest;
		int32_t* L_7 = L_6;
		___3_ptrDest = ((int32_t*)il2cpp_codegen_add((intptr_t)L_7, 4));
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_8 = ___0_reader;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = FlacBitReader_ReadUnarySigned_m280CF634E7DE07DF34980E9CF4B7846C1033A4BE(L_8, NULL);
		*((int32_t*)L_7) = (int32_t)L_9;
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003c:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = ___1_nvals;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0105;
	}

IL_0045:
	{
		V_4 = 0;
		goto IL_00fd;
	}

IL_004d:
	{
		uint8_t* L_13 = V_0;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_14 = ___0_reader;
		NullCheck(L_14);
		uint32_t L_15;
		L_15 = BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline(L_14, NULL);
		int32_t L_16 = *((uint8_t*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_13), (intptr_t)((uintptr_t)((int32_t)((uint32_t)L_15>>((int32_t)24)))))));
		V_5 = L_16;
		uint32_t L_17 = V_5;
		V_6 = L_17;
		goto IL_0081;
	}

IL_0063:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_18 = ___0_reader;
		NullCheck(L_18);
		BitReader_SeekBits_m14A3A016332D3C9A95F767C047AB8A9765EAC333(L_18, 8, NULL);
		uint8_t* L_19 = V_0;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_20 = ___0_reader;
		NullCheck(L_20);
		uint32_t L_21;
		L_21 = BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline(L_20, NULL);
		int32_t L_22 = *((uint8_t*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_19), (intptr_t)((uintptr_t)((int32_t)((uint32_t)L_21>>((int32_t)24)))))));
		V_5 = L_22;
		uint32_t L_23 = V_6;
		uint32_t L_24 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
	}

IL_0081:
	{
		uint32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)8)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_26 = ___2_riceParameter;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)16))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_27 = ___2_riceParameter;
		uint32_t L_28 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_27, (int32_t)L_28)), 1));
		uint32_t L_29 = V_6;
		int32_t L_30 = ___2_riceParameter;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_31 = ___0_reader;
		NullCheck(L_31);
		uint32_t L_32;
		L_32 = BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline(L_31, NULL);
		int32_t L_33 = V_8;
		uint32_t L_34 = V_2;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_29<<((int32_t)(L_30&((int32_t)31)))))|((int32_t)(((int32_t)((uint32_t)L_32>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_33))&((int32_t)31)))))&(int32_t)L_34))));
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_35 = ___0_reader;
		int32_t L_36 = V_8;
		NullCheck(L_35);
		BitReader_SeekBits_m14A3A016332D3C9A95F767C047AB8A9765EAC333(L_35, L_36, NULL);
		goto IL_00e3;
	}

IL_00b8:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_37 = ___0_reader;
		uint32_t L_38 = V_6;
		NullCheck(L_37);
		BitReader_SeekBits_m14A3A016332D3C9A95F767C047AB8A9765EAC333(L_37, ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_38&7)), 1)), NULL);
		uint32_t L_39 = V_6;
		int32_t L_40 = ___2_riceParameter;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_41 = ___0_reader;
		NullCheck(L_41);
		uint32_t L_42;
		L_42 = BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline(L_41, NULL);
		int32_t L_43 = ___2_riceParameter;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_39<<((int32_t)(L_40&((int32_t)31)))))|((int32_t)((uint32_t)L_42>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_43))&((int32_t)31)))))));
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_44 = ___0_reader;
		int32_t L_45 = ___2_riceParameter;
		NullCheck(L_44);
		BitReader_SeekBits_m14A3A016332D3C9A95F767C047AB8A9765EAC333(L_44, L_45, NULL);
	}

IL_00e3:
	{
		int32_t* L_46 = ___3_ptrDest;
		int32_t* L_47 = L_46;
		___3_ptrDest = ((int32_t*)il2cpp_codegen_add((intptr_t)L_47, 4));
		uint32_t L_48 = V_7;
		uint32_t L_49 = V_7;
		*((int32_t*)L_47) = (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_48>>1))))^((int64_t)((-((int32_t)((int32_t)L_49&1))))))));
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00fd:
	{
		int32_t L_51 = V_4;
		int32_t L_52 = ___1_nvals;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_004d;
		}
	}

IL_0105:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacResidual__ctor_m08367145E362EE8FB81978CB9177DE48E95D3940 (FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_order, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_0 = ___0_reader;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_0, 2, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}

IL_0015:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_4 = ___0_reader;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_4, 4, NULL);
		V_1 = L_5;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_6 = ___0_reader;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_7 = ___1_header;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_8 = ___2_data;
		int32_t L_9 = ___3_order;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		FlacPartitionedRice_ProcessResidual_mF105ACAD6BE5DCAFD894E4AEE15375677B53CE43(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return;
	}

IL_002a:
	{
		FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* L_12 = (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var)));
		FlacException__ctor_mC3B5E3D8221F165400D744F6B83AE40B8B74E3A7(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3C5AF5E6CAA52085A29464DD6CE39FFBACE19EE)), 3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacResidual__ctor_m08367145E362EE8FB81978CB9177DE48E95D3940_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameConstant__ctor_m3E4BA6EA629FFB6D51FCDD5146451F676F561D50 (FlacSubFrameConstant_t8A75CC8322C05911A3C5AC399BED02D3B5613234* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_bitsPerSample, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_0 = ___1_header;
		FlacSubFrameBase__ctor_mD7EE6B5C2F65C54462B89C5597166610E788C597(__this, L_0, NULL);
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_1 = ___0_reader;
		int32_t L_2 = ___3_bitsPerSample;
		NullCheck(L_1);
		uint32_t L_3;
		L_3 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_1, L_2, NULL);
		V_0 = L_3;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_4 = ___2_data;
		NullCheck(L_4);
		int32_t* L_5 = L_4->___DestinationBuffer;
		V_1 = L_5;
		V_2 = 0;
		goto IL_0026;
	}

IL_001b:
	{
		int32_t* L_6 = V_1;
		int32_t* L_7 = L_6;
		V_1 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_7, 4));
		int32_t L_8 = V_0;
		*((int32_t*)L_7) = (int32_t)L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		int32_t L_10 = V_2;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_11 = ___1_header;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_11, NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameVerbatim__ctor_m1EE5126070C4DFEAD1EF6271CA67390EB70AF0A5 (FlacSubFrameVerbatim_tEEA54ACEC3318E5632BBE7AB706A27C7E8A87E9B* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_bitsPerSample, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_0 = ___1_header;
		FlacSubFrameBase__ctor_mD7EE6B5C2F65C54462B89C5597166610E788C597(__this, L_0, NULL);
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_1 = ___2_data;
		NullCheck(L_1);
		int32_t* L_2 = L_1->___DestinationBuffer;
		V_0 = L_2;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_3 = ___2_data;
		NullCheck(L_3);
		int32_t* L_4 = L_3->___ResidualBuffer;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0034;
	}

IL_0019:
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_5 = ___0_reader;
		int32_t L_6 = ___3_bitsPerSample;
		NullCheck(L_5);
		uint32_t L_7;
		L_7 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_5, L_6, NULL);
		V_3 = L_7;
		int32_t* L_8 = V_0;
		int32_t* L_9 = L_8;
		V_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_9, 4));
		int32_t L_10 = V_3;
		*((int32_t*)L_9) = (int32_t)L_10;
		int32_t* L_11 = V_1;
		int32_t* L_12 = L_11;
		V_1 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_12, 4));
		int32_t L_13 = V_3;
		*((int32_t*)L_12) = (int32_t)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0034:
	{
		int32_t L_15 = V_2;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_16 = ___1_header;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0019;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameLPC__ctor_m851729811514BC6274CE8F2AA2C2749BEA48E2C0 (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* ___0_reader, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___1_header, FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* ___2_data, int32_t ___3_bitsPerSample, int32_t ___4_order, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_0 = ___1_header;
		FlacSubFrameBase__ctor_mD7EE6B5C2F65C54462B89C5597166610E788C597(__this, L_0, NULL);
		int32_t L_1 = ___4_order;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_8 = 0;
		goto IL_0038;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		int32_t L_4 = V_8;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_5 = ___2_data;
		NullCheck(L_5);
		int32_t* L_6 = L_5->___ResidualBuffer;
		int32_t L_7 = V_8;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_8 = ___0_reader;
		int32_t L_9 = ___3_bitsPerSample;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = BitReader_ReadBitsSigned_m3FCB08DE4A5B616455E804675FFCE67E74130611(L_8, L_9, NULL);
		int32_t L_11 = L_10;
		V_9 = L_11;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), 4))))) = (int32_t)L_11;
		int32_t L_12 = V_9;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_12);
		int32_t L_13 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0038:
	{
		int32_t L_14 = V_8;
		int32_t L_15 = ___4_order;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0014;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_16 = ___0_reader;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = BitReader_ReadBits_m766A36A0CE35BC4BCE9B2FCD8787DBA33E30CDE9(L_16, 4, NULL);
		V_1 = L_17;
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0057;
		}
	}
	{
		FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* L_19 = (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var)));
		FlacException__ctor_mC3B5E3D8221F165400D744F6B83AE40B8B74E3A7(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDBA608EC310F707363709EB91E7AB5ABFCC06402)), 3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacSubFrameLPC__ctor_m851729811514BC6274CE8F2AA2C2749BEA48E2C0_RuntimeMethod_var)));
	}

IL_0057:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_21 = ___0_reader;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = BitReader_ReadBitsSigned_m3FCB08DE4A5B616455E804675FFCE67E74130611(L_21, 5, NULL);
		V_2 = L_22;
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80* L_24 = (FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacException_t7C5F4F3624D6D43E0350467F38AA775C15020F80_il2cpp_TypeInfo_var)));
		FlacException__ctor_mC3B5E3D8221F165400D744F6B83AE40B8B74E3A7(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDCBD8F10928149BEE06DBF3E61F38930493A1A6)), 3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlacSubFrameLPC__ctor_m851729811514BC6274CE8F2AA2C2749BEA48E2C0_RuntimeMethod_var)));
	}

IL_0073:
	{
		int32_t L_25 = ___4_order;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_3 = L_26;
		V_10 = 0;
		goto IL_0091;
	}

IL_0080:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_3;
		int32_t L_28 = V_10;
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_29 = ___0_reader;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = BitReader_ReadBitsSigned_m3FCB08DE4A5B616455E804675FFCE67E74130611(L_29, L_30, NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_31);
		int32_t L_32 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0091:
	{
		int32_t L_33 = V_10;
		int32_t L_34 = ___4_order;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		FlacBitReader_t9DDDC2CB85524F3DDD4EF95AD8969280A08FFC40* L_35 = ___0_reader;
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_36 = ___1_header;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_37 = ___2_data;
		int32_t L_38 = ___4_order;
		FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8* L_39 = (FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8*)il2cpp_codegen_object_new(FlacResidual_t1E483C75A595868D0B06C9D68FBF93E4193103C8_il2cpp_TypeInfo_var);
		FlacResidual__ctor_m08367145E362EE8FB81978CB9177DE48E95D3940(L_39, L_35, L_36, L_37, L_38, NULL);
		V_4 = L_39;
		V_11 = 0;
		goto IL_00c8;
	}

IL_00a8:
	{
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_40 = ___2_data;
		NullCheck(L_40);
		int32_t* L_41 = L_40->___DestinationBuffer;
		int32_t L_42 = V_11;
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_43 = ___2_data;
		NullCheck(L_43);
		int32_t* L_44 = L_43->___ResidualBuffer;
		int32_t L_45 = V_11;
		int32_t L_46 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), 4))))) = (int32_t)L_46;
		int32_t L_47 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00c8:
	{
		int32_t L_48 = V_11;
		int32_t L_49 = ___4_order;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_00a8;
		}
	}
	{
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_50 = ___2_data;
		NullCheck(L_50);
		int32_t* L_51 = L_50->___ResidualBuffer;
		int32_t L_52 = ___4_order;
		V_5 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 4))));
		FlacSubFrameData_tBE71B0F19C720E535074BB1416FBFB9E61E6412A* L_53 = ___2_data;
		NullCheck(L_53);
		int32_t* L_54 = L_53->___DestinationBuffer;
		int32_t L_55 = ___4_order;
		V_6 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4))));
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_56 = ___1_header;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline(L_56, NULL);
		int32_t L_58 = ___4_order;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_57, L_58));
		int32_t L_59 = ___3_bitsPerSample;
		int32_t L_60 = V_1;
		int32_t L_61 = ___4_order;
		int32_t L_62;
		L_62 = FlacSubFrameLPC_Log2_m900F84B6DB56096432F13B782D07B5AF363F2B74(__this, L_61, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_59, L_60)), L_62))) > ((int32_t)((int32_t)32))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t* L_63 = V_5;
		int32_t* L_64 = V_6;
		int32_t L_65 = V_7;
		int32_t L_66 = ___4_order;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_3;
		int32_t L_68 = V_2;
		FlacSubFrameLPC_RestoreLPCSignal32_mCAF1CC26DE28FFA286AC6C95E790C8035D11172A(__this, L_63, L_64, L_65, L_66, L_67, L_68, NULL);
		return;
	}

IL_0117:
	{
		int32_t* L_69 = V_5;
		int32_t* L_70 = V_6;
		int32_t L_71 = V_7;
		int32_t L_72 = ___4_order;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_3;
		int32_t L_74 = V_2;
		FlacSubFrameLPC_RestoreLPCSignal64_mDB4D7D145773FEEC21A7EE308FF6956486A0DDC5(__this, L_69, L_70, L_71, L_72, L_73, L_74, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlacSubFrameLPC_Log2_m900F84B6DB56096432F13B782D07B5AF363F2B74 (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_x;
		___0_x = ((int32_t)(L_1>>1));
	}

IL_000d:
	{
		int32_t L_2 = ___0_x;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameLPC_RestoreLPCSignal32_mCAF1CC26DE28FFA286AC6C95E790C8035D11172A (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, int32_t* ___0_residual, int32_t* ___1_destination, int32_t ___2_length, int32_t ___3_order, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_qlpCoeff, int32_t ___5_lpcShiftNeeded, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	{
		int32_t* L_0 = ___1_destination;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___4_qlpCoeff;
		V_1 = L_1;
		int32_t L_2 = ___3_order;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)12))))
		{
			goto IL_06e8;
		}
	}
	{
		int32_t L_3 = ___3_order;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, 1)))
		{
			case 0:
			{
				goto IL_06b0;
			}
			case 1:
			{
				goto IL_0669;
			}
			case 2:
			{
				goto IL_0613;
			}
			case 3:
			{
				goto IL_05ae;
			}
			case 4:
			{
				goto IL_053a;
			}
			case 5:
			{
				goto IL_04b7;
			}
			case 6:
			{
				goto IL_041f;
			}
			case 7:
			{
				goto IL_0378;
			}
			case 8:
			{
				goto IL_02c1;
			}
			case 9:
			{
				goto IL_01f9;
			}
			case 10:
			{
				goto IL_0120;
			}
			case 11:
			{
				goto IL_0048;
			}
		}
	}
	{
		return;
	}

IL_0048:
	{
		V_3 = 0;
		goto IL_0118;
	}

IL_004f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)11);
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t* L_7 = V_0;
		int32_t L_8 = V_3;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)10);
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t* L_13 = V_0;
		int32_t L_14 = V_3;
		int32_t L_15 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = ((int32_t)9);
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t* L_19 = V_0;
		int32_t L_20 = V_3;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 8;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t* L_25 = V_0;
		int32_t L_26 = V_3;
		int32_t L_27 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = 7;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t* L_31 = V_0;
		int32_t L_32 = V_3;
		int32_t L_33 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_32, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 6;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t* L_37 = V_0;
		int32_t L_38 = V_3;
		int32_t L_39 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_38, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = 5;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t* L_43 = V_0;
		int32_t L_44 = V_3;
		int32_t L_45 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_44, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 4;
		int32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t* L_49 = V_0;
		int32_t L_50 = V_3;
		int32_t L_51 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_50, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 3;
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t* L_55 = V_0;
		int32_t L_56 = V_3;
		int32_t L_57 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_56, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 2;
		int32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		int32_t* L_61 = V_0;
		int32_t L_62 = V_3;
		int32_t L_63 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_62, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65 = 1;
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t* L_67 = V_0;
		int32_t L_68 = V_3;
		int32_t L_69 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_68, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71 = 0;
		int32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		int32_t* L_73 = V_0;
		int32_t L_74 = V_3;
		int32_t L_75 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_73, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_74, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, L_9)), ((int32_t)il2cpp_codegen_multiply(L_12, L_15)))), ((int32_t)il2cpp_codegen_multiply(L_18, L_21)))), ((int32_t)il2cpp_codegen_multiply(L_24, L_27)))), ((int32_t)il2cpp_codegen_multiply(L_30, L_33)))), ((int32_t)il2cpp_codegen_multiply(L_36, L_39)))), ((int32_t)il2cpp_codegen_multiply(L_42, L_45)))), ((int32_t)il2cpp_codegen_multiply(L_48, L_51)))), ((int32_t)il2cpp_codegen_multiply(L_54, L_57)))), ((int32_t)il2cpp_codegen_multiply(L_60, L_63)))), ((int32_t)il2cpp_codegen_multiply(L_66, L_69)))), ((int32_t)il2cpp_codegen_multiply(L_72, L_75))));
		int32_t* L_76 = V_0;
		int32_t L_77 = V_3;
		int32_t* L_78 = ___0_residual;
		int32_t L_79 = V_3;
		int32_t L_80 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4)))));
		int32_t L_81 = V_2;
		int32_t L_82 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_76, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_77), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_80, ((int32_t)(L_81>>((int32_t)(L_82&((int32_t)31)))))));
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0118:
	{
		int32_t L_84 = V_3;
		int32_t L_85 = ___2_length;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_0120:
	{
		V_4 = 0;
		goto IL_01f0;
	}

IL_0128:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_1;
		NullCheck(L_86);
		int32_t L_87 = ((int32_t)10);
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t* L_89 = V_0;
		int32_t L_90 = V_4;
		int32_t L_91 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_90, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_1;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)9);
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		int32_t* L_95 = V_0;
		int32_t L_96 = V_4;
		int32_t L_97 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_95, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_96, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_1;
		NullCheck(L_98);
		int32_t L_99 = 8;
		int32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t* L_101 = V_0;
		int32_t L_102 = V_4;
		int32_t L_103 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_101, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_102, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_1;
		NullCheck(L_104);
		int32_t L_105 = 7;
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t* L_107 = V_0;
		int32_t L_108 = V_4;
		int32_t L_109 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_107, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_108, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_1;
		NullCheck(L_110);
		int32_t L_111 = 6;
		int32_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		int32_t* L_113 = V_0;
		int32_t L_114 = V_4;
		int32_t L_115 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_113, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_114, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = V_1;
		NullCheck(L_116);
		int32_t L_117 = 5;
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t* L_119 = V_0;
		int32_t L_120 = V_4;
		int32_t L_121 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_119, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_120, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = V_1;
		NullCheck(L_122);
		int32_t L_123 = 4;
		int32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t* L_125 = V_0;
		int32_t L_126 = V_4;
		int32_t L_127 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_125, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_126, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = V_1;
		NullCheck(L_128);
		int32_t L_129 = 3;
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t* L_131 = V_0;
		int32_t L_132 = V_4;
		int32_t L_133 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_131, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_132, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_134 = V_1;
		NullCheck(L_134);
		int32_t L_135 = 2;
		int32_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		int32_t* L_137 = V_0;
		int32_t L_138 = V_4;
		int32_t L_139 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_137, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_138, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = V_1;
		NullCheck(L_140);
		int32_t L_141 = 1;
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t* L_143 = V_0;
		int32_t L_144 = V_4;
		int32_t L_145 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_143, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_144, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = V_1;
		NullCheck(L_146);
		int32_t L_147 = 0;
		int32_t L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		int32_t* L_149 = V_0;
		int32_t L_150 = V_4;
		int32_t L_151 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_149, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_150, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_88, L_91)), ((int32_t)il2cpp_codegen_multiply(L_94, L_97)))), ((int32_t)il2cpp_codegen_multiply(L_100, L_103)))), ((int32_t)il2cpp_codegen_multiply(L_106, L_109)))), ((int32_t)il2cpp_codegen_multiply(L_112, L_115)))), ((int32_t)il2cpp_codegen_multiply(L_118, L_121)))), ((int32_t)il2cpp_codegen_multiply(L_124, L_127)))), ((int32_t)il2cpp_codegen_multiply(L_130, L_133)))), ((int32_t)il2cpp_codegen_multiply(L_136, L_139)))), ((int32_t)il2cpp_codegen_multiply(L_142, L_145)))), ((int32_t)il2cpp_codegen_multiply(L_148, L_151))));
		int32_t* L_152 = V_0;
		int32_t L_153 = V_4;
		int32_t* L_154 = ___0_residual;
		int32_t L_155 = V_4;
		int32_t L_156 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_154, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_155), 4)))));
		int32_t L_157 = V_2;
		int32_t L_158 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_153), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_156, ((int32_t)(L_157>>((int32_t)(L_158&((int32_t)31)))))));
		int32_t L_159 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
	}

IL_01f0:
	{
		int32_t L_160 = V_4;
		int32_t L_161 = ___2_length;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_0128;
		}
	}
	{
		return;
	}

IL_01f9:
	{
		V_5 = 0;
		goto IL_02b8;
	}

IL_0201:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = V_1;
		NullCheck(L_162);
		int32_t L_163 = ((int32_t)9);
		int32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		int32_t* L_165 = V_0;
		int32_t L_166 = V_5;
		int32_t L_167 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_166, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = V_1;
		NullCheck(L_168);
		int32_t L_169 = 8;
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t* L_171 = V_0;
		int32_t L_172 = V_5;
		int32_t L_173 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_171, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_172, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = V_1;
		NullCheck(L_174);
		int32_t L_175 = 7;
		int32_t L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		int32_t* L_177 = V_0;
		int32_t L_178 = V_5;
		int32_t L_179 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_178, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = V_1;
		NullCheck(L_180);
		int32_t L_181 = 6;
		int32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t* L_183 = V_0;
		int32_t L_184 = V_5;
		int32_t L_185 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_183, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_184, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_1;
		NullCheck(L_186);
		int32_t L_187 = 5;
		int32_t L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		int32_t* L_189 = V_0;
		int32_t L_190 = V_5;
		int32_t L_191 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_189, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_190, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_1;
		NullCheck(L_192);
		int32_t L_193 = 4;
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t* L_195 = V_0;
		int32_t L_196 = V_5;
		int32_t L_197 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_195, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_196, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_1;
		NullCheck(L_198);
		int32_t L_199 = 3;
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		int32_t* L_201 = V_0;
		int32_t L_202 = V_5;
		int32_t L_203 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_201, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_202, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = V_1;
		NullCheck(L_204);
		int32_t L_205 = 2;
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		int32_t* L_207 = V_0;
		int32_t L_208 = V_5;
		int32_t L_209 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_207, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_208, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = V_1;
		NullCheck(L_210);
		int32_t L_211 = 1;
		int32_t L_212 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		int32_t* L_213 = V_0;
		int32_t L_214 = V_5;
		int32_t L_215 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_213, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_214, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = V_1;
		NullCheck(L_216);
		int32_t L_217 = 0;
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		int32_t* L_219 = V_0;
		int32_t L_220 = V_5;
		int32_t L_221 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_219, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_220, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_164, L_167)), ((int32_t)il2cpp_codegen_multiply(L_170, L_173)))), ((int32_t)il2cpp_codegen_multiply(L_176, L_179)))), ((int32_t)il2cpp_codegen_multiply(L_182, L_185)))), ((int32_t)il2cpp_codegen_multiply(L_188, L_191)))), ((int32_t)il2cpp_codegen_multiply(L_194, L_197)))), ((int32_t)il2cpp_codegen_multiply(L_200, L_203)))), ((int32_t)il2cpp_codegen_multiply(L_206, L_209)))), ((int32_t)il2cpp_codegen_multiply(L_212, L_215)))), ((int32_t)il2cpp_codegen_multiply(L_218, L_221))));
		int32_t* L_222 = V_0;
		int32_t L_223 = V_5;
		int32_t* L_224 = ___0_residual;
		int32_t L_225 = V_5;
		int32_t L_226 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_224, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_225), 4)))));
		int32_t L_227 = V_2;
		int32_t L_228 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_222, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_223), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_226, ((int32_t)(L_227>>((int32_t)(L_228&((int32_t)31)))))));
		int32_t L_229 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_229, 1));
	}

IL_02b8:
	{
		int32_t L_230 = V_5;
		int32_t L_231 = ___2_length;
		if ((((int32_t)L_230) < ((int32_t)L_231)))
		{
			goto IL_0201;
		}
	}
	{
		return;
	}

IL_02c1:
	{
		V_6 = 0;
		goto IL_036f;
	}

IL_02c9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_1;
		NullCheck(L_232);
		int32_t L_233 = 8;
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t* L_235 = V_0;
		int32_t L_236 = V_6;
		int32_t L_237 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_235, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_236, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_1;
		NullCheck(L_238);
		int32_t L_239 = 7;
		int32_t L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		int32_t* L_241 = V_0;
		int32_t L_242 = V_6;
		int32_t L_243 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_241, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_242, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = V_1;
		NullCheck(L_244);
		int32_t L_245 = 6;
		int32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		int32_t* L_247 = V_0;
		int32_t L_248 = V_6;
		int32_t L_249 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_247, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_248, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_250 = V_1;
		NullCheck(L_250);
		int32_t L_251 = 5;
		int32_t L_252 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		int32_t* L_253 = V_0;
		int32_t L_254 = V_6;
		int32_t L_255 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_253, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_254, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = V_1;
		NullCheck(L_256);
		int32_t L_257 = 4;
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t* L_259 = V_0;
		int32_t L_260 = V_6;
		int32_t L_261 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_260, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_262 = V_1;
		NullCheck(L_262);
		int32_t L_263 = 3;
		int32_t L_264 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		int32_t* L_265 = V_0;
		int32_t L_266 = V_6;
		int32_t L_267 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_265, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_266, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = V_1;
		NullCheck(L_268);
		int32_t L_269 = 2;
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t* L_271 = V_0;
		int32_t L_272 = V_6;
		int32_t L_273 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_271, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_272, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_274 = V_1;
		NullCheck(L_274);
		int32_t L_275 = 1;
		int32_t L_276 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		int32_t* L_277 = V_0;
		int32_t L_278 = V_6;
		int32_t L_279 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_277, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_278, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = V_1;
		NullCheck(L_280);
		int32_t L_281 = 0;
		int32_t L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t* L_283 = V_0;
		int32_t L_284 = V_6;
		int32_t L_285 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_283, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_284, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_234, L_237)), ((int32_t)il2cpp_codegen_multiply(L_240, L_243)))), ((int32_t)il2cpp_codegen_multiply(L_246, L_249)))), ((int32_t)il2cpp_codegen_multiply(L_252, L_255)))), ((int32_t)il2cpp_codegen_multiply(L_258, L_261)))), ((int32_t)il2cpp_codegen_multiply(L_264, L_267)))), ((int32_t)il2cpp_codegen_multiply(L_270, L_273)))), ((int32_t)il2cpp_codegen_multiply(L_276, L_279)))), ((int32_t)il2cpp_codegen_multiply(L_282, L_285))));
		int32_t* L_286 = V_0;
		int32_t L_287 = V_6;
		int32_t* L_288 = ___0_residual;
		int32_t L_289 = V_6;
		int32_t L_290 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_288, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_289), 4)))));
		int32_t L_291 = V_2;
		int32_t L_292 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_286, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_287), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_290, ((int32_t)(L_291>>((int32_t)(L_292&((int32_t)31)))))));
		int32_t L_293 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_293, 1));
	}

IL_036f:
	{
		int32_t L_294 = V_6;
		int32_t L_295 = ___2_length;
		if ((((int32_t)L_294) < ((int32_t)L_295)))
		{
			goto IL_02c9;
		}
	}
	{
		return;
	}

IL_0378:
	{
		V_7 = 0;
		goto IL_0416;
	}

IL_0380:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = V_1;
		NullCheck(L_296);
		int32_t L_297 = 7;
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		int32_t* L_299 = V_0;
		int32_t L_300 = V_7;
		int32_t L_301 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_299, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_300, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_302 = V_1;
		NullCheck(L_302);
		int32_t L_303 = 6;
		int32_t L_304 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		int32_t* L_305 = V_0;
		int32_t L_306 = V_7;
		int32_t L_307 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_305, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_306, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = V_1;
		NullCheck(L_308);
		int32_t L_309 = 5;
		int32_t L_310 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		int32_t* L_311 = V_0;
		int32_t L_312 = V_7;
		int32_t L_313 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_311, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_312, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_314 = V_1;
		NullCheck(L_314);
		int32_t L_315 = 4;
		int32_t L_316 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		int32_t* L_317 = V_0;
		int32_t L_318 = V_7;
		int32_t L_319 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_317, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_318, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = V_1;
		NullCheck(L_320);
		int32_t L_321 = 3;
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		int32_t* L_323 = V_0;
		int32_t L_324 = V_7;
		int32_t L_325 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_323, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_324, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = V_1;
		NullCheck(L_326);
		int32_t L_327 = 2;
		int32_t L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		int32_t* L_329 = V_0;
		int32_t L_330 = V_7;
		int32_t L_331 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_329, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_330, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_1;
		NullCheck(L_332);
		int32_t L_333 = 1;
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t* L_335 = V_0;
		int32_t L_336 = V_7;
		int32_t L_337 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_335, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_336, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_1;
		NullCheck(L_338);
		int32_t L_339 = 0;
		int32_t L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		int32_t* L_341 = V_0;
		int32_t L_342 = V_7;
		int32_t L_343 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_341, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_342, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_298, L_301)), ((int32_t)il2cpp_codegen_multiply(L_304, L_307)))), ((int32_t)il2cpp_codegen_multiply(L_310, L_313)))), ((int32_t)il2cpp_codegen_multiply(L_316, L_319)))), ((int32_t)il2cpp_codegen_multiply(L_322, L_325)))), ((int32_t)il2cpp_codegen_multiply(L_328, L_331)))), ((int32_t)il2cpp_codegen_multiply(L_334, L_337)))), ((int32_t)il2cpp_codegen_multiply(L_340, L_343))));
		int32_t* L_344 = V_0;
		int32_t L_345 = V_7;
		int32_t* L_346 = ___0_residual;
		int32_t L_347 = V_7;
		int32_t L_348 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_346, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_347), 4)))));
		int32_t L_349 = V_2;
		int32_t L_350 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_344, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_345), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_348, ((int32_t)(L_349>>((int32_t)(L_350&((int32_t)31)))))));
		int32_t L_351 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_351, 1));
	}

IL_0416:
	{
		int32_t L_352 = V_7;
		int32_t L_353 = ___2_length;
		if ((((int32_t)L_352) < ((int32_t)L_353)))
		{
			goto IL_0380;
		}
	}
	{
		return;
	}

IL_041f:
	{
		V_8 = 0;
		goto IL_04ae;
	}

IL_0427:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_354 = V_1;
		NullCheck(L_354);
		int32_t L_355 = 6;
		int32_t L_356 = (L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		int32_t* L_357 = V_0;
		int32_t L_358 = V_8;
		int32_t L_359 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_357, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_358, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = V_1;
		NullCheck(L_360);
		int32_t L_361 = 5;
		int32_t L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t* L_363 = V_0;
		int32_t L_364 = V_8;
		int32_t L_365 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_363, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_364, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_366 = V_1;
		NullCheck(L_366);
		int32_t L_367 = 4;
		int32_t L_368 = (L_366)->GetAt(static_cast<il2cpp_array_size_t>(L_367));
		int32_t* L_369 = V_0;
		int32_t L_370 = V_8;
		int32_t L_371 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_369, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_370, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = V_1;
		NullCheck(L_372);
		int32_t L_373 = 3;
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		int32_t* L_375 = V_0;
		int32_t L_376 = V_8;
		int32_t L_377 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_375, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_376, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = V_1;
		NullCheck(L_378);
		int32_t L_379 = 2;
		int32_t L_380 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_379));
		int32_t* L_381 = V_0;
		int32_t L_382 = V_8;
		int32_t L_383 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_381, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_382, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = V_1;
		NullCheck(L_384);
		int32_t L_385 = 1;
		int32_t L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		int32_t* L_387 = V_0;
		int32_t L_388 = V_8;
		int32_t L_389 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_387, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_388, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_390 = V_1;
		NullCheck(L_390);
		int32_t L_391 = 0;
		int32_t L_392 = (L_390)->GetAt(static_cast<il2cpp_array_size_t>(L_391));
		int32_t* L_393 = V_0;
		int32_t L_394 = V_8;
		int32_t L_395 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_393, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_394, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_356, L_359)), ((int32_t)il2cpp_codegen_multiply(L_362, L_365)))), ((int32_t)il2cpp_codegen_multiply(L_368, L_371)))), ((int32_t)il2cpp_codegen_multiply(L_374, L_377)))), ((int32_t)il2cpp_codegen_multiply(L_380, L_383)))), ((int32_t)il2cpp_codegen_multiply(L_386, L_389)))), ((int32_t)il2cpp_codegen_multiply(L_392, L_395))));
		int32_t* L_396 = V_0;
		int32_t L_397 = V_8;
		int32_t* L_398 = ___0_residual;
		int32_t L_399 = V_8;
		int32_t L_400 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_398, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_399), 4)))));
		int32_t L_401 = V_2;
		int32_t L_402 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_396, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_397), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_400, ((int32_t)(L_401>>((int32_t)(L_402&((int32_t)31)))))));
		int32_t L_403 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_403, 1));
	}

IL_04ae:
	{
		int32_t L_404 = V_8;
		int32_t L_405 = ___2_length;
		if ((((int32_t)L_404) < ((int32_t)L_405)))
		{
			goto IL_0427;
		}
	}
	{
		return;
	}

IL_04b7:
	{
		V_9 = 0;
		goto IL_0534;
	}

IL_04bc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_406 = V_1;
		NullCheck(L_406);
		int32_t L_407 = 5;
		int32_t L_408 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_407));
		int32_t* L_409 = V_0;
		int32_t L_410 = V_9;
		int32_t L_411 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_409, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_410, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = V_1;
		NullCheck(L_412);
		int32_t L_413 = 4;
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t* L_415 = V_0;
		int32_t L_416 = V_9;
		int32_t L_417 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_415, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_416, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = V_1;
		NullCheck(L_418);
		int32_t L_419 = 3;
		int32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		int32_t* L_421 = V_0;
		int32_t L_422 = V_9;
		int32_t L_423 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_421, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_422, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = V_1;
		NullCheck(L_424);
		int32_t L_425 = 2;
		int32_t L_426 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		int32_t* L_427 = V_0;
		int32_t L_428 = V_9;
		int32_t L_429 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_427, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_428, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_430 = V_1;
		NullCheck(L_430);
		int32_t L_431 = 1;
		int32_t L_432 = (L_430)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		int32_t* L_433 = V_0;
		int32_t L_434 = V_9;
		int32_t L_435 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_433, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_434, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = V_1;
		NullCheck(L_436);
		int32_t L_437 = 0;
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		int32_t* L_439 = V_0;
		int32_t L_440 = V_9;
		int32_t L_441 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_439, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_440, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_408, L_411)), ((int32_t)il2cpp_codegen_multiply(L_414, L_417)))), ((int32_t)il2cpp_codegen_multiply(L_420, L_423)))), ((int32_t)il2cpp_codegen_multiply(L_426, L_429)))), ((int32_t)il2cpp_codegen_multiply(L_432, L_435)))), ((int32_t)il2cpp_codegen_multiply(L_438, L_441))));
		int32_t* L_442 = V_0;
		int32_t L_443 = V_9;
		int32_t* L_444 = ___0_residual;
		int32_t L_445 = V_9;
		int32_t L_446 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_444, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_445), 4)))));
		int32_t L_447 = V_2;
		int32_t L_448 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_442, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_443), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_446, ((int32_t)(L_447>>((int32_t)(L_448&((int32_t)31)))))));
		int32_t L_449 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_449, 1));
	}

IL_0534:
	{
		int32_t L_450 = V_9;
		int32_t L_451 = ___2_length;
		if ((((int32_t)L_450) < ((int32_t)L_451)))
		{
			goto IL_04bc;
		}
	}
	{
		return;
	}

IL_053a:
	{
		V_10 = 0;
		goto IL_05a8;
	}

IL_053f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = V_1;
		NullCheck(L_452);
		int32_t L_453 = 4;
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		int32_t* L_455 = V_0;
		int32_t L_456 = V_10;
		int32_t L_457 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_455, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_456, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = V_1;
		NullCheck(L_458);
		int32_t L_459 = 3;
		int32_t L_460 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		int32_t* L_461 = V_0;
		int32_t L_462 = V_10;
		int32_t L_463 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_461, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_462, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = V_1;
		NullCheck(L_464);
		int32_t L_465 = 2;
		int32_t L_466 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		int32_t* L_467 = V_0;
		int32_t L_468 = V_10;
		int32_t L_469 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_467, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_468, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_470 = V_1;
		NullCheck(L_470);
		int32_t L_471 = 1;
		int32_t L_472 = (L_470)->GetAt(static_cast<il2cpp_array_size_t>(L_471));
		int32_t* L_473 = V_0;
		int32_t L_474 = V_10;
		int32_t L_475 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_473, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_474, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = V_1;
		NullCheck(L_476);
		int32_t L_477 = 0;
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		int32_t* L_479 = V_0;
		int32_t L_480 = V_10;
		int32_t L_481 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_479, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_480, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_454, L_457)), ((int32_t)il2cpp_codegen_multiply(L_460, L_463)))), ((int32_t)il2cpp_codegen_multiply(L_466, L_469)))), ((int32_t)il2cpp_codegen_multiply(L_472, L_475)))), ((int32_t)il2cpp_codegen_multiply(L_478, L_481))));
		int32_t* L_482 = V_0;
		int32_t L_483 = V_10;
		int32_t* L_484 = ___0_residual;
		int32_t L_485 = V_10;
		int32_t L_486 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_484, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_485), 4)))));
		int32_t L_487 = V_2;
		int32_t L_488 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_482, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_483), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_486, ((int32_t)(L_487>>((int32_t)(L_488&((int32_t)31)))))));
		int32_t L_489 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_489, 1));
	}

IL_05a8:
	{
		int32_t L_490 = V_10;
		int32_t L_491 = ___2_length;
		if ((((int32_t)L_490) < ((int32_t)L_491)))
		{
			goto IL_053f;
		}
	}
	{
		return;
	}

IL_05ae:
	{
		V_11 = 0;
		goto IL_060d;
	}

IL_05b3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = V_1;
		NullCheck(L_492);
		int32_t L_493 = 3;
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		int32_t* L_495 = V_0;
		int32_t L_496 = V_11;
		int32_t L_497 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_495, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_496, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = V_1;
		NullCheck(L_498);
		int32_t L_499 = 2;
		int32_t L_500 = (L_498)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		int32_t* L_501 = V_0;
		int32_t L_502 = V_11;
		int32_t L_503 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_501, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_502, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = V_1;
		NullCheck(L_504);
		int32_t L_505 = 1;
		int32_t L_506 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		int32_t* L_507 = V_0;
		int32_t L_508 = V_11;
		int32_t L_509 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_507, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_508, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_510 = V_1;
		NullCheck(L_510);
		int32_t L_511 = 0;
		int32_t L_512 = (L_510)->GetAt(static_cast<il2cpp_array_size_t>(L_511));
		int32_t* L_513 = V_0;
		int32_t L_514 = V_11;
		int32_t L_515 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_513, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_514, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_494, L_497)), ((int32_t)il2cpp_codegen_multiply(L_500, L_503)))), ((int32_t)il2cpp_codegen_multiply(L_506, L_509)))), ((int32_t)il2cpp_codegen_multiply(L_512, L_515))));
		int32_t* L_516 = V_0;
		int32_t L_517 = V_11;
		int32_t* L_518 = ___0_residual;
		int32_t L_519 = V_11;
		int32_t L_520 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_518, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_519), 4)))));
		int32_t L_521 = V_2;
		int32_t L_522 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_516, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_517), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_520, ((int32_t)(L_521>>((int32_t)(L_522&((int32_t)31)))))));
		int32_t L_523 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_523, 1));
	}

IL_060d:
	{
		int32_t L_524 = V_11;
		int32_t L_525 = ___2_length;
		if ((((int32_t)L_524) < ((int32_t)L_525)))
		{
			goto IL_05b3;
		}
	}
	{
		return;
	}

IL_0613:
	{
		V_12 = 0;
		goto IL_0663;
	}

IL_0618:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_526 = V_1;
		NullCheck(L_526);
		int32_t L_527 = 2;
		int32_t L_528 = (L_526)->GetAt(static_cast<il2cpp_array_size_t>(L_527));
		int32_t* L_529 = V_0;
		int32_t L_530 = V_12;
		int32_t L_531 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_529, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_530, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = V_1;
		NullCheck(L_532);
		int32_t L_533 = 1;
		int32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		int32_t* L_535 = V_0;
		int32_t L_536 = V_12;
		int32_t L_537 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_535, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_536, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = V_1;
		NullCheck(L_538);
		int32_t L_539 = 0;
		int32_t L_540 = (L_538)->GetAt(static_cast<il2cpp_array_size_t>(L_539));
		int32_t* L_541 = V_0;
		int32_t L_542 = V_12;
		int32_t L_543 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_541, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_542, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_528, L_531)), ((int32_t)il2cpp_codegen_multiply(L_534, L_537)))), ((int32_t)il2cpp_codegen_multiply(L_540, L_543))));
		int32_t* L_544 = V_0;
		int32_t L_545 = V_12;
		int32_t* L_546 = ___0_residual;
		int32_t L_547 = V_12;
		int32_t L_548 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_546, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_547), 4)))));
		int32_t L_549 = V_2;
		int32_t L_550 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_544, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_545), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_548, ((int32_t)(L_549>>((int32_t)(L_550&((int32_t)31)))))));
		int32_t L_551 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_551, 1));
	}

IL_0663:
	{
		int32_t L_552 = V_12;
		int32_t L_553 = ___2_length;
		if ((((int32_t)L_552) < ((int32_t)L_553)))
		{
			goto IL_0618;
		}
	}
	{
		return;
	}

IL_0669:
	{
		V_13 = 0;
		goto IL_06aa;
	}

IL_066e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_554 = V_1;
		NullCheck(L_554);
		int32_t L_555 = 1;
		int32_t L_556 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_555));
		int32_t* L_557 = V_0;
		int32_t L_558 = V_13;
		int32_t L_559 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_557, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_558, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_560 = V_1;
		NullCheck(L_560);
		int32_t L_561 = 0;
		int32_t L_562 = (L_560)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		int32_t* L_563 = V_0;
		int32_t L_564 = V_13;
		int32_t L_565 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_563, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_564, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_556, L_559)), ((int32_t)il2cpp_codegen_multiply(L_562, L_565))));
		int32_t* L_566 = V_0;
		int32_t L_567 = V_13;
		int32_t* L_568 = ___0_residual;
		int32_t L_569 = V_13;
		int32_t L_570 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_568, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_569), 4)))));
		int32_t L_571 = V_2;
		int32_t L_572 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_566, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_567), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_570, ((int32_t)(L_571>>((int32_t)(L_572&((int32_t)31)))))));
		int32_t L_573 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_573, 1));
	}

IL_06aa:
	{
		int32_t L_574 = V_13;
		int32_t L_575 = ___2_length;
		if ((((int32_t)L_574) < ((int32_t)L_575)))
		{
			goto IL_066e;
		}
	}
	{
		return;
	}

IL_06b0:
	{
		V_14 = 0;
		goto IL_06e2;
	}

IL_06b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_576 = V_1;
		NullCheck(L_576);
		int32_t L_577 = 0;
		int32_t L_578 = (L_576)->GetAt(static_cast<il2cpp_array_size_t>(L_577));
		int32_t* L_579 = V_0;
		int32_t L_580 = V_14;
		int32_t L_581 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_579, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_580, 1))), 4)))));
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_578, L_581));
		int32_t* L_582 = V_0;
		int32_t L_583 = V_14;
		int32_t* L_584 = ___0_residual;
		int32_t L_585 = V_14;
		int32_t L_586 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_584, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_585), 4)))));
		int32_t L_587 = V_2;
		int32_t L_588 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_582, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_583), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_586, ((int32_t)(L_587>>((int32_t)(L_588&((int32_t)31)))))));
		int32_t L_589 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_589, 1));
	}

IL_06e2:
	{
		int32_t L_590 = V_14;
		int32_t L_591 = ___2_length;
		if ((((int32_t)L_590) < ((int32_t)L_591)))
		{
			goto IL_06b5;
		}
	}
	{
		return;
	}

IL_06e8:
	{
		int32_t L_592 = ___3_order;
		if ((((int32_t)L_592) <= ((int32_t)((int32_t)12))))
		{
			goto IL_27ad;
		}
	}
	{
		int32_t L_593 = ___3_order;
		switch (((int32_t)il2cpp_codegen_subtract(L_593, ((int32_t)13))))
		{
			case 0:
			{
				goto IL_26b1;
			}
			case 1:
			{
				goto IL_25a3;
			}
			case 2:
			{
				goto IL_2484;
			}
			case 3:
			{
				goto IL_2354;
			}
			case 4:
			{
				goto IL_2213;
			}
			case 5:
			{
				goto IL_20c1;
			}
			case 6:
			{
				goto IL_1f5e;
			}
			case 7:
			{
				goto IL_1dea;
			}
			case 8:
			{
				goto IL_1c65;
			}
			case 9:
			{
				goto IL_1acf;
			}
			case 10:
			{
				goto IL_1928;
			}
			case 11:
			{
				goto IL_1770;
			}
			case 12:
			{
				goto IL_15a7;
			}
			case 13:
			{
				goto IL_13cd;
			}
			case 14:
			{
				goto IL_11e2;
			}
			case 15:
			{
				goto IL_0fe6;
			}
			case 16:
			{
				goto IL_0dd9;
			}
			case 17:
			{
				goto IL_0bbb;
			}
			case 18:
			{
				goto IL_098c;
			}
			case 19:
			{
				goto IL_074c;
			}
		}
	}
	{
		return;
	}

IL_074c:
	{
		V_16 = 0;
		goto IL_0983;
	}

IL_0754:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_594 = V_1;
		NullCheck(L_594);
		int32_t L_595 = ((int32_t)31);
		int32_t L_596 = (L_594)->GetAt(static_cast<il2cpp_array_size_t>(L_595));
		int32_t* L_597 = V_0;
		int32_t L_598 = V_16;
		int32_t L_599 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_597, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_598, ((int32_t)32)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_600 = V_1;
		NullCheck(L_600);
		int32_t L_601 = ((int32_t)30);
		int32_t L_602 = (L_600)->GetAt(static_cast<il2cpp_array_size_t>(L_601));
		int32_t* L_603 = V_0;
		int32_t L_604 = V_16;
		int32_t L_605 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_603, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_604, ((int32_t)31)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_606 = V_1;
		NullCheck(L_606);
		int32_t L_607 = ((int32_t)29);
		int32_t L_608 = (L_606)->GetAt(static_cast<il2cpp_array_size_t>(L_607));
		int32_t* L_609 = V_0;
		int32_t L_610 = V_16;
		int32_t L_611 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_609, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_610, ((int32_t)30)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = V_1;
		NullCheck(L_612);
		int32_t L_613 = ((int32_t)28);
		int32_t L_614 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		int32_t* L_615 = V_0;
		int32_t L_616 = V_16;
		int32_t L_617 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_615, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_616, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_618 = V_1;
		NullCheck(L_618);
		int32_t L_619 = ((int32_t)27);
		int32_t L_620 = (L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_619));
		int32_t* L_621 = V_0;
		int32_t L_622 = V_16;
		int32_t L_623 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_621, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_622, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_624 = V_1;
		NullCheck(L_624);
		int32_t L_625 = ((int32_t)26);
		int32_t L_626 = (L_624)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		int32_t* L_627 = V_0;
		int32_t L_628 = V_16;
		int32_t L_629 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_627, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_628, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_630 = V_1;
		NullCheck(L_630);
		int32_t L_631 = ((int32_t)25);
		int32_t L_632 = (L_630)->GetAt(static_cast<il2cpp_array_size_t>(L_631));
		int32_t* L_633 = V_0;
		int32_t L_634 = V_16;
		int32_t L_635 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_633, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_634, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_636 = V_1;
		NullCheck(L_636);
		int32_t L_637 = ((int32_t)24);
		int32_t L_638 = (L_636)->GetAt(static_cast<il2cpp_array_size_t>(L_637));
		int32_t* L_639 = V_0;
		int32_t L_640 = V_16;
		int32_t L_641 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_639, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_640, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_642 = V_1;
		NullCheck(L_642);
		int32_t L_643 = ((int32_t)23);
		int32_t L_644 = (L_642)->GetAt(static_cast<il2cpp_array_size_t>(L_643));
		int32_t* L_645 = V_0;
		int32_t L_646 = V_16;
		int32_t L_647 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_645, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_646, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_648 = V_1;
		NullCheck(L_648);
		int32_t L_649 = ((int32_t)22);
		int32_t L_650 = (L_648)->GetAt(static_cast<il2cpp_array_size_t>(L_649));
		int32_t* L_651 = V_0;
		int32_t L_652 = V_16;
		int32_t L_653 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_651, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_652, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_654 = V_1;
		NullCheck(L_654);
		int32_t L_655 = ((int32_t)21);
		int32_t L_656 = (L_654)->GetAt(static_cast<il2cpp_array_size_t>(L_655));
		int32_t* L_657 = V_0;
		int32_t L_658 = V_16;
		int32_t L_659 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_657, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_658, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_660 = V_1;
		NullCheck(L_660);
		int32_t L_661 = ((int32_t)20);
		int32_t L_662 = (L_660)->GetAt(static_cast<il2cpp_array_size_t>(L_661));
		int32_t* L_663 = V_0;
		int32_t L_664 = V_16;
		int32_t L_665 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_663, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_664, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_666 = V_1;
		NullCheck(L_666);
		int32_t L_667 = ((int32_t)19);
		int32_t L_668 = (L_666)->GetAt(static_cast<il2cpp_array_size_t>(L_667));
		int32_t* L_669 = V_0;
		int32_t L_670 = V_16;
		int32_t L_671 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_669, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_670, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_672 = V_1;
		NullCheck(L_672);
		int32_t L_673 = ((int32_t)18);
		int32_t L_674 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_673));
		int32_t* L_675 = V_0;
		int32_t L_676 = V_16;
		int32_t L_677 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_675, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_676, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_678 = V_1;
		NullCheck(L_678);
		int32_t L_679 = ((int32_t)17);
		int32_t L_680 = (L_678)->GetAt(static_cast<il2cpp_array_size_t>(L_679));
		int32_t* L_681 = V_0;
		int32_t L_682 = V_16;
		int32_t L_683 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_681, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_682, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_684 = V_1;
		NullCheck(L_684);
		int32_t L_685 = ((int32_t)16);
		int32_t L_686 = (L_684)->GetAt(static_cast<il2cpp_array_size_t>(L_685));
		int32_t* L_687 = V_0;
		int32_t L_688 = V_16;
		int32_t L_689 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_687, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_688, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_690 = V_1;
		NullCheck(L_690);
		int32_t L_691 = ((int32_t)15);
		int32_t L_692 = (L_690)->GetAt(static_cast<il2cpp_array_size_t>(L_691));
		int32_t* L_693 = V_0;
		int32_t L_694 = V_16;
		int32_t L_695 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_693, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_694, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_696 = V_1;
		NullCheck(L_696);
		int32_t L_697 = ((int32_t)14);
		int32_t L_698 = (L_696)->GetAt(static_cast<il2cpp_array_size_t>(L_697));
		int32_t* L_699 = V_0;
		int32_t L_700 = V_16;
		int32_t L_701 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_699, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_700, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_702 = V_1;
		NullCheck(L_702);
		int32_t L_703 = ((int32_t)13);
		int32_t L_704 = (L_702)->GetAt(static_cast<il2cpp_array_size_t>(L_703));
		int32_t* L_705 = V_0;
		int32_t L_706 = V_16;
		int32_t L_707 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_705, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_706, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_708 = V_1;
		NullCheck(L_708);
		int32_t L_709 = ((int32_t)12);
		int32_t L_710 = (L_708)->GetAt(static_cast<il2cpp_array_size_t>(L_709));
		int32_t* L_711 = V_0;
		int32_t L_712 = V_16;
		int32_t L_713 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_711, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_712, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_714 = V_1;
		NullCheck(L_714);
		int32_t L_715 = ((int32_t)11);
		int32_t L_716 = (L_714)->GetAt(static_cast<il2cpp_array_size_t>(L_715));
		int32_t* L_717 = V_0;
		int32_t L_718 = V_16;
		int32_t L_719 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_717, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_718, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_720 = V_1;
		NullCheck(L_720);
		int32_t L_721 = ((int32_t)10);
		int32_t L_722 = (L_720)->GetAt(static_cast<il2cpp_array_size_t>(L_721));
		int32_t* L_723 = V_0;
		int32_t L_724 = V_16;
		int32_t L_725 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_723, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_724, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_726 = V_1;
		NullCheck(L_726);
		int32_t L_727 = ((int32_t)9);
		int32_t L_728 = (L_726)->GetAt(static_cast<il2cpp_array_size_t>(L_727));
		int32_t* L_729 = V_0;
		int32_t L_730 = V_16;
		int32_t L_731 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_729, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_730, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_732 = V_1;
		NullCheck(L_732);
		int32_t L_733 = 8;
		int32_t L_734 = (L_732)->GetAt(static_cast<il2cpp_array_size_t>(L_733));
		int32_t* L_735 = V_0;
		int32_t L_736 = V_16;
		int32_t L_737 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_735, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_736, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_738 = V_1;
		NullCheck(L_738);
		int32_t L_739 = 7;
		int32_t L_740 = (L_738)->GetAt(static_cast<il2cpp_array_size_t>(L_739));
		int32_t* L_741 = V_0;
		int32_t L_742 = V_16;
		int32_t L_743 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_741, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_742, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_744 = V_1;
		NullCheck(L_744);
		int32_t L_745 = 6;
		int32_t L_746 = (L_744)->GetAt(static_cast<il2cpp_array_size_t>(L_745));
		int32_t* L_747 = V_0;
		int32_t L_748 = V_16;
		int32_t L_749 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_747, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_748, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_750 = V_1;
		NullCheck(L_750);
		int32_t L_751 = 5;
		int32_t L_752 = (L_750)->GetAt(static_cast<il2cpp_array_size_t>(L_751));
		int32_t* L_753 = V_0;
		int32_t L_754 = V_16;
		int32_t L_755 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_753, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_754, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_756 = V_1;
		NullCheck(L_756);
		int32_t L_757 = 4;
		int32_t L_758 = (L_756)->GetAt(static_cast<il2cpp_array_size_t>(L_757));
		int32_t* L_759 = V_0;
		int32_t L_760 = V_16;
		int32_t L_761 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_759, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_760, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_762 = V_1;
		NullCheck(L_762);
		int32_t L_763 = 3;
		int32_t L_764 = (L_762)->GetAt(static_cast<il2cpp_array_size_t>(L_763));
		int32_t* L_765 = V_0;
		int32_t L_766 = V_16;
		int32_t L_767 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_765, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_766, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_768 = V_1;
		NullCheck(L_768);
		int32_t L_769 = 2;
		int32_t L_770 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_769));
		int32_t* L_771 = V_0;
		int32_t L_772 = V_16;
		int32_t L_773 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_771, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_772, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_774 = V_1;
		NullCheck(L_774);
		int32_t L_775 = 1;
		int32_t L_776 = (L_774)->GetAt(static_cast<il2cpp_array_size_t>(L_775));
		int32_t* L_777 = V_0;
		int32_t L_778 = V_16;
		int32_t L_779 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_777, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_778, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_780 = V_1;
		NullCheck(L_780);
		int32_t L_781 = 0;
		int32_t L_782 = (L_780)->GetAt(static_cast<il2cpp_array_size_t>(L_781));
		int32_t* L_783 = V_0;
		int32_t L_784 = V_16;
		int32_t L_785 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_783, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_784, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_596, L_599)), ((int32_t)il2cpp_codegen_multiply(L_602, L_605)))), ((int32_t)il2cpp_codegen_multiply(L_608, L_611)))), ((int32_t)il2cpp_codegen_multiply(L_614, L_617)))), ((int32_t)il2cpp_codegen_multiply(L_620, L_623)))), ((int32_t)il2cpp_codegen_multiply(L_626, L_629)))), ((int32_t)il2cpp_codegen_multiply(L_632, L_635)))), ((int32_t)il2cpp_codegen_multiply(L_638, L_641)))), ((int32_t)il2cpp_codegen_multiply(L_644, L_647)))), ((int32_t)il2cpp_codegen_multiply(L_650, L_653)))), ((int32_t)il2cpp_codegen_multiply(L_656, L_659)))), ((int32_t)il2cpp_codegen_multiply(L_662, L_665)))), ((int32_t)il2cpp_codegen_multiply(L_668, L_671)))), ((int32_t)il2cpp_codegen_multiply(L_674, L_677)))), ((int32_t)il2cpp_codegen_multiply(L_680, L_683)))), ((int32_t)il2cpp_codegen_multiply(L_686, L_689)))), ((int32_t)il2cpp_codegen_multiply(L_692, L_695)))), ((int32_t)il2cpp_codegen_multiply(L_698, L_701)))), ((int32_t)il2cpp_codegen_multiply(L_704, L_707)))), ((int32_t)il2cpp_codegen_multiply(L_710, L_713)))), ((int32_t)il2cpp_codegen_multiply(L_716, L_719)))), ((int32_t)il2cpp_codegen_multiply(L_722, L_725)))), ((int32_t)il2cpp_codegen_multiply(L_728, L_731)))), ((int32_t)il2cpp_codegen_multiply(L_734, L_737)))), ((int32_t)il2cpp_codegen_multiply(L_740, L_743)))), ((int32_t)il2cpp_codegen_multiply(L_746, L_749)))), ((int32_t)il2cpp_codegen_multiply(L_752, L_755)))), ((int32_t)il2cpp_codegen_multiply(L_758, L_761)))), ((int32_t)il2cpp_codegen_multiply(L_764, L_767)))), ((int32_t)il2cpp_codegen_multiply(L_770, L_773)))), ((int32_t)il2cpp_codegen_multiply(L_776, L_779)))), ((int32_t)il2cpp_codegen_multiply(L_782, L_785))));
		int32_t* L_786 = V_0;
		int32_t L_787 = V_16;
		int32_t* L_788 = ___0_residual;
		int32_t L_789 = V_16;
		int32_t L_790 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_788, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_789), 4)))));
		int32_t L_791 = V_15;
		int32_t L_792 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_786, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_787), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_790, ((int32_t)(L_791>>((int32_t)(L_792&((int32_t)31)))))));
		int32_t L_793 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_793, 1));
	}

IL_0983:
	{
		int32_t L_794 = V_16;
		int32_t L_795 = ___2_length;
		if ((((int32_t)L_794) < ((int32_t)L_795)))
		{
			goto IL_0754;
		}
	}
	{
		return;
	}

IL_098c:
	{
		V_17 = 0;
		goto IL_0bb2;
	}

IL_0994:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_796 = V_1;
		NullCheck(L_796);
		int32_t L_797 = ((int32_t)30);
		int32_t L_798 = (L_796)->GetAt(static_cast<il2cpp_array_size_t>(L_797));
		int32_t* L_799 = V_0;
		int32_t L_800 = V_17;
		int32_t L_801 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_799, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_800, ((int32_t)31)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_802 = V_1;
		NullCheck(L_802);
		int32_t L_803 = ((int32_t)29);
		int32_t L_804 = (L_802)->GetAt(static_cast<il2cpp_array_size_t>(L_803));
		int32_t* L_805 = V_0;
		int32_t L_806 = V_17;
		int32_t L_807 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_805, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_806, ((int32_t)30)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_808 = V_1;
		NullCheck(L_808);
		int32_t L_809 = ((int32_t)28);
		int32_t L_810 = (L_808)->GetAt(static_cast<il2cpp_array_size_t>(L_809));
		int32_t* L_811 = V_0;
		int32_t L_812 = V_17;
		int32_t L_813 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_811, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_812, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_814 = V_1;
		NullCheck(L_814);
		int32_t L_815 = ((int32_t)27);
		int32_t L_816 = (L_814)->GetAt(static_cast<il2cpp_array_size_t>(L_815));
		int32_t* L_817 = V_0;
		int32_t L_818 = V_17;
		int32_t L_819 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_817, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_818, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_820 = V_1;
		NullCheck(L_820);
		int32_t L_821 = ((int32_t)26);
		int32_t L_822 = (L_820)->GetAt(static_cast<il2cpp_array_size_t>(L_821));
		int32_t* L_823 = V_0;
		int32_t L_824 = V_17;
		int32_t L_825 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_823, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_824, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_826 = V_1;
		NullCheck(L_826);
		int32_t L_827 = ((int32_t)25);
		int32_t L_828 = (L_826)->GetAt(static_cast<il2cpp_array_size_t>(L_827));
		int32_t* L_829 = V_0;
		int32_t L_830 = V_17;
		int32_t L_831 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_829, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_830, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_832 = V_1;
		NullCheck(L_832);
		int32_t L_833 = ((int32_t)24);
		int32_t L_834 = (L_832)->GetAt(static_cast<il2cpp_array_size_t>(L_833));
		int32_t* L_835 = V_0;
		int32_t L_836 = V_17;
		int32_t L_837 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_835, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_836, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_838 = V_1;
		NullCheck(L_838);
		int32_t L_839 = ((int32_t)23);
		int32_t L_840 = (L_838)->GetAt(static_cast<il2cpp_array_size_t>(L_839));
		int32_t* L_841 = V_0;
		int32_t L_842 = V_17;
		int32_t L_843 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_841, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_842, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_844 = V_1;
		NullCheck(L_844);
		int32_t L_845 = ((int32_t)22);
		int32_t L_846 = (L_844)->GetAt(static_cast<il2cpp_array_size_t>(L_845));
		int32_t* L_847 = V_0;
		int32_t L_848 = V_17;
		int32_t L_849 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_847, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_848, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_850 = V_1;
		NullCheck(L_850);
		int32_t L_851 = ((int32_t)21);
		int32_t L_852 = (L_850)->GetAt(static_cast<il2cpp_array_size_t>(L_851));
		int32_t* L_853 = V_0;
		int32_t L_854 = V_17;
		int32_t L_855 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_853, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_854, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_856 = V_1;
		NullCheck(L_856);
		int32_t L_857 = ((int32_t)20);
		int32_t L_858 = (L_856)->GetAt(static_cast<il2cpp_array_size_t>(L_857));
		int32_t* L_859 = V_0;
		int32_t L_860 = V_17;
		int32_t L_861 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_859, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_860, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_862 = V_1;
		NullCheck(L_862);
		int32_t L_863 = ((int32_t)19);
		int32_t L_864 = (L_862)->GetAt(static_cast<il2cpp_array_size_t>(L_863));
		int32_t* L_865 = V_0;
		int32_t L_866 = V_17;
		int32_t L_867 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_865, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_866, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_868 = V_1;
		NullCheck(L_868);
		int32_t L_869 = ((int32_t)18);
		int32_t L_870 = (L_868)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		int32_t* L_871 = V_0;
		int32_t L_872 = V_17;
		int32_t L_873 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_871, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_872, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_874 = V_1;
		NullCheck(L_874);
		int32_t L_875 = ((int32_t)17);
		int32_t L_876 = (L_874)->GetAt(static_cast<il2cpp_array_size_t>(L_875));
		int32_t* L_877 = V_0;
		int32_t L_878 = V_17;
		int32_t L_879 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_877, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_878, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_880 = V_1;
		NullCheck(L_880);
		int32_t L_881 = ((int32_t)16);
		int32_t L_882 = (L_880)->GetAt(static_cast<il2cpp_array_size_t>(L_881));
		int32_t* L_883 = V_0;
		int32_t L_884 = V_17;
		int32_t L_885 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_883, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_884, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_886 = V_1;
		NullCheck(L_886);
		int32_t L_887 = ((int32_t)15);
		int32_t L_888 = (L_886)->GetAt(static_cast<il2cpp_array_size_t>(L_887));
		int32_t* L_889 = V_0;
		int32_t L_890 = V_17;
		int32_t L_891 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_889, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_890, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_892 = V_1;
		NullCheck(L_892);
		int32_t L_893 = ((int32_t)14);
		int32_t L_894 = (L_892)->GetAt(static_cast<il2cpp_array_size_t>(L_893));
		int32_t* L_895 = V_0;
		int32_t L_896 = V_17;
		int32_t L_897 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_895, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_896, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_898 = V_1;
		NullCheck(L_898);
		int32_t L_899 = ((int32_t)13);
		int32_t L_900 = (L_898)->GetAt(static_cast<il2cpp_array_size_t>(L_899));
		int32_t* L_901 = V_0;
		int32_t L_902 = V_17;
		int32_t L_903 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_901, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_902, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_904 = V_1;
		NullCheck(L_904);
		int32_t L_905 = ((int32_t)12);
		int32_t L_906 = (L_904)->GetAt(static_cast<il2cpp_array_size_t>(L_905));
		int32_t* L_907 = V_0;
		int32_t L_908 = V_17;
		int32_t L_909 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_907, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_908, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_910 = V_1;
		NullCheck(L_910);
		int32_t L_911 = ((int32_t)11);
		int32_t L_912 = (L_910)->GetAt(static_cast<il2cpp_array_size_t>(L_911));
		int32_t* L_913 = V_0;
		int32_t L_914 = V_17;
		int32_t L_915 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_913, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_914, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_916 = V_1;
		NullCheck(L_916);
		int32_t L_917 = ((int32_t)10);
		int32_t L_918 = (L_916)->GetAt(static_cast<il2cpp_array_size_t>(L_917));
		int32_t* L_919 = V_0;
		int32_t L_920 = V_17;
		int32_t L_921 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_919, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_920, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_922 = V_1;
		NullCheck(L_922);
		int32_t L_923 = ((int32_t)9);
		int32_t L_924 = (L_922)->GetAt(static_cast<il2cpp_array_size_t>(L_923));
		int32_t* L_925 = V_0;
		int32_t L_926 = V_17;
		int32_t L_927 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_925, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_926, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_928 = V_1;
		NullCheck(L_928);
		int32_t L_929 = 8;
		int32_t L_930 = (L_928)->GetAt(static_cast<il2cpp_array_size_t>(L_929));
		int32_t* L_931 = V_0;
		int32_t L_932 = V_17;
		int32_t L_933 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_931, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_932, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_934 = V_1;
		NullCheck(L_934);
		int32_t L_935 = 7;
		int32_t L_936 = (L_934)->GetAt(static_cast<il2cpp_array_size_t>(L_935));
		int32_t* L_937 = V_0;
		int32_t L_938 = V_17;
		int32_t L_939 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_937, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_938, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_940 = V_1;
		NullCheck(L_940);
		int32_t L_941 = 6;
		int32_t L_942 = (L_940)->GetAt(static_cast<il2cpp_array_size_t>(L_941));
		int32_t* L_943 = V_0;
		int32_t L_944 = V_17;
		int32_t L_945 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_943, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_944, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_946 = V_1;
		NullCheck(L_946);
		int32_t L_947 = 5;
		int32_t L_948 = (L_946)->GetAt(static_cast<il2cpp_array_size_t>(L_947));
		int32_t* L_949 = V_0;
		int32_t L_950 = V_17;
		int32_t L_951 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_949, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_950, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_952 = V_1;
		NullCheck(L_952);
		int32_t L_953 = 4;
		int32_t L_954 = (L_952)->GetAt(static_cast<il2cpp_array_size_t>(L_953));
		int32_t* L_955 = V_0;
		int32_t L_956 = V_17;
		int32_t L_957 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_955, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_956, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_958 = V_1;
		NullCheck(L_958);
		int32_t L_959 = 3;
		int32_t L_960 = (L_958)->GetAt(static_cast<il2cpp_array_size_t>(L_959));
		int32_t* L_961 = V_0;
		int32_t L_962 = V_17;
		int32_t L_963 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_961, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_962, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_964 = V_1;
		NullCheck(L_964);
		int32_t L_965 = 2;
		int32_t L_966 = (L_964)->GetAt(static_cast<il2cpp_array_size_t>(L_965));
		int32_t* L_967 = V_0;
		int32_t L_968 = V_17;
		int32_t L_969 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_967, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_968, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_970 = V_1;
		NullCheck(L_970);
		int32_t L_971 = 1;
		int32_t L_972 = (L_970)->GetAt(static_cast<il2cpp_array_size_t>(L_971));
		int32_t* L_973 = V_0;
		int32_t L_974 = V_17;
		int32_t L_975 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_973, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_974, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_976 = V_1;
		NullCheck(L_976);
		int32_t L_977 = 0;
		int32_t L_978 = (L_976)->GetAt(static_cast<il2cpp_array_size_t>(L_977));
		int32_t* L_979 = V_0;
		int32_t L_980 = V_17;
		int32_t L_981 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_979, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_980, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_798, L_801)), ((int32_t)il2cpp_codegen_multiply(L_804, L_807)))), ((int32_t)il2cpp_codegen_multiply(L_810, L_813)))), ((int32_t)il2cpp_codegen_multiply(L_816, L_819)))), ((int32_t)il2cpp_codegen_multiply(L_822, L_825)))), ((int32_t)il2cpp_codegen_multiply(L_828, L_831)))), ((int32_t)il2cpp_codegen_multiply(L_834, L_837)))), ((int32_t)il2cpp_codegen_multiply(L_840, L_843)))), ((int32_t)il2cpp_codegen_multiply(L_846, L_849)))), ((int32_t)il2cpp_codegen_multiply(L_852, L_855)))), ((int32_t)il2cpp_codegen_multiply(L_858, L_861)))), ((int32_t)il2cpp_codegen_multiply(L_864, L_867)))), ((int32_t)il2cpp_codegen_multiply(L_870, L_873)))), ((int32_t)il2cpp_codegen_multiply(L_876, L_879)))), ((int32_t)il2cpp_codegen_multiply(L_882, L_885)))), ((int32_t)il2cpp_codegen_multiply(L_888, L_891)))), ((int32_t)il2cpp_codegen_multiply(L_894, L_897)))), ((int32_t)il2cpp_codegen_multiply(L_900, L_903)))), ((int32_t)il2cpp_codegen_multiply(L_906, L_909)))), ((int32_t)il2cpp_codegen_multiply(L_912, L_915)))), ((int32_t)il2cpp_codegen_multiply(L_918, L_921)))), ((int32_t)il2cpp_codegen_multiply(L_924, L_927)))), ((int32_t)il2cpp_codegen_multiply(L_930, L_933)))), ((int32_t)il2cpp_codegen_multiply(L_936, L_939)))), ((int32_t)il2cpp_codegen_multiply(L_942, L_945)))), ((int32_t)il2cpp_codegen_multiply(L_948, L_951)))), ((int32_t)il2cpp_codegen_multiply(L_954, L_957)))), ((int32_t)il2cpp_codegen_multiply(L_960, L_963)))), ((int32_t)il2cpp_codegen_multiply(L_966, L_969)))), ((int32_t)il2cpp_codegen_multiply(L_972, L_975)))), ((int32_t)il2cpp_codegen_multiply(L_978, L_981))));
		int32_t* L_982 = V_0;
		int32_t L_983 = V_17;
		int32_t* L_984 = ___0_residual;
		int32_t L_985 = V_17;
		int32_t L_986 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_984, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_985), 4)))));
		int32_t L_987 = V_15;
		int32_t L_988 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_982, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_983), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_986, ((int32_t)(L_987>>((int32_t)(L_988&((int32_t)31)))))));
		int32_t L_989 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_989, 1));
	}

IL_0bb2:
	{
		int32_t L_990 = V_17;
		int32_t L_991 = ___2_length;
		if ((((int32_t)L_990) < ((int32_t)L_991)))
		{
			goto IL_0994;
		}
	}
	{
		return;
	}

IL_0bbb:
	{
		V_18 = 0;
		goto IL_0dd0;
	}

IL_0bc3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_992 = V_1;
		NullCheck(L_992);
		int32_t L_993 = ((int32_t)29);
		int32_t L_994 = (L_992)->GetAt(static_cast<il2cpp_array_size_t>(L_993));
		int32_t* L_995 = V_0;
		int32_t L_996 = V_18;
		int32_t L_997 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_995, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_996, ((int32_t)30)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_998 = V_1;
		NullCheck(L_998);
		int32_t L_999 = ((int32_t)28);
		int32_t L_1000 = (L_998)->GetAt(static_cast<il2cpp_array_size_t>(L_999));
		int32_t* L_1001 = V_0;
		int32_t L_1002 = V_18;
		int32_t L_1003 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1001, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1002, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1004 = V_1;
		NullCheck(L_1004);
		int32_t L_1005 = ((int32_t)27);
		int32_t L_1006 = (L_1004)->GetAt(static_cast<il2cpp_array_size_t>(L_1005));
		int32_t* L_1007 = V_0;
		int32_t L_1008 = V_18;
		int32_t L_1009 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1007, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1008, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1010 = V_1;
		NullCheck(L_1010);
		int32_t L_1011 = ((int32_t)26);
		int32_t L_1012 = (L_1010)->GetAt(static_cast<il2cpp_array_size_t>(L_1011));
		int32_t* L_1013 = V_0;
		int32_t L_1014 = V_18;
		int32_t L_1015 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1013, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1014, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1016 = V_1;
		NullCheck(L_1016);
		int32_t L_1017 = ((int32_t)25);
		int32_t L_1018 = (L_1016)->GetAt(static_cast<il2cpp_array_size_t>(L_1017));
		int32_t* L_1019 = V_0;
		int32_t L_1020 = V_18;
		int32_t L_1021 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1019, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1020, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1022 = V_1;
		NullCheck(L_1022);
		int32_t L_1023 = ((int32_t)24);
		int32_t L_1024 = (L_1022)->GetAt(static_cast<il2cpp_array_size_t>(L_1023));
		int32_t* L_1025 = V_0;
		int32_t L_1026 = V_18;
		int32_t L_1027 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1025, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1026, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1028 = V_1;
		NullCheck(L_1028);
		int32_t L_1029 = ((int32_t)23);
		int32_t L_1030 = (L_1028)->GetAt(static_cast<il2cpp_array_size_t>(L_1029));
		int32_t* L_1031 = V_0;
		int32_t L_1032 = V_18;
		int32_t L_1033 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1031, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1032, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1034 = V_1;
		NullCheck(L_1034);
		int32_t L_1035 = ((int32_t)22);
		int32_t L_1036 = (L_1034)->GetAt(static_cast<il2cpp_array_size_t>(L_1035));
		int32_t* L_1037 = V_0;
		int32_t L_1038 = V_18;
		int32_t L_1039 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1037, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1038, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1040 = V_1;
		NullCheck(L_1040);
		int32_t L_1041 = ((int32_t)21);
		int32_t L_1042 = (L_1040)->GetAt(static_cast<il2cpp_array_size_t>(L_1041));
		int32_t* L_1043 = V_0;
		int32_t L_1044 = V_18;
		int32_t L_1045 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1043, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1044, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1046 = V_1;
		NullCheck(L_1046);
		int32_t L_1047 = ((int32_t)20);
		int32_t L_1048 = (L_1046)->GetAt(static_cast<il2cpp_array_size_t>(L_1047));
		int32_t* L_1049 = V_0;
		int32_t L_1050 = V_18;
		int32_t L_1051 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1049, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1050, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1052 = V_1;
		NullCheck(L_1052);
		int32_t L_1053 = ((int32_t)19);
		int32_t L_1054 = (L_1052)->GetAt(static_cast<il2cpp_array_size_t>(L_1053));
		int32_t* L_1055 = V_0;
		int32_t L_1056 = V_18;
		int32_t L_1057 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1055, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1056, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1058 = V_1;
		NullCheck(L_1058);
		int32_t L_1059 = ((int32_t)18);
		int32_t L_1060 = (L_1058)->GetAt(static_cast<il2cpp_array_size_t>(L_1059));
		int32_t* L_1061 = V_0;
		int32_t L_1062 = V_18;
		int32_t L_1063 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1061, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1062, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1064 = V_1;
		NullCheck(L_1064);
		int32_t L_1065 = ((int32_t)17);
		int32_t L_1066 = (L_1064)->GetAt(static_cast<il2cpp_array_size_t>(L_1065));
		int32_t* L_1067 = V_0;
		int32_t L_1068 = V_18;
		int32_t L_1069 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1067, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1068, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1070 = V_1;
		NullCheck(L_1070);
		int32_t L_1071 = ((int32_t)16);
		int32_t L_1072 = (L_1070)->GetAt(static_cast<il2cpp_array_size_t>(L_1071));
		int32_t* L_1073 = V_0;
		int32_t L_1074 = V_18;
		int32_t L_1075 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1073, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1074, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1076 = V_1;
		NullCheck(L_1076);
		int32_t L_1077 = ((int32_t)15);
		int32_t L_1078 = (L_1076)->GetAt(static_cast<il2cpp_array_size_t>(L_1077));
		int32_t* L_1079 = V_0;
		int32_t L_1080 = V_18;
		int32_t L_1081 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1079, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1080, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1082 = V_1;
		NullCheck(L_1082);
		int32_t L_1083 = ((int32_t)14);
		int32_t L_1084 = (L_1082)->GetAt(static_cast<il2cpp_array_size_t>(L_1083));
		int32_t* L_1085 = V_0;
		int32_t L_1086 = V_18;
		int32_t L_1087 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1085, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1086, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1088 = V_1;
		NullCheck(L_1088);
		int32_t L_1089 = ((int32_t)13);
		int32_t L_1090 = (L_1088)->GetAt(static_cast<il2cpp_array_size_t>(L_1089));
		int32_t* L_1091 = V_0;
		int32_t L_1092 = V_18;
		int32_t L_1093 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1091, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1092, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1094 = V_1;
		NullCheck(L_1094);
		int32_t L_1095 = ((int32_t)12);
		int32_t L_1096 = (L_1094)->GetAt(static_cast<il2cpp_array_size_t>(L_1095));
		int32_t* L_1097 = V_0;
		int32_t L_1098 = V_18;
		int32_t L_1099 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1097, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1098, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1100 = V_1;
		NullCheck(L_1100);
		int32_t L_1101 = ((int32_t)11);
		int32_t L_1102 = (L_1100)->GetAt(static_cast<il2cpp_array_size_t>(L_1101));
		int32_t* L_1103 = V_0;
		int32_t L_1104 = V_18;
		int32_t L_1105 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1104, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1106 = V_1;
		NullCheck(L_1106);
		int32_t L_1107 = ((int32_t)10);
		int32_t L_1108 = (L_1106)->GetAt(static_cast<il2cpp_array_size_t>(L_1107));
		int32_t* L_1109 = V_0;
		int32_t L_1110 = V_18;
		int32_t L_1111 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1109, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1110, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1112 = V_1;
		NullCheck(L_1112);
		int32_t L_1113 = ((int32_t)9);
		int32_t L_1114 = (L_1112)->GetAt(static_cast<il2cpp_array_size_t>(L_1113));
		int32_t* L_1115 = V_0;
		int32_t L_1116 = V_18;
		int32_t L_1117 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1115, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1116, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1118 = V_1;
		NullCheck(L_1118);
		int32_t L_1119 = 8;
		int32_t L_1120 = (L_1118)->GetAt(static_cast<il2cpp_array_size_t>(L_1119));
		int32_t* L_1121 = V_0;
		int32_t L_1122 = V_18;
		int32_t L_1123 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1122, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1124 = V_1;
		NullCheck(L_1124);
		int32_t L_1125 = 7;
		int32_t L_1126 = (L_1124)->GetAt(static_cast<il2cpp_array_size_t>(L_1125));
		int32_t* L_1127 = V_0;
		int32_t L_1128 = V_18;
		int32_t L_1129 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1128, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1130 = V_1;
		NullCheck(L_1130);
		int32_t L_1131 = 6;
		int32_t L_1132 = (L_1130)->GetAt(static_cast<il2cpp_array_size_t>(L_1131));
		int32_t* L_1133 = V_0;
		int32_t L_1134 = V_18;
		int32_t L_1135 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1133, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1134, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1136 = V_1;
		NullCheck(L_1136);
		int32_t L_1137 = 5;
		int32_t L_1138 = (L_1136)->GetAt(static_cast<il2cpp_array_size_t>(L_1137));
		int32_t* L_1139 = V_0;
		int32_t L_1140 = V_18;
		int32_t L_1141 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1140, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1142 = V_1;
		NullCheck(L_1142);
		int32_t L_1143 = 4;
		int32_t L_1144 = (L_1142)->GetAt(static_cast<il2cpp_array_size_t>(L_1143));
		int32_t* L_1145 = V_0;
		int32_t L_1146 = V_18;
		int32_t L_1147 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1145, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1146, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1148 = V_1;
		NullCheck(L_1148);
		int32_t L_1149 = 3;
		int32_t L_1150 = (L_1148)->GetAt(static_cast<il2cpp_array_size_t>(L_1149));
		int32_t* L_1151 = V_0;
		int32_t L_1152 = V_18;
		int32_t L_1153 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1151, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1152, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1154 = V_1;
		NullCheck(L_1154);
		int32_t L_1155 = 2;
		int32_t L_1156 = (L_1154)->GetAt(static_cast<il2cpp_array_size_t>(L_1155));
		int32_t* L_1157 = V_0;
		int32_t L_1158 = V_18;
		int32_t L_1159 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1157, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1158, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1160 = V_1;
		NullCheck(L_1160);
		int32_t L_1161 = 1;
		int32_t L_1162 = (L_1160)->GetAt(static_cast<il2cpp_array_size_t>(L_1161));
		int32_t* L_1163 = V_0;
		int32_t L_1164 = V_18;
		int32_t L_1165 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1164, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1166 = V_1;
		NullCheck(L_1166);
		int32_t L_1167 = 0;
		int32_t L_1168 = (L_1166)->GetAt(static_cast<il2cpp_array_size_t>(L_1167));
		int32_t* L_1169 = V_0;
		int32_t L_1170 = V_18;
		int32_t L_1171 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1169, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1170, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_994, L_997)), ((int32_t)il2cpp_codegen_multiply(L_1000, L_1003)))), ((int32_t)il2cpp_codegen_multiply(L_1006, L_1009)))), ((int32_t)il2cpp_codegen_multiply(L_1012, L_1015)))), ((int32_t)il2cpp_codegen_multiply(L_1018, L_1021)))), ((int32_t)il2cpp_codegen_multiply(L_1024, L_1027)))), ((int32_t)il2cpp_codegen_multiply(L_1030, L_1033)))), ((int32_t)il2cpp_codegen_multiply(L_1036, L_1039)))), ((int32_t)il2cpp_codegen_multiply(L_1042, L_1045)))), ((int32_t)il2cpp_codegen_multiply(L_1048, L_1051)))), ((int32_t)il2cpp_codegen_multiply(L_1054, L_1057)))), ((int32_t)il2cpp_codegen_multiply(L_1060, L_1063)))), ((int32_t)il2cpp_codegen_multiply(L_1066, L_1069)))), ((int32_t)il2cpp_codegen_multiply(L_1072, L_1075)))), ((int32_t)il2cpp_codegen_multiply(L_1078, L_1081)))), ((int32_t)il2cpp_codegen_multiply(L_1084, L_1087)))), ((int32_t)il2cpp_codegen_multiply(L_1090, L_1093)))), ((int32_t)il2cpp_codegen_multiply(L_1096, L_1099)))), ((int32_t)il2cpp_codegen_multiply(L_1102, L_1105)))), ((int32_t)il2cpp_codegen_multiply(L_1108, L_1111)))), ((int32_t)il2cpp_codegen_multiply(L_1114, L_1117)))), ((int32_t)il2cpp_codegen_multiply(L_1120, L_1123)))), ((int32_t)il2cpp_codegen_multiply(L_1126, L_1129)))), ((int32_t)il2cpp_codegen_multiply(L_1132, L_1135)))), ((int32_t)il2cpp_codegen_multiply(L_1138, L_1141)))), ((int32_t)il2cpp_codegen_multiply(L_1144, L_1147)))), ((int32_t)il2cpp_codegen_multiply(L_1150, L_1153)))), ((int32_t)il2cpp_codegen_multiply(L_1156, L_1159)))), ((int32_t)il2cpp_codegen_multiply(L_1162, L_1165)))), ((int32_t)il2cpp_codegen_multiply(L_1168, L_1171))));
		int32_t* L_1172 = V_0;
		int32_t L_1173 = V_18;
		int32_t* L_1174 = ___0_residual;
		int32_t L_1175 = V_18;
		int32_t L_1176 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1174, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1175), 4)))));
		int32_t L_1177 = V_15;
		int32_t L_1178 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1172, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1173), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1176, ((int32_t)(L_1177>>((int32_t)(L_1178&((int32_t)31)))))));
		int32_t L_1179 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_1179, 1));
	}

IL_0dd0:
	{
		int32_t L_1180 = V_18;
		int32_t L_1181 = ___2_length;
		if ((((int32_t)L_1180) < ((int32_t)L_1181)))
		{
			goto IL_0bc3;
		}
	}
	{
		return;
	}

IL_0dd9:
	{
		V_19 = 0;
		goto IL_0fdd;
	}

IL_0de1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1182 = V_1;
		NullCheck(L_1182);
		int32_t L_1183 = ((int32_t)28);
		int32_t L_1184 = (L_1182)->GetAt(static_cast<il2cpp_array_size_t>(L_1183));
		int32_t* L_1185 = V_0;
		int32_t L_1186 = V_19;
		int32_t L_1187 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1185, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1186, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1188 = V_1;
		NullCheck(L_1188);
		int32_t L_1189 = ((int32_t)27);
		int32_t L_1190 = (L_1188)->GetAt(static_cast<il2cpp_array_size_t>(L_1189));
		int32_t* L_1191 = V_0;
		int32_t L_1192 = V_19;
		int32_t L_1193 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1191, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1192, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1194 = V_1;
		NullCheck(L_1194);
		int32_t L_1195 = ((int32_t)26);
		int32_t L_1196 = (L_1194)->GetAt(static_cast<il2cpp_array_size_t>(L_1195));
		int32_t* L_1197 = V_0;
		int32_t L_1198 = V_19;
		int32_t L_1199 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1197, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1198, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1200 = V_1;
		NullCheck(L_1200);
		int32_t L_1201 = ((int32_t)25);
		int32_t L_1202 = (L_1200)->GetAt(static_cast<il2cpp_array_size_t>(L_1201));
		int32_t* L_1203 = V_0;
		int32_t L_1204 = V_19;
		int32_t L_1205 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1203, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1204, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1206 = V_1;
		NullCheck(L_1206);
		int32_t L_1207 = ((int32_t)24);
		int32_t L_1208 = (L_1206)->GetAt(static_cast<il2cpp_array_size_t>(L_1207));
		int32_t* L_1209 = V_0;
		int32_t L_1210 = V_19;
		int32_t L_1211 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1209, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1210, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1212 = V_1;
		NullCheck(L_1212);
		int32_t L_1213 = ((int32_t)23);
		int32_t L_1214 = (L_1212)->GetAt(static_cast<il2cpp_array_size_t>(L_1213));
		int32_t* L_1215 = V_0;
		int32_t L_1216 = V_19;
		int32_t L_1217 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1215, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1216, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1218 = V_1;
		NullCheck(L_1218);
		int32_t L_1219 = ((int32_t)22);
		int32_t L_1220 = (L_1218)->GetAt(static_cast<il2cpp_array_size_t>(L_1219));
		int32_t* L_1221 = V_0;
		int32_t L_1222 = V_19;
		int32_t L_1223 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1221, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1222, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1224 = V_1;
		NullCheck(L_1224);
		int32_t L_1225 = ((int32_t)21);
		int32_t L_1226 = (L_1224)->GetAt(static_cast<il2cpp_array_size_t>(L_1225));
		int32_t* L_1227 = V_0;
		int32_t L_1228 = V_19;
		int32_t L_1229 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1227, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1228, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1230 = V_1;
		NullCheck(L_1230);
		int32_t L_1231 = ((int32_t)20);
		int32_t L_1232 = (L_1230)->GetAt(static_cast<il2cpp_array_size_t>(L_1231));
		int32_t* L_1233 = V_0;
		int32_t L_1234 = V_19;
		int32_t L_1235 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1233, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1234, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1236 = V_1;
		NullCheck(L_1236);
		int32_t L_1237 = ((int32_t)19);
		int32_t L_1238 = (L_1236)->GetAt(static_cast<il2cpp_array_size_t>(L_1237));
		int32_t* L_1239 = V_0;
		int32_t L_1240 = V_19;
		int32_t L_1241 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1239, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1240, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1242 = V_1;
		NullCheck(L_1242);
		int32_t L_1243 = ((int32_t)18);
		int32_t L_1244 = (L_1242)->GetAt(static_cast<il2cpp_array_size_t>(L_1243));
		int32_t* L_1245 = V_0;
		int32_t L_1246 = V_19;
		int32_t L_1247 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1245, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1246, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1248 = V_1;
		NullCheck(L_1248);
		int32_t L_1249 = ((int32_t)17);
		int32_t L_1250 = (L_1248)->GetAt(static_cast<il2cpp_array_size_t>(L_1249));
		int32_t* L_1251 = V_0;
		int32_t L_1252 = V_19;
		int32_t L_1253 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1251, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1252, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1254 = V_1;
		NullCheck(L_1254);
		int32_t L_1255 = ((int32_t)16);
		int32_t L_1256 = (L_1254)->GetAt(static_cast<il2cpp_array_size_t>(L_1255));
		int32_t* L_1257 = V_0;
		int32_t L_1258 = V_19;
		int32_t L_1259 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1257, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1258, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1260 = V_1;
		NullCheck(L_1260);
		int32_t L_1261 = ((int32_t)15);
		int32_t L_1262 = (L_1260)->GetAt(static_cast<il2cpp_array_size_t>(L_1261));
		int32_t* L_1263 = V_0;
		int32_t L_1264 = V_19;
		int32_t L_1265 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1263, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1264, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1266 = V_1;
		NullCheck(L_1266);
		int32_t L_1267 = ((int32_t)14);
		int32_t L_1268 = (L_1266)->GetAt(static_cast<il2cpp_array_size_t>(L_1267));
		int32_t* L_1269 = V_0;
		int32_t L_1270 = V_19;
		int32_t L_1271 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1269, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1270, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1272 = V_1;
		NullCheck(L_1272);
		int32_t L_1273 = ((int32_t)13);
		int32_t L_1274 = (L_1272)->GetAt(static_cast<il2cpp_array_size_t>(L_1273));
		int32_t* L_1275 = V_0;
		int32_t L_1276 = V_19;
		int32_t L_1277 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1275, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1276, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1278 = V_1;
		NullCheck(L_1278);
		int32_t L_1279 = ((int32_t)12);
		int32_t L_1280 = (L_1278)->GetAt(static_cast<il2cpp_array_size_t>(L_1279));
		int32_t* L_1281 = V_0;
		int32_t L_1282 = V_19;
		int32_t L_1283 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1281, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1282, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1284 = V_1;
		NullCheck(L_1284);
		int32_t L_1285 = ((int32_t)11);
		int32_t L_1286 = (L_1284)->GetAt(static_cast<il2cpp_array_size_t>(L_1285));
		int32_t* L_1287 = V_0;
		int32_t L_1288 = V_19;
		int32_t L_1289 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1287, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1288, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1290 = V_1;
		NullCheck(L_1290);
		int32_t L_1291 = ((int32_t)10);
		int32_t L_1292 = (L_1290)->GetAt(static_cast<il2cpp_array_size_t>(L_1291));
		int32_t* L_1293 = V_0;
		int32_t L_1294 = V_19;
		int32_t L_1295 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1293, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1294, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1296 = V_1;
		NullCheck(L_1296);
		int32_t L_1297 = ((int32_t)9);
		int32_t L_1298 = (L_1296)->GetAt(static_cast<il2cpp_array_size_t>(L_1297));
		int32_t* L_1299 = V_0;
		int32_t L_1300 = V_19;
		int32_t L_1301 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1299, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1300, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1302 = V_1;
		NullCheck(L_1302);
		int32_t L_1303 = 8;
		int32_t L_1304 = (L_1302)->GetAt(static_cast<il2cpp_array_size_t>(L_1303));
		int32_t* L_1305 = V_0;
		int32_t L_1306 = V_19;
		int32_t L_1307 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1305, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1306, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1308 = V_1;
		NullCheck(L_1308);
		int32_t L_1309 = 7;
		int32_t L_1310 = (L_1308)->GetAt(static_cast<il2cpp_array_size_t>(L_1309));
		int32_t* L_1311 = V_0;
		int32_t L_1312 = V_19;
		int32_t L_1313 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1311, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1312, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1314 = V_1;
		NullCheck(L_1314);
		int32_t L_1315 = 6;
		int32_t L_1316 = (L_1314)->GetAt(static_cast<il2cpp_array_size_t>(L_1315));
		int32_t* L_1317 = V_0;
		int32_t L_1318 = V_19;
		int32_t L_1319 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1317, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1318, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1320 = V_1;
		NullCheck(L_1320);
		int32_t L_1321 = 5;
		int32_t L_1322 = (L_1320)->GetAt(static_cast<il2cpp_array_size_t>(L_1321));
		int32_t* L_1323 = V_0;
		int32_t L_1324 = V_19;
		int32_t L_1325 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1323, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1324, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1326 = V_1;
		NullCheck(L_1326);
		int32_t L_1327 = 4;
		int32_t L_1328 = (L_1326)->GetAt(static_cast<il2cpp_array_size_t>(L_1327));
		int32_t* L_1329 = V_0;
		int32_t L_1330 = V_19;
		int32_t L_1331 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1329, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1330, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1332 = V_1;
		NullCheck(L_1332);
		int32_t L_1333 = 3;
		int32_t L_1334 = (L_1332)->GetAt(static_cast<il2cpp_array_size_t>(L_1333));
		int32_t* L_1335 = V_0;
		int32_t L_1336 = V_19;
		int32_t L_1337 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1335, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1336, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1338 = V_1;
		NullCheck(L_1338);
		int32_t L_1339 = 2;
		int32_t L_1340 = (L_1338)->GetAt(static_cast<il2cpp_array_size_t>(L_1339));
		int32_t* L_1341 = V_0;
		int32_t L_1342 = V_19;
		int32_t L_1343 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1341, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1342, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1344 = V_1;
		NullCheck(L_1344);
		int32_t L_1345 = 1;
		int32_t L_1346 = (L_1344)->GetAt(static_cast<il2cpp_array_size_t>(L_1345));
		int32_t* L_1347 = V_0;
		int32_t L_1348 = V_19;
		int32_t L_1349 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1347, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1348, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1350 = V_1;
		NullCheck(L_1350);
		int32_t L_1351 = 0;
		int32_t L_1352 = (L_1350)->GetAt(static_cast<il2cpp_array_size_t>(L_1351));
		int32_t* L_1353 = V_0;
		int32_t L_1354 = V_19;
		int32_t L_1355 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1353, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1354, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1184, L_1187)), ((int32_t)il2cpp_codegen_multiply(L_1190, L_1193)))), ((int32_t)il2cpp_codegen_multiply(L_1196, L_1199)))), ((int32_t)il2cpp_codegen_multiply(L_1202, L_1205)))), ((int32_t)il2cpp_codegen_multiply(L_1208, L_1211)))), ((int32_t)il2cpp_codegen_multiply(L_1214, L_1217)))), ((int32_t)il2cpp_codegen_multiply(L_1220, L_1223)))), ((int32_t)il2cpp_codegen_multiply(L_1226, L_1229)))), ((int32_t)il2cpp_codegen_multiply(L_1232, L_1235)))), ((int32_t)il2cpp_codegen_multiply(L_1238, L_1241)))), ((int32_t)il2cpp_codegen_multiply(L_1244, L_1247)))), ((int32_t)il2cpp_codegen_multiply(L_1250, L_1253)))), ((int32_t)il2cpp_codegen_multiply(L_1256, L_1259)))), ((int32_t)il2cpp_codegen_multiply(L_1262, L_1265)))), ((int32_t)il2cpp_codegen_multiply(L_1268, L_1271)))), ((int32_t)il2cpp_codegen_multiply(L_1274, L_1277)))), ((int32_t)il2cpp_codegen_multiply(L_1280, L_1283)))), ((int32_t)il2cpp_codegen_multiply(L_1286, L_1289)))), ((int32_t)il2cpp_codegen_multiply(L_1292, L_1295)))), ((int32_t)il2cpp_codegen_multiply(L_1298, L_1301)))), ((int32_t)il2cpp_codegen_multiply(L_1304, L_1307)))), ((int32_t)il2cpp_codegen_multiply(L_1310, L_1313)))), ((int32_t)il2cpp_codegen_multiply(L_1316, L_1319)))), ((int32_t)il2cpp_codegen_multiply(L_1322, L_1325)))), ((int32_t)il2cpp_codegen_multiply(L_1328, L_1331)))), ((int32_t)il2cpp_codegen_multiply(L_1334, L_1337)))), ((int32_t)il2cpp_codegen_multiply(L_1340, L_1343)))), ((int32_t)il2cpp_codegen_multiply(L_1346, L_1349)))), ((int32_t)il2cpp_codegen_multiply(L_1352, L_1355))));
		int32_t* L_1356 = V_0;
		int32_t L_1357 = V_19;
		int32_t* L_1358 = ___0_residual;
		int32_t L_1359 = V_19;
		int32_t L_1360 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1358, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1359), 4)))));
		int32_t L_1361 = V_15;
		int32_t L_1362 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1356, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1357), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1360, ((int32_t)(L_1361>>((int32_t)(L_1362&((int32_t)31)))))));
		int32_t L_1363 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_1363, 1));
	}

IL_0fdd:
	{
		int32_t L_1364 = V_19;
		int32_t L_1365 = ___2_length;
		if ((((int32_t)L_1364) < ((int32_t)L_1365)))
		{
			goto IL_0de1;
		}
	}
	{
		return;
	}

IL_0fe6:
	{
		V_20 = 0;
		goto IL_11d9;
	}

IL_0fee:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1366 = V_1;
		NullCheck(L_1366);
		int32_t L_1367 = ((int32_t)27);
		int32_t L_1368 = (L_1366)->GetAt(static_cast<il2cpp_array_size_t>(L_1367));
		int32_t* L_1369 = V_0;
		int32_t L_1370 = V_20;
		int32_t L_1371 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1369, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1370, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1372 = V_1;
		NullCheck(L_1372);
		int32_t L_1373 = ((int32_t)26);
		int32_t L_1374 = (L_1372)->GetAt(static_cast<il2cpp_array_size_t>(L_1373));
		int32_t* L_1375 = V_0;
		int32_t L_1376 = V_20;
		int32_t L_1377 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1375, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1376, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1378 = V_1;
		NullCheck(L_1378);
		int32_t L_1379 = ((int32_t)25);
		int32_t L_1380 = (L_1378)->GetAt(static_cast<il2cpp_array_size_t>(L_1379));
		int32_t* L_1381 = V_0;
		int32_t L_1382 = V_20;
		int32_t L_1383 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1381, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1382, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1384 = V_1;
		NullCheck(L_1384);
		int32_t L_1385 = ((int32_t)24);
		int32_t L_1386 = (L_1384)->GetAt(static_cast<il2cpp_array_size_t>(L_1385));
		int32_t* L_1387 = V_0;
		int32_t L_1388 = V_20;
		int32_t L_1389 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1387, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1388, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1390 = V_1;
		NullCheck(L_1390);
		int32_t L_1391 = ((int32_t)23);
		int32_t L_1392 = (L_1390)->GetAt(static_cast<il2cpp_array_size_t>(L_1391));
		int32_t* L_1393 = V_0;
		int32_t L_1394 = V_20;
		int32_t L_1395 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1393, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1394, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1396 = V_1;
		NullCheck(L_1396);
		int32_t L_1397 = ((int32_t)22);
		int32_t L_1398 = (L_1396)->GetAt(static_cast<il2cpp_array_size_t>(L_1397));
		int32_t* L_1399 = V_0;
		int32_t L_1400 = V_20;
		int32_t L_1401 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1399, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1400, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1402 = V_1;
		NullCheck(L_1402);
		int32_t L_1403 = ((int32_t)21);
		int32_t L_1404 = (L_1402)->GetAt(static_cast<il2cpp_array_size_t>(L_1403));
		int32_t* L_1405 = V_0;
		int32_t L_1406 = V_20;
		int32_t L_1407 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1405, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1406, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1408 = V_1;
		NullCheck(L_1408);
		int32_t L_1409 = ((int32_t)20);
		int32_t L_1410 = (L_1408)->GetAt(static_cast<il2cpp_array_size_t>(L_1409));
		int32_t* L_1411 = V_0;
		int32_t L_1412 = V_20;
		int32_t L_1413 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1411, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1412, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1414 = V_1;
		NullCheck(L_1414);
		int32_t L_1415 = ((int32_t)19);
		int32_t L_1416 = (L_1414)->GetAt(static_cast<il2cpp_array_size_t>(L_1415));
		int32_t* L_1417 = V_0;
		int32_t L_1418 = V_20;
		int32_t L_1419 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1417, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1418, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1420 = V_1;
		NullCheck(L_1420);
		int32_t L_1421 = ((int32_t)18);
		int32_t L_1422 = (L_1420)->GetAt(static_cast<il2cpp_array_size_t>(L_1421));
		int32_t* L_1423 = V_0;
		int32_t L_1424 = V_20;
		int32_t L_1425 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1423, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1424, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1426 = V_1;
		NullCheck(L_1426);
		int32_t L_1427 = ((int32_t)17);
		int32_t L_1428 = (L_1426)->GetAt(static_cast<il2cpp_array_size_t>(L_1427));
		int32_t* L_1429 = V_0;
		int32_t L_1430 = V_20;
		int32_t L_1431 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1429, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1430, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1432 = V_1;
		NullCheck(L_1432);
		int32_t L_1433 = ((int32_t)16);
		int32_t L_1434 = (L_1432)->GetAt(static_cast<il2cpp_array_size_t>(L_1433));
		int32_t* L_1435 = V_0;
		int32_t L_1436 = V_20;
		int32_t L_1437 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1435, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1436, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1438 = V_1;
		NullCheck(L_1438);
		int32_t L_1439 = ((int32_t)15);
		int32_t L_1440 = (L_1438)->GetAt(static_cast<il2cpp_array_size_t>(L_1439));
		int32_t* L_1441 = V_0;
		int32_t L_1442 = V_20;
		int32_t L_1443 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1441, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1442, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1444 = V_1;
		NullCheck(L_1444);
		int32_t L_1445 = ((int32_t)14);
		int32_t L_1446 = (L_1444)->GetAt(static_cast<il2cpp_array_size_t>(L_1445));
		int32_t* L_1447 = V_0;
		int32_t L_1448 = V_20;
		int32_t L_1449 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1447, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1448, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1450 = V_1;
		NullCheck(L_1450);
		int32_t L_1451 = ((int32_t)13);
		int32_t L_1452 = (L_1450)->GetAt(static_cast<il2cpp_array_size_t>(L_1451));
		int32_t* L_1453 = V_0;
		int32_t L_1454 = V_20;
		int32_t L_1455 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1453, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1454, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1456 = V_1;
		NullCheck(L_1456);
		int32_t L_1457 = ((int32_t)12);
		int32_t L_1458 = (L_1456)->GetAt(static_cast<il2cpp_array_size_t>(L_1457));
		int32_t* L_1459 = V_0;
		int32_t L_1460 = V_20;
		int32_t L_1461 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1459, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1460, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1462 = V_1;
		NullCheck(L_1462);
		int32_t L_1463 = ((int32_t)11);
		int32_t L_1464 = (L_1462)->GetAt(static_cast<il2cpp_array_size_t>(L_1463));
		int32_t* L_1465 = V_0;
		int32_t L_1466 = V_20;
		int32_t L_1467 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1465, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1466, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1468 = V_1;
		NullCheck(L_1468);
		int32_t L_1469 = ((int32_t)10);
		int32_t L_1470 = (L_1468)->GetAt(static_cast<il2cpp_array_size_t>(L_1469));
		int32_t* L_1471 = V_0;
		int32_t L_1472 = V_20;
		int32_t L_1473 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1471, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1472, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1474 = V_1;
		NullCheck(L_1474);
		int32_t L_1475 = ((int32_t)9);
		int32_t L_1476 = (L_1474)->GetAt(static_cast<il2cpp_array_size_t>(L_1475));
		int32_t* L_1477 = V_0;
		int32_t L_1478 = V_20;
		int32_t L_1479 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1477, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1478, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1480 = V_1;
		NullCheck(L_1480);
		int32_t L_1481 = 8;
		int32_t L_1482 = (L_1480)->GetAt(static_cast<il2cpp_array_size_t>(L_1481));
		int32_t* L_1483 = V_0;
		int32_t L_1484 = V_20;
		int32_t L_1485 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1483, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1484, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1486 = V_1;
		NullCheck(L_1486);
		int32_t L_1487 = 7;
		int32_t L_1488 = (L_1486)->GetAt(static_cast<il2cpp_array_size_t>(L_1487));
		int32_t* L_1489 = V_0;
		int32_t L_1490 = V_20;
		int32_t L_1491 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1489, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1490, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1492 = V_1;
		NullCheck(L_1492);
		int32_t L_1493 = 6;
		int32_t L_1494 = (L_1492)->GetAt(static_cast<il2cpp_array_size_t>(L_1493));
		int32_t* L_1495 = V_0;
		int32_t L_1496 = V_20;
		int32_t L_1497 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1495, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1496, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1498 = V_1;
		NullCheck(L_1498);
		int32_t L_1499 = 5;
		int32_t L_1500 = (L_1498)->GetAt(static_cast<il2cpp_array_size_t>(L_1499));
		int32_t* L_1501 = V_0;
		int32_t L_1502 = V_20;
		int32_t L_1503 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1501, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1502, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1504 = V_1;
		NullCheck(L_1504);
		int32_t L_1505 = 4;
		int32_t L_1506 = (L_1504)->GetAt(static_cast<il2cpp_array_size_t>(L_1505));
		int32_t* L_1507 = V_0;
		int32_t L_1508 = V_20;
		int32_t L_1509 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1507, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1508, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1510 = V_1;
		NullCheck(L_1510);
		int32_t L_1511 = 3;
		int32_t L_1512 = (L_1510)->GetAt(static_cast<il2cpp_array_size_t>(L_1511));
		int32_t* L_1513 = V_0;
		int32_t L_1514 = V_20;
		int32_t L_1515 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1513, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1514, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1516 = V_1;
		NullCheck(L_1516);
		int32_t L_1517 = 2;
		int32_t L_1518 = (L_1516)->GetAt(static_cast<il2cpp_array_size_t>(L_1517));
		int32_t* L_1519 = V_0;
		int32_t L_1520 = V_20;
		int32_t L_1521 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1519, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1520, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1522 = V_1;
		NullCheck(L_1522);
		int32_t L_1523 = 1;
		int32_t L_1524 = (L_1522)->GetAt(static_cast<il2cpp_array_size_t>(L_1523));
		int32_t* L_1525 = V_0;
		int32_t L_1526 = V_20;
		int32_t L_1527 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1525, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1526, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1528 = V_1;
		NullCheck(L_1528);
		int32_t L_1529 = 0;
		int32_t L_1530 = (L_1528)->GetAt(static_cast<il2cpp_array_size_t>(L_1529));
		int32_t* L_1531 = V_0;
		int32_t L_1532 = V_20;
		int32_t L_1533 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1531, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1532, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1368, L_1371)), ((int32_t)il2cpp_codegen_multiply(L_1374, L_1377)))), ((int32_t)il2cpp_codegen_multiply(L_1380, L_1383)))), ((int32_t)il2cpp_codegen_multiply(L_1386, L_1389)))), ((int32_t)il2cpp_codegen_multiply(L_1392, L_1395)))), ((int32_t)il2cpp_codegen_multiply(L_1398, L_1401)))), ((int32_t)il2cpp_codegen_multiply(L_1404, L_1407)))), ((int32_t)il2cpp_codegen_multiply(L_1410, L_1413)))), ((int32_t)il2cpp_codegen_multiply(L_1416, L_1419)))), ((int32_t)il2cpp_codegen_multiply(L_1422, L_1425)))), ((int32_t)il2cpp_codegen_multiply(L_1428, L_1431)))), ((int32_t)il2cpp_codegen_multiply(L_1434, L_1437)))), ((int32_t)il2cpp_codegen_multiply(L_1440, L_1443)))), ((int32_t)il2cpp_codegen_multiply(L_1446, L_1449)))), ((int32_t)il2cpp_codegen_multiply(L_1452, L_1455)))), ((int32_t)il2cpp_codegen_multiply(L_1458, L_1461)))), ((int32_t)il2cpp_codegen_multiply(L_1464, L_1467)))), ((int32_t)il2cpp_codegen_multiply(L_1470, L_1473)))), ((int32_t)il2cpp_codegen_multiply(L_1476, L_1479)))), ((int32_t)il2cpp_codegen_multiply(L_1482, L_1485)))), ((int32_t)il2cpp_codegen_multiply(L_1488, L_1491)))), ((int32_t)il2cpp_codegen_multiply(L_1494, L_1497)))), ((int32_t)il2cpp_codegen_multiply(L_1500, L_1503)))), ((int32_t)il2cpp_codegen_multiply(L_1506, L_1509)))), ((int32_t)il2cpp_codegen_multiply(L_1512, L_1515)))), ((int32_t)il2cpp_codegen_multiply(L_1518, L_1521)))), ((int32_t)il2cpp_codegen_multiply(L_1524, L_1527)))), ((int32_t)il2cpp_codegen_multiply(L_1530, L_1533))));
		int32_t* L_1534 = V_0;
		int32_t L_1535 = V_20;
		int32_t* L_1536 = ___0_residual;
		int32_t L_1537 = V_20;
		int32_t L_1538 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1536, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1537), 4)))));
		int32_t L_1539 = V_15;
		int32_t L_1540 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1534, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1535), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1538, ((int32_t)(L_1539>>((int32_t)(L_1540&((int32_t)31)))))));
		int32_t L_1541 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_1541, 1));
	}

IL_11d9:
	{
		int32_t L_1542 = V_20;
		int32_t L_1543 = ___2_length;
		if ((((int32_t)L_1542) < ((int32_t)L_1543)))
		{
			goto IL_0fee;
		}
	}
	{
		return;
	}

IL_11e2:
	{
		V_21 = 0;
		goto IL_13c4;
	}

IL_11ea:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1544 = V_1;
		NullCheck(L_1544);
		int32_t L_1545 = ((int32_t)26);
		int32_t L_1546 = (L_1544)->GetAt(static_cast<il2cpp_array_size_t>(L_1545));
		int32_t* L_1547 = V_0;
		int32_t L_1548 = V_21;
		int32_t L_1549 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1547, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1548, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1550 = V_1;
		NullCheck(L_1550);
		int32_t L_1551 = ((int32_t)25);
		int32_t L_1552 = (L_1550)->GetAt(static_cast<il2cpp_array_size_t>(L_1551));
		int32_t* L_1553 = V_0;
		int32_t L_1554 = V_21;
		int32_t L_1555 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1553, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1554, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1556 = V_1;
		NullCheck(L_1556);
		int32_t L_1557 = ((int32_t)24);
		int32_t L_1558 = (L_1556)->GetAt(static_cast<il2cpp_array_size_t>(L_1557));
		int32_t* L_1559 = V_0;
		int32_t L_1560 = V_21;
		int32_t L_1561 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1559, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1560, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1562 = V_1;
		NullCheck(L_1562);
		int32_t L_1563 = ((int32_t)23);
		int32_t L_1564 = (L_1562)->GetAt(static_cast<il2cpp_array_size_t>(L_1563));
		int32_t* L_1565 = V_0;
		int32_t L_1566 = V_21;
		int32_t L_1567 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1565, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1566, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1568 = V_1;
		NullCheck(L_1568);
		int32_t L_1569 = ((int32_t)22);
		int32_t L_1570 = (L_1568)->GetAt(static_cast<il2cpp_array_size_t>(L_1569));
		int32_t* L_1571 = V_0;
		int32_t L_1572 = V_21;
		int32_t L_1573 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1571, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1572, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1574 = V_1;
		NullCheck(L_1574);
		int32_t L_1575 = ((int32_t)21);
		int32_t L_1576 = (L_1574)->GetAt(static_cast<il2cpp_array_size_t>(L_1575));
		int32_t* L_1577 = V_0;
		int32_t L_1578 = V_21;
		int32_t L_1579 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1577, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1578, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1580 = V_1;
		NullCheck(L_1580);
		int32_t L_1581 = ((int32_t)20);
		int32_t L_1582 = (L_1580)->GetAt(static_cast<il2cpp_array_size_t>(L_1581));
		int32_t* L_1583 = V_0;
		int32_t L_1584 = V_21;
		int32_t L_1585 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1583, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1584, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1586 = V_1;
		NullCheck(L_1586);
		int32_t L_1587 = ((int32_t)19);
		int32_t L_1588 = (L_1586)->GetAt(static_cast<il2cpp_array_size_t>(L_1587));
		int32_t* L_1589 = V_0;
		int32_t L_1590 = V_21;
		int32_t L_1591 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1589, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1590, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1592 = V_1;
		NullCheck(L_1592);
		int32_t L_1593 = ((int32_t)18);
		int32_t L_1594 = (L_1592)->GetAt(static_cast<il2cpp_array_size_t>(L_1593));
		int32_t* L_1595 = V_0;
		int32_t L_1596 = V_21;
		int32_t L_1597 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1595, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1596, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1598 = V_1;
		NullCheck(L_1598);
		int32_t L_1599 = ((int32_t)17);
		int32_t L_1600 = (L_1598)->GetAt(static_cast<il2cpp_array_size_t>(L_1599));
		int32_t* L_1601 = V_0;
		int32_t L_1602 = V_21;
		int32_t L_1603 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1601, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1602, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1604 = V_1;
		NullCheck(L_1604);
		int32_t L_1605 = ((int32_t)16);
		int32_t L_1606 = (L_1604)->GetAt(static_cast<il2cpp_array_size_t>(L_1605));
		int32_t* L_1607 = V_0;
		int32_t L_1608 = V_21;
		int32_t L_1609 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1607, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1608, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1610 = V_1;
		NullCheck(L_1610);
		int32_t L_1611 = ((int32_t)15);
		int32_t L_1612 = (L_1610)->GetAt(static_cast<il2cpp_array_size_t>(L_1611));
		int32_t* L_1613 = V_0;
		int32_t L_1614 = V_21;
		int32_t L_1615 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1613, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1614, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1616 = V_1;
		NullCheck(L_1616);
		int32_t L_1617 = ((int32_t)14);
		int32_t L_1618 = (L_1616)->GetAt(static_cast<il2cpp_array_size_t>(L_1617));
		int32_t* L_1619 = V_0;
		int32_t L_1620 = V_21;
		int32_t L_1621 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1619, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1620, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1622 = V_1;
		NullCheck(L_1622);
		int32_t L_1623 = ((int32_t)13);
		int32_t L_1624 = (L_1622)->GetAt(static_cast<il2cpp_array_size_t>(L_1623));
		int32_t* L_1625 = V_0;
		int32_t L_1626 = V_21;
		int32_t L_1627 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1625, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1626, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1628 = V_1;
		NullCheck(L_1628);
		int32_t L_1629 = ((int32_t)12);
		int32_t L_1630 = (L_1628)->GetAt(static_cast<il2cpp_array_size_t>(L_1629));
		int32_t* L_1631 = V_0;
		int32_t L_1632 = V_21;
		int32_t L_1633 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1631, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1632, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1634 = V_1;
		NullCheck(L_1634);
		int32_t L_1635 = ((int32_t)11);
		int32_t L_1636 = (L_1634)->GetAt(static_cast<il2cpp_array_size_t>(L_1635));
		int32_t* L_1637 = V_0;
		int32_t L_1638 = V_21;
		int32_t L_1639 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1637, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1638, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1640 = V_1;
		NullCheck(L_1640);
		int32_t L_1641 = ((int32_t)10);
		int32_t L_1642 = (L_1640)->GetAt(static_cast<il2cpp_array_size_t>(L_1641));
		int32_t* L_1643 = V_0;
		int32_t L_1644 = V_21;
		int32_t L_1645 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1643, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1644, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1646 = V_1;
		NullCheck(L_1646);
		int32_t L_1647 = ((int32_t)9);
		int32_t L_1648 = (L_1646)->GetAt(static_cast<il2cpp_array_size_t>(L_1647));
		int32_t* L_1649 = V_0;
		int32_t L_1650 = V_21;
		int32_t L_1651 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1649, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1650, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1652 = V_1;
		NullCheck(L_1652);
		int32_t L_1653 = 8;
		int32_t L_1654 = (L_1652)->GetAt(static_cast<il2cpp_array_size_t>(L_1653));
		int32_t* L_1655 = V_0;
		int32_t L_1656 = V_21;
		int32_t L_1657 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1655, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1656, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1658 = V_1;
		NullCheck(L_1658);
		int32_t L_1659 = 7;
		int32_t L_1660 = (L_1658)->GetAt(static_cast<il2cpp_array_size_t>(L_1659));
		int32_t* L_1661 = V_0;
		int32_t L_1662 = V_21;
		int32_t L_1663 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1661, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1662, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1664 = V_1;
		NullCheck(L_1664);
		int32_t L_1665 = 6;
		int32_t L_1666 = (L_1664)->GetAt(static_cast<il2cpp_array_size_t>(L_1665));
		int32_t* L_1667 = V_0;
		int32_t L_1668 = V_21;
		int32_t L_1669 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1667, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1668, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1670 = V_1;
		NullCheck(L_1670);
		int32_t L_1671 = 5;
		int32_t L_1672 = (L_1670)->GetAt(static_cast<il2cpp_array_size_t>(L_1671));
		int32_t* L_1673 = V_0;
		int32_t L_1674 = V_21;
		int32_t L_1675 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1673, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1674, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1676 = V_1;
		NullCheck(L_1676);
		int32_t L_1677 = 4;
		int32_t L_1678 = (L_1676)->GetAt(static_cast<il2cpp_array_size_t>(L_1677));
		int32_t* L_1679 = V_0;
		int32_t L_1680 = V_21;
		int32_t L_1681 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1679, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1680, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1682 = V_1;
		NullCheck(L_1682);
		int32_t L_1683 = 3;
		int32_t L_1684 = (L_1682)->GetAt(static_cast<il2cpp_array_size_t>(L_1683));
		int32_t* L_1685 = V_0;
		int32_t L_1686 = V_21;
		int32_t L_1687 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1685, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1686, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1688 = V_1;
		NullCheck(L_1688);
		int32_t L_1689 = 2;
		int32_t L_1690 = (L_1688)->GetAt(static_cast<il2cpp_array_size_t>(L_1689));
		int32_t* L_1691 = V_0;
		int32_t L_1692 = V_21;
		int32_t L_1693 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1691, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1692, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1694 = V_1;
		NullCheck(L_1694);
		int32_t L_1695 = 1;
		int32_t L_1696 = (L_1694)->GetAt(static_cast<il2cpp_array_size_t>(L_1695));
		int32_t* L_1697 = V_0;
		int32_t L_1698 = V_21;
		int32_t L_1699 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1697, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1698, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1700 = V_1;
		NullCheck(L_1700);
		int32_t L_1701 = 0;
		int32_t L_1702 = (L_1700)->GetAt(static_cast<il2cpp_array_size_t>(L_1701));
		int32_t* L_1703 = V_0;
		int32_t L_1704 = V_21;
		int32_t L_1705 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1703, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1704, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1546, L_1549)), ((int32_t)il2cpp_codegen_multiply(L_1552, L_1555)))), ((int32_t)il2cpp_codegen_multiply(L_1558, L_1561)))), ((int32_t)il2cpp_codegen_multiply(L_1564, L_1567)))), ((int32_t)il2cpp_codegen_multiply(L_1570, L_1573)))), ((int32_t)il2cpp_codegen_multiply(L_1576, L_1579)))), ((int32_t)il2cpp_codegen_multiply(L_1582, L_1585)))), ((int32_t)il2cpp_codegen_multiply(L_1588, L_1591)))), ((int32_t)il2cpp_codegen_multiply(L_1594, L_1597)))), ((int32_t)il2cpp_codegen_multiply(L_1600, L_1603)))), ((int32_t)il2cpp_codegen_multiply(L_1606, L_1609)))), ((int32_t)il2cpp_codegen_multiply(L_1612, L_1615)))), ((int32_t)il2cpp_codegen_multiply(L_1618, L_1621)))), ((int32_t)il2cpp_codegen_multiply(L_1624, L_1627)))), ((int32_t)il2cpp_codegen_multiply(L_1630, L_1633)))), ((int32_t)il2cpp_codegen_multiply(L_1636, L_1639)))), ((int32_t)il2cpp_codegen_multiply(L_1642, L_1645)))), ((int32_t)il2cpp_codegen_multiply(L_1648, L_1651)))), ((int32_t)il2cpp_codegen_multiply(L_1654, L_1657)))), ((int32_t)il2cpp_codegen_multiply(L_1660, L_1663)))), ((int32_t)il2cpp_codegen_multiply(L_1666, L_1669)))), ((int32_t)il2cpp_codegen_multiply(L_1672, L_1675)))), ((int32_t)il2cpp_codegen_multiply(L_1678, L_1681)))), ((int32_t)il2cpp_codegen_multiply(L_1684, L_1687)))), ((int32_t)il2cpp_codegen_multiply(L_1690, L_1693)))), ((int32_t)il2cpp_codegen_multiply(L_1696, L_1699)))), ((int32_t)il2cpp_codegen_multiply(L_1702, L_1705))));
		int32_t* L_1706 = V_0;
		int32_t L_1707 = V_21;
		int32_t* L_1708 = ___0_residual;
		int32_t L_1709 = V_21;
		int32_t L_1710 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1708, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1709), 4)))));
		int32_t L_1711 = V_15;
		int32_t L_1712 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1706, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1707), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1710, ((int32_t)(L_1711>>((int32_t)(L_1712&((int32_t)31)))))));
		int32_t L_1713 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_1713, 1));
	}

IL_13c4:
	{
		int32_t L_1714 = V_21;
		int32_t L_1715 = ___2_length;
		if ((((int32_t)L_1714) < ((int32_t)L_1715)))
		{
			goto IL_11ea;
		}
	}
	{
		return;
	}

IL_13cd:
	{
		V_22 = 0;
		goto IL_159e;
	}

IL_13d5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1716 = V_1;
		NullCheck(L_1716);
		int32_t L_1717 = ((int32_t)25);
		int32_t L_1718 = (L_1716)->GetAt(static_cast<il2cpp_array_size_t>(L_1717));
		int32_t* L_1719 = V_0;
		int32_t L_1720 = V_22;
		int32_t L_1721 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1719, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1720, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1722 = V_1;
		NullCheck(L_1722);
		int32_t L_1723 = ((int32_t)24);
		int32_t L_1724 = (L_1722)->GetAt(static_cast<il2cpp_array_size_t>(L_1723));
		int32_t* L_1725 = V_0;
		int32_t L_1726 = V_22;
		int32_t L_1727 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1725, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1726, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1728 = V_1;
		NullCheck(L_1728);
		int32_t L_1729 = ((int32_t)23);
		int32_t L_1730 = (L_1728)->GetAt(static_cast<il2cpp_array_size_t>(L_1729));
		int32_t* L_1731 = V_0;
		int32_t L_1732 = V_22;
		int32_t L_1733 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1731, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1732, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1734 = V_1;
		NullCheck(L_1734);
		int32_t L_1735 = ((int32_t)22);
		int32_t L_1736 = (L_1734)->GetAt(static_cast<il2cpp_array_size_t>(L_1735));
		int32_t* L_1737 = V_0;
		int32_t L_1738 = V_22;
		int32_t L_1739 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1737, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1738, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1740 = V_1;
		NullCheck(L_1740);
		int32_t L_1741 = ((int32_t)21);
		int32_t L_1742 = (L_1740)->GetAt(static_cast<il2cpp_array_size_t>(L_1741));
		int32_t* L_1743 = V_0;
		int32_t L_1744 = V_22;
		int32_t L_1745 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1743, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1744, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1746 = V_1;
		NullCheck(L_1746);
		int32_t L_1747 = ((int32_t)20);
		int32_t L_1748 = (L_1746)->GetAt(static_cast<il2cpp_array_size_t>(L_1747));
		int32_t* L_1749 = V_0;
		int32_t L_1750 = V_22;
		int32_t L_1751 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1749, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1750, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1752 = V_1;
		NullCheck(L_1752);
		int32_t L_1753 = ((int32_t)19);
		int32_t L_1754 = (L_1752)->GetAt(static_cast<il2cpp_array_size_t>(L_1753));
		int32_t* L_1755 = V_0;
		int32_t L_1756 = V_22;
		int32_t L_1757 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1755, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1756, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1758 = V_1;
		NullCheck(L_1758);
		int32_t L_1759 = ((int32_t)18);
		int32_t L_1760 = (L_1758)->GetAt(static_cast<il2cpp_array_size_t>(L_1759));
		int32_t* L_1761 = V_0;
		int32_t L_1762 = V_22;
		int32_t L_1763 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1761, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1762, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1764 = V_1;
		NullCheck(L_1764);
		int32_t L_1765 = ((int32_t)17);
		int32_t L_1766 = (L_1764)->GetAt(static_cast<il2cpp_array_size_t>(L_1765));
		int32_t* L_1767 = V_0;
		int32_t L_1768 = V_22;
		int32_t L_1769 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1767, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1768, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1770 = V_1;
		NullCheck(L_1770);
		int32_t L_1771 = ((int32_t)16);
		int32_t L_1772 = (L_1770)->GetAt(static_cast<il2cpp_array_size_t>(L_1771));
		int32_t* L_1773 = V_0;
		int32_t L_1774 = V_22;
		int32_t L_1775 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1773, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1774, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1776 = V_1;
		NullCheck(L_1776);
		int32_t L_1777 = ((int32_t)15);
		int32_t L_1778 = (L_1776)->GetAt(static_cast<il2cpp_array_size_t>(L_1777));
		int32_t* L_1779 = V_0;
		int32_t L_1780 = V_22;
		int32_t L_1781 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1779, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1780, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1782 = V_1;
		NullCheck(L_1782);
		int32_t L_1783 = ((int32_t)14);
		int32_t L_1784 = (L_1782)->GetAt(static_cast<il2cpp_array_size_t>(L_1783));
		int32_t* L_1785 = V_0;
		int32_t L_1786 = V_22;
		int32_t L_1787 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1785, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1786, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1788 = V_1;
		NullCheck(L_1788);
		int32_t L_1789 = ((int32_t)13);
		int32_t L_1790 = (L_1788)->GetAt(static_cast<il2cpp_array_size_t>(L_1789));
		int32_t* L_1791 = V_0;
		int32_t L_1792 = V_22;
		int32_t L_1793 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1791, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1792, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1794 = V_1;
		NullCheck(L_1794);
		int32_t L_1795 = ((int32_t)12);
		int32_t L_1796 = (L_1794)->GetAt(static_cast<il2cpp_array_size_t>(L_1795));
		int32_t* L_1797 = V_0;
		int32_t L_1798 = V_22;
		int32_t L_1799 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1797, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1798, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1800 = V_1;
		NullCheck(L_1800);
		int32_t L_1801 = ((int32_t)11);
		int32_t L_1802 = (L_1800)->GetAt(static_cast<il2cpp_array_size_t>(L_1801));
		int32_t* L_1803 = V_0;
		int32_t L_1804 = V_22;
		int32_t L_1805 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1803, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1804, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1806 = V_1;
		NullCheck(L_1806);
		int32_t L_1807 = ((int32_t)10);
		int32_t L_1808 = (L_1806)->GetAt(static_cast<il2cpp_array_size_t>(L_1807));
		int32_t* L_1809 = V_0;
		int32_t L_1810 = V_22;
		int32_t L_1811 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1809, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1810, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1812 = V_1;
		NullCheck(L_1812);
		int32_t L_1813 = ((int32_t)9);
		int32_t L_1814 = (L_1812)->GetAt(static_cast<il2cpp_array_size_t>(L_1813));
		int32_t* L_1815 = V_0;
		int32_t L_1816 = V_22;
		int32_t L_1817 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1815, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1816, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1818 = V_1;
		NullCheck(L_1818);
		int32_t L_1819 = 8;
		int32_t L_1820 = (L_1818)->GetAt(static_cast<il2cpp_array_size_t>(L_1819));
		int32_t* L_1821 = V_0;
		int32_t L_1822 = V_22;
		int32_t L_1823 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1821, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1822, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1824 = V_1;
		NullCheck(L_1824);
		int32_t L_1825 = 7;
		int32_t L_1826 = (L_1824)->GetAt(static_cast<il2cpp_array_size_t>(L_1825));
		int32_t* L_1827 = V_0;
		int32_t L_1828 = V_22;
		int32_t L_1829 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1827, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1828, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1830 = V_1;
		NullCheck(L_1830);
		int32_t L_1831 = 6;
		int32_t L_1832 = (L_1830)->GetAt(static_cast<il2cpp_array_size_t>(L_1831));
		int32_t* L_1833 = V_0;
		int32_t L_1834 = V_22;
		int32_t L_1835 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1833, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1834, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1836 = V_1;
		NullCheck(L_1836);
		int32_t L_1837 = 5;
		int32_t L_1838 = (L_1836)->GetAt(static_cast<il2cpp_array_size_t>(L_1837));
		int32_t* L_1839 = V_0;
		int32_t L_1840 = V_22;
		int32_t L_1841 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1839, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1840, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1842 = V_1;
		NullCheck(L_1842);
		int32_t L_1843 = 4;
		int32_t L_1844 = (L_1842)->GetAt(static_cast<il2cpp_array_size_t>(L_1843));
		int32_t* L_1845 = V_0;
		int32_t L_1846 = V_22;
		int32_t L_1847 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1845, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1846, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1848 = V_1;
		NullCheck(L_1848);
		int32_t L_1849 = 3;
		int32_t L_1850 = (L_1848)->GetAt(static_cast<il2cpp_array_size_t>(L_1849));
		int32_t* L_1851 = V_0;
		int32_t L_1852 = V_22;
		int32_t L_1853 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1851, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1852, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1854 = V_1;
		NullCheck(L_1854);
		int32_t L_1855 = 2;
		int32_t L_1856 = (L_1854)->GetAt(static_cast<il2cpp_array_size_t>(L_1855));
		int32_t* L_1857 = V_0;
		int32_t L_1858 = V_22;
		int32_t L_1859 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1857, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1858, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1860 = V_1;
		NullCheck(L_1860);
		int32_t L_1861 = 1;
		int32_t L_1862 = (L_1860)->GetAt(static_cast<il2cpp_array_size_t>(L_1861));
		int32_t* L_1863 = V_0;
		int32_t L_1864 = V_22;
		int32_t L_1865 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1863, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1864, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1866 = V_1;
		NullCheck(L_1866);
		int32_t L_1867 = 0;
		int32_t L_1868 = (L_1866)->GetAt(static_cast<il2cpp_array_size_t>(L_1867));
		int32_t* L_1869 = V_0;
		int32_t L_1870 = V_22;
		int32_t L_1871 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1869, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1870, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1718, L_1721)), ((int32_t)il2cpp_codegen_multiply(L_1724, L_1727)))), ((int32_t)il2cpp_codegen_multiply(L_1730, L_1733)))), ((int32_t)il2cpp_codegen_multiply(L_1736, L_1739)))), ((int32_t)il2cpp_codegen_multiply(L_1742, L_1745)))), ((int32_t)il2cpp_codegen_multiply(L_1748, L_1751)))), ((int32_t)il2cpp_codegen_multiply(L_1754, L_1757)))), ((int32_t)il2cpp_codegen_multiply(L_1760, L_1763)))), ((int32_t)il2cpp_codegen_multiply(L_1766, L_1769)))), ((int32_t)il2cpp_codegen_multiply(L_1772, L_1775)))), ((int32_t)il2cpp_codegen_multiply(L_1778, L_1781)))), ((int32_t)il2cpp_codegen_multiply(L_1784, L_1787)))), ((int32_t)il2cpp_codegen_multiply(L_1790, L_1793)))), ((int32_t)il2cpp_codegen_multiply(L_1796, L_1799)))), ((int32_t)il2cpp_codegen_multiply(L_1802, L_1805)))), ((int32_t)il2cpp_codegen_multiply(L_1808, L_1811)))), ((int32_t)il2cpp_codegen_multiply(L_1814, L_1817)))), ((int32_t)il2cpp_codegen_multiply(L_1820, L_1823)))), ((int32_t)il2cpp_codegen_multiply(L_1826, L_1829)))), ((int32_t)il2cpp_codegen_multiply(L_1832, L_1835)))), ((int32_t)il2cpp_codegen_multiply(L_1838, L_1841)))), ((int32_t)il2cpp_codegen_multiply(L_1844, L_1847)))), ((int32_t)il2cpp_codegen_multiply(L_1850, L_1853)))), ((int32_t)il2cpp_codegen_multiply(L_1856, L_1859)))), ((int32_t)il2cpp_codegen_multiply(L_1862, L_1865)))), ((int32_t)il2cpp_codegen_multiply(L_1868, L_1871))));
		int32_t* L_1872 = V_0;
		int32_t L_1873 = V_22;
		int32_t* L_1874 = ___0_residual;
		int32_t L_1875 = V_22;
		int32_t L_1876 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1874, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1875), 4)))));
		int32_t L_1877 = V_15;
		int32_t L_1878 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1872, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1873), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1876, ((int32_t)(L_1877>>((int32_t)(L_1878&((int32_t)31)))))));
		int32_t L_1879 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_1879, 1));
	}

IL_159e:
	{
		int32_t L_1880 = V_22;
		int32_t L_1881 = ___2_length;
		if ((((int32_t)L_1880) < ((int32_t)L_1881)))
		{
			goto IL_13d5;
		}
	}
	{
		return;
	}

IL_15a7:
	{
		V_23 = 0;
		goto IL_1767;
	}

IL_15af:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1882 = V_1;
		NullCheck(L_1882);
		int32_t L_1883 = ((int32_t)24);
		int32_t L_1884 = (L_1882)->GetAt(static_cast<il2cpp_array_size_t>(L_1883));
		int32_t* L_1885 = V_0;
		int32_t L_1886 = V_23;
		int32_t L_1887 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1885, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1886, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1888 = V_1;
		NullCheck(L_1888);
		int32_t L_1889 = ((int32_t)23);
		int32_t L_1890 = (L_1888)->GetAt(static_cast<il2cpp_array_size_t>(L_1889));
		int32_t* L_1891 = V_0;
		int32_t L_1892 = V_23;
		int32_t L_1893 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1891, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1892, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1894 = V_1;
		NullCheck(L_1894);
		int32_t L_1895 = ((int32_t)22);
		int32_t L_1896 = (L_1894)->GetAt(static_cast<il2cpp_array_size_t>(L_1895));
		int32_t* L_1897 = V_0;
		int32_t L_1898 = V_23;
		int32_t L_1899 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1897, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1898, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1900 = V_1;
		NullCheck(L_1900);
		int32_t L_1901 = ((int32_t)21);
		int32_t L_1902 = (L_1900)->GetAt(static_cast<il2cpp_array_size_t>(L_1901));
		int32_t* L_1903 = V_0;
		int32_t L_1904 = V_23;
		int32_t L_1905 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1903, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1904, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1906 = V_1;
		NullCheck(L_1906);
		int32_t L_1907 = ((int32_t)20);
		int32_t L_1908 = (L_1906)->GetAt(static_cast<il2cpp_array_size_t>(L_1907));
		int32_t* L_1909 = V_0;
		int32_t L_1910 = V_23;
		int32_t L_1911 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1909, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1910, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1912 = V_1;
		NullCheck(L_1912);
		int32_t L_1913 = ((int32_t)19);
		int32_t L_1914 = (L_1912)->GetAt(static_cast<il2cpp_array_size_t>(L_1913));
		int32_t* L_1915 = V_0;
		int32_t L_1916 = V_23;
		int32_t L_1917 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1915, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1916, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1918 = V_1;
		NullCheck(L_1918);
		int32_t L_1919 = ((int32_t)18);
		int32_t L_1920 = (L_1918)->GetAt(static_cast<il2cpp_array_size_t>(L_1919));
		int32_t* L_1921 = V_0;
		int32_t L_1922 = V_23;
		int32_t L_1923 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1921, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1922, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1924 = V_1;
		NullCheck(L_1924);
		int32_t L_1925 = ((int32_t)17);
		int32_t L_1926 = (L_1924)->GetAt(static_cast<il2cpp_array_size_t>(L_1925));
		int32_t* L_1927 = V_0;
		int32_t L_1928 = V_23;
		int32_t L_1929 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1927, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1928, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1930 = V_1;
		NullCheck(L_1930);
		int32_t L_1931 = ((int32_t)16);
		int32_t L_1932 = (L_1930)->GetAt(static_cast<il2cpp_array_size_t>(L_1931));
		int32_t* L_1933 = V_0;
		int32_t L_1934 = V_23;
		int32_t L_1935 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1933, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1934, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1936 = V_1;
		NullCheck(L_1936);
		int32_t L_1937 = ((int32_t)15);
		int32_t L_1938 = (L_1936)->GetAt(static_cast<il2cpp_array_size_t>(L_1937));
		int32_t* L_1939 = V_0;
		int32_t L_1940 = V_23;
		int32_t L_1941 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1939, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1940, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1942 = V_1;
		NullCheck(L_1942);
		int32_t L_1943 = ((int32_t)14);
		int32_t L_1944 = (L_1942)->GetAt(static_cast<il2cpp_array_size_t>(L_1943));
		int32_t* L_1945 = V_0;
		int32_t L_1946 = V_23;
		int32_t L_1947 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1945, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1946, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1948 = V_1;
		NullCheck(L_1948);
		int32_t L_1949 = ((int32_t)13);
		int32_t L_1950 = (L_1948)->GetAt(static_cast<il2cpp_array_size_t>(L_1949));
		int32_t* L_1951 = V_0;
		int32_t L_1952 = V_23;
		int32_t L_1953 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1951, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1952, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1954 = V_1;
		NullCheck(L_1954);
		int32_t L_1955 = ((int32_t)12);
		int32_t L_1956 = (L_1954)->GetAt(static_cast<il2cpp_array_size_t>(L_1955));
		int32_t* L_1957 = V_0;
		int32_t L_1958 = V_23;
		int32_t L_1959 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1957, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1958, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1960 = V_1;
		NullCheck(L_1960);
		int32_t L_1961 = ((int32_t)11);
		int32_t L_1962 = (L_1960)->GetAt(static_cast<il2cpp_array_size_t>(L_1961));
		int32_t* L_1963 = V_0;
		int32_t L_1964 = V_23;
		int32_t L_1965 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1963, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1964, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1966 = V_1;
		NullCheck(L_1966);
		int32_t L_1967 = ((int32_t)10);
		int32_t L_1968 = (L_1966)->GetAt(static_cast<il2cpp_array_size_t>(L_1967));
		int32_t* L_1969 = V_0;
		int32_t L_1970 = V_23;
		int32_t L_1971 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1969, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1970, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1972 = V_1;
		NullCheck(L_1972);
		int32_t L_1973 = ((int32_t)9);
		int32_t L_1974 = (L_1972)->GetAt(static_cast<il2cpp_array_size_t>(L_1973));
		int32_t* L_1975 = V_0;
		int32_t L_1976 = V_23;
		int32_t L_1977 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1975, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1976, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1978 = V_1;
		NullCheck(L_1978);
		int32_t L_1979 = 8;
		int32_t L_1980 = (L_1978)->GetAt(static_cast<il2cpp_array_size_t>(L_1979));
		int32_t* L_1981 = V_0;
		int32_t L_1982 = V_23;
		int32_t L_1983 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1981, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1982, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1984 = V_1;
		NullCheck(L_1984);
		int32_t L_1985 = 7;
		int32_t L_1986 = (L_1984)->GetAt(static_cast<il2cpp_array_size_t>(L_1985));
		int32_t* L_1987 = V_0;
		int32_t L_1988 = V_23;
		int32_t L_1989 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1987, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1988, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1990 = V_1;
		NullCheck(L_1990);
		int32_t L_1991 = 6;
		int32_t L_1992 = (L_1990)->GetAt(static_cast<il2cpp_array_size_t>(L_1991));
		int32_t* L_1993 = V_0;
		int32_t L_1994 = V_23;
		int32_t L_1995 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1993, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1994, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1996 = V_1;
		NullCheck(L_1996);
		int32_t L_1997 = 5;
		int32_t L_1998 = (L_1996)->GetAt(static_cast<il2cpp_array_size_t>(L_1997));
		int32_t* L_1999 = V_0;
		int32_t L_2000 = V_23;
		int32_t L_2001 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1999, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2000, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2002 = V_1;
		NullCheck(L_2002);
		int32_t L_2003 = 4;
		int32_t L_2004 = (L_2002)->GetAt(static_cast<il2cpp_array_size_t>(L_2003));
		int32_t* L_2005 = V_0;
		int32_t L_2006 = V_23;
		int32_t L_2007 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2005, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2006, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2008 = V_1;
		NullCheck(L_2008);
		int32_t L_2009 = 3;
		int32_t L_2010 = (L_2008)->GetAt(static_cast<il2cpp_array_size_t>(L_2009));
		int32_t* L_2011 = V_0;
		int32_t L_2012 = V_23;
		int32_t L_2013 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2011, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2012, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2014 = V_1;
		NullCheck(L_2014);
		int32_t L_2015 = 2;
		int32_t L_2016 = (L_2014)->GetAt(static_cast<il2cpp_array_size_t>(L_2015));
		int32_t* L_2017 = V_0;
		int32_t L_2018 = V_23;
		int32_t L_2019 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2017, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2018, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2020 = V_1;
		NullCheck(L_2020);
		int32_t L_2021 = 1;
		int32_t L_2022 = (L_2020)->GetAt(static_cast<il2cpp_array_size_t>(L_2021));
		int32_t* L_2023 = V_0;
		int32_t L_2024 = V_23;
		int32_t L_2025 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2023, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2024, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2026 = V_1;
		NullCheck(L_2026);
		int32_t L_2027 = 0;
		int32_t L_2028 = (L_2026)->GetAt(static_cast<il2cpp_array_size_t>(L_2027));
		int32_t* L_2029 = V_0;
		int32_t L_2030 = V_23;
		int32_t L_2031 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2029, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2030, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1884, L_1887)), ((int32_t)il2cpp_codegen_multiply(L_1890, L_1893)))), ((int32_t)il2cpp_codegen_multiply(L_1896, L_1899)))), ((int32_t)il2cpp_codegen_multiply(L_1902, L_1905)))), ((int32_t)il2cpp_codegen_multiply(L_1908, L_1911)))), ((int32_t)il2cpp_codegen_multiply(L_1914, L_1917)))), ((int32_t)il2cpp_codegen_multiply(L_1920, L_1923)))), ((int32_t)il2cpp_codegen_multiply(L_1926, L_1929)))), ((int32_t)il2cpp_codegen_multiply(L_1932, L_1935)))), ((int32_t)il2cpp_codegen_multiply(L_1938, L_1941)))), ((int32_t)il2cpp_codegen_multiply(L_1944, L_1947)))), ((int32_t)il2cpp_codegen_multiply(L_1950, L_1953)))), ((int32_t)il2cpp_codegen_multiply(L_1956, L_1959)))), ((int32_t)il2cpp_codegen_multiply(L_1962, L_1965)))), ((int32_t)il2cpp_codegen_multiply(L_1968, L_1971)))), ((int32_t)il2cpp_codegen_multiply(L_1974, L_1977)))), ((int32_t)il2cpp_codegen_multiply(L_1980, L_1983)))), ((int32_t)il2cpp_codegen_multiply(L_1986, L_1989)))), ((int32_t)il2cpp_codegen_multiply(L_1992, L_1995)))), ((int32_t)il2cpp_codegen_multiply(L_1998, L_2001)))), ((int32_t)il2cpp_codegen_multiply(L_2004, L_2007)))), ((int32_t)il2cpp_codegen_multiply(L_2010, L_2013)))), ((int32_t)il2cpp_codegen_multiply(L_2016, L_2019)))), ((int32_t)il2cpp_codegen_multiply(L_2022, L_2025)))), ((int32_t)il2cpp_codegen_multiply(L_2028, L_2031))));
		int32_t* L_2032 = V_0;
		int32_t L_2033 = V_23;
		int32_t* L_2034 = ___0_residual;
		int32_t L_2035 = V_23;
		int32_t L_2036 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2034, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2035), 4)))));
		int32_t L_2037 = V_15;
		int32_t L_2038 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2032, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2033), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2036, ((int32_t)(L_2037>>((int32_t)(L_2038&((int32_t)31)))))));
		int32_t L_2039 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_2039, 1));
	}

IL_1767:
	{
		int32_t L_2040 = V_23;
		int32_t L_2041 = ___2_length;
		if ((((int32_t)L_2040) < ((int32_t)L_2041)))
		{
			goto IL_15af;
		}
	}
	{
		return;
	}

IL_1770:
	{
		V_24 = 0;
		goto IL_191f;
	}

IL_1778:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2042 = V_1;
		NullCheck(L_2042);
		int32_t L_2043 = ((int32_t)23);
		int32_t L_2044 = (L_2042)->GetAt(static_cast<il2cpp_array_size_t>(L_2043));
		int32_t* L_2045 = V_0;
		int32_t L_2046 = V_24;
		int32_t L_2047 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2045, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2046, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2048 = V_1;
		NullCheck(L_2048);
		int32_t L_2049 = ((int32_t)22);
		int32_t L_2050 = (L_2048)->GetAt(static_cast<il2cpp_array_size_t>(L_2049));
		int32_t* L_2051 = V_0;
		int32_t L_2052 = V_24;
		int32_t L_2053 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2051, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2052, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2054 = V_1;
		NullCheck(L_2054);
		int32_t L_2055 = ((int32_t)21);
		int32_t L_2056 = (L_2054)->GetAt(static_cast<il2cpp_array_size_t>(L_2055));
		int32_t* L_2057 = V_0;
		int32_t L_2058 = V_24;
		int32_t L_2059 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2057, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2058, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2060 = V_1;
		NullCheck(L_2060);
		int32_t L_2061 = ((int32_t)20);
		int32_t L_2062 = (L_2060)->GetAt(static_cast<il2cpp_array_size_t>(L_2061));
		int32_t* L_2063 = V_0;
		int32_t L_2064 = V_24;
		int32_t L_2065 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2063, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2064, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2066 = V_1;
		NullCheck(L_2066);
		int32_t L_2067 = ((int32_t)19);
		int32_t L_2068 = (L_2066)->GetAt(static_cast<il2cpp_array_size_t>(L_2067));
		int32_t* L_2069 = V_0;
		int32_t L_2070 = V_24;
		int32_t L_2071 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2069, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2070, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2072 = V_1;
		NullCheck(L_2072);
		int32_t L_2073 = ((int32_t)18);
		int32_t L_2074 = (L_2072)->GetAt(static_cast<il2cpp_array_size_t>(L_2073));
		int32_t* L_2075 = V_0;
		int32_t L_2076 = V_24;
		int32_t L_2077 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2075, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2076, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2078 = V_1;
		NullCheck(L_2078);
		int32_t L_2079 = ((int32_t)17);
		int32_t L_2080 = (L_2078)->GetAt(static_cast<il2cpp_array_size_t>(L_2079));
		int32_t* L_2081 = V_0;
		int32_t L_2082 = V_24;
		int32_t L_2083 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2081, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2082, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2084 = V_1;
		NullCheck(L_2084);
		int32_t L_2085 = ((int32_t)16);
		int32_t L_2086 = (L_2084)->GetAt(static_cast<il2cpp_array_size_t>(L_2085));
		int32_t* L_2087 = V_0;
		int32_t L_2088 = V_24;
		int32_t L_2089 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2087, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2088, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2090 = V_1;
		NullCheck(L_2090);
		int32_t L_2091 = ((int32_t)15);
		int32_t L_2092 = (L_2090)->GetAt(static_cast<il2cpp_array_size_t>(L_2091));
		int32_t* L_2093 = V_0;
		int32_t L_2094 = V_24;
		int32_t L_2095 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2093, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2094, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2096 = V_1;
		NullCheck(L_2096);
		int32_t L_2097 = ((int32_t)14);
		int32_t L_2098 = (L_2096)->GetAt(static_cast<il2cpp_array_size_t>(L_2097));
		int32_t* L_2099 = V_0;
		int32_t L_2100 = V_24;
		int32_t L_2101 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2099, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2100, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2102 = V_1;
		NullCheck(L_2102);
		int32_t L_2103 = ((int32_t)13);
		int32_t L_2104 = (L_2102)->GetAt(static_cast<il2cpp_array_size_t>(L_2103));
		int32_t* L_2105 = V_0;
		int32_t L_2106 = V_24;
		int32_t L_2107 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2105, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2106, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2108 = V_1;
		NullCheck(L_2108);
		int32_t L_2109 = ((int32_t)12);
		int32_t L_2110 = (L_2108)->GetAt(static_cast<il2cpp_array_size_t>(L_2109));
		int32_t* L_2111 = V_0;
		int32_t L_2112 = V_24;
		int32_t L_2113 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2111, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2112, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2114 = V_1;
		NullCheck(L_2114);
		int32_t L_2115 = ((int32_t)11);
		int32_t L_2116 = (L_2114)->GetAt(static_cast<il2cpp_array_size_t>(L_2115));
		int32_t* L_2117 = V_0;
		int32_t L_2118 = V_24;
		int32_t L_2119 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2117, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2118, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2120 = V_1;
		NullCheck(L_2120);
		int32_t L_2121 = ((int32_t)10);
		int32_t L_2122 = (L_2120)->GetAt(static_cast<il2cpp_array_size_t>(L_2121));
		int32_t* L_2123 = V_0;
		int32_t L_2124 = V_24;
		int32_t L_2125 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2123, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2124, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2126 = V_1;
		NullCheck(L_2126);
		int32_t L_2127 = ((int32_t)9);
		int32_t L_2128 = (L_2126)->GetAt(static_cast<il2cpp_array_size_t>(L_2127));
		int32_t* L_2129 = V_0;
		int32_t L_2130 = V_24;
		int32_t L_2131 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2129, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2130, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2132 = V_1;
		NullCheck(L_2132);
		int32_t L_2133 = 8;
		int32_t L_2134 = (L_2132)->GetAt(static_cast<il2cpp_array_size_t>(L_2133));
		int32_t* L_2135 = V_0;
		int32_t L_2136 = V_24;
		int32_t L_2137 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2136, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2138 = V_1;
		NullCheck(L_2138);
		int32_t L_2139 = 7;
		int32_t L_2140 = (L_2138)->GetAt(static_cast<il2cpp_array_size_t>(L_2139));
		int32_t* L_2141 = V_0;
		int32_t L_2142 = V_24;
		int32_t L_2143 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2141, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2142, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2144 = V_1;
		NullCheck(L_2144);
		int32_t L_2145 = 6;
		int32_t L_2146 = (L_2144)->GetAt(static_cast<il2cpp_array_size_t>(L_2145));
		int32_t* L_2147 = V_0;
		int32_t L_2148 = V_24;
		int32_t L_2149 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2147, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2148, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2150 = V_1;
		NullCheck(L_2150);
		int32_t L_2151 = 5;
		int32_t L_2152 = (L_2150)->GetAt(static_cast<il2cpp_array_size_t>(L_2151));
		int32_t* L_2153 = V_0;
		int32_t L_2154 = V_24;
		int32_t L_2155 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2153, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2154, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2156 = V_1;
		NullCheck(L_2156);
		int32_t L_2157 = 4;
		int32_t L_2158 = (L_2156)->GetAt(static_cast<il2cpp_array_size_t>(L_2157));
		int32_t* L_2159 = V_0;
		int32_t L_2160 = V_24;
		int32_t L_2161 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2159, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2160, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2162 = V_1;
		NullCheck(L_2162);
		int32_t L_2163 = 3;
		int32_t L_2164 = (L_2162)->GetAt(static_cast<il2cpp_array_size_t>(L_2163));
		int32_t* L_2165 = V_0;
		int32_t L_2166 = V_24;
		int32_t L_2167 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2166, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2168 = V_1;
		NullCheck(L_2168);
		int32_t L_2169 = 2;
		int32_t L_2170 = (L_2168)->GetAt(static_cast<il2cpp_array_size_t>(L_2169));
		int32_t* L_2171 = V_0;
		int32_t L_2172 = V_24;
		int32_t L_2173 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2171, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2172, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2174 = V_1;
		NullCheck(L_2174);
		int32_t L_2175 = 1;
		int32_t L_2176 = (L_2174)->GetAt(static_cast<il2cpp_array_size_t>(L_2175));
		int32_t* L_2177 = V_0;
		int32_t L_2178 = V_24;
		int32_t L_2179 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2178, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2180 = V_1;
		NullCheck(L_2180);
		int32_t L_2181 = 0;
		int32_t L_2182 = (L_2180)->GetAt(static_cast<il2cpp_array_size_t>(L_2181));
		int32_t* L_2183 = V_0;
		int32_t L_2184 = V_24;
		int32_t L_2185 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2183, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2184, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2044, L_2047)), ((int32_t)il2cpp_codegen_multiply(L_2050, L_2053)))), ((int32_t)il2cpp_codegen_multiply(L_2056, L_2059)))), ((int32_t)il2cpp_codegen_multiply(L_2062, L_2065)))), ((int32_t)il2cpp_codegen_multiply(L_2068, L_2071)))), ((int32_t)il2cpp_codegen_multiply(L_2074, L_2077)))), ((int32_t)il2cpp_codegen_multiply(L_2080, L_2083)))), ((int32_t)il2cpp_codegen_multiply(L_2086, L_2089)))), ((int32_t)il2cpp_codegen_multiply(L_2092, L_2095)))), ((int32_t)il2cpp_codegen_multiply(L_2098, L_2101)))), ((int32_t)il2cpp_codegen_multiply(L_2104, L_2107)))), ((int32_t)il2cpp_codegen_multiply(L_2110, L_2113)))), ((int32_t)il2cpp_codegen_multiply(L_2116, L_2119)))), ((int32_t)il2cpp_codegen_multiply(L_2122, L_2125)))), ((int32_t)il2cpp_codegen_multiply(L_2128, L_2131)))), ((int32_t)il2cpp_codegen_multiply(L_2134, L_2137)))), ((int32_t)il2cpp_codegen_multiply(L_2140, L_2143)))), ((int32_t)il2cpp_codegen_multiply(L_2146, L_2149)))), ((int32_t)il2cpp_codegen_multiply(L_2152, L_2155)))), ((int32_t)il2cpp_codegen_multiply(L_2158, L_2161)))), ((int32_t)il2cpp_codegen_multiply(L_2164, L_2167)))), ((int32_t)il2cpp_codegen_multiply(L_2170, L_2173)))), ((int32_t)il2cpp_codegen_multiply(L_2176, L_2179)))), ((int32_t)il2cpp_codegen_multiply(L_2182, L_2185))));
		int32_t* L_2186 = V_0;
		int32_t L_2187 = V_24;
		int32_t* L_2188 = ___0_residual;
		int32_t L_2189 = V_24;
		int32_t L_2190 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2188, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2189), 4)))));
		int32_t L_2191 = V_15;
		int32_t L_2192 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2186, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2187), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2190, ((int32_t)(L_2191>>((int32_t)(L_2192&((int32_t)31)))))));
		int32_t L_2193 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_2193, 1));
	}

IL_191f:
	{
		int32_t L_2194 = V_24;
		int32_t L_2195 = ___2_length;
		if ((((int32_t)L_2194) < ((int32_t)L_2195)))
		{
			goto IL_1778;
		}
	}
	{
		return;
	}

IL_1928:
	{
		V_25 = 0;
		goto IL_1ac6;
	}

IL_1930:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2196 = V_1;
		NullCheck(L_2196);
		int32_t L_2197 = ((int32_t)22);
		int32_t L_2198 = (L_2196)->GetAt(static_cast<il2cpp_array_size_t>(L_2197));
		int32_t* L_2199 = V_0;
		int32_t L_2200 = V_25;
		int32_t L_2201 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2199, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2200, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2202 = V_1;
		NullCheck(L_2202);
		int32_t L_2203 = ((int32_t)21);
		int32_t L_2204 = (L_2202)->GetAt(static_cast<il2cpp_array_size_t>(L_2203));
		int32_t* L_2205 = V_0;
		int32_t L_2206 = V_25;
		int32_t L_2207 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2205, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2206, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2208 = V_1;
		NullCheck(L_2208);
		int32_t L_2209 = ((int32_t)20);
		int32_t L_2210 = (L_2208)->GetAt(static_cast<il2cpp_array_size_t>(L_2209));
		int32_t* L_2211 = V_0;
		int32_t L_2212 = V_25;
		int32_t L_2213 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2211, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2212, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2214 = V_1;
		NullCheck(L_2214);
		int32_t L_2215 = ((int32_t)19);
		int32_t L_2216 = (L_2214)->GetAt(static_cast<il2cpp_array_size_t>(L_2215));
		int32_t* L_2217 = V_0;
		int32_t L_2218 = V_25;
		int32_t L_2219 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2217, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2218, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2220 = V_1;
		NullCheck(L_2220);
		int32_t L_2221 = ((int32_t)18);
		int32_t L_2222 = (L_2220)->GetAt(static_cast<il2cpp_array_size_t>(L_2221));
		int32_t* L_2223 = V_0;
		int32_t L_2224 = V_25;
		int32_t L_2225 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2223, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2224, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2226 = V_1;
		NullCheck(L_2226);
		int32_t L_2227 = ((int32_t)17);
		int32_t L_2228 = (L_2226)->GetAt(static_cast<il2cpp_array_size_t>(L_2227));
		int32_t* L_2229 = V_0;
		int32_t L_2230 = V_25;
		int32_t L_2231 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2229, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2230, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2232 = V_1;
		NullCheck(L_2232);
		int32_t L_2233 = ((int32_t)16);
		int32_t L_2234 = (L_2232)->GetAt(static_cast<il2cpp_array_size_t>(L_2233));
		int32_t* L_2235 = V_0;
		int32_t L_2236 = V_25;
		int32_t L_2237 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2235, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2236, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2238 = V_1;
		NullCheck(L_2238);
		int32_t L_2239 = ((int32_t)15);
		int32_t L_2240 = (L_2238)->GetAt(static_cast<il2cpp_array_size_t>(L_2239));
		int32_t* L_2241 = V_0;
		int32_t L_2242 = V_25;
		int32_t L_2243 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2241, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2242, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2244 = V_1;
		NullCheck(L_2244);
		int32_t L_2245 = ((int32_t)14);
		int32_t L_2246 = (L_2244)->GetAt(static_cast<il2cpp_array_size_t>(L_2245));
		int32_t* L_2247 = V_0;
		int32_t L_2248 = V_25;
		int32_t L_2249 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2247, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2248, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2250 = V_1;
		NullCheck(L_2250);
		int32_t L_2251 = ((int32_t)13);
		int32_t L_2252 = (L_2250)->GetAt(static_cast<il2cpp_array_size_t>(L_2251));
		int32_t* L_2253 = V_0;
		int32_t L_2254 = V_25;
		int32_t L_2255 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2253, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2254, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2256 = V_1;
		NullCheck(L_2256);
		int32_t L_2257 = ((int32_t)12);
		int32_t L_2258 = (L_2256)->GetAt(static_cast<il2cpp_array_size_t>(L_2257));
		int32_t* L_2259 = V_0;
		int32_t L_2260 = V_25;
		int32_t L_2261 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2259, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2260, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2262 = V_1;
		NullCheck(L_2262);
		int32_t L_2263 = ((int32_t)11);
		int32_t L_2264 = (L_2262)->GetAt(static_cast<il2cpp_array_size_t>(L_2263));
		int32_t* L_2265 = V_0;
		int32_t L_2266 = V_25;
		int32_t L_2267 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2265, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2266, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2268 = V_1;
		NullCheck(L_2268);
		int32_t L_2269 = ((int32_t)10);
		int32_t L_2270 = (L_2268)->GetAt(static_cast<il2cpp_array_size_t>(L_2269));
		int32_t* L_2271 = V_0;
		int32_t L_2272 = V_25;
		int32_t L_2273 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2271, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2272, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2274 = V_1;
		NullCheck(L_2274);
		int32_t L_2275 = ((int32_t)9);
		int32_t L_2276 = (L_2274)->GetAt(static_cast<il2cpp_array_size_t>(L_2275));
		int32_t* L_2277 = V_0;
		int32_t L_2278 = V_25;
		int32_t L_2279 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2277, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2278, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2280 = V_1;
		NullCheck(L_2280);
		int32_t L_2281 = 8;
		int32_t L_2282 = (L_2280)->GetAt(static_cast<il2cpp_array_size_t>(L_2281));
		int32_t* L_2283 = V_0;
		int32_t L_2284 = V_25;
		int32_t L_2285 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2283, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2284, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2286 = V_1;
		NullCheck(L_2286);
		int32_t L_2287 = 7;
		int32_t L_2288 = (L_2286)->GetAt(static_cast<il2cpp_array_size_t>(L_2287));
		int32_t* L_2289 = V_0;
		int32_t L_2290 = V_25;
		int32_t L_2291 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2289, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2290, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2292 = V_1;
		NullCheck(L_2292);
		int32_t L_2293 = 6;
		int32_t L_2294 = (L_2292)->GetAt(static_cast<il2cpp_array_size_t>(L_2293));
		int32_t* L_2295 = V_0;
		int32_t L_2296 = V_25;
		int32_t L_2297 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2295, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2296, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2298 = V_1;
		NullCheck(L_2298);
		int32_t L_2299 = 5;
		int32_t L_2300 = (L_2298)->GetAt(static_cast<il2cpp_array_size_t>(L_2299));
		int32_t* L_2301 = V_0;
		int32_t L_2302 = V_25;
		int32_t L_2303 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2301, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2302, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2304 = V_1;
		NullCheck(L_2304);
		int32_t L_2305 = 4;
		int32_t L_2306 = (L_2304)->GetAt(static_cast<il2cpp_array_size_t>(L_2305));
		int32_t* L_2307 = V_0;
		int32_t L_2308 = V_25;
		int32_t L_2309 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2307, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2308, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2310 = V_1;
		NullCheck(L_2310);
		int32_t L_2311 = 3;
		int32_t L_2312 = (L_2310)->GetAt(static_cast<il2cpp_array_size_t>(L_2311));
		int32_t* L_2313 = V_0;
		int32_t L_2314 = V_25;
		int32_t L_2315 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2313, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2314, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2316 = V_1;
		NullCheck(L_2316);
		int32_t L_2317 = 2;
		int32_t L_2318 = (L_2316)->GetAt(static_cast<il2cpp_array_size_t>(L_2317));
		int32_t* L_2319 = V_0;
		int32_t L_2320 = V_25;
		int32_t L_2321 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2319, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2320, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2322 = V_1;
		NullCheck(L_2322);
		int32_t L_2323 = 1;
		int32_t L_2324 = (L_2322)->GetAt(static_cast<il2cpp_array_size_t>(L_2323));
		int32_t* L_2325 = V_0;
		int32_t L_2326 = V_25;
		int32_t L_2327 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2325, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2326, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2328 = V_1;
		NullCheck(L_2328);
		int32_t L_2329 = 0;
		int32_t L_2330 = (L_2328)->GetAt(static_cast<il2cpp_array_size_t>(L_2329));
		int32_t* L_2331 = V_0;
		int32_t L_2332 = V_25;
		int32_t L_2333 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2331, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2332, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2198, L_2201)), ((int32_t)il2cpp_codegen_multiply(L_2204, L_2207)))), ((int32_t)il2cpp_codegen_multiply(L_2210, L_2213)))), ((int32_t)il2cpp_codegen_multiply(L_2216, L_2219)))), ((int32_t)il2cpp_codegen_multiply(L_2222, L_2225)))), ((int32_t)il2cpp_codegen_multiply(L_2228, L_2231)))), ((int32_t)il2cpp_codegen_multiply(L_2234, L_2237)))), ((int32_t)il2cpp_codegen_multiply(L_2240, L_2243)))), ((int32_t)il2cpp_codegen_multiply(L_2246, L_2249)))), ((int32_t)il2cpp_codegen_multiply(L_2252, L_2255)))), ((int32_t)il2cpp_codegen_multiply(L_2258, L_2261)))), ((int32_t)il2cpp_codegen_multiply(L_2264, L_2267)))), ((int32_t)il2cpp_codegen_multiply(L_2270, L_2273)))), ((int32_t)il2cpp_codegen_multiply(L_2276, L_2279)))), ((int32_t)il2cpp_codegen_multiply(L_2282, L_2285)))), ((int32_t)il2cpp_codegen_multiply(L_2288, L_2291)))), ((int32_t)il2cpp_codegen_multiply(L_2294, L_2297)))), ((int32_t)il2cpp_codegen_multiply(L_2300, L_2303)))), ((int32_t)il2cpp_codegen_multiply(L_2306, L_2309)))), ((int32_t)il2cpp_codegen_multiply(L_2312, L_2315)))), ((int32_t)il2cpp_codegen_multiply(L_2318, L_2321)))), ((int32_t)il2cpp_codegen_multiply(L_2324, L_2327)))), ((int32_t)il2cpp_codegen_multiply(L_2330, L_2333))));
		int32_t* L_2334 = V_0;
		int32_t L_2335 = V_25;
		int32_t* L_2336 = ___0_residual;
		int32_t L_2337 = V_25;
		int32_t L_2338 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2336, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2337), 4)))));
		int32_t L_2339 = V_15;
		int32_t L_2340 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2334, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2335), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2338, ((int32_t)(L_2339>>((int32_t)(L_2340&((int32_t)31)))))));
		int32_t L_2341 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_2341, 1));
	}

IL_1ac6:
	{
		int32_t L_2342 = V_25;
		int32_t L_2343 = ___2_length;
		if ((((int32_t)L_2342) < ((int32_t)L_2343)))
		{
			goto IL_1930;
		}
	}
	{
		return;
	}

IL_1acf:
	{
		V_26 = 0;
		goto IL_1c5c;
	}

IL_1ad7:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2344 = V_1;
		NullCheck(L_2344);
		int32_t L_2345 = ((int32_t)21);
		int32_t L_2346 = (L_2344)->GetAt(static_cast<il2cpp_array_size_t>(L_2345));
		int32_t* L_2347 = V_0;
		int32_t L_2348 = V_26;
		int32_t L_2349 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2347, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2348, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2350 = V_1;
		NullCheck(L_2350);
		int32_t L_2351 = ((int32_t)20);
		int32_t L_2352 = (L_2350)->GetAt(static_cast<il2cpp_array_size_t>(L_2351));
		int32_t* L_2353 = V_0;
		int32_t L_2354 = V_26;
		int32_t L_2355 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2353, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2354, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2356 = V_1;
		NullCheck(L_2356);
		int32_t L_2357 = ((int32_t)19);
		int32_t L_2358 = (L_2356)->GetAt(static_cast<il2cpp_array_size_t>(L_2357));
		int32_t* L_2359 = V_0;
		int32_t L_2360 = V_26;
		int32_t L_2361 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2359, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2360, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2362 = V_1;
		NullCheck(L_2362);
		int32_t L_2363 = ((int32_t)18);
		int32_t L_2364 = (L_2362)->GetAt(static_cast<il2cpp_array_size_t>(L_2363));
		int32_t* L_2365 = V_0;
		int32_t L_2366 = V_26;
		int32_t L_2367 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2365, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2366, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2368 = V_1;
		NullCheck(L_2368);
		int32_t L_2369 = ((int32_t)17);
		int32_t L_2370 = (L_2368)->GetAt(static_cast<il2cpp_array_size_t>(L_2369));
		int32_t* L_2371 = V_0;
		int32_t L_2372 = V_26;
		int32_t L_2373 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2371, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2372, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2374 = V_1;
		NullCheck(L_2374);
		int32_t L_2375 = ((int32_t)16);
		int32_t L_2376 = (L_2374)->GetAt(static_cast<il2cpp_array_size_t>(L_2375));
		int32_t* L_2377 = V_0;
		int32_t L_2378 = V_26;
		int32_t L_2379 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2377, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2378, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2380 = V_1;
		NullCheck(L_2380);
		int32_t L_2381 = ((int32_t)15);
		int32_t L_2382 = (L_2380)->GetAt(static_cast<il2cpp_array_size_t>(L_2381));
		int32_t* L_2383 = V_0;
		int32_t L_2384 = V_26;
		int32_t L_2385 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2383, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2384, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2386 = V_1;
		NullCheck(L_2386);
		int32_t L_2387 = ((int32_t)14);
		int32_t L_2388 = (L_2386)->GetAt(static_cast<il2cpp_array_size_t>(L_2387));
		int32_t* L_2389 = V_0;
		int32_t L_2390 = V_26;
		int32_t L_2391 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2389, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2390, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2392 = V_1;
		NullCheck(L_2392);
		int32_t L_2393 = ((int32_t)13);
		int32_t L_2394 = (L_2392)->GetAt(static_cast<il2cpp_array_size_t>(L_2393));
		int32_t* L_2395 = V_0;
		int32_t L_2396 = V_26;
		int32_t L_2397 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2395, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2396, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2398 = V_1;
		NullCheck(L_2398);
		int32_t L_2399 = ((int32_t)12);
		int32_t L_2400 = (L_2398)->GetAt(static_cast<il2cpp_array_size_t>(L_2399));
		int32_t* L_2401 = V_0;
		int32_t L_2402 = V_26;
		int32_t L_2403 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2401, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2402, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2404 = V_1;
		NullCheck(L_2404);
		int32_t L_2405 = ((int32_t)11);
		int32_t L_2406 = (L_2404)->GetAt(static_cast<il2cpp_array_size_t>(L_2405));
		int32_t* L_2407 = V_0;
		int32_t L_2408 = V_26;
		int32_t L_2409 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2407, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2408, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2410 = V_1;
		NullCheck(L_2410);
		int32_t L_2411 = ((int32_t)10);
		int32_t L_2412 = (L_2410)->GetAt(static_cast<il2cpp_array_size_t>(L_2411));
		int32_t* L_2413 = V_0;
		int32_t L_2414 = V_26;
		int32_t L_2415 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2413, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2414, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2416 = V_1;
		NullCheck(L_2416);
		int32_t L_2417 = ((int32_t)9);
		int32_t L_2418 = (L_2416)->GetAt(static_cast<il2cpp_array_size_t>(L_2417));
		int32_t* L_2419 = V_0;
		int32_t L_2420 = V_26;
		int32_t L_2421 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2419, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2420, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2422 = V_1;
		NullCheck(L_2422);
		int32_t L_2423 = 8;
		int32_t L_2424 = (L_2422)->GetAt(static_cast<il2cpp_array_size_t>(L_2423));
		int32_t* L_2425 = V_0;
		int32_t L_2426 = V_26;
		int32_t L_2427 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2425, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2426, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2428 = V_1;
		NullCheck(L_2428);
		int32_t L_2429 = 7;
		int32_t L_2430 = (L_2428)->GetAt(static_cast<il2cpp_array_size_t>(L_2429));
		int32_t* L_2431 = V_0;
		int32_t L_2432 = V_26;
		int32_t L_2433 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2431, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2432, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2434 = V_1;
		NullCheck(L_2434);
		int32_t L_2435 = 6;
		int32_t L_2436 = (L_2434)->GetAt(static_cast<il2cpp_array_size_t>(L_2435));
		int32_t* L_2437 = V_0;
		int32_t L_2438 = V_26;
		int32_t L_2439 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2437, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2438, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2440 = V_1;
		NullCheck(L_2440);
		int32_t L_2441 = 5;
		int32_t L_2442 = (L_2440)->GetAt(static_cast<il2cpp_array_size_t>(L_2441));
		int32_t* L_2443 = V_0;
		int32_t L_2444 = V_26;
		int32_t L_2445 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2443, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2444, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2446 = V_1;
		NullCheck(L_2446);
		int32_t L_2447 = 4;
		int32_t L_2448 = (L_2446)->GetAt(static_cast<il2cpp_array_size_t>(L_2447));
		int32_t* L_2449 = V_0;
		int32_t L_2450 = V_26;
		int32_t L_2451 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2449, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2450, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2452 = V_1;
		NullCheck(L_2452);
		int32_t L_2453 = 3;
		int32_t L_2454 = (L_2452)->GetAt(static_cast<il2cpp_array_size_t>(L_2453));
		int32_t* L_2455 = V_0;
		int32_t L_2456 = V_26;
		int32_t L_2457 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2455, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2456, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2458 = V_1;
		NullCheck(L_2458);
		int32_t L_2459 = 2;
		int32_t L_2460 = (L_2458)->GetAt(static_cast<il2cpp_array_size_t>(L_2459));
		int32_t* L_2461 = V_0;
		int32_t L_2462 = V_26;
		int32_t L_2463 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2461, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2462, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2464 = V_1;
		NullCheck(L_2464);
		int32_t L_2465 = 1;
		int32_t L_2466 = (L_2464)->GetAt(static_cast<il2cpp_array_size_t>(L_2465));
		int32_t* L_2467 = V_0;
		int32_t L_2468 = V_26;
		int32_t L_2469 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2467, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2468, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2470 = V_1;
		NullCheck(L_2470);
		int32_t L_2471 = 0;
		int32_t L_2472 = (L_2470)->GetAt(static_cast<il2cpp_array_size_t>(L_2471));
		int32_t* L_2473 = V_0;
		int32_t L_2474 = V_26;
		int32_t L_2475 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2473, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2474, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2346, L_2349)), ((int32_t)il2cpp_codegen_multiply(L_2352, L_2355)))), ((int32_t)il2cpp_codegen_multiply(L_2358, L_2361)))), ((int32_t)il2cpp_codegen_multiply(L_2364, L_2367)))), ((int32_t)il2cpp_codegen_multiply(L_2370, L_2373)))), ((int32_t)il2cpp_codegen_multiply(L_2376, L_2379)))), ((int32_t)il2cpp_codegen_multiply(L_2382, L_2385)))), ((int32_t)il2cpp_codegen_multiply(L_2388, L_2391)))), ((int32_t)il2cpp_codegen_multiply(L_2394, L_2397)))), ((int32_t)il2cpp_codegen_multiply(L_2400, L_2403)))), ((int32_t)il2cpp_codegen_multiply(L_2406, L_2409)))), ((int32_t)il2cpp_codegen_multiply(L_2412, L_2415)))), ((int32_t)il2cpp_codegen_multiply(L_2418, L_2421)))), ((int32_t)il2cpp_codegen_multiply(L_2424, L_2427)))), ((int32_t)il2cpp_codegen_multiply(L_2430, L_2433)))), ((int32_t)il2cpp_codegen_multiply(L_2436, L_2439)))), ((int32_t)il2cpp_codegen_multiply(L_2442, L_2445)))), ((int32_t)il2cpp_codegen_multiply(L_2448, L_2451)))), ((int32_t)il2cpp_codegen_multiply(L_2454, L_2457)))), ((int32_t)il2cpp_codegen_multiply(L_2460, L_2463)))), ((int32_t)il2cpp_codegen_multiply(L_2466, L_2469)))), ((int32_t)il2cpp_codegen_multiply(L_2472, L_2475))));
		int32_t* L_2476 = V_0;
		int32_t L_2477 = V_26;
		int32_t* L_2478 = ___0_residual;
		int32_t L_2479 = V_26;
		int32_t L_2480 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2478, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2479), 4)))));
		int32_t L_2481 = V_15;
		int32_t L_2482 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2476, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2477), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2480, ((int32_t)(L_2481>>((int32_t)(L_2482&((int32_t)31)))))));
		int32_t L_2483 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_2483, 1));
	}

IL_1c5c:
	{
		int32_t L_2484 = V_26;
		int32_t L_2485 = ___2_length;
		if ((((int32_t)L_2484) < ((int32_t)L_2485)))
		{
			goto IL_1ad7;
		}
	}
	{
		return;
	}

IL_1c65:
	{
		V_27 = 0;
		goto IL_1de1;
	}

IL_1c6d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2486 = V_1;
		NullCheck(L_2486);
		int32_t L_2487 = ((int32_t)20);
		int32_t L_2488 = (L_2486)->GetAt(static_cast<il2cpp_array_size_t>(L_2487));
		int32_t* L_2489 = V_0;
		int32_t L_2490 = V_27;
		int32_t L_2491 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2489, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2490, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2492 = V_1;
		NullCheck(L_2492);
		int32_t L_2493 = ((int32_t)19);
		int32_t L_2494 = (L_2492)->GetAt(static_cast<il2cpp_array_size_t>(L_2493));
		int32_t* L_2495 = V_0;
		int32_t L_2496 = V_27;
		int32_t L_2497 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2495, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2496, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2498 = V_1;
		NullCheck(L_2498);
		int32_t L_2499 = ((int32_t)18);
		int32_t L_2500 = (L_2498)->GetAt(static_cast<il2cpp_array_size_t>(L_2499));
		int32_t* L_2501 = V_0;
		int32_t L_2502 = V_27;
		int32_t L_2503 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2501, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2502, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2504 = V_1;
		NullCheck(L_2504);
		int32_t L_2505 = ((int32_t)17);
		int32_t L_2506 = (L_2504)->GetAt(static_cast<il2cpp_array_size_t>(L_2505));
		int32_t* L_2507 = V_0;
		int32_t L_2508 = V_27;
		int32_t L_2509 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2507, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2508, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2510 = V_1;
		NullCheck(L_2510);
		int32_t L_2511 = ((int32_t)16);
		int32_t L_2512 = (L_2510)->GetAt(static_cast<il2cpp_array_size_t>(L_2511));
		int32_t* L_2513 = V_0;
		int32_t L_2514 = V_27;
		int32_t L_2515 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2513, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2514, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2516 = V_1;
		NullCheck(L_2516);
		int32_t L_2517 = ((int32_t)15);
		int32_t L_2518 = (L_2516)->GetAt(static_cast<il2cpp_array_size_t>(L_2517));
		int32_t* L_2519 = V_0;
		int32_t L_2520 = V_27;
		int32_t L_2521 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2519, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2520, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2522 = V_1;
		NullCheck(L_2522);
		int32_t L_2523 = ((int32_t)14);
		int32_t L_2524 = (L_2522)->GetAt(static_cast<il2cpp_array_size_t>(L_2523));
		int32_t* L_2525 = V_0;
		int32_t L_2526 = V_27;
		int32_t L_2527 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2525, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2526, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2528 = V_1;
		NullCheck(L_2528);
		int32_t L_2529 = ((int32_t)13);
		int32_t L_2530 = (L_2528)->GetAt(static_cast<il2cpp_array_size_t>(L_2529));
		int32_t* L_2531 = V_0;
		int32_t L_2532 = V_27;
		int32_t L_2533 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2531, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2532, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2534 = V_1;
		NullCheck(L_2534);
		int32_t L_2535 = ((int32_t)12);
		int32_t L_2536 = (L_2534)->GetAt(static_cast<il2cpp_array_size_t>(L_2535));
		int32_t* L_2537 = V_0;
		int32_t L_2538 = V_27;
		int32_t L_2539 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2537, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2538, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2540 = V_1;
		NullCheck(L_2540);
		int32_t L_2541 = ((int32_t)11);
		int32_t L_2542 = (L_2540)->GetAt(static_cast<il2cpp_array_size_t>(L_2541));
		int32_t* L_2543 = V_0;
		int32_t L_2544 = V_27;
		int32_t L_2545 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2543, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2544, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2546 = V_1;
		NullCheck(L_2546);
		int32_t L_2547 = ((int32_t)10);
		int32_t L_2548 = (L_2546)->GetAt(static_cast<il2cpp_array_size_t>(L_2547));
		int32_t* L_2549 = V_0;
		int32_t L_2550 = V_27;
		int32_t L_2551 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2549, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2550, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2552 = V_1;
		NullCheck(L_2552);
		int32_t L_2553 = ((int32_t)9);
		int32_t L_2554 = (L_2552)->GetAt(static_cast<il2cpp_array_size_t>(L_2553));
		int32_t* L_2555 = V_0;
		int32_t L_2556 = V_27;
		int32_t L_2557 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2555, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2556, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2558 = V_1;
		NullCheck(L_2558);
		int32_t L_2559 = 8;
		int32_t L_2560 = (L_2558)->GetAt(static_cast<il2cpp_array_size_t>(L_2559));
		int32_t* L_2561 = V_0;
		int32_t L_2562 = V_27;
		int32_t L_2563 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2561, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2562, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2564 = V_1;
		NullCheck(L_2564);
		int32_t L_2565 = 7;
		int32_t L_2566 = (L_2564)->GetAt(static_cast<il2cpp_array_size_t>(L_2565));
		int32_t* L_2567 = V_0;
		int32_t L_2568 = V_27;
		int32_t L_2569 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2567, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2568, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2570 = V_1;
		NullCheck(L_2570);
		int32_t L_2571 = 6;
		int32_t L_2572 = (L_2570)->GetAt(static_cast<il2cpp_array_size_t>(L_2571));
		int32_t* L_2573 = V_0;
		int32_t L_2574 = V_27;
		int32_t L_2575 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2573, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2574, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2576 = V_1;
		NullCheck(L_2576);
		int32_t L_2577 = 5;
		int32_t L_2578 = (L_2576)->GetAt(static_cast<il2cpp_array_size_t>(L_2577));
		int32_t* L_2579 = V_0;
		int32_t L_2580 = V_27;
		int32_t L_2581 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2579, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2580, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2582 = V_1;
		NullCheck(L_2582);
		int32_t L_2583 = 4;
		int32_t L_2584 = (L_2582)->GetAt(static_cast<il2cpp_array_size_t>(L_2583));
		int32_t* L_2585 = V_0;
		int32_t L_2586 = V_27;
		int32_t L_2587 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2585, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2586, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2588 = V_1;
		NullCheck(L_2588);
		int32_t L_2589 = 3;
		int32_t L_2590 = (L_2588)->GetAt(static_cast<il2cpp_array_size_t>(L_2589));
		int32_t* L_2591 = V_0;
		int32_t L_2592 = V_27;
		int32_t L_2593 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2591, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2592, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2594 = V_1;
		NullCheck(L_2594);
		int32_t L_2595 = 2;
		int32_t L_2596 = (L_2594)->GetAt(static_cast<il2cpp_array_size_t>(L_2595));
		int32_t* L_2597 = V_0;
		int32_t L_2598 = V_27;
		int32_t L_2599 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2597, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2598, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2600 = V_1;
		NullCheck(L_2600);
		int32_t L_2601 = 1;
		int32_t L_2602 = (L_2600)->GetAt(static_cast<il2cpp_array_size_t>(L_2601));
		int32_t* L_2603 = V_0;
		int32_t L_2604 = V_27;
		int32_t L_2605 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2603, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2604, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2606 = V_1;
		NullCheck(L_2606);
		int32_t L_2607 = 0;
		int32_t L_2608 = (L_2606)->GetAt(static_cast<il2cpp_array_size_t>(L_2607));
		int32_t* L_2609 = V_0;
		int32_t L_2610 = V_27;
		int32_t L_2611 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2609, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2610, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2488, L_2491)), ((int32_t)il2cpp_codegen_multiply(L_2494, L_2497)))), ((int32_t)il2cpp_codegen_multiply(L_2500, L_2503)))), ((int32_t)il2cpp_codegen_multiply(L_2506, L_2509)))), ((int32_t)il2cpp_codegen_multiply(L_2512, L_2515)))), ((int32_t)il2cpp_codegen_multiply(L_2518, L_2521)))), ((int32_t)il2cpp_codegen_multiply(L_2524, L_2527)))), ((int32_t)il2cpp_codegen_multiply(L_2530, L_2533)))), ((int32_t)il2cpp_codegen_multiply(L_2536, L_2539)))), ((int32_t)il2cpp_codegen_multiply(L_2542, L_2545)))), ((int32_t)il2cpp_codegen_multiply(L_2548, L_2551)))), ((int32_t)il2cpp_codegen_multiply(L_2554, L_2557)))), ((int32_t)il2cpp_codegen_multiply(L_2560, L_2563)))), ((int32_t)il2cpp_codegen_multiply(L_2566, L_2569)))), ((int32_t)il2cpp_codegen_multiply(L_2572, L_2575)))), ((int32_t)il2cpp_codegen_multiply(L_2578, L_2581)))), ((int32_t)il2cpp_codegen_multiply(L_2584, L_2587)))), ((int32_t)il2cpp_codegen_multiply(L_2590, L_2593)))), ((int32_t)il2cpp_codegen_multiply(L_2596, L_2599)))), ((int32_t)il2cpp_codegen_multiply(L_2602, L_2605)))), ((int32_t)il2cpp_codegen_multiply(L_2608, L_2611))));
		int32_t* L_2612 = V_0;
		int32_t L_2613 = V_27;
		int32_t* L_2614 = ___0_residual;
		int32_t L_2615 = V_27;
		int32_t L_2616 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2614, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2615), 4)))));
		int32_t L_2617 = V_15;
		int32_t L_2618 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2612, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2613), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2616, ((int32_t)(L_2617>>((int32_t)(L_2618&((int32_t)31)))))));
		int32_t L_2619 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_2619, 1));
	}

IL_1de1:
	{
		int32_t L_2620 = V_27;
		int32_t L_2621 = ___2_length;
		if ((((int32_t)L_2620) < ((int32_t)L_2621)))
		{
			goto IL_1c6d;
		}
	}
	{
		return;
	}

IL_1dea:
	{
		V_28 = 0;
		goto IL_1f55;
	}

IL_1df2:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2622 = V_1;
		NullCheck(L_2622);
		int32_t L_2623 = ((int32_t)19);
		int32_t L_2624 = (L_2622)->GetAt(static_cast<il2cpp_array_size_t>(L_2623));
		int32_t* L_2625 = V_0;
		int32_t L_2626 = V_28;
		int32_t L_2627 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2625, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2626, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2628 = V_1;
		NullCheck(L_2628);
		int32_t L_2629 = ((int32_t)18);
		int32_t L_2630 = (L_2628)->GetAt(static_cast<il2cpp_array_size_t>(L_2629));
		int32_t* L_2631 = V_0;
		int32_t L_2632 = V_28;
		int32_t L_2633 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2631, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2632, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2634 = V_1;
		NullCheck(L_2634);
		int32_t L_2635 = ((int32_t)17);
		int32_t L_2636 = (L_2634)->GetAt(static_cast<il2cpp_array_size_t>(L_2635));
		int32_t* L_2637 = V_0;
		int32_t L_2638 = V_28;
		int32_t L_2639 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2637, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2638, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2640 = V_1;
		NullCheck(L_2640);
		int32_t L_2641 = ((int32_t)16);
		int32_t L_2642 = (L_2640)->GetAt(static_cast<il2cpp_array_size_t>(L_2641));
		int32_t* L_2643 = V_0;
		int32_t L_2644 = V_28;
		int32_t L_2645 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2643, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2644, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2646 = V_1;
		NullCheck(L_2646);
		int32_t L_2647 = ((int32_t)15);
		int32_t L_2648 = (L_2646)->GetAt(static_cast<il2cpp_array_size_t>(L_2647));
		int32_t* L_2649 = V_0;
		int32_t L_2650 = V_28;
		int32_t L_2651 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2649, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2650, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2652 = V_1;
		NullCheck(L_2652);
		int32_t L_2653 = ((int32_t)14);
		int32_t L_2654 = (L_2652)->GetAt(static_cast<il2cpp_array_size_t>(L_2653));
		int32_t* L_2655 = V_0;
		int32_t L_2656 = V_28;
		int32_t L_2657 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2655, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2656, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2658 = V_1;
		NullCheck(L_2658);
		int32_t L_2659 = ((int32_t)13);
		int32_t L_2660 = (L_2658)->GetAt(static_cast<il2cpp_array_size_t>(L_2659));
		int32_t* L_2661 = V_0;
		int32_t L_2662 = V_28;
		int32_t L_2663 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2661, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2662, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2664 = V_1;
		NullCheck(L_2664);
		int32_t L_2665 = ((int32_t)12);
		int32_t L_2666 = (L_2664)->GetAt(static_cast<il2cpp_array_size_t>(L_2665));
		int32_t* L_2667 = V_0;
		int32_t L_2668 = V_28;
		int32_t L_2669 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2667, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2668, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2670 = V_1;
		NullCheck(L_2670);
		int32_t L_2671 = ((int32_t)11);
		int32_t L_2672 = (L_2670)->GetAt(static_cast<il2cpp_array_size_t>(L_2671));
		int32_t* L_2673 = V_0;
		int32_t L_2674 = V_28;
		int32_t L_2675 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2673, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2674, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2676 = V_1;
		NullCheck(L_2676);
		int32_t L_2677 = ((int32_t)10);
		int32_t L_2678 = (L_2676)->GetAt(static_cast<il2cpp_array_size_t>(L_2677));
		int32_t* L_2679 = V_0;
		int32_t L_2680 = V_28;
		int32_t L_2681 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2679, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2680, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2682 = V_1;
		NullCheck(L_2682);
		int32_t L_2683 = ((int32_t)9);
		int32_t L_2684 = (L_2682)->GetAt(static_cast<il2cpp_array_size_t>(L_2683));
		int32_t* L_2685 = V_0;
		int32_t L_2686 = V_28;
		int32_t L_2687 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2685, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2686, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2688 = V_1;
		NullCheck(L_2688);
		int32_t L_2689 = 8;
		int32_t L_2690 = (L_2688)->GetAt(static_cast<il2cpp_array_size_t>(L_2689));
		int32_t* L_2691 = V_0;
		int32_t L_2692 = V_28;
		int32_t L_2693 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2691, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2692, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2694 = V_1;
		NullCheck(L_2694);
		int32_t L_2695 = 7;
		int32_t L_2696 = (L_2694)->GetAt(static_cast<il2cpp_array_size_t>(L_2695));
		int32_t* L_2697 = V_0;
		int32_t L_2698 = V_28;
		int32_t L_2699 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2697, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2698, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2700 = V_1;
		NullCheck(L_2700);
		int32_t L_2701 = 6;
		int32_t L_2702 = (L_2700)->GetAt(static_cast<il2cpp_array_size_t>(L_2701));
		int32_t* L_2703 = V_0;
		int32_t L_2704 = V_28;
		int32_t L_2705 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2703, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2704, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2706 = V_1;
		NullCheck(L_2706);
		int32_t L_2707 = 5;
		int32_t L_2708 = (L_2706)->GetAt(static_cast<il2cpp_array_size_t>(L_2707));
		int32_t* L_2709 = V_0;
		int32_t L_2710 = V_28;
		int32_t L_2711 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2709, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2710, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2712 = V_1;
		NullCheck(L_2712);
		int32_t L_2713 = 4;
		int32_t L_2714 = (L_2712)->GetAt(static_cast<il2cpp_array_size_t>(L_2713));
		int32_t* L_2715 = V_0;
		int32_t L_2716 = V_28;
		int32_t L_2717 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2715, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2716, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2718 = V_1;
		NullCheck(L_2718);
		int32_t L_2719 = 3;
		int32_t L_2720 = (L_2718)->GetAt(static_cast<il2cpp_array_size_t>(L_2719));
		int32_t* L_2721 = V_0;
		int32_t L_2722 = V_28;
		int32_t L_2723 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2721, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2722, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2724 = V_1;
		NullCheck(L_2724);
		int32_t L_2725 = 2;
		int32_t L_2726 = (L_2724)->GetAt(static_cast<il2cpp_array_size_t>(L_2725));
		int32_t* L_2727 = V_0;
		int32_t L_2728 = V_28;
		int32_t L_2729 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2727, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2728, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2730 = V_1;
		NullCheck(L_2730);
		int32_t L_2731 = 1;
		int32_t L_2732 = (L_2730)->GetAt(static_cast<il2cpp_array_size_t>(L_2731));
		int32_t* L_2733 = V_0;
		int32_t L_2734 = V_28;
		int32_t L_2735 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2733, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2734, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2736 = V_1;
		NullCheck(L_2736);
		int32_t L_2737 = 0;
		int32_t L_2738 = (L_2736)->GetAt(static_cast<il2cpp_array_size_t>(L_2737));
		int32_t* L_2739 = V_0;
		int32_t L_2740 = V_28;
		int32_t L_2741 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2739, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2740, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2624, L_2627)), ((int32_t)il2cpp_codegen_multiply(L_2630, L_2633)))), ((int32_t)il2cpp_codegen_multiply(L_2636, L_2639)))), ((int32_t)il2cpp_codegen_multiply(L_2642, L_2645)))), ((int32_t)il2cpp_codegen_multiply(L_2648, L_2651)))), ((int32_t)il2cpp_codegen_multiply(L_2654, L_2657)))), ((int32_t)il2cpp_codegen_multiply(L_2660, L_2663)))), ((int32_t)il2cpp_codegen_multiply(L_2666, L_2669)))), ((int32_t)il2cpp_codegen_multiply(L_2672, L_2675)))), ((int32_t)il2cpp_codegen_multiply(L_2678, L_2681)))), ((int32_t)il2cpp_codegen_multiply(L_2684, L_2687)))), ((int32_t)il2cpp_codegen_multiply(L_2690, L_2693)))), ((int32_t)il2cpp_codegen_multiply(L_2696, L_2699)))), ((int32_t)il2cpp_codegen_multiply(L_2702, L_2705)))), ((int32_t)il2cpp_codegen_multiply(L_2708, L_2711)))), ((int32_t)il2cpp_codegen_multiply(L_2714, L_2717)))), ((int32_t)il2cpp_codegen_multiply(L_2720, L_2723)))), ((int32_t)il2cpp_codegen_multiply(L_2726, L_2729)))), ((int32_t)il2cpp_codegen_multiply(L_2732, L_2735)))), ((int32_t)il2cpp_codegen_multiply(L_2738, L_2741))));
		int32_t* L_2742 = V_0;
		int32_t L_2743 = V_28;
		int32_t* L_2744 = ___0_residual;
		int32_t L_2745 = V_28;
		int32_t L_2746 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2744, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2745), 4)))));
		int32_t L_2747 = V_15;
		int32_t L_2748 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2742, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2743), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2746, ((int32_t)(L_2747>>((int32_t)(L_2748&((int32_t)31)))))));
		int32_t L_2749 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_2749, 1));
	}

IL_1f55:
	{
		int32_t L_2750 = V_28;
		int32_t L_2751 = ___2_length;
		if ((((int32_t)L_2750) < ((int32_t)L_2751)))
		{
			goto IL_1df2;
		}
	}
	{
		return;
	}

IL_1f5e:
	{
		V_29 = 0;
		goto IL_20b8;
	}

IL_1f66:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2752 = V_1;
		NullCheck(L_2752);
		int32_t L_2753 = ((int32_t)18);
		int32_t L_2754 = (L_2752)->GetAt(static_cast<il2cpp_array_size_t>(L_2753));
		int32_t* L_2755 = V_0;
		int32_t L_2756 = V_29;
		int32_t L_2757 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2755, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2756, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2758 = V_1;
		NullCheck(L_2758);
		int32_t L_2759 = ((int32_t)17);
		int32_t L_2760 = (L_2758)->GetAt(static_cast<il2cpp_array_size_t>(L_2759));
		int32_t* L_2761 = V_0;
		int32_t L_2762 = V_29;
		int32_t L_2763 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2761, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2762, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2764 = V_1;
		NullCheck(L_2764);
		int32_t L_2765 = ((int32_t)16);
		int32_t L_2766 = (L_2764)->GetAt(static_cast<il2cpp_array_size_t>(L_2765));
		int32_t* L_2767 = V_0;
		int32_t L_2768 = V_29;
		int32_t L_2769 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2767, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2768, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2770 = V_1;
		NullCheck(L_2770);
		int32_t L_2771 = ((int32_t)15);
		int32_t L_2772 = (L_2770)->GetAt(static_cast<il2cpp_array_size_t>(L_2771));
		int32_t* L_2773 = V_0;
		int32_t L_2774 = V_29;
		int32_t L_2775 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2773, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2774, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2776 = V_1;
		NullCheck(L_2776);
		int32_t L_2777 = ((int32_t)14);
		int32_t L_2778 = (L_2776)->GetAt(static_cast<il2cpp_array_size_t>(L_2777));
		int32_t* L_2779 = V_0;
		int32_t L_2780 = V_29;
		int32_t L_2781 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2779, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2780, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2782 = V_1;
		NullCheck(L_2782);
		int32_t L_2783 = ((int32_t)13);
		int32_t L_2784 = (L_2782)->GetAt(static_cast<il2cpp_array_size_t>(L_2783));
		int32_t* L_2785 = V_0;
		int32_t L_2786 = V_29;
		int32_t L_2787 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2785, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2786, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2788 = V_1;
		NullCheck(L_2788);
		int32_t L_2789 = ((int32_t)12);
		int32_t L_2790 = (L_2788)->GetAt(static_cast<il2cpp_array_size_t>(L_2789));
		int32_t* L_2791 = V_0;
		int32_t L_2792 = V_29;
		int32_t L_2793 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2791, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2792, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2794 = V_1;
		NullCheck(L_2794);
		int32_t L_2795 = ((int32_t)11);
		int32_t L_2796 = (L_2794)->GetAt(static_cast<il2cpp_array_size_t>(L_2795));
		int32_t* L_2797 = V_0;
		int32_t L_2798 = V_29;
		int32_t L_2799 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2797, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2798, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2800 = V_1;
		NullCheck(L_2800);
		int32_t L_2801 = ((int32_t)10);
		int32_t L_2802 = (L_2800)->GetAt(static_cast<il2cpp_array_size_t>(L_2801));
		int32_t* L_2803 = V_0;
		int32_t L_2804 = V_29;
		int32_t L_2805 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2803, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2804, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2806 = V_1;
		NullCheck(L_2806);
		int32_t L_2807 = ((int32_t)9);
		int32_t L_2808 = (L_2806)->GetAt(static_cast<il2cpp_array_size_t>(L_2807));
		int32_t* L_2809 = V_0;
		int32_t L_2810 = V_29;
		int32_t L_2811 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2809, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2810, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2812 = V_1;
		NullCheck(L_2812);
		int32_t L_2813 = 8;
		int32_t L_2814 = (L_2812)->GetAt(static_cast<il2cpp_array_size_t>(L_2813));
		int32_t* L_2815 = V_0;
		int32_t L_2816 = V_29;
		int32_t L_2817 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2815, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2816, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2818 = V_1;
		NullCheck(L_2818);
		int32_t L_2819 = 7;
		int32_t L_2820 = (L_2818)->GetAt(static_cast<il2cpp_array_size_t>(L_2819));
		int32_t* L_2821 = V_0;
		int32_t L_2822 = V_29;
		int32_t L_2823 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2821, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2822, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2824 = V_1;
		NullCheck(L_2824);
		int32_t L_2825 = 6;
		int32_t L_2826 = (L_2824)->GetAt(static_cast<il2cpp_array_size_t>(L_2825));
		int32_t* L_2827 = V_0;
		int32_t L_2828 = V_29;
		int32_t L_2829 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2827, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2828, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2830 = V_1;
		NullCheck(L_2830);
		int32_t L_2831 = 5;
		int32_t L_2832 = (L_2830)->GetAt(static_cast<il2cpp_array_size_t>(L_2831));
		int32_t* L_2833 = V_0;
		int32_t L_2834 = V_29;
		int32_t L_2835 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2833, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2834, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2836 = V_1;
		NullCheck(L_2836);
		int32_t L_2837 = 4;
		int32_t L_2838 = (L_2836)->GetAt(static_cast<il2cpp_array_size_t>(L_2837));
		int32_t* L_2839 = V_0;
		int32_t L_2840 = V_29;
		int32_t L_2841 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2839, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2840, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2842 = V_1;
		NullCheck(L_2842);
		int32_t L_2843 = 3;
		int32_t L_2844 = (L_2842)->GetAt(static_cast<il2cpp_array_size_t>(L_2843));
		int32_t* L_2845 = V_0;
		int32_t L_2846 = V_29;
		int32_t L_2847 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2845, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2846, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2848 = V_1;
		NullCheck(L_2848);
		int32_t L_2849 = 2;
		int32_t L_2850 = (L_2848)->GetAt(static_cast<il2cpp_array_size_t>(L_2849));
		int32_t* L_2851 = V_0;
		int32_t L_2852 = V_29;
		int32_t L_2853 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2851, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2852, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2854 = V_1;
		NullCheck(L_2854);
		int32_t L_2855 = 1;
		int32_t L_2856 = (L_2854)->GetAt(static_cast<il2cpp_array_size_t>(L_2855));
		int32_t* L_2857 = V_0;
		int32_t L_2858 = V_29;
		int32_t L_2859 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2857, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2858, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2860 = V_1;
		NullCheck(L_2860);
		int32_t L_2861 = 0;
		int32_t L_2862 = (L_2860)->GetAt(static_cast<il2cpp_array_size_t>(L_2861));
		int32_t* L_2863 = V_0;
		int32_t L_2864 = V_29;
		int32_t L_2865 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2863, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2864, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2754, L_2757)), ((int32_t)il2cpp_codegen_multiply(L_2760, L_2763)))), ((int32_t)il2cpp_codegen_multiply(L_2766, L_2769)))), ((int32_t)il2cpp_codegen_multiply(L_2772, L_2775)))), ((int32_t)il2cpp_codegen_multiply(L_2778, L_2781)))), ((int32_t)il2cpp_codegen_multiply(L_2784, L_2787)))), ((int32_t)il2cpp_codegen_multiply(L_2790, L_2793)))), ((int32_t)il2cpp_codegen_multiply(L_2796, L_2799)))), ((int32_t)il2cpp_codegen_multiply(L_2802, L_2805)))), ((int32_t)il2cpp_codegen_multiply(L_2808, L_2811)))), ((int32_t)il2cpp_codegen_multiply(L_2814, L_2817)))), ((int32_t)il2cpp_codegen_multiply(L_2820, L_2823)))), ((int32_t)il2cpp_codegen_multiply(L_2826, L_2829)))), ((int32_t)il2cpp_codegen_multiply(L_2832, L_2835)))), ((int32_t)il2cpp_codegen_multiply(L_2838, L_2841)))), ((int32_t)il2cpp_codegen_multiply(L_2844, L_2847)))), ((int32_t)il2cpp_codegen_multiply(L_2850, L_2853)))), ((int32_t)il2cpp_codegen_multiply(L_2856, L_2859)))), ((int32_t)il2cpp_codegen_multiply(L_2862, L_2865))));
		int32_t* L_2866 = V_0;
		int32_t L_2867 = V_29;
		int32_t* L_2868 = ___0_residual;
		int32_t L_2869 = V_29;
		int32_t L_2870 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2868, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2869), 4)))));
		int32_t L_2871 = V_15;
		int32_t L_2872 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2866, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2867), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2870, ((int32_t)(L_2871>>((int32_t)(L_2872&((int32_t)31)))))));
		int32_t L_2873 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_2873, 1));
	}

IL_20b8:
	{
		int32_t L_2874 = V_29;
		int32_t L_2875 = ___2_length;
		if ((((int32_t)L_2874) < ((int32_t)L_2875)))
		{
			goto IL_1f66;
		}
	}
	{
		return;
	}

IL_20c1:
	{
		V_30 = 0;
		goto IL_220a;
	}

IL_20c9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2876 = V_1;
		NullCheck(L_2876);
		int32_t L_2877 = ((int32_t)17);
		int32_t L_2878 = (L_2876)->GetAt(static_cast<il2cpp_array_size_t>(L_2877));
		int32_t* L_2879 = V_0;
		int32_t L_2880 = V_30;
		int32_t L_2881 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2879, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2880, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2882 = V_1;
		NullCheck(L_2882);
		int32_t L_2883 = ((int32_t)16);
		int32_t L_2884 = (L_2882)->GetAt(static_cast<il2cpp_array_size_t>(L_2883));
		int32_t* L_2885 = V_0;
		int32_t L_2886 = V_30;
		int32_t L_2887 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2885, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2886, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2888 = V_1;
		NullCheck(L_2888);
		int32_t L_2889 = ((int32_t)15);
		int32_t L_2890 = (L_2888)->GetAt(static_cast<il2cpp_array_size_t>(L_2889));
		int32_t* L_2891 = V_0;
		int32_t L_2892 = V_30;
		int32_t L_2893 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2891, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2892, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2894 = V_1;
		NullCheck(L_2894);
		int32_t L_2895 = ((int32_t)14);
		int32_t L_2896 = (L_2894)->GetAt(static_cast<il2cpp_array_size_t>(L_2895));
		int32_t* L_2897 = V_0;
		int32_t L_2898 = V_30;
		int32_t L_2899 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2897, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2898, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2900 = V_1;
		NullCheck(L_2900);
		int32_t L_2901 = ((int32_t)13);
		int32_t L_2902 = (L_2900)->GetAt(static_cast<il2cpp_array_size_t>(L_2901));
		int32_t* L_2903 = V_0;
		int32_t L_2904 = V_30;
		int32_t L_2905 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2903, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2904, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2906 = V_1;
		NullCheck(L_2906);
		int32_t L_2907 = ((int32_t)12);
		int32_t L_2908 = (L_2906)->GetAt(static_cast<il2cpp_array_size_t>(L_2907));
		int32_t* L_2909 = V_0;
		int32_t L_2910 = V_30;
		int32_t L_2911 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2909, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2910, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2912 = V_1;
		NullCheck(L_2912);
		int32_t L_2913 = ((int32_t)11);
		int32_t L_2914 = (L_2912)->GetAt(static_cast<il2cpp_array_size_t>(L_2913));
		int32_t* L_2915 = V_0;
		int32_t L_2916 = V_30;
		int32_t L_2917 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2915, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2916, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2918 = V_1;
		NullCheck(L_2918);
		int32_t L_2919 = ((int32_t)10);
		int32_t L_2920 = (L_2918)->GetAt(static_cast<il2cpp_array_size_t>(L_2919));
		int32_t* L_2921 = V_0;
		int32_t L_2922 = V_30;
		int32_t L_2923 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2921, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2922, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2924 = V_1;
		NullCheck(L_2924);
		int32_t L_2925 = ((int32_t)9);
		int32_t L_2926 = (L_2924)->GetAt(static_cast<il2cpp_array_size_t>(L_2925));
		int32_t* L_2927 = V_0;
		int32_t L_2928 = V_30;
		int32_t L_2929 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2927, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2928, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2930 = V_1;
		NullCheck(L_2930);
		int32_t L_2931 = 8;
		int32_t L_2932 = (L_2930)->GetAt(static_cast<il2cpp_array_size_t>(L_2931));
		int32_t* L_2933 = V_0;
		int32_t L_2934 = V_30;
		int32_t L_2935 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2933, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2934, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2936 = V_1;
		NullCheck(L_2936);
		int32_t L_2937 = 7;
		int32_t L_2938 = (L_2936)->GetAt(static_cast<il2cpp_array_size_t>(L_2937));
		int32_t* L_2939 = V_0;
		int32_t L_2940 = V_30;
		int32_t L_2941 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2939, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2940, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2942 = V_1;
		NullCheck(L_2942);
		int32_t L_2943 = 6;
		int32_t L_2944 = (L_2942)->GetAt(static_cast<il2cpp_array_size_t>(L_2943));
		int32_t* L_2945 = V_0;
		int32_t L_2946 = V_30;
		int32_t L_2947 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2945, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2946, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2948 = V_1;
		NullCheck(L_2948);
		int32_t L_2949 = 5;
		int32_t L_2950 = (L_2948)->GetAt(static_cast<il2cpp_array_size_t>(L_2949));
		int32_t* L_2951 = V_0;
		int32_t L_2952 = V_30;
		int32_t L_2953 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2951, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2952, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2954 = V_1;
		NullCheck(L_2954);
		int32_t L_2955 = 4;
		int32_t L_2956 = (L_2954)->GetAt(static_cast<il2cpp_array_size_t>(L_2955));
		int32_t* L_2957 = V_0;
		int32_t L_2958 = V_30;
		int32_t L_2959 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2957, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2958, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2960 = V_1;
		NullCheck(L_2960);
		int32_t L_2961 = 3;
		int32_t L_2962 = (L_2960)->GetAt(static_cast<il2cpp_array_size_t>(L_2961));
		int32_t* L_2963 = V_0;
		int32_t L_2964 = V_30;
		int32_t L_2965 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2963, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2964, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2966 = V_1;
		NullCheck(L_2966);
		int32_t L_2967 = 2;
		int32_t L_2968 = (L_2966)->GetAt(static_cast<il2cpp_array_size_t>(L_2967));
		int32_t* L_2969 = V_0;
		int32_t L_2970 = V_30;
		int32_t L_2971 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2969, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2970, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2972 = V_1;
		NullCheck(L_2972);
		int32_t L_2973 = 1;
		int32_t L_2974 = (L_2972)->GetAt(static_cast<il2cpp_array_size_t>(L_2973));
		int32_t* L_2975 = V_0;
		int32_t L_2976 = V_30;
		int32_t L_2977 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2975, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2976, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2978 = V_1;
		NullCheck(L_2978);
		int32_t L_2979 = 0;
		int32_t L_2980 = (L_2978)->GetAt(static_cast<il2cpp_array_size_t>(L_2979));
		int32_t* L_2981 = V_0;
		int32_t L_2982 = V_30;
		int32_t L_2983 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2981, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2982, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2878, L_2881)), ((int32_t)il2cpp_codegen_multiply(L_2884, L_2887)))), ((int32_t)il2cpp_codegen_multiply(L_2890, L_2893)))), ((int32_t)il2cpp_codegen_multiply(L_2896, L_2899)))), ((int32_t)il2cpp_codegen_multiply(L_2902, L_2905)))), ((int32_t)il2cpp_codegen_multiply(L_2908, L_2911)))), ((int32_t)il2cpp_codegen_multiply(L_2914, L_2917)))), ((int32_t)il2cpp_codegen_multiply(L_2920, L_2923)))), ((int32_t)il2cpp_codegen_multiply(L_2926, L_2929)))), ((int32_t)il2cpp_codegen_multiply(L_2932, L_2935)))), ((int32_t)il2cpp_codegen_multiply(L_2938, L_2941)))), ((int32_t)il2cpp_codegen_multiply(L_2944, L_2947)))), ((int32_t)il2cpp_codegen_multiply(L_2950, L_2953)))), ((int32_t)il2cpp_codegen_multiply(L_2956, L_2959)))), ((int32_t)il2cpp_codegen_multiply(L_2962, L_2965)))), ((int32_t)il2cpp_codegen_multiply(L_2968, L_2971)))), ((int32_t)il2cpp_codegen_multiply(L_2974, L_2977)))), ((int32_t)il2cpp_codegen_multiply(L_2980, L_2983))));
		int32_t* L_2984 = V_0;
		int32_t L_2985 = V_30;
		int32_t* L_2986 = ___0_residual;
		int32_t L_2987 = V_30;
		int32_t L_2988 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2986, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2987), 4)))));
		int32_t L_2989 = V_15;
		int32_t L_2990 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2984, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2985), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2988, ((int32_t)(L_2989>>((int32_t)(L_2990&((int32_t)31)))))));
		int32_t L_2991 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_2991, 1));
	}

IL_220a:
	{
		int32_t L_2992 = V_30;
		int32_t L_2993 = ___2_length;
		if ((((int32_t)L_2992) < ((int32_t)L_2993)))
		{
			goto IL_20c9;
		}
	}
	{
		return;
	}

IL_2213:
	{
		V_31 = 0;
		goto IL_234b;
	}

IL_221b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2994 = V_1;
		NullCheck(L_2994);
		int32_t L_2995 = ((int32_t)16);
		int32_t L_2996 = (L_2994)->GetAt(static_cast<il2cpp_array_size_t>(L_2995));
		int32_t* L_2997 = V_0;
		int32_t L_2998 = V_31;
		int32_t L_2999 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2997, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2998, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3000 = V_1;
		NullCheck(L_3000);
		int32_t L_3001 = ((int32_t)15);
		int32_t L_3002 = (L_3000)->GetAt(static_cast<il2cpp_array_size_t>(L_3001));
		int32_t* L_3003 = V_0;
		int32_t L_3004 = V_31;
		int32_t L_3005 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3003, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3004, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3006 = V_1;
		NullCheck(L_3006);
		int32_t L_3007 = ((int32_t)14);
		int32_t L_3008 = (L_3006)->GetAt(static_cast<il2cpp_array_size_t>(L_3007));
		int32_t* L_3009 = V_0;
		int32_t L_3010 = V_31;
		int32_t L_3011 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3009, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3010, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3012 = V_1;
		NullCheck(L_3012);
		int32_t L_3013 = ((int32_t)13);
		int32_t L_3014 = (L_3012)->GetAt(static_cast<il2cpp_array_size_t>(L_3013));
		int32_t* L_3015 = V_0;
		int32_t L_3016 = V_31;
		int32_t L_3017 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3015, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3016, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3018 = V_1;
		NullCheck(L_3018);
		int32_t L_3019 = ((int32_t)12);
		int32_t L_3020 = (L_3018)->GetAt(static_cast<il2cpp_array_size_t>(L_3019));
		int32_t* L_3021 = V_0;
		int32_t L_3022 = V_31;
		int32_t L_3023 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3021, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3022, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3024 = V_1;
		NullCheck(L_3024);
		int32_t L_3025 = ((int32_t)11);
		int32_t L_3026 = (L_3024)->GetAt(static_cast<il2cpp_array_size_t>(L_3025));
		int32_t* L_3027 = V_0;
		int32_t L_3028 = V_31;
		int32_t L_3029 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3027, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3028, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3030 = V_1;
		NullCheck(L_3030);
		int32_t L_3031 = ((int32_t)10);
		int32_t L_3032 = (L_3030)->GetAt(static_cast<il2cpp_array_size_t>(L_3031));
		int32_t* L_3033 = V_0;
		int32_t L_3034 = V_31;
		int32_t L_3035 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3033, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3034, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3036 = V_1;
		NullCheck(L_3036);
		int32_t L_3037 = ((int32_t)9);
		int32_t L_3038 = (L_3036)->GetAt(static_cast<il2cpp_array_size_t>(L_3037));
		int32_t* L_3039 = V_0;
		int32_t L_3040 = V_31;
		int32_t L_3041 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3039, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3040, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3042 = V_1;
		NullCheck(L_3042);
		int32_t L_3043 = 8;
		int32_t L_3044 = (L_3042)->GetAt(static_cast<il2cpp_array_size_t>(L_3043));
		int32_t* L_3045 = V_0;
		int32_t L_3046 = V_31;
		int32_t L_3047 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3045, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3046, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3048 = V_1;
		NullCheck(L_3048);
		int32_t L_3049 = 7;
		int32_t L_3050 = (L_3048)->GetAt(static_cast<il2cpp_array_size_t>(L_3049));
		int32_t* L_3051 = V_0;
		int32_t L_3052 = V_31;
		int32_t L_3053 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3051, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3052, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3054 = V_1;
		NullCheck(L_3054);
		int32_t L_3055 = 6;
		int32_t L_3056 = (L_3054)->GetAt(static_cast<il2cpp_array_size_t>(L_3055));
		int32_t* L_3057 = V_0;
		int32_t L_3058 = V_31;
		int32_t L_3059 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3057, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3058, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3060 = V_1;
		NullCheck(L_3060);
		int32_t L_3061 = 5;
		int32_t L_3062 = (L_3060)->GetAt(static_cast<il2cpp_array_size_t>(L_3061));
		int32_t* L_3063 = V_0;
		int32_t L_3064 = V_31;
		int32_t L_3065 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3063, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3064, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3066 = V_1;
		NullCheck(L_3066);
		int32_t L_3067 = 4;
		int32_t L_3068 = (L_3066)->GetAt(static_cast<il2cpp_array_size_t>(L_3067));
		int32_t* L_3069 = V_0;
		int32_t L_3070 = V_31;
		int32_t L_3071 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3069, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3070, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3072 = V_1;
		NullCheck(L_3072);
		int32_t L_3073 = 3;
		int32_t L_3074 = (L_3072)->GetAt(static_cast<il2cpp_array_size_t>(L_3073));
		int32_t* L_3075 = V_0;
		int32_t L_3076 = V_31;
		int32_t L_3077 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3075, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3076, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3078 = V_1;
		NullCheck(L_3078);
		int32_t L_3079 = 2;
		int32_t L_3080 = (L_3078)->GetAt(static_cast<il2cpp_array_size_t>(L_3079));
		int32_t* L_3081 = V_0;
		int32_t L_3082 = V_31;
		int32_t L_3083 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3081, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3082, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3084 = V_1;
		NullCheck(L_3084);
		int32_t L_3085 = 1;
		int32_t L_3086 = (L_3084)->GetAt(static_cast<il2cpp_array_size_t>(L_3085));
		int32_t* L_3087 = V_0;
		int32_t L_3088 = V_31;
		int32_t L_3089 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3087, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3088, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3090 = V_1;
		NullCheck(L_3090);
		int32_t L_3091 = 0;
		int32_t L_3092 = (L_3090)->GetAt(static_cast<il2cpp_array_size_t>(L_3091));
		int32_t* L_3093 = V_0;
		int32_t L_3094 = V_31;
		int32_t L_3095 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3093, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3094, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2996, L_2999)), ((int32_t)il2cpp_codegen_multiply(L_3002, L_3005)))), ((int32_t)il2cpp_codegen_multiply(L_3008, L_3011)))), ((int32_t)il2cpp_codegen_multiply(L_3014, L_3017)))), ((int32_t)il2cpp_codegen_multiply(L_3020, L_3023)))), ((int32_t)il2cpp_codegen_multiply(L_3026, L_3029)))), ((int32_t)il2cpp_codegen_multiply(L_3032, L_3035)))), ((int32_t)il2cpp_codegen_multiply(L_3038, L_3041)))), ((int32_t)il2cpp_codegen_multiply(L_3044, L_3047)))), ((int32_t)il2cpp_codegen_multiply(L_3050, L_3053)))), ((int32_t)il2cpp_codegen_multiply(L_3056, L_3059)))), ((int32_t)il2cpp_codegen_multiply(L_3062, L_3065)))), ((int32_t)il2cpp_codegen_multiply(L_3068, L_3071)))), ((int32_t)il2cpp_codegen_multiply(L_3074, L_3077)))), ((int32_t)il2cpp_codegen_multiply(L_3080, L_3083)))), ((int32_t)il2cpp_codegen_multiply(L_3086, L_3089)))), ((int32_t)il2cpp_codegen_multiply(L_3092, L_3095))));
		int32_t* L_3096 = V_0;
		int32_t L_3097 = V_31;
		int32_t* L_3098 = ___0_residual;
		int32_t L_3099 = V_31;
		int32_t L_3100 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3098, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3099), 4)))));
		int32_t L_3101 = V_15;
		int32_t L_3102 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3096, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3097), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3100, ((int32_t)(L_3101>>((int32_t)(L_3102&((int32_t)31)))))));
		int32_t L_3103 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_3103, 1));
	}

IL_234b:
	{
		int32_t L_3104 = V_31;
		int32_t L_3105 = ___2_length;
		if ((((int32_t)L_3104) < ((int32_t)L_3105)))
		{
			goto IL_221b;
		}
	}
	{
		return;
	}

IL_2354:
	{
		V_32 = 0;
		goto IL_247b;
	}

IL_235c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3106 = V_1;
		NullCheck(L_3106);
		int32_t L_3107 = ((int32_t)15);
		int32_t L_3108 = (L_3106)->GetAt(static_cast<il2cpp_array_size_t>(L_3107));
		int32_t* L_3109 = V_0;
		int32_t L_3110 = V_32;
		int32_t L_3111 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3109, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3110, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3112 = V_1;
		NullCheck(L_3112);
		int32_t L_3113 = ((int32_t)14);
		int32_t L_3114 = (L_3112)->GetAt(static_cast<il2cpp_array_size_t>(L_3113));
		int32_t* L_3115 = V_0;
		int32_t L_3116 = V_32;
		int32_t L_3117 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3115, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3116, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3118 = V_1;
		NullCheck(L_3118);
		int32_t L_3119 = ((int32_t)13);
		int32_t L_3120 = (L_3118)->GetAt(static_cast<il2cpp_array_size_t>(L_3119));
		int32_t* L_3121 = V_0;
		int32_t L_3122 = V_32;
		int32_t L_3123 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3122, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3124 = V_1;
		NullCheck(L_3124);
		int32_t L_3125 = ((int32_t)12);
		int32_t L_3126 = (L_3124)->GetAt(static_cast<il2cpp_array_size_t>(L_3125));
		int32_t* L_3127 = V_0;
		int32_t L_3128 = V_32;
		int32_t L_3129 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3128, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3130 = V_1;
		NullCheck(L_3130);
		int32_t L_3131 = ((int32_t)11);
		int32_t L_3132 = (L_3130)->GetAt(static_cast<il2cpp_array_size_t>(L_3131));
		int32_t* L_3133 = V_0;
		int32_t L_3134 = V_32;
		int32_t L_3135 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3133, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3134, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3136 = V_1;
		NullCheck(L_3136);
		int32_t L_3137 = ((int32_t)10);
		int32_t L_3138 = (L_3136)->GetAt(static_cast<il2cpp_array_size_t>(L_3137));
		int32_t* L_3139 = V_0;
		int32_t L_3140 = V_32;
		int32_t L_3141 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3140, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3142 = V_1;
		NullCheck(L_3142);
		int32_t L_3143 = ((int32_t)9);
		int32_t L_3144 = (L_3142)->GetAt(static_cast<il2cpp_array_size_t>(L_3143));
		int32_t* L_3145 = V_0;
		int32_t L_3146 = V_32;
		int32_t L_3147 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3145, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3146, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3148 = V_1;
		NullCheck(L_3148);
		int32_t L_3149 = 8;
		int32_t L_3150 = (L_3148)->GetAt(static_cast<il2cpp_array_size_t>(L_3149));
		int32_t* L_3151 = V_0;
		int32_t L_3152 = V_32;
		int32_t L_3153 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3151, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3152, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3154 = V_1;
		NullCheck(L_3154);
		int32_t L_3155 = 7;
		int32_t L_3156 = (L_3154)->GetAt(static_cast<il2cpp_array_size_t>(L_3155));
		int32_t* L_3157 = V_0;
		int32_t L_3158 = V_32;
		int32_t L_3159 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3157, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3158, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3160 = V_1;
		NullCheck(L_3160);
		int32_t L_3161 = 6;
		int32_t L_3162 = (L_3160)->GetAt(static_cast<il2cpp_array_size_t>(L_3161));
		int32_t* L_3163 = V_0;
		int32_t L_3164 = V_32;
		int32_t L_3165 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3164, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3166 = V_1;
		NullCheck(L_3166);
		int32_t L_3167 = 5;
		int32_t L_3168 = (L_3166)->GetAt(static_cast<il2cpp_array_size_t>(L_3167));
		int32_t* L_3169 = V_0;
		int32_t L_3170 = V_32;
		int32_t L_3171 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3169, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3170, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3172 = V_1;
		NullCheck(L_3172);
		int32_t L_3173 = 4;
		int32_t L_3174 = (L_3172)->GetAt(static_cast<il2cpp_array_size_t>(L_3173));
		int32_t* L_3175 = V_0;
		int32_t L_3176 = V_32;
		int32_t L_3177 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3175, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3176, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3178 = V_1;
		NullCheck(L_3178);
		int32_t L_3179 = 3;
		int32_t L_3180 = (L_3178)->GetAt(static_cast<il2cpp_array_size_t>(L_3179));
		int32_t* L_3181 = V_0;
		int32_t L_3182 = V_32;
		int32_t L_3183 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3181, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3182, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3184 = V_1;
		NullCheck(L_3184);
		int32_t L_3185 = 2;
		int32_t L_3186 = (L_3184)->GetAt(static_cast<il2cpp_array_size_t>(L_3185));
		int32_t* L_3187 = V_0;
		int32_t L_3188 = V_32;
		int32_t L_3189 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3187, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3188, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3190 = V_1;
		NullCheck(L_3190);
		int32_t L_3191 = 1;
		int32_t L_3192 = (L_3190)->GetAt(static_cast<il2cpp_array_size_t>(L_3191));
		int32_t* L_3193 = V_0;
		int32_t L_3194 = V_32;
		int32_t L_3195 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3193, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3194, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3196 = V_1;
		NullCheck(L_3196);
		int32_t L_3197 = 0;
		int32_t L_3198 = (L_3196)->GetAt(static_cast<il2cpp_array_size_t>(L_3197));
		int32_t* L_3199 = V_0;
		int32_t L_3200 = V_32;
		int32_t L_3201 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3199, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3200, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3108, L_3111)), ((int32_t)il2cpp_codegen_multiply(L_3114, L_3117)))), ((int32_t)il2cpp_codegen_multiply(L_3120, L_3123)))), ((int32_t)il2cpp_codegen_multiply(L_3126, L_3129)))), ((int32_t)il2cpp_codegen_multiply(L_3132, L_3135)))), ((int32_t)il2cpp_codegen_multiply(L_3138, L_3141)))), ((int32_t)il2cpp_codegen_multiply(L_3144, L_3147)))), ((int32_t)il2cpp_codegen_multiply(L_3150, L_3153)))), ((int32_t)il2cpp_codegen_multiply(L_3156, L_3159)))), ((int32_t)il2cpp_codegen_multiply(L_3162, L_3165)))), ((int32_t)il2cpp_codegen_multiply(L_3168, L_3171)))), ((int32_t)il2cpp_codegen_multiply(L_3174, L_3177)))), ((int32_t)il2cpp_codegen_multiply(L_3180, L_3183)))), ((int32_t)il2cpp_codegen_multiply(L_3186, L_3189)))), ((int32_t)il2cpp_codegen_multiply(L_3192, L_3195)))), ((int32_t)il2cpp_codegen_multiply(L_3198, L_3201))));
		int32_t* L_3202 = V_0;
		int32_t L_3203 = V_32;
		int32_t* L_3204 = ___0_residual;
		int32_t L_3205 = V_32;
		int32_t L_3206 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3204, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3205), 4)))));
		int32_t L_3207 = V_15;
		int32_t L_3208 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3202, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3203), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3206, ((int32_t)(L_3207>>((int32_t)(L_3208&((int32_t)31)))))));
		int32_t L_3209 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_3209, 1));
	}

IL_247b:
	{
		int32_t L_3210 = V_32;
		int32_t L_3211 = ___2_length;
		if ((((int32_t)L_3210) < ((int32_t)L_3211)))
		{
			goto IL_235c;
		}
	}
	{
		return;
	}

IL_2484:
	{
		V_33 = 0;
		goto IL_259a;
	}

IL_248c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3212 = V_1;
		NullCheck(L_3212);
		int32_t L_3213 = ((int32_t)14);
		int32_t L_3214 = (L_3212)->GetAt(static_cast<il2cpp_array_size_t>(L_3213));
		int32_t* L_3215 = V_0;
		int32_t L_3216 = V_33;
		int32_t L_3217 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3215, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3216, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3218 = V_1;
		NullCheck(L_3218);
		int32_t L_3219 = ((int32_t)13);
		int32_t L_3220 = (L_3218)->GetAt(static_cast<il2cpp_array_size_t>(L_3219));
		int32_t* L_3221 = V_0;
		int32_t L_3222 = V_33;
		int32_t L_3223 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3221, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3222, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3224 = V_1;
		NullCheck(L_3224);
		int32_t L_3225 = ((int32_t)12);
		int32_t L_3226 = (L_3224)->GetAt(static_cast<il2cpp_array_size_t>(L_3225));
		int32_t* L_3227 = V_0;
		int32_t L_3228 = V_33;
		int32_t L_3229 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3227, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3228, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3230 = V_1;
		NullCheck(L_3230);
		int32_t L_3231 = ((int32_t)11);
		int32_t L_3232 = (L_3230)->GetAt(static_cast<il2cpp_array_size_t>(L_3231));
		int32_t* L_3233 = V_0;
		int32_t L_3234 = V_33;
		int32_t L_3235 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3233, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3234, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3236 = V_1;
		NullCheck(L_3236);
		int32_t L_3237 = ((int32_t)10);
		int32_t L_3238 = (L_3236)->GetAt(static_cast<il2cpp_array_size_t>(L_3237));
		int32_t* L_3239 = V_0;
		int32_t L_3240 = V_33;
		int32_t L_3241 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3239, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3240, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3242 = V_1;
		NullCheck(L_3242);
		int32_t L_3243 = ((int32_t)9);
		int32_t L_3244 = (L_3242)->GetAt(static_cast<il2cpp_array_size_t>(L_3243));
		int32_t* L_3245 = V_0;
		int32_t L_3246 = V_33;
		int32_t L_3247 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3245, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3246, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3248 = V_1;
		NullCheck(L_3248);
		int32_t L_3249 = 8;
		int32_t L_3250 = (L_3248)->GetAt(static_cast<il2cpp_array_size_t>(L_3249));
		int32_t* L_3251 = V_0;
		int32_t L_3252 = V_33;
		int32_t L_3253 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3251, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3252, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3254 = V_1;
		NullCheck(L_3254);
		int32_t L_3255 = 7;
		int32_t L_3256 = (L_3254)->GetAt(static_cast<il2cpp_array_size_t>(L_3255));
		int32_t* L_3257 = V_0;
		int32_t L_3258 = V_33;
		int32_t L_3259 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3257, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3258, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3260 = V_1;
		NullCheck(L_3260);
		int32_t L_3261 = 6;
		int32_t L_3262 = (L_3260)->GetAt(static_cast<il2cpp_array_size_t>(L_3261));
		int32_t* L_3263 = V_0;
		int32_t L_3264 = V_33;
		int32_t L_3265 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3263, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3264, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3266 = V_1;
		NullCheck(L_3266);
		int32_t L_3267 = 5;
		int32_t L_3268 = (L_3266)->GetAt(static_cast<il2cpp_array_size_t>(L_3267));
		int32_t* L_3269 = V_0;
		int32_t L_3270 = V_33;
		int32_t L_3271 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3269, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3270, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3272 = V_1;
		NullCheck(L_3272);
		int32_t L_3273 = 4;
		int32_t L_3274 = (L_3272)->GetAt(static_cast<il2cpp_array_size_t>(L_3273));
		int32_t* L_3275 = V_0;
		int32_t L_3276 = V_33;
		int32_t L_3277 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3275, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3276, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3278 = V_1;
		NullCheck(L_3278);
		int32_t L_3279 = 3;
		int32_t L_3280 = (L_3278)->GetAt(static_cast<il2cpp_array_size_t>(L_3279));
		int32_t* L_3281 = V_0;
		int32_t L_3282 = V_33;
		int32_t L_3283 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3281, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3282, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3284 = V_1;
		NullCheck(L_3284);
		int32_t L_3285 = 2;
		int32_t L_3286 = (L_3284)->GetAt(static_cast<il2cpp_array_size_t>(L_3285));
		int32_t* L_3287 = V_0;
		int32_t L_3288 = V_33;
		int32_t L_3289 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3287, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3288, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3290 = V_1;
		NullCheck(L_3290);
		int32_t L_3291 = 1;
		int32_t L_3292 = (L_3290)->GetAt(static_cast<il2cpp_array_size_t>(L_3291));
		int32_t* L_3293 = V_0;
		int32_t L_3294 = V_33;
		int32_t L_3295 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3293, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3294, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3296 = V_1;
		NullCheck(L_3296);
		int32_t L_3297 = 0;
		int32_t L_3298 = (L_3296)->GetAt(static_cast<il2cpp_array_size_t>(L_3297));
		int32_t* L_3299 = V_0;
		int32_t L_3300 = V_33;
		int32_t L_3301 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3299, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3300, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3214, L_3217)), ((int32_t)il2cpp_codegen_multiply(L_3220, L_3223)))), ((int32_t)il2cpp_codegen_multiply(L_3226, L_3229)))), ((int32_t)il2cpp_codegen_multiply(L_3232, L_3235)))), ((int32_t)il2cpp_codegen_multiply(L_3238, L_3241)))), ((int32_t)il2cpp_codegen_multiply(L_3244, L_3247)))), ((int32_t)il2cpp_codegen_multiply(L_3250, L_3253)))), ((int32_t)il2cpp_codegen_multiply(L_3256, L_3259)))), ((int32_t)il2cpp_codegen_multiply(L_3262, L_3265)))), ((int32_t)il2cpp_codegen_multiply(L_3268, L_3271)))), ((int32_t)il2cpp_codegen_multiply(L_3274, L_3277)))), ((int32_t)il2cpp_codegen_multiply(L_3280, L_3283)))), ((int32_t)il2cpp_codegen_multiply(L_3286, L_3289)))), ((int32_t)il2cpp_codegen_multiply(L_3292, L_3295)))), ((int32_t)il2cpp_codegen_multiply(L_3298, L_3301))));
		int32_t* L_3302 = V_0;
		int32_t L_3303 = V_33;
		int32_t* L_3304 = ___0_residual;
		int32_t L_3305 = V_33;
		int32_t L_3306 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3304, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3305), 4)))));
		int32_t L_3307 = V_15;
		int32_t L_3308 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3302, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3303), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3306, ((int32_t)(L_3307>>((int32_t)(L_3308&((int32_t)31)))))));
		int32_t L_3309 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_3309, 1));
	}

IL_259a:
	{
		int32_t L_3310 = V_33;
		int32_t L_3311 = ___2_length;
		if ((((int32_t)L_3310) < ((int32_t)L_3311)))
		{
			goto IL_248c;
		}
	}
	{
		return;
	}

IL_25a3:
	{
		V_34 = 0;
		goto IL_26a8;
	}

IL_25ab:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3312 = V_1;
		NullCheck(L_3312);
		int32_t L_3313 = ((int32_t)13);
		int32_t L_3314 = (L_3312)->GetAt(static_cast<il2cpp_array_size_t>(L_3313));
		int32_t* L_3315 = V_0;
		int32_t L_3316 = V_34;
		int32_t L_3317 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3315, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3316, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3318 = V_1;
		NullCheck(L_3318);
		int32_t L_3319 = ((int32_t)12);
		int32_t L_3320 = (L_3318)->GetAt(static_cast<il2cpp_array_size_t>(L_3319));
		int32_t* L_3321 = V_0;
		int32_t L_3322 = V_34;
		int32_t L_3323 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3321, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3322, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3324 = V_1;
		NullCheck(L_3324);
		int32_t L_3325 = ((int32_t)11);
		int32_t L_3326 = (L_3324)->GetAt(static_cast<il2cpp_array_size_t>(L_3325));
		int32_t* L_3327 = V_0;
		int32_t L_3328 = V_34;
		int32_t L_3329 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3327, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3328, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3330 = V_1;
		NullCheck(L_3330);
		int32_t L_3331 = ((int32_t)10);
		int32_t L_3332 = (L_3330)->GetAt(static_cast<il2cpp_array_size_t>(L_3331));
		int32_t* L_3333 = V_0;
		int32_t L_3334 = V_34;
		int32_t L_3335 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3333, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3334, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3336 = V_1;
		NullCheck(L_3336);
		int32_t L_3337 = ((int32_t)9);
		int32_t L_3338 = (L_3336)->GetAt(static_cast<il2cpp_array_size_t>(L_3337));
		int32_t* L_3339 = V_0;
		int32_t L_3340 = V_34;
		int32_t L_3341 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3339, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3340, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3342 = V_1;
		NullCheck(L_3342);
		int32_t L_3343 = 8;
		int32_t L_3344 = (L_3342)->GetAt(static_cast<il2cpp_array_size_t>(L_3343));
		int32_t* L_3345 = V_0;
		int32_t L_3346 = V_34;
		int32_t L_3347 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3345, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3346, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3348 = V_1;
		NullCheck(L_3348);
		int32_t L_3349 = 7;
		int32_t L_3350 = (L_3348)->GetAt(static_cast<il2cpp_array_size_t>(L_3349));
		int32_t* L_3351 = V_0;
		int32_t L_3352 = V_34;
		int32_t L_3353 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3351, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3352, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3354 = V_1;
		NullCheck(L_3354);
		int32_t L_3355 = 6;
		int32_t L_3356 = (L_3354)->GetAt(static_cast<il2cpp_array_size_t>(L_3355));
		int32_t* L_3357 = V_0;
		int32_t L_3358 = V_34;
		int32_t L_3359 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3357, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3358, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3360 = V_1;
		NullCheck(L_3360);
		int32_t L_3361 = 5;
		int32_t L_3362 = (L_3360)->GetAt(static_cast<il2cpp_array_size_t>(L_3361));
		int32_t* L_3363 = V_0;
		int32_t L_3364 = V_34;
		int32_t L_3365 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3363, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3364, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3366 = V_1;
		NullCheck(L_3366);
		int32_t L_3367 = 4;
		int32_t L_3368 = (L_3366)->GetAt(static_cast<il2cpp_array_size_t>(L_3367));
		int32_t* L_3369 = V_0;
		int32_t L_3370 = V_34;
		int32_t L_3371 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3369, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3370, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3372 = V_1;
		NullCheck(L_3372);
		int32_t L_3373 = 3;
		int32_t L_3374 = (L_3372)->GetAt(static_cast<il2cpp_array_size_t>(L_3373));
		int32_t* L_3375 = V_0;
		int32_t L_3376 = V_34;
		int32_t L_3377 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3375, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3376, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3378 = V_1;
		NullCheck(L_3378);
		int32_t L_3379 = 2;
		int32_t L_3380 = (L_3378)->GetAt(static_cast<il2cpp_array_size_t>(L_3379));
		int32_t* L_3381 = V_0;
		int32_t L_3382 = V_34;
		int32_t L_3383 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3381, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3382, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3384 = V_1;
		NullCheck(L_3384);
		int32_t L_3385 = 1;
		int32_t L_3386 = (L_3384)->GetAt(static_cast<il2cpp_array_size_t>(L_3385));
		int32_t* L_3387 = V_0;
		int32_t L_3388 = V_34;
		int32_t L_3389 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3387, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3388, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3390 = V_1;
		NullCheck(L_3390);
		int32_t L_3391 = 0;
		int32_t L_3392 = (L_3390)->GetAt(static_cast<il2cpp_array_size_t>(L_3391));
		int32_t* L_3393 = V_0;
		int32_t L_3394 = V_34;
		int32_t L_3395 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3393, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3394, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3314, L_3317)), ((int32_t)il2cpp_codegen_multiply(L_3320, L_3323)))), ((int32_t)il2cpp_codegen_multiply(L_3326, L_3329)))), ((int32_t)il2cpp_codegen_multiply(L_3332, L_3335)))), ((int32_t)il2cpp_codegen_multiply(L_3338, L_3341)))), ((int32_t)il2cpp_codegen_multiply(L_3344, L_3347)))), ((int32_t)il2cpp_codegen_multiply(L_3350, L_3353)))), ((int32_t)il2cpp_codegen_multiply(L_3356, L_3359)))), ((int32_t)il2cpp_codegen_multiply(L_3362, L_3365)))), ((int32_t)il2cpp_codegen_multiply(L_3368, L_3371)))), ((int32_t)il2cpp_codegen_multiply(L_3374, L_3377)))), ((int32_t)il2cpp_codegen_multiply(L_3380, L_3383)))), ((int32_t)il2cpp_codegen_multiply(L_3386, L_3389)))), ((int32_t)il2cpp_codegen_multiply(L_3392, L_3395))));
		int32_t* L_3396 = V_0;
		int32_t L_3397 = V_34;
		int32_t* L_3398 = ___0_residual;
		int32_t L_3399 = V_34;
		int32_t L_3400 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3398, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3399), 4)))));
		int32_t L_3401 = V_15;
		int32_t L_3402 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3396, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3397), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3400, ((int32_t)(L_3401>>((int32_t)(L_3402&((int32_t)31)))))));
		int32_t L_3403 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add(L_3403, 1));
	}

IL_26a8:
	{
		int32_t L_3404 = V_34;
		int32_t L_3405 = ___2_length;
		if ((((int32_t)L_3404) < ((int32_t)L_3405)))
		{
			goto IL_25ab;
		}
	}
	{
		return;
	}

IL_26b1:
	{
		V_35 = 0;
		goto IL_27a5;
	}

IL_26b9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3406 = V_1;
		NullCheck(L_3406);
		int32_t L_3407 = ((int32_t)12);
		int32_t L_3408 = (L_3406)->GetAt(static_cast<il2cpp_array_size_t>(L_3407));
		int32_t* L_3409 = V_0;
		int32_t L_3410 = V_35;
		int32_t L_3411 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3409, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3410, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3412 = V_1;
		NullCheck(L_3412);
		int32_t L_3413 = ((int32_t)11);
		int32_t L_3414 = (L_3412)->GetAt(static_cast<il2cpp_array_size_t>(L_3413));
		int32_t* L_3415 = V_0;
		int32_t L_3416 = V_35;
		int32_t L_3417 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3415, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3416, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3418 = V_1;
		NullCheck(L_3418);
		int32_t L_3419 = ((int32_t)10);
		int32_t L_3420 = (L_3418)->GetAt(static_cast<il2cpp_array_size_t>(L_3419));
		int32_t* L_3421 = V_0;
		int32_t L_3422 = V_35;
		int32_t L_3423 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3421, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3422, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3424 = V_1;
		NullCheck(L_3424);
		int32_t L_3425 = ((int32_t)9);
		int32_t L_3426 = (L_3424)->GetAt(static_cast<il2cpp_array_size_t>(L_3425));
		int32_t* L_3427 = V_0;
		int32_t L_3428 = V_35;
		int32_t L_3429 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3427, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3428, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3430 = V_1;
		NullCheck(L_3430);
		int32_t L_3431 = 8;
		int32_t L_3432 = (L_3430)->GetAt(static_cast<il2cpp_array_size_t>(L_3431));
		int32_t* L_3433 = V_0;
		int32_t L_3434 = V_35;
		int32_t L_3435 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3433, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3434, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3436 = V_1;
		NullCheck(L_3436);
		int32_t L_3437 = 7;
		int32_t L_3438 = (L_3436)->GetAt(static_cast<il2cpp_array_size_t>(L_3437));
		int32_t* L_3439 = V_0;
		int32_t L_3440 = V_35;
		int32_t L_3441 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3439, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3440, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3442 = V_1;
		NullCheck(L_3442);
		int32_t L_3443 = 6;
		int32_t L_3444 = (L_3442)->GetAt(static_cast<il2cpp_array_size_t>(L_3443));
		int32_t* L_3445 = V_0;
		int32_t L_3446 = V_35;
		int32_t L_3447 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3445, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3446, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3448 = V_1;
		NullCheck(L_3448);
		int32_t L_3449 = 5;
		int32_t L_3450 = (L_3448)->GetAt(static_cast<il2cpp_array_size_t>(L_3449));
		int32_t* L_3451 = V_0;
		int32_t L_3452 = V_35;
		int32_t L_3453 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3451, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3452, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3454 = V_1;
		NullCheck(L_3454);
		int32_t L_3455 = 4;
		int32_t L_3456 = (L_3454)->GetAt(static_cast<il2cpp_array_size_t>(L_3455));
		int32_t* L_3457 = V_0;
		int32_t L_3458 = V_35;
		int32_t L_3459 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3457, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3458, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3460 = V_1;
		NullCheck(L_3460);
		int32_t L_3461 = 3;
		int32_t L_3462 = (L_3460)->GetAt(static_cast<il2cpp_array_size_t>(L_3461));
		int32_t* L_3463 = V_0;
		int32_t L_3464 = V_35;
		int32_t L_3465 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3463, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3464, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3466 = V_1;
		NullCheck(L_3466);
		int32_t L_3467 = 2;
		int32_t L_3468 = (L_3466)->GetAt(static_cast<il2cpp_array_size_t>(L_3467));
		int32_t* L_3469 = V_0;
		int32_t L_3470 = V_35;
		int32_t L_3471 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3469, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3470, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3472 = V_1;
		NullCheck(L_3472);
		int32_t L_3473 = 1;
		int32_t L_3474 = (L_3472)->GetAt(static_cast<il2cpp_array_size_t>(L_3473));
		int32_t* L_3475 = V_0;
		int32_t L_3476 = V_35;
		int32_t L_3477 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3475, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3476, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3478 = V_1;
		NullCheck(L_3478);
		int32_t L_3479 = 0;
		int32_t L_3480 = (L_3478)->GetAt(static_cast<il2cpp_array_size_t>(L_3479));
		int32_t* L_3481 = V_0;
		int32_t L_3482 = V_35;
		int32_t L_3483 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3481, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3482, 1))), 4)))));
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3408, L_3411)), ((int32_t)il2cpp_codegen_multiply(L_3414, L_3417)))), ((int32_t)il2cpp_codegen_multiply(L_3420, L_3423)))), ((int32_t)il2cpp_codegen_multiply(L_3426, L_3429)))), ((int32_t)il2cpp_codegen_multiply(L_3432, L_3435)))), ((int32_t)il2cpp_codegen_multiply(L_3438, L_3441)))), ((int32_t)il2cpp_codegen_multiply(L_3444, L_3447)))), ((int32_t)il2cpp_codegen_multiply(L_3450, L_3453)))), ((int32_t)il2cpp_codegen_multiply(L_3456, L_3459)))), ((int32_t)il2cpp_codegen_multiply(L_3462, L_3465)))), ((int32_t)il2cpp_codegen_multiply(L_3468, L_3471)))), ((int32_t)il2cpp_codegen_multiply(L_3474, L_3477)))), ((int32_t)il2cpp_codegen_multiply(L_3480, L_3483))));
		int32_t* L_3484 = V_0;
		int32_t L_3485 = V_35;
		int32_t* L_3486 = ___0_residual;
		int32_t L_3487 = V_35;
		int32_t L_3488 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3486, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3487), 4)))));
		int32_t L_3489 = V_15;
		int32_t L_3490 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3484, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3485), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3488, ((int32_t)(L_3489>>((int32_t)(L_3490&((int32_t)31)))))));
		int32_t L_3491 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_3491, 1));
	}

IL_27a5:
	{
		int32_t L_3492 = V_35;
		int32_t L_3493 = ___2_length;
		if ((((int32_t)L_3492) < ((int32_t)L_3493)))
		{
			goto IL_26b9;
		}
	}

IL_27ad:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlacSubFrameLPC_RestoreLPCSignal64_mDB4D7D145773FEEC21A7EE308FF6956486A0DDC5 (FlacSubFrameLPC_tC2515256A2F55DC1EA742AC2EB911AEB4858FEC7* __this, int32_t* ___0_residual, int32_t* ___1_destination, int32_t ___2_length, int32_t ___3_order, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_qlpCoeff, int32_t ___5_lpcShiftNeeded, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	{
		int32_t* L_0 = ___1_destination;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___4_qlpCoeff;
		V_1 = L_1;
		int32_t L_2 = ___3_order;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)12))))
		{
			goto IL_0796;
		}
	}
	{
		int32_t L_3 = ___3_order;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, 1)))
		{
			case 0:
			{
				goto IL_075b;
			}
			case 1:
			{
				goto IL_070f;
			}
			case 2:
			{
				goto IL_06b2;
			}
			case 3:
			{
				goto IL_0644;
			}
			case 4:
			{
				goto IL_05c5;
			}
			case 5:
			{
				goto IL_052f;
			}
			case 6:
			{
				goto IL_0488;
			}
			case 7:
			{
				goto IL_03d0;
			}
			case 8:
			{
				goto IL_0306;
			}
			case 9:
			{
				goto IL_0229;
			}
			case 10:
			{
				goto IL_0139;
			}
			case 11:
			{
				goto IL_0048;
			}
		}
	}
	{
		return;
	}

IL_0048:
	{
		V_3 = 0;
		goto IL_0131;
	}

IL_004f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)11);
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t* L_7 = V_0;
		int32_t L_8 = V_3;
		int32_t L_9 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)10);
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t* L_13 = V_0;
		int32_t L_14 = V_3;
		int32_t L_15 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = ((int32_t)9);
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t* L_19 = V_0;
		int32_t L_20 = V_3;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 8;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t* L_25 = V_0;
		int32_t L_26 = V_3;
		int32_t L_27 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = 7;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t* L_31 = V_0;
		int32_t L_32 = V_3;
		int32_t L_33 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_32, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 6;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t* L_37 = V_0;
		int32_t L_38 = V_3;
		int32_t L_39 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_38, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = 5;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t* L_43 = V_0;
		int32_t L_44 = V_3;
		int32_t L_45 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_44, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 4;
		int32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t* L_49 = V_0;
		int32_t L_50 = V_3;
		int32_t L_51 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_50, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 3;
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t* L_55 = V_0;
		int32_t L_56 = V_3;
		int32_t L_57 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_56, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 2;
		int32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		int32_t* L_61 = V_0;
		int32_t L_62 = V_3;
		int32_t L_63 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_62, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65 = 1;
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t* L_67 = V_0;
		int32_t L_68 = V_3;
		int32_t L_69 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_68, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71 = 0;
		int32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		int32_t* L_73 = V_0;
		int32_t L_74 = V_3;
		int32_t L_75 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_73, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_74, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_6), ((int64_t)L_9))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_12), ((int64_t)L_15))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_18), ((int64_t)L_21))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_24), ((int64_t)L_27))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_30), ((int64_t)L_33))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_36), ((int64_t)L_39))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_42), ((int64_t)L_45))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_48), ((int64_t)L_51))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_54), ((int64_t)L_57))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_60), ((int64_t)L_63))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_66), ((int64_t)L_69))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_72), ((int64_t)L_75)))));
		int32_t* L_76 = V_0;
		int32_t L_77 = V_3;
		int32_t* L_78 = ___0_residual;
		int32_t L_79 = V_3;
		int32_t L_80 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4)))));
		int64_t L_81 = V_2;
		int32_t L_82 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_76, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_77), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_80, ((int32_t)((int64_t)(L_81>>((int32_t)(L_82&((int32_t)63))))))));
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0131:
	{
		int32_t L_84 = V_3;
		int32_t L_85 = ___2_length;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_0139:
	{
		V_4 = 0;
		goto IL_0220;
	}

IL_0141:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_1;
		NullCheck(L_86);
		int32_t L_87 = ((int32_t)10);
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t* L_89 = V_0;
		int32_t L_90 = V_4;
		int32_t L_91 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_90, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_1;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)9);
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		int32_t* L_95 = V_0;
		int32_t L_96 = V_4;
		int32_t L_97 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_95, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_96, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_1;
		NullCheck(L_98);
		int32_t L_99 = 8;
		int32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t* L_101 = V_0;
		int32_t L_102 = V_4;
		int32_t L_103 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_101, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_102, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_1;
		NullCheck(L_104);
		int32_t L_105 = 7;
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t* L_107 = V_0;
		int32_t L_108 = V_4;
		int32_t L_109 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_107, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_108, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_1;
		NullCheck(L_110);
		int32_t L_111 = 6;
		int32_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		int32_t* L_113 = V_0;
		int32_t L_114 = V_4;
		int32_t L_115 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_113, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_114, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = V_1;
		NullCheck(L_116);
		int32_t L_117 = 5;
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t* L_119 = V_0;
		int32_t L_120 = V_4;
		int32_t L_121 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_119, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_120, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = V_1;
		NullCheck(L_122);
		int32_t L_123 = 4;
		int32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t* L_125 = V_0;
		int32_t L_126 = V_4;
		int32_t L_127 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_125, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_126, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = V_1;
		NullCheck(L_128);
		int32_t L_129 = 3;
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t* L_131 = V_0;
		int32_t L_132 = V_4;
		int32_t L_133 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_131, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_132, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_134 = V_1;
		NullCheck(L_134);
		int32_t L_135 = 2;
		int32_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		int32_t* L_137 = V_0;
		int32_t L_138 = V_4;
		int32_t L_139 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_137, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_138, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = V_1;
		NullCheck(L_140);
		int32_t L_141 = 1;
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t* L_143 = V_0;
		int32_t L_144 = V_4;
		int32_t L_145 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_143, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_144, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = V_1;
		NullCheck(L_146);
		int32_t L_147 = 0;
		int32_t L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		int32_t* L_149 = V_0;
		int32_t L_150 = V_4;
		int32_t L_151 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_149, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_150, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_88), ((int64_t)L_91))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_94), ((int64_t)L_97))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_100), ((int64_t)L_103))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_106), ((int64_t)L_109))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_112), ((int64_t)L_115))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_118), ((int64_t)L_121))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_124), ((int64_t)L_127))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_130), ((int64_t)L_133))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_136), ((int64_t)L_139))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_142), ((int64_t)L_145))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_148), ((int64_t)L_151)))));
		int32_t* L_152 = V_0;
		int32_t L_153 = V_4;
		int32_t* L_154 = ___0_residual;
		int32_t L_155 = V_4;
		int32_t L_156 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_154, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_155), 4)))));
		int64_t L_157 = V_2;
		int32_t L_158 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_152, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_153), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_156, ((int32_t)((int64_t)(L_157>>((int32_t)(L_158&((int32_t)63))))))));
		int32_t L_159 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_159, 1));
	}

IL_0220:
	{
		int32_t L_160 = V_4;
		int32_t L_161 = ___2_length;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_0141;
		}
	}
	{
		return;
	}

IL_0229:
	{
		V_5 = 0;
		goto IL_02fd;
	}

IL_0231:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = V_1;
		NullCheck(L_162);
		int32_t L_163 = ((int32_t)9);
		int32_t L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		int32_t* L_165 = V_0;
		int32_t L_166 = V_5;
		int32_t L_167 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_166, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = V_1;
		NullCheck(L_168);
		int32_t L_169 = 8;
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t* L_171 = V_0;
		int32_t L_172 = V_5;
		int32_t L_173 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_171, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_172, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = V_1;
		NullCheck(L_174);
		int32_t L_175 = 7;
		int32_t L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		int32_t* L_177 = V_0;
		int32_t L_178 = V_5;
		int32_t L_179 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_178, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = V_1;
		NullCheck(L_180);
		int32_t L_181 = 6;
		int32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t* L_183 = V_0;
		int32_t L_184 = V_5;
		int32_t L_185 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_183, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_184, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_1;
		NullCheck(L_186);
		int32_t L_187 = 5;
		int32_t L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		int32_t* L_189 = V_0;
		int32_t L_190 = V_5;
		int32_t L_191 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_189, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_190, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_1;
		NullCheck(L_192);
		int32_t L_193 = 4;
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t* L_195 = V_0;
		int32_t L_196 = V_5;
		int32_t L_197 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_195, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_196, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_1;
		NullCheck(L_198);
		int32_t L_199 = 3;
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		int32_t* L_201 = V_0;
		int32_t L_202 = V_5;
		int32_t L_203 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_201, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_202, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = V_1;
		NullCheck(L_204);
		int32_t L_205 = 2;
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		int32_t* L_207 = V_0;
		int32_t L_208 = V_5;
		int32_t L_209 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_207, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_208, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = V_1;
		NullCheck(L_210);
		int32_t L_211 = 1;
		int32_t L_212 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		int32_t* L_213 = V_0;
		int32_t L_214 = V_5;
		int32_t L_215 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_213, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_214, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = V_1;
		NullCheck(L_216);
		int32_t L_217 = 0;
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		int32_t* L_219 = V_0;
		int32_t L_220 = V_5;
		int32_t L_221 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_219, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_220, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_164), ((int64_t)L_167))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_170), ((int64_t)L_173))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_176), ((int64_t)L_179))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_182), ((int64_t)L_185))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_188), ((int64_t)L_191))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_194), ((int64_t)L_197))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_200), ((int64_t)L_203))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_206), ((int64_t)L_209))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_212), ((int64_t)L_215))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_218), ((int64_t)L_221)))));
		int32_t* L_222 = V_0;
		int32_t L_223 = V_5;
		int32_t* L_224 = ___0_residual;
		int32_t L_225 = V_5;
		int32_t L_226 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_224, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_225), 4)))));
		int64_t L_227 = V_2;
		int32_t L_228 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_222, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_223), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_226, ((int32_t)((int64_t)(L_227>>((int32_t)(L_228&((int32_t)63))))))));
		int32_t L_229 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_229, 1));
	}

IL_02fd:
	{
		int32_t L_230 = V_5;
		int32_t L_231 = ___2_length;
		if ((((int32_t)L_230) < ((int32_t)L_231)))
		{
			goto IL_0231;
		}
	}
	{
		return;
	}

IL_0306:
	{
		V_6 = 0;
		goto IL_03c7;
	}

IL_030e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_1;
		NullCheck(L_232);
		int32_t L_233 = 8;
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t* L_235 = V_0;
		int32_t L_236 = V_6;
		int32_t L_237 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_235, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_236, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_1;
		NullCheck(L_238);
		int32_t L_239 = 7;
		int32_t L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		int32_t* L_241 = V_0;
		int32_t L_242 = V_6;
		int32_t L_243 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_241, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_242, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = V_1;
		NullCheck(L_244);
		int32_t L_245 = 6;
		int32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		int32_t* L_247 = V_0;
		int32_t L_248 = V_6;
		int32_t L_249 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_247, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_248, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_250 = V_1;
		NullCheck(L_250);
		int32_t L_251 = 5;
		int32_t L_252 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		int32_t* L_253 = V_0;
		int32_t L_254 = V_6;
		int32_t L_255 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_253, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_254, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = V_1;
		NullCheck(L_256);
		int32_t L_257 = 4;
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t* L_259 = V_0;
		int32_t L_260 = V_6;
		int32_t L_261 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_260, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_262 = V_1;
		NullCheck(L_262);
		int32_t L_263 = 3;
		int32_t L_264 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		int32_t* L_265 = V_0;
		int32_t L_266 = V_6;
		int32_t L_267 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_265, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_266, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = V_1;
		NullCheck(L_268);
		int32_t L_269 = 2;
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t* L_271 = V_0;
		int32_t L_272 = V_6;
		int32_t L_273 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_271, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_272, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_274 = V_1;
		NullCheck(L_274);
		int32_t L_275 = 1;
		int32_t L_276 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		int32_t* L_277 = V_0;
		int32_t L_278 = V_6;
		int32_t L_279 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_277, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_278, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = V_1;
		NullCheck(L_280);
		int32_t L_281 = 0;
		int32_t L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t* L_283 = V_0;
		int32_t L_284 = V_6;
		int32_t L_285 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_283, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_284, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_234), ((int64_t)L_237))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_240), ((int64_t)L_243))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_246), ((int64_t)L_249))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_252), ((int64_t)L_255))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_258), ((int64_t)L_261))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_264), ((int64_t)L_267))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_270), ((int64_t)L_273))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_276), ((int64_t)L_279))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_282), ((int64_t)L_285)))));
		int32_t* L_286 = V_0;
		int32_t L_287 = V_6;
		int32_t* L_288 = ___0_residual;
		int32_t L_289 = V_6;
		int32_t L_290 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_288, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_289), 4)))));
		int64_t L_291 = V_2;
		int32_t L_292 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_286, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_287), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_290, ((int32_t)((int64_t)(L_291>>((int32_t)(L_292&((int32_t)63))))))));
		int32_t L_293 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_293, 1));
	}

IL_03c7:
	{
		int32_t L_294 = V_6;
		int32_t L_295 = ___2_length;
		if ((((int32_t)L_294) < ((int32_t)L_295)))
		{
			goto IL_030e;
		}
	}
	{
		return;
	}

IL_03d0:
	{
		V_7 = 0;
		goto IL_047f;
	}

IL_03d8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = V_1;
		NullCheck(L_296);
		int32_t L_297 = 7;
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		int32_t* L_299 = V_0;
		int32_t L_300 = V_7;
		int32_t L_301 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_299, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_300, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_302 = V_1;
		NullCheck(L_302);
		int32_t L_303 = 6;
		int32_t L_304 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		int32_t* L_305 = V_0;
		int32_t L_306 = V_7;
		int32_t L_307 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_305, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_306, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = V_1;
		NullCheck(L_308);
		int32_t L_309 = 5;
		int32_t L_310 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		int32_t* L_311 = V_0;
		int32_t L_312 = V_7;
		int32_t L_313 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_311, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_312, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_314 = V_1;
		NullCheck(L_314);
		int32_t L_315 = 4;
		int32_t L_316 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		int32_t* L_317 = V_0;
		int32_t L_318 = V_7;
		int32_t L_319 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_317, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_318, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = V_1;
		NullCheck(L_320);
		int32_t L_321 = 3;
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		int32_t* L_323 = V_0;
		int32_t L_324 = V_7;
		int32_t L_325 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_323, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_324, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = V_1;
		NullCheck(L_326);
		int32_t L_327 = 2;
		int32_t L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		int32_t* L_329 = V_0;
		int32_t L_330 = V_7;
		int32_t L_331 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_329, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_330, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_1;
		NullCheck(L_332);
		int32_t L_333 = 1;
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t* L_335 = V_0;
		int32_t L_336 = V_7;
		int32_t L_337 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_335, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_336, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_1;
		NullCheck(L_338);
		int32_t L_339 = 0;
		int32_t L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		int32_t* L_341 = V_0;
		int32_t L_342 = V_7;
		int32_t L_343 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_341, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_342, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_298), ((int64_t)L_301))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_304), ((int64_t)L_307))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_310), ((int64_t)L_313))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_316), ((int64_t)L_319))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_322), ((int64_t)L_325))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_328), ((int64_t)L_331))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_334), ((int64_t)L_337))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_340), ((int64_t)L_343)))));
		int32_t* L_344 = V_0;
		int32_t L_345 = V_7;
		int32_t* L_346 = ___0_residual;
		int32_t L_347 = V_7;
		int32_t L_348 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_346, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_347), 4)))));
		int64_t L_349 = V_2;
		int32_t L_350 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_344, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_345), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_348, ((int32_t)((int64_t)(L_349>>((int32_t)(L_350&((int32_t)63))))))));
		int32_t L_351 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_351, 1));
	}

IL_047f:
	{
		int32_t L_352 = V_7;
		int32_t L_353 = ___2_length;
		if ((((int32_t)L_352) < ((int32_t)L_353)))
		{
			goto IL_03d8;
		}
	}
	{
		return;
	}

IL_0488:
	{
		V_8 = 0;
		goto IL_0526;
	}

IL_0490:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_354 = V_1;
		NullCheck(L_354);
		int32_t L_355 = 6;
		int32_t L_356 = (L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		int32_t* L_357 = V_0;
		int32_t L_358 = V_8;
		int32_t L_359 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_357, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_358, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = V_1;
		NullCheck(L_360);
		int32_t L_361 = 5;
		int32_t L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t* L_363 = V_0;
		int32_t L_364 = V_8;
		int32_t L_365 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_363, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_364, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_366 = V_1;
		NullCheck(L_366);
		int32_t L_367 = 4;
		int32_t L_368 = (L_366)->GetAt(static_cast<il2cpp_array_size_t>(L_367));
		int32_t* L_369 = V_0;
		int32_t L_370 = V_8;
		int32_t L_371 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_369, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_370, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = V_1;
		NullCheck(L_372);
		int32_t L_373 = 3;
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		int32_t* L_375 = V_0;
		int32_t L_376 = V_8;
		int32_t L_377 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_375, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_376, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = V_1;
		NullCheck(L_378);
		int32_t L_379 = 2;
		int32_t L_380 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_379));
		int32_t* L_381 = V_0;
		int32_t L_382 = V_8;
		int32_t L_383 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_381, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_382, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = V_1;
		NullCheck(L_384);
		int32_t L_385 = 1;
		int32_t L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		int32_t* L_387 = V_0;
		int32_t L_388 = V_8;
		int32_t L_389 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_387, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_388, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_390 = V_1;
		NullCheck(L_390);
		int32_t L_391 = 0;
		int32_t L_392 = (L_390)->GetAt(static_cast<il2cpp_array_size_t>(L_391));
		int32_t* L_393 = V_0;
		int32_t L_394 = V_8;
		int32_t L_395 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_393, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_394, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_356), ((int64_t)L_359))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_362), ((int64_t)L_365))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_368), ((int64_t)L_371))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_374), ((int64_t)L_377))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_380), ((int64_t)L_383))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_386), ((int64_t)L_389))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_392), ((int64_t)L_395)))));
		int32_t* L_396 = V_0;
		int32_t L_397 = V_8;
		int32_t* L_398 = ___0_residual;
		int32_t L_399 = V_8;
		int32_t L_400 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_398, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_399), 4)))));
		int64_t L_401 = V_2;
		int32_t L_402 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_396, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_397), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_400, ((int32_t)((int64_t)(L_401>>((int32_t)(L_402&((int32_t)63))))))));
		int32_t L_403 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_403, 1));
	}

IL_0526:
	{
		int32_t L_404 = V_8;
		int32_t L_405 = ___2_length;
		if ((((int32_t)L_404) < ((int32_t)L_405)))
		{
			goto IL_0490;
		}
	}
	{
		return;
	}

IL_052f:
	{
		V_9 = 0;
		goto IL_05bc;
	}

IL_0537:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_406 = V_1;
		NullCheck(L_406);
		int32_t L_407 = 5;
		int32_t L_408 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_407));
		int32_t* L_409 = V_0;
		int32_t L_410 = V_9;
		int32_t L_411 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_409, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_410, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = V_1;
		NullCheck(L_412);
		int32_t L_413 = 4;
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t* L_415 = V_0;
		int32_t L_416 = V_9;
		int32_t L_417 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_415, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_416, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = V_1;
		NullCheck(L_418);
		int32_t L_419 = 3;
		int32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		int32_t* L_421 = V_0;
		int32_t L_422 = V_9;
		int32_t L_423 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_421, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_422, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = V_1;
		NullCheck(L_424);
		int32_t L_425 = 2;
		int32_t L_426 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		int32_t* L_427 = V_0;
		int32_t L_428 = V_9;
		int32_t L_429 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_427, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_428, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_430 = V_1;
		NullCheck(L_430);
		int32_t L_431 = 1;
		int32_t L_432 = (L_430)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		int32_t* L_433 = V_0;
		int32_t L_434 = V_9;
		int32_t L_435 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_433, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_434, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = V_1;
		NullCheck(L_436);
		int32_t L_437 = 0;
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		int32_t* L_439 = V_0;
		int32_t L_440 = V_9;
		int32_t L_441 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_439, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_440, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_408), ((int64_t)L_411))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_414), ((int64_t)L_417))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_420), ((int64_t)L_423))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_426), ((int64_t)L_429))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_432), ((int64_t)L_435))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_438), ((int64_t)L_441)))));
		int32_t* L_442 = V_0;
		int32_t L_443 = V_9;
		int32_t* L_444 = ___0_residual;
		int32_t L_445 = V_9;
		int32_t L_446 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_444, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_445), 4)))));
		int64_t L_447 = V_2;
		int32_t L_448 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_442, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_443), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_446, ((int32_t)((int64_t)(L_447>>((int32_t)(L_448&((int32_t)63))))))));
		int32_t L_449 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_449, 1));
	}

IL_05bc:
	{
		int32_t L_450 = V_9;
		int32_t L_451 = ___2_length;
		if ((((int32_t)L_450) < ((int32_t)L_451)))
		{
			goto IL_0537;
		}
	}
	{
		return;
	}

IL_05c5:
	{
		V_10 = 0;
		goto IL_063e;
	}

IL_05ca:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = V_1;
		NullCheck(L_452);
		int32_t L_453 = 4;
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		int32_t* L_455 = V_0;
		int32_t L_456 = V_10;
		int32_t L_457 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_455, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_456, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = V_1;
		NullCheck(L_458);
		int32_t L_459 = 3;
		int32_t L_460 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		int32_t* L_461 = V_0;
		int32_t L_462 = V_10;
		int32_t L_463 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_461, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_462, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = V_1;
		NullCheck(L_464);
		int32_t L_465 = 2;
		int32_t L_466 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		int32_t* L_467 = V_0;
		int32_t L_468 = V_10;
		int32_t L_469 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_467, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_468, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_470 = V_1;
		NullCheck(L_470);
		int32_t L_471 = 1;
		int32_t L_472 = (L_470)->GetAt(static_cast<il2cpp_array_size_t>(L_471));
		int32_t* L_473 = V_0;
		int32_t L_474 = V_10;
		int32_t L_475 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_473, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_474, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = V_1;
		NullCheck(L_476);
		int32_t L_477 = 0;
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		int32_t* L_479 = V_0;
		int32_t L_480 = V_10;
		int32_t L_481 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_479, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_480, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_454), ((int64_t)L_457))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_460), ((int64_t)L_463))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_466), ((int64_t)L_469))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_472), ((int64_t)L_475))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_478), ((int64_t)L_481)))));
		int32_t* L_482 = V_0;
		int32_t L_483 = V_10;
		int32_t* L_484 = ___0_residual;
		int32_t L_485 = V_10;
		int32_t L_486 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_484, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_485), 4)))));
		int64_t L_487 = V_2;
		int32_t L_488 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_482, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_483), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_486, ((int32_t)((int64_t)(L_487>>((int32_t)(L_488&((int32_t)63))))))));
		int32_t L_489 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_489, 1));
	}

IL_063e:
	{
		int32_t L_490 = V_10;
		int32_t L_491 = ___2_length;
		if ((((int32_t)L_490) < ((int32_t)L_491)))
		{
			goto IL_05ca;
		}
	}
	{
		return;
	}

IL_0644:
	{
		V_11 = 0;
		goto IL_06ac;
	}

IL_0649:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = V_1;
		NullCheck(L_492);
		int32_t L_493 = 3;
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		int32_t* L_495 = V_0;
		int32_t L_496 = V_11;
		int32_t L_497 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_495, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_496, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = V_1;
		NullCheck(L_498);
		int32_t L_499 = 2;
		int32_t L_500 = (L_498)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		int32_t* L_501 = V_0;
		int32_t L_502 = V_11;
		int32_t L_503 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_501, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_502, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = V_1;
		NullCheck(L_504);
		int32_t L_505 = 1;
		int32_t L_506 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		int32_t* L_507 = V_0;
		int32_t L_508 = V_11;
		int32_t L_509 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_507, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_508, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_510 = V_1;
		NullCheck(L_510);
		int32_t L_511 = 0;
		int32_t L_512 = (L_510)->GetAt(static_cast<il2cpp_array_size_t>(L_511));
		int32_t* L_513 = V_0;
		int32_t L_514 = V_11;
		int32_t L_515 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_513, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_514, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_494), ((int64_t)L_497))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_500), ((int64_t)L_503))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_506), ((int64_t)L_509))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_512), ((int64_t)L_515)))));
		int32_t* L_516 = V_0;
		int32_t L_517 = V_11;
		int32_t* L_518 = ___0_residual;
		int32_t L_519 = V_11;
		int32_t L_520 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_518, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_519), 4)))));
		int64_t L_521 = V_2;
		int32_t L_522 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_516, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_517), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_520, ((int32_t)((int64_t)(L_521>>((int32_t)(L_522&((int32_t)63))))))));
		int32_t L_523 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_523, 1));
	}

IL_06ac:
	{
		int32_t L_524 = V_11;
		int32_t L_525 = ___2_length;
		if ((((int32_t)L_524) < ((int32_t)L_525)))
		{
			goto IL_0649;
		}
	}
	{
		return;
	}

IL_06b2:
	{
		V_12 = 0;
		goto IL_0709;
	}

IL_06b7:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_526 = V_1;
		NullCheck(L_526);
		int32_t L_527 = 2;
		int32_t L_528 = (L_526)->GetAt(static_cast<il2cpp_array_size_t>(L_527));
		int32_t* L_529 = V_0;
		int32_t L_530 = V_12;
		int32_t L_531 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_529, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_530, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = V_1;
		NullCheck(L_532);
		int32_t L_533 = 1;
		int32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		int32_t* L_535 = V_0;
		int32_t L_536 = V_12;
		int32_t L_537 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_535, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_536, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = V_1;
		NullCheck(L_538);
		int32_t L_539 = 0;
		int32_t L_540 = (L_538)->GetAt(static_cast<il2cpp_array_size_t>(L_539));
		int32_t* L_541 = V_0;
		int32_t L_542 = V_12;
		int32_t L_543 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_541, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_542, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_528), ((int64_t)L_531))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_534), ((int64_t)L_537))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_540), ((int64_t)L_543)))));
		int32_t* L_544 = V_0;
		int32_t L_545 = V_12;
		int32_t* L_546 = ___0_residual;
		int32_t L_547 = V_12;
		int32_t L_548 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_546, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_547), 4)))));
		int64_t L_549 = V_2;
		int32_t L_550 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_544, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_545), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_548, ((int32_t)((int64_t)(L_549>>((int32_t)(L_550&((int32_t)63))))))));
		int32_t L_551 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_551, 1));
	}

IL_0709:
	{
		int32_t L_552 = V_12;
		int32_t L_553 = ___2_length;
		if ((((int32_t)L_552) < ((int32_t)L_553)))
		{
			goto IL_06b7;
		}
	}
	{
		return;
	}

IL_070f:
	{
		V_13 = 0;
		goto IL_0755;
	}

IL_0714:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_554 = V_1;
		NullCheck(L_554);
		int32_t L_555 = 1;
		int32_t L_556 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_555));
		int32_t* L_557 = V_0;
		int32_t L_558 = V_13;
		int32_t L_559 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_557, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_558, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_560 = V_1;
		NullCheck(L_560);
		int32_t L_561 = 0;
		int32_t L_562 = (L_560)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		int32_t* L_563 = V_0;
		int32_t L_564 = V_13;
		int32_t L_565 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_563, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_564, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_556), ((int64_t)L_559))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_562), ((int64_t)L_565)))));
		int32_t* L_566 = V_0;
		int32_t L_567 = V_13;
		int32_t* L_568 = ___0_residual;
		int32_t L_569 = V_13;
		int32_t L_570 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_568, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_569), 4)))));
		int64_t L_571 = V_2;
		int32_t L_572 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_566, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_567), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_570, ((int32_t)((int64_t)(L_571>>((int32_t)(L_572&((int32_t)63))))))));
		int32_t L_573 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_573, 1));
	}

IL_0755:
	{
		int32_t L_574 = V_13;
		int32_t L_575 = ___2_length;
		if ((((int32_t)L_574) < ((int32_t)L_575)))
		{
			goto IL_0714;
		}
	}
	{
		return;
	}

IL_075b:
	{
		V_14 = 0;
		goto IL_0790;
	}

IL_0760:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_576 = V_1;
		NullCheck(L_576);
		int32_t L_577 = 0;
		int32_t L_578 = (L_576)->GetAt(static_cast<il2cpp_array_size_t>(L_577));
		int32_t* L_579 = V_0;
		int32_t L_580 = V_14;
		int32_t L_581 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_579, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_580, 1))), 4)))));
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_578), ((int64_t)L_581)));
		int32_t* L_582 = V_0;
		int32_t L_583 = V_14;
		int32_t* L_584 = ___0_residual;
		int32_t L_585 = V_14;
		int32_t L_586 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_584, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_585), 4)))));
		int64_t L_587 = V_2;
		int32_t L_588 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_582, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_583), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_586, ((int32_t)((int64_t)(L_587>>((int32_t)(L_588&((int32_t)63))))))));
		int32_t L_589 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_589, 1));
	}

IL_0790:
	{
		int32_t L_590 = V_14;
		int32_t L_591 = ___2_length;
		if ((((int32_t)L_590) < ((int32_t)L_591)))
		{
			goto IL_0760;
		}
	}
	{
		return;
	}

IL_0796:
	{
		int32_t L_592 = ___3_order;
		if ((((int32_t)L_592) <= ((int32_t)((int32_t)12))))
		{
			goto IL_2bf3;
		}
	}
	{
		int32_t L_593 = ___3_order;
		switch (((int32_t)il2cpp_codegen_subtract(L_593, ((int32_t)13))))
		{
			case 0:
			{
				goto IL_2adc;
			}
			case 1:
			{
				goto IL_29b1;
			}
			case 2:
			{
				goto IL_2873;
			}
			case 3:
			{
				goto IL_2722;
			}
			case 4:
			{
				goto IL_25be;
			}
			case 5:
			{
				goto IL_2447;
			}
			case 6:
			{
				goto IL_22bd;
			}
			case 7:
			{
				goto IL_2120;
			}
			case 8:
			{
				goto IL_1f70;
			}
			case 9:
			{
				goto IL_1dad;
			}
			case 10:
			{
				goto IL_1bd7;
			}
			case 11:
			{
				goto IL_19ee;
			}
			case 12:
			{
				goto IL_17f2;
			}
			case 13:
			{
				goto IL_15e3;
			}
			case 14:
			{
				goto IL_13c1;
			}
			case 15:
			{
				goto IL_118c;
			}
			case 16:
			{
				goto IL_0f44;
			}
			case 17:
			{
				goto IL_0ce9;
			}
			case 18:
			{
				goto IL_0a7b;
			}
			case 19:
			{
				goto IL_07fa;
			}
		}
	}
	{
		return;
	}

IL_07fa:
	{
		V_16 = 0;
		goto IL_0a72;
	}

IL_0802:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_594 = V_1;
		NullCheck(L_594);
		int32_t L_595 = ((int32_t)31);
		int32_t L_596 = (L_594)->GetAt(static_cast<il2cpp_array_size_t>(L_595));
		int32_t* L_597 = V_0;
		int32_t L_598 = V_16;
		int32_t L_599 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_597, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_598, ((int32_t)32)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_600 = V_1;
		NullCheck(L_600);
		int32_t L_601 = ((int32_t)30);
		int32_t L_602 = (L_600)->GetAt(static_cast<il2cpp_array_size_t>(L_601));
		int32_t* L_603 = V_0;
		int32_t L_604 = V_16;
		int32_t L_605 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_603, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_604, ((int32_t)31)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_606 = V_1;
		NullCheck(L_606);
		int32_t L_607 = ((int32_t)29);
		int32_t L_608 = (L_606)->GetAt(static_cast<il2cpp_array_size_t>(L_607));
		int32_t* L_609 = V_0;
		int32_t L_610 = V_16;
		int32_t L_611 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_609, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_610, ((int32_t)30)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = V_1;
		NullCheck(L_612);
		int32_t L_613 = ((int32_t)28);
		int32_t L_614 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		int32_t* L_615 = V_0;
		int32_t L_616 = V_16;
		int32_t L_617 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_615, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_616, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_618 = V_1;
		NullCheck(L_618);
		int32_t L_619 = ((int32_t)27);
		int32_t L_620 = (L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_619));
		int32_t* L_621 = V_0;
		int32_t L_622 = V_16;
		int32_t L_623 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_621, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_622, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_624 = V_1;
		NullCheck(L_624);
		int32_t L_625 = ((int32_t)26);
		int32_t L_626 = (L_624)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		int32_t* L_627 = V_0;
		int32_t L_628 = V_16;
		int32_t L_629 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_627, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_628, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_630 = V_1;
		NullCheck(L_630);
		int32_t L_631 = ((int32_t)25);
		int32_t L_632 = (L_630)->GetAt(static_cast<il2cpp_array_size_t>(L_631));
		int32_t* L_633 = V_0;
		int32_t L_634 = V_16;
		int32_t L_635 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_633, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_634, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_636 = V_1;
		NullCheck(L_636);
		int32_t L_637 = ((int32_t)24);
		int32_t L_638 = (L_636)->GetAt(static_cast<il2cpp_array_size_t>(L_637));
		int32_t* L_639 = V_0;
		int32_t L_640 = V_16;
		int32_t L_641 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_639, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_640, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_642 = V_1;
		NullCheck(L_642);
		int32_t L_643 = ((int32_t)23);
		int32_t L_644 = (L_642)->GetAt(static_cast<il2cpp_array_size_t>(L_643));
		int32_t* L_645 = V_0;
		int32_t L_646 = V_16;
		int32_t L_647 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_645, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_646, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_648 = V_1;
		NullCheck(L_648);
		int32_t L_649 = ((int32_t)22);
		int32_t L_650 = (L_648)->GetAt(static_cast<il2cpp_array_size_t>(L_649));
		int32_t* L_651 = V_0;
		int32_t L_652 = V_16;
		int32_t L_653 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_651, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_652, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_654 = V_1;
		NullCheck(L_654);
		int32_t L_655 = ((int32_t)21);
		int32_t L_656 = (L_654)->GetAt(static_cast<il2cpp_array_size_t>(L_655));
		int32_t* L_657 = V_0;
		int32_t L_658 = V_16;
		int32_t L_659 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_657, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_658, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_660 = V_1;
		NullCheck(L_660);
		int32_t L_661 = ((int32_t)20);
		int32_t L_662 = (L_660)->GetAt(static_cast<il2cpp_array_size_t>(L_661));
		int32_t* L_663 = V_0;
		int32_t L_664 = V_16;
		int32_t L_665 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_663, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_664, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_666 = V_1;
		NullCheck(L_666);
		int32_t L_667 = ((int32_t)19);
		int32_t L_668 = (L_666)->GetAt(static_cast<il2cpp_array_size_t>(L_667));
		int32_t* L_669 = V_0;
		int32_t L_670 = V_16;
		int32_t L_671 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_669, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_670, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_672 = V_1;
		NullCheck(L_672);
		int32_t L_673 = ((int32_t)18);
		int32_t L_674 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_673));
		int32_t* L_675 = V_0;
		int32_t L_676 = V_16;
		int32_t L_677 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_675, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_676, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_678 = V_1;
		NullCheck(L_678);
		int32_t L_679 = ((int32_t)17);
		int32_t L_680 = (L_678)->GetAt(static_cast<il2cpp_array_size_t>(L_679));
		int32_t* L_681 = V_0;
		int32_t L_682 = V_16;
		int32_t L_683 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_681, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_682, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_684 = V_1;
		NullCheck(L_684);
		int32_t L_685 = ((int32_t)16);
		int32_t L_686 = (L_684)->GetAt(static_cast<il2cpp_array_size_t>(L_685));
		int32_t* L_687 = V_0;
		int32_t L_688 = V_16;
		int32_t L_689 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_687, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_688, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_690 = V_1;
		NullCheck(L_690);
		int32_t L_691 = ((int32_t)15);
		int32_t L_692 = (L_690)->GetAt(static_cast<il2cpp_array_size_t>(L_691));
		int32_t* L_693 = V_0;
		int32_t L_694 = V_16;
		int32_t L_695 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_693, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_694, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_696 = V_1;
		NullCheck(L_696);
		int32_t L_697 = ((int32_t)14);
		int32_t L_698 = (L_696)->GetAt(static_cast<il2cpp_array_size_t>(L_697));
		int32_t* L_699 = V_0;
		int32_t L_700 = V_16;
		int32_t L_701 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_699, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_700, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_702 = V_1;
		NullCheck(L_702);
		int32_t L_703 = ((int32_t)13);
		int32_t L_704 = (L_702)->GetAt(static_cast<il2cpp_array_size_t>(L_703));
		int32_t* L_705 = V_0;
		int32_t L_706 = V_16;
		int32_t L_707 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_705, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_706, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_708 = V_1;
		NullCheck(L_708);
		int32_t L_709 = ((int32_t)12);
		int32_t L_710 = (L_708)->GetAt(static_cast<il2cpp_array_size_t>(L_709));
		int32_t* L_711 = V_0;
		int32_t L_712 = V_16;
		int32_t L_713 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_711, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_712, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_714 = V_1;
		NullCheck(L_714);
		int32_t L_715 = ((int32_t)11);
		int32_t L_716 = (L_714)->GetAt(static_cast<il2cpp_array_size_t>(L_715));
		int32_t* L_717 = V_0;
		int32_t L_718 = V_16;
		int32_t L_719 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_717, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_718, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_720 = V_1;
		NullCheck(L_720);
		int32_t L_721 = ((int32_t)10);
		int32_t L_722 = (L_720)->GetAt(static_cast<il2cpp_array_size_t>(L_721));
		int32_t* L_723 = V_0;
		int32_t L_724 = V_16;
		int32_t L_725 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_723, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_724, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_726 = V_1;
		NullCheck(L_726);
		int32_t L_727 = ((int32_t)9);
		int32_t L_728 = (L_726)->GetAt(static_cast<il2cpp_array_size_t>(L_727));
		int32_t* L_729 = V_0;
		int32_t L_730 = V_16;
		int32_t L_731 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_729, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_730, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_732 = V_1;
		NullCheck(L_732);
		int32_t L_733 = 8;
		int32_t L_734 = (L_732)->GetAt(static_cast<il2cpp_array_size_t>(L_733));
		int32_t* L_735 = V_0;
		int32_t L_736 = V_16;
		int32_t L_737 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_735, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_736, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_738 = V_1;
		NullCheck(L_738);
		int32_t L_739 = 7;
		int32_t L_740 = (L_738)->GetAt(static_cast<il2cpp_array_size_t>(L_739));
		int32_t* L_741 = V_0;
		int32_t L_742 = V_16;
		int32_t L_743 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_741, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_742, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_744 = V_1;
		NullCheck(L_744);
		int32_t L_745 = 6;
		int32_t L_746 = (L_744)->GetAt(static_cast<il2cpp_array_size_t>(L_745));
		int32_t* L_747 = V_0;
		int32_t L_748 = V_16;
		int32_t L_749 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_747, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_748, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_750 = V_1;
		NullCheck(L_750);
		int32_t L_751 = 5;
		int32_t L_752 = (L_750)->GetAt(static_cast<il2cpp_array_size_t>(L_751));
		int32_t* L_753 = V_0;
		int32_t L_754 = V_16;
		int32_t L_755 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_753, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_754, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_756 = V_1;
		NullCheck(L_756);
		int32_t L_757 = 4;
		int32_t L_758 = (L_756)->GetAt(static_cast<il2cpp_array_size_t>(L_757));
		int32_t* L_759 = V_0;
		int32_t L_760 = V_16;
		int32_t L_761 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_759, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_760, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_762 = V_1;
		NullCheck(L_762);
		int32_t L_763 = 3;
		int32_t L_764 = (L_762)->GetAt(static_cast<il2cpp_array_size_t>(L_763));
		int32_t* L_765 = V_0;
		int32_t L_766 = V_16;
		int32_t L_767 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_765, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_766, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_768 = V_1;
		NullCheck(L_768);
		int32_t L_769 = 2;
		int32_t L_770 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_769));
		int32_t* L_771 = V_0;
		int32_t L_772 = V_16;
		int32_t L_773 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_771, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_772, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_774 = V_1;
		NullCheck(L_774);
		int32_t L_775 = 1;
		int32_t L_776 = (L_774)->GetAt(static_cast<il2cpp_array_size_t>(L_775));
		int32_t* L_777 = V_0;
		int32_t L_778 = V_16;
		int32_t L_779 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_777, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_778, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_780 = V_1;
		NullCheck(L_780);
		int32_t L_781 = 0;
		int32_t L_782 = (L_780)->GetAt(static_cast<il2cpp_array_size_t>(L_781));
		int32_t* L_783 = V_0;
		int32_t L_784 = V_16;
		int32_t L_785 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_783, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_784, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_596), ((int64_t)L_599))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_602), ((int64_t)L_605))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_608), ((int64_t)L_611))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_614), ((int64_t)L_617))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_620), ((int64_t)L_623))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_626), ((int64_t)L_629))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_632), ((int64_t)L_635))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_638), ((int64_t)L_641))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_644), ((int64_t)L_647))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_650), ((int64_t)L_653))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_656), ((int64_t)L_659))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_662), ((int64_t)L_665))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_668), ((int64_t)L_671))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_674), ((int64_t)L_677))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_680), ((int64_t)L_683))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_686), ((int64_t)L_689))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_692), ((int64_t)L_695))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_698), ((int64_t)L_701))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_704), ((int64_t)L_707))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_710), ((int64_t)L_713))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_716), ((int64_t)L_719))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_722), ((int64_t)L_725))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_728), ((int64_t)L_731))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_734), ((int64_t)L_737))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_740), ((int64_t)L_743))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_746), ((int64_t)L_749))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_752), ((int64_t)L_755))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_758), ((int64_t)L_761))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_764), ((int64_t)L_767))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_770), ((int64_t)L_773))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_776), ((int64_t)L_779))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_782), ((int64_t)L_785)))));
		int32_t* L_786 = V_0;
		int32_t L_787 = V_16;
		int32_t* L_788 = ___0_residual;
		int32_t L_789 = V_16;
		int32_t L_790 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_788, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_789), 4)))));
		int64_t L_791 = V_15;
		int32_t L_792 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_786, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_787), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_790, ((int32_t)((int64_t)(L_791>>((int32_t)(L_792&((int32_t)63))))))));
		int32_t L_793 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_793, 1));
	}

IL_0a72:
	{
		int32_t L_794 = V_16;
		int32_t L_795 = ___2_length;
		if ((((int32_t)L_794) < ((int32_t)L_795)))
		{
			goto IL_0802;
		}
	}
	{
		return;
	}

IL_0a7b:
	{
		V_17 = 0;
		goto IL_0ce0;
	}

IL_0a83:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_796 = V_1;
		NullCheck(L_796);
		int32_t L_797 = ((int32_t)30);
		int32_t L_798 = (L_796)->GetAt(static_cast<il2cpp_array_size_t>(L_797));
		int32_t* L_799 = V_0;
		int32_t L_800 = V_17;
		int32_t L_801 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_799, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_800, ((int32_t)31)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_802 = V_1;
		NullCheck(L_802);
		int32_t L_803 = ((int32_t)29);
		int32_t L_804 = (L_802)->GetAt(static_cast<il2cpp_array_size_t>(L_803));
		int32_t* L_805 = V_0;
		int32_t L_806 = V_17;
		int32_t L_807 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_805, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_806, ((int32_t)30)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_808 = V_1;
		NullCheck(L_808);
		int32_t L_809 = ((int32_t)28);
		int32_t L_810 = (L_808)->GetAt(static_cast<il2cpp_array_size_t>(L_809));
		int32_t* L_811 = V_0;
		int32_t L_812 = V_17;
		int32_t L_813 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_811, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_812, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_814 = V_1;
		NullCheck(L_814);
		int32_t L_815 = ((int32_t)27);
		int32_t L_816 = (L_814)->GetAt(static_cast<il2cpp_array_size_t>(L_815));
		int32_t* L_817 = V_0;
		int32_t L_818 = V_17;
		int32_t L_819 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_817, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_818, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_820 = V_1;
		NullCheck(L_820);
		int32_t L_821 = ((int32_t)26);
		int32_t L_822 = (L_820)->GetAt(static_cast<il2cpp_array_size_t>(L_821));
		int32_t* L_823 = V_0;
		int32_t L_824 = V_17;
		int32_t L_825 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_823, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_824, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_826 = V_1;
		NullCheck(L_826);
		int32_t L_827 = ((int32_t)25);
		int32_t L_828 = (L_826)->GetAt(static_cast<il2cpp_array_size_t>(L_827));
		int32_t* L_829 = V_0;
		int32_t L_830 = V_17;
		int32_t L_831 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_829, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_830, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_832 = V_1;
		NullCheck(L_832);
		int32_t L_833 = ((int32_t)24);
		int32_t L_834 = (L_832)->GetAt(static_cast<il2cpp_array_size_t>(L_833));
		int32_t* L_835 = V_0;
		int32_t L_836 = V_17;
		int32_t L_837 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_835, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_836, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_838 = V_1;
		NullCheck(L_838);
		int32_t L_839 = ((int32_t)23);
		int32_t L_840 = (L_838)->GetAt(static_cast<il2cpp_array_size_t>(L_839));
		int32_t* L_841 = V_0;
		int32_t L_842 = V_17;
		int32_t L_843 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_841, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_842, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_844 = V_1;
		NullCheck(L_844);
		int32_t L_845 = ((int32_t)22);
		int32_t L_846 = (L_844)->GetAt(static_cast<il2cpp_array_size_t>(L_845));
		int32_t* L_847 = V_0;
		int32_t L_848 = V_17;
		int32_t L_849 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_847, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_848, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_850 = V_1;
		NullCheck(L_850);
		int32_t L_851 = ((int32_t)21);
		int32_t L_852 = (L_850)->GetAt(static_cast<il2cpp_array_size_t>(L_851));
		int32_t* L_853 = V_0;
		int32_t L_854 = V_17;
		int32_t L_855 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_853, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_854, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_856 = V_1;
		NullCheck(L_856);
		int32_t L_857 = ((int32_t)20);
		int32_t L_858 = (L_856)->GetAt(static_cast<il2cpp_array_size_t>(L_857));
		int32_t* L_859 = V_0;
		int32_t L_860 = V_17;
		int32_t L_861 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_859, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_860, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_862 = V_1;
		NullCheck(L_862);
		int32_t L_863 = ((int32_t)19);
		int32_t L_864 = (L_862)->GetAt(static_cast<il2cpp_array_size_t>(L_863));
		int32_t* L_865 = V_0;
		int32_t L_866 = V_17;
		int32_t L_867 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_865, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_866, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_868 = V_1;
		NullCheck(L_868);
		int32_t L_869 = ((int32_t)18);
		int32_t L_870 = (L_868)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		int32_t* L_871 = V_0;
		int32_t L_872 = V_17;
		int32_t L_873 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_871, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_872, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_874 = V_1;
		NullCheck(L_874);
		int32_t L_875 = ((int32_t)17);
		int32_t L_876 = (L_874)->GetAt(static_cast<il2cpp_array_size_t>(L_875));
		int32_t* L_877 = V_0;
		int32_t L_878 = V_17;
		int32_t L_879 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_877, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_878, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_880 = V_1;
		NullCheck(L_880);
		int32_t L_881 = ((int32_t)16);
		int32_t L_882 = (L_880)->GetAt(static_cast<il2cpp_array_size_t>(L_881));
		int32_t* L_883 = V_0;
		int32_t L_884 = V_17;
		int32_t L_885 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_883, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_884, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_886 = V_1;
		NullCheck(L_886);
		int32_t L_887 = ((int32_t)15);
		int32_t L_888 = (L_886)->GetAt(static_cast<il2cpp_array_size_t>(L_887));
		int32_t* L_889 = V_0;
		int32_t L_890 = V_17;
		int32_t L_891 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_889, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_890, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_892 = V_1;
		NullCheck(L_892);
		int32_t L_893 = ((int32_t)14);
		int32_t L_894 = (L_892)->GetAt(static_cast<il2cpp_array_size_t>(L_893));
		int32_t* L_895 = V_0;
		int32_t L_896 = V_17;
		int32_t L_897 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_895, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_896, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_898 = V_1;
		NullCheck(L_898);
		int32_t L_899 = ((int32_t)13);
		int32_t L_900 = (L_898)->GetAt(static_cast<il2cpp_array_size_t>(L_899));
		int32_t* L_901 = V_0;
		int32_t L_902 = V_17;
		int32_t L_903 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_901, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_902, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_904 = V_1;
		NullCheck(L_904);
		int32_t L_905 = ((int32_t)12);
		int32_t L_906 = (L_904)->GetAt(static_cast<il2cpp_array_size_t>(L_905));
		int32_t* L_907 = V_0;
		int32_t L_908 = V_17;
		int32_t L_909 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_907, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_908, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_910 = V_1;
		NullCheck(L_910);
		int32_t L_911 = ((int32_t)11);
		int32_t L_912 = (L_910)->GetAt(static_cast<il2cpp_array_size_t>(L_911));
		int32_t* L_913 = V_0;
		int32_t L_914 = V_17;
		int32_t L_915 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_913, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_914, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_916 = V_1;
		NullCheck(L_916);
		int32_t L_917 = ((int32_t)10);
		int32_t L_918 = (L_916)->GetAt(static_cast<il2cpp_array_size_t>(L_917));
		int32_t* L_919 = V_0;
		int32_t L_920 = V_17;
		int32_t L_921 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_919, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_920, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_922 = V_1;
		NullCheck(L_922);
		int32_t L_923 = ((int32_t)9);
		int32_t L_924 = (L_922)->GetAt(static_cast<il2cpp_array_size_t>(L_923));
		int32_t* L_925 = V_0;
		int32_t L_926 = V_17;
		int32_t L_927 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_925, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_926, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_928 = V_1;
		NullCheck(L_928);
		int32_t L_929 = 8;
		int32_t L_930 = (L_928)->GetAt(static_cast<il2cpp_array_size_t>(L_929));
		int32_t* L_931 = V_0;
		int32_t L_932 = V_17;
		int32_t L_933 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_931, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_932, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_934 = V_1;
		NullCheck(L_934);
		int32_t L_935 = 7;
		int32_t L_936 = (L_934)->GetAt(static_cast<il2cpp_array_size_t>(L_935));
		int32_t* L_937 = V_0;
		int32_t L_938 = V_17;
		int32_t L_939 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_937, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_938, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_940 = V_1;
		NullCheck(L_940);
		int32_t L_941 = 6;
		int32_t L_942 = (L_940)->GetAt(static_cast<il2cpp_array_size_t>(L_941));
		int32_t* L_943 = V_0;
		int32_t L_944 = V_17;
		int32_t L_945 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_943, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_944, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_946 = V_1;
		NullCheck(L_946);
		int32_t L_947 = 5;
		int32_t L_948 = (L_946)->GetAt(static_cast<il2cpp_array_size_t>(L_947));
		int32_t* L_949 = V_0;
		int32_t L_950 = V_17;
		int32_t L_951 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_949, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_950, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_952 = V_1;
		NullCheck(L_952);
		int32_t L_953 = 4;
		int32_t L_954 = (L_952)->GetAt(static_cast<il2cpp_array_size_t>(L_953));
		int32_t* L_955 = V_0;
		int32_t L_956 = V_17;
		int32_t L_957 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_955, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_956, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_958 = V_1;
		NullCheck(L_958);
		int32_t L_959 = 3;
		int32_t L_960 = (L_958)->GetAt(static_cast<il2cpp_array_size_t>(L_959));
		int32_t* L_961 = V_0;
		int32_t L_962 = V_17;
		int32_t L_963 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_961, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_962, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_964 = V_1;
		NullCheck(L_964);
		int32_t L_965 = 2;
		int32_t L_966 = (L_964)->GetAt(static_cast<il2cpp_array_size_t>(L_965));
		int32_t* L_967 = V_0;
		int32_t L_968 = V_17;
		int32_t L_969 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_967, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_968, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_970 = V_1;
		NullCheck(L_970);
		int32_t L_971 = 1;
		int32_t L_972 = (L_970)->GetAt(static_cast<il2cpp_array_size_t>(L_971));
		int32_t* L_973 = V_0;
		int32_t L_974 = V_17;
		int32_t L_975 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_973, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_974, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_976 = V_1;
		NullCheck(L_976);
		int32_t L_977 = 0;
		int32_t L_978 = (L_976)->GetAt(static_cast<il2cpp_array_size_t>(L_977));
		int32_t* L_979 = V_0;
		int32_t L_980 = V_17;
		int32_t L_981 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_979, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_980, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_798), ((int64_t)L_801))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_804), ((int64_t)L_807))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_810), ((int64_t)L_813))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_816), ((int64_t)L_819))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_822), ((int64_t)L_825))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_828), ((int64_t)L_831))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_834), ((int64_t)L_837))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_840), ((int64_t)L_843))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_846), ((int64_t)L_849))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_852), ((int64_t)L_855))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_858), ((int64_t)L_861))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_864), ((int64_t)L_867))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_870), ((int64_t)L_873))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_876), ((int64_t)L_879))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_882), ((int64_t)L_885))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_888), ((int64_t)L_891))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_894), ((int64_t)L_897))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_900), ((int64_t)L_903))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_906), ((int64_t)L_909))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_912), ((int64_t)L_915))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_918), ((int64_t)L_921))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_924), ((int64_t)L_927))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_930), ((int64_t)L_933))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_936), ((int64_t)L_939))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_942), ((int64_t)L_945))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_948), ((int64_t)L_951))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_954), ((int64_t)L_957))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_960), ((int64_t)L_963))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_966), ((int64_t)L_969))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_972), ((int64_t)L_975))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_978), ((int64_t)L_981)))));
		int32_t* L_982 = V_0;
		int32_t L_983 = V_17;
		int32_t* L_984 = ___0_residual;
		int32_t L_985 = V_17;
		int32_t L_986 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_984, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_985), 4)))));
		int64_t L_987 = V_15;
		int32_t L_988 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_982, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_983), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_986, ((int32_t)((int64_t)(L_987>>((int32_t)(L_988&((int32_t)63))))))));
		int32_t L_989 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_989, 1));
	}

IL_0ce0:
	{
		int32_t L_990 = V_17;
		int32_t L_991 = ___2_length;
		if ((((int32_t)L_990) < ((int32_t)L_991)))
		{
			goto IL_0a83;
		}
	}
	{
		return;
	}

IL_0ce9:
	{
		V_18 = 0;
		goto IL_0f3b;
	}

IL_0cf1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_992 = V_1;
		NullCheck(L_992);
		int32_t L_993 = ((int32_t)29);
		int32_t L_994 = (L_992)->GetAt(static_cast<il2cpp_array_size_t>(L_993));
		int32_t* L_995 = V_0;
		int32_t L_996 = V_18;
		int32_t L_997 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_995, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_996, ((int32_t)30)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_998 = V_1;
		NullCheck(L_998);
		int32_t L_999 = ((int32_t)28);
		int32_t L_1000 = (L_998)->GetAt(static_cast<il2cpp_array_size_t>(L_999));
		int32_t* L_1001 = V_0;
		int32_t L_1002 = V_18;
		int32_t L_1003 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1001, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1002, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1004 = V_1;
		NullCheck(L_1004);
		int32_t L_1005 = ((int32_t)27);
		int32_t L_1006 = (L_1004)->GetAt(static_cast<il2cpp_array_size_t>(L_1005));
		int32_t* L_1007 = V_0;
		int32_t L_1008 = V_18;
		int32_t L_1009 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1007, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1008, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1010 = V_1;
		NullCheck(L_1010);
		int32_t L_1011 = ((int32_t)26);
		int32_t L_1012 = (L_1010)->GetAt(static_cast<il2cpp_array_size_t>(L_1011));
		int32_t* L_1013 = V_0;
		int32_t L_1014 = V_18;
		int32_t L_1015 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1013, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1014, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1016 = V_1;
		NullCheck(L_1016);
		int32_t L_1017 = ((int32_t)25);
		int32_t L_1018 = (L_1016)->GetAt(static_cast<il2cpp_array_size_t>(L_1017));
		int32_t* L_1019 = V_0;
		int32_t L_1020 = V_18;
		int32_t L_1021 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1019, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1020, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1022 = V_1;
		NullCheck(L_1022);
		int32_t L_1023 = ((int32_t)24);
		int32_t L_1024 = (L_1022)->GetAt(static_cast<il2cpp_array_size_t>(L_1023));
		int32_t* L_1025 = V_0;
		int32_t L_1026 = V_18;
		int32_t L_1027 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1025, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1026, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1028 = V_1;
		NullCheck(L_1028);
		int32_t L_1029 = ((int32_t)23);
		int32_t L_1030 = (L_1028)->GetAt(static_cast<il2cpp_array_size_t>(L_1029));
		int32_t* L_1031 = V_0;
		int32_t L_1032 = V_18;
		int32_t L_1033 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1031, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1032, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1034 = V_1;
		NullCheck(L_1034);
		int32_t L_1035 = ((int32_t)22);
		int32_t L_1036 = (L_1034)->GetAt(static_cast<il2cpp_array_size_t>(L_1035));
		int32_t* L_1037 = V_0;
		int32_t L_1038 = V_18;
		int32_t L_1039 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1037, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1038, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1040 = V_1;
		NullCheck(L_1040);
		int32_t L_1041 = ((int32_t)21);
		int32_t L_1042 = (L_1040)->GetAt(static_cast<il2cpp_array_size_t>(L_1041));
		int32_t* L_1043 = V_0;
		int32_t L_1044 = V_18;
		int32_t L_1045 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1043, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1044, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1046 = V_1;
		NullCheck(L_1046);
		int32_t L_1047 = ((int32_t)20);
		int32_t L_1048 = (L_1046)->GetAt(static_cast<il2cpp_array_size_t>(L_1047));
		int32_t* L_1049 = V_0;
		int32_t L_1050 = V_18;
		int32_t L_1051 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1049, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1050, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1052 = V_1;
		NullCheck(L_1052);
		int32_t L_1053 = ((int32_t)19);
		int32_t L_1054 = (L_1052)->GetAt(static_cast<il2cpp_array_size_t>(L_1053));
		int32_t* L_1055 = V_0;
		int32_t L_1056 = V_18;
		int32_t L_1057 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1055, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1056, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1058 = V_1;
		NullCheck(L_1058);
		int32_t L_1059 = ((int32_t)18);
		int32_t L_1060 = (L_1058)->GetAt(static_cast<il2cpp_array_size_t>(L_1059));
		int32_t* L_1061 = V_0;
		int32_t L_1062 = V_18;
		int32_t L_1063 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1061, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1062, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1064 = V_1;
		NullCheck(L_1064);
		int32_t L_1065 = ((int32_t)17);
		int32_t L_1066 = (L_1064)->GetAt(static_cast<il2cpp_array_size_t>(L_1065));
		int32_t* L_1067 = V_0;
		int32_t L_1068 = V_18;
		int32_t L_1069 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1067, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1068, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1070 = V_1;
		NullCheck(L_1070);
		int32_t L_1071 = ((int32_t)16);
		int32_t L_1072 = (L_1070)->GetAt(static_cast<il2cpp_array_size_t>(L_1071));
		int32_t* L_1073 = V_0;
		int32_t L_1074 = V_18;
		int32_t L_1075 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1073, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1074, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1076 = V_1;
		NullCheck(L_1076);
		int32_t L_1077 = ((int32_t)15);
		int32_t L_1078 = (L_1076)->GetAt(static_cast<il2cpp_array_size_t>(L_1077));
		int32_t* L_1079 = V_0;
		int32_t L_1080 = V_18;
		int32_t L_1081 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1079, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1080, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1082 = V_1;
		NullCheck(L_1082);
		int32_t L_1083 = ((int32_t)14);
		int32_t L_1084 = (L_1082)->GetAt(static_cast<il2cpp_array_size_t>(L_1083));
		int32_t* L_1085 = V_0;
		int32_t L_1086 = V_18;
		int32_t L_1087 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1085, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1086, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1088 = V_1;
		NullCheck(L_1088);
		int32_t L_1089 = ((int32_t)13);
		int32_t L_1090 = (L_1088)->GetAt(static_cast<il2cpp_array_size_t>(L_1089));
		int32_t* L_1091 = V_0;
		int32_t L_1092 = V_18;
		int32_t L_1093 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1091, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1092, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1094 = V_1;
		NullCheck(L_1094);
		int32_t L_1095 = ((int32_t)12);
		int32_t L_1096 = (L_1094)->GetAt(static_cast<il2cpp_array_size_t>(L_1095));
		int32_t* L_1097 = V_0;
		int32_t L_1098 = V_18;
		int32_t L_1099 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1097, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1098, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1100 = V_1;
		NullCheck(L_1100);
		int32_t L_1101 = ((int32_t)11);
		int32_t L_1102 = (L_1100)->GetAt(static_cast<il2cpp_array_size_t>(L_1101));
		int32_t* L_1103 = V_0;
		int32_t L_1104 = V_18;
		int32_t L_1105 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1104, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1106 = V_1;
		NullCheck(L_1106);
		int32_t L_1107 = ((int32_t)10);
		int32_t L_1108 = (L_1106)->GetAt(static_cast<il2cpp_array_size_t>(L_1107));
		int32_t* L_1109 = V_0;
		int32_t L_1110 = V_18;
		int32_t L_1111 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1109, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1110, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1112 = V_1;
		NullCheck(L_1112);
		int32_t L_1113 = ((int32_t)9);
		int32_t L_1114 = (L_1112)->GetAt(static_cast<il2cpp_array_size_t>(L_1113));
		int32_t* L_1115 = V_0;
		int32_t L_1116 = V_18;
		int32_t L_1117 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1115, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1116, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1118 = V_1;
		NullCheck(L_1118);
		int32_t L_1119 = 8;
		int32_t L_1120 = (L_1118)->GetAt(static_cast<il2cpp_array_size_t>(L_1119));
		int32_t* L_1121 = V_0;
		int32_t L_1122 = V_18;
		int32_t L_1123 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1122, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1124 = V_1;
		NullCheck(L_1124);
		int32_t L_1125 = 7;
		int32_t L_1126 = (L_1124)->GetAt(static_cast<il2cpp_array_size_t>(L_1125));
		int32_t* L_1127 = V_0;
		int32_t L_1128 = V_18;
		int32_t L_1129 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1128, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1130 = V_1;
		NullCheck(L_1130);
		int32_t L_1131 = 6;
		int32_t L_1132 = (L_1130)->GetAt(static_cast<il2cpp_array_size_t>(L_1131));
		int32_t* L_1133 = V_0;
		int32_t L_1134 = V_18;
		int32_t L_1135 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1133, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1134, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1136 = V_1;
		NullCheck(L_1136);
		int32_t L_1137 = 5;
		int32_t L_1138 = (L_1136)->GetAt(static_cast<il2cpp_array_size_t>(L_1137));
		int32_t* L_1139 = V_0;
		int32_t L_1140 = V_18;
		int32_t L_1141 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1140, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1142 = V_1;
		NullCheck(L_1142);
		int32_t L_1143 = 4;
		int32_t L_1144 = (L_1142)->GetAt(static_cast<il2cpp_array_size_t>(L_1143));
		int32_t* L_1145 = V_0;
		int32_t L_1146 = V_18;
		int32_t L_1147 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1145, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1146, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1148 = V_1;
		NullCheck(L_1148);
		int32_t L_1149 = 3;
		int32_t L_1150 = (L_1148)->GetAt(static_cast<il2cpp_array_size_t>(L_1149));
		int32_t* L_1151 = V_0;
		int32_t L_1152 = V_18;
		int32_t L_1153 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1151, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1152, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1154 = V_1;
		NullCheck(L_1154);
		int32_t L_1155 = 2;
		int32_t L_1156 = (L_1154)->GetAt(static_cast<il2cpp_array_size_t>(L_1155));
		int32_t* L_1157 = V_0;
		int32_t L_1158 = V_18;
		int32_t L_1159 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1157, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1158, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1160 = V_1;
		NullCheck(L_1160);
		int32_t L_1161 = 1;
		int32_t L_1162 = (L_1160)->GetAt(static_cast<il2cpp_array_size_t>(L_1161));
		int32_t* L_1163 = V_0;
		int32_t L_1164 = V_18;
		int32_t L_1165 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1164, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1166 = V_1;
		NullCheck(L_1166);
		int32_t L_1167 = 0;
		int32_t L_1168 = (L_1166)->GetAt(static_cast<il2cpp_array_size_t>(L_1167));
		int32_t* L_1169 = V_0;
		int32_t L_1170 = V_18;
		int32_t L_1171 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1169, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1170, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_994), ((int64_t)L_997))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1000), ((int64_t)L_1003))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1006), ((int64_t)L_1009))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1012), ((int64_t)L_1015))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1018), ((int64_t)L_1021))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1024), ((int64_t)L_1027))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1030), ((int64_t)L_1033))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1036), ((int64_t)L_1039))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1042), ((int64_t)L_1045))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1048), ((int64_t)L_1051))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1054), ((int64_t)L_1057))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1060), ((int64_t)L_1063))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1066), ((int64_t)L_1069))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1072), ((int64_t)L_1075))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1078), ((int64_t)L_1081))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1084), ((int64_t)L_1087))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1090), ((int64_t)L_1093))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1096), ((int64_t)L_1099))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1102), ((int64_t)L_1105))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1108), ((int64_t)L_1111))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1114), ((int64_t)L_1117))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1120), ((int64_t)L_1123))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1126), ((int64_t)L_1129))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1132), ((int64_t)L_1135))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1138), ((int64_t)L_1141))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1144), ((int64_t)L_1147))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1150), ((int64_t)L_1153))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1156), ((int64_t)L_1159))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1162), ((int64_t)L_1165))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1168), ((int64_t)L_1171)))));
		int32_t* L_1172 = V_0;
		int32_t L_1173 = V_18;
		int32_t* L_1174 = ___0_residual;
		int32_t L_1175 = V_18;
		int32_t L_1176 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1174, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1175), 4)))));
		int64_t L_1177 = V_15;
		int32_t L_1178 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1172, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1173), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1176, ((int32_t)((int64_t)(L_1177>>((int32_t)(L_1178&((int32_t)63))))))));
		int32_t L_1179 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_1179, 1));
	}

IL_0f3b:
	{
		int32_t L_1180 = V_18;
		int32_t L_1181 = ___2_length;
		if ((((int32_t)L_1180) < ((int32_t)L_1181)))
		{
			goto IL_0cf1;
		}
	}
	{
		return;
	}

IL_0f44:
	{
		V_19 = 0;
		goto IL_1183;
	}

IL_0f4c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1182 = V_1;
		NullCheck(L_1182);
		int32_t L_1183 = ((int32_t)28);
		int32_t L_1184 = (L_1182)->GetAt(static_cast<il2cpp_array_size_t>(L_1183));
		int32_t* L_1185 = V_0;
		int32_t L_1186 = V_19;
		int32_t L_1187 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1185, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1186, ((int32_t)29)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1188 = V_1;
		NullCheck(L_1188);
		int32_t L_1189 = ((int32_t)27);
		int32_t L_1190 = (L_1188)->GetAt(static_cast<il2cpp_array_size_t>(L_1189));
		int32_t* L_1191 = V_0;
		int32_t L_1192 = V_19;
		int32_t L_1193 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1191, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1192, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1194 = V_1;
		NullCheck(L_1194);
		int32_t L_1195 = ((int32_t)26);
		int32_t L_1196 = (L_1194)->GetAt(static_cast<il2cpp_array_size_t>(L_1195));
		int32_t* L_1197 = V_0;
		int32_t L_1198 = V_19;
		int32_t L_1199 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1197, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1198, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1200 = V_1;
		NullCheck(L_1200);
		int32_t L_1201 = ((int32_t)25);
		int32_t L_1202 = (L_1200)->GetAt(static_cast<il2cpp_array_size_t>(L_1201));
		int32_t* L_1203 = V_0;
		int32_t L_1204 = V_19;
		int32_t L_1205 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1203, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1204, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1206 = V_1;
		NullCheck(L_1206);
		int32_t L_1207 = ((int32_t)24);
		int32_t L_1208 = (L_1206)->GetAt(static_cast<il2cpp_array_size_t>(L_1207));
		int32_t* L_1209 = V_0;
		int32_t L_1210 = V_19;
		int32_t L_1211 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1209, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1210, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1212 = V_1;
		NullCheck(L_1212);
		int32_t L_1213 = ((int32_t)23);
		int32_t L_1214 = (L_1212)->GetAt(static_cast<il2cpp_array_size_t>(L_1213));
		int32_t* L_1215 = V_0;
		int32_t L_1216 = V_19;
		int32_t L_1217 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1215, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1216, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1218 = V_1;
		NullCheck(L_1218);
		int32_t L_1219 = ((int32_t)22);
		int32_t L_1220 = (L_1218)->GetAt(static_cast<il2cpp_array_size_t>(L_1219));
		int32_t* L_1221 = V_0;
		int32_t L_1222 = V_19;
		int32_t L_1223 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1221, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1222, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1224 = V_1;
		NullCheck(L_1224);
		int32_t L_1225 = ((int32_t)21);
		int32_t L_1226 = (L_1224)->GetAt(static_cast<il2cpp_array_size_t>(L_1225));
		int32_t* L_1227 = V_0;
		int32_t L_1228 = V_19;
		int32_t L_1229 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1227, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1228, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1230 = V_1;
		NullCheck(L_1230);
		int32_t L_1231 = ((int32_t)20);
		int32_t L_1232 = (L_1230)->GetAt(static_cast<il2cpp_array_size_t>(L_1231));
		int32_t* L_1233 = V_0;
		int32_t L_1234 = V_19;
		int32_t L_1235 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1233, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1234, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1236 = V_1;
		NullCheck(L_1236);
		int32_t L_1237 = ((int32_t)19);
		int32_t L_1238 = (L_1236)->GetAt(static_cast<il2cpp_array_size_t>(L_1237));
		int32_t* L_1239 = V_0;
		int32_t L_1240 = V_19;
		int32_t L_1241 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1239, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1240, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1242 = V_1;
		NullCheck(L_1242);
		int32_t L_1243 = ((int32_t)18);
		int32_t L_1244 = (L_1242)->GetAt(static_cast<il2cpp_array_size_t>(L_1243));
		int32_t* L_1245 = V_0;
		int32_t L_1246 = V_19;
		int32_t L_1247 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1245, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1246, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1248 = V_1;
		NullCheck(L_1248);
		int32_t L_1249 = ((int32_t)17);
		int32_t L_1250 = (L_1248)->GetAt(static_cast<il2cpp_array_size_t>(L_1249));
		int32_t* L_1251 = V_0;
		int32_t L_1252 = V_19;
		int32_t L_1253 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1251, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1252, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1254 = V_1;
		NullCheck(L_1254);
		int32_t L_1255 = ((int32_t)16);
		int32_t L_1256 = (L_1254)->GetAt(static_cast<il2cpp_array_size_t>(L_1255));
		int32_t* L_1257 = V_0;
		int32_t L_1258 = V_19;
		int32_t L_1259 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1257, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1258, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1260 = V_1;
		NullCheck(L_1260);
		int32_t L_1261 = ((int32_t)15);
		int32_t L_1262 = (L_1260)->GetAt(static_cast<il2cpp_array_size_t>(L_1261));
		int32_t* L_1263 = V_0;
		int32_t L_1264 = V_19;
		int32_t L_1265 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1263, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1264, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1266 = V_1;
		NullCheck(L_1266);
		int32_t L_1267 = ((int32_t)14);
		int32_t L_1268 = (L_1266)->GetAt(static_cast<il2cpp_array_size_t>(L_1267));
		int32_t* L_1269 = V_0;
		int32_t L_1270 = V_19;
		int32_t L_1271 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1269, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1270, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1272 = V_1;
		NullCheck(L_1272);
		int32_t L_1273 = ((int32_t)13);
		int32_t L_1274 = (L_1272)->GetAt(static_cast<il2cpp_array_size_t>(L_1273));
		int32_t* L_1275 = V_0;
		int32_t L_1276 = V_19;
		int32_t L_1277 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1275, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1276, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1278 = V_1;
		NullCheck(L_1278);
		int32_t L_1279 = ((int32_t)12);
		int32_t L_1280 = (L_1278)->GetAt(static_cast<il2cpp_array_size_t>(L_1279));
		int32_t* L_1281 = V_0;
		int32_t L_1282 = V_19;
		int32_t L_1283 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1281, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1282, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1284 = V_1;
		NullCheck(L_1284);
		int32_t L_1285 = ((int32_t)11);
		int32_t L_1286 = (L_1284)->GetAt(static_cast<il2cpp_array_size_t>(L_1285));
		int32_t* L_1287 = V_0;
		int32_t L_1288 = V_19;
		int32_t L_1289 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1287, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1288, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1290 = V_1;
		NullCheck(L_1290);
		int32_t L_1291 = ((int32_t)10);
		int32_t L_1292 = (L_1290)->GetAt(static_cast<il2cpp_array_size_t>(L_1291));
		int32_t* L_1293 = V_0;
		int32_t L_1294 = V_19;
		int32_t L_1295 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1293, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1294, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1296 = V_1;
		NullCheck(L_1296);
		int32_t L_1297 = ((int32_t)9);
		int32_t L_1298 = (L_1296)->GetAt(static_cast<il2cpp_array_size_t>(L_1297));
		int32_t* L_1299 = V_0;
		int32_t L_1300 = V_19;
		int32_t L_1301 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1299, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1300, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1302 = V_1;
		NullCheck(L_1302);
		int32_t L_1303 = 8;
		int32_t L_1304 = (L_1302)->GetAt(static_cast<il2cpp_array_size_t>(L_1303));
		int32_t* L_1305 = V_0;
		int32_t L_1306 = V_19;
		int32_t L_1307 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1305, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1306, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1308 = V_1;
		NullCheck(L_1308);
		int32_t L_1309 = 7;
		int32_t L_1310 = (L_1308)->GetAt(static_cast<il2cpp_array_size_t>(L_1309));
		int32_t* L_1311 = V_0;
		int32_t L_1312 = V_19;
		int32_t L_1313 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1311, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1312, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1314 = V_1;
		NullCheck(L_1314);
		int32_t L_1315 = 6;
		int32_t L_1316 = (L_1314)->GetAt(static_cast<il2cpp_array_size_t>(L_1315));
		int32_t* L_1317 = V_0;
		int32_t L_1318 = V_19;
		int32_t L_1319 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1317, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1318, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1320 = V_1;
		NullCheck(L_1320);
		int32_t L_1321 = 5;
		int32_t L_1322 = (L_1320)->GetAt(static_cast<il2cpp_array_size_t>(L_1321));
		int32_t* L_1323 = V_0;
		int32_t L_1324 = V_19;
		int32_t L_1325 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1323, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1324, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1326 = V_1;
		NullCheck(L_1326);
		int32_t L_1327 = 4;
		int32_t L_1328 = (L_1326)->GetAt(static_cast<il2cpp_array_size_t>(L_1327));
		int32_t* L_1329 = V_0;
		int32_t L_1330 = V_19;
		int32_t L_1331 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1329, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1330, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1332 = V_1;
		NullCheck(L_1332);
		int32_t L_1333 = 3;
		int32_t L_1334 = (L_1332)->GetAt(static_cast<il2cpp_array_size_t>(L_1333));
		int32_t* L_1335 = V_0;
		int32_t L_1336 = V_19;
		int32_t L_1337 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1335, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1336, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1338 = V_1;
		NullCheck(L_1338);
		int32_t L_1339 = 2;
		int32_t L_1340 = (L_1338)->GetAt(static_cast<il2cpp_array_size_t>(L_1339));
		int32_t* L_1341 = V_0;
		int32_t L_1342 = V_19;
		int32_t L_1343 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1341, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1342, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1344 = V_1;
		NullCheck(L_1344);
		int32_t L_1345 = 1;
		int32_t L_1346 = (L_1344)->GetAt(static_cast<il2cpp_array_size_t>(L_1345));
		int32_t* L_1347 = V_0;
		int32_t L_1348 = V_19;
		int32_t L_1349 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1347, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1348, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1350 = V_1;
		NullCheck(L_1350);
		int32_t L_1351 = 0;
		int32_t L_1352 = (L_1350)->GetAt(static_cast<il2cpp_array_size_t>(L_1351));
		int32_t* L_1353 = V_0;
		int32_t L_1354 = V_19;
		int32_t L_1355 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1353, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1354, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_1184), ((int64_t)L_1187))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1190), ((int64_t)L_1193))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1196), ((int64_t)L_1199))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1202), ((int64_t)L_1205))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1208), ((int64_t)L_1211))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1214), ((int64_t)L_1217))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1220), ((int64_t)L_1223))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1226), ((int64_t)L_1229))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1232), ((int64_t)L_1235))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1238), ((int64_t)L_1241))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1244), ((int64_t)L_1247))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1250), ((int64_t)L_1253))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1256), ((int64_t)L_1259))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1262), ((int64_t)L_1265))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1268), ((int64_t)L_1271))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1274), ((int64_t)L_1277))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1280), ((int64_t)L_1283))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1286), ((int64_t)L_1289))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1292), ((int64_t)L_1295))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1298), ((int64_t)L_1301))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1304), ((int64_t)L_1307))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1310), ((int64_t)L_1313))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1316), ((int64_t)L_1319))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1322), ((int64_t)L_1325))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1328), ((int64_t)L_1331))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1334), ((int64_t)L_1337))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1340), ((int64_t)L_1343))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1346), ((int64_t)L_1349))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1352), ((int64_t)L_1355)))));
		int32_t* L_1356 = V_0;
		int32_t L_1357 = V_19;
		int32_t* L_1358 = ___0_residual;
		int32_t L_1359 = V_19;
		int32_t L_1360 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1358, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1359), 4)))));
		int64_t L_1361 = V_15;
		int32_t L_1362 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1356, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1357), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1360, ((int32_t)((int64_t)(L_1361>>((int32_t)(L_1362&((int32_t)63))))))));
		int32_t L_1363 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_1363, 1));
	}

IL_1183:
	{
		int32_t L_1364 = V_19;
		int32_t L_1365 = ___2_length;
		if ((((int32_t)L_1364) < ((int32_t)L_1365)))
		{
			goto IL_0f4c;
		}
	}
	{
		return;
	}

IL_118c:
	{
		V_20 = 0;
		goto IL_13b8;
	}

IL_1194:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1366 = V_1;
		NullCheck(L_1366);
		int32_t L_1367 = ((int32_t)27);
		int32_t L_1368 = (L_1366)->GetAt(static_cast<il2cpp_array_size_t>(L_1367));
		int32_t* L_1369 = V_0;
		int32_t L_1370 = V_20;
		int32_t L_1371 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1369, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1370, ((int32_t)28)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1372 = V_1;
		NullCheck(L_1372);
		int32_t L_1373 = ((int32_t)26);
		int32_t L_1374 = (L_1372)->GetAt(static_cast<il2cpp_array_size_t>(L_1373));
		int32_t* L_1375 = V_0;
		int32_t L_1376 = V_20;
		int32_t L_1377 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1375, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1376, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1378 = V_1;
		NullCheck(L_1378);
		int32_t L_1379 = ((int32_t)25);
		int32_t L_1380 = (L_1378)->GetAt(static_cast<il2cpp_array_size_t>(L_1379));
		int32_t* L_1381 = V_0;
		int32_t L_1382 = V_20;
		int32_t L_1383 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1381, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1382, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1384 = V_1;
		NullCheck(L_1384);
		int32_t L_1385 = ((int32_t)24);
		int32_t L_1386 = (L_1384)->GetAt(static_cast<il2cpp_array_size_t>(L_1385));
		int32_t* L_1387 = V_0;
		int32_t L_1388 = V_20;
		int32_t L_1389 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1387, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1388, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1390 = V_1;
		NullCheck(L_1390);
		int32_t L_1391 = ((int32_t)23);
		int32_t L_1392 = (L_1390)->GetAt(static_cast<il2cpp_array_size_t>(L_1391));
		int32_t* L_1393 = V_0;
		int32_t L_1394 = V_20;
		int32_t L_1395 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1393, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1394, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1396 = V_1;
		NullCheck(L_1396);
		int32_t L_1397 = ((int32_t)22);
		int32_t L_1398 = (L_1396)->GetAt(static_cast<il2cpp_array_size_t>(L_1397));
		int32_t* L_1399 = V_0;
		int32_t L_1400 = V_20;
		int32_t L_1401 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1399, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1400, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1402 = V_1;
		NullCheck(L_1402);
		int32_t L_1403 = ((int32_t)21);
		int32_t L_1404 = (L_1402)->GetAt(static_cast<il2cpp_array_size_t>(L_1403));
		int32_t* L_1405 = V_0;
		int32_t L_1406 = V_20;
		int32_t L_1407 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1405, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1406, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1408 = V_1;
		NullCheck(L_1408);
		int32_t L_1409 = ((int32_t)20);
		int32_t L_1410 = (L_1408)->GetAt(static_cast<il2cpp_array_size_t>(L_1409));
		int32_t* L_1411 = V_0;
		int32_t L_1412 = V_20;
		int32_t L_1413 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1411, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1412, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1414 = V_1;
		NullCheck(L_1414);
		int32_t L_1415 = ((int32_t)19);
		int32_t L_1416 = (L_1414)->GetAt(static_cast<il2cpp_array_size_t>(L_1415));
		int32_t* L_1417 = V_0;
		int32_t L_1418 = V_20;
		int32_t L_1419 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1417, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1418, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1420 = V_1;
		NullCheck(L_1420);
		int32_t L_1421 = ((int32_t)18);
		int32_t L_1422 = (L_1420)->GetAt(static_cast<il2cpp_array_size_t>(L_1421));
		int32_t* L_1423 = V_0;
		int32_t L_1424 = V_20;
		int32_t L_1425 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1423, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1424, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1426 = V_1;
		NullCheck(L_1426);
		int32_t L_1427 = ((int32_t)17);
		int32_t L_1428 = (L_1426)->GetAt(static_cast<il2cpp_array_size_t>(L_1427));
		int32_t* L_1429 = V_0;
		int32_t L_1430 = V_20;
		int32_t L_1431 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1429, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1430, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1432 = V_1;
		NullCheck(L_1432);
		int32_t L_1433 = ((int32_t)16);
		int32_t L_1434 = (L_1432)->GetAt(static_cast<il2cpp_array_size_t>(L_1433));
		int32_t* L_1435 = V_0;
		int32_t L_1436 = V_20;
		int32_t L_1437 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1435, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1436, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1438 = V_1;
		NullCheck(L_1438);
		int32_t L_1439 = ((int32_t)15);
		int32_t L_1440 = (L_1438)->GetAt(static_cast<il2cpp_array_size_t>(L_1439));
		int32_t* L_1441 = V_0;
		int32_t L_1442 = V_20;
		int32_t L_1443 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1441, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1442, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1444 = V_1;
		NullCheck(L_1444);
		int32_t L_1445 = ((int32_t)14);
		int32_t L_1446 = (L_1444)->GetAt(static_cast<il2cpp_array_size_t>(L_1445));
		int32_t* L_1447 = V_0;
		int32_t L_1448 = V_20;
		int32_t L_1449 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1447, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1448, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1450 = V_1;
		NullCheck(L_1450);
		int32_t L_1451 = ((int32_t)13);
		int32_t L_1452 = (L_1450)->GetAt(static_cast<il2cpp_array_size_t>(L_1451));
		int32_t* L_1453 = V_0;
		int32_t L_1454 = V_20;
		int32_t L_1455 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1453, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1454, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1456 = V_1;
		NullCheck(L_1456);
		int32_t L_1457 = ((int32_t)12);
		int32_t L_1458 = (L_1456)->GetAt(static_cast<il2cpp_array_size_t>(L_1457));
		int32_t* L_1459 = V_0;
		int32_t L_1460 = V_20;
		int32_t L_1461 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1459, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1460, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1462 = V_1;
		NullCheck(L_1462);
		int32_t L_1463 = ((int32_t)11);
		int32_t L_1464 = (L_1462)->GetAt(static_cast<il2cpp_array_size_t>(L_1463));
		int32_t* L_1465 = V_0;
		int32_t L_1466 = V_20;
		int32_t L_1467 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1465, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1466, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1468 = V_1;
		NullCheck(L_1468);
		int32_t L_1469 = ((int32_t)10);
		int32_t L_1470 = (L_1468)->GetAt(static_cast<il2cpp_array_size_t>(L_1469));
		int32_t* L_1471 = V_0;
		int32_t L_1472 = V_20;
		int32_t L_1473 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1471, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1472, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1474 = V_1;
		NullCheck(L_1474);
		int32_t L_1475 = ((int32_t)9);
		int32_t L_1476 = (L_1474)->GetAt(static_cast<il2cpp_array_size_t>(L_1475));
		int32_t* L_1477 = V_0;
		int32_t L_1478 = V_20;
		int32_t L_1479 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1477, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1478, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1480 = V_1;
		NullCheck(L_1480);
		int32_t L_1481 = 8;
		int32_t L_1482 = (L_1480)->GetAt(static_cast<il2cpp_array_size_t>(L_1481));
		int32_t* L_1483 = V_0;
		int32_t L_1484 = V_20;
		int32_t L_1485 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1483, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1484, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1486 = V_1;
		NullCheck(L_1486);
		int32_t L_1487 = 7;
		int32_t L_1488 = (L_1486)->GetAt(static_cast<il2cpp_array_size_t>(L_1487));
		int32_t* L_1489 = V_0;
		int32_t L_1490 = V_20;
		int32_t L_1491 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1489, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1490, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1492 = V_1;
		NullCheck(L_1492);
		int32_t L_1493 = 6;
		int32_t L_1494 = (L_1492)->GetAt(static_cast<il2cpp_array_size_t>(L_1493));
		int32_t* L_1495 = V_0;
		int32_t L_1496 = V_20;
		int32_t L_1497 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1495, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1496, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1498 = V_1;
		NullCheck(L_1498);
		int32_t L_1499 = 5;
		int32_t L_1500 = (L_1498)->GetAt(static_cast<il2cpp_array_size_t>(L_1499));
		int32_t* L_1501 = V_0;
		int32_t L_1502 = V_20;
		int32_t L_1503 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1501, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1502, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1504 = V_1;
		NullCheck(L_1504);
		int32_t L_1505 = 4;
		int32_t L_1506 = (L_1504)->GetAt(static_cast<il2cpp_array_size_t>(L_1505));
		int32_t* L_1507 = V_0;
		int32_t L_1508 = V_20;
		int32_t L_1509 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1507, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1508, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1510 = V_1;
		NullCheck(L_1510);
		int32_t L_1511 = 3;
		int32_t L_1512 = (L_1510)->GetAt(static_cast<il2cpp_array_size_t>(L_1511));
		int32_t* L_1513 = V_0;
		int32_t L_1514 = V_20;
		int32_t L_1515 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1513, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1514, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1516 = V_1;
		NullCheck(L_1516);
		int32_t L_1517 = 2;
		int32_t L_1518 = (L_1516)->GetAt(static_cast<il2cpp_array_size_t>(L_1517));
		int32_t* L_1519 = V_0;
		int32_t L_1520 = V_20;
		int32_t L_1521 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1519, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1520, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1522 = V_1;
		NullCheck(L_1522);
		int32_t L_1523 = 1;
		int32_t L_1524 = (L_1522)->GetAt(static_cast<il2cpp_array_size_t>(L_1523));
		int32_t* L_1525 = V_0;
		int32_t L_1526 = V_20;
		int32_t L_1527 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1525, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1526, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1528 = V_1;
		NullCheck(L_1528);
		int32_t L_1529 = 0;
		int32_t L_1530 = (L_1528)->GetAt(static_cast<il2cpp_array_size_t>(L_1529));
		int32_t* L_1531 = V_0;
		int32_t L_1532 = V_20;
		int32_t L_1533 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1531, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1532, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_1368), ((int64_t)L_1371))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1374), ((int64_t)L_1377))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1380), ((int64_t)L_1383))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1386), ((int64_t)L_1389))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1392), ((int64_t)L_1395))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1398), ((int64_t)L_1401))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1404), ((int64_t)L_1407))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1410), ((int64_t)L_1413))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1416), ((int64_t)L_1419))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1422), ((int64_t)L_1425))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1428), ((int64_t)L_1431))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1434), ((int64_t)L_1437))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1440), ((int64_t)L_1443))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1446), ((int64_t)L_1449))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1452), ((int64_t)L_1455))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1458), ((int64_t)L_1461))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1464), ((int64_t)L_1467))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1470), ((int64_t)L_1473))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1476), ((int64_t)L_1479))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1482), ((int64_t)L_1485))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1488), ((int64_t)L_1491))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1494), ((int64_t)L_1497))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1500), ((int64_t)L_1503))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1506), ((int64_t)L_1509))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1512), ((int64_t)L_1515))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1518), ((int64_t)L_1521))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1524), ((int64_t)L_1527))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1530), ((int64_t)L_1533)))));
		int32_t* L_1534 = V_0;
		int32_t L_1535 = V_20;
		int32_t* L_1536 = ___0_residual;
		int32_t L_1537 = V_20;
		int32_t L_1538 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1536, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1537), 4)))));
		int64_t L_1539 = V_15;
		int32_t L_1540 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1534, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1535), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1538, ((int32_t)((int64_t)(L_1539>>((int32_t)(L_1540&((int32_t)63))))))));
		int32_t L_1541 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_1541, 1));
	}

IL_13b8:
	{
		int32_t L_1542 = V_20;
		int32_t L_1543 = ___2_length;
		if ((((int32_t)L_1542) < ((int32_t)L_1543)))
		{
			goto IL_1194;
		}
	}
	{
		return;
	}

IL_13c1:
	{
		V_21 = 0;
		goto IL_15da;
	}

IL_13c9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1544 = V_1;
		NullCheck(L_1544);
		int32_t L_1545 = ((int32_t)26);
		int32_t L_1546 = (L_1544)->GetAt(static_cast<il2cpp_array_size_t>(L_1545));
		int32_t* L_1547 = V_0;
		int32_t L_1548 = V_21;
		int32_t L_1549 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1547, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1548, ((int32_t)27)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1550 = V_1;
		NullCheck(L_1550);
		int32_t L_1551 = ((int32_t)25);
		int32_t L_1552 = (L_1550)->GetAt(static_cast<il2cpp_array_size_t>(L_1551));
		int32_t* L_1553 = V_0;
		int32_t L_1554 = V_21;
		int32_t L_1555 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1553, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1554, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1556 = V_1;
		NullCheck(L_1556);
		int32_t L_1557 = ((int32_t)24);
		int32_t L_1558 = (L_1556)->GetAt(static_cast<il2cpp_array_size_t>(L_1557));
		int32_t* L_1559 = V_0;
		int32_t L_1560 = V_21;
		int32_t L_1561 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1559, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1560, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1562 = V_1;
		NullCheck(L_1562);
		int32_t L_1563 = ((int32_t)23);
		int32_t L_1564 = (L_1562)->GetAt(static_cast<il2cpp_array_size_t>(L_1563));
		int32_t* L_1565 = V_0;
		int32_t L_1566 = V_21;
		int32_t L_1567 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1565, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1566, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1568 = V_1;
		NullCheck(L_1568);
		int32_t L_1569 = ((int32_t)22);
		int32_t L_1570 = (L_1568)->GetAt(static_cast<il2cpp_array_size_t>(L_1569));
		int32_t* L_1571 = V_0;
		int32_t L_1572 = V_21;
		int32_t L_1573 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1571, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1572, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1574 = V_1;
		NullCheck(L_1574);
		int32_t L_1575 = ((int32_t)21);
		int32_t L_1576 = (L_1574)->GetAt(static_cast<il2cpp_array_size_t>(L_1575));
		int32_t* L_1577 = V_0;
		int32_t L_1578 = V_21;
		int32_t L_1579 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1577, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1578, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1580 = V_1;
		NullCheck(L_1580);
		int32_t L_1581 = ((int32_t)20);
		int32_t L_1582 = (L_1580)->GetAt(static_cast<il2cpp_array_size_t>(L_1581));
		int32_t* L_1583 = V_0;
		int32_t L_1584 = V_21;
		int32_t L_1585 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1583, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1584, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1586 = V_1;
		NullCheck(L_1586);
		int32_t L_1587 = ((int32_t)19);
		int32_t L_1588 = (L_1586)->GetAt(static_cast<il2cpp_array_size_t>(L_1587));
		int32_t* L_1589 = V_0;
		int32_t L_1590 = V_21;
		int32_t L_1591 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1589, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1590, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1592 = V_1;
		NullCheck(L_1592);
		int32_t L_1593 = ((int32_t)18);
		int32_t L_1594 = (L_1592)->GetAt(static_cast<il2cpp_array_size_t>(L_1593));
		int32_t* L_1595 = V_0;
		int32_t L_1596 = V_21;
		int32_t L_1597 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1595, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1596, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1598 = V_1;
		NullCheck(L_1598);
		int32_t L_1599 = ((int32_t)17);
		int32_t L_1600 = (L_1598)->GetAt(static_cast<il2cpp_array_size_t>(L_1599));
		int32_t* L_1601 = V_0;
		int32_t L_1602 = V_21;
		int32_t L_1603 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1601, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1602, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1604 = V_1;
		NullCheck(L_1604);
		int32_t L_1605 = ((int32_t)16);
		int32_t L_1606 = (L_1604)->GetAt(static_cast<il2cpp_array_size_t>(L_1605));
		int32_t* L_1607 = V_0;
		int32_t L_1608 = V_21;
		int32_t L_1609 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1607, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1608, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1610 = V_1;
		NullCheck(L_1610);
		int32_t L_1611 = ((int32_t)15);
		int32_t L_1612 = (L_1610)->GetAt(static_cast<il2cpp_array_size_t>(L_1611));
		int32_t* L_1613 = V_0;
		int32_t L_1614 = V_21;
		int32_t L_1615 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1613, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1614, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1616 = V_1;
		NullCheck(L_1616);
		int32_t L_1617 = ((int32_t)14);
		int32_t L_1618 = (L_1616)->GetAt(static_cast<il2cpp_array_size_t>(L_1617));
		int32_t* L_1619 = V_0;
		int32_t L_1620 = V_21;
		int32_t L_1621 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1619, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1620, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1622 = V_1;
		NullCheck(L_1622);
		int32_t L_1623 = ((int32_t)13);
		int32_t L_1624 = (L_1622)->GetAt(static_cast<il2cpp_array_size_t>(L_1623));
		int32_t* L_1625 = V_0;
		int32_t L_1626 = V_21;
		int32_t L_1627 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1625, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1626, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1628 = V_1;
		NullCheck(L_1628);
		int32_t L_1629 = ((int32_t)12);
		int32_t L_1630 = (L_1628)->GetAt(static_cast<il2cpp_array_size_t>(L_1629));
		int32_t* L_1631 = V_0;
		int32_t L_1632 = V_21;
		int32_t L_1633 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1631, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1632, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1634 = V_1;
		NullCheck(L_1634);
		int32_t L_1635 = ((int32_t)11);
		int32_t L_1636 = (L_1634)->GetAt(static_cast<il2cpp_array_size_t>(L_1635));
		int32_t* L_1637 = V_0;
		int32_t L_1638 = V_21;
		int32_t L_1639 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1637, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1638, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1640 = V_1;
		NullCheck(L_1640);
		int32_t L_1641 = ((int32_t)10);
		int32_t L_1642 = (L_1640)->GetAt(static_cast<il2cpp_array_size_t>(L_1641));
		int32_t* L_1643 = V_0;
		int32_t L_1644 = V_21;
		int32_t L_1645 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1643, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1644, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1646 = V_1;
		NullCheck(L_1646);
		int32_t L_1647 = ((int32_t)9);
		int32_t L_1648 = (L_1646)->GetAt(static_cast<il2cpp_array_size_t>(L_1647));
		int32_t* L_1649 = V_0;
		int32_t L_1650 = V_21;
		int32_t L_1651 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1649, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1650, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1652 = V_1;
		NullCheck(L_1652);
		int32_t L_1653 = 8;
		int32_t L_1654 = (L_1652)->GetAt(static_cast<il2cpp_array_size_t>(L_1653));
		int32_t* L_1655 = V_0;
		int32_t L_1656 = V_21;
		int32_t L_1657 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1655, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1656, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1658 = V_1;
		NullCheck(L_1658);
		int32_t L_1659 = 7;
		int32_t L_1660 = (L_1658)->GetAt(static_cast<il2cpp_array_size_t>(L_1659));
		int32_t* L_1661 = V_0;
		int32_t L_1662 = V_21;
		int32_t L_1663 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1661, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1662, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1664 = V_1;
		NullCheck(L_1664);
		int32_t L_1665 = 6;
		int32_t L_1666 = (L_1664)->GetAt(static_cast<il2cpp_array_size_t>(L_1665));
		int32_t* L_1667 = V_0;
		int32_t L_1668 = V_21;
		int32_t L_1669 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1667, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1668, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1670 = V_1;
		NullCheck(L_1670);
		int32_t L_1671 = 5;
		int32_t L_1672 = (L_1670)->GetAt(static_cast<il2cpp_array_size_t>(L_1671));
		int32_t* L_1673 = V_0;
		int32_t L_1674 = V_21;
		int32_t L_1675 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1673, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1674, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1676 = V_1;
		NullCheck(L_1676);
		int32_t L_1677 = 4;
		int32_t L_1678 = (L_1676)->GetAt(static_cast<il2cpp_array_size_t>(L_1677));
		int32_t* L_1679 = V_0;
		int32_t L_1680 = V_21;
		int32_t L_1681 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1679, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1680, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1682 = V_1;
		NullCheck(L_1682);
		int32_t L_1683 = 3;
		int32_t L_1684 = (L_1682)->GetAt(static_cast<il2cpp_array_size_t>(L_1683));
		int32_t* L_1685 = V_0;
		int32_t L_1686 = V_21;
		int32_t L_1687 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1685, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1686, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1688 = V_1;
		NullCheck(L_1688);
		int32_t L_1689 = 2;
		int32_t L_1690 = (L_1688)->GetAt(static_cast<il2cpp_array_size_t>(L_1689));
		int32_t* L_1691 = V_0;
		int32_t L_1692 = V_21;
		int32_t L_1693 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1691, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1692, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1694 = V_1;
		NullCheck(L_1694);
		int32_t L_1695 = 1;
		int32_t L_1696 = (L_1694)->GetAt(static_cast<il2cpp_array_size_t>(L_1695));
		int32_t* L_1697 = V_0;
		int32_t L_1698 = V_21;
		int32_t L_1699 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1697, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1698, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1700 = V_1;
		NullCheck(L_1700);
		int32_t L_1701 = 0;
		int32_t L_1702 = (L_1700)->GetAt(static_cast<il2cpp_array_size_t>(L_1701));
		int32_t* L_1703 = V_0;
		int32_t L_1704 = V_21;
		int32_t L_1705 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1703, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1704, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_1546), ((int64_t)L_1549))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1552), ((int64_t)L_1555))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1558), ((int64_t)L_1561))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1564), ((int64_t)L_1567))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1570), ((int64_t)L_1573))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1576), ((int64_t)L_1579))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1582), ((int64_t)L_1585))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1588), ((int64_t)L_1591))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1594), ((int64_t)L_1597))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1600), ((int64_t)L_1603))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1606), ((int64_t)L_1609))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1612), ((int64_t)L_1615))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1618), ((int64_t)L_1621))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1624), ((int64_t)L_1627))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1630), ((int64_t)L_1633))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1636), ((int64_t)L_1639))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1642), ((int64_t)L_1645))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1648), ((int64_t)L_1651))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1654), ((int64_t)L_1657))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1660), ((int64_t)L_1663))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1666), ((int64_t)L_1669))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1672), ((int64_t)L_1675))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1678), ((int64_t)L_1681))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1684), ((int64_t)L_1687))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1690), ((int64_t)L_1693))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1696), ((int64_t)L_1699))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1702), ((int64_t)L_1705)))));
		int32_t* L_1706 = V_0;
		int32_t L_1707 = V_21;
		int32_t* L_1708 = ___0_residual;
		int32_t L_1709 = V_21;
		int32_t L_1710 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1708, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1709), 4)))));
		int64_t L_1711 = V_15;
		int32_t L_1712 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1706, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1707), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1710, ((int32_t)((int64_t)(L_1711>>((int32_t)(L_1712&((int32_t)63))))))));
		int32_t L_1713 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_1713, 1));
	}

IL_15da:
	{
		int32_t L_1714 = V_21;
		int32_t L_1715 = ___2_length;
		if ((((int32_t)L_1714) < ((int32_t)L_1715)))
		{
			goto IL_13c9;
		}
	}
	{
		return;
	}

IL_15e3:
	{
		V_22 = 0;
		goto IL_17e9;
	}

IL_15eb:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1716 = V_1;
		NullCheck(L_1716);
		int32_t L_1717 = ((int32_t)25);
		int32_t L_1718 = (L_1716)->GetAt(static_cast<il2cpp_array_size_t>(L_1717));
		int32_t* L_1719 = V_0;
		int32_t L_1720 = V_22;
		int32_t L_1721 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1719, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1720, ((int32_t)26)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1722 = V_1;
		NullCheck(L_1722);
		int32_t L_1723 = ((int32_t)24);
		int32_t L_1724 = (L_1722)->GetAt(static_cast<il2cpp_array_size_t>(L_1723));
		int32_t* L_1725 = V_0;
		int32_t L_1726 = V_22;
		int32_t L_1727 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1725, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1726, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1728 = V_1;
		NullCheck(L_1728);
		int32_t L_1729 = ((int32_t)23);
		int32_t L_1730 = (L_1728)->GetAt(static_cast<il2cpp_array_size_t>(L_1729));
		int32_t* L_1731 = V_0;
		int32_t L_1732 = V_22;
		int32_t L_1733 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1731, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1732, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1734 = V_1;
		NullCheck(L_1734);
		int32_t L_1735 = ((int32_t)22);
		int32_t L_1736 = (L_1734)->GetAt(static_cast<il2cpp_array_size_t>(L_1735));
		int32_t* L_1737 = V_0;
		int32_t L_1738 = V_22;
		int32_t L_1739 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1737, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1738, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1740 = V_1;
		NullCheck(L_1740);
		int32_t L_1741 = ((int32_t)21);
		int32_t L_1742 = (L_1740)->GetAt(static_cast<il2cpp_array_size_t>(L_1741));
		int32_t* L_1743 = V_0;
		int32_t L_1744 = V_22;
		int32_t L_1745 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1743, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1744, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1746 = V_1;
		NullCheck(L_1746);
		int32_t L_1747 = ((int32_t)20);
		int32_t L_1748 = (L_1746)->GetAt(static_cast<il2cpp_array_size_t>(L_1747));
		int32_t* L_1749 = V_0;
		int32_t L_1750 = V_22;
		int32_t L_1751 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1749, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1750, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1752 = V_1;
		NullCheck(L_1752);
		int32_t L_1753 = ((int32_t)19);
		int32_t L_1754 = (L_1752)->GetAt(static_cast<il2cpp_array_size_t>(L_1753));
		int32_t* L_1755 = V_0;
		int32_t L_1756 = V_22;
		int32_t L_1757 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1755, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1756, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1758 = V_1;
		NullCheck(L_1758);
		int32_t L_1759 = ((int32_t)18);
		int32_t L_1760 = (L_1758)->GetAt(static_cast<il2cpp_array_size_t>(L_1759));
		int32_t* L_1761 = V_0;
		int32_t L_1762 = V_22;
		int32_t L_1763 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1761, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1762, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1764 = V_1;
		NullCheck(L_1764);
		int32_t L_1765 = ((int32_t)17);
		int32_t L_1766 = (L_1764)->GetAt(static_cast<il2cpp_array_size_t>(L_1765));
		int32_t* L_1767 = V_0;
		int32_t L_1768 = V_22;
		int32_t L_1769 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1767, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1768, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1770 = V_1;
		NullCheck(L_1770);
		int32_t L_1771 = ((int32_t)16);
		int32_t L_1772 = (L_1770)->GetAt(static_cast<il2cpp_array_size_t>(L_1771));
		int32_t* L_1773 = V_0;
		int32_t L_1774 = V_22;
		int32_t L_1775 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1773, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1774, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1776 = V_1;
		NullCheck(L_1776);
		int32_t L_1777 = ((int32_t)15);
		int32_t L_1778 = (L_1776)->GetAt(static_cast<il2cpp_array_size_t>(L_1777));
		int32_t* L_1779 = V_0;
		int32_t L_1780 = V_22;
		int32_t L_1781 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1779, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1780, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1782 = V_1;
		NullCheck(L_1782);
		int32_t L_1783 = ((int32_t)14);
		int32_t L_1784 = (L_1782)->GetAt(static_cast<il2cpp_array_size_t>(L_1783));
		int32_t* L_1785 = V_0;
		int32_t L_1786 = V_22;
		int32_t L_1787 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1785, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1786, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1788 = V_1;
		NullCheck(L_1788);
		int32_t L_1789 = ((int32_t)13);
		int32_t L_1790 = (L_1788)->GetAt(static_cast<il2cpp_array_size_t>(L_1789));
		int32_t* L_1791 = V_0;
		int32_t L_1792 = V_22;
		int32_t L_1793 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1791, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1792, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1794 = V_1;
		NullCheck(L_1794);
		int32_t L_1795 = ((int32_t)12);
		int32_t L_1796 = (L_1794)->GetAt(static_cast<il2cpp_array_size_t>(L_1795));
		int32_t* L_1797 = V_0;
		int32_t L_1798 = V_22;
		int32_t L_1799 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1797, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1798, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1800 = V_1;
		NullCheck(L_1800);
		int32_t L_1801 = ((int32_t)11);
		int32_t L_1802 = (L_1800)->GetAt(static_cast<il2cpp_array_size_t>(L_1801));
		int32_t* L_1803 = V_0;
		int32_t L_1804 = V_22;
		int32_t L_1805 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1803, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1804, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1806 = V_1;
		NullCheck(L_1806);
		int32_t L_1807 = ((int32_t)10);
		int32_t L_1808 = (L_1806)->GetAt(static_cast<il2cpp_array_size_t>(L_1807));
		int32_t* L_1809 = V_0;
		int32_t L_1810 = V_22;
		int32_t L_1811 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1809, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1810, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1812 = V_1;
		NullCheck(L_1812);
		int32_t L_1813 = ((int32_t)9);
		int32_t L_1814 = (L_1812)->GetAt(static_cast<il2cpp_array_size_t>(L_1813));
		int32_t* L_1815 = V_0;
		int32_t L_1816 = V_22;
		int32_t L_1817 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1815, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1816, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1818 = V_1;
		NullCheck(L_1818);
		int32_t L_1819 = 8;
		int32_t L_1820 = (L_1818)->GetAt(static_cast<il2cpp_array_size_t>(L_1819));
		int32_t* L_1821 = V_0;
		int32_t L_1822 = V_22;
		int32_t L_1823 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1821, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1822, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1824 = V_1;
		NullCheck(L_1824);
		int32_t L_1825 = 7;
		int32_t L_1826 = (L_1824)->GetAt(static_cast<il2cpp_array_size_t>(L_1825));
		int32_t* L_1827 = V_0;
		int32_t L_1828 = V_22;
		int32_t L_1829 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1827, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1828, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1830 = V_1;
		NullCheck(L_1830);
		int32_t L_1831 = 6;
		int32_t L_1832 = (L_1830)->GetAt(static_cast<il2cpp_array_size_t>(L_1831));
		int32_t* L_1833 = V_0;
		int32_t L_1834 = V_22;
		int32_t L_1835 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1833, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1834, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1836 = V_1;
		NullCheck(L_1836);
		int32_t L_1837 = 5;
		int32_t L_1838 = (L_1836)->GetAt(static_cast<il2cpp_array_size_t>(L_1837));
		int32_t* L_1839 = V_0;
		int32_t L_1840 = V_22;
		int32_t L_1841 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1839, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1840, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1842 = V_1;
		NullCheck(L_1842);
		int32_t L_1843 = 4;
		int32_t L_1844 = (L_1842)->GetAt(static_cast<il2cpp_array_size_t>(L_1843));
		int32_t* L_1845 = V_0;
		int32_t L_1846 = V_22;
		int32_t L_1847 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1845, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1846, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1848 = V_1;
		NullCheck(L_1848);
		int32_t L_1849 = 3;
		int32_t L_1850 = (L_1848)->GetAt(static_cast<il2cpp_array_size_t>(L_1849));
		int32_t* L_1851 = V_0;
		int32_t L_1852 = V_22;
		int32_t L_1853 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1851, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1852, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1854 = V_1;
		NullCheck(L_1854);
		int32_t L_1855 = 2;
		int32_t L_1856 = (L_1854)->GetAt(static_cast<il2cpp_array_size_t>(L_1855));
		int32_t* L_1857 = V_0;
		int32_t L_1858 = V_22;
		int32_t L_1859 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1857, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1858, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1860 = V_1;
		NullCheck(L_1860);
		int32_t L_1861 = 1;
		int32_t L_1862 = (L_1860)->GetAt(static_cast<il2cpp_array_size_t>(L_1861));
		int32_t* L_1863 = V_0;
		int32_t L_1864 = V_22;
		int32_t L_1865 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1863, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1864, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1866 = V_1;
		NullCheck(L_1866);
		int32_t L_1867 = 0;
		int32_t L_1868 = (L_1866)->GetAt(static_cast<il2cpp_array_size_t>(L_1867));
		int32_t* L_1869 = V_0;
		int32_t L_1870 = V_22;
		int32_t L_1871 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1869, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1870, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_1718), ((int64_t)L_1721))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1724), ((int64_t)L_1727))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1730), ((int64_t)L_1733))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1736), ((int64_t)L_1739))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1742), ((int64_t)L_1745))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1748), ((int64_t)L_1751))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1754), ((int64_t)L_1757))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1760), ((int64_t)L_1763))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1766), ((int64_t)L_1769))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1772), ((int64_t)L_1775))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1778), ((int64_t)L_1781))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1784), ((int64_t)L_1787))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1790), ((int64_t)L_1793))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1796), ((int64_t)L_1799))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1802), ((int64_t)L_1805))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1808), ((int64_t)L_1811))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1814), ((int64_t)L_1817))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1820), ((int64_t)L_1823))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1826), ((int64_t)L_1829))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1832), ((int64_t)L_1835))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1838), ((int64_t)L_1841))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1844), ((int64_t)L_1847))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1850), ((int64_t)L_1853))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1856), ((int64_t)L_1859))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1862), ((int64_t)L_1865))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1868), ((int64_t)L_1871)))));
		int32_t* L_1872 = V_0;
		int32_t L_1873 = V_22;
		int32_t* L_1874 = ___0_residual;
		int32_t L_1875 = V_22;
		int32_t L_1876 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1874, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1875), 4)))));
		int64_t L_1877 = V_15;
		int32_t L_1878 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1872, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1873), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_1876, ((int32_t)((int64_t)(L_1877>>((int32_t)(L_1878&((int32_t)63))))))));
		int32_t L_1879 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_1879, 1));
	}

IL_17e9:
	{
		int32_t L_1880 = V_22;
		int32_t L_1881 = ___2_length;
		if ((((int32_t)L_1880) < ((int32_t)L_1881)))
		{
			goto IL_15eb;
		}
	}
	{
		return;
	}

IL_17f2:
	{
		V_23 = 0;
		goto IL_19e5;
	}

IL_17fa:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1882 = V_1;
		NullCheck(L_1882);
		int32_t L_1883 = ((int32_t)24);
		int32_t L_1884 = (L_1882)->GetAt(static_cast<il2cpp_array_size_t>(L_1883));
		int32_t* L_1885 = V_0;
		int32_t L_1886 = V_23;
		int32_t L_1887 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1885, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1886, ((int32_t)25)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1888 = V_1;
		NullCheck(L_1888);
		int32_t L_1889 = ((int32_t)23);
		int32_t L_1890 = (L_1888)->GetAt(static_cast<il2cpp_array_size_t>(L_1889));
		int32_t* L_1891 = V_0;
		int32_t L_1892 = V_23;
		int32_t L_1893 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1891, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1892, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1894 = V_1;
		NullCheck(L_1894);
		int32_t L_1895 = ((int32_t)22);
		int32_t L_1896 = (L_1894)->GetAt(static_cast<il2cpp_array_size_t>(L_1895));
		int32_t* L_1897 = V_0;
		int32_t L_1898 = V_23;
		int32_t L_1899 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1897, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1898, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1900 = V_1;
		NullCheck(L_1900);
		int32_t L_1901 = ((int32_t)21);
		int32_t L_1902 = (L_1900)->GetAt(static_cast<il2cpp_array_size_t>(L_1901));
		int32_t* L_1903 = V_0;
		int32_t L_1904 = V_23;
		int32_t L_1905 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1903, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1904, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1906 = V_1;
		NullCheck(L_1906);
		int32_t L_1907 = ((int32_t)20);
		int32_t L_1908 = (L_1906)->GetAt(static_cast<il2cpp_array_size_t>(L_1907));
		int32_t* L_1909 = V_0;
		int32_t L_1910 = V_23;
		int32_t L_1911 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1909, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1910, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1912 = V_1;
		NullCheck(L_1912);
		int32_t L_1913 = ((int32_t)19);
		int32_t L_1914 = (L_1912)->GetAt(static_cast<il2cpp_array_size_t>(L_1913));
		int32_t* L_1915 = V_0;
		int32_t L_1916 = V_23;
		int32_t L_1917 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1915, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1916, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1918 = V_1;
		NullCheck(L_1918);
		int32_t L_1919 = ((int32_t)18);
		int32_t L_1920 = (L_1918)->GetAt(static_cast<il2cpp_array_size_t>(L_1919));
		int32_t* L_1921 = V_0;
		int32_t L_1922 = V_23;
		int32_t L_1923 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1921, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1922, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1924 = V_1;
		NullCheck(L_1924);
		int32_t L_1925 = ((int32_t)17);
		int32_t L_1926 = (L_1924)->GetAt(static_cast<il2cpp_array_size_t>(L_1925));
		int32_t* L_1927 = V_0;
		int32_t L_1928 = V_23;
		int32_t L_1929 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1927, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1928, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1930 = V_1;
		NullCheck(L_1930);
		int32_t L_1931 = ((int32_t)16);
		int32_t L_1932 = (L_1930)->GetAt(static_cast<il2cpp_array_size_t>(L_1931));
		int32_t* L_1933 = V_0;
		int32_t L_1934 = V_23;
		int32_t L_1935 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1933, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1934, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1936 = V_1;
		NullCheck(L_1936);
		int32_t L_1937 = ((int32_t)15);
		int32_t L_1938 = (L_1936)->GetAt(static_cast<il2cpp_array_size_t>(L_1937));
		int32_t* L_1939 = V_0;
		int32_t L_1940 = V_23;
		int32_t L_1941 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1939, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1940, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1942 = V_1;
		NullCheck(L_1942);
		int32_t L_1943 = ((int32_t)14);
		int32_t L_1944 = (L_1942)->GetAt(static_cast<il2cpp_array_size_t>(L_1943));
		int32_t* L_1945 = V_0;
		int32_t L_1946 = V_23;
		int32_t L_1947 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1945, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1946, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1948 = V_1;
		NullCheck(L_1948);
		int32_t L_1949 = ((int32_t)13);
		int32_t L_1950 = (L_1948)->GetAt(static_cast<il2cpp_array_size_t>(L_1949));
		int32_t* L_1951 = V_0;
		int32_t L_1952 = V_23;
		int32_t L_1953 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1951, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1952, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1954 = V_1;
		NullCheck(L_1954);
		int32_t L_1955 = ((int32_t)12);
		int32_t L_1956 = (L_1954)->GetAt(static_cast<il2cpp_array_size_t>(L_1955));
		int32_t* L_1957 = V_0;
		int32_t L_1958 = V_23;
		int32_t L_1959 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1957, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1958, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1960 = V_1;
		NullCheck(L_1960);
		int32_t L_1961 = ((int32_t)11);
		int32_t L_1962 = (L_1960)->GetAt(static_cast<il2cpp_array_size_t>(L_1961));
		int32_t* L_1963 = V_0;
		int32_t L_1964 = V_23;
		int32_t L_1965 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1963, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1964, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1966 = V_1;
		NullCheck(L_1966);
		int32_t L_1967 = ((int32_t)10);
		int32_t L_1968 = (L_1966)->GetAt(static_cast<il2cpp_array_size_t>(L_1967));
		int32_t* L_1969 = V_0;
		int32_t L_1970 = V_23;
		int32_t L_1971 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1969, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1970, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1972 = V_1;
		NullCheck(L_1972);
		int32_t L_1973 = ((int32_t)9);
		int32_t L_1974 = (L_1972)->GetAt(static_cast<il2cpp_array_size_t>(L_1973));
		int32_t* L_1975 = V_0;
		int32_t L_1976 = V_23;
		int32_t L_1977 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1975, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1976, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1978 = V_1;
		NullCheck(L_1978);
		int32_t L_1979 = 8;
		int32_t L_1980 = (L_1978)->GetAt(static_cast<il2cpp_array_size_t>(L_1979));
		int32_t* L_1981 = V_0;
		int32_t L_1982 = V_23;
		int32_t L_1983 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1981, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1982, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1984 = V_1;
		NullCheck(L_1984);
		int32_t L_1985 = 7;
		int32_t L_1986 = (L_1984)->GetAt(static_cast<il2cpp_array_size_t>(L_1985));
		int32_t* L_1987 = V_0;
		int32_t L_1988 = V_23;
		int32_t L_1989 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1987, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1988, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1990 = V_1;
		NullCheck(L_1990);
		int32_t L_1991 = 6;
		int32_t L_1992 = (L_1990)->GetAt(static_cast<il2cpp_array_size_t>(L_1991));
		int32_t* L_1993 = V_0;
		int32_t L_1994 = V_23;
		int32_t L_1995 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1993, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_1994, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1996 = V_1;
		NullCheck(L_1996);
		int32_t L_1997 = 5;
		int32_t L_1998 = (L_1996)->GetAt(static_cast<il2cpp_array_size_t>(L_1997));
		int32_t* L_1999 = V_0;
		int32_t L_2000 = V_23;
		int32_t L_2001 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_1999, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2000, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2002 = V_1;
		NullCheck(L_2002);
		int32_t L_2003 = 4;
		int32_t L_2004 = (L_2002)->GetAt(static_cast<il2cpp_array_size_t>(L_2003));
		int32_t* L_2005 = V_0;
		int32_t L_2006 = V_23;
		int32_t L_2007 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2005, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2006, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2008 = V_1;
		NullCheck(L_2008);
		int32_t L_2009 = 3;
		int32_t L_2010 = (L_2008)->GetAt(static_cast<il2cpp_array_size_t>(L_2009));
		int32_t* L_2011 = V_0;
		int32_t L_2012 = V_23;
		int32_t L_2013 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2011, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2012, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2014 = V_1;
		NullCheck(L_2014);
		int32_t L_2015 = 2;
		int32_t L_2016 = (L_2014)->GetAt(static_cast<il2cpp_array_size_t>(L_2015));
		int32_t* L_2017 = V_0;
		int32_t L_2018 = V_23;
		int32_t L_2019 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2017, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2018, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2020 = V_1;
		NullCheck(L_2020);
		int32_t L_2021 = 1;
		int32_t L_2022 = (L_2020)->GetAt(static_cast<il2cpp_array_size_t>(L_2021));
		int32_t* L_2023 = V_0;
		int32_t L_2024 = V_23;
		int32_t L_2025 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2023, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2024, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2026 = V_1;
		NullCheck(L_2026);
		int32_t L_2027 = 0;
		int32_t L_2028 = (L_2026)->GetAt(static_cast<il2cpp_array_size_t>(L_2027));
		int32_t* L_2029 = V_0;
		int32_t L_2030 = V_23;
		int32_t L_2031 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2029, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2030, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_1884), ((int64_t)L_1887))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1890), ((int64_t)L_1893))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1896), ((int64_t)L_1899))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1902), ((int64_t)L_1905))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1908), ((int64_t)L_1911))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1914), ((int64_t)L_1917))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1920), ((int64_t)L_1923))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1926), ((int64_t)L_1929))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1932), ((int64_t)L_1935))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1938), ((int64_t)L_1941))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1944), ((int64_t)L_1947))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1950), ((int64_t)L_1953))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1956), ((int64_t)L_1959))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1962), ((int64_t)L_1965))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1968), ((int64_t)L_1971))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1974), ((int64_t)L_1977))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1980), ((int64_t)L_1983))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1986), ((int64_t)L_1989))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1992), ((int64_t)L_1995))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_1998), ((int64_t)L_2001))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2004), ((int64_t)L_2007))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2010), ((int64_t)L_2013))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2016), ((int64_t)L_2019))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2022), ((int64_t)L_2025))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2028), ((int64_t)L_2031)))));
		int32_t* L_2032 = V_0;
		int32_t L_2033 = V_23;
		int32_t* L_2034 = ___0_residual;
		int32_t L_2035 = V_23;
		int32_t L_2036 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2034, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2035), 4)))));
		int64_t L_2037 = V_15;
		int32_t L_2038 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2032, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2033), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2036, ((int32_t)((int64_t)(L_2037>>((int32_t)(L_2038&((int32_t)63))))))));
		int32_t L_2039 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_2039, 1));
	}

IL_19e5:
	{
		int32_t L_2040 = V_23;
		int32_t L_2041 = ___2_length;
		if ((((int32_t)L_2040) < ((int32_t)L_2041)))
		{
			goto IL_17fa;
		}
	}
	{
		return;
	}

IL_19ee:
	{
		V_24 = 0;
		goto IL_1bce;
	}

IL_19f6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2042 = V_1;
		NullCheck(L_2042);
		int32_t L_2043 = ((int32_t)23);
		int32_t L_2044 = (L_2042)->GetAt(static_cast<il2cpp_array_size_t>(L_2043));
		int32_t* L_2045 = V_0;
		int32_t L_2046 = V_24;
		int32_t L_2047 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2045, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2046, ((int32_t)24)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2048 = V_1;
		NullCheck(L_2048);
		int32_t L_2049 = ((int32_t)22);
		int32_t L_2050 = (L_2048)->GetAt(static_cast<il2cpp_array_size_t>(L_2049));
		int32_t* L_2051 = V_0;
		int32_t L_2052 = V_24;
		int32_t L_2053 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2051, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2052, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2054 = V_1;
		NullCheck(L_2054);
		int32_t L_2055 = ((int32_t)21);
		int32_t L_2056 = (L_2054)->GetAt(static_cast<il2cpp_array_size_t>(L_2055));
		int32_t* L_2057 = V_0;
		int32_t L_2058 = V_24;
		int32_t L_2059 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2057, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2058, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2060 = V_1;
		NullCheck(L_2060);
		int32_t L_2061 = ((int32_t)20);
		int32_t L_2062 = (L_2060)->GetAt(static_cast<il2cpp_array_size_t>(L_2061));
		int32_t* L_2063 = V_0;
		int32_t L_2064 = V_24;
		int32_t L_2065 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2063, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2064, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2066 = V_1;
		NullCheck(L_2066);
		int32_t L_2067 = ((int32_t)19);
		int32_t L_2068 = (L_2066)->GetAt(static_cast<il2cpp_array_size_t>(L_2067));
		int32_t* L_2069 = V_0;
		int32_t L_2070 = V_24;
		int32_t L_2071 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2069, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2070, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2072 = V_1;
		NullCheck(L_2072);
		int32_t L_2073 = ((int32_t)18);
		int32_t L_2074 = (L_2072)->GetAt(static_cast<il2cpp_array_size_t>(L_2073));
		int32_t* L_2075 = V_0;
		int32_t L_2076 = V_24;
		int32_t L_2077 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2075, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2076, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2078 = V_1;
		NullCheck(L_2078);
		int32_t L_2079 = ((int32_t)17);
		int32_t L_2080 = (L_2078)->GetAt(static_cast<il2cpp_array_size_t>(L_2079));
		int32_t* L_2081 = V_0;
		int32_t L_2082 = V_24;
		int32_t L_2083 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2081, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2082, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2084 = V_1;
		NullCheck(L_2084);
		int32_t L_2085 = ((int32_t)16);
		int32_t L_2086 = (L_2084)->GetAt(static_cast<il2cpp_array_size_t>(L_2085));
		int32_t* L_2087 = V_0;
		int32_t L_2088 = V_24;
		int32_t L_2089 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2087, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2088, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2090 = V_1;
		NullCheck(L_2090);
		int32_t L_2091 = ((int32_t)15);
		int32_t L_2092 = (L_2090)->GetAt(static_cast<il2cpp_array_size_t>(L_2091));
		int32_t* L_2093 = V_0;
		int32_t L_2094 = V_24;
		int32_t L_2095 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2093, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2094, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2096 = V_1;
		NullCheck(L_2096);
		int32_t L_2097 = ((int32_t)14);
		int32_t L_2098 = (L_2096)->GetAt(static_cast<il2cpp_array_size_t>(L_2097));
		int32_t* L_2099 = V_0;
		int32_t L_2100 = V_24;
		int32_t L_2101 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2099, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2100, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2102 = V_1;
		NullCheck(L_2102);
		int32_t L_2103 = ((int32_t)13);
		int32_t L_2104 = (L_2102)->GetAt(static_cast<il2cpp_array_size_t>(L_2103));
		int32_t* L_2105 = V_0;
		int32_t L_2106 = V_24;
		int32_t L_2107 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2105, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2106, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2108 = V_1;
		NullCheck(L_2108);
		int32_t L_2109 = ((int32_t)12);
		int32_t L_2110 = (L_2108)->GetAt(static_cast<il2cpp_array_size_t>(L_2109));
		int32_t* L_2111 = V_0;
		int32_t L_2112 = V_24;
		int32_t L_2113 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2111, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2112, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2114 = V_1;
		NullCheck(L_2114);
		int32_t L_2115 = ((int32_t)11);
		int32_t L_2116 = (L_2114)->GetAt(static_cast<il2cpp_array_size_t>(L_2115));
		int32_t* L_2117 = V_0;
		int32_t L_2118 = V_24;
		int32_t L_2119 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2117, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2118, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2120 = V_1;
		NullCheck(L_2120);
		int32_t L_2121 = ((int32_t)10);
		int32_t L_2122 = (L_2120)->GetAt(static_cast<il2cpp_array_size_t>(L_2121));
		int32_t* L_2123 = V_0;
		int32_t L_2124 = V_24;
		int32_t L_2125 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2123, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2124, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2126 = V_1;
		NullCheck(L_2126);
		int32_t L_2127 = ((int32_t)9);
		int32_t L_2128 = (L_2126)->GetAt(static_cast<il2cpp_array_size_t>(L_2127));
		int32_t* L_2129 = V_0;
		int32_t L_2130 = V_24;
		int32_t L_2131 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2129, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2130, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2132 = V_1;
		NullCheck(L_2132);
		int32_t L_2133 = 8;
		int32_t L_2134 = (L_2132)->GetAt(static_cast<il2cpp_array_size_t>(L_2133));
		int32_t* L_2135 = V_0;
		int32_t L_2136 = V_24;
		int32_t L_2137 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2136, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2138 = V_1;
		NullCheck(L_2138);
		int32_t L_2139 = 7;
		int32_t L_2140 = (L_2138)->GetAt(static_cast<il2cpp_array_size_t>(L_2139));
		int32_t* L_2141 = V_0;
		int32_t L_2142 = V_24;
		int32_t L_2143 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2141, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2142, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2144 = V_1;
		NullCheck(L_2144);
		int32_t L_2145 = 6;
		int32_t L_2146 = (L_2144)->GetAt(static_cast<il2cpp_array_size_t>(L_2145));
		int32_t* L_2147 = V_0;
		int32_t L_2148 = V_24;
		int32_t L_2149 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2147, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2148, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2150 = V_1;
		NullCheck(L_2150);
		int32_t L_2151 = 5;
		int32_t L_2152 = (L_2150)->GetAt(static_cast<il2cpp_array_size_t>(L_2151));
		int32_t* L_2153 = V_0;
		int32_t L_2154 = V_24;
		int32_t L_2155 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2153, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2154, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2156 = V_1;
		NullCheck(L_2156);
		int32_t L_2157 = 4;
		int32_t L_2158 = (L_2156)->GetAt(static_cast<il2cpp_array_size_t>(L_2157));
		int32_t* L_2159 = V_0;
		int32_t L_2160 = V_24;
		int32_t L_2161 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2159, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2160, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2162 = V_1;
		NullCheck(L_2162);
		int32_t L_2163 = 3;
		int32_t L_2164 = (L_2162)->GetAt(static_cast<il2cpp_array_size_t>(L_2163));
		int32_t* L_2165 = V_0;
		int32_t L_2166 = V_24;
		int32_t L_2167 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2166, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2168 = V_1;
		NullCheck(L_2168);
		int32_t L_2169 = 2;
		int32_t L_2170 = (L_2168)->GetAt(static_cast<il2cpp_array_size_t>(L_2169));
		int32_t* L_2171 = V_0;
		int32_t L_2172 = V_24;
		int32_t L_2173 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2171, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2172, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2174 = V_1;
		NullCheck(L_2174);
		int32_t L_2175 = 1;
		int32_t L_2176 = (L_2174)->GetAt(static_cast<il2cpp_array_size_t>(L_2175));
		int32_t* L_2177 = V_0;
		int32_t L_2178 = V_24;
		int32_t L_2179 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2178, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2180 = V_1;
		NullCheck(L_2180);
		int32_t L_2181 = 0;
		int32_t L_2182 = (L_2180)->GetAt(static_cast<il2cpp_array_size_t>(L_2181));
		int32_t* L_2183 = V_0;
		int32_t L_2184 = V_24;
		int32_t L_2185 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2183, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2184, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2044), ((int64_t)L_2047))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2050), ((int64_t)L_2053))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2056), ((int64_t)L_2059))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2062), ((int64_t)L_2065))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2068), ((int64_t)L_2071))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2074), ((int64_t)L_2077))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2080), ((int64_t)L_2083))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2086), ((int64_t)L_2089))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2092), ((int64_t)L_2095))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2098), ((int64_t)L_2101))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2104), ((int64_t)L_2107))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2110), ((int64_t)L_2113))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2116), ((int64_t)L_2119))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2122), ((int64_t)L_2125))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2128), ((int64_t)L_2131))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2134), ((int64_t)L_2137))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2140), ((int64_t)L_2143))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2146), ((int64_t)L_2149))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2152), ((int64_t)L_2155))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2158), ((int64_t)L_2161))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2164), ((int64_t)L_2167))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2170), ((int64_t)L_2173))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2176), ((int64_t)L_2179))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2182), ((int64_t)L_2185)))));
		int32_t* L_2186 = V_0;
		int32_t L_2187 = V_24;
		int32_t* L_2188 = ___0_residual;
		int32_t L_2189 = V_24;
		int32_t L_2190 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2188, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2189), 4)))));
		int64_t L_2191 = V_15;
		int32_t L_2192 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2186, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2187), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2190, ((int32_t)((int64_t)(L_2191>>((int32_t)(L_2192&((int32_t)63))))))));
		int32_t L_2193 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_2193, 1));
	}

IL_1bce:
	{
		int32_t L_2194 = V_24;
		int32_t L_2195 = ___2_length;
		if ((((int32_t)L_2194) < ((int32_t)L_2195)))
		{
			goto IL_19f6;
		}
	}
	{
		return;
	}

IL_1bd7:
	{
		V_25 = 0;
		goto IL_1da4;
	}

IL_1bdf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2196 = V_1;
		NullCheck(L_2196);
		int32_t L_2197 = ((int32_t)22);
		int32_t L_2198 = (L_2196)->GetAt(static_cast<il2cpp_array_size_t>(L_2197));
		int32_t* L_2199 = V_0;
		int32_t L_2200 = V_25;
		int32_t L_2201 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2199, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2200, ((int32_t)23)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2202 = V_1;
		NullCheck(L_2202);
		int32_t L_2203 = ((int32_t)21);
		int32_t L_2204 = (L_2202)->GetAt(static_cast<il2cpp_array_size_t>(L_2203));
		int32_t* L_2205 = V_0;
		int32_t L_2206 = V_25;
		int32_t L_2207 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2205, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2206, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2208 = V_1;
		NullCheck(L_2208);
		int32_t L_2209 = ((int32_t)20);
		int32_t L_2210 = (L_2208)->GetAt(static_cast<il2cpp_array_size_t>(L_2209));
		int32_t* L_2211 = V_0;
		int32_t L_2212 = V_25;
		int32_t L_2213 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2211, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2212, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2214 = V_1;
		NullCheck(L_2214);
		int32_t L_2215 = ((int32_t)19);
		int32_t L_2216 = (L_2214)->GetAt(static_cast<il2cpp_array_size_t>(L_2215));
		int32_t* L_2217 = V_0;
		int32_t L_2218 = V_25;
		int32_t L_2219 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2217, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2218, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2220 = V_1;
		NullCheck(L_2220);
		int32_t L_2221 = ((int32_t)18);
		int32_t L_2222 = (L_2220)->GetAt(static_cast<il2cpp_array_size_t>(L_2221));
		int32_t* L_2223 = V_0;
		int32_t L_2224 = V_25;
		int32_t L_2225 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2223, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2224, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2226 = V_1;
		NullCheck(L_2226);
		int32_t L_2227 = ((int32_t)17);
		int32_t L_2228 = (L_2226)->GetAt(static_cast<il2cpp_array_size_t>(L_2227));
		int32_t* L_2229 = V_0;
		int32_t L_2230 = V_25;
		int32_t L_2231 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2229, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2230, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2232 = V_1;
		NullCheck(L_2232);
		int32_t L_2233 = ((int32_t)16);
		int32_t L_2234 = (L_2232)->GetAt(static_cast<il2cpp_array_size_t>(L_2233));
		int32_t* L_2235 = V_0;
		int32_t L_2236 = V_25;
		int32_t L_2237 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2235, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2236, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2238 = V_1;
		NullCheck(L_2238);
		int32_t L_2239 = ((int32_t)15);
		int32_t L_2240 = (L_2238)->GetAt(static_cast<il2cpp_array_size_t>(L_2239));
		int32_t* L_2241 = V_0;
		int32_t L_2242 = V_25;
		int32_t L_2243 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2241, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2242, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2244 = V_1;
		NullCheck(L_2244);
		int32_t L_2245 = ((int32_t)14);
		int32_t L_2246 = (L_2244)->GetAt(static_cast<il2cpp_array_size_t>(L_2245));
		int32_t* L_2247 = V_0;
		int32_t L_2248 = V_25;
		int32_t L_2249 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2247, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2248, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2250 = V_1;
		NullCheck(L_2250);
		int32_t L_2251 = ((int32_t)13);
		int32_t L_2252 = (L_2250)->GetAt(static_cast<il2cpp_array_size_t>(L_2251));
		int32_t* L_2253 = V_0;
		int32_t L_2254 = V_25;
		int32_t L_2255 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2253, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2254, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2256 = V_1;
		NullCheck(L_2256);
		int32_t L_2257 = ((int32_t)12);
		int32_t L_2258 = (L_2256)->GetAt(static_cast<il2cpp_array_size_t>(L_2257));
		int32_t* L_2259 = V_0;
		int32_t L_2260 = V_25;
		int32_t L_2261 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2259, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2260, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2262 = V_1;
		NullCheck(L_2262);
		int32_t L_2263 = ((int32_t)11);
		int32_t L_2264 = (L_2262)->GetAt(static_cast<il2cpp_array_size_t>(L_2263));
		int32_t* L_2265 = V_0;
		int32_t L_2266 = V_25;
		int32_t L_2267 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2265, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2266, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2268 = V_1;
		NullCheck(L_2268);
		int32_t L_2269 = ((int32_t)10);
		int32_t L_2270 = (L_2268)->GetAt(static_cast<il2cpp_array_size_t>(L_2269));
		int32_t* L_2271 = V_0;
		int32_t L_2272 = V_25;
		int32_t L_2273 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2271, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2272, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2274 = V_1;
		NullCheck(L_2274);
		int32_t L_2275 = ((int32_t)9);
		int32_t L_2276 = (L_2274)->GetAt(static_cast<il2cpp_array_size_t>(L_2275));
		int32_t* L_2277 = V_0;
		int32_t L_2278 = V_25;
		int32_t L_2279 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2277, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2278, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2280 = V_1;
		NullCheck(L_2280);
		int32_t L_2281 = 8;
		int32_t L_2282 = (L_2280)->GetAt(static_cast<il2cpp_array_size_t>(L_2281));
		int32_t* L_2283 = V_0;
		int32_t L_2284 = V_25;
		int32_t L_2285 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2283, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2284, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2286 = V_1;
		NullCheck(L_2286);
		int32_t L_2287 = 7;
		int32_t L_2288 = (L_2286)->GetAt(static_cast<il2cpp_array_size_t>(L_2287));
		int32_t* L_2289 = V_0;
		int32_t L_2290 = V_25;
		int32_t L_2291 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2289, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2290, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2292 = V_1;
		NullCheck(L_2292);
		int32_t L_2293 = 6;
		int32_t L_2294 = (L_2292)->GetAt(static_cast<il2cpp_array_size_t>(L_2293));
		int32_t* L_2295 = V_0;
		int32_t L_2296 = V_25;
		int32_t L_2297 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2295, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2296, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2298 = V_1;
		NullCheck(L_2298);
		int32_t L_2299 = 5;
		int32_t L_2300 = (L_2298)->GetAt(static_cast<il2cpp_array_size_t>(L_2299));
		int32_t* L_2301 = V_0;
		int32_t L_2302 = V_25;
		int32_t L_2303 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2301, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2302, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2304 = V_1;
		NullCheck(L_2304);
		int32_t L_2305 = 4;
		int32_t L_2306 = (L_2304)->GetAt(static_cast<il2cpp_array_size_t>(L_2305));
		int32_t* L_2307 = V_0;
		int32_t L_2308 = V_25;
		int32_t L_2309 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2307, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2308, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2310 = V_1;
		NullCheck(L_2310);
		int32_t L_2311 = 3;
		int32_t L_2312 = (L_2310)->GetAt(static_cast<il2cpp_array_size_t>(L_2311));
		int32_t* L_2313 = V_0;
		int32_t L_2314 = V_25;
		int32_t L_2315 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2313, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2314, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2316 = V_1;
		NullCheck(L_2316);
		int32_t L_2317 = 2;
		int32_t L_2318 = (L_2316)->GetAt(static_cast<il2cpp_array_size_t>(L_2317));
		int32_t* L_2319 = V_0;
		int32_t L_2320 = V_25;
		int32_t L_2321 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2319, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2320, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2322 = V_1;
		NullCheck(L_2322);
		int32_t L_2323 = 1;
		int32_t L_2324 = (L_2322)->GetAt(static_cast<il2cpp_array_size_t>(L_2323));
		int32_t* L_2325 = V_0;
		int32_t L_2326 = V_25;
		int32_t L_2327 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2325, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2326, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2328 = V_1;
		NullCheck(L_2328);
		int32_t L_2329 = 0;
		int32_t L_2330 = (L_2328)->GetAt(static_cast<il2cpp_array_size_t>(L_2329));
		int32_t* L_2331 = V_0;
		int32_t L_2332 = V_25;
		int32_t L_2333 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2331, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2332, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2198), ((int64_t)L_2201))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2204), ((int64_t)L_2207))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2210), ((int64_t)L_2213))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2216), ((int64_t)L_2219))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2222), ((int64_t)L_2225))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2228), ((int64_t)L_2231))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2234), ((int64_t)L_2237))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2240), ((int64_t)L_2243))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2246), ((int64_t)L_2249))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2252), ((int64_t)L_2255))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2258), ((int64_t)L_2261))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2264), ((int64_t)L_2267))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2270), ((int64_t)L_2273))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2276), ((int64_t)L_2279))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2282), ((int64_t)L_2285))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2288), ((int64_t)L_2291))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2294), ((int64_t)L_2297))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2300), ((int64_t)L_2303))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2306), ((int64_t)L_2309))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2312), ((int64_t)L_2315))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2318), ((int64_t)L_2321))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2324), ((int64_t)L_2327))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2330), ((int64_t)L_2333)))));
		int32_t* L_2334 = V_0;
		int32_t L_2335 = V_25;
		int32_t* L_2336 = ___0_residual;
		int32_t L_2337 = V_25;
		int32_t L_2338 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2336, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2337), 4)))));
		int64_t L_2339 = V_15;
		int32_t L_2340 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2334, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2335), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2338, ((int32_t)((int64_t)(L_2339>>((int32_t)(L_2340&((int32_t)63))))))));
		int32_t L_2341 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_2341, 1));
	}

IL_1da4:
	{
		int32_t L_2342 = V_25;
		int32_t L_2343 = ___2_length;
		if ((((int32_t)L_2342) < ((int32_t)L_2343)))
		{
			goto IL_1bdf;
		}
	}
	{
		return;
	}

IL_1dad:
	{
		V_26 = 0;
		goto IL_1f67;
	}

IL_1db5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2344 = V_1;
		NullCheck(L_2344);
		int32_t L_2345 = ((int32_t)21);
		int32_t L_2346 = (L_2344)->GetAt(static_cast<il2cpp_array_size_t>(L_2345));
		int32_t* L_2347 = V_0;
		int32_t L_2348 = V_26;
		int32_t L_2349 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2347, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2348, ((int32_t)22)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2350 = V_1;
		NullCheck(L_2350);
		int32_t L_2351 = ((int32_t)20);
		int32_t L_2352 = (L_2350)->GetAt(static_cast<il2cpp_array_size_t>(L_2351));
		int32_t* L_2353 = V_0;
		int32_t L_2354 = V_26;
		int32_t L_2355 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2353, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2354, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2356 = V_1;
		NullCheck(L_2356);
		int32_t L_2357 = ((int32_t)19);
		int32_t L_2358 = (L_2356)->GetAt(static_cast<il2cpp_array_size_t>(L_2357));
		int32_t* L_2359 = V_0;
		int32_t L_2360 = V_26;
		int32_t L_2361 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2359, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2360, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2362 = V_1;
		NullCheck(L_2362);
		int32_t L_2363 = ((int32_t)18);
		int32_t L_2364 = (L_2362)->GetAt(static_cast<il2cpp_array_size_t>(L_2363));
		int32_t* L_2365 = V_0;
		int32_t L_2366 = V_26;
		int32_t L_2367 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2365, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2366, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2368 = V_1;
		NullCheck(L_2368);
		int32_t L_2369 = ((int32_t)17);
		int32_t L_2370 = (L_2368)->GetAt(static_cast<il2cpp_array_size_t>(L_2369));
		int32_t* L_2371 = V_0;
		int32_t L_2372 = V_26;
		int32_t L_2373 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2371, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2372, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2374 = V_1;
		NullCheck(L_2374);
		int32_t L_2375 = ((int32_t)16);
		int32_t L_2376 = (L_2374)->GetAt(static_cast<il2cpp_array_size_t>(L_2375));
		int32_t* L_2377 = V_0;
		int32_t L_2378 = V_26;
		int32_t L_2379 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2377, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2378, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2380 = V_1;
		NullCheck(L_2380);
		int32_t L_2381 = ((int32_t)15);
		int32_t L_2382 = (L_2380)->GetAt(static_cast<il2cpp_array_size_t>(L_2381));
		int32_t* L_2383 = V_0;
		int32_t L_2384 = V_26;
		int32_t L_2385 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2383, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2384, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2386 = V_1;
		NullCheck(L_2386);
		int32_t L_2387 = ((int32_t)14);
		int32_t L_2388 = (L_2386)->GetAt(static_cast<il2cpp_array_size_t>(L_2387));
		int32_t* L_2389 = V_0;
		int32_t L_2390 = V_26;
		int32_t L_2391 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2389, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2390, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2392 = V_1;
		NullCheck(L_2392);
		int32_t L_2393 = ((int32_t)13);
		int32_t L_2394 = (L_2392)->GetAt(static_cast<il2cpp_array_size_t>(L_2393));
		int32_t* L_2395 = V_0;
		int32_t L_2396 = V_26;
		int32_t L_2397 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2395, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2396, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2398 = V_1;
		NullCheck(L_2398);
		int32_t L_2399 = ((int32_t)12);
		int32_t L_2400 = (L_2398)->GetAt(static_cast<il2cpp_array_size_t>(L_2399));
		int32_t* L_2401 = V_0;
		int32_t L_2402 = V_26;
		int32_t L_2403 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2401, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2402, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2404 = V_1;
		NullCheck(L_2404);
		int32_t L_2405 = ((int32_t)11);
		int32_t L_2406 = (L_2404)->GetAt(static_cast<il2cpp_array_size_t>(L_2405));
		int32_t* L_2407 = V_0;
		int32_t L_2408 = V_26;
		int32_t L_2409 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2407, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2408, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2410 = V_1;
		NullCheck(L_2410);
		int32_t L_2411 = ((int32_t)10);
		int32_t L_2412 = (L_2410)->GetAt(static_cast<il2cpp_array_size_t>(L_2411));
		int32_t* L_2413 = V_0;
		int32_t L_2414 = V_26;
		int32_t L_2415 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2413, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2414, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2416 = V_1;
		NullCheck(L_2416);
		int32_t L_2417 = ((int32_t)9);
		int32_t L_2418 = (L_2416)->GetAt(static_cast<il2cpp_array_size_t>(L_2417));
		int32_t* L_2419 = V_0;
		int32_t L_2420 = V_26;
		int32_t L_2421 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2419, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2420, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2422 = V_1;
		NullCheck(L_2422);
		int32_t L_2423 = 8;
		int32_t L_2424 = (L_2422)->GetAt(static_cast<il2cpp_array_size_t>(L_2423));
		int32_t* L_2425 = V_0;
		int32_t L_2426 = V_26;
		int32_t L_2427 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2425, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2426, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2428 = V_1;
		NullCheck(L_2428);
		int32_t L_2429 = 7;
		int32_t L_2430 = (L_2428)->GetAt(static_cast<il2cpp_array_size_t>(L_2429));
		int32_t* L_2431 = V_0;
		int32_t L_2432 = V_26;
		int32_t L_2433 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2431, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2432, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2434 = V_1;
		NullCheck(L_2434);
		int32_t L_2435 = 6;
		int32_t L_2436 = (L_2434)->GetAt(static_cast<il2cpp_array_size_t>(L_2435));
		int32_t* L_2437 = V_0;
		int32_t L_2438 = V_26;
		int32_t L_2439 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2437, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2438, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2440 = V_1;
		NullCheck(L_2440);
		int32_t L_2441 = 5;
		int32_t L_2442 = (L_2440)->GetAt(static_cast<il2cpp_array_size_t>(L_2441));
		int32_t* L_2443 = V_0;
		int32_t L_2444 = V_26;
		int32_t L_2445 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2443, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2444, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2446 = V_1;
		NullCheck(L_2446);
		int32_t L_2447 = 4;
		int32_t L_2448 = (L_2446)->GetAt(static_cast<il2cpp_array_size_t>(L_2447));
		int32_t* L_2449 = V_0;
		int32_t L_2450 = V_26;
		int32_t L_2451 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2449, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2450, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2452 = V_1;
		NullCheck(L_2452);
		int32_t L_2453 = 3;
		int32_t L_2454 = (L_2452)->GetAt(static_cast<il2cpp_array_size_t>(L_2453));
		int32_t* L_2455 = V_0;
		int32_t L_2456 = V_26;
		int32_t L_2457 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2455, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2456, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2458 = V_1;
		NullCheck(L_2458);
		int32_t L_2459 = 2;
		int32_t L_2460 = (L_2458)->GetAt(static_cast<il2cpp_array_size_t>(L_2459));
		int32_t* L_2461 = V_0;
		int32_t L_2462 = V_26;
		int32_t L_2463 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2461, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2462, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2464 = V_1;
		NullCheck(L_2464);
		int32_t L_2465 = 1;
		int32_t L_2466 = (L_2464)->GetAt(static_cast<il2cpp_array_size_t>(L_2465));
		int32_t* L_2467 = V_0;
		int32_t L_2468 = V_26;
		int32_t L_2469 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2467, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2468, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2470 = V_1;
		NullCheck(L_2470);
		int32_t L_2471 = 0;
		int32_t L_2472 = (L_2470)->GetAt(static_cast<il2cpp_array_size_t>(L_2471));
		int32_t* L_2473 = V_0;
		int32_t L_2474 = V_26;
		int32_t L_2475 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2473, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2474, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2346), ((int64_t)L_2349))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2352), ((int64_t)L_2355))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2358), ((int64_t)L_2361))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2364), ((int64_t)L_2367))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2370), ((int64_t)L_2373))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2376), ((int64_t)L_2379))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2382), ((int64_t)L_2385))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2388), ((int64_t)L_2391))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2394), ((int64_t)L_2397))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2400), ((int64_t)L_2403))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2406), ((int64_t)L_2409))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2412), ((int64_t)L_2415))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2418), ((int64_t)L_2421))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2424), ((int64_t)L_2427))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2430), ((int64_t)L_2433))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2436), ((int64_t)L_2439))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2442), ((int64_t)L_2445))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2448), ((int64_t)L_2451))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2454), ((int64_t)L_2457))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2460), ((int64_t)L_2463))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2466), ((int64_t)L_2469))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2472), ((int64_t)L_2475)))));
		int32_t* L_2476 = V_0;
		int32_t L_2477 = V_26;
		int32_t* L_2478 = ___0_residual;
		int32_t L_2479 = V_26;
		int32_t L_2480 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2478, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2479), 4)))));
		int64_t L_2481 = V_15;
		int32_t L_2482 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2476, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2477), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2480, ((int32_t)((int64_t)(L_2481>>((int32_t)(L_2482&((int32_t)63))))))));
		int32_t L_2483 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_2483, 1));
	}

IL_1f67:
	{
		int32_t L_2484 = V_26;
		int32_t L_2485 = ___2_length;
		if ((((int32_t)L_2484) < ((int32_t)L_2485)))
		{
			goto IL_1db5;
		}
	}
	{
		return;
	}

IL_1f70:
	{
		V_27 = 0;
		goto IL_2117;
	}

IL_1f78:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2486 = V_1;
		NullCheck(L_2486);
		int32_t L_2487 = ((int32_t)20);
		int32_t L_2488 = (L_2486)->GetAt(static_cast<il2cpp_array_size_t>(L_2487));
		int32_t* L_2489 = V_0;
		int32_t L_2490 = V_27;
		int32_t L_2491 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2489, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2490, ((int32_t)21)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2492 = V_1;
		NullCheck(L_2492);
		int32_t L_2493 = ((int32_t)19);
		int32_t L_2494 = (L_2492)->GetAt(static_cast<il2cpp_array_size_t>(L_2493));
		int32_t* L_2495 = V_0;
		int32_t L_2496 = V_27;
		int32_t L_2497 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2495, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2496, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2498 = V_1;
		NullCheck(L_2498);
		int32_t L_2499 = ((int32_t)18);
		int32_t L_2500 = (L_2498)->GetAt(static_cast<il2cpp_array_size_t>(L_2499));
		int32_t* L_2501 = V_0;
		int32_t L_2502 = V_27;
		int32_t L_2503 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2501, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2502, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2504 = V_1;
		NullCheck(L_2504);
		int32_t L_2505 = ((int32_t)17);
		int32_t L_2506 = (L_2504)->GetAt(static_cast<il2cpp_array_size_t>(L_2505));
		int32_t* L_2507 = V_0;
		int32_t L_2508 = V_27;
		int32_t L_2509 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2507, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2508, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2510 = V_1;
		NullCheck(L_2510);
		int32_t L_2511 = ((int32_t)16);
		int32_t L_2512 = (L_2510)->GetAt(static_cast<il2cpp_array_size_t>(L_2511));
		int32_t* L_2513 = V_0;
		int32_t L_2514 = V_27;
		int32_t L_2515 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2513, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2514, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2516 = V_1;
		NullCheck(L_2516);
		int32_t L_2517 = ((int32_t)15);
		int32_t L_2518 = (L_2516)->GetAt(static_cast<il2cpp_array_size_t>(L_2517));
		int32_t* L_2519 = V_0;
		int32_t L_2520 = V_27;
		int32_t L_2521 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2519, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2520, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2522 = V_1;
		NullCheck(L_2522);
		int32_t L_2523 = ((int32_t)14);
		int32_t L_2524 = (L_2522)->GetAt(static_cast<il2cpp_array_size_t>(L_2523));
		int32_t* L_2525 = V_0;
		int32_t L_2526 = V_27;
		int32_t L_2527 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2525, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2526, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2528 = V_1;
		NullCheck(L_2528);
		int32_t L_2529 = ((int32_t)13);
		int32_t L_2530 = (L_2528)->GetAt(static_cast<il2cpp_array_size_t>(L_2529));
		int32_t* L_2531 = V_0;
		int32_t L_2532 = V_27;
		int32_t L_2533 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2531, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2532, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2534 = V_1;
		NullCheck(L_2534);
		int32_t L_2535 = ((int32_t)12);
		int32_t L_2536 = (L_2534)->GetAt(static_cast<il2cpp_array_size_t>(L_2535));
		int32_t* L_2537 = V_0;
		int32_t L_2538 = V_27;
		int32_t L_2539 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2537, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2538, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2540 = V_1;
		NullCheck(L_2540);
		int32_t L_2541 = ((int32_t)11);
		int32_t L_2542 = (L_2540)->GetAt(static_cast<il2cpp_array_size_t>(L_2541));
		int32_t* L_2543 = V_0;
		int32_t L_2544 = V_27;
		int32_t L_2545 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2543, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2544, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2546 = V_1;
		NullCheck(L_2546);
		int32_t L_2547 = ((int32_t)10);
		int32_t L_2548 = (L_2546)->GetAt(static_cast<il2cpp_array_size_t>(L_2547));
		int32_t* L_2549 = V_0;
		int32_t L_2550 = V_27;
		int32_t L_2551 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2549, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2550, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2552 = V_1;
		NullCheck(L_2552);
		int32_t L_2553 = ((int32_t)9);
		int32_t L_2554 = (L_2552)->GetAt(static_cast<il2cpp_array_size_t>(L_2553));
		int32_t* L_2555 = V_0;
		int32_t L_2556 = V_27;
		int32_t L_2557 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2555, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2556, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2558 = V_1;
		NullCheck(L_2558);
		int32_t L_2559 = 8;
		int32_t L_2560 = (L_2558)->GetAt(static_cast<il2cpp_array_size_t>(L_2559));
		int32_t* L_2561 = V_0;
		int32_t L_2562 = V_27;
		int32_t L_2563 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2561, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2562, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2564 = V_1;
		NullCheck(L_2564);
		int32_t L_2565 = 7;
		int32_t L_2566 = (L_2564)->GetAt(static_cast<il2cpp_array_size_t>(L_2565));
		int32_t* L_2567 = V_0;
		int32_t L_2568 = V_27;
		int32_t L_2569 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2567, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2568, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2570 = V_1;
		NullCheck(L_2570);
		int32_t L_2571 = 6;
		int32_t L_2572 = (L_2570)->GetAt(static_cast<il2cpp_array_size_t>(L_2571));
		int32_t* L_2573 = V_0;
		int32_t L_2574 = V_27;
		int32_t L_2575 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2573, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2574, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2576 = V_1;
		NullCheck(L_2576);
		int32_t L_2577 = 5;
		int32_t L_2578 = (L_2576)->GetAt(static_cast<il2cpp_array_size_t>(L_2577));
		int32_t* L_2579 = V_0;
		int32_t L_2580 = V_27;
		int32_t L_2581 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2579, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2580, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2582 = V_1;
		NullCheck(L_2582);
		int32_t L_2583 = 4;
		int32_t L_2584 = (L_2582)->GetAt(static_cast<il2cpp_array_size_t>(L_2583));
		int32_t* L_2585 = V_0;
		int32_t L_2586 = V_27;
		int32_t L_2587 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2585, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2586, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2588 = V_1;
		NullCheck(L_2588);
		int32_t L_2589 = 3;
		int32_t L_2590 = (L_2588)->GetAt(static_cast<il2cpp_array_size_t>(L_2589));
		int32_t* L_2591 = V_0;
		int32_t L_2592 = V_27;
		int32_t L_2593 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2591, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2592, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2594 = V_1;
		NullCheck(L_2594);
		int32_t L_2595 = 2;
		int32_t L_2596 = (L_2594)->GetAt(static_cast<il2cpp_array_size_t>(L_2595));
		int32_t* L_2597 = V_0;
		int32_t L_2598 = V_27;
		int32_t L_2599 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2597, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2598, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2600 = V_1;
		NullCheck(L_2600);
		int32_t L_2601 = 1;
		int32_t L_2602 = (L_2600)->GetAt(static_cast<il2cpp_array_size_t>(L_2601));
		int32_t* L_2603 = V_0;
		int32_t L_2604 = V_27;
		int32_t L_2605 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2603, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2604, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2606 = V_1;
		NullCheck(L_2606);
		int32_t L_2607 = 0;
		int32_t L_2608 = (L_2606)->GetAt(static_cast<il2cpp_array_size_t>(L_2607));
		int32_t* L_2609 = V_0;
		int32_t L_2610 = V_27;
		int32_t L_2611 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2609, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2610, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2488), ((int64_t)L_2491))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2494), ((int64_t)L_2497))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2500), ((int64_t)L_2503))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2506), ((int64_t)L_2509))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2512), ((int64_t)L_2515))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2518), ((int64_t)L_2521))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2524), ((int64_t)L_2527))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2530), ((int64_t)L_2533))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2536), ((int64_t)L_2539))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2542), ((int64_t)L_2545))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2548), ((int64_t)L_2551))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2554), ((int64_t)L_2557))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2560), ((int64_t)L_2563))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2566), ((int64_t)L_2569))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2572), ((int64_t)L_2575))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2578), ((int64_t)L_2581))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2584), ((int64_t)L_2587))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2590), ((int64_t)L_2593))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2596), ((int64_t)L_2599))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2602), ((int64_t)L_2605))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2608), ((int64_t)L_2611)))));
		int32_t* L_2612 = V_0;
		int32_t L_2613 = V_27;
		int32_t* L_2614 = ___0_residual;
		int32_t L_2615 = V_27;
		int32_t L_2616 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2614, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2615), 4)))));
		int64_t L_2617 = V_15;
		int32_t L_2618 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2612, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2613), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2616, ((int32_t)((int64_t)(L_2617>>((int32_t)(L_2618&((int32_t)63))))))));
		int32_t L_2619 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_2619, 1));
	}

IL_2117:
	{
		int32_t L_2620 = V_27;
		int32_t L_2621 = ___2_length;
		if ((((int32_t)L_2620) < ((int32_t)L_2621)))
		{
			goto IL_1f78;
		}
	}
	{
		return;
	}

IL_2120:
	{
		V_28 = 0;
		goto IL_22b4;
	}

IL_2128:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2622 = V_1;
		NullCheck(L_2622);
		int32_t L_2623 = ((int32_t)19);
		int32_t L_2624 = (L_2622)->GetAt(static_cast<il2cpp_array_size_t>(L_2623));
		int32_t* L_2625 = V_0;
		int32_t L_2626 = V_28;
		int32_t L_2627 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2625, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2626, ((int32_t)20)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2628 = V_1;
		NullCheck(L_2628);
		int32_t L_2629 = ((int32_t)18);
		int32_t L_2630 = (L_2628)->GetAt(static_cast<il2cpp_array_size_t>(L_2629));
		int32_t* L_2631 = V_0;
		int32_t L_2632 = V_28;
		int32_t L_2633 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2631, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2632, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2634 = V_1;
		NullCheck(L_2634);
		int32_t L_2635 = ((int32_t)17);
		int32_t L_2636 = (L_2634)->GetAt(static_cast<il2cpp_array_size_t>(L_2635));
		int32_t* L_2637 = V_0;
		int32_t L_2638 = V_28;
		int32_t L_2639 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2637, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2638, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2640 = V_1;
		NullCheck(L_2640);
		int32_t L_2641 = ((int32_t)16);
		int32_t L_2642 = (L_2640)->GetAt(static_cast<il2cpp_array_size_t>(L_2641));
		int32_t* L_2643 = V_0;
		int32_t L_2644 = V_28;
		int32_t L_2645 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2643, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2644, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2646 = V_1;
		NullCheck(L_2646);
		int32_t L_2647 = ((int32_t)15);
		int32_t L_2648 = (L_2646)->GetAt(static_cast<il2cpp_array_size_t>(L_2647));
		int32_t* L_2649 = V_0;
		int32_t L_2650 = V_28;
		int32_t L_2651 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2649, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2650, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2652 = V_1;
		NullCheck(L_2652);
		int32_t L_2653 = ((int32_t)14);
		int32_t L_2654 = (L_2652)->GetAt(static_cast<il2cpp_array_size_t>(L_2653));
		int32_t* L_2655 = V_0;
		int32_t L_2656 = V_28;
		int32_t L_2657 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2655, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2656, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2658 = V_1;
		NullCheck(L_2658);
		int32_t L_2659 = ((int32_t)13);
		int32_t L_2660 = (L_2658)->GetAt(static_cast<il2cpp_array_size_t>(L_2659));
		int32_t* L_2661 = V_0;
		int32_t L_2662 = V_28;
		int32_t L_2663 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2661, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2662, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2664 = V_1;
		NullCheck(L_2664);
		int32_t L_2665 = ((int32_t)12);
		int32_t L_2666 = (L_2664)->GetAt(static_cast<il2cpp_array_size_t>(L_2665));
		int32_t* L_2667 = V_0;
		int32_t L_2668 = V_28;
		int32_t L_2669 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2667, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2668, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2670 = V_1;
		NullCheck(L_2670);
		int32_t L_2671 = ((int32_t)11);
		int32_t L_2672 = (L_2670)->GetAt(static_cast<il2cpp_array_size_t>(L_2671));
		int32_t* L_2673 = V_0;
		int32_t L_2674 = V_28;
		int32_t L_2675 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2673, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2674, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2676 = V_1;
		NullCheck(L_2676);
		int32_t L_2677 = ((int32_t)10);
		int32_t L_2678 = (L_2676)->GetAt(static_cast<il2cpp_array_size_t>(L_2677));
		int32_t* L_2679 = V_0;
		int32_t L_2680 = V_28;
		int32_t L_2681 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2679, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2680, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2682 = V_1;
		NullCheck(L_2682);
		int32_t L_2683 = ((int32_t)9);
		int32_t L_2684 = (L_2682)->GetAt(static_cast<il2cpp_array_size_t>(L_2683));
		int32_t* L_2685 = V_0;
		int32_t L_2686 = V_28;
		int32_t L_2687 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2685, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2686, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2688 = V_1;
		NullCheck(L_2688);
		int32_t L_2689 = 8;
		int32_t L_2690 = (L_2688)->GetAt(static_cast<il2cpp_array_size_t>(L_2689));
		int32_t* L_2691 = V_0;
		int32_t L_2692 = V_28;
		int32_t L_2693 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2691, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2692, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2694 = V_1;
		NullCheck(L_2694);
		int32_t L_2695 = 7;
		int32_t L_2696 = (L_2694)->GetAt(static_cast<il2cpp_array_size_t>(L_2695));
		int32_t* L_2697 = V_0;
		int32_t L_2698 = V_28;
		int32_t L_2699 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2697, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2698, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2700 = V_1;
		NullCheck(L_2700);
		int32_t L_2701 = 6;
		int32_t L_2702 = (L_2700)->GetAt(static_cast<il2cpp_array_size_t>(L_2701));
		int32_t* L_2703 = V_0;
		int32_t L_2704 = V_28;
		int32_t L_2705 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2703, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2704, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2706 = V_1;
		NullCheck(L_2706);
		int32_t L_2707 = 5;
		int32_t L_2708 = (L_2706)->GetAt(static_cast<il2cpp_array_size_t>(L_2707));
		int32_t* L_2709 = V_0;
		int32_t L_2710 = V_28;
		int32_t L_2711 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2709, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2710, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2712 = V_1;
		NullCheck(L_2712);
		int32_t L_2713 = 4;
		int32_t L_2714 = (L_2712)->GetAt(static_cast<il2cpp_array_size_t>(L_2713));
		int32_t* L_2715 = V_0;
		int32_t L_2716 = V_28;
		int32_t L_2717 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2715, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2716, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2718 = V_1;
		NullCheck(L_2718);
		int32_t L_2719 = 3;
		int32_t L_2720 = (L_2718)->GetAt(static_cast<il2cpp_array_size_t>(L_2719));
		int32_t* L_2721 = V_0;
		int32_t L_2722 = V_28;
		int32_t L_2723 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2721, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2722, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2724 = V_1;
		NullCheck(L_2724);
		int32_t L_2725 = 2;
		int32_t L_2726 = (L_2724)->GetAt(static_cast<il2cpp_array_size_t>(L_2725));
		int32_t* L_2727 = V_0;
		int32_t L_2728 = V_28;
		int32_t L_2729 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2727, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2728, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2730 = V_1;
		NullCheck(L_2730);
		int32_t L_2731 = 1;
		int32_t L_2732 = (L_2730)->GetAt(static_cast<il2cpp_array_size_t>(L_2731));
		int32_t* L_2733 = V_0;
		int32_t L_2734 = V_28;
		int32_t L_2735 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2733, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2734, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2736 = V_1;
		NullCheck(L_2736);
		int32_t L_2737 = 0;
		int32_t L_2738 = (L_2736)->GetAt(static_cast<il2cpp_array_size_t>(L_2737));
		int32_t* L_2739 = V_0;
		int32_t L_2740 = V_28;
		int32_t L_2741 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2739, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2740, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2624), ((int64_t)L_2627))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2630), ((int64_t)L_2633))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2636), ((int64_t)L_2639))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2642), ((int64_t)L_2645))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2648), ((int64_t)L_2651))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2654), ((int64_t)L_2657))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2660), ((int64_t)L_2663))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2666), ((int64_t)L_2669))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2672), ((int64_t)L_2675))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2678), ((int64_t)L_2681))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2684), ((int64_t)L_2687))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2690), ((int64_t)L_2693))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2696), ((int64_t)L_2699))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2702), ((int64_t)L_2705))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2708), ((int64_t)L_2711))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2714), ((int64_t)L_2717))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2720), ((int64_t)L_2723))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2726), ((int64_t)L_2729))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2732), ((int64_t)L_2735))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2738), ((int64_t)L_2741)))));
		int32_t* L_2742 = V_0;
		int32_t L_2743 = V_28;
		int32_t* L_2744 = ___0_residual;
		int32_t L_2745 = V_28;
		int32_t L_2746 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2744, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2745), 4)))));
		int64_t L_2747 = V_15;
		int32_t L_2748 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2742, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2743), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2746, ((int32_t)((int64_t)(L_2747>>((int32_t)(L_2748&((int32_t)63))))))));
		int32_t L_2749 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_2749, 1));
	}

IL_22b4:
	{
		int32_t L_2750 = V_28;
		int32_t L_2751 = ___2_length;
		if ((((int32_t)L_2750) < ((int32_t)L_2751)))
		{
			goto IL_2128;
		}
	}
	{
		return;
	}

IL_22bd:
	{
		V_29 = 0;
		goto IL_243e;
	}

IL_22c5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2752 = V_1;
		NullCheck(L_2752);
		int32_t L_2753 = ((int32_t)18);
		int32_t L_2754 = (L_2752)->GetAt(static_cast<il2cpp_array_size_t>(L_2753));
		int32_t* L_2755 = V_0;
		int32_t L_2756 = V_29;
		int32_t L_2757 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2755, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2756, ((int32_t)19)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2758 = V_1;
		NullCheck(L_2758);
		int32_t L_2759 = ((int32_t)17);
		int32_t L_2760 = (L_2758)->GetAt(static_cast<il2cpp_array_size_t>(L_2759));
		int32_t* L_2761 = V_0;
		int32_t L_2762 = V_29;
		int32_t L_2763 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2761, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2762, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2764 = V_1;
		NullCheck(L_2764);
		int32_t L_2765 = ((int32_t)16);
		int32_t L_2766 = (L_2764)->GetAt(static_cast<il2cpp_array_size_t>(L_2765));
		int32_t* L_2767 = V_0;
		int32_t L_2768 = V_29;
		int32_t L_2769 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2767, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2768, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2770 = V_1;
		NullCheck(L_2770);
		int32_t L_2771 = ((int32_t)15);
		int32_t L_2772 = (L_2770)->GetAt(static_cast<il2cpp_array_size_t>(L_2771));
		int32_t* L_2773 = V_0;
		int32_t L_2774 = V_29;
		int32_t L_2775 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2773, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2774, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2776 = V_1;
		NullCheck(L_2776);
		int32_t L_2777 = ((int32_t)14);
		int32_t L_2778 = (L_2776)->GetAt(static_cast<il2cpp_array_size_t>(L_2777));
		int32_t* L_2779 = V_0;
		int32_t L_2780 = V_29;
		int32_t L_2781 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2779, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2780, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2782 = V_1;
		NullCheck(L_2782);
		int32_t L_2783 = ((int32_t)13);
		int32_t L_2784 = (L_2782)->GetAt(static_cast<il2cpp_array_size_t>(L_2783));
		int32_t* L_2785 = V_0;
		int32_t L_2786 = V_29;
		int32_t L_2787 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2785, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2786, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2788 = V_1;
		NullCheck(L_2788);
		int32_t L_2789 = ((int32_t)12);
		int32_t L_2790 = (L_2788)->GetAt(static_cast<il2cpp_array_size_t>(L_2789));
		int32_t* L_2791 = V_0;
		int32_t L_2792 = V_29;
		int32_t L_2793 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2791, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2792, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2794 = V_1;
		NullCheck(L_2794);
		int32_t L_2795 = ((int32_t)11);
		int32_t L_2796 = (L_2794)->GetAt(static_cast<il2cpp_array_size_t>(L_2795));
		int32_t* L_2797 = V_0;
		int32_t L_2798 = V_29;
		int32_t L_2799 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2797, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2798, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2800 = V_1;
		NullCheck(L_2800);
		int32_t L_2801 = ((int32_t)10);
		int32_t L_2802 = (L_2800)->GetAt(static_cast<il2cpp_array_size_t>(L_2801));
		int32_t* L_2803 = V_0;
		int32_t L_2804 = V_29;
		int32_t L_2805 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2803, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2804, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2806 = V_1;
		NullCheck(L_2806);
		int32_t L_2807 = ((int32_t)9);
		int32_t L_2808 = (L_2806)->GetAt(static_cast<il2cpp_array_size_t>(L_2807));
		int32_t* L_2809 = V_0;
		int32_t L_2810 = V_29;
		int32_t L_2811 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2809, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2810, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2812 = V_1;
		NullCheck(L_2812);
		int32_t L_2813 = 8;
		int32_t L_2814 = (L_2812)->GetAt(static_cast<il2cpp_array_size_t>(L_2813));
		int32_t* L_2815 = V_0;
		int32_t L_2816 = V_29;
		int32_t L_2817 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2815, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2816, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2818 = V_1;
		NullCheck(L_2818);
		int32_t L_2819 = 7;
		int32_t L_2820 = (L_2818)->GetAt(static_cast<il2cpp_array_size_t>(L_2819));
		int32_t* L_2821 = V_0;
		int32_t L_2822 = V_29;
		int32_t L_2823 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2821, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2822, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2824 = V_1;
		NullCheck(L_2824);
		int32_t L_2825 = 6;
		int32_t L_2826 = (L_2824)->GetAt(static_cast<il2cpp_array_size_t>(L_2825));
		int32_t* L_2827 = V_0;
		int32_t L_2828 = V_29;
		int32_t L_2829 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2827, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2828, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2830 = V_1;
		NullCheck(L_2830);
		int32_t L_2831 = 5;
		int32_t L_2832 = (L_2830)->GetAt(static_cast<il2cpp_array_size_t>(L_2831));
		int32_t* L_2833 = V_0;
		int32_t L_2834 = V_29;
		int32_t L_2835 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2833, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2834, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2836 = V_1;
		NullCheck(L_2836);
		int32_t L_2837 = 4;
		int32_t L_2838 = (L_2836)->GetAt(static_cast<il2cpp_array_size_t>(L_2837));
		int32_t* L_2839 = V_0;
		int32_t L_2840 = V_29;
		int32_t L_2841 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2839, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2840, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2842 = V_1;
		NullCheck(L_2842);
		int32_t L_2843 = 3;
		int32_t L_2844 = (L_2842)->GetAt(static_cast<il2cpp_array_size_t>(L_2843));
		int32_t* L_2845 = V_0;
		int32_t L_2846 = V_29;
		int32_t L_2847 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2845, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2846, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2848 = V_1;
		NullCheck(L_2848);
		int32_t L_2849 = 2;
		int32_t L_2850 = (L_2848)->GetAt(static_cast<il2cpp_array_size_t>(L_2849));
		int32_t* L_2851 = V_0;
		int32_t L_2852 = V_29;
		int32_t L_2853 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2851, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2852, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2854 = V_1;
		NullCheck(L_2854);
		int32_t L_2855 = 1;
		int32_t L_2856 = (L_2854)->GetAt(static_cast<il2cpp_array_size_t>(L_2855));
		int32_t* L_2857 = V_0;
		int32_t L_2858 = V_29;
		int32_t L_2859 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2857, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2858, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2860 = V_1;
		NullCheck(L_2860);
		int32_t L_2861 = 0;
		int32_t L_2862 = (L_2860)->GetAt(static_cast<il2cpp_array_size_t>(L_2861));
		int32_t* L_2863 = V_0;
		int32_t L_2864 = V_29;
		int32_t L_2865 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2863, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2864, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2754), ((int64_t)L_2757))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2760), ((int64_t)L_2763))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2766), ((int64_t)L_2769))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2772), ((int64_t)L_2775))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2778), ((int64_t)L_2781))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2784), ((int64_t)L_2787))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2790), ((int64_t)L_2793))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2796), ((int64_t)L_2799))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2802), ((int64_t)L_2805))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2808), ((int64_t)L_2811))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2814), ((int64_t)L_2817))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2820), ((int64_t)L_2823))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2826), ((int64_t)L_2829))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2832), ((int64_t)L_2835))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2838), ((int64_t)L_2841))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2844), ((int64_t)L_2847))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2850), ((int64_t)L_2853))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2856), ((int64_t)L_2859))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2862), ((int64_t)L_2865)))));
		int32_t* L_2866 = V_0;
		int32_t L_2867 = V_29;
		int32_t* L_2868 = ___0_residual;
		int32_t L_2869 = V_29;
		int32_t L_2870 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2868, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2869), 4)))));
		int64_t L_2871 = V_15;
		int32_t L_2872 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2866, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2867), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2870, ((int32_t)((int64_t)(L_2871>>((int32_t)(L_2872&((int32_t)63))))))));
		int32_t L_2873 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_2873, 1));
	}

IL_243e:
	{
		int32_t L_2874 = V_29;
		int32_t L_2875 = ___2_length;
		if ((((int32_t)L_2874) < ((int32_t)L_2875)))
		{
			goto IL_22c5;
		}
	}
	{
		return;
	}

IL_2447:
	{
		V_30 = 0;
		goto IL_25b5;
	}

IL_244f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2876 = V_1;
		NullCheck(L_2876);
		int32_t L_2877 = ((int32_t)17);
		int32_t L_2878 = (L_2876)->GetAt(static_cast<il2cpp_array_size_t>(L_2877));
		int32_t* L_2879 = V_0;
		int32_t L_2880 = V_30;
		int32_t L_2881 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2879, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2880, ((int32_t)18)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2882 = V_1;
		NullCheck(L_2882);
		int32_t L_2883 = ((int32_t)16);
		int32_t L_2884 = (L_2882)->GetAt(static_cast<il2cpp_array_size_t>(L_2883));
		int32_t* L_2885 = V_0;
		int32_t L_2886 = V_30;
		int32_t L_2887 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2885, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2886, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2888 = V_1;
		NullCheck(L_2888);
		int32_t L_2889 = ((int32_t)15);
		int32_t L_2890 = (L_2888)->GetAt(static_cast<il2cpp_array_size_t>(L_2889));
		int32_t* L_2891 = V_0;
		int32_t L_2892 = V_30;
		int32_t L_2893 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2891, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2892, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2894 = V_1;
		NullCheck(L_2894);
		int32_t L_2895 = ((int32_t)14);
		int32_t L_2896 = (L_2894)->GetAt(static_cast<il2cpp_array_size_t>(L_2895));
		int32_t* L_2897 = V_0;
		int32_t L_2898 = V_30;
		int32_t L_2899 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2897, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2898, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2900 = V_1;
		NullCheck(L_2900);
		int32_t L_2901 = ((int32_t)13);
		int32_t L_2902 = (L_2900)->GetAt(static_cast<il2cpp_array_size_t>(L_2901));
		int32_t* L_2903 = V_0;
		int32_t L_2904 = V_30;
		int32_t L_2905 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2903, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2904, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2906 = V_1;
		NullCheck(L_2906);
		int32_t L_2907 = ((int32_t)12);
		int32_t L_2908 = (L_2906)->GetAt(static_cast<il2cpp_array_size_t>(L_2907));
		int32_t* L_2909 = V_0;
		int32_t L_2910 = V_30;
		int32_t L_2911 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2909, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2910, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2912 = V_1;
		NullCheck(L_2912);
		int32_t L_2913 = ((int32_t)11);
		int32_t L_2914 = (L_2912)->GetAt(static_cast<il2cpp_array_size_t>(L_2913));
		int32_t* L_2915 = V_0;
		int32_t L_2916 = V_30;
		int32_t L_2917 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2915, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2916, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2918 = V_1;
		NullCheck(L_2918);
		int32_t L_2919 = ((int32_t)10);
		int32_t L_2920 = (L_2918)->GetAt(static_cast<il2cpp_array_size_t>(L_2919));
		int32_t* L_2921 = V_0;
		int32_t L_2922 = V_30;
		int32_t L_2923 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2921, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2922, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2924 = V_1;
		NullCheck(L_2924);
		int32_t L_2925 = ((int32_t)9);
		int32_t L_2926 = (L_2924)->GetAt(static_cast<il2cpp_array_size_t>(L_2925));
		int32_t* L_2927 = V_0;
		int32_t L_2928 = V_30;
		int32_t L_2929 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2927, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2928, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2930 = V_1;
		NullCheck(L_2930);
		int32_t L_2931 = 8;
		int32_t L_2932 = (L_2930)->GetAt(static_cast<il2cpp_array_size_t>(L_2931));
		int32_t* L_2933 = V_0;
		int32_t L_2934 = V_30;
		int32_t L_2935 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2933, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2934, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2936 = V_1;
		NullCheck(L_2936);
		int32_t L_2937 = 7;
		int32_t L_2938 = (L_2936)->GetAt(static_cast<il2cpp_array_size_t>(L_2937));
		int32_t* L_2939 = V_0;
		int32_t L_2940 = V_30;
		int32_t L_2941 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2939, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2940, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2942 = V_1;
		NullCheck(L_2942);
		int32_t L_2943 = 6;
		int32_t L_2944 = (L_2942)->GetAt(static_cast<il2cpp_array_size_t>(L_2943));
		int32_t* L_2945 = V_0;
		int32_t L_2946 = V_30;
		int32_t L_2947 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2945, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2946, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2948 = V_1;
		NullCheck(L_2948);
		int32_t L_2949 = 5;
		int32_t L_2950 = (L_2948)->GetAt(static_cast<il2cpp_array_size_t>(L_2949));
		int32_t* L_2951 = V_0;
		int32_t L_2952 = V_30;
		int32_t L_2953 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2951, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2952, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2954 = V_1;
		NullCheck(L_2954);
		int32_t L_2955 = 4;
		int32_t L_2956 = (L_2954)->GetAt(static_cast<il2cpp_array_size_t>(L_2955));
		int32_t* L_2957 = V_0;
		int32_t L_2958 = V_30;
		int32_t L_2959 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2957, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2958, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2960 = V_1;
		NullCheck(L_2960);
		int32_t L_2961 = 3;
		int32_t L_2962 = (L_2960)->GetAt(static_cast<il2cpp_array_size_t>(L_2961));
		int32_t* L_2963 = V_0;
		int32_t L_2964 = V_30;
		int32_t L_2965 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2963, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2964, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2966 = V_1;
		NullCheck(L_2966);
		int32_t L_2967 = 2;
		int32_t L_2968 = (L_2966)->GetAt(static_cast<il2cpp_array_size_t>(L_2967));
		int32_t* L_2969 = V_0;
		int32_t L_2970 = V_30;
		int32_t L_2971 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2969, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2970, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2972 = V_1;
		NullCheck(L_2972);
		int32_t L_2973 = 1;
		int32_t L_2974 = (L_2972)->GetAt(static_cast<il2cpp_array_size_t>(L_2973));
		int32_t* L_2975 = V_0;
		int32_t L_2976 = V_30;
		int32_t L_2977 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2975, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2976, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2978 = V_1;
		NullCheck(L_2978);
		int32_t L_2979 = 0;
		int32_t L_2980 = (L_2978)->GetAt(static_cast<il2cpp_array_size_t>(L_2979));
		int32_t* L_2981 = V_0;
		int32_t L_2982 = V_30;
		int32_t L_2983 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2981, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2982, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2878), ((int64_t)L_2881))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2884), ((int64_t)L_2887))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2890), ((int64_t)L_2893))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2896), ((int64_t)L_2899))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2902), ((int64_t)L_2905))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2908), ((int64_t)L_2911))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2914), ((int64_t)L_2917))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2920), ((int64_t)L_2923))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2926), ((int64_t)L_2929))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2932), ((int64_t)L_2935))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2938), ((int64_t)L_2941))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2944), ((int64_t)L_2947))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2950), ((int64_t)L_2953))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2956), ((int64_t)L_2959))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2962), ((int64_t)L_2965))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2968), ((int64_t)L_2971))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2974), ((int64_t)L_2977))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2980), ((int64_t)L_2983)))));
		int32_t* L_2984 = V_0;
		int32_t L_2985 = V_30;
		int32_t* L_2986 = ___0_residual;
		int32_t L_2987 = V_30;
		int32_t L_2988 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2986, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2987), 4)))));
		int64_t L_2989 = V_15;
		int32_t L_2990 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2984, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2985), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_2988, ((int32_t)((int64_t)(L_2989>>((int32_t)(L_2990&((int32_t)63))))))));
		int32_t L_2991 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_2991, 1));
	}

IL_25b5:
	{
		int32_t L_2992 = V_30;
		int32_t L_2993 = ___2_length;
		if ((((int32_t)L_2992) < ((int32_t)L_2993)))
		{
			goto IL_244f;
		}
	}
	{
		return;
	}

IL_25be:
	{
		V_31 = 0;
		goto IL_2719;
	}

IL_25c6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2994 = V_1;
		NullCheck(L_2994);
		int32_t L_2995 = ((int32_t)16);
		int32_t L_2996 = (L_2994)->GetAt(static_cast<il2cpp_array_size_t>(L_2995));
		int32_t* L_2997 = V_0;
		int32_t L_2998 = V_31;
		int32_t L_2999 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_2997, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_2998, ((int32_t)17)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3000 = V_1;
		NullCheck(L_3000);
		int32_t L_3001 = ((int32_t)15);
		int32_t L_3002 = (L_3000)->GetAt(static_cast<il2cpp_array_size_t>(L_3001));
		int32_t* L_3003 = V_0;
		int32_t L_3004 = V_31;
		int32_t L_3005 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3003, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3004, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3006 = V_1;
		NullCheck(L_3006);
		int32_t L_3007 = ((int32_t)14);
		int32_t L_3008 = (L_3006)->GetAt(static_cast<il2cpp_array_size_t>(L_3007));
		int32_t* L_3009 = V_0;
		int32_t L_3010 = V_31;
		int32_t L_3011 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3009, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3010, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3012 = V_1;
		NullCheck(L_3012);
		int32_t L_3013 = ((int32_t)13);
		int32_t L_3014 = (L_3012)->GetAt(static_cast<il2cpp_array_size_t>(L_3013));
		int32_t* L_3015 = V_0;
		int32_t L_3016 = V_31;
		int32_t L_3017 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3015, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3016, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3018 = V_1;
		NullCheck(L_3018);
		int32_t L_3019 = ((int32_t)12);
		int32_t L_3020 = (L_3018)->GetAt(static_cast<il2cpp_array_size_t>(L_3019));
		int32_t* L_3021 = V_0;
		int32_t L_3022 = V_31;
		int32_t L_3023 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3021, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3022, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3024 = V_1;
		NullCheck(L_3024);
		int32_t L_3025 = ((int32_t)11);
		int32_t L_3026 = (L_3024)->GetAt(static_cast<il2cpp_array_size_t>(L_3025));
		int32_t* L_3027 = V_0;
		int32_t L_3028 = V_31;
		int32_t L_3029 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3027, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3028, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3030 = V_1;
		NullCheck(L_3030);
		int32_t L_3031 = ((int32_t)10);
		int32_t L_3032 = (L_3030)->GetAt(static_cast<il2cpp_array_size_t>(L_3031));
		int32_t* L_3033 = V_0;
		int32_t L_3034 = V_31;
		int32_t L_3035 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3033, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3034, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3036 = V_1;
		NullCheck(L_3036);
		int32_t L_3037 = ((int32_t)9);
		int32_t L_3038 = (L_3036)->GetAt(static_cast<il2cpp_array_size_t>(L_3037));
		int32_t* L_3039 = V_0;
		int32_t L_3040 = V_31;
		int32_t L_3041 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3039, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3040, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3042 = V_1;
		NullCheck(L_3042);
		int32_t L_3043 = 8;
		int32_t L_3044 = (L_3042)->GetAt(static_cast<il2cpp_array_size_t>(L_3043));
		int32_t* L_3045 = V_0;
		int32_t L_3046 = V_31;
		int32_t L_3047 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3045, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3046, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3048 = V_1;
		NullCheck(L_3048);
		int32_t L_3049 = 7;
		int32_t L_3050 = (L_3048)->GetAt(static_cast<il2cpp_array_size_t>(L_3049));
		int32_t* L_3051 = V_0;
		int32_t L_3052 = V_31;
		int32_t L_3053 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3051, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3052, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3054 = V_1;
		NullCheck(L_3054);
		int32_t L_3055 = 6;
		int32_t L_3056 = (L_3054)->GetAt(static_cast<il2cpp_array_size_t>(L_3055));
		int32_t* L_3057 = V_0;
		int32_t L_3058 = V_31;
		int32_t L_3059 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3057, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3058, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3060 = V_1;
		NullCheck(L_3060);
		int32_t L_3061 = 5;
		int32_t L_3062 = (L_3060)->GetAt(static_cast<il2cpp_array_size_t>(L_3061));
		int32_t* L_3063 = V_0;
		int32_t L_3064 = V_31;
		int32_t L_3065 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3063, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3064, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3066 = V_1;
		NullCheck(L_3066);
		int32_t L_3067 = 4;
		int32_t L_3068 = (L_3066)->GetAt(static_cast<il2cpp_array_size_t>(L_3067));
		int32_t* L_3069 = V_0;
		int32_t L_3070 = V_31;
		int32_t L_3071 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3069, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3070, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3072 = V_1;
		NullCheck(L_3072);
		int32_t L_3073 = 3;
		int32_t L_3074 = (L_3072)->GetAt(static_cast<il2cpp_array_size_t>(L_3073));
		int32_t* L_3075 = V_0;
		int32_t L_3076 = V_31;
		int32_t L_3077 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3075, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3076, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3078 = V_1;
		NullCheck(L_3078);
		int32_t L_3079 = 2;
		int32_t L_3080 = (L_3078)->GetAt(static_cast<il2cpp_array_size_t>(L_3079));
		int32_t* L_3081 = V_0;
		int32_t L_3082 = V_31;
		int32_t L_3083 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3081, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3082, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3084 = V_1;
		NullCheck(L_3084);
		int32_t L_3085 = 1;
		int32_t L_3086 = (L_3084)->GetAt(static_cast<il2cpp_array_size_t>(L_3085));
		int32_t* L_3087 = V_0;
		int32_t L_3088 = V_31;
		int32_t L_3089 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3087, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3088, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3090 = V_1;
		NullCheck(L_3090);
		int32_t L_3091 = 0;
		int32_t L_3092 = (L_3090)->GetAt(static_cast<il2cpp_array_size_t>(L_3091));
		int32_t* L_3093 = V_0;
		int32_t L_3094 = V_31;
		int32_t L_3095 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3093, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3094, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2996), ((int64_t)L_2999))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3002), ((int64_t)L_3005))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3008), ((int64_t)L_3011))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3014), ((int64_t)L_3017))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3020), ((int64_t)L_3023))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3026), ((int64_t)L_3029))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3032), ((int64_t)L_3035))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3038), ((int64_t)L_3041))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3044), ((int64_t)L_3047))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3050), ((int64_t)L_3053))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3056), ((int64_t)L_3059))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3062), ((int64_t)L_3065))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3068), ((int64_t)L_3071))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3074), ((int64_t)L_3077))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3080), ((int64_t)L_3083))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3086), ((int64_t)L_3089))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3092), ((int64_t)L_3095)))));
		int32_t* L_3096 = V_0;
		int32_t L_3097 = V_31;
		int32_t* L_3098 = ___0_residual;
		int32_t L_3099 = V_31;
		int32_t L_3100 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3098, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3099), 4)))));
		int64_t L_3101 = V_15;
		int32_t L_3102 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3096, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3097), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3100, ((int32_t)((int64_t)(L_3101>>((int32_t)(L_3102&((int32_t)63))))))));
		int32_t L_3103 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_3103, 1));
	}

IL_2719:
	{
		int32_t L_3104 = V_31;
		int32_t L_3105 = ___2_length;
		if ((((int32_t)L_3104) < ((int32_t)L_3105)))
		{
			goto IL_25c6;
		}
	}
	{
		return;
	}

IL_2722:
	{
		V_32 = 0;
		goto IL_286a;
	}

IL_272a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3106 = V_1;
		NullCheck(L_3106);
		int32_t L_3107 = ((int32_t)15);
		int32_t L_3108 = (L_3106)->GetAt(static_cast<il2cpp_array_size_t>(L_3107));
		int32_t* L_3109 = V_0;
		int32_t L_3110 = V_32;
		int32_t L_3111 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3109, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3110, ((int32_t)16)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3112 = V_1;
		NullCheck(L_3112);
		int32_t L_3113 = ((int32_t)14);
		int32_t L_3114 = (L_3112)->GetAt(static_cast<il2cpp_array_size_t>(L_3113));
		int32_t* L_3115 = V_0;
		int32_t L_3116 = V_32;
		int32_t L_3117 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3115, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3116, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3118 = V_1;
		NullCheck(L_3118);
		int32_t L_3119 = ((int32_t)13);
		int32_t L_3120 = (L_3118)->GetAt(static_cast<il2cpp_array_size_t>(L_3119));
		int32_t* L_3121 = V_0;
		int32_t L_3122 = V_32;
		int32_t L_3123 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3122, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3124 = V_1;
		NullCheck(L_3124);
		int32_t L_3125 = ((int32_t)12);
		int32_t L_3126 = (L_3124)->GetAt(static_cast<il2cpp_array_size_t>(L_3125));
		int32_t* L_3127 = V_0;
		int32_t L_3128 = V_32;
		int32_t L_3129 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3128, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3130 = V_1;
		NullCheck(L_3130);
		int32_t L_3131 = ((int32_t)11);
		int32_t L_3132 = (L_3130)->GetAt(static_cast<il2cpp_array_size_t>(L_3131));
		int32_t* L_3133 = V_0;
		int32_t L_3134 = V_32;
		int32_t L_3135 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3133, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3134, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3136 = V_1;
		NullCheck(L_3136);
		int32_t L_3137 = ((int32_t)10);
		int32_t L_3138 = (L_3136)->GetAt(static_cast<il2cpp_array_size_t>(L_3137));
		int32_t* L_3139 = V_0;
		int32_t L_3140 = V_32;
		int32_t L_3141 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3140, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3142 = V_1;
		NullCheck(L_3142);
		int32_t L_3143 = ((int32_t)9);
		int32_t L_3144 = (L_3142)->GetAt(static_cast<il2cpp_array_size_t>(L_3143));
		int32_t* L_3145 = V_0;
		int32_t L_3146 = V_32;
		int32_t L_3147 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3145, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3146, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3148 = V_1;
		NullCheck(L_3148);
		int32_t L_3149 = 8;
		int32_t L_3150 = (L_3148)->GetAt(static_cast<il2cpp_array_size_t>(L_3149));
		int32_t* L_3151 = V_0;
		int32_t L_3152 = V_32;
		int32_t L_3153 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3151, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3152, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3154 = V_1;
		NullCheck(L_3154);
		int32_t L_3155 = 7;
		int32_t L_3156 = (L_3154)->GetAt(static_cast<il2cpp_array_size_t>(L_3155));
		int32_t* L_3157 = V_0;
		int32_t L_3158 = V_32;
		int32_t L_3159 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3157, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3158, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3160 = V_1;
		NullCheck(L_3160);
		int32_t L_3161 = 6;
		int32_t L_3162 = (L_3160)->GetAt(static_cast<il2cpp_array_size_t>(L_3161));
		int32_t* L_3163 = V_0;
		int32_t L_3164 = V_32;
		int32_t L_3165 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3164, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3166 = V_1;
		NullCheck(L_3166);
		int32_t L_3167 = 5;
		int32_t L_3168 = (L_3166)->GetAt(static_cast<il2cpp_array_size_t>(L_3167));
		int32_t* L_3169 = V_0;
		int32_t L_3170 = V_32;
		int32_t L_3171 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3169, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3170, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3172 = V_1;
		NullCheck(L_3172);
		int32_t L_3173 = 4;
		int32_t L_3174 = (L_3172)->GetAt(static_cast<il2cpp_array_size_t>(L_3173));
		int32_t* L_3175 = V_0;
		int32_t L_3176 = V_32;
		int32_t L_3177 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3175, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3176, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3178 = V_1;
		NullCheck(L_3178);
		int32_t L_3179 = 3;
		int32_t L_3180 = (L_3178)->GetAt(static_cast<il2cpp_array_size_t>(L_3179));
		int32_t* L_3181 = V_0;
		int32_t L_3182 = V_32;
		int32_t L_3183 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3181, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3182, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3184 = V_1;
		NullCheck(L_3184);
		int32_t L_3185 = 2;
		int32_t L_3186 = (L_3184)->GetAt(static_cast<il2cpp_array_size_t>(L_3185));
		int32_t* L_3187 = V_0;
		int32_t L_3188 = V_32;
		int32_t L_3189 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3187, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3188, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3190 = V_1;
		NullCheck(L_3190);
		int32_t L_3191 = 1;
		int32_t L_3192 = (L_3190)->GetAt(static_cast<il2cpp_array_size_t>(L_3191));
		int32_t* L_3193 = V_0;
		int32_t L_3194 = V_32;
		int32_t L_3195 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3193, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3194, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3196 = V_1;
		NullCheck(L_3196);
		int32_t L_3197 = 0;
		int32_t L_3198 = (L_3196)->GetAt(static_cast<il2cpp_array_size_t>(L_3197));
		int32_t* L_3199 = V_0;
		int32_t L_3200 = V_32;
		int32_t L_3201 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3199, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3200, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_3108), ((int64_t)L_3111))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3114), ((int64_t)L_3117))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3120), ((int64_t)L_3123))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3126), ((int64_t)L_3129))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3132), ((int64_t)L_3135))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3138), ((int64_t)L_3141))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3144), ((int64_t)L_3147))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3150), ((int64_t)L_3153))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3156), ((int64_t)L_3159))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3162), ((int64_t)L_3165))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3168), ((int64_t)L_3171))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3174), ((int64_t)L_3177))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3180), ((int64_t)L_3183))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3186), ((int64_t)L_3189))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3192), ((int64_t)L_3195))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3198), ((int64_t)L_3201)))));
		int32_t* L_3202 = V_0;
		int32_t L_3203 = V_32;
		int32_t* L_3204 = ___0_residual;
		int32_t L_3205 = V_32;
		int32_t L_3206 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3204, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3205), 4)))));
		int64_t L_3207 = V_15;
		int32_t L_3208 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3202, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3203), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3206, ((int32_t)((int64_t)(L_3207>>((int32_t)(L_3208&((int32_t)63))))))));
		int32_t L_3209 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_3209, 1));
	}

IL_286a:
	{
		int32_t L_3210 = V_32;
		int32_t L_3211 = ___2_length;
		if ((((int32_t)L_3210) < ((int32_t)L_3211)))
		{
			goto IL_272a;
		}
	}
	{
		return;
	}

IL_2873:
	{
		V_33 = 0;
		goto IL_29a8;
	}

IL_287b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3212 = V_1;
		NullCheck(L_3212);
		int32_t L_3213 = ((int32_t)14);
		int32_t L_3214 = (L_3212)->GetAt(static_cast<il2cpp_array_size_t>(L_3213));
		int32_t* L_3215 = V_0;
		int32_t L_3216 = V_33;
		int32_t L_3217 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3215, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3216, ((int32_t)15)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3218 = V_1;
		NullCheck(L_3218);
		int32_t L_3219 = ((int32_t)13);
		int32_t L_3220 = (L_3218)->GetAt(static_cast<il2cpp_array_size_t>(L_3219));
		int32_t* L_3221 = V_0;
		int32_t L_3222 = V_33;
		int32_t L_3223 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3221, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3222, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3224 = V_1;
		NullCheck(L_3224);
		int32_t L_3225 = ((int32_t)12);
		int32_t L_3226 = (L_3224)->GetAt(static_cast<il2cpp_array_size_t>(L_3225));
		int32_t* L_3227 = V_0;
		int32_t L_3228 = V_33;
		int32_t L_3229 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3227, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3228, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3230 = V_1;
		NullCheck(L_3230);
		int32_t L_3231 = ((int32_t)11);
		int32_t L_3232 = (L_3230)->GetAt(static_cast<il2cpp_array_size_t>(L_3231));
		int32_t* L_3233 = V_0;
		int32_t L_3234 = V_33;
		int32_t L_3235 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3233, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3234, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3236 = V_1;
		NullCheck(L_3236);
		int32_t L_3237 = ((int32_t)10);
		int32_t L_3238 = (L_3236)->GetAt(static_cast<il2cpp_array_size_t>(L_3237));
		int32_t* L_3239 = V_0;
		int32_t L_3240 = V_33;
		int32_t L_3241 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3239, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3240, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3242 = V_1;
		NullCheck(L_3242);
		int32_t L_3243 = ((int32_t)9);
		int32_t L_3244 = (L_3242)->GetAt(static_cast<il2cpp_array_size_t>(L_3243));
		int32_t* L_3245 = V_0;
		int32_t L_3246 = V_33;
		int32_t L_3247 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3245, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3246, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3248 = V_1;
		NullCheck(L_3248);
		int32_t L_3249 = 8;
		int32_t L_3250 = (L_3248)->GetAt(static_cast<il2cpp_array_size_t>(L_3249));
		int32_t* L_3251 = V_0;
		int32_t L_3252 = V_33;
		int32_t L_3253 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3251, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3252, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3254 = V_1;
		NullCheck(L_3254);
		int32_t L_3255 = 7;
		int32_t L_3256 = (L_3254)->GetAt(static_cast<il2cpp_array_size_t>(L_3255));
		int32_t* L_3257 = V_0;
		int32_t L_3258 = V_33;
		int32_t L_3259 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3257, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3258, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3260 = V_1;
		NullCheck(L_3260);
		int32_t L_3261 = 6;
		int32_t L_3262 = (L_3260)->GetAt(static_cast<il2cpp_array_size_t>(L_3261));
		int32_t* L_3263 = V_0;
		int32_t L_3264 = V_33;
		int32_t L_3265 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3263, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3264, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3266 = V_1;
		NullCheck(L_3266);
		int32_t L_3267 = 5;
		int32_t L_3268 = (L_3266)->GetAt(static_cast<il2cpp_array_size_t>(L_3267));
		int32_t* L_3269 = V_0;
		int32_t L_3270 = V_33;
		int32_t L_3271 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3269, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3270, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3272 = V_1;
		NullCheck(L_3272);
		int32_t L_3273 = 4;
		int32_t L_3274 = (L_3272)->GetAt(static_cast<il2cpp_array_size_t>(L_3273));
		int32_t* L_3275 = V_0;
		int32_t L_3276 = V_33;
		int32_t L_3277 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3275, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3276, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3278 = V_1;
		NullCheck(L_3278);
		int32_t L_3279 = 3;
		int32_t L_3280 = (L_3278)->GetAt(static_cast<il2cpp_array_size_t>(L_3279));
		int32_t* L_3281 = V_0;
		int32_t L_3282 = V_33;
		int32_t L_3283 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3281, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3282, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3284 = V_1;
		NullCheck(L_3284);
		int32_t L_3285 = 2;
		int32_t L_3286 = (L_3284)->GetAt(static_cast<il2cpp_array_size_t>(L_3285));
		int32_t* L_3287 = V_0;
		int32_t L_3288 = V_33;
		int32_t L_3289 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3287, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3288, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3290 = V_1;
		NullCheck(L_3290);
		int32_t L_3291 = 1;
		int32_t L_3292 = (L_3290)->GetAt(static_cast<il2cpp_array_size_t>(L_3291));
		int32_t* L_3293 = V_0;
		int32_t L_3294 = V_33;
		int32_t L_3295 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3293, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3294, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3296 = V_1;
		NullCheck(L_3296);
		int32_t L_3297 = 0;
		int32_t L_3298 = (L_3296)->GetAt(static_cast<il2cpp_array_size_t>(L_3297));
		int32_t* L_3299 = V_0;
		int32_t L_3300 = V_33;
		int32_t L_3301 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3299, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3300, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_3214), ((int64_t)L_3217))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3220), ((int64_t)L_3223))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3226), ((int64_t)L_3229))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3232), ((int64_t)L_3235))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3238), ((int64_t)L_3241))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3244), ((int64_t)L_3247))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3250), ((int64_t)L_3253))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3256), ((int64_t)L_3259))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3262), ((int64_t)L_3265))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3268), ((int64_t)L_3271))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3274), ((int64_t)L_3277))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3280), ((int64_t)L_3283))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3286), ((int64_t)L_3289))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3292), ((int64_t)L_3295))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3298), ((int64_t)L_3301)))));
		int32_t* L_3302 = V_0;
		int32_t L_3303 = V_33;
		int32_t* L_3304 = ___0_residual;
		int32_t L_3305 = V_33;
		int32_t L_3306 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3304, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3305), 4)))));
		int64_t L_3307 = V_15;
		int32_t L_3308 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3302, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3303), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3306, ((int32_t)((int64_t)(L_3307>>((int32_t)(L_3308&((int32_t)63))))))));
		int32_t L_3309 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_3309, 1));
	}

IL_29a8:
	{
		int32_t L_3310 = V_33;
		int32_t L_3311 = ___2_length;
		if ((((int32_t)L_3310) < ((int32_t)L_3311)))
		{
			goto IL_287b;
		}
	}
	{
		return;
	}

IL_29b1:
	{
		V_34 = 0;
		goto IL_2ad3;
	}

IL_29b9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3312 = V_1;
		NullCheck(L_3312);
		int32_t L_3313 = ((int32_t)13);
		int32_t L_3314 = (L_3312)->GetAt(static_cast<il2cpp_array_size_t>(L_3313));
		int32_t* L_3315 = V_0;
		int32_t L_3316 = V_34;
		int32_t L_3317 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3315, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3316, ((int32_t)14)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3318 = V_1;
		NullCheck(L_3318);
		int32_t L_3319 = ((int32_t)12);
		int32_t L_3320 = (L_3318)->GetAt(static_cast<il2cpp_array_size_t>(L_3319));
		int32_t* L_3321 = V_0;
		int32_t L_3322 = V_34;
		int32_t L_3323 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3321, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3322, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3324 = V_1;
		NullCheck(L_3324);
		int32_t L_3325 = ((int32_t)11);
		int32_t L_3326 = (L_3324)->GetAt(static_cast<il2cpp_array_size_t>(L_3325));
		int32_t* L_3327 = V_0;
		int32_t L_3328 = V_34;
		int32_t L_3329 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3327, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3328, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3330 = V_1;
		NullCheck(L_3330);
		int32_t L_3331 = ((int32_t)10);
		int32_t L_3332 = (L_3330)->GetAt(static_cast<il2cpp_array_size_t>(L_3331));
		int32_t* L_3333 = V_0;
		int32_t L_3334 = V_34;
		int32_t L_3335 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3333, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3334, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3336 = V_1;
		NullCheck(L_3336);
		int32_t L_3337 = ((int32_t)9);
		int32_t L_3338 = (L_3336)->GetAt(static_cast<il2cpp_array_size_t>(L_3337));
		int32_t* L_3339 = V_0;
		int32_t L_3340 = V_34;
		int32_t L_3341 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3339, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3340, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3342 = V_1;
		NullCheck(L_3342);
		int32_t L_3343 = 8;
		int32_t L_3344 = (L_3342)->GetAt(static_cast<il2cpp_array_size_t>(L_3343));
		int32_t* L_3345 = V_0;
		int32_t L_3346 = V_34;
		int32_t L_3347 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3345, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3346, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3348 = V_1;
		NullCheck(L_3348);
		int32_t L_3349 = 7;
		int32_t L_3350 = (L_3348)->GetAt(static_cast<il2cpp_array_size_t>(L_3349));
		int32_t* L_3351 = V_0;
		int32_t L_3352 = V_34;
		int32_t L_3353 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3351, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3352, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3354 = V_1;
		NullCheck(L_3354);
		int32_t L_3355 = 6;
		int32_t L_3356 = (L_3354)->GetAt(static_cast<il2cpp_array_size_t>(L_3355));
		int32_t* L_3357 = V_0;
		int32_t L_3358 = V_34;
		int32_t L_3359 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3357, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3358, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3360 = V_1;
		NullCheck(L_3360);
		int32_t L_3361 = 5;
		int32_t L_3362 = (L_3360)->GetAt(static_cast<il2cpp_array_size_t>(L_3361));
		int32_t* L_3363 = V_0;
		int32_t L_3364 = V_34;
		int32_t L_3365 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3363, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3364, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3366 = V_1;
		NullCheck(L_3366);
		int32_t L_3367 = 4;
		int32_t L_3368 = (L_3366)->GetAt(static_cast<il2cpp_array_size_t>(L_3367));
		int32_t* L_3369 = V_0;
		int32_t L_3370 = V_34;
		int32_t L_3371 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3369, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3370, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3372 = V_1;
		NullCheck(L_3372);
		int32_t L_3373 = 3;
		int32_t L_3374 = (L_3372)->GetAt(static_cast<il2cpp_array_size_t>(L_3373));
		int32_t* L_3375 = V_0;
		int32_t L_3376 = V_34;
		int32_t L_3377 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3375, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3376, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3378 = V_1;
		NullCheck(L_3378);
		int32_t L_3379 = 2;
		int32_t L_3380 = (L_3378)->GetAt(static_cast<il2cpp_array_size_t>(L_3379));
		int32_t* L_3381 = V_0;
		int32_t L_3382 = V_34;
		int32_t L_3383 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3381, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3382, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3384 = V_1;
		NullCheck(L_3384);
		int32_t L_3385 = 1;
		int32_t L_3386 = (L_3384)->GetAt(static_cast<il2cpp_array_size_t>(L_3385));
		int32_t* L_3387 = V_0;
		int32_t L_3388 = V_34;
		int32_t L_3389 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3387, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3388, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3390 = V_1;
		NullCheck(L_3390);
		int32_t L_3391 = 0;
		int32_t L_3392 = (L_3390)->GetAt(static_cast<il2cpp_array_size_t>(L_3391));
		int32_t* L_3393 = V_0;
		int32_t L_3394 = V_34;
		int32_t L_3395 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3393, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3394, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_3314), ((int64_t)L_3317))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3320), ((int64_t)L_3323))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3326), ((int64_t)L_3329))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3332), ((int64_t)L_3335))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3338), ((int64_t)L_3341))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3344), ((int64_t)L_3347))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3350), ((int64_t)L_3353))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3356), ((int64_t)L_3359))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3362), ((int64_t)L_3365))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3368), ((int64_t)L_3371))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3374), ((int64_t)L_3377))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3380), ((int64_t)L_3383))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3386), ((int64_t)L_3389))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3392), ((int64_t)L_3395)))));
		int32_t* L_3396 = V_0;
		int32_t L_3397 = V_34;
		int32_t* L_3398 = ___0_residual;
		int32_t L_3399 = V_34;
		int32_t L_3400 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3398, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3399), 4)))));
		int64_t L_3401 = V_15;
		int32_t L_3402 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3396, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3397), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3400, ((int32_t)((int64_t)(L_3401>>((int32_t)(L_3402&((int32_t)63))))))));
		int32_t L_3403 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add(L_3403, 1));
	}

IL_2ad3:
	{
		int32_t L_3404 = V_34;
		int32_t L_3405 = ___2_length;
		if ((((int32_t)L_3404) < ((int32_t)L_3405)))
		{
			goto IL_29b9;
		}
	}
	{
		return;
	}

IL_2adc:
	{
		V_35 = 0;
		goto IL_2beb;
	}

IL_2ae4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3406 = V_1;
		NullCheck(L_3406);
		int32_t L_3407 = ((int32_t)12);
		int32_t L_3408 = (L_3406)->GetAt(static_cast<il2cpp_array_size_t>(L_3407));
		int32_t* L_3409 = V_0;
		int32_t L_3410 = V_35;
		int32_t L_3411 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3409, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3410, ((int32_t)13)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3412 = V_1;
		NullCheck(L_3412);
		int32_t L_3413 = ((int32_t)11);
		int32_t L_3414 = (L_3412)->GetAt(static_cast<il2cpp_array_size_t>(L_3413));
		int32_t* L_3415 = V_0;
		int32_t L_3416 = V_35;
		int32_t L_3417 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3415, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3416, ((int32_t)12)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3418 = V_1;
		NullCheck(L_3418);
		int32_t L_3419 = ((int32_t)10);
		int32_t L_3420 = (L_3418)->GetAt(static_cast<il2cpp_array_size_t>(L_3419));
		int32_t* L_3421 = V_0;
		int32_t L_3422 = V_35;
		int32_t L_3423 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3421, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3422, ((int32_t)11)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3424 = V_1;
		NullCheck(L_3424);
		int32_t L_3425 = ((int32_t)9);
		int32_t L_3426 = (L_3424)->GetAt(static_cast<il2cpp_array_size_t>(L_3425));
		int32_t* L_3427 = V_0;
		int32_t L_3428 = V_35;
		int32_t L_3429 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3427, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3428, ((int32_t)10)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3430 = V_1;
		NullCheck(L_3430);
		int32_t L_3431 = 8;
		int32_t L_3432 = (L_3430)->GetAt(static_cast<il2cpp_array_size_t>(L_3431));
		int32_t* L_3433 = V_0;
		int32_t L_3434 = V_35;
		int32_t L_3435 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3433, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3434, ((int32_t)9)))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3436 = V_1;
		NullCheck(L_3436);
		int32_t L_3437 = 7;
		int32_t L_3438 = (L_3436)->GetAt(static_cast<il2cpp_array_size_t>(L_3437));
		int32_t* L_3439 = V_0;
		int32_t L_3440 = V_35;
		int32_t L_3441 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3439, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3440, 8))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3442 = V_1;
		NullCheck(L_3442);
		int32_t L_3443 = 6;
		int32_t L_3444 = (L_3442)->GetAt(static_cast<il2cpp_array_size_t>(L_3443));
		int32_t* L_3445 = V_0;
		int32_t L_3446 = V_35;
		int32_t L_3447 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3445, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3446, 7))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3448 = V_1;
		NullCheck(L_3448);
		int32_t L_3449 = 5;
		int32_t L_3450 = (L_3448)->GetAt(static_cast<il2cpp_array_size_t>(L_3449));
		int32_t* L_3451 = V_0;
		int32_t L_3452 = V_35;
		int32_t L_3453 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3451, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3452, 6))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3454 = V_1;
		NullCheck(L_3454);
		int32_t L_3455 = 4;
		int32_t L_3456 = (L_3454)->GetAt(static_cast<il2cpp_array_size_t>(L_3455));
		int32_t* L_3457 = V_0;
		int32_t L_3458 = V_35;
		int32_t L_3459 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3457, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3458, 5))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3460 = V_1;
		NullCheck(L_3460);
		int32_t L_3461 = 3;
		int32_t L_3462 = (L_3460)->GetAt(static_cast<il2cpp_array_size_t>(L_3461));
		int32_t* L_3463 = V_0;
		int32_t L_3464 = V_35;
		int32_t L_3465 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3463, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3464, 4))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3466 = V_1;
		NullCheck(L_3466);
		int32_t L_3467 = 2;
		int32_t L_3468 = (L_3466)->GetAt(static_cast<il2cpp_array_size_t>(L_3467));
		int32_t* L_3469 = V_0;
		int32_t L_3470 = V_35;
		int32_t L_3471 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3469, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3470, 3))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3472 = V_1;
		NullCheck(L_3472);
		int32_t L_3473 = 1;
		int32_t L_3474 = (L_3472)->GetAt(static_cast<il2cpp_array_size_t>(L_3473));
		int32_t* L_3475 = V_0;
		int32_t L_3476 = V_35;
		int32_t L_3477 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3475, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3476, 2))), 4)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3478 = V_1;
		NullCheck(L_3478);
		int32_t L_3479 = 0;
		int32_t L_3480 = (L_3478)->GetAt(static_cast<il2cpp_array_size_t>(L_3479));
		int32_t* L_3481 = V_0;
		int32_t L_3482 = V_35;
		int32_t L_3483 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3481, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_3482, 1))), 4)))));
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_3408), ((int64_t)L_3411))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3414), ((int64_t)L_3417))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3420), ((int64_t)L_3423))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3426), ((int64_t)L_3429))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3432), ((int64_t)L_3435))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3438), ((int64_t)L_3441))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3444), ((int64_t)L_3447))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3450), ((int64_t)L_3453))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3456), ((int64_t)L_3459))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3462), ((int64_t)L_3465))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3468), ((int64_t)L_3471))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3474), ((int64_t)L_3477))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_3480), ((int64_t)L_3483)))));
		int32_t* L_3484 = V_0;
		int32_t L_3485 = V_35;
		int32_t* L_3486 = ___0_residual;
		int32_t L_3487 = V_35;
		int32_t L_3488 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3486, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3487), 4)))));
		int64_t L_3489 = V_15;
		int32_t L_3490 = ___5_lpcShiftNeeded;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3484, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3485), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(L_3488, ((int32_t)((int64_t)(L_3489>>((int32_t)(L_3490&((int32_t)63))))))));
		int32_t L_3491 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_3491, 1));
	}

IL_2beb:
	{
		int32_t L_3492 = V_35;
		int32_t L_3493 = ___2_length;
		if ((((int32_t)L_3492) < ((int32_t)L_3493)))
		{
			goto IL_2ae4;
		}
	}

IL_2bf3:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_BlockSize_m5FF4BDCD507DB675FC9C365022C63DBCECA85D7F_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlockSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MinBlockSize_mC8673AA35935CB55DBE3EA07EC5AE2B247D7FC55_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_value;
		__this->___U3CMinBlockSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MaxBlockSize_m5985C056322EDE78B9A5B3BCB94D3800516044BC_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_value;
		__this->___U3CMaxBlockSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MinFrameSize_mFC2A9C0E62D20206EEB55164FBBA126572F53672_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMinFrameSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_MaxFrameSize_mCF3A8298150F77B505CAF4702FE58B7B0FB516F9_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMaxFrameSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_SampleRate_m566F176EA48162C05284498E5F6FB80C94197ACA_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleRateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_Channels_mE2D86828D60FD04C98C6E95C4BA3F93DB149A83E_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_BitsPerSample_mECB6E178D793E336C2EEEBD0CAAB6B00C4AF3BE2_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitsPerSampleU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_TotalSamples_m09E2FE9953DFEF63A651B2C67596B099B4E043C6_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTotalSamplesU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataStreamInfo_set_Md5_mBD99E5646F0872F3DED16D534486240EF805805D_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMd5U3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMd5U3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_DoCrc_mEB06A78543A645E0644CA05454B9EE18F82EBB06_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CDoCrcU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_StreamPosition_mC0B7F353B62889A4582CF7D7B6CB283D4D726194_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CStreamPositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_HasError_m03DD07B9F23DD49A5CF1D216D90B89DBD3D8C31E_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CHasErrorU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BlockSize_mE1960FD3CDC3C95E44B09D582ED9B6EBA6595DD3_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBlockSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_SampleRate_mF6606EE4DB937375B138F09C807CDCAD20A44E84_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_SampleRate_m0DEECDF66E3B6075DB55859A3810840E51C6DA97_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleRateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_ChannelAssignment_m2A20BEEF0A5DEDC14FDDD270B5AFAB5E10D2A584_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelAssignmentU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_Channels_m95722D4AB4BE559279F08B8A53840E829541156B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacMetadataStreamInfo_get_BitsPerSample_mD7BC750D63E39455B9C606634D7BFD6BE86D91F7_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitsPerSampleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BitsPerSample_mF8F051281176E9F75CB44C7B3E954FD9BEFF214F_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBitsPerSampleU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t FlacMetadataStreamInfo_get_MinBlockSize_m0EDDE521BEB22937873145E4F088A2A74E607D54_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CMinBlockSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t FlacMetadataStreamInfo_get_MaxBlockSize_m96E6123A709CCC8E1E635DA6B220B7A630EFEBBE_inline (FlacMetadataStreamInfo_t7C5410F7162FBD260DCC21F8EF4EE28D569FBFF0* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CMaxBlockSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_BlockingStrategy_m7D5546CD33A3C2E067AD41F2A60B72A74475F215_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBlockingStrategyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_SampleNumber_mE80FE281D9179F8954F4181B69ED49195E66E240_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSampleNumberU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_FrameNumber_m103E28731FAF73D5351AC10ACEEF0711EDDF0C4B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFrameNumberU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacFrameHeader_get_DoCrc_mEC039964627D18018803E7BB5C64721A12F1C1B6_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDoCrcU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* BitReader_get_Buffer_m72D288CA63B9EC07F4B564D7DC7E01023428BE2D_inline (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = __this->____storedBuffer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitReader_get_Position_mDF7B7F2AC08E572A09A896B23125FE84050CAB72_inline (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____position;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameHeader_set_Crc8_mBA29531A29EE8D3D6482E787085BC40BA92088D2_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CCrc8U3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t FlacFrameHeader_get_Crc8_mA25E9FEC8FC88B3D080F24F7AD799FF4424F372B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CCrc8U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_BitsPerSample_mD996991E78EF56E101C68EA8212183D8B5DABDD9_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBitsPerSampleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_Channels_m2F2A17D9026CA512946D48F6743B06D74FC9170B_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FlacFrameHeader_get_SampleRate_mF08F52A625C858A4B38857E7949838258426447D_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BitReader_get_Cache_m06DEFD3BA0016711B720E1574FDD91D888610C5B_inline (BitReader_t8A92923152CF26D380F4DF4EB0FA06CA482AA0BF* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____cache;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScanFinishedEventArgs_set_Frames_m264D6DB77F9D8B188FE016865EA96FC3ED2D3345_inline (FlacPreScanFinishedEventArgs_t34E1D12D4A9D12B5BCD8259E1610253150F6A3AD* __this, ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* ___0_value, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tB495201010F6A8952182B4C4E9FC7AFCCD80CAD7* L_0 = ___0_value;
		__this->___U3CFramesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFramesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadata_set_MetaDataType_m84645E9F8EA0F260998FB8FBD144CD28C3DB887F_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CMetaDataTypeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadata_set_IsLastMetaBlock_mA7612D63FC0D096E525EDBB187A514555217D555_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsLastMetaBlockU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadata_set_Length_m65DD77A7B97D53F2056D862769E8AB292F6D078A_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacMetadata_get_IsLastMetaBlock_mFF8CBB946A196DBE8BE04D3D958D9D15AFD787CC_inline (FlacMetadata_t6AD3DED5446EF14920C1B3FA919608141CE8DEFD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsLastMetaBlockU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* FlacPreScan_get_Frames_m96102FC47107EEAB79043BB27B73939C3251BBE6_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_0 = __this->___U3CFramesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* FlacFrameInformation_get_Header_mB5044A561A1C7A2B3AC05BA93CB2F78EE641D37D_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_0 = __this->___U3CHeaderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScan_set_TotalLength_mF1476FE9C3931DC062C05DF682EC78846F7FF7A1_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTotalLengthU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScan_set_TotalSamples_mD2664B2766ADC93AC58C0BD3BF2495BC64D7EE19_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTotalSamplesU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacPreScan_set_Frames_mCB0194F2FB1CA14640BFDFEC9B304032C563754F_inline (FlacPreScan_tCDEFB1D956D0C2ABD0E1CDAD91005C36D9B741BA* __this, List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* L_0 = ___0_value;
		__this->___U3CFramesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFramesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_IsFirstFrame_mFF528869D7640D40EE66F41C0441528D12D91F81_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsFirstFrameU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacFrameInformation_get_IsFirstFrame_mAF9EFA2E50AC9980630137D5A21F807EEC8C4002_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsFirstFrameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_StreamOffset_m4D635D167C1F66B39694113A5C114D521CFBA17F_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CStreamOffsetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_Header_mFED08C61F2CD6A6527CF6E83C5207B0E8095B9BC_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* ___0_value, const RuntimeMethod* method) 
{
	{
		FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* L_0 = ___0_value;
		__this->___U3CHeaderU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeaderU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t FlacFrameInformation_get_SampleOffset_mA328BCEA4FB720802D88B3318653DCE2A2463C57_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CSampleOffsetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacFrameInformation_set_SampleOffset_mC6B1C1A2DCB4C35F8C57FD423A2E6C1E485D556E_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSampleOffsetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlacFrameHeader_get_HasError_mACE7D2B8D8FBEDAC3FB5B45918A0A091294915E3_inline (FlacFrameHeader_t8DDF135E85A48B55DF30F8CA6C5FC48CF19D7E46* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasErrorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t FlacFrameInformation_get_StreamOffset_m703163CE91BDC5849C4C3A323EF076DB7C949B93_inline (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CStreamOffsetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacMetadataSeekTable_set_EntryCount_m4A3C390031716091067E099DFA2FAC26704FE7E7_inline (FlacMetadataSeekTable_t4FC3717FD4B9584DD454FBDB50AD05E6A6DD7482* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CEntryCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacSeekPoint_set_SampleNumber_mA10FAD1E5580494621228BD66701B737194A820E_inline (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CSampleNumberU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacSeekPoint_set_Offset_mB4808E52C3C94C72F6D03DA948E3F867A3590057_inline (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3COffsetU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlacSeekPoint_set_FrameSize_m34CAE7D6FA22211EEA623C36C7B81FF8E920BCDC_inline (FlacSeekPoint_t27C47BD9EA3CC714C8DAFC83C43416C1858347BD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFrameSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E Enumerator_get_Current_m1A022BDE485503D46305F7A8F298FBAAD0E8BECD_gshared_inline (Enumerator_t32B5F6CBF21E147C263B1BAFC047800EEA44EF0E* __this, const RuntimeMethod* method) 
{
	{
		FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m62FD60771C32BE180604729582382D9F9CB19BB9_gshared_inline (List_1_t8BC2E307DD47BEAEF3C4F4047E9CF2DF9F67A169* __this, FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E ___0_item, const RuntimeMethod* method) 
{
	FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		FlacFrameInformationU5BU5D_t024472CEBF5D40C43F7C767F668D6A9AFE14FB39* L_6 = V_0;
		int32_t L_7 = V_1;
		FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E)L_8);
		return;
	}

IL_0034:
	{
		FlacFrameInformation_t3577B15DD5538F12D8105FC22837DD4881385C2E L_9 = ___0_item;
		List_1_AddWithResize_mAB7F3CE282225F2E719E75BB2775B362E89350AD(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
