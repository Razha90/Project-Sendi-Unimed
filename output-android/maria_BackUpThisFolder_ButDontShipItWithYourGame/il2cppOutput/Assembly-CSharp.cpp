#include "pch-cpp.hpp"





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

struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B;
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
struct playMenu_t8C06E93DE09CE4DBC0F2C26A96EB924F214F2037;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484;
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____04E8D6FB108E98C7D88C0A2B1A8CDDC46BA5089BA4AC7125E2A5C56E1C8F099F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BBA74E8B505DFE25DE1DA1A7B2B00B7364E06796F3ABA4063CD7CE394B18963E_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFFCA0963BEDB95B9CB126904D587634228D3E4;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral38AF5723807C9393E33FFD5580272C3B6F865894;
IL2CPP_EXTERN_C String_t* _stringLiteral4728E3F54CD7412BEC88645A6534F540BCF0B77C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F96C71814E73292F536FF7D183927FD2296E4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral8A6DDDC9BE8D6DEFA93E082DEC83CF8E2BF7A0DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC7751E270BFD5E21832B5E245B68C5EFCF47500C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3506846A6BA24C74CDBDB95ACE230BB0630F2C8;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTransitionU3Ed__5_System_Collections_IEnumerator_Reset_m740F75137957376C14B01D9A05282D95CEE1D5A9_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E  : public RuntimeObject
{
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* ___U3CU3E4__this;
	String_t* ___sceneName;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			int32_t ___m_Data;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[4];
	};
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
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
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
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D154_tE69EBB72A6005F2242F732525A149829CF463040 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D154_tE69EBB72A6005F2242F732525A149829CF463040__padding[154];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D74_tEDCCC24B8F7A9A15B3EFE9A218CE90D39EA38FE5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D74_tEDCCC24B8F7A9A15B3EFE9A218CE90D39EA38FE5__padding[74];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor;
	float ___m_ColorMultiplier;
	float ___m_FadeDuration;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct SceneHandle_t4C3B517546B91EF78A6ED15DDC6C54AB5E03D8A3 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Value;
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	int32_t ___value__;
};
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	int32_t ___value__;
};
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	SceneHandle_t4C3B517546B91EF78A6ED15DDC6C54AB5E03D8A3 ___m_Handle;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator;
	float ___transitionTime;
};
struct SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ___mainMixer;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___folderUI;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuPanel;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___exitPanel;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxSource;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clickSound;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicSlider;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resetMusicBtn;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sfxSlider;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resetSfxBtn;
	float ___defaultVolume;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct playMenu_t8C06E93DE09CE4DBC0F2C26A96EB924F214F2037  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	bool ___m_EnableCalled;
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation;
	int32_t ___m_Transition;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState;
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers;
	bool ___m_Interactable;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic;
	bool ___m_GroupsAllowInteraction;
	int32_t ___m_CurrentIndex;
	bool ___U3CisPointerInsideU3Ek__BackingField;
	bool ___U3CisPointerDownU3Ek__BackingField;
	bool ___U3ChasSelectionU3Ek__BackingField;
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache;
};
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect;
	int32_t ___m_Direction;
	float ___m_MinValue;
	float ___m_MaxValue;
	bool ___m_WholeNumbers;
	float ___m_Value;
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset;
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker;
	bool ___m_DelayedUpdateVisuals;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D154_tE69EBB72A6005F2242F732525A149829CF463040 ___04E8D6FB108E98C7D88C0A2B1A8CDDC46BA5089BA4AC7125E2A5C56E1C8F099F;
	__StaticArrayInitTypeSizeU3D74_tEDCCC24B8F7A9A15B3EFE9A218CE90D39EA38FE5 ___BBA74E8B505DFE25DE1DA1A7B2B00B7364E06796F3ABA4063CD7CE394B18963E;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields
{
	String_t* ___previousSceneName;
};
struct SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields
{
	SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* ___Instance;
};
struct SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_StaticFields
{
	SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* ___Instance;
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



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_LoadScene_m713B5022D2ECD56CACBEDFFB0192360EE538ABD7 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, String_t* ___0_sceneName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransition_Transition_mE5D95A770F76CC70F163DF5EBB4E63586C0550B2 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, String_t* ___0_sceneName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__5__ctor_mB9F3191D0FD2B1AD55664376D97262F71B8E60F7 (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_UpdateResetButtonsUI_m9D2D785A615A1334B8817599AD07E3F07DED9B9D (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_SetMusicVolume_mD4632DD46A7D7E5048DCE3132BB77AF67836E32A (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_SetSFXVolume_mBBE53D0D01D02E499C4B9A17AB54D70A64B62D49 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_BukaTutupSettings_mB09E2F33C08E35F54ED5BBB29A514DA9232AAA68 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_PlayClickSound_mCBBB00BE9E5C9AE15AB32EF2162F03A5D9A86EDC (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
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
// Method Definition Index: 59550
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_mA7A45D9D0CBA8784B87F70B204C19A2AAC234D42 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:13>
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:17>
		return;
	}
}
// Method Definition Index: 59551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_ChangeScene_m7FC35B724E356E773A537D89836182B2B0E59CF9 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:23>
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___previousSceneName = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___previousSceneName), (void*)L_1);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:26>
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_2 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance;
		String_t* L_3 = ___0_sceneName;
		NullCheck(L_2);
		SceneTransition_LoadScene_m713B5022D2ECD56CACBEDFFB0192360EE538ABD7(L_2, L_3, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:27>
		return;
	}
}
// Method Definition Index: 59552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_GoBack_m7BA13C1E7059FFC4875AD4B1615854914B501276 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3506846A6BA24C74CDBDB95ACE230BB0630F2C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:32>
		String_t* L_0 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___previousSceneName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:34>
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_2 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance;
		String_t* L_3 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___previousSceneName;
		NullCheck(L_2);
		SceneTransition_LoadScene_m713B5022D2ECD56CACBEDFFB0192360EE538ABD7(L_2, L_3, NULL);
		return;
	}

IL_001c:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:38>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD3506846A6BA24C74CDBDB95ACE230BB0630F2C8, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/LevelManager.cs:42>
		return;
	}
}
// Method Definition Index: 59553
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 59554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_Awake_m1D6D462D046C97ED961893D165083D28C22541B2 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:14>
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_0 = ((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:16>
		((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57_il2cpp_TypeInfo_var))->___Instance), (void*)__this);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:17>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:21>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:23>
		return;
	}
}
// Method Definition Index: 59555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition_LoadScene_m713B5022D2ECD56CACBEDFFB0192360EE538ABD7 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:27>
		String_t* L_0 = ___0_sceneName;
		RuntimeObject* L_1;
		L_1 = SceneTransition_Transition_mE5D95A770F76CC70F163DF5EBB4E63586C0550B2(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:28>
		return;
	}
}
// Method Definition Index: 59556
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneTransition_Transition_mE5D95A770F76CC70F163DF5EBB4E63586C0550B2 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* L_0 = (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484*)il2cpp_codegen_object_new(U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484_il2cpp_TypeInfo_var);
		U3CTransitionU3Ed__5__ctor_mB9F3191D0FD2B1AD55664376D97262F71B8E60F7(L_0, 0, NULL);
		U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* L_2 = L_1;
		String_t* L_3 = ___0_sceneName;
		NullCheck(L_2);
		L_2->___sceneName = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sceneName), (void*)L_3);
		return L_2;
	}
}
// Method Definition Index: 59557
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransition__ctor_m6FEBED7A92C4C5A3ED76C9251DC10A680690B5E5 (SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:9>
		__this->___transitionTime = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 59558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__5__ctor_mB9F3191D0FD2B1AD55664376D97262F71B8E60F7 (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 59559
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__5_System_IDisposable_Dispose_m1D2AD2AC42DFC4A25CD9B622862F840452A26EE8 (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 59560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTransitionU3Ed__5_MoveNext_mCB582A2FBF832935D5F3341F0EB2260C52BBE601 (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4728E3F54CD7412BEC88645A6534F540BCF0B77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A6DDDC9BE8D6DEFA93E082DEC83CF8E2BF7A0DA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_1 = __this->___U3CU3E4__this;
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:33>
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___animator;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteral8A6DDDC9BE8D6DEFA93E082DEC83CF8E2BF7A0DA, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:36>
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___transitionTime;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_8);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:39>
		String_t* L_9 = __this->___sceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_9, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:43>
		SceneTransition_t51C8719E1B4349D317E1E63F456F22CDA2F3AD57* L_10 = V_1;
		NullCheck(L_10);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = L_10->___animator;
		NullCheck(L_11);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteral4728E3F54CD7412BEC88645A6534F540BCF0B77C, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SceneTransition.cs:44>
		return (bool)0;
	}
}
// Method Definition Index: 59561
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTransitionU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m23B7BB5CA3E1D49033BDBE28F5B9F4D33DC8D26A (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 59562
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__5_System_Collections_IEnumerator_Reset_m740F75137957376C14B01D9A05282D95CEE1D5A9 (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTransitionU3Ed__5_System_Collections_IEnumerator_Reset_m740F75137957376C14B01D9A05282D95CEE1D5A9_RuntimeMethod_var)));
	}
}
// Method Definition Index: 59563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTransitionU3Ed__5_System_Collections_IEnumerator_get_Current_m485DFA51C931746F7AD94DEC44DE60EF6B623B17 (U3CTransitionU3Ed__5_tAB0B68C18DB7EC72DD57CD43D379A02B4B5ED484* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
// Method Definition Index: 59564
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_Awake_m8BE1B164B477BC01E4C42EF991020D8DB5086C5C (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:36>
		SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* L_0 = ((SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var))->___Instance;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:38>
		((SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var))->___Instance = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var))->___Instance), (void*)__this);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:39>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:43>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:45>
		return;
	}
}
// Method Definition Index: 59565
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_Start_mCB2940703E340E9B826D2A92F76DAB09F8B7B487 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:50>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___folderUI;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:50>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___folderUI;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:53>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___exitPanel;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:53>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___exitPanel;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0034:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:55>
		SettingsManager_UpdateResetButtonsUI_m9D2D785A615A1334B8817599AD07E3F07DED9B9D(__this, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:56>
		return;
	}
}
// Method Definition Index: 59566
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_BukaTutupSettings_mB09E2F33C08E35F54ED5BBB29A514DA9232AAA68 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:60>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___folderUI;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:62>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___folderUI;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:63>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___folderUI;
		bool L_5 = V_0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:66>
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:68>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___menuPanel;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:69>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___exitPanel;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0044:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:72>
		return;
	}
}
// Method Definition Index: 59567
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_BukaKonfirmasiExit_m5977B826B8C0822A9784F371AC5D2957BAB35D03 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:76>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menuPanel;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:77>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___exitPanel;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:78>
		return;
	}
}
// Method Definition Index: 59568
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_BatalkanExit_mC09F89914BD57221743AB437C1C2D5F06E783580 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:84>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___folderUI;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:85>
		return;
	}
}
// Method Definition Index: 59569
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_KeluarGame_m85B4DB7FA016A683218125C2460856E93C445F0B (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFFCA0963BEDB95B9CB126904D587634228D3E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:90>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0FFFCA0963BEDB95B9CB126904D587634228D3E4, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:91>
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:92>
		return;
	}
}
// Method Definition Index: 59570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_SetMusicVolume_mD4632DD46A7D7E5048DCE3132BB77AF67836E32A (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F96C71814E73292F536FF7D183927FD2296E4EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:98>
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->___mainMixer;
		float L_1 = ___0_value;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, (9.99999975E-05f), (1.0f), NULL);
		float L_3;
		L_3 = log10f(L_2);
		NullCheck(L_0);
		bool L_4;
		L_4 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_0, _stringLiteral5F96C71814E73292F536FF7D183927FD2296E4EC, ((float)il2cpp_codegen_multiply(L_3, (20.0f))), NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:99>
		SettingsManager_UpdateResetButtonsUI_m9D2D785A615A1334B8817599AD07E3F07DED9B9D(__this, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:100>
		return;
	}
}
// Method Definition Index: 59571
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_SetSFXVolume_mBBE53D0D01D02E499C4B9A17AB54D70A64B62D49 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7751E270BFD5E21832B5E245B68C5EFCF47500C);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:106>
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->___mainMixer;
		float L_1 = ___0_value;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, (9.99999975E-05f), (1.0f), NULL);
		float L_3;
		L_3 = log10f(L_2);
		NullCheck(L_0);
		bool L_4;
		L_4 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_0, _stringLiteralC7751E270BFD5E21832B5E245B68C5EFCF47500C, ((float)il2cpp_codegen_multiply(L_3, (20.0f))), NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:107>
		SettingsManager_UpdateResetButtonsUI_m9D2D785A615A1334B8817599AD07E3F07DED9B9D(__this, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:108>
		return;
	}
}
// Method Definition Index: 59572
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_PlayClickSound_mCBBB00BE9E5C9AE15AB32EF2162F03A5D9A86EDC (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:112>
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxSource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___clickSound;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:114>
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sfxSource;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___clickSound;
		NullCheck(L_4);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
	}

IL_002d:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:116>
		return;
	}
}
// Method Definition Index: 59573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ResetMusic_m38D7244E1BC63BF9F81D84F5B16A85D3678996F5 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:120>
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___musicSlider;
		float L_1 = __this->___defaultVolume;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47, L_0, L_1);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:121>
		float L_2 = __this->___defaultVolume;
		SettingsManager_SetMusicVolume_mD4632DD46A7D7E5048DCE3132BB77AF67836E32A(__this, L_2, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:122>
		return;
	}
}
// Method Definition Index: 59574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_ResetSFX_m5BB62E8E3D237300EB6CCBC07914DAEA85A058AB (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:126>
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___sfxSlider;
		float L_1 = __this->___defaultVolume;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47, L_0, L_1);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:127>
		float L_2 = __this->___defaultVolume;
		SettingsManager_SetSFXVolume_mBBE53D0D01D02E499C4B9A17AB54D70A64B62D49(__this, L_2, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:128>
		return;
	}
}
// Method Definition Index: 59575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager_UpdateResetButtonsUI_m9D2D785A615A1334B8817599AD07E3F07DED9B9D (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:132>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___resetMusicBtn;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:135>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___resetMusicBtn;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___musicSlider;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46, L_3);
		float L_5 = __this->___defaultVolume;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)((((float)L_6) > ((float)(0.00999999978f)))? 1 : 0), NULL);
	}

IL_0037:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:138>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___resetSfxBtn;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:141>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___resetSfxBtn;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___sfxSlider;
		NullCheck(L_10);
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(46, L_10);
		float L_12 = __this->___defaultVolume;
		float L_13;
		L_13 = fabsf(((float)il2cpp_codegen_subtract(L_11, L_12)));
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)((((float)L_13) > ((float)(0.00999999978f)))? 1 : 0), NULL);
	}

IL_006e:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:143>
		return;
	}
}
// Method Definition Index: 59576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager__ctor_m3F050F09698FD9788C28F8F171CA891F45BC4D10 (SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/SettingsManager.cs:31>
		__this->___defaultVolume = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 59577
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playMenu_KlikTombolPause_mE3D61653F50EEA8796E7B25DCC718B1968269807 (playMenu_t8C06E93DE09CE4DBC0F2C26A96EB924F214F2037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:9>
		SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* L_0 = ((SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		SettingsManager_BukaTutupSettings_mB09E2F33C08E35F54ED5BBB29A514DA9232AAA68(L_0, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:10>
		return;
	}
}
// Method Definition Index: 59578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playMenu_TombolPlaySound_m342B7059AF79406BB387384720CDA81D127E9B74 (playMenu_t8C06E93DE09CE4DBC0F2C26A96EB924F214F2037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:14>
		SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B* L_0 = ((SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsManager_t4EE243AF21C0F2368EA2029BEAE2539757C3354B_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		SettingsManager_PlayClickSound_mCBBB00BE9E5C9AE15AB32EF2162F03A5D9A86EDC(L_0, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:15>
		return;
	}
}
// Method Definition Index: 59579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playMenu_JalankanAnimasi_m1E72CBEF49C46824DFBB429C6C1EF776AB7C4A09 (playMenu_t8C06E93DE09CE4DBC0F2C26A96EB924F214F2037* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_targetAnimator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38AF5723807C9393E33FFD5580272C3B6F865894);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:19>
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_targetAnimator;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:21>
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = ___0_targetAnimator;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, NULL);
		return;
	}

IL_0015:
	{
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:25>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral38AF5723807C9393E33FFD5580272C3B6F865894, NULL);
		//<source_info:D:/unity/game/Project-Sendi-Unimed/Assets/script/playMenu.cs:27>
		return;
	}
}
// Method Definition Index: 59580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playMenu__ctor_mB29D6AE3CAD37BEF32CBF41000F7250F5F0A83A8 (playMenu_t8C06E93DE09CE4DBC0F2C26A96EB924F214F2037* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 59581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____04E8D6FB108E98C7D88C0A2B1A8CDDC46BA5089BA4AC7125E2A5C56E1C8F099F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BBA74E8B505DFE25DE1DA1A7B2B00B7364E06796F3ABA4063CD7CE394B18963E_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)154));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____04E8D6FB108E98C7D88C0A2B1A8CDDC46BA5089BA4AC7125E2A5C56E1C8F099F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BBA74E8B505DFE25DE1DA1A7B2B00B7364E06796F3ABA4063CD7CE394B18963E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 4;
		(&V_0)->___TotalTypes = 4;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 59582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
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
// Method Definition Index: 38566
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = ___0_value;
		float L_3 = ___2_max;
		if ((((float)L_2) > ((float)L_3)))
		{
			goto IL_000a;
		}
	}
	{
		float L_4 = ___0_value;
		return L_4;
	}

IL_000a:
	{
		float L_5 = ___2_max;
		return L_5;
	}

IL_000c:
	{
		float L_6 = ___1_min;
		return L_6;
	}
}
