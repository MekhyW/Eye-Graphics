#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

struct EventHandler_1_tD8CD263AD37236A3E6D172E2279AEB1BA8AE0DAB;
struct EventHandler_1_tF283423798357FD863C25D18CAE3BA90BD6E16FF;
struct EventHandler_1_t7E5D268CF52B1C9542F6DA859F5DE310C05231CC;
struct EventHandler_1_tAC9728BF324E262CF901E7B7F9B0F502789F497F;
struct EventHandler_1_t309AA47D86BEA5E87317A545C8DD8283147B9FBC;
struct EventHandler_1_t64E36B1408CD293F8E90CD18DF8D29605D07C861;
struct EventHandler_1_tAA63491FF228AB7B9D8DD0764FA013B8D22C6092;
struct EventHandler_1_tA203B8AD7DE7E8923520FED2F1C1AD86BC207C03;
struct EventHandler_1_t7DAA6F1406E55F33BE3E752E1F14F0FE662EBD30;
struct EventHandler_1_tCB1573E225C815C50F68472CD8D7A50719CFC427;
struct EventHandler_1_t78F8E13BD41A6A170E74B85A879B68886FB5F39F;
struct EventHandler_1_t1D5E6E5673FB22D30E80FC0FF5A9EACE17BA01A5;
struct EventHandler_1_tFE13057AF208592E06457AB3DE8189C195D70999;
struct EventHandler_1_t421E676CD0601C193666E511D19EF42C45779388;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB;
struct AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA;
struct AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633;
struct AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963;
struct ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5;
struct IStream_t5B8504123802C24362FFFFC3891FDE9A60398873;
struct MMDeviceEnumerator_t2C584F0D246CE3ACA933BFDC889CE1D49C8FB936;
struct MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC;
struct MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WasapiOut_t498884BC8E858CFFBC36FA69229D66A8E7A2DCA9;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Guid_t;
struct IStream_t5B8504123802C24362FFFFC3891FDE9A60398873;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IAudioSessionEvents_t324AF49B0A1BE20E64BBDB0BCD3EF34E03B56516 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnDisplayNameChanged_m1163A6B32272D95436E28574BE2F460C22573418(Il2CppChar* ___0_newDisplayName, Guid_t* ___1_eventContext) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnIconPathChanged_m585BF538A56C63C04B3E13F7B3F4D33A73832E97(Il2CppChar* ___0_newIconPath, Guid_t* ___1_eventContext) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnSimpleVolumeChanged_m69223287CDE01E9BCC7A97DBF220AA0E149456A6(float ___0_newVolume, int32_t ___1_newMute, Guid_t* ___2_eventContext) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnChannelVolumeChanged_m7B80940E7259A5E6B5477EF9BD280D660DAADECB(int32_t ___0_channelCount, float* ___1_newChannelVolumeArray, int32_t ___2_changedChannel, Guid_t* ___3_eventContext) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnGroupingParamChanged_m07FE53EA9C41FD5FBBE78DAD36CCB031C8BE3FC5(Guid_t* ___0_newGroupingParam, Guid_t* ___1_eventContext) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnStateChanged_m6180EA438121C0FFF52E674899BC60C3AAD75EFB(int32_t ___0_newState) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnSessionDisconnected_m73AAF071CEBA80674ACFC44A88CC04BE135872F0(int32_t ___0_disconnectReason) = 0;
};
struct NOVTABLE IAudioVolumeDuckNotification_tCA9CCCDBB459019EF5677FE64D69CC10B8D4DAC3 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAudioVolumeDuckNotification_OnVolumeDuckNotification_mFBD6C16898EB8BB73F97CDF59F0C60A716CBD94D(Il2CppChar* ___0_sessionId, int32_t ___1_countCommunicationSessions, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioVolumeDuckNotification_OnVolumeUnduckNotification_mA11EB625281A6DA4E47DF2454316854D93019F05(Il2CppChar* ___0_sessionId, int32_t ___1_countCommunicationSessions, int32_t* comReturnValue) = 0;
};
struct AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	EventHandler_1_tD8CD263AD37236A3E6D172E2279AEB1BA8AE0DAB* ___NotifyRecived;
};
struct AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	EventHandler_1_tAC9728BF324E262CF901E7B7F9B0F502789F497F* ___DisplayNameChanged;
	EventHandler_1_t64E36B1408CD293F8E90CD18DF8D29605D07C861* ___IconPathChanged;
	EventHandler_1_tAA63491FF228AB7B9D8DD0764FA013B8D22C6092* ___SimpleVolumeChanged;
	EventHandler_1_tF283423798357FD863C25D18CAE3BA90BD6E16FF* ___ChannelVolumeChanged;
	EventHandler_1_t309AA47D86BEA5E87317A545C8DD8283147B9FBC* ___GroupingParamChanged;
	EventHandler_1_tA203B8AD7DE7E8923520FED2F1C1AD86BC207C03* ___StateChanged;
	EventHandler_1_t7E5D268CF52B1C9542F6DA859F5DE310C05231CC* ___SessionDisconnected;
};
struct AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	EventHandler_1_tFE13057AF208592E06457AB3DE8189C195D70999* ___SessionCreated;
};
struct AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	EventHandler_1_t421E676CD0601C193666E511D19EF42C45779388* ___VolumeDuckNotification;
	EventHandler_1_t421E676CD0601C193666E511D19EF42C45779388* ___VolumeUnDuckNotification;
};
struct MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	MMDeviceEnumerator_t2C584F0D246CE3ACA933BFDC889CE1D49C8FB936* ____deviceEnumerator;
	EventHandler_1_t1D5E6E5673FB22D30E80FC0FF5A9EACE17BA01A5* ___DeviceStateChanged;
	EventHandler_1_tCB1573E225C815C50F68472CD8D7A50719CFC427* ___DeviceAdded;
	EventHandler_1_tCB1573E225C815C50F68472CD8D7A50719CFC427* ___DeviceRemoved;
	EventHandler_1_t7DAA6F1406E55F33BE3E752E1F14F0FE662EBD30* ___DefaultDeviceChanged;
	EventHandler_1_t78F8E13BD41A6A170E74B85A879B68886FB5F39F* ___DevicePropertyChanged;
	bool ____disposed;
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
struct WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B  : public RuntimeObject
{
	WasapiOut_t498884BC8E858CFFBC36FA69229D66A8E7A2DCA9* ____wasapiOut;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 
{
	int32_t ___dwLowDateTime;
	int32_t ___dwHighDateTime;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream;
	bool ____disposeBaseStream;
};
struct NOVTABLE IAudioEndpointVolumeCallback_tCAFE7EF8BE0C333F25AC602F77D5192881C59A10 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IAudioEndpointVolumeCallback_OnNotify_m374EF6D85375C43AF326544C735689989244C912(intptr_t ___0_notifyData) = 0;
};
struct NOVTABLE IAudioSessionNotification_tB7486E1356482020ECDAAF6F776FFD297118EA0E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IAudioSessionNotification_OnSessionCreated_m1CB0B25A5442180F7682FDC0917A7AC57867EB55(intptr_t ___0_newSession) = 0;
};
struct NOVTABLE IMediaBuffer_t79A339AC5E87CEBD9E1936021A52DB69DAAB54A2 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IMediaBuffer_SetLength_m868DB56911DDFEBD75349F7F7FFAB5A3DE8B7F6C(int32_t ___0_length) = 0;
	virtual int32_t STDCALL IMediaBuffer_GetMaxLength_m73ACFF0055E219E977E6E9B1A35311E051DCF9D3(int32_t* ___0_length) = 0;
	virtual int32_t STDCALL IMediaBuffer_GetBufferAndLength_m229B8F527070E825E26B9EF61B1E43C3E440D7D7(intptr_t ___0_ppBuffer, intptr_t ___1_validDataByteLength) = 0;
};
struct NOVTABLE IStream_t5B8504123802C24362FFFFC3891FDE9A60398873 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IStream_Read_mE107056492A8220D54729A09563D0FFA54FAFEC8(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead) = 0;
	virtual int32_t STDCALL IStream_Write_mB3854BD02776F8D242DFF93904F24732E87AA2D2(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten) = 0;
	virtual int32_t STDCALL IStream_Seek_mEE0D2D45103A31CC686BFCFC0E33090211127FE4(int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition) = 0;
	virtual int32_t STDCALL IStream_SetSize_m8189F455E1B729F9928FB789AF522A77DA00B042(int64_t ___0_libNewSize) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m2F6160F0BDB46497E6A5B4B8E4E969691D8D9A84(IStream_t5B8504123802C24362FFFFC3891FDE9A60398873* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten, int32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IStream_Commit_m9091BEF83066D670D2EF070C5F19FCD62583842E(int32_t ___0_grfCommitFlags) = 0;
	virtual int32_t STDCALL IStream_Revert_m01ADFB51E9C30365F60ED2B9C2DD64A87F1F3476() = 0;
	virtual int32_t STDCALL IStream_LockRegion_mF2AECA97C5D14780D869EE3773770FB82991A0B7(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) = 0;
	virtual int32_t STDCALL IStream_UnlockRegion_mA68ECA8B9614176C8296E06AC823167D6F486FC8(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) = 0;
	virtual int32_t STDCALL IStream_Stat_m35F69FE7F912084C869D6F125CED27F5C1A83935(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) = 0;
	virtual int32_t STDCALL IStream_Clone_m343CD91A4EFF00B1B99EDB840D9EC8C7C12C7EA0(IStream_t5B8504123802C24362FFFFC3891FDE9A60398873** ___0_ppstm) = 0;
};
struct MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E  : public RuntimeObject
{
	int32_t ____maxlength;
	intptr_t ____buffer;
	int32_t ____length;
	bool ____disposed;
};
struct PropertyKey_t58DED1084492B11296C3B45ABFADE53DAABB5B72 
{
	Guid_t ___ID;
	int32_t ___PropertyID;
};
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 
{
	String_t* ___pwcsName;
	int32_t ___type;
	int64_t ___cbSize;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime;
	int32_t ___grfMode;
	int32_t ___grfLocksSupported;
	Guid_t ___clsid;
	int32_t ___grfStateBits;
	int32_t ___reserved;
};
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke
{
	Il2CppChar* ___pwcsName;
	int32_t ___type;
	int64_t ___cbSize;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime;
	int32_t ___grfMode;
	int32_t ___grfLocksSupported;
	Guid_t ___clsid;
	int32_t ___grfStateBits;
	int32_t ___reserved;
};
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com
{
	Il2CppChar* ___pwcsName;
	int32_t ___type;
	int64_t ___cbSize;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime;
	int32_t ___grfMode;
	int32_t ___grfLocksSupported;
	Guid_t ___clsid;
	int32_t ___grfStateBits;
	int32_t ___reserved;
};
struct NOVTABLE IMMNotificationClient_tDA5E5A962F9A7E51F5AB4C427CFB5D5DCDF8E57D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceStateChanged_m1832490958A210B743646A6BBB7611118DC2E0D2(Il2CppChar* ___0_deviceId, int32_t ___1_deviceState) = 0;
	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceAdded_m624B864E35247A54029BEB038F2D70B871F25DFB(Il2CppChar* ___0_deviceId) = 0;
	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceRemoved_mB873E71A510DBFC79F3D6C81412C65F34B5ED2E5(Il2CppChar* ___0_deviceId) = 0;
	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDefaultDeviceChanged_mE6AD74F1FE927ADD2D55ED85E63FF3D5E6A7BABA(int32_t ___0_dataFlow, int32_t ___1_role, Il2CppChar* ___2_deviceId) = 0;
	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnPropertyValueChanged_mCCBA9CC3372445409E782588773BBE9EA8F6FAF1(Il2CppChar* ___0_deviceId, PropertyKey_t58DED1084492B11296C3B45ABFADE53DAABB5B72 ___1_key) = 0;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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

IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_back(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_cleanup(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioEndpointVolumeCallback_CSCore_CoreAudioAPI_IAudioEndpointVolumeCallback_OnNotify_mB1AEFCCA4DD30EC6FA627DE75237FBAC60FD38D3 (AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB* __this, intptr_t ___0_notifyData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnDisplayNameChanged_m94BD23C9B45C5A3FC046C148A0BEEC8616E46ACA (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __this, String_t* ___0_newDisplayName, Guid_t* ___1_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnIconPathChanged_m15F44255D092534755426254D649022B26FAF2BF (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __this, String_t* ___0_newIconPath, Guid_t* ___1_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnSimpleVolumeChanged_m824A9627AFA2D89B6C0B3DB8A5F778ACC03C4070 (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __this, float ___0_newVolume, bool ___1_newMute, Guid_t* ___2_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnChannelVolumeChanged_mA1D8F23E16FE181B64700C797F6C14DFD65ADAD8 (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __this, int32_t ___0_channelCount, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_newChannelVolumeArray, int32_t ___2_changedChannel, Guid_t* ___3_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnGroupingParamChanged_m702C78B18FC0903EFF8E8F7E91ADC4238E5F2B7B (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __this, Guid_t* ___0_newGroupingParam, Guid_t* ___1_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnStateChanged_mCAF754C3569C8A5EAE7C3D0DCA66AD79A2FEDE7B (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __this, int32_t ___0_newState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnSessionDisconnected_mD1D91EFD02B7606E987E6C894CC553149999ADD6 (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __this, int32_t ___0_disconnectReason, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSessionNotification_CSCore_CoreAudioAPI_IAudioSessionNotification_OnSessionCreated_m35074EBE6C49E0A6FA79FCB3302713F2FAD2FB83 (AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633* __this, intptr_t ___0_newSession, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioVolumeDuckNotification_CSCore_CoreAudioAPI_IAudioVolumeDuckNotification_OnVolumeDuckNotification_mCDC7D4147FF29088FF63FC742EE0E9393AB29A36 (AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963* __this, String_t* ___0_sessionId, int32_t ___1_countCommunicationSessions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioVolumeDuckNotification_CSCore_CoreAudioAPI_IAudioVolumeDuckNotification_OnVolumeUnduckNotification_m8DDEB561B4EC7D09BD5E0B840DA78C772AACAC83 (AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963* __this, String_t* ___0_sessionId, int32_t ___1_countCommunicationSessions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_Read_mED4E20C9F30D9136736C182AAAF2390C3289FF9A (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_Write_m6FC92E0F2360B765A3FF5B9EEF88CDDC372BC787 (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_Seek_m8261A9B33B13AAEB3D198B78DC31E05BF9624EB5 (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_SetSize_m53440C74C7752523917A0FD2B74E68276791960B (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, int64_t ___0_libNewSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_CopyTo_m3208E9F43FCB18570E6DD8FA333D2BB3B0DE1BA8 (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, RuntimeObject* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_Commit_m065073AF54D285C131820AB0F6C551F4D8AF5C4E (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, int32_t ___0_grfCommitFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_Revert_m2689A9A4255D89AFCD636E683B6D76038980AFB0 (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_LockRegion_m218701EB985BF03E18FB5BE5A3CAC92FD6912609 (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_UnlockRegion_m6DC9A0A00AA8D3FF763590A1C110D300A2B248EA (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_Stat_mC6BF1261BD02B4CE3C492F65A936FD8F2C9119C4 (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___0_pstatstg, int32_t ___1_grfStatFlag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComStream_CSCore_Win32_IStream_Clone_m487F5CE5023A3BBD88EF8095421B8DF8B2A80FA3 (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __this, RuntimeObject** ___0_ppstm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDeviceStateChanged_m5E4DD5C35797F619525092651D4B300545E57759 (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __this, String_t* ___0_deviceId, int32_t ___1_deviceState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDeviceAdded_m2B3316BF22E9B94C716EE8D3A5B1BCC4099CC51A (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __this, String_t* ___0_deviceId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDeviceRemoved_m566CF61C480E1620771829DB816B754DC845AB92 (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __this, String_t* ___0_deviceId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDefaultDeviceChanged_mCF085BADE260F0517C446BD030B21E8DB1F5921D (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __this, int32_t ___0_dataFlow, int32_t ___1_role, String_t* ___2_deviceId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnPropertyValueChanged_m6CF7DB9E6961ADA0057FBA61671987404B9C8142 (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __this, String_t* ___0_deviceId, PropertyKey_t58DED1084492B11296C3B45ABFADE53DAABB5B72 ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MediaBuffer_CSCore_DMO_IMediaBuffer_SetLength_mFAE0500C8AB0FBC99E35F69DD9E498625E516D37 (MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E* __this, int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MediaBuffer_CSCore_DMO_IMediaBuffer_GetMaxLength_mDDBACD5BADF2702B3BE207D3B12698DCDC0D1EEA (MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MediaBuffer_CSCore_DMO_IMediaBuffer_GetBufferAndLength_m0B381C004029FA5E90888453F5DDAE0C77257957 (MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E* __this, intptr_t ___0_ppBuffer, intptr_t ___1_validDataByteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnDisplayNameChanged_m26D34FE491D9697F47F03462FD9EABEE94FA6D85 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, String_t* ___0_newDisplayName, Guid_t* ___1_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnIconPathChanged_mF7DC3F29F0174D947A33B06C3835DBF12AB512F6 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, String_t* ___0_newIconPath, Guid_t* ___1_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnSimpleVolumeChanged_m8B8DAF21C15F06DDB774A6FA3EE279E5BEFBF294 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, float ___0_newVolume, bool ___1_newMute, Guid_t* ___2_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnChannelVolumeChanged_m987165387308575A4E8E1F12910F918983887B11 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, int32_t ___0_channelCount, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_newChannelVolumeArray, int32_t ___2_changedChannel, Guid_t* ___3_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnGroupingParamChanged_m54705D27401A90821D6816396D6203B1E8736B70 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, Guid_t* ___0_newGroupingParam, Guid_t* ___1_eventContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnStateChanged_m37F2FE709AB1DE5554E3161598652CE1409DE427 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, int32_t ___0_newState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnSessionDisconnected_m6D23B3359226EE8C49BE62828B52D23204EA9DEE (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, int32_t ___0_disconnectReason, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnDeviceStateChanged_m80E1A24C127EFDBB89EC560D8E1E274E070C3B21 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, String_t* ___0_deviceId, int32_t ___1_deviceState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnDeviceAdded_m5CFE63F61721EBD44E6DD62C9671ADA333FACCE0 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, String_t* ___0_deviceId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnDeviceRemoved_mF453A202A3D4D512CA778D484775D6F46859D3D2 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, String_t* ___0_deviceId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnDefaultDeviceChanged_mF0A8D621C83DC59722622B5EE2A0CC5DEFA9CF84 (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, int32_t ___0_dataFlow, int32_t ___1_role, String_t* ___2_deviceId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasapiEventHandler_OnPropertyValueChanged_mCD481C0A13EE45FE57E85D92F28A14BAC33A7B7B (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __this, String_t* ___0_deviceId, PropertyKey_t58DED1084492B11296C3B45ABFADE53DAABB5B72 ___1_key, const RuntimeMethod* method) ;

struct AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB_ComCallableWrapper>, IAudioEndpointVolumeCallback_tCAFE7EF8BE0C333F25AC602F77D5192881C59A10
{
	inline AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAudioEndpointVolumeCallback_tCAFE7EF8BE0C333F25AC602F77D5192881C59A10::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAudioEndpointVolumeCallback_tCAFE7EF8BE0C333F25AC602F77D5192881C59A10*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual int32_t STDCALL IAudioEndpointVolumeCallback_OnNotify_m374EF6D85375C43AF326544C735689989244C912(intptr_t ___0_notifyData) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB* __thisValue = (AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB*)GetManagedObjectInline();
			returnValue = AudioEndpointVolumeCallback_CSCore_CoreAudioAPI_IAudioEndpointVolumeCallback_OnNotify_mB1AEFCCA4DD30EC6FA627DE75237FBAC60FD38D3(__thisValue, ___0_notifyData, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AudioEndpointVolumeCallback_t46FA7BB4BD8C3EC706CB3A1456458CB78EE652EB_ComCallableWrapper(obj));
}

struct AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA_ComCallableWrapper>, IAudioSessionEvents_t324AF49B0A1BE20E64BBDB0BCD3EF34E03B56516
{
	inline AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAudioSessionEvents_t324AF49B0A1BE20E64BBDB0BCD3EF34E03B56516::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAudioSessionEvents_t324AF49B0A1BE20E64BBDB0BCD3EF34E03B56516*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnDisplayNameChanged_m1163A6B32272D95436E28574BE2F460C22573418(Il2CppChar* ___0_newDisplayName, Guid_t* ___1_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_newDisplayName_unmarshaled = NULL;
		____0_newDisplayName_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_newDisplayName);

		try
		{
			AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __thisValue = (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA*)GetManagedObjectInline();
			AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnDisplayNameChanged_m94BD23C9B45C5A3FC046C148A0BEEC8616E46ACA(__thisValue, ____0_newDisplayName_unmarshaled, ___1_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnIconPathChanged_m585BF538A56C63C04B3E13F7B3F4D33A73832E97(Il2CppChar* ___0_newIconPath, Guid_t* ___1_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_newIconPath_unmarshaled = NULL;
		____0_newIconPath_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_newIconPath);

		try
		{
			AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __thisValue = (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA*)GetManagedObjectInline();
			AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnIconPathChanged_m15F44255D092534755426254D649022B26FAF2BF(__thisValue, ____0_newIconPath_unmarshaled, ___1_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnSimpleVolumeChanged_m69223287CDE01E9BCC7A97DBF220AA0E149456A6(float ___0_newVolume, int32_t ___1_newMute, Guid_t* ___2_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __thisValue = (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA*)GetManagedObjectInline();
			AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnSimpleVolumeChanged_m824A9627AFA2D89B6C0B3DB8A5F778ACC03C4070(__thisValue, ___0_newVolume, static_cast<bool>(___1_newMute), ___2_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnChannelVolumeChanged_m7B80940E7259A5E6B5477EF9BD280D660DAADECB(int32_t ___0_channelCount, float* ___1_newChannelVolumeArray, int32_t ___2_changedChannel, Guid_t* ___3_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____1_newChannelVolumeArray_unmarshaled = NULL;
		if (___1_newChannelVolumeArray != NULL)
		{
			____1_newChannelVolumeArray_unmarshaled = reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 1));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1); i++)
			{
				(____1_newChannelVolumeArray_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_newChannelVolumeArray)[i]);
			}
		}

		try
		{
			AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __thisValue = (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA*)GetManagedObjectInline();
			AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnChannelVolumeChanged_mA1D8F23E16FE181B64700C797F6C14DFD65ADAD8(__thisValue, ___0_channelCount, ____1_newChannelVolumeArray_unmarshaled, ___2_changedChannel, ___3_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnGroupingParamChanged_m07FE53EA9C41FD5FBBE78DAD36CCB031C8BE3FC5(Guid_t* ___0_newGroupingParam, Guid_t* ___1_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __thisValue = (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA*)GetManagedObjectInline();
			AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnGroupingParamChanged_m702C78B18FC0903EFF8E8F7E91ADC4238E5F2B7B(__thisValue, ___0_newGroupingParam, ___1_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnStateChanged_m6180EA438121C0FFF52E674899BC60C3AAD75EFB(int32_t ___0_newState) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __thisValue = (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA*)GetManagedObjectInline();
			AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnStateChanged_mCAF754C3569C8A5EAE7C3D0DCA66AD79A2FEDE7B(__thisValue, ___0_newState, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnSessionDisconnected_m73AAF071CEBA80674ACFC44A88CC04BE135872F0(int32_t ___0_disconnectReason) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA* __thisValue = (AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA*)GetManagedObjectInline();
			AudioSessionEvents_CSCore_CoreAudioAPI_IAudioSessionEvents_OnSessionDisconnected_mD1D91EFD02B7606E987E6C894CC553149999ADD6(__thisValue, ___0_disconnectReason, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AudioSessionEvents_t87A7ABEF6CA3E9E7D84620FB2AACA2773B391CFA_ComCallableWrapper(obj));
}

struct AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633_ComCallableWrapper>, IAudioSessionNotification_tB7486E1356482020ECDAAF6F776FFD297118EA0E
{
	inline AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAudioSessionNotification_tB7486E1356482020ECDAAF6F776FFD297118EA0E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAudioSessionNotification_tB7486E1356482020ECDAAF6F776FFD297118EA0E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual int32_t STDCALL IAudioSessionNotification_OnSessionCreated_m1CB0B25A5442180F7682FDC0917A7AC57867EB55(intptr_t ___0_newSession) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633* __thisValue = (AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633*)GetManagedObjectInline();
			returnValue = AudioSessionNotification_CSCore_CoreAudioAPI_IAudioSessionNotification_OnSessionCreated_m35074EBE6C49E0A6FA79FCB3302713F2FAD2FB83(__thisValue, ___0_newSession, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AudioSessionNotification_tEC6D9E64A244D4B3ED60F364C0AC40E3BDF15633_ComCallableWrapper(obj));
}

struct AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963_ComCallableWrapper>, IAudioVolumeDuckNotification_tCA9CCCDBB459019EF5677FE64D69CC10B8D4DAC3
{
	inline AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAudioVolumeDuckNotification_tCA9CCCDBB459019EF5677FE64D69CC10B8D4DAC3::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAudioVolumeDuckNotification_tCA9CCCDBB459019EF5677FE64D69CC10B8D4DAC3*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IAudioVolumeDuckNotification_OnVolumeDuckNotification_mFBD6C16898EB8BB73F97CDF59F0C60A716CBD94D(Il2CppChar* ___0_sessionId, int32_t ___1_countCommunicationSessions, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_sessionId_unmarshaled = NULL;
		____0_sessionId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_sessionId);

		int32_t returnValue;
		try
		{
			AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963* __thisValue = (AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963*)GetManagedObjectInline();
			returnValue = AudioVolumeDuckNotification_CSCore_CoreAudioAPI_IAudioVolumeDuckNotification_OnVolumeDuckNotification_mCDC7D4147FF29088FF63FC742EE0E9393AB29A36(__thisValue, ____0_sessionId_unmarshaled, ___1_countCommunicationSessions, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioVolumeDuckNotification_OnVolumeUnduckNotification_mA11EB625281A6DA4E47DF2454316854D93019F05(Il2CppChar* ___0_sessionId, int32_t ___1_countCommunicationSessions, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_sessionId_unmarshaled = NULL;
		____0_sessionId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_sessionId);

		int32_t returnValue;
		try
		{
			AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963* __thisValue = (AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963*)GetManagedObjectInline();
			returnValue = AudioVolumeDuckNotification_CSCore_CoreAudioAPI_IAudioVolumeDuckNotification_OnVolumeUnduckNotification_m8DDEB561B4EC7D09BD5E0B840DA78C772AACAC83(__thisValue, ____0_sessionId_unmarshaled, ___1_countCommunicationSessions, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AudioVolumeDuckNotification_t0A23F56DA2DB406817673BC372678539A5110963_ComCallableWrapper(obj));
}

struct ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5_ComCallableWrapper>, IStream_t5B8504123802C24362FFFFC3891FDE9A60398873
{
	inline ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IStream_t5B8504123802C24362FFFFC3891FDE9A60398873::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IStream_t5B8504123802C24362FFFFC3891FDE9A60398873*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual int32_t STDCALL IStream_Read_mE107056492A8220D54729A09563D0FFA54FAFEC8(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_empty = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_empty = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
		}

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_Read_mED4E20C9F30D9136736C182AAAF2390C3289FF9A(__thisValue, ____0_pv_empty, ___1_cb, ___2_pcbRead, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		if (____0_pv_empty != NULL)
		{
			il2cpp_array_size_t _____0_pv_empty_Length = (____0_pv_empty)->max_length;
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_____0_pv_empty_Length); i++)
			{
				(___0_pv)[i] = (____0_pv_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		return returnValue;
	}

	virtual int32_t STDCALL IStream_Write_mB3854BD02776F8D242DFF93904F24732E87AA2D2(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_unmarshaled = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(___1_cb); i++)
			{
				(____0_pv_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___0_pv)[i]);
			}
		}

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_Write_m6FC92E0F2360B765A3FF5B9EEF88CDDC372BC787(__thisValue, ____0_pv_unmarshaled, ___1_cb, ___2_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IStream_Seek_mEE0D2D45103A31CC686BFCFC0E33090211127FE4(int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_Seek_m8261A9B33B13AAEB3D198B78DC31E05BF9624EB5(__thisValue, ___0_dlibMove, ___1_dwOrigin, ___2_plibNewPosition, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IStream_SetSize_m8189F455E1B729F9928FB789AF522A77DA00B042(int64_t ___0_libNewSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_SetSize_m53440C74C7752523917A0FD2B74E68276791960B(__thisValue, ___0_libNewSize, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		return returnValue;
	}

	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m2F6160F0BDB46497E6A5B4B8E4E969691D8D9A84(IStream_t5B8504123802C24362FFFFC3891FDE9A60398873* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_pstm_unmarshaled = NULL;
		if (___0_pstm != NULL)
		{
			____0_pstm_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___0_pstm, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_pstm_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_pstm_unmarshaled), IStream_t5B8504123802C24362FFFFC3891FDE9A60398873::IID, ___0_pstm);
			}
		}
		else
		{
			____0_pstm_unmarshaled = NULL;
		}

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_CopyTo_m3208E9F43FCB18570E6DD8FA333D2BB3B0DE1BA8(__thisValue, ____0_pstm_unmarshaled, ___1_cb, ___2_pcbRead, ___3_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual int32_t STDCALL IStream_Commit_m9091BEF83066D670D2EF070C5F19FCD62583842E(int32_t ___0_grfCommitFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_Commit_m065073AF54D285C131820AB0F6C551F4D8AF5C4E(__thisValue, ___0_grfCommitFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IStream_Revert_m01ADFB51E9C30365F60ED2B9C2DD64A87F1F3476() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_Revert_m2689A9A4255D89AFCD636E683B6D76038980AFB0(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IStream_LockRegion_mF2AECA97C5D14780D869EE3773770FB82991A0B7(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_LockRegion_m218701EB985BF03E18FB5BE5A3CAC92FD6912609(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IStream_UnlockRegion_mA68ECA8B9614176C8296E06AC823167D6F486FC8(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_UnlockRegion_m6DC9A0A00AA8D3FF763590A1C110D300A2B248EA(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IStream_Stat_m35F69FE7F912084C869D6F125CED27F5C1A83935(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 ____0_pstatstg_empty;
		memset((&____0_pstatstg_empty), 0, sizeof(____0_pstatstg_empty));

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_Stat_mC6BF1261BD02B4CE3C492F65A936FD8F2C9119C4(__thisValue, (&____0_pstatstg_empty), ___1_grfStatFlag, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(____0_pstatstg_empty, *___0_pstatstg);

		return returnValue;
	}

	virtual int32_t STDCALL IStream_Clone_m343CD91A4EFF00B1B99EDB840D9EC8C7C12C7EA0(IStream_t5B8504123802C24362FFFFC3891FDE9A60398873** ___0_ppstm) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_ppstm_empty = NULL;

		int32_t returnValue;
		try
		{
			ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5* __thisValue = (ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5*)GetManagedObjectInline();
			returnValue = ComStream_CSCore_Win32_IStream_Clone_m487F5CE5023A3BBD88EF8095421B8DF8B2A80FA3(__thisValue, (&____0_ppstm_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			memset(&returnValue, 0, sizeof(returnValue));
			return static_cast<int32_t>(returnValue);
		}

		if (____0_ppstm_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____0_ppstm_empty))
			{
				*___0_ppstm = il2cpp_codegen_com_query_interface<IStream_t5B8504123802C24362FFFFC3891FDE9A60398873>(static_cast<Il2CppComObject*>(____0_ppstm_empty));
				(*___0_ppstm)->AddRef();
			}
			else
			{
				*___0_ppstm = il2cpp_codegen_com_get_or_create_ccw<IStream_t5B8504123802C24362FFFFC3891FDE9A60398873>(____0_ppstm_empty);
			}
		}
		else
		{
			*___0_ppstm = NULL;
		}

		return returnValue;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ComStream_t0396CD5F52AE0FC5DD2854CB6CC106FB8123F0F5_ComCallableWrapper(obj));
}

struct MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC_ComCallableWrapper>, IMMNotificationClient_tDA5E5A962F9A7E51F5AB4C427CFB5D5DCDF8E57D
{
	inline MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMMNotificationClient_tDA5E5A962F9A7E51F5AB4C427CFB5D5DCDF8E57D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMMNotificationClient_tDA5E5A962F9A7E51F5AB4C427CFB5D5DCDF8E57D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceStateChanged_m1832490958A210B743646A6BBB7611118DC2E0D2(Il2CppChar* ___0_deviceId, int32_t ___1_deviceState) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __thisValue = (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC*)GetManagedObjectInline();
			MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDeviceStateChanged_m5E4DD5C35797F619525092651D4B300545E57759(__thisValue, ____0_deviceId_unmarshaled, ___1_deviceState, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceAdded_m624B864E35247A54029BEB038F2D70B871F25DFB(Il2CppChar* ___0_deviceId) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __thisValue = (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC*)GetManagedObjectInline();
			MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDeviceAdded_m2B3316BF22E9B94C716EE8D3A5B1BCC4099CC51A(__thisValue, ____0_deviceId_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceRemoved_mB873E71A510DBFC79F3D6C81412C65F34B5ED2E5(Il2CppChar* ___0_deviceId) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __thisValue = (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC*)GetManagedObjectInline();
			MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDeviceRemoved_m566CF61C480E1620771829DB816B754DC845AB92(__thisValue, ____0_deviceId_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDefaultDeviceChanged_mE6AD74F1FE927ADD2D55ED85E63FF3D5E6A7BABA(int32_t ___0_dataFlow, int32_t ___1_role, Il2CppChar* ___2_deviceId) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____2_deviceId_unmarshaled = NULL;
		____2_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___2_deviceId);

		try
		{
			MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __thisValue = (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC*)GetManagedObjectInline();
			MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnDefaultDeviceChanged_mCF085BADE260F0517C446BD030B21E8DB1F5921D(__thisValue, ___0_dataFlow, ___1_role, ____2_deviceId_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnPropertyValueChanged_mCCBA9CC3372445409E782588773BBE9EA8F6FAF1(Il2CppChar* ___0_deviceId, PropertyKey_t58DED1084492B11296C3B45ABFADE53DAABB5B72 ___1_key) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC* __thisValue = (MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC*)GetManagedObjectInline();
			MMNotificationClient_CSCore_CoreAudioAPI_IMMNotificationClient_OnPropertyValueChanged_m6CF7DB9E6961ADA0057FBA61671987404B9C8142(__thisValue, ____0_deviceId_unmarshaled, ___1_key, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MMNotificationClient_tB78CBCC6375C6E8368AE900296DED1E81C45A0FC_ComCallableWrapper(obj));
}

struct MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E_ComCallableWrapper>, IMediaBuffer_t79A339AC5E87CEBD9E1936021A52DB69DAAB54A2
{
	inline MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMediaBuffer_t79A339AC5E87CEBD9E1936021A52DB69DAAB54A2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMediaBuffer_t79A339AC5E87CEBD9E1936021A52DB69DAAB54A2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual int32_t STDCALL IMediaBuffer_SetLength_m868DB56911DDFEBD75349F7F7FFAB5A3DE8B7F6C(int32_t ___0_length) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E* __thisValue = (MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E*)GetManagedObjectInline();
			returnValue = MediaBuffer_CSCore_DMO_IMediaBuffer_SetLength_mFAE0500C8AB0FBC99E35F69DD9E498625E516D37(__thisValue, ___0_length, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMediaBuffer_GetMaxLength_m73ACFF0055E219E977E6E9B1A35311E051DCF9D3(int32_t* ___0_length) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t ____0_length_empty = 0;

		int32_t returnValue;
		try
		{
			MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E* __thisValue = (MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E*)GetManagedObjectInline();
			returnValue = MediaBuffer_CSCore_DMO_IMediaBuffer_GetMaxLength_mDDBACD5BADF2702B3BE207D3B12698DCDC0D1EEA(__thisValue, (&____0_length_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		*___0_length = ____0_length_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMediaBuffer_GetBufferAndLength_m229B8F527070E825E26B9EF61B1E43C3E440D7D7(intptr_t ___0_ppBuffer, intptr_t ___1_validDataByteLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E* __thisValue = (MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E*)GetManagedObjectInline();
			returnValue = MediaBuffer_CSCore_DMO_IMediaBuffer_GetBufferAndLength_m0B381C004029FA5E90888453F5DDAE0C77257957(__thisValue, ___0_ppBuffer, ___1_validDataByteLength, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MediaBuffer_t8001337EF3AE5E5377CCD6033F127B018854252E_ComCallableWrapper(obj));
}

struct WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B_ComCallableWrapper>, IAudioSessionEvents_t324AF49B0A1BE20E64BBDB0BCD3EF34E03B56516, IMMNotificationClient_tDA5E5A962F9A7E51F5AB4C427CFB5D5DCDF8E57D
{
	inline WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAudioSessionEvents_t324AF49B0A1BE20E64BBDB0BCD3EF34E03B56516::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAudioSessionEvents_t324AF49B0A1BE20E64BBDB0BCD3EF34E03B56516*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMMNotificationClient_tDA5E5A962F9A7E51F5AB4C427CFB5D5DCDF8E57D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMMNotificationClient_tDA5E5A962F9A7E51F5AB4C427CFB5D5DCDF8E57D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnDisplayNameChanged_m1163A6B32272D95436E28574BE2F460C22573418(Il2CppChar* ___0_newDisplayName, Guid_t* ___1_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_newDisplayName_unmarshaled = NULL;
		____0_newDisplayName_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_newDisplayName);

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnDisplayNameChanged_m26D34FE491D9697F47F03462FD9EABEE94FA6D85(__thisValue, ____0_newDisplayName_unmarshaled, ___1_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnIconPathChanged_m585BF538A56C63C04B3E13F7B3F4D33A73832E97(Il2CppChar* ___0_newIconPath, Guid_t* ___1_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_newIconPath_unmarshaled = NULL;
		____0_newIconPath_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_newIconPath);

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnIconPathChanged_mF7DC3F29F0174D947A33B06C3835DBF12AB512F6(__thisValue, ____0_newIconPath_unmarshaled, ___1_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnSimpleVolumeChanged_m69223287CDE01E9BCC7A97DBF220AA0E149456A6(float ___0_newVolume, int32_t ___1_newMute, Guid_t* ___2_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnSimpleVolumeChanged_m8B8DAF21C15F06DDB774A6FA3EE279E5BEFBF294(__thisValue, ___0_newVolume, static_cast<bool>(___1_newMute), ___2_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnChannelVolumeChanged_m7B80940E7259A5E6B5477EF9BD280D660DAADECB(int32_t ___0_channelCount, float* ___1_newChannelVolumeArray, int32_t ___2_changedChannel, Guid_t* ___3_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____1_newChannelVolumeArray_unmarshaled = NULL;
		if (___1_newChannelVolumeArray != NULL)
		{
			____1_newChannelVolumeArray_unmarshaled = reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 1));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1); i++)
			{
				(____1_newChannelVolumeArray_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___1_newChannelVolumeArray)[i]);
			}
		}

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnChannelVolumeChanged_m987165387308575A4E8E1F12910F918983887B11(__thisValue, ___0_channelCount, ____1_newChannelVolumeArray_unmarshaled, ___2_changedChannel, ___3_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnGroupingParamChanged_m07FE53EA9C41FD5FBBE78DAD36CCB031C8BE3FC5(Guid_t* ___0_newGroupingParam, Guid_t* ___1_eventContext) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnGroupingParamChanged_m54705D27401A90821D6816396D6203B1E8736B70(__thisValue, ___0_newGroupingParam, ___1_eventContext, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnStateChanged_m6180EA438121C0FFF52E674899BC60C3AAD75EFB(int32_t ___0_newState) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnStateChanged_m37F2FE709AB1DE5554E3161598652CE1409DE427(__thisValue, ___0_newState, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAudioSessionEvents_OnSessionDisconnected_m73AAF071CEBA80674ACFC44A88CC04BE135872F0(int32_t ___0_disconnectReason) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnSessionDisconnected_m6D23B3359226EE8C49BE62828B52D23204EA9DEE(__thisValue, ___0_disconnectReason, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceStateChanged_m1832490958A210B743646A6BBB7611118DC2E0D2(Il2CppChar* ___0_deviceId, int32_t ___1_deviceState) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnDeviceStateChanged_m80E1A24C127EFDBB89EC560D8E1E274E070C3B21(__thisValue, ____0_deviceId_unmarshaled, ___1_deviceState, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceAdded_m624B864E35247A54029BEB038F2D70B871F25DFB(Il2CppChar* ___0_deviceId) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnDeviceAdded_m5CFE63F61721EBD44E6DD62C9671ADA333FACCE0(__thisValue, ____0_deviceId_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDeviceRemoved_mB873E71A510DBFC79F3D6C81412C65F34B5ED2E5(Il2CppChar* ___0_deviceId) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnDeviceRemoved_mF453A202A3D4D512CA778D484775D6F46859D3D2(__thisValue, ____0_deviceId_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnDefaultDeviceChanged_mE6AD74F1FE927ADD2D55ED85E63FF3D5E6A7BABA(int32_t ___0_dataFlow, int32_t ___1_role, Il2CppChar* ___2_deviceId) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____2_deviceId_unmarshaled = NULL;
		____2_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___2_deviceId);

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnDefaultDeviceChanged_mF0A8D621C83DC59722622B5EE2A0CC5DEFA9CF84(__thisValue, ___0_dataFlow, ___1_role, ____2_deviceId_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMMNotificationClient_OnPropertyValueChanged_mCCBA9CC3372445409E782588773BBE9EA8F6FAF1(Il2CppChar* ___0_deviceId, PropertyKey_t58DED1084492B11296C3B45ABFADE53DAABB5B72 ___1_key) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		String_t* ____0_deviceId_unmarshaled = NULL;
		____0_deviceId_unmarshaled = il2cpp_codegen_marshal_wstring_result(___0_deviceId);

		try
		{
			WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B* __thisValue = (WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B*)GetManagedObjectInline();
			WasapiEventHandler_OnPropertyValueChanged_mCD481C0A13EE45FE57E85D92F28A14BAC33A7B7B(__thisValue, ____0_deviceId_unmarshaled, ___1_key, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WasapiEventHandler_tA490DED0BC4E60029A8820E69927AD95B6621E1B_ComCallableWrapper(obj));
}
