﻿#include "pch-cpp.hpp"





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

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1;
struct MapboxAccounts_t51B1C63117E90717A95B37478EC876A265C06C06;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral55D06451987E3A98A35A3F47ACF98586F7C87E56;
IL2CPP_EXTERN_C String_t* _stringLiteral594BF2A228409CFAB7A958781A96A6D32318E7DA;
IL2CPP_EXTERN_C String_t* _stringLiteral62CD7ABA9727ED1A33162EB375565B3EE20B09A3;
IL2CPP_EXTERN_C String_t* _stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5;
IL2CPP_EXTERN_C String_t* _stringLiteral784D83E1899391C6AE99528B60BB27C284CECF0D;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E7065E0EA328DBBB8756D7236FECEE2458406A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* MapboxAccountImpl_BaseEncoding_m36264188BFF1DE96EE56717341EC9D3CE065D956_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tF6CEFFBC2C9A86A591615C99C6B0A99184C96EF7 
{
};
struct MapboxAccounts_t51B1C63117E90717A95B37478EC876A265C06C06  : public RuntimeObject
{
	MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* ___mbxAccountManager;
};
struct MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0  : public RuntimeObject
{
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
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
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
struct MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1  : public RuntimeObject
{
	String_t* ____currentMapsSkuToken;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____lastTokenGenerationTime;
	String_t* ____endUserId;
};
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	int32_t ___value__;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	int32_t ___Flags;
	int32_t ___Mode;
	uint32_t ___Uid;
	uint32_t ___Gid;
	int64_t ___Size;
	int64_t ___ATime;
	int64_t ___ATimeNsec;
	int64_t ___MTime;
	int64_t ___MTimeNsec;
	int64_t ___CTime;
	int64_t ___CTimeNsec;
	int64_t ___BirthTime;
	int64_t ___BirthTimeNsec;
	int64_t ___Dev;
	int64_t ___Ino;
	uint32_t ___UserFlags;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	bool ___U3CInitiallyDirectoryU3Ek__BackingField;
	bool ____isDirectory;
	bool ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus;
	String_t* ___FullPath;
	String_t* ___OriginalPath;
	String_t* ____name;
};
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
struct MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields
{
	int32_t ___RADIX;
	String_t* ___VERSION_1;
	String_t* ___SKU_ID_UNITY_MAUS;
	float ___TIME_LIMIT_IN_HOURS;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainUnityMapsSkuToken_m0EC44F7B0816089A6E2B570B6503C20E95314CC9 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, String_t* ___0_persistentPath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapboxAccountImpl__ctor_m2F7049CAB25E541A3E4C5FD7C34FB91582F94700 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainEncodedTimestamp_m4F6E023FA11F12B06633208397FFFE7358696B26 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainEndUserId_mB2087B7B08611AFD2D8466961C43CF57B3AD3B75 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1 (String_t* ___0_path, String_t* ___1_contents, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainUnityMapsSkuUserToken_m4903BF24C8008BFF5401BC8CD8AE404D9E5E4D60 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, String_t* ___0_userId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MapboxAccountImpl_GetNow_m075485685AB3F23A723CFEB37DA34F892F5CDFBD (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainEncodedTimestamp_m14A172DBA3B46BCF531DF6180AA39B46A2D57C5A (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, int64_t ___0_timestamp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_BaseEncoding_m36264188BFF1DE96EE56717341EC9D3CE065D956 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, int64_t ___0_number, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ToBase36_mB017D67A8039B39F51149F924273E6C3C5AD6BBF (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679 (StringBuilder_t* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccounts_ObtainMapsSkuUserToken_m524F7BCDD8A4A65584E2B546F448E4C5A22089FD (MapboxAccounts_t51B1C63117E90717A95B37478EC876A265C06C06* __this, String_t* ___0_persistentPath, const RuntimeMethod* method) 
{
	{
		MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* L_0 = __this->___mbxAccountManager;
		String_t* L_1 = ___0_persistentPath;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = MapboxAccountImpl_ObtainUnityMapsSkuToken_m0EC44F7B0816089A6E2B570B6503C20E95314CC9(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapboxAccounts__ctor_mE764E7B42D136E5D1F3A6F269103569D5CD83A2E (MapboxAccounts_t51B1C63117E90717A95B37478EC876A265C06C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* L_0 = (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1*)il2cpp_codegen_object_new(MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1_il2cpp_TypeInfo_var);
		MapboxAccountImpl__ctor_m2F7049CAB25E541A3E4C5FD7C34FB91582F94700(L_0, NULL);
		__this->___mbxAccountManager = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mbxAccountManager), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainUnityMapsSkuUserToken_m4903BF24C8008BFF5401BC8CD8AE404D9E5E4D60 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, String_t* ___0_userId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = __this->____currentMapsSkuToken;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = __this->____lastTokenGenerationTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_2, L_3, NULL);
		V_0 = L_4;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var);
		float L_6 = ((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___TIME_LIMIT_IN_HOURS;
		if ((!(((double)L_5) > ((double)((double)L_6)))))
		{
			goto IL_0054;
		}
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var);
		String_t* L_7 = ((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___VERSION_1;
		String_t* L_8 = ((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___SKU_ID_UNITY_MAUS;
		String_t* L_9;
		L_9 = MapboxAccountImpl_ObtainEncodedTimestamp_m4F6E023FA11F12B06633208397FFFE7358696B26(__this, NULL);
		String_t* L_10 = ___0_userId;
		String_t* L_11;
		L_11 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_7, L_8, L_9, L_10, NULL);
		__this->____currentMapsSkuToken = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentMapsSkuToken), (void*)L_11);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->____lastTokenGenerationTime = L_12;
	}

IL_0054:
	{
		String_t* L_13 = __this->____currentMapsSkuToken;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainUnityMapsSkuToken_m0EC44F7B0816089A6E2B570B6503C20E95314CC9 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, String_t* ___0_persistentPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55D06451987E3A98A35A3F47ACF98586F7C87E56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E7065E0EA328DBBB8756D7236FECEE2458406A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___0_persistentPath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, _stringLiteral55D06451987E3A98A35A3F47ACF98586F7C87E56, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_2, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = V_0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
		L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
	}

IL_001b:
	{
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_6, _stringLiteralA9E7065E0EA328DBBB8756D7236FECEE2458406A, NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_8, NULL);
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_10;
		L_10 = MapboxAccountImpl_ObtainEndUserId_mB2087B7B08611AFD2D8466961C43CF57B3AD3B75(__this, NULL);
		__this->____endUserId = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____endUserId), (void*)L_10);
		String_t* L_11 = V_1;
		String_t* L_12 = __this->____endUserId;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_11, L_12, NULL);
		goto IL_0055;
	}

IL_0049:
	{
		String_t* L_13 = V_1;
		String_t* L_14;
		L_14 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_13, NULL);
		__this->____endUserId = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____endUserId), (void*)L_14);
	}

IL_0055:
	{
		String_t* L_15 = __this->____endUserId;
		String_t* L_16;
		L_16 = MapboxAccountImpl_ObtainUnityMapsSkuUserToken_m4903BF24C8008BFF5401BC8CD8AE404D9E5E4D60(__this, L_15, NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainEncodedTimestamp_m4F6E023FA11F12B06633208397FFFE7358696B26 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0;
		L_0 = MapboxAccountImpl_GetNow_m075485685AB3F23A723CFEB37DA34F892F5CDFBD(__this, NULL);
		String_t* L_1;
		L_1 = MapboxAccountImpl_ObtainEncodedTimestamp_m14A172DBA3B46BCF531DF6180AA39B46A2D57C5A(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainEncodedTimestamp_m14A172DBA3B46BCF531DF6180AA39B46A2D57C5A (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, int64_t ___0_timestamp, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_timestamp;
		String_t* L_1;
		L_1 = MapboxAccountImpl_BaseEncoding_m36264188BFF1DE96EE56717341EC9D3CE065D956(__this, L_0, 8, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_BaseEncoding_m36264188BFF1DE96EE56717341EC9D3CE065D956 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, int64_t ___0_number, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594BF2A228409CFAB7A958781A96A6D32318E7DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int64_t L_0 = ___0_number;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_005b;
		}
	}
	{
		int64_t L_1 = ___0_number;
		String_t* L_2;
		L_2 = MapboxAccountImpl_ToBase36_mB017D67A8039B39F51149F924273E6C3C5AD6BBF(__this, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		int32_t L_5 = ___1_length;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9 = ___1_length;
		NullCheck(L_6);
		String_t* L_10;
		L_10 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)), NULL);
		return L_10;
	}

IL_0025:
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		int32_t L_13 = ___1_length;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_14 = ___1_length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(_stringLiteral594BF2A228409CFAB7A958781A96A6D32318E7DA, L_16, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		String_t* L_18 = V_0;
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_17, L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		return L_20;
	}

IL_0059:
	{
		String_t* L_21 = V_0;
		return L_21;
	}

IL_005b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62CD7ABA9727ED1A33162EB375565B3EE20B09A3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapboxAccountImpl_BaseEncoding_m36264188BFF1DE96EE56717341EC9D3CE065D956_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ToBase36_mB017D67A8039B39F51149F924273E6C3C5AD6BBF (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral784D83E1899391C6AE99528B60BB27C284CECF0D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)13), NULL);
		V_0 = L_0;
	}

IL_0008:
	{
		StringBuilder_t* L_1 = V_0;
		int64_t L_2 = ___0_value;
		NullCheck(_stringLiteral784D83E1899391C6AE99528B60BB27C284CECF0D);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral784D83E1899391C6AE99528B60BB27C284CECF0D, ((int32_t)(uint8_t)((int64_t)(L_2%((int64_t)((int32_t)36))))), NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_1, 0, L_3, NULL);
		int64_t L_5 = ___0_value;
		___0_value = ((int64_t)(L_5/((int64_t)((int32_t)36))));
		int64_t L_6 = ___0_value;
		if (L_6)
		{
			goto IL_0008;
		}
	}
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MapboxAccountImpl_ObtainEndUserId_mB2087B7B08611AFD2D8466961C43CF57B3AD3B75 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MapboxAccountImpl_GetNow_m075485685AB3F23A723CFEB37DA34F892F5CDFBD (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_1), ((int32_t)1970), 1, 1, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A((&V_0), L_1, NULL);
		V_1 = L_2;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_1), NULL);
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_3);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapboxAccountImpl__ctor_m2F7049CAB25E541A3E4C5FD7C34FB91582F94700 (MapboxAccountImpl_tCEDF95773F5131D170497DAFB68D6013CEE5F6F1* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapboxAccountsConstants__cctor_m3A7D98BE772189C6FA4553EB35AC9AD9BE0F0DB0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___RADIX = ((int32_t)36);
		((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___VERSION_1 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		Il2CppCodeGenWriteBarrier((void**)(&((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___VERSION_1), (void*)_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___SKU_ID_UNITY_MAUS = _stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5;
		Il2CppCodeGenWriteBarrier((void**)(&((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___SKU_ID_UNITY_MAUS), (void*)_stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5);
		((MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_StaticFields*)il2cpp_codegen_static_fields_for(MapboxAccountsConstants_t1B1565763F31C8B7B6A9020BF006B52006E75DE0_il2cpp_TypeInfo_var))->___TIME_LIMIT_IN_HOURS = (1.0f);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
