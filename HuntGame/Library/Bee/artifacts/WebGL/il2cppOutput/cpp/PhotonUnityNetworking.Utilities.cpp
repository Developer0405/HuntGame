﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player>
struct Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.PhotonView>
struct Dictionary_2_t7A6B5CC43325DC544D8414777810CACBD57899FA;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>
struct Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t681C2D0152C2184DCA6AD773603D0FE709D338C9;
// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch>
struct Dictionary_2_t47C3B85708CBFB02F30AF23A5D4092EC2DAD8636;
// System.Collections.Generic.Dictionary`2<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>
struct Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<Photon.Realtime.Player,System.Int32>
struct Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<Photon.Realtime.Player>
struct HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Photon.Realtime.Player>
struct IEnumerable_1_t0A607D01EC0ECC8C88CE4A47A58F5EE4194C04D6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t6289339635DAA3C7AAAE570CFA08CE8F252F1B08;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<Photon.Realtime.Player>
struct IEqualityComparer_1_tBAD0ABE371CA5600F85568B99766856C71D5AE46;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Toggle>
struct IEqualityComparer_1_t8BFCF785A399AABCE14A47A4CA2809C32C93F6B4;
// System.Collections.Generic.IEqualityComparer`1<Photon.Pun.UtilityScripts.PunTeams/Team>
struct IEqualityComparer_1_tDDE8CFC7B1D8E07E5F110654810A7B2E9A8ED23C;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Linq.IOrderedEnumerable`1<Photon.Realtime.Player>
struct IOrderedEnumerable_1_tEAD5E3013151825F4E71F9B73342D1A62396E869;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GameObject>
struct KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Realtime.Player>
struct KeyCollection_t2E7011E95C7C03E97ABB05A3AB71DC306EDCD1C1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>
struct KeyCollection_tF732305B04BD867D44F7A1D87A5300168C5FA2FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>
struct KeyCollection_t029F4834B343566742B4DA57ACE6F8DABFA23AB2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode>
struct List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Photon.Realtime.Player>
struct List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>
struct ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Realtime.Player>
struct ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>
struct ValueCollection_t6644F422456DE20C3EE07D3338100C7A34731EA6;
// System.Collections.Generic.Dictionary`2/ValueCollection<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>
struct ValueCollection_t9073DB7E11B191F9505FFB2E60B6BF5546E4514F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GameObject>[]
struct EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Realtime.Player>[]
struct EntryU5BU5D_tC0E0EE5A22C6108EDF486157331DB4F174EEB842;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>[]
struct EntryU5BU5D_tC0653F56C5BC24B0CF07B01BA67189C1171FE35A;
// System.Collections.Generic.Dictionary`2/Entry<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>[]
struct EntryU5BU5D_tA541BA2D1A3F6DA7F9A1EBC20C40DF9414331419;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<Photon.Realtime.Player>[]
struct SlotU5BU5D_tBCE9A018FF57FF27F79E76AD6982DC281A8625FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Photon.Pun.UtilityScripts.CellTreeNode[]
struct CellTreeNodeU5BU5D_tE35000C4A6604A81DD7E0297F96C83BF2D04C5FF;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Photon.Pun.UtilityScripts.TabViewManager/Tab[]
struct TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Photon.Pun.UtilityScripts.ButtonInsideScrollList
struct ButtonInsideScrollList_t6BD912E3EC9F27C7AD3927E283BAE6B79A95537F;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Photon.Pun.UtilityScripts.CellTree
struct CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B;
// Photon.Pun.UtilityScripts.CellTreeNode
struct CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Pun.UtilityScripts.ConnectAndJoinRandom
struct ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Photon.Pun.UtilityScripts.CountdownTimer
struct CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC;
// Photon.Pun.UtilityScripts.CullArea
struct CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9;
// Photon.Pun.UtilityScripts.CullingHandler
struct CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t760BB0B79ED8AB17CEF60D2E00D0CC251F1616B6;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_tEF02CF41BCAEF714D475D21B49FF8C4862B0E3F6;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Photon.Pun.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t9E30C9C0D49107F359A6001AF67FF4A0AB8259BC;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition
struct GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// Photon.Pun.IPunPrefabPool
struct IPunPrefabPool_t0C53499E6C013A2913E220B8D6627AEE50272B36;
// Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks
struct IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD;
// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783;
// Photon.Pun.UtilityScripts.MoveByKeys
struct MoveByKeys_t231D556E8EF98714701971423107BFF3CCFA8A5E;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Photon.Pun.UtilityScripts.OnClickDestroy
struct OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F;
// Photon.Pun.UtilityScripts.OnClickInstantiate
struct OnClickInstantiate_t56B27413C08DF9889A66485DA3411272052D3DE4;
// Photon.Pun.UtilityScripts.OnClickRpc
struct OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987;
// Photon.Pun.UtilityScripts.OnEscapeQuit
struct OnEscapeQuit_t03128DF191CDB88E9DA771CE3EABFB4D249C38A7;
// Photon.Pun.UtilityScripts.OnJoinedInstantiate
struct OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03;
// Photon.Pun.UtilityScripts.OnPointerOverTooltip
struct OnPointerOverTooltip_t6CDDC42E25CB38D5A556F999BD366BB3DDB82955;
// Photon.Pun.UtilityScripts.OnStartDelete
struct OnStartDelete_t6C0FC525A79E2EBFA118989E77632B0E4C21CD5E;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Photon.Pun.PhotonHandler
struct PhotonHandler_tD4F215694F2D38FDD6CCB10EED94376994C10BC7;
// Photon.Pun.UtilityScripts.PhotonLagSimulationGui
struct PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// Photon.Pun.UtilityScripts.PhotonStatsGui
struct PhotonStatsGui_t91ECC9FD293234632FCE15D15EC6477088F7BC5A;
// Photon.Pun.PhotonStream
struct PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E;
// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// Photon.Pun.UtilityScripts.PlayerNumbering
struct PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC;
// Photon.Pun.UtilityScripts.PointedAtGameObjectInfo
struct PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Photon.Pun.UtilityScripts.PunPlayerScores
struct PunPlayerScores_t37F6FB5D0EDA234746D7A4E6988485235239BFE1;
// Photon.Pun.UtilityScripts.PunTeams
struct PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000;
// Photon.Pun.UtilityScripts.PunTurnManager
struct PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152;
// Photon.Pun.UtilityScripts.SmoothSyncMovement
struct SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// Photon.Pun.UtilityScripts.StatesGui
struct StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// Photon.Pun.UtilityScripts.TabViewManager
struct TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Photon.Pun.UtilityScripts.TextButtonTransition
struct TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// Photon.Pun.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired
struct CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4
struct U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3;
// Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8
struct U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C;
// Photon.Pun.UtilityScripts.PlayerNumbering/<>c
struct U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7;
// Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged
struct PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5;
// Photon.Pun.UtilityScripts.TabViewManager/Tab
struct Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208;
// Photon.Pun.UtilityScripts.TabViewManager/TabChangeEvent
struct TabChangeEvent_t7D0974735674B29B166A1C0AD095737C7416A94E;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerConnection_t91F7686050F68425C6517C7AC3225669636DD0CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____0CA47679A8B48490B35902039B874DC32C465A4B547059C0D941091B7B72CB21_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____3BB048C6BCFB13ADB4230B15FDE86F7FCFA341C302CC263DFC9250D7877BABFB_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____7E8D5B72D290BA59F0EDBE3D6F961EEA1A534C250A6EF2CAC5B85C0C2111735F_2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral090A10B2D38316193C6506131523C99A9EFAC26F;
IL2CPP_EXTERN_C String_t* _stringLiteral0A8B1306FEC63C6C6AB07D536AFDE562EA7E0990;
IL2CPP_EXTERN_C String_t* _stringLiteral0F16092515725572610A7D24576D07709AE3D1A8;
IL2CPP_EXTERN_C String_t* _stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral1234B323C09AFE9182581CADB7DA3B1DD7999589;
IL2CPP_EXTERN_C String_t* _stringLiteral14D8BC753569472A278384B927E2E5F98D39D704;
IL2CPP_EXTERN_C String_t* _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B;
IL2CPP_EXTERN_C String_t* _stringLiteral16ED7C1B7B7F10A9FD66FB5319E38F7900BC5244;
IL2CPP_EXTERN_C String_t* _stringLiteral19FA00613CDA0F9319738E88B0F5F2DAB6398235;
IL2CPP_EXTERN_C String_t* _stringLiteral1ABBA4A319AE2113068B5F1585697EEEBD4D6E68;
IL2CPP_EXTERN_C String_t* _stringLiteral1B73AB1C345FD898D675FF9AA1083B03CB79DDE5;
IL2CPP_EXTERN_C String_t* _stringLiteral2041DD87E40FF4B23D9550910DB36F409AD904D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral2E967EC47C0181B3A2E25F28AF8F0061B4E2A296;
IL2CPP_EXTERN_C String_t* _stringLiteral2FAF400707E3E915D133DFA24F8A69E377D4F32B;
IL2CPP_EXTERN_C String_t* _stringLiteral332A191E55175DAE3C063B38488410BDA3B2A444;
IL2CPP_EXTERN_C String_t* _stringLiteral35E936E5B267BCFCF5DE0347CF1B766A136F7345;
IL2CPP_EXTERN_C String_t* _stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403;
IL2CPP_EXTERN_C String_t* _stringLiteral3F517814D5AA500B2744DE501E2A2A59BF400711;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7301063435300B9C389D534C13A1F83D523072;
IL2CPP_EXTERN_C String_t* _stringLiteral3F9A7AE4A82B8263197103F0AE79A192BCD2E6A2;
IL2CPP_EXTERN_C String_t* _stringLiteral41A125B55DB2C48BDEDA549263BD4DDF6F2DEF88;
IL2CPP_EXTERN_C String_t* _stringLiteral4240D8B50E7D7141437263EDA1B72E145DDBD84F;
IL2CPP_EXTERN_C String_t* _stringLiteral444F1D295ACEC4488382E48F422A3B344C5A19CC;
IL2CPP_EXTERN_C String_t* _stringLiteral49390441935AF8F5D47C8687079636D31A23316C;
IL2CPP_EXTERN_C String_t* _stringLiteral4C550D612379916935E4282D434E4EA23536FCB6;
IL2CPP_EXTERN_C String_t* _stringLiteral4DB64990F3C0419D770F2F59CBA7371DAAB819BE;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1C2AA5C5C5960342754BDCDC1BC571B5E153B4;
IL2CPP_EXTERN_C String_t* _stringLiteral4E99550CAD59B3CD2A9A2FE1DDC23F99804CA0E6;
IL2CPP_EXTERN_C String_t* _stringLiteral4F695E381D45532E8A86EF8161488D33016BB1C0;
IL2CPP_EXTERN_C String_t* _stringLiteral58E7FBE2C87F9E67A5D0A23FDF4735E08D6037B9;
IL2CPP_EXTERN_C String_t* _stringLiteral5E80D938B3850F70C375238E85B3E73313649830;
IL2CPP_EXTERN_C String_t* _stringLiteral6335F9FF02EA74920DCD2E6CB5FB1A611B8408AE;
IL2CPP_EXTERN_C String_t* _stringLiteral6410B4F90F62C6122BEEEF64D359EFDCC8C2E07F;
IL2CPP_EXTERN_C String_t* _stringLiteral6C610EA1DFC306AC03854BBEFDFBBA8019791B8E;
IL2CPP_EXTERN_C String_t* _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5;
IL2CPP_EXTERN_C String_t* _stringLiteral753CB4DF5FEC419C0FC66E60ED5CF43419229669;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral78E94977D519D1AF1DEA6A6B4577C097FDD3FD63;
IL2CPP_EXTERN_C String_t* _stringLiteral793A42BFC478A0C4DC544E915AF20BE5648D6F65;
IL2CPP_EXTERN_C String_t* _stringLiteral7C8AD1A913E81B0E242D846F3D93E4E059825744;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB84AEE5DD4A62DE003FFE0682EC39B7C9AAC69;
IL2CPP_EXTERN_C String_t* _stringLiteral7ED41D1844D45D2131D7BC5525D29BBC10F978FF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A;
IL2CPP_EXTERN_C String_t* _stringLiteral878F197FC44F2E3B6144F5C31D2BAA30884F3D8A;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB1D0E143C56545D2C2CFAFCCCB15B5E5067AD1;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1F6F8C99A944BE00F5FEA239292EBCE0705370;
IL2CPP_EXTERN_C String_t* _stringLiteral90C99A81FBECE3E0B0C8445142229E1276C14CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral937E439316196F8095DA30BC295FA6E33F878139;
IL2CPP_EXTERN_C String_t* _stringLiteral980AD35667301A642F24A62DA1C841C6E54DC8E6;
IL2CPP_EXTERN_C String_t* _stringLiteral988D9E32F69C759B2C16830E57D31BA1E330F42C;
IL2CPP_EXTERN_C String_t* _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8;
IL2CPP_EXTERN_C String_t* _stringLiteral9F37F823C6591E7D635F9B7B9BEF615C5983F9FB;
IL2CPP_EXTERN_C String_t* _stringLiteralA25BA35395B7D2753B89242F5EB5E1C452C1C355;
IL2CPP_EXTERN_C String_t* _stringLiteralA4E23CD3E51379720889C9F4BDA37BE15B3581E0;
IL2CPP_EXTERN_C String_t* _stringLiteralA65FFD9D9EC7098F16777565B3FCE05AEBFCDC98;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralA9EC211DA61853C88BF69DD05F964B486824A55F;
IL2CPP_EXTERN_C String_t* _stringLiteralAC1102D3560EFA92FA3E59AA80FEC1BF47D94A72;
IL2CPP_EXTERN_C String_t* _stringLiteralB05AF52D76595518A075ECA21B966CD1EF5ABA5A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9;
IL2CPP_EXTERN_C String_t* _stringLiteralB3B1BD9B2FD1433EA56E9AD0E11411666BCDAEBF;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB84908DAA1F00E1E4570DCF191DB81E0B663117D;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralBA04E9B69AE9502D4E2755F60981654299EA47B1;
IL2CPP_EXTERN_C String_t* _stringLiteralBB654DC6E6829721C44D5C02AF79359CB2E53232;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136;
IL2CPP_EXTERN_C String_t* _stringLiteralC09F0D4A7B660E1924D2300CB0765C6FFCB6FDE4;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC7997792A428847741849C2398036C47A179A26F;
IL2CPP_EXTERN_C String_t* _stringLiteralC885FDE1E0349C52C54BE77297CA3419A972E72C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCCA925A29E3C225E34A46170E11294448B3E8A46;
IL2CPP_EXTERN_C String_t* _stringLiteralCDBCE744100561DE01D086D0C377C1E8191AE092;
IL2CPP_EXTERN_C String_t* _stringLiteralD21FF128FA5A5091E818A1AD3B0A21739BAB129A;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F7B3B7E3BAF17B507D3B9FB97AA9E49B7AB50;
IL2CPP_EXTERN_C String_t* _stringLiteralD958EA97C55DAFB285DBA2D53A8E7584F9DBC99D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAB6C2DF883B13A404F0682D842DB4D3D7D20944;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA4BCEF3D14BF7670BC897FF6386C4020A6AAFA;
IL2CPP_EXTERN_C String_t* _stringLiteralE46E5EAC80D178B0AD56E0F31623015D1A5E87EA;
IL2CPP_EXTERN_C String_t* _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF4A3188C2D7419F865F97F94695CDD2018663B7;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralEFBA2EAB06550438423DD89A611E50E2CA315AF9;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF480C8583CFD3A1E38212FC22D0F3D628B8BE269;
IL2CPP_EXTERN_C String_t* _stringLiteralF6185BC6CFB060F14B80A3413D7055D2D4806A43;
IL2CPP_EXTERN_C String_t* _stringLiteralF65D9DD240F808922B86DFC7F8C7014C0734E12F;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D3BE80C008EAAD0B440A7557B7AC1DF4BD1431;
IL2CPP_EXTERN_C String_t* _stringLiteralF972437F7FB14590DA063E54E84D90E9E250A129;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_mD5D105BD6034A3131A91D7B6534D7E74834D72AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m957E284F55A48A654918D23810F057CB245E572F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0FD75F97F3C736BA3CDB6B5CDDC1FA0668CEEC51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m98552B39ADBFD18F02180BF9AC375CBD662DEAC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m33EC5729BB0F7AC6474344A1D3C2C0EE34EB3649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0F3E747DAA97215CEE01830562357426F2C7F78E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEBD98D18B111F86CE928C0F98917F52625C1F6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m576AD7EF23D769C9CB3ED482D9849566C02D68E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m53A24C44AB6CB8A0DA44F185D48FC82FABB17A45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7FF5AEA0A7081F270B8FFC65782FCF5C6FCD4A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFEBC26DDD5CD21774175C1716AF9658AB2729943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6F19B57F9182A5DB7B6B4F3D8C71F244AD141C6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mFFA4703D523E06722C9BF56C5F8DDCB408225449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_mDF22DBDA2ECE30DAE8BB8D479004671DCA684743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m0C3261659D8C4A9C0A3A355F9BCA67E760CFACD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m9D5B6FC9E0A91972776D03EB24E8E7FC9ECC76A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3C3CC8A5379A1C25C13BF70636E7BC872140188B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m459F94CAEDE56073FF26D86674008D78837090B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF66FD30F5B9BB125976D7E864FCBE76B6AF5FA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m62333D089E91797E1B961EF27451EBF82230D916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m91A7CF9EDC5B71A3E4A8080776934EBC464EE424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0A92CDE1CED53E8B81A082BFE93793E2EE580CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4968F61EF536BA01579BA60B189E57B506C68176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9_m41F99784FBAB2080541F5F361A2AA1A7237CE4BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonLagSimulationGui_NetSimHasNoPeerWindow_m25D2DDC5F85F556AAECC130E69A328DA72441249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonLagSimulationGui_NetSimWindow_m05DBBA292D86EA173FE184DCABAFA04B490603FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonStatsGui_TrafficStatsWindow_m5844D126092FE2E9FE442BA7E1A7B6D6CF16475C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClickFlashU3Ed__8_System_Collections_IEnumerator_Reset_m2DD211DD6E72E4B6CC1455ED5E51F1B393BDBC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyRpcU3Ed__4_System_Collections_IEnumerator_Reset_mA2BD8852974AC66BF6595FDCF4DA6D747DD7822E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRefreshDataU3Eb__14_0_mE1375696F257E448BFF4E07DAEA89DFDEAD781C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRefreshDataU3Eb__14_1_mDB575FD2EB8387746D62FAC716F141E7D3B33453_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRefreshDataU3Eb__14_2_m830B7C3C77B27FA97B737B423830DAFDF5FF6294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m5805C8AA8164B7DAC28B6FF76B3A758AC1D20648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4E3FADE9BEFE98CFCB7BF64411563B78498C31FF 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC0E0EE5A22C6108EDF486157331DB4F174EEB842* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2E7011E95C7C03E97ABB05A3AB71DC306EDCD1C1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>
struct Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC0653F56C5BC24B0CF07B01BA67189C1171FE35A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF732305B04BD867D44F7A1D87A5300168C5FA2FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6644F422456DE20C3EE07D3338100C7A34731EA6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>
struct Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA541BA2D1A3F6DA7F9A1EBC20C40DF9414331419* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t029F4834B343566742B4DA57ACE6F8DABFA23AB2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9073DB7E11B191F9505FFB2E60B6BF5546E4514F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<Photon.Realtime.Player>
struct HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tBCE9A018FF57FF27F79E76AD6982DC281A8625FA* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode>
struct List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CellTreeNodeU5BU5D_tE35000C4A6604A81DD7E0297F96C83BF2D04C5FF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CellTreeNodeU5BU5D_tE35000C4A6604A81DD7E0297F96C83BF2D04C5FF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.Player>
struct List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Realtime.Player>
struct ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Photon.Pun.UtilityScripts.CellTree
struct CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B  : public RuntimeObject
{
	// Photon.Pun.UtilityScripts.CellTreeNode Photon.Pun.UtilityScripts.CellTree::<RootNode>k__BackingField
	CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___U3CRootNodeU3Ek__BackingField_0;
};

// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681  : public RuntimeObject
{
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.EventData::Parameters
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___Parameters_1;
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;
	// System.Object ExitGames.Client.Photon.EventData::customData
	RuntimeObject* ___customData_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49  : public RuntimeObject
{
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled_0;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag_1;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter_2;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage_3;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag_4;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter_5;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage_6;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_7;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___netSimThread_8;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___NetSimManualResetEvent_9;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField_11;
};

// Photon.Pun.PhotonStream
struct PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonStream::writeData
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___writeData_0;
	// System.Object[] Photon.Pun.PhotonStream::readData
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___readData_1;
	// System.Byte Photon.Pun.PhotonStream::currentItem
	uint8_t ___currentItem_2;
	// System.Boolean Photon.Pun.PhotonStream::<IsWriting>k__BackingField
	bool ___U3CIsWritingU3Ek__BackingField_3;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_3;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_6;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_7;
};

// Photon.Pun.UtilityScripts.PlayerNumberingExtensions
struct PlayerNumberingExtensions_t31ECD72DEFC9372C5C7B171CC49FF7E9890D9AFD  : public RuntimeObject
{
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_0;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_1;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_2;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_3;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_4;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_5;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_6;
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_12;
};

// Photon.Pun.UtilityScripts.ScoreExtensions
struct ScoreExtensions_t0B10EC0BC0253BEF04484953A2B2C49F4E0CE158  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Photon.Pun.UtilityScripts.TeamExtensions
struct TeamExtensions_tA3CB87906F0FBBDFB9373D3DBD65EB8AF7AE915E  : public RuntimeObject
{
};

// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;
};

// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestMessageCallback>k__BackingField
	int32_t ___U3CLongestMessageCallbackU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestRawMessageCallback>k__BackingField
	int32_t ___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;
};

// Photon.Pun.UtilityScripts.TurnExtensions
struct TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45  : public RuntimeObject
{
};

struct TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields
{
	// System.String Photon.Pun.UtilityScripts.TurnExtensions::TurnPropKey
	String_t* ___TurnPropKey_0;
	// System.String Photon.Pun.UtilityScripts.TurnExtensions::TurnStartPropKey
	String_t* ___TurnStartPropKey_1;
	// System.String Photon.Pun.UtilityScripts.TurnExtensions::FinishedTurnPropKey
	String_t* ___FinishedTurnPropKey_2;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA  : public RuntimeObject
{
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;
};

struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields
{
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___Default_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4
struct U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3  : public RuntimeObject
{
	// System.Int32 Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Photon.Pun.UtilityScripts.OnClickDestroy Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::<>4__this
	OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F* ___U3CU3E4__this_2;
};

// Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8
struct U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C  : public RuntimeObject
{
	// System.Int32 Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Photon.Pun.UtilityScripts.OnClickRpc Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<>4__this
	OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* ___U3CU3E4__this_2;
	// System.Boolean Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<wasEmissive>5__2
	bool ___U3CwasEmissiveU3E5__2_3;
	// System.Single Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<f>5__3
	float ___U3CfU3E5__3_4;
};

// Photon.Pun.UtilityScripts.PlayerNumbering/<>c
struct U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7  : public RuntimeObject
{
};

struct U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields
{
	// Photon.Pun.UtilityScripts.PlayerNumbering/<>c Photon.Pun.UtilityScripts.PlayerNumbering/<>c::<>9
	U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* ___U3CU3E9_0;
	// System.Func`2<Photon.Realtime.Player,System.Int32> Photon.Pun.UtilityScripts.PlayerNumbering/<>c::<>9__14_0
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* ___U3CU3E9__14_0_1;
	// System.Func`2<Photon.Realtime.Player,System.Int32> Photon.Pun.UtilityScripts.PlayerNumbering/<>c::<>9__14_1
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* ___U3CU3E9__14_1_2;
	// System.Func`2<Photon.Realtime.Player,System.Int32> Photon.Pun.UtilityScripts.PlayerNumbering/<>c::<>9__14_2
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* ___U3CU3E9__14_2_3;
};

// Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5  : public RuntimeObject
{
	// Photon.Pun.UtilityScripts.TabViewManager/Tab Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0::_tab
	Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* ____tab_0;
	// Photon.Pun.UtilityScripts.TabViewManager Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0::<>4__this
	TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C* ___U3CU3E4__this_1;
};

// Photon.Pun.UtilityScripts.TabViewManager/Tab
struct Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208  : public RuntimeObject
{
	// System.String Photon.Pun.UtilityScripts.TabViewManager/Tab::ID
	String_t* ___ID_0;
	// UnityEngine.UI.Toggle Photon.Pun.UtilityScripts.TabViewManager/Tab::Toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___Toggle_1;
	// UnityEngine.RectTransform Photon.Pun.UtilityScripts.TabViewManager/Tab::View
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___View_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Byte>
struct Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	uint8_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Photon.Pun.UtilityScripts.CellTreeNode>
struct Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
struct Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A  : public Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA 
{
	// System.Int32 Photon.Pun.PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// Photon.Realtime.Player Photon.Pun.PhotonMessageInfo::Sender
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___Sender_1;
	// Photon.Pun.PhotonView Photon.Pun.PhotonMessageInfo::photonView
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_2;
};
// Native definition for P/Invoke marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___Sender_1;
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_2;
};
// Native definition for COM marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA_marshaled_com
{
	int32_t ___timeInt_0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___Sender_1;
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___photonView_2;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t55221ACA81F7BA4FDEC3EF86FC537D5002A3662C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t55221ACA81F7BA4FDEC3EF86FC537D5002A3662C__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t4144887299A3A6926250FB0F80E1D7D0D4F29922 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t4144887299A3A6926250FB0F80E1D7D0D4F29922__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t257ABF2C3DB56AE832391DBEDCCFF8AF6A45FA9E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t257ABF2C3DB56AE832391DBEDCCFF8AF6A45FA9E__padding[48];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0CA47679A8B48490B35902039B874DC32C465A4B547059C0D941091B7B72CB21
	__StaticArrayInitTypeSizeU3D32_t4144887299A3A6926250FB0F80E1D7D0D4F29922 ___0CA47679A8B48490B35902039B874DC32C465A4B547059C0D941091B7B72CB21_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::3BB048C6BCFB13ADB4230B15FDE86F7FCFA341C302CC263DFC9250D7877BABFB
	__StaticArrayInitTypeSizeU3D48_t257ABF2C3DB56AE832391DBEDCCFF8AF6A45FA9E ___3BB048C6BCFB13ADB4230B15FDE86F7FCFA341C302CC263DFC9250D7877BABFB_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7E8D5B72D290BA59F0EDBE3D6F961EEA1A534C250A6EF2CAC5B85C0C2111735F
	__StaticArrayInitTypeSizeU3D16_t55221ACA81F7BA4FDEC3EF86FC537D5002A3662C ___7E8D5B72D290BA59F0EDBE3D6F961EEA1A534C250A6EF2CAC5B85C0C2111735F_2;
};

// Photon.Realtime.AuthModeOption
struct AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE 
{
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.ByteEnum
struct ByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692 
{
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;
};

// Photon.Realtime.ClientState
struct ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3 
{
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// Photon.Pun.ConnectMethod
struct ConnectMethod_t2F54C1E94322581C4D81C39BC89D18392C762352 
{
	// System.Int32 Photon.Pun.ConnectMethod::value__
	int32_t ___value___2;
};

// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_t5F53E5A9D1B47CD4A9FAE10E5F648DE2596D46F2 
{
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Photon.Realtime.CustomAuthenticationType
struct CustomAuthenticationType_t202E72650121EDA3F5EC694D792F2DEBC48E9D0B 
{
	// System.Byte Photon.Realtime.CustomAuthenticationType::value__
	uint8_t ___value___2;
};

// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_t02AE6C5FD0E09AFE78382E0B5C15DC2223D35D98 
{
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// ExitGames.Client.Photon.DeliveryMode
struct DeliveryMode_tBD00E8E8A6BB25D15E75BBBDD17DCEB12B803593 
{
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;
};

// Photon.Realtime.DisconnectCause
struct DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5 
{
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;
};

// Photon.Realtime.EncryptionMode
struct EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98 
{
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;
};

// Photon.Realtime.EventCaching
struct EventCaching_t681808FE808768F0F7A0ABA320F652B258AC051D 
{
	// System.Byte Photon.Realtime.EventCaching::value__
	uint8_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Photon.Realtime.JoinType
struct JoinType_t4C989A956DB1EE06BE8CED51A4C9817AB7FB860C 
{
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// Photon.Realtime.LobbyType
struct LobbyType_t2999FD1D1587E92FF3F2C8C129237EDBA14A258F 
{
	// System.Byte Photon.Realtime.LobbyType::value__
	uint8_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Photon.Pun.OwnershipOption
struct OwnershipOption_t36CEE974485BF3251513A6828C74013544882494 
{
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;
};

// Photon.Pun.PunLogLevel
struct PunLogLevel_t1069D6E4AE1E2C68864CE8DF38BD86D6C1BED877 
{
	// System.Int32 Photon.Pun.PunLogLevel::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Photon.Realtime.ReceiverGroup
struct ReceiverGroup_t0A15AAB4B194FAC4055558A586477F1F02E879CC 
{
	// System.Byte Photon.Realtime.ReceiverGroup::value__
	uint8_t ___value___2;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// Photon.Pun.RpcTarget
struct RpcTarget_t88C2811A16997691A6E47FB9A89AAA63B11E1AD0 
{
	// System.Int32 Photon.Pun.RpcTarget::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ExitGames.Client.Photon.SerializationProtocol
struct SerializationProtocol_t2A6589A0938C7CF1EAFEEC0FC61F0D34F7176910 
{
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;
};

// Photon.Realtime.ServerConnection
struct ServerConnection_t91F7686050F68425C6517C7AC3225669636DD0CC 
{
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;
};

// UnityEngine.TextAnchor
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;
};

// Photon.Pun.ViewSynchronization
struct ViewSynchronization_tF0B7A5F5226663DB5F7C84FA7C787E63D7FB965D 
{
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;
};

// Photon.Pun.UtilityScripts.CellTreeNode/ENodeType
struct ENodeType_t1BF76781508BCE4098460FE5E9983D88578B3585 
{
	// System.Int32 Photon.Pun.UtilityScripts.CellTreeNode/ENodeType::value__
	int32_t ___value___2;
};

// UnityEngine.GUILayoutOption/Type
struct Type_t94B090894A3B9A5C5AEBD91800DB10688CC00F4A 
{
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// Photon.Pun.UtilityScripts.OnClickInstantiate/InstantiateOption
struct InstantiateOption_t1BB4A9926F455A07CE36C953E11F1B7CC988D01F 
{
	// System.Int32 Photon.Pun.UtilityScripts.OnClickInstantiate/InstantiateOption::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;
};

// Photon.Pun.UtilityScripts.PunTeams/Team
struct Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC 
{
	// System.Byte Photon.Pun.UtilityScripts.PunTeams/Team::value__
	uint8_t ___value___2;
};

// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_t35B76DF2E479A4C67D7768854404EFB47BF1BBB6 
{
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t04A8B197CECE292E71BBB9145B1CA95BD450383E 
{
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// Photon.Pun.UtilityScripts.TabViewManager/TabChangeEvent
struct TabChangeEvent_t7D0974735674B29B166A1C0AD095737C7416A94E  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_tCE3F3757423A29F22112989C6B4D087850A13ED7 
{
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;
};

// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7  : public RuntimeObject
{
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.String Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Pun.UtilityScripts.CellTreeNode
struct CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58  : public RuntimeObject
{
	// System.Byte Photon.Pun.UtilityScripts.CellTreeNode::Id
	uint8_t ___Id_0;
	// UnityEngine.Vector3 Photon.Pun.UtilityScripts.CellTreeNode::Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Center_1;
	// UnityEngine.Vector3 Photon.Pun.UtilityScripts.CellTreeNode::Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Size_2;
	// UnityEngine.Vector3 Photon.Pun.UtilityScripts.CellTreeNode::TopLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TopLeft_3;
	// UnityEngine.Vector3 Photon.Pun.UtilityScripts.CellTreeNode::BottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___BottomRight_4;
	// Photon.Pun.UtilityScripts.CellTreeNode/ENodeType Photon.Pun.UtilityScripts.CellTreeNode::NodeType
	int32_t ___NodeType_5;
	// Photon.Pun.UtilityScripts.CellTreeNode Photon.Pun.UtilityScripts.CellTreeNode::Parent
	CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___Parent_6;
	// System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode> Photon.Pun.UtilityScripts.CellTreeNode::Childs
	List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* ___Childs_7;
	// System.Single Photon.Pun.UtilityScripts.CellTreeNode::maxDistance
	float ___maxDistance_8;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_3;
	// System.Boolean Photon.Realtime.LoadBalancingClient::didAuthenticate
	bool ___didAuthenticate_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.LoadBalancingClient::ExpectedProtocol
	uint8_t ___ExpectedProtocol_7;
	// System.String Photon.Realtime.LoadBalancingClient::tokenCache
	String_t* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHttp
	String_t* ___NameServerHttp_11;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_15;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_16;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_17;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_18;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_19;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_20;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_21;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_22;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_23;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_24;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_25;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_26;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_27;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_28;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_29;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_30;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_31;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_32;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_34;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_35;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_36;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_37;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_39;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_40;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_41;
};

struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_12;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99  : public RuntimeObject
{
};

struct PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields
{
	// System.String Photon.Pun.PhotonNetwork::gameVersion
	String_t* ___gameVersion_1;
	// Photon.Pun.PhotonHandler Photon.Pun.PhotonNetwork::photonMono
	PhotonHandler_tD4F215694F2D38FDD6CCB10EED94376994C10BC7* ___photonMono_2;
	// Photon.Realtime.LoadBalancingClient Photon.Pun.PhotonNetwork::NetworkingClient
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___NetworkingClient_3;
	// System.Int32 Photon.Pun.PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_4;
	// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::PhotonServerSettings
	ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* ___PhotonServerSettings_6;
	// Photon.Pun.ConnectMethod Photon.Pun.PhotonNetwork::ConnectMethod
	int32_t ___ConnectMethod_8;
	// Photon.Pun.PunLogLevel Photon.Pun.PhotonNetwork::LogLevel
	int32_t ___LogLevel_9;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForVectorSynchronization
	float ___PrecisionForVectorSynchronization_10;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForQuaternionSynchronization
	float ___PrecisionForQuaternionSynchronization_11;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForFloatSynchronization
	float ___PrecisionForFloatSynchronization_12;
	// System.Boolean Photon.Pun.PhotonNetwork::offlineMode
	bool ___offlineMode_13;
	// Photon.Realtime.Room Photon.Pun.PhotonNetwork::offlineModeRoom
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___offlineModeRoom_14;
	// System.Boolean Photon.Pun.PhotonNetwork::automaticallySyncScene
	bool ___automaticallySyncScene_15;
	// System.Int32 Photon.Pun.PhotonNetwork::sendFrequency
	int32_t ___sendFrequency_16;
	// System.Int32 Photon.Pun.PhotonNetwork::serializationFrequency
	int32_t ___serializationFrequency_17;
	// System.Boolean Photon.Pun.PhotonNetwork::isMessageQueueRunning
	bool ___isMessageQueueRunning_18;
	// System.Double Photon.Pun.PhotonNetwork::frametime
	double ___frametime_19;
	// System.Int32 Photon.Pun.PhotonNetwork::frame
	int32_t ___frame_20;
	// System.Diagnostics.Stopwatch Photon.Pun.PhotonNetwork::StartupStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___StartupStopwatch_21;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_22;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_23;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Pun.PhotonNetwork::PrefabsWithoutMagicCallback
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___PrefabsWithoutMagicCallback_24;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::SendInstantiateEvHashtable
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___SendInstantiateEvHashtable_25;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendInstantiateRaiseEventOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___SendInstantiateRaiseEventOptions_26;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::allowedReceivingGroups
	HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153* ___allowedReceivingGroups_27;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::blockedSendingGroups
	HashSet_1_t0B39EF96E81D9617D3E4536032F30E1AE7610153* ___blockedSendingGroups_28;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::photonViewList
	Dictionary_2_t7A6B5CC43325DC544D8414777810CACBD57899FA* ___photonViewList_29;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipRequestEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipRequestEv_30;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferedEv
	Action_2_tAA2E46B2015896D2C3FD7EC72B52C340E8EFF4C4* ___OnOwnershipTransferedEv_31;
	// System.Byte Photon.Pun.PhotonNetwork::currentLevelPrefix
	uint8_t ___currentLevelPrefix_32;
	// System.Boolean Photon.Pun.PhotonNetwork::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_33;
	// Photon.Pun.IPunPrefabPool Photon.Pun.PhotonNetwork::prefabPool
	RuntimeObject* ___prefabPool_36;
	// System.Boolean Photon.Pun.PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_37;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> Photon.Pun.PhotonNetwork::monoRPCMethodsCache
	Dictionary_2_t681C2D0152C2184DCA6AD773603D0FE709D338C9* ___monoRPCMethodsCache_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Photon.Pun.PhotonNetwork::rpcShortcuts
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___rpcShortcuts_39;
	// UnityEngine.AsyncOperation Photon.Pun.PhotonNetwork::_AsyncLevelLoadingOperation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ____AsyncLevelLoadingOperation_40;
	// System.Single Photon.Pun.PhotonNetwork::_levelLoadingProgress
	float ____levelLoadingProgress_41;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::removeFilter
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___removeFilter_42;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::ServerCleanDestroyEvent
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ServerCleanDestroyEvent_43;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::ServerCleanOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___ServerCleanOptions_44;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcFilterByViewId
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___rpcFilterByViewId_45;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::OpCleanRpcBufferOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___OpCleanRpcBufferOptions_46;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcEvent
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___rpcEvent_47;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::RpcOptionsToAll
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___RpcOptionsToAll_48;
	// System.Int32 Photon.Pun.PhotonNetwork::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_49;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamOut
	PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___serializeStreamOut_50;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamIn
	PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___serializeStreamIn_51;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::serializeRaiseEvOptions
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___serializeRaiseEvOptions_52;
	// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch> Photon.Pun.PhotonNetwork::serializeViewBatches
	Dictionary_2_t47C3B85708CBFB02F30AF23A5D4092EC2DAD8636* ___serializeViewBatches_53;
	// Photon.Realtime.RegionHandler Photon.Pun.PhotonNetwork::_cachedRegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ____cachedRegionHandler_58;
};

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ___SocketImplementationConfig_9;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t* ___U3CSocketImplementationU3Ek__BackingField_10;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_11;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_14;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_17;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_19;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_22;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_23;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_28;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RandomizedSequenceNumbers_29;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsIncomingU3Ek__BackingField_30;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsOutgoingU3Ek__BackingField_31;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* ___U3CTrafficStatsGameLevelU3Ek__BackingField_32;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___trafficStatsStopwatch_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_34;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_35;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject* ___SendOutgoingLockObject_36;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject* ___DispatchLockObject_37;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject* ___EnqueueLock_38;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PayloadEncryptionSecret_39;
	// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.PhotonPeer::DgramEncryptor
	Encryptor_tEF02CF41BCAEF714D475D21B49FF8C4862B0E3F6* ___DgramEncryptor_40;
	// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.PhotonPeer::DgramDecryptor
	Decryptor_t760BB0B79ED8AB17CEF60D2E00D0CC251F1616B6* ___DgramDecryptor_41;
};

struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_StaticFields
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_27;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
};

// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E  : public RuntimeObject
{
	// Photon.Realtime.EventCaching Photon.Realtime.RaiseEventOptions::CachingOption
	uint8_t ___CachingOption_1;
	// System.Byte Photon.Realtime.RaiseEventOptions::InterestGroup
	uint8_t ___InterestGroup_2;
	// System.Int32[] Photon.Realtime.RaiseEventOptions::TargetActors
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___TargetActors_3;
	// Photon.Realtime.ReceiverGroup Photon.Realtime.RaiseEventOptions::Receivers
	uint8_t ___Receivers_4;
	// System.Byte Photon.Realtime.RaiseEventOptions::SequenceChannel
	uint8_t ___SequenceChannel_5;
	// Photon.Realtime.WebFlags Photon.Realtime.RaiseEventOptions::Flags
	WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___Flags_6;
};

struct RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_StaticFields
{
	// Photon.Realtime.RaiseEventOptions Photon.Realtime.RaiseEventOptions::Default
	RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___Default_0;
};

// ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 
{
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;
};

struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_StaticFields
{
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___SendUnreliable_1;
};
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9  : public RuntimeObject
{
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;
};

struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9_StaticFields
{
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Default_2;
};

// System.Func`2<Photon.Realtime.Player,System.Int32>
struct Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F  : public PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C
{
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> Photon.Realtime.LoadBalancingPeer::opParameters
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ___opParameters_43;
};

struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F_StaticFields
{
	// System.Type Photon.Realtime.LoadBalancingPeer::PingImplementation
	Type_t* ___PingImplementation_42;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired
struct CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E  : public MulticastDelegate_t
{
};

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550  : public MulticastDelegate_t
{
};

// Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged
struct PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// Photon.Pun.UtilityScripts.ButtonInsideScrollList
struct ButtonInsideScrollList_t6BD912E3EC9F27C7AD3927E283BAE6B79A95537F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.ScrollRect Photon.Pun.UtilityScripts.ButtonInsideScrollList::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_4;
};

// Photon.Pun.UtilityScripts.CullArea
struct CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Byte Photon.Pun.UtilityScripts.CullArea::FIRST_GROUP_ID
	uint8_t ___FIRST_GROUP_ID_6;
	// System.Int32[] Photon.Pun.UtilityScripts.CullArea::SUBDIVISION_FIRST_LEVEL_ORDER
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___SUBDIVISION_FIRST_LEVEL_ORDER_7;
	// System.Int32[] Photon.Pun.UtilityScripts.CullArea::SUBDIVISION_SECOND_LEVEL_ORDER
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___SUBDIVISION_SECOND_LEVEL_ORDER_8;
	// System.Int32[] Photon.Pun.UtilityScripts.CullArea::SUBDIVISION_THIRD_LEVEL_ORDER
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___SUBDIVISION_THIRD_LEVEL_ORDER_9;
	// UnityEngine.Vector2 Photon.Pun.UtilityScripts.CullArea::Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Center_10;
	// UnityEngine.Vector2 Photon.Pun.UtilityScripts.CullArea::Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Size_11;
	// UnityEngine.Vector2[] Photon.Pun.UtilityScripts.CullArea::Subdivisions
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___Subdivisions_12;
	// System.Int32 Photon.Pun.UtilityScripts.CullArea::NumberOfSubdivisions
	int32_t ___NumberOfSubdivisions_13;
	// System.Int32 Photon.Pun.UtilityScripts.CullArea::<CellCount>k__BackingField
	int32_t ___U3CCellCountU3Ek__BackingField_14;
	// Photon.Pun.UtilityScripts.CellTree Photon.Pun.UtilityScripts.CullArea::<CellTree>k__BackingField
	CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* ___U3CCellTreeU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> Photon.Pun.UtilityScripts.CullArea::<Map>k__BackingField
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___U3CMapU3Ek__BackingField_16;
	// System.Boolean Photon.Pun.UtilityScripts.CullArea::YIsUpAxis
	bool ___YIsUpAxis_17;
	// System.Boolean Photon.Pun.UtilityScripts.CullArea::RecreateCellHierarchy
	bool ___RecreateCellHierarchy_18;
	// System.Byte Photon.Pun.UtilityScripts.CullArea::idCounter
	uint8_t ___idCounter_19;
};

// Photon.Pun.UtilityScripts.CullingHandler
struct CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Photon.Pun.UtilityScripts.CullingHandler::orderIndex
	int32_t ___orderIndex_4;
	// Photon.Pun.UtilityScripts.CullArea Photon.Pun.UtilityScripts.CullingHandler::cullArea
	CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* ___cullArea_5;
	// System.Collections.Generic.List`1<System.Byte> Photon.Pun.UtilityScripts.CullingHandler::previousActiveCells
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___previousActiveCells_6;
	// System.Collections.Generic.List`1<System.Byte> Photon.Pun.UtilityScripts.CullingHandler::activeCells
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___activeCells_7;
	// Photon.Pun.PhotonView Photon.Pun.UtilityScripts.CullingHandler::pView
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pView_8;
	// UnityEngine.Vector3 Photon.Pun.UtilityScripts.CullingHandler::lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPosition_9;
	// UnityEngine.Vector3 Photon.Pun.UtilityScripts.CullingHandler::currentPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPosition_10;
};

// Photon.Pun.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t9E30C9C0D49107F359A6001AF67FF4A0AB8259BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition
struct GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_4;
	// UnityEngine.UI.Graphic Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::_graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ____graphic_5;
	// UnityEngine.Color Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::NormalOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOnColor_6;
	// UnityEngine.Color Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::NormalOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOffColor_7;
	// UnityEngine.Color Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::HoverOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOnColor_8;
	// UnityEngine.Color Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::HoverOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOffColor_9;
	// System.Boolean Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::isHover
	bool ___isHover_10;
};

// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pvCache_4;
};

// Photon.Pun.UtilityScripts.OnClickInstantiate
struct OnClickInstantiate_t56B27413C08DF9889A66485DA3411272052D3DE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.EventSystems.PointerEventData/InputButton Photon.Pun.UtilityScripts.OnClickInstantiate::Button
	int32_t ___Button_4;
	// UnityEngine.KeyCode Photon.Pun.UtilityScripts.OnClickInstantiate::ModifierKey
	int32_t ___ModifierKey_5;
	// UnityEngine.GameObject Photon.Pun.UtilityScripts.OnClickInstantiate::Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab_6;
	// Photon.Pun.UtilityScripts.OnClickInstantiate/InstantiateOption Photon.Pun.UtilityScripts.OnClickInstantiate::InstantiateType
	int32_t ___InstantiateType_7;
};

// Photon.Pun.UtilityScripts.OnEscapeQuit
struct OnEscapeQuit_t03128DF191CDB88E9DA771CE3EABFB4D249C38A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.UtilityScripts.OnJoinedInstantiate
struct OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Photon.Pun.UtilityScripts.OnJoinedInstantiate::SpawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SpawnPosition_4;
	// System.Single Photon.Pun.UtilityScripts.OnJoinedInstantiate::PositionOffset
	float ___PositionOffset_5;
	// UnityEngine.GameObject[] Photon.Pun.UtilityScripts.OnJoinedInstantiate::PrefabsToInstantiate
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___PrefabsToInstantiate_6;
};

// Photon.Pun.UtilityScripts.OnPointerOverTooltip
struct OnPointerOverTooltip_t6CDDC42E25CB38D5A556F999BD366BB3DDB82955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.UtilityScripts.OnStartDelete
struct OnStartDelete_t6C0FC525A79E2EBFA118989E77632B0E4C21CD5E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.UtilityScripts.PhotonLagSimulationGui
struct PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rect Photon.Pun.UtilityScripts.PhotonLagSimulationGui::WindowRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___WindowRect_4;
	// System.Int32 Photon.Pun.UtilityScripts.PhotonLagSimulationGui::WindowId
	int32_t ___WindowId_5;
	// System.Boolean Photon.Pun.UtilityScripts.PhotonLagSimulationGui::Visible
	bool ___Visible_6;
	// ExitGames.Client.Photon.PhotonPeer Photon.Pun.UtilityScripts.PhotonLagSimulationGui::<Peer>k__BackingField
	PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___U3CPeerU3Ek__BackingField_7;
};

// Photon.Pun.UtilityScripts.PhotonStatsGui
struct PhotonStatsGui_t91ECC9FD293234632FCE15D15EC6477088F7BC5A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Photon.Pun.UtilityScripts.PhotonStatsGui::statsWindowOn
	bool ___statsWindowOn_4;
	// System.Boolean Photon.Pun.UtilityScripts.PhotonStatsGui::statsOn
	bool ___statsOn_5;
	// System.Boolean Photon.Pun.UtilityScripts.PhotonStatsGui::healthStatsVisible
	bool ___healthStatsVisible_6;
	// System.Boolean Photon.Pun.UtilityScripts.PhotonStatsGui::trafficStatsOn
	bool ___trafficStatsOn_7;
	// System.Boolean Photon.Pun.UtilityScripts.PhotonStatsGui::buttonsOn
	bool ___buttonsOn_8;
	// UnityEngine.Rect Photon.Pun.UtilityScripts.PhotonStatsGui::statsRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___statsRect_9;
	// System.Int32 Photon.Pun.UtilityScripts.PhotonStatsGui::WindowId
	int32_t ___WindowId_10;
};

// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Photon.Pun.PhotonView::ownerId
	int32_t ___ownerId_4;
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_5;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_6;
	// System.Boolean Photon.Pun.PhotonView::OwnershipWasTransfered
	bool ___OwnershipWasTransfered_7;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_8;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___instantiationDataField_9;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___lastOnSerializeDataSent_10;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___syncValues_11;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___lastOnSerializeDataReceived_12;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_13;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_14;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ObservedComponents_15;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_16;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_17;
	// System.Boolean Photon.Pun.PhotonView::didAwake
	bool ___didAwake_18;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_19;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_20;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___RpcMonoBehaviours_21;
};

// Photon.Pun.UtilityScripts.PointedAtGameObjectInfo
struct PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
	// UnityEngine.Transform Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::focus
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___focus_6;
};

struct PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_StaticFields
{
	// Photon.Pun.UtilityScripts.PointedAtGameObjectInfo Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::Instance
	PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* ___Instance_4;
};

// Photon.Pun.UtilityScripts.PunPlayerScores
struct PunPlayerScores_t37F6FB5D0EDA234746D7A4E6988485235239BFE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.UtilityScripts.StatesGui
struct StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rect Photon.Pun.UtilityScripts.StatesGui::GuiOffset
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___GuiOffset_4;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::DontDestroy
	bool ___DontDestroy_5;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::ServerTimestamp
	bool ___ServerTimestamp_6;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::DetailedConnection
	bool ___DetailedConnection_7;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::Server
	bool ___Server_8;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::AppVersion
	bool ___AppVersion_9;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::UserId
	bool ___UserId_10;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::Room
	bool ___Room_11;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::RoomProps
	bool ___RoomProps_12;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::LocalPlayer
	bool ___LocalPlayer_13;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::PlayerProps
	bool ___PlayerProps_14;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::Others
	bool ___Others_15;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::Buttons
	bool ___Buttons_16;
	// System.Boolean Photon.Pun.UtilityScripts.StatesGui::ExpectedUsers
	bool ___ExpectedUsers_17;
	// UnityEngine.Rect Photon.Pun.UtilityScripts.StatesGui::GuiRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___GuiRect_18;
};

struct StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_StaticFields
{
	// Photon.Pun.UtilityScripts.StatesGui Photon.Pun.UtilityScripts.StatesGui::Instance
	StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* ___Instance_19;
};

// Photon.Pun.UtilityScripts.TabViewManager
struct TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.ToggleGroup Photon.Pun.UtilityScripts.TabViewManager::ToggleGroup
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___ToggleGroup_4;
	// Photon.Pun.UtilityScripts.TabViewManager/Tab[] Photon.Pun.UtilityScripts.TabViewManager::Tabs
	TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* ___Tabs_5;
	// Photon.Pun.UtilityScripts.TabViewManager/TabChangeEvent Photon.Pun.UtilityScripts.TabViewManager::OnTabChanged
	TabChangeEvent_t7D0974735674B29B166A1C0AD095737C7416A94E* ___OnTabChanged_6;
	// Photon.Pun.UtilityScripts.TabViewManager/Tab Photon.Pun.UtilityScripts.TabViewManager::CurrentTab
	Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* ___CurrentTab_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab> Photon.Pun.UtilityScripts.TabViewManager::Tab_lut
	Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F* ___Tab_lut_8;
};

// Photon.Pun.UtilityScripts.TextButtonTransition
struct TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Pun.UtilityScripts.TextButtonTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_4;
	// UnityEngine.UI.Selectable Photon.Pun.UtilityScripts.TextButtonTransition::Selectable
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___Selectable_5;
	// UnityEngine.Color Photon.Pun.UtilityScripts.TextButtonTransition::NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalColor_6;
	// UnityEngine.Color Photon.Pun.UtilityScripts.TextButtonTransition::HoverColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverColor_7;
};

// Photon.Pun.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Photon.Pun.UtilityScripts.TextToggleIsOnTransition::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_4;
	// UnityEngine.UI.Text Photon.Pun.UtilityScripts.TextToggleIsOnTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_5;
	// UnityEngine.Color Photon.Pun.UtilityScripts.TextToggleIsOnTransition::NormalOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOnColor_6;
	// UnityEngine.Color Photon.Pun.UtilityScripts.TextToggleIsOnTransition::NormalOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOffColor_7;
	// UnityEngine.Color Photon.Pun.UtilityScripts.TextToggleIsOnTransition::HoverOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOnColor_8;
	// UnityEngine.Color Photon.Pun.UtilityScripts.TextToggleIsOnTransition::HoverOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOffColor_9;
	// System.Boolean Photon.Pun.UtilityScripts.TextToggleIsOnTransition::isHover
	bool ___isHover_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_9;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
};

// Photon.Pun.UtilityScripts.MoveByKeys
struct MoveByKeys_t231D556E8EF98714701971423107BFF3CCFA8A5E  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// System.Single Photon.Pun.UtilityScripts.MoveByKeys::Speed
	float ___Speed_5;
	// System.Single Photon.Pun.UtilityScripts.MoveByKeys::JumpForce
	float ___JumpForce_6;
	// System.Single Photon.Pun.UtilityScripts.MoveByKeys::JumpTimeout
	float ___JumpTimeout_7;
	// System.Boolean Photon.Pun.UtilityScripts.MoveByKeys::isSprite
	bool ___isSprite_8;
	// System.Single Photon.Pun.UtilityScripts.MoveByKeys::jumpingTime
	float ___jumpingTime_9;
	// UnityEngine.Rigidbody Photon.Pun.UtilityScripts.MoveByKeys::body
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___body_10;
	// UnityEngine.Rigidbody2D Photon.Pun.UtilityScripts.MoveByKeys::body2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___body2d_11;
};

// Photon.Pun.UtilityScripts.OnClickDestroy
struct OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// UnityEngine.EventSystems.PointerEventData/InputButton Photon.Pun.UtilityScripts.OnClickDestroy::Button
	int32_t ___Button_5;
	// UnityEngine.KeyCode Photon.Pun.UtilityScripts.OnClickDestroy::ModifierKey
	int32_t ___ModifierKey_6;
	// System.Boolean Photon.Pun.UtilityScripts.OnClickDestroy::DestroyByRpc
	bool ___DestroyByRpc_7;
};

// Photon.Pun.UtilityScripts.OnClickRpc
struct OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// UnityEngine.EventSystems.PointerEventData/InputButton Photon.Pun.UtilityScripts.OnClickRpc::Button
	int32_t ___Button_5;
	// UnityEngine.KeyCode Photon.Pun.UtilityScripts.OnClickRpc::ModifierKey
	int32_t ___ModifierKey_6;
	// Photon.Pun.RpcTarget Photon.Pun.UtilityScripts.OnClickRpc::Target
	int32_t ___Target_7;
	// UnityEngine.Material Photon.Pun.UtilityScripts.OnClickRpc::originalMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMaterial_8;
	// UnityEngine.Color Photon.Pun.UtilityScripts.OnClickRpc::originalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___originalColor_9;
	// System.Boolean Photon.Pun.UtilityScripts.OnClickRpc::isFlashing
	bool ___isFlashing_10;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Photon.Pun.UtilityScripts.SmoothSyncMovement
struct SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// System.Single Photon.Pun.UtilityScripts.SmoothSyncMovement::SmoothingDelay
	float ___SmoothingDelay_5;
	// UnityEngine.Vector3 Photon.Pun.UtilityScripts.SmoothSyncMovement::correctPlayerPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___correctPlayerPos_6;
	// UnityEngine.Quaternion Photon.Pun.UtilityScripts.SmoothSyncMovement::correctPlayerRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___correctPlayerRot_7;
};

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ___m_Toggles_5;
};

// Photon.Pun.UtilityScripts.ConnectAndJoinRandom
struct ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Boolean Photon.Pun.UtilityScripts.ConnectAndJoinRandom::AutoConnect
	bool ___AutoConnect_5;
	// System.Byte Photon.Pun.UtilityScripts.ConnectAndJoinRandom::Version
	uint8_t ___Version_6;
};

// Photon.Pun.UtilityScripts.CountdownTimer
struct CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Boolean Photon.Pun.UtilityScripts.CountdownTimer::isTimerRunning
	bool ___isTimerRunning_7;
	// System.Single Photon.Pun.UtilityScripts.CountdownTimer::startTime
	float ___startTime_8;
	// UnityEngine.UI.Text Photon.Pun.UtilityScripts.CountdownTimer::Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Text_9;
	// System.Single Photon.Pun.UtilityScripts.CountdownTimer::Countdown
	float ___Countdown_10;
};

struct CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_StaticFields
{
	// Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired Photon.Pun.UtilityScripts.CountdownTimer::OnCountdownTimerHasExpired
	CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* ___OnCountdownTimerHasExpired_6;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Photon.Pun.UtilityScripts.PlayerNumbering
struct PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Boolean Photon.Pun.UtilityScripts.PlayerNumbering::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_9;
};

struct PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields
{
	// Photon.Pun.UtilityScripts.PlayerNumbering Photon.Pun.UtilityScripts.PlayerNumbering::instance
	PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* ___instance_5;
	// Photon.Realtime.Player[] Photon.Pun.UtilityScripts.PlayerNumbering::SortedPlayers
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* ___SortedPlayers_6;
	// Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged Photon.Pun.UtilityScripts.PlayerNumbering::OnPlayerNumberingChanged
	PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* ___OnPlayerNumberingChanged_7;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_15;
};

// Photon.Pun.UtilityScripts.PunTeams
struct PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
};

struct PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>> Photon.Pun.UtilityScripts.PunTeams::PlayersPerTeam
	Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* ___PlayersPerTeam_5;
};

// Photon.Pun.UtilityScripts.PunTurnManager
struct PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Single Photon.Pun.UtilityScripts.PunTurnManager::TurnDuration
	float ___TurnDuration_5;
	// Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks Photon.Pun.UtilityScripts.PunTurnManager::TurnManagerListener
	RuntimeObject* ___TurnManagerListener_6;
	// System.Collections.Generic.HashSet`1<Photon.Realtime.Player> Photon.Pun.UtilityScripts.PunTurnManager::finishedPlayers
	HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* ___finishedPlayers_7;
	// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::_isOverCallProcessed
	bool ____isOverCallProcessed_11;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
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
// System.Byte[]
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572  : public RuntimeArray
{
	ALIGN_FIELD (8) Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* m_Items[1];

	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Pun.UtilityScripts.TabViewManager/Tab[]
struct TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* m_Items[1];

	inline Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7FF5AEA0A7081F270B8FFC65782FCF5C6FCD4A62_gshared (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m62333D089E91797E1B961EF27451EBF82230D916_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___keySelector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49FD888D8D338F6EA9E65990F9C9A287E5CE63CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m6FC6A0D9FA0F9B1204DA02700234FAB91B67CF02_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;

// System.Void Photon.Pun.UtilityScripts.CullArea::CreateCellHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_CreateCellHierarchy_mEF3EDD2C8DF3BA74BFB7F9B6FC1FFE064B3A524D (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CullArea::DrawCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_DrawCells_m4FD268DE4FEDB67E3ECA960291CA9C5755130C5B (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.UtilityScripts.CullArea::IsCellCountAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CullArea_IsCellCountAllowed_m7593E3C7C41463D15C5762E4E07A530FEA0762B7 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD757482E7E84FD089E874DD0778A5200D12C14E0 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.UtilityScripts.CullArea::get_CellCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CullArea_get_CellCount_m9D159D2CA3563F1C8C4DBE0EA7C83489A86BDF0E_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::.ctor(System.Byte,Photon.Pun.UtilityScripts.CellTreeNode/ENodeType,Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode__ctor_mF6169382A1FB53C1F6FFC96BDD121806E2643F07 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, uint8_t ___id0, int32_t ___nodeType1, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___parent2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CullArea::CreateChildCells(Photon.Pun.UtilityScripts.CellTreeNode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_CreateChildCells_mAB69F47610FFA9DAAA8BEFB6480A6FE7BF5D047C (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___parent0, int32_t ___cellLevelInHierarchy1, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CellTree::.ctor(Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTree__ctor_mE0964361F9C5F67A9BB9F04967C5E58108843DA2 (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___root0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CullArea::set_CellTree(Photon.Pun.UtilityScripts.CellTree)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CullArea_set_CellTree_mD8FED6BDC59982FFF163F90316CA3F02E7EF3985_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::AddChild(Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode_AddChild_mFB74EC89F3B3B6E6B7DC785DACBB5632688F476D (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___child0, const RuntimeMethod* method) ;
// Photon.Pun.UtilityScripts.CellTree Photon.Pun.UtilityScripts.CullArea::get_CellTree()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* CullArea_get_CellTree_mEA2517BBE4842D9E02F609B901FB3E2E4CB6F6B1_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) ;
// Photon.Pun.UtilityScripts.CellTreeNode Photon.Pun.UtilityScripts.CellTree::get_RootNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* CellTree_get_RootNode_mF8BF401C5A36413F3F9F546C9AA925FFF1F34A20_inline (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode_Draw_m436C3E676745EC0672C28B0B10136AE0D4CC689E (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CullArea::set_CellCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CullArea_set_CellCount_m1258F893AA2D32E75CC00FA88AA8120521C28E7F_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
inline void List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, const RuntimeMethod*))List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_gshared)(__this, ___capacity0, method);
}
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::GetActiveCells(System.Collections.Generic.List`1<System.Byte>,System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode_GetActiveCells_m0D280F9724B726D7B97E52A1534E57F3656F2F61 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___activeCells0, bool ___yIsUpAxis1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CellTree::set_RootNode(Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellTree_set_RootNode_mCA8B8079714739B7BEB711A4E4262356D0C9D3A0_inline (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode>::.ctor(System.Int32)
inline void List_1__ctor_m4968F61EF536BA01579BA60B189E57B506C68176 (List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode>::Add(T)
inline void List_1_Add_m459F94CAEDE56073FF26D86674008D78837090B8_inline (List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B*, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Photon.Pun.UtilityScripts.CellTreeNode>::GetEnumerator()
inline Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C List_1_GetEnumerator_m91A7CF9EDC5B71A3E4A8080776934EBC464EE424 (List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C (*) (List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Pun.UtilityScripts.CellTreeNode>::Dispose()
inline void Enumerator_Dispose_m53A24C44AB6CB8A0DA44F185D48FC82FABB17A45 (Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Photon.Pun.UtilityScripts.CellTreeNode>::get_Current()
inline CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* Enumerator_get_Current_m6F19B57F9182A5DB7B6B4F3D8C71F244AD141C6F_inline (Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C* __this, const RuntimeMethod* method)
{
	return ((  CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* (*) (Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Pun.UtilityScripts.CellTreeNode>::MoveNext()
inline bool Enumerator_MoveNext_mFEBC26DDD5CD21774175C1716AF9658AB2729943 (Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Photon.Pun.UtilityScripts.CellTreeNode::IsPointNearCell(System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CellTreeNode_IsPointNearCell_mCEADDFA9CE3717BE1EEE679BEC629311811AFC08 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, bool ___yIsUpAxis0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.UtilityScripts.CellTreeNode::IsPointInsideCell(System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CellTreeNode_IsPointInsideCell_mFA7F5E7F6404A27FD86FF2812003A0E48DC22058 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, bool ___yIsUpAxis0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
inline void List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, uint8_t, const RuntimeMethod*))List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648 (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Photon.Pun.UtilityScripts.CullArea>()
inline CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* Object_FindObjectOfType_TisCullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9_m41F99784FBAB2080541F5F361A2AA1A7237CE4BF (const RuntimeMethod* method)
{
	return ((  CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Boolean Photon.Pun.PhotonNetwork::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C (const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::SetInterestGroups(System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_SetInterestGroups_m387F9CD251F06EC02F8AA4E1C53C1951D046AA74 (uint8_t ___group0, bool ___enabled1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
inline void List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_inline (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.UtilityScripts.CullingHandler::HaveActiveCellsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CullingHandler_HaveActiveCellsChanged_mE1D7601102603FEC303BBFA8175CA561103C2829 (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CullingHandler::UpdateInterestGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler_UpdateInterestGroups_m402FD9095799E5D31CDEC2C5104F6BC0E616DD99 (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
inline uint8_t List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, const RuntimeMethod*))List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_gshared)(__this, ___index0, method);
}
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
inline int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m7A2F92799F7D0D0C56D18D0F8BAE77BC9BDCAC31 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1<System.Byte> Photon.Pun.UtilityScripts.CullArea::GetActiveCells(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CullArea_GetActiveCells_m76ECE2396EAC2299976A30D4E9E3514EC9B79A24 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
inline Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte>::Dispose()
inline void Enumerator_Dispose_m7FF5AEA0A7081F270B8FFC65782FCF5C6FCD4A62 (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_Dispose_m7FF5AEA0A7081F270B8FFC65782FCF5C6FCD4A62_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
inline uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
inline bool List_1_Contains_m62333D089E91797E1B961EF27451EBF82230D916 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Contains_m62333D089E91797E1B961EF27451EBF82230D916_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
inline bool Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7 (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA*, const RuntimeMethod*))Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Void Photon.Pun.PhotonNetwork::SetInterestGroups(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_SetInterestGroups_m01692C577977B521A5B5581C3BF13A3FA3A4FC2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___disableGroups0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___enableGroups1, const RuntimeMethod* method) ;
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PhotonLagSimulationGui::set_Peer(ExitGames.Client.Photon.PhotonPeer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonLagSimulationGui_set_Peer_m49E9D5045403F5FC5C426B6D660FF7AD81293CA3_inline (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___value0, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.PhotonPeer Photon.Pun.UtilityScripts.PhotonLagSimulationGui::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71 (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayout_Window_m6FA538996056AA5E32BCAF3BF2DFBF795AB6B26D (int32_t ___id0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect1, WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* ___func2, String_t* ___text3, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options4, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTimeVariance_mEB905CCB7BECBD67C8B6BB183F9DF019332F0BCA (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248 (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::get_IncomingLag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkSimulationSet_get_IncomingLag_mE38F72A9950F07D93AFFB645F504272A0E93D8F0 (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options3, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_IncomingLag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_IncomingLag_m25C5AD9C4B1FC2669360A47135B4E0E31531A1D6 (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_OutgoingLag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_OutgoingLag_m53C3F6F784D7A868A69E1AF5A387B04DAF43EA8A (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::get_IncomingJitter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkSimulationSet_get_IncomingJitter_m17E4A249796BCD139B343124A3045150DEB9FD7C (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_IncomingJitter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_IncomingJitter_mCB79E77D490287EEE0CD880E8091539B82409D9C (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_OutgoingJitter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_OutgoingJitter_mB127A220B2DE110E29AF3D4BDC08E393C671B5BC (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::get_IncomingLossPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkSimulationSet_get_IncomingLossPercentage_m4E99E7B27BCC46F2AE76C547EFF04E02F397432E (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_IncomingLossPercentage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_IncomingLossPercentage_mAD28C44A01E5A051D9B1B883C9BEB4E24327F11C (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.NetworkSimulationSet::set_OutgoingLossPercentage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSimulationSet_set_OutgoingLossPercentage_m0EDB404867753C870405E0C1565E13B407063B29 (NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::get_changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_changed_m691B5A1EC87949AF8474777B24221175ABE1B829 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DragWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DragWindow_m05D25F2E4010BACB431DF8279272F2DDD2F1B4BF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_get_TrafficStatsEnabled_mB7C4D26AAD36A731A4C89B1DE6144B480D9FF2C9 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, bool ___value0, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* PhotonPeer_get_TrafficStatsGameLevel_m83D92F2C803367552F09AD55007BAD250309ED27_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PhotonPeer_get_TrafficStatsElapsedMs_mF57D01ADE9E6A2A552F57139CDF482723420589B (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC (const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mBD769AE99A34702FEA80F6BC9D79542F0992DC4C (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalIncomingMessageCount_m13EB9EE2F58AE4A8884589ECB6C06D176B74A326 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalMessageCount_mA6B693C4265A9680FBD12F6259A3BB050B985CF2 (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_TrafficStatsReset_m2A7C38F51A95521B3F4A707A24E92C06BAFC3AFD (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsIncoming_mFBFFDE72C315515EF874F92B67D135BEEE3E67D9_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsOutgoing_mDD70068CDA34548046EF39295A045E978315AADE_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_ResentReliableCommands_mAEADAB3CEF280037F2208E8969C9E6626973FD87 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.PhotonView::get_OwnerActorNr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_OwnerActorNr_mD9C14958B5CC4A817C6720FD0BF37A9B61A47FDF (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonView::get_IsSceneView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsSceneView_m83C3705900951386ABFD1B9B15FF9C20B572150A (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_mA941799D3368A14C4ED7AC8516806369EAF01692 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.PhotonNetwork::get_ServerTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_ServerTimestamp_m01845E74DA43F1C209FF98980D5B6DF64428F866 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String Photon.Pun.PhotonNetwork::get_ServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonNetwork_get_ServerAddress_m622AD348B0CF39A4EDCAC1652414F6E950564F01 (const RuntimeMethod* method) ;
// Photon.Realtime.ServerConnection Photon.Pun.PhotonNetwork::get_Server()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_Server_m66EC4A4BAF944AFA6B851DA697AB10B8402D8FD5 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Pun.PhotonNetwork::get_NetworkClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_NetworkClientState_mB9C769F7CA93BA39EE6AB259FFD8B716C3D6ACFD (const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.AuthenticationValues Photon.Pun.PhotonNetwork::get_AuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* PhotonNetwork_get_AuthValues_mDE68B63E9DA988A0532AE53C9DF844373248D1A9 (const RuntimeMethod* method) ;
// System.String Photon.Realtime.AuthenticationValues::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m5589924F18733494DEC1218392BCB531F45A06A8_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Player Photon.Pun.PhotonNetwork::get_LocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D (const RuntimeMethod* method) ;
// System.String Photon.Realtime.Player::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_UserId_m7FAE62845C7080A564297D0BFB285E692A1A234C_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97 (const RuntimeMethod* method) ;
// System.String Photon.Realtime.Room::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_ToStringFull_mC592523E5F5327D78E30D24C6224BC4DA50F6E3D (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.String Photon.Pun.UtilityScripts.StatesGui::PlayerToString(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StatesGui_PlayerToString_m5910943502C5A0C43E56AF607DDB6FB0CEA3E2E6 (StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) ;
// Photon.Realtime.Player[] Photon.Pun.PhotonNetwork::get_PlayerListOthers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* PhotonNetwork_get_PlayerListOthers_m4F0097067DBF440BA7A875D3D416F089ADD38777 (const RuntimeMethod* method) ;
// System.String[] Photon.Realtime.Room::get_ExpectedUsers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Room_get_ExpectedUsers_m019AFBBF8602E417F5B072C313F1B44AD1B1D1A6_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsConnected_mDEEAF9E141501CCD9CD78A9F11B6D0CAEAE97B11 (const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::ConnectUsingSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_ConnectUsingSettings_mB2A659A9684CAC6BBBA81F453E31C765DA29E13D (const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_Disconnect_mBEC1951D664E5B511BE4E78663E106E13D42CB98 (const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::LeaveRoom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_LeaveRoom_mDCAACF6F9544774184AD90123492CAC3F811DC0A (bool ___becomeInactive0, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::JoinRandomRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_JoinRandomRoom_m88524DDB91009AAF7F7DB095EBC96C52A545B68A (const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::CreateRoom(System.String,Photon.Realtime.RoomOptions,Photon.Realtime.TypedLobby,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_CreateRoom_m12D48FA7E2BFA9460038A06A7461B5D32404DD28 (String_t* ___roomName0, RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___roomOptions1, TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___typedLobby2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_m1A496B300C5FDCEA653A1652CBA173F42E134371 (const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Player::get_NickName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.Player::get_IsMasterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_get_IsMasterClient_m77288AA1F9372448C60757CBB025F7AECA01DDA3 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::get_CustomProperties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0 (RuntimeObject* ___origin0, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.Player::get_IsInactive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Player_get_IsInactive_m4DDCB652FA77A7DD38F02922C4E411EA4647ED9B_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::RefreshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_RefreshData_mBF3FF86F851BE2C224A1B32BCF8DC07A16485D12 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
inline bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Int32 Photon.Pun.UtilityScripts.PlayerNumberingExtensions::GetPlayerNumber(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::get_Players()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::get_Values()
inline ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* Dictionary_2_get_Values_m33EC5729BB0F7AC6474344A1D3C2C0EE34EB3649 (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* (*) (Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Void System.Func`2<Photon.Realtime.Player,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEBCED36D0A0E2992256CFB4D29396FB5125815E4 (Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Photon.Realtime.Player,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4 (RuntimeObject* ___source0, Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared)(___source0, ___keySelector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Photon.Realtime.Player>(System.Collections.Generic.IEnumerable`1<TSource>)
inline PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_inline (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared)(__this, method);
}
// Photon.Realtime.Player[] Photon.Pun.PhotonNetwork::get_PlayerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* PhotonNetwork_get_PlayerList_m41DACBC257FBD03BE448DA7259D8BF3B94B94656 (const RuntimeMethod* method) ;
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
inline bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared)(__this, ___item0, method);
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumberingExtensions::SetPlayerNumber(Photon.Realtime.Player,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumberingExtensions_SetPlayerNumber_mCA170A02001511B3F5F953A73C35DED7C1813C90 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, int32_t ___playerNumber1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
inline bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared)(__this, ___item0, method);
}
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2 (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD9893DAFB702631B93542B3DFA70750503E67B36 (U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_OfflineMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonNetwork_get_OfflineMode_m6CE5DD1BEDC91807E215EAD144C476CA1D585178_inline (const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_IsConnectedAndReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsConnectedAndReady_m5BCD9680B6353BA0006AECC24FCD7AE9CA451A00 (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String Photon.Realtime.Player::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_ToStringFull_m50E222716E05BD89E22BD7A15E16524335478B22 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Realtime.Player::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetCustomProperties_mDC89663AFD894E3772E3A44D261667922873584C (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesToSet0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___expectedValues1, WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___webFlags2, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Hashtable::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_set_Item_m625527D848F5AF5C6B1F88CE5DC2B6F283C096FF (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.UtilityScripts.ScoreExtensions::GetScore(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreExtensions_GetScore_m5F24DA0D4339A5E544F788D0C65FC8D496A22092 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>::.ctor()
inline void Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2 (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698*, const RuntimeMethod*))Dictionary_2__ctor_m49FD888D8D338F6EA9E65990F9C9A287E5CE63CF_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Realtime.Player>::.ctor()
inline void List_1__ctor_m0A92CDE1CED53E8B81A082BFE93793E2EE580CF6 (List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m0F3E747DAA97215CEE01830562357426F2C7F78E (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* __this, uint8_t ___key0, List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698*, uint8_t, List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772*, const RuntimeMethod*))Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::UpdateTeams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_UpdateTeams_m7D7FDA587D0A136E2A6DA4B4519A9CAFB23B9F13 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PunTeams::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_Start_m1F7D6B77465FABB6A1EFE655EACA5931A2BE3DF5 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Photon.Pun.UtilityScripts.PunTeams/Team,System.Collections.Generic.List`1<Photon.Realtime.Player>>::get_Item(TKey)
inline List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* Dictionary_2_get_Item_m98552B39ADBFD18F02180BF9AC375CBD662DEAC3 (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* (*) (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698*, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m6FC6A0D9FA0F9B1204DA02700234FAB91B67CF02_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Realtime.Player>::Clear()
inline void List_1_Clear_mF66FD30F5B9BB125976D7E864FCBE76B6AF5FA04_inline (List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// Photon.Pun.UtilityScripts.PunTeams/Team Photon.Pun.UtilityScripts.TeamExtensions::GetTeam(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TeamExtensions_GetTeam_mEF750A196D40D83EA566679CC63BD2F3F4DF2CCD (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Realtime.Player>::Add(T)
inline void List_1_Add_m3C3CC8A5379A1C25C13BF70636E7BC872140188B_inline (List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772*, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
inline Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 (*) (List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::Dispose()
inline void Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::get_Current()
inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_inline (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059* __this, const RuntimeMethod* method)
{
	return ((  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* (*) (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::MoveNext()
inline bool Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonStream::get_IsWriting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonStream_get_IsWriting_m7D9C8E96E51841AC62FC8884C2F8222821BD5ABE_inline (PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonStream::SendNext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_SendNext_mC4D9796E0A8F4866B7EE983B7F161A55A2FCD5DC (PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Object Photon.Pun.PhotonStream::ReceiveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PhotonStream_ReceiveNext_m364CE7D424FA3F237662BC8A89D7AA6BDA6335C0 (PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::ConnectNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_ConnectNow_m4C39E85AF5C67D4995569F94CB60324434914E71 (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.SceneManagerHelper::get_ActiveSceneBuildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManagerHelper_get_ActiveSceneBuildIndex_mDADE4464E35190F3241F3AF8F5666B1FFEF97E73 (const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::set_GameVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_GameVersion_mB0D2CE96F0F56E32D766759F4A8156797C414731 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Pun.RpcTarget,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::Destroy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_Destroy_m60271BBE2EF6DF3C63689B01FF907E68EA14688A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGo0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyRpcU3Ed__4__ctor_mE63A5D3FDB7B86FDEE8CF6C2C6947637C70AA34F (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Photon.Pun.PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Byte,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PhotonNetwork_Instantiate_mDB16644B4DD135B74F606887D511E6BAD46634C6 (String_t* ___prefabName0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, uint8_t ___group3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data4, const RuntimeMethod* method) ;
// UnityEngine.GameObject Photon.Pun.PhotonNetwork::InstantiateSceneObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Byte,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PhotonNetwork_InstantiateSceneObject_m82BDE3EFB8E078C39E109CB5EEE8D1C06D9DC018 (String_t* ___prefabName0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, uint8_t ___group3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data4, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Photon.Pun.UtilityScripts.OnClickRpc::ClickFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClickRpc_ClickFlash_m9F0D529435F413EFD341F9F96D0C6F93943B9EBD (OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClickFlashU3Ed__8__ctor_mA98A6139F6116A12171E3A97BEA2D42E01BB7E08 (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_AddCallbackTarget_mD93CD97B66EC0222B8F9D00018982B408B56F592 (RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_RemoveCallbackTarget_m9EFC20060AAA1B69ED0305BCE39F525291175B5D (RuntimeObject* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Double Photon.Pun.PhotonNetwork::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PhotonNetwork_get_Time_m7DA7D3EDD59BAB24E679D525E2678B0F40468C5C (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_inline (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.UtilityScripts.TurnExtensions::GetTurn(Photon.Realtime.RoomInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnExtensions_GetTurn_m1EE28CC7124EA38AE7ABFC1953E62F94115072E4 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* ___room0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.TurnExtensions::SetTurn(Photon.Realtime.Room,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnExtensions_SetTurn_m4EFB321BFDEC629ECB882F72D03B0DB891BDB382 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___room0, int32_t ___turn1, bool ___setStartTime2, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.UtilityScripts.TurnExtensions::GetTurnStart(Photon.Realtime.RoomInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnExtensions_GetTurnStart_mEB41A6B05AC69E730407C4B56288262E7FF13994 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* ___room0, const RuntimeMethod* method) ;
// System.Single Photon.Pun.UtilityScripts.PunTurnManager::get_ElapsedTimeInTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PunTurnManager_get_ElapsedTimeInTurn_m240327225B5240F10075B21809352C95B40E4A2F (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 Photon.Pun.UtilityScripts.PunTurnManager::get_Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<Photon.Realtime.Player>::get_Count()
inline int32_t HashSet_1_get_Count_m9D5B6FC9E0A91972776D03EB24E8E7FC9ECC76A2_inline (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Photon.Realtime.Player>::Contains(T)
inline bool HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08*, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Single Photon.Pun.UtilityScripts.PunTurnManager::get_RemainingSecondsInTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PunTurnManager_get_RemainingSecondsInTurn_m5FB93A9723F8B949393B0ED2504E2ED5F1991661 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::get_IsOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunTurnManager_get_IsOver_m9C01C296271765BD9782F76EA7DAD5A14541E100 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::set_Turn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_set_Turn_m4C69ACD2B799F1ED763F7F6851F04A35EB68F15D (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::get_IsFinishedByMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunTurnManager_get_IsFinishedByMe_mFE2DA62A4484F7AFB752BE53AF51F2693D0EEE3B (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RaiseEventOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaiseEventOptions__ctor_m5AD5093C00DD3EE18EB5033E49C61934E978A94F (RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::RaiseEvent(System.Byte,System.Object,Photon.Realtime.RaiseEventOptions,ExitGames.Client.Photon.SendOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_RaiseEvent_m4FDC197F749344D6388845A75D4AD238A3CE3D3B (uint8_t ___eventCode0, RuntimeObject* ___eventContent1, RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* ___raiseEventOptions2, SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 ___sendOptions3, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.TurnExtensions::SetFinishedTurn(Photon.Realtime.Player,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnExtensions_SetFinishedTurn_m48FE6A0D1A862CB61AA16990A6BFB9A75B66014A (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, int32_t ___turn1, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::ProcessOnEvent(System.Byte,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_ProcessOnEvent_m1D81FD91A2F0A037E8147079674A7CE51E7266E6 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, uint8_t ___eventCode0, RuntimeObject* ___content1, int32_t ___senderId2, const RuntimeMethod* method) ;
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Photon.Realtime.Player>::Add(T)
inline bool HashSet_1_Add_mFFA4703D523E06722C9BF56C5F8DDCB408225449 (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08*, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::get_IsCompletedByAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunTurnManager_get_IsCompletedByAll_m574BB41086381FAB75EE39A4225677E83084A5F3 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) ;
// System.Object ExitGames.Client.Photon.EventData::get_CustomData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventData_get_CustomData_m3386E36D9083B2DD33634C698B7E50344AC9A09B (EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.EventData::get_Sender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventData_get_Sender_mD42C430CADD5B3CB7B79411FD46B16A4A257A2FB (EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Photon.Realtime.Player>::Clear()
inline void HashSet_1_Clear_mDF22DBDA2ECE30DAE8BB8D479004671DCA684743 (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<Photon.Realtime.Player>::.ctor()
inline void HashSet_1__ctor_m0C3261659D8C4A9C0A3A355F9BCA67E760CFACD6 (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponentInParent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_mD5D105BD6034A3131A91D7B6534D7E74834D72AD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F (GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121* __this, bool ___isOn0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared)(__this, ___call0, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::RemoveFocus(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointedAtGameObjectInfo_RemoveFocus_m4CC9CB8D8C94D676A7B14C79C41CC14A629EBD43 (PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* __this, PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pv0, const RuntimeMethod* method) ;
// System.Void Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::SetFocus(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointedAtGameObjectInfo_SetFocus_m1ABC0D7659399BD91CAA4ACAA615F0A4DE27F798 (PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* __this, PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pv0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>::.ctor()
inline void Dictionary_2__ctor_m957E284F55A48A654918D23810F057CB245E572F (Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m83C4EF9827CADDA190243F972C10704EE8555D9A (U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mEBD98D18B111F86CE928C0F98917F52625C1F6F0 (Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___key0, Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleGroup_ActiveToggles_m04CAF25D2C9DE5F310090D63B9841963954BF2BF (ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<UnityEngine.UI.Toggle>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Enumerable_FirstOrDefault_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m576AD7EF23D769C9CB3ED482D9849566C02D68E3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab>::get_Item(TKey)
inline Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* Dictionary_2_get_Item_m0FD75F97F3C736BA3CDB6B5CDDC1FA0668CEEC51 (Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___key0, const RuntimeMethod* method)
{
	return ((  Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* (*) (Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Photon.Pun.UtilityScripts.TabViewManager::OnTabSelected(Photon.Pun.UtilityScripts.TabViewManager/Tab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabViewManager_OnTabSelected_mEB2D07DED0969EAEA451C52BCDC325E19E2F7E6A (TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C* __this, Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* ___tab0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Photon.Pun.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143 (TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3* __this, bool ___isOn0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Int32 Photon.Pun.UtilityScripts.CullArea::get_CellCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CullArea_get_CellCount_m9D159D2CA3563F1C8C4DBE0EA7C83489A86BDF0E (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// public int CellCount { get; private set; }
		int32_t L_0 = __this->___U3CCellCountU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::set_CellCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_set_CellCount_m1258F893AA2D32E75CC00FA88AA8120521C28E7F (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int CellCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CCellCountU3Ek__BackingField_14 = L_0;
		return;
	}
}
// Photon.Pun.UtilityScripts.CellTree Photon.Pun.UtilityScripts.CullArea::get_CellTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* CullArea_get_CellTree_mEA2517BBE4842D9E02F609B901FB3E2E4CB6F6B1 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// public CellTree CellTree { get; private set; }
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_0 = __this->___U3CCellTreeU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::set_CellTree(Photon.Pun.UtilityScripts.CellTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_set_CellTree_mD8FED6BDC59982FFF163F90316CA3F02E7EF3985 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* ___value0, const RuntimeMethod* method) 
{
	{
		// public CellTree CellTree { get; private set; }
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_0 = ___value0;
		__this->___U3CCellTreeU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCellTreeU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> Photon.Pun.UtilityScripts.CullArea::get_Map()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* CullArea_get_Map_m61672C34CD2D97098513263B342188146A42E452 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<int, GameObject> Map { get; private set; }
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_0 = __this->___U3CMapU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::set_Map(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_set_Map_m3A50BC7D46A21C2C4E2454FD4E3BE78BBD06E218 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<int, GameObject> Map { get; private set; }
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_0 = ___value0;
		__this->___U3CMapU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMapU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_Awake_mDE6677FE3C394630991564EFC038C64F693AC664 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// this.idCounter = this.FIRST_GROUP_ID;
		uint8_t L_0 = __this->___FIRST_GROUP_ID_6;
		__this->___idCounter_19 = L_0;
		// this.CreateCellHierarchy();
		CullArea_CreateCellHierarchy_mEF3EDD2C8DF3BA74BFB7F9B6FC1FFE064B3A524D(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_OnDrawGizmos_mADDBFA7CD79CCAE8E9BF4664FA87B09EC55F2289 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// this.idCounter = this.FIRST_GROUP_ID;
		uint8_t L_0 = __this->___FIRST_GROUP_ID_6;
		__this->___idCounter_19 = L_0;
		// if (this.RecreateCellHierarchy)
		bool L_1 = __this->___RecreateCellHierarchy_18;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// this.CreateCellHierarchy();
		CullArea_CreateCellHierarchy_mEF3EDD2C8DF3BA74BFB7F9B6FC1FFE064B3A524D(__this, NULL);
	}

IL_001a:
	{
		// this.DrawCells();
		CullArea_DrawCells_m4FD268DE4FEDB67E3ECA960291CA9C5755130C5B(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::CreateCellHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_CreateCellHierarchy_mEF3EDD2C8DF3BA74BFB7F9B6FC1FFE064B3A524D (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16ED7C1B7B7F10A9FD66FB5319E38F7900BC5244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC1102D3560EFA92FA3E59AA80FEC1BF47D94A72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// if (!this.IsCellCountAllowed())
		bool L_0;
		L_0 = CullArea_IsCellCountAllowed_m7593E3C7C41463D15C5762E4E07A530FEA0762B7(__this, NULL);
		if (L_0)
		{
			goto IL_0065;
		}
	}
	{
		// if (Debug.isDebugBuild)
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Debug_get_isDebugBuild_mD757482E7E84FD089E874DD0778A5200D12C14E0(NULL);
		if (!L_1)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogError("There are too many cells created by your subdivision options. Maximum allowed number of cells is " + (MAX_NUMBER_OF_ALLOWED_CELLS - this.FIRST_GROUP_ID) +
		//                ". Current number of cells is " + this.CellCount + ".");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral16ED7C1B7B7F10A9FD66FB5319E38F7900BC5244);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral16ED7C1B7B7F10A9FD66FB5319E38F7900BC5244);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		uint8_t L_5 = __this->___FIRST_GROUP_ID_6;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)250), (int32_t)L_5));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_4;
		ArrayElementTypeCheck (L_7, _stringLiteralAC1102D3560EFA92FA3E59AA80FEC1BF47D94A72);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAC1102D3560EFA92FA3E59AA80FEC1BF47D94A72);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		int32_t L_9;
		L_9 = CullArea_get_CellCount_m9D159D2CA3563F1C8C4DBE0EA7C83489A86BDF0E_inline(__this, NULL);
		V_1 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		ArrayElementTypeCheck (L_11, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		String_t* L_12;
		L_12 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_12, NULL);
		// return;
		return;
	}

IL_0060:
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_0065:
	{
		// CellTreeNode rootNode = new CellTreeNode(this.idCounter++, CellTreeNode.ENodeType.Root, null);
		uint8_t L_13 = __this->___idCounter_19;
		V_2 = L_13;
		uint8_t L_14 = V_2;
		__this->___idCounter_19 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, 1)));
		uint8_t L_15 = V_2;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_16 = (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58*)il2cpp_codegen_object_new(CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58_il2cpp_TypeInfo_var);
		CellTreeNode__ctor_mF6169382A1FB53C1F6FFC96BDD121806E2643F07(L_16, L_15, 0, (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58*)NULL, NULL);
		V_0 = L_16;
		// if (this.YIsUpAxis)
		bool L_17 = __this->___YIsUpAxis_17;
		if (!L_17)
		{
			goto IL_01c5;
		}
	}
	{
		// this.Center = new Vector2(transform.position.x, transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), L_20, L_23, /*hidden argument*/NULL);
		__this->___Center_10 = L_24;
		// this.Size = new Vector2(transform.localScale.x, transform.localScale.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_25, NULL);
		float L_27 = L_26.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_28, NULL);
		float L_30 = L_29.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), L_27, L_30, /*hidden argument*/NULL);
		__this->___Size_11 = L_31;
		// rootNode.Center = new Vector3(this.Center.x, this.Center.y, 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_32 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___Center_10);
		float L_34 = L_33->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___Center_10);
		float L_36 = L_35->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), L_34, L_36, (0.0f), /*hidden argument*/NULL);
		L_32->___Center_1 = L_37;
		// rootNode.Size = new Vector3(this.Size.x, this.Size.y, 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_38 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___Size_11);
		float L_40 = L_39->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___Size_11);
		float L_42 = L_41->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_40, L_42, (0.0f), /*hidden argument*/NULL);
		L_38->___Size_2 = L_43;
		// rootNode.TopLeft = new Vector3((this.Center.x - (this.Size.x / 2.0f)), (this.Center.y - (this.Size.y / 2.0f)), 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_44 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->___Center_10);
		float L_46 = L_45->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = (&__this->___Size_11);
		float L_48 = L_47->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&__this->___Center_10);
		float L_50 = L_49->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_51 = (&__this->___Size_11);
		float L_52 = L_51->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_53), ((float)il2cpp_codegen_subtract(L_46, ((float)(L_48/(2.0f))))), ((float)il2cpp_codegen_subtract(L_50, ((float)(L_52/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		L_44->___TopLeft_3 = L_53;
		// rootNode.BottomRight = new Vector3((this.Center.x + (this.Size.x / 2.0f)), (this.Center.y + (this.Size.y / 2.0f)), 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_54 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___Center_10);
		float L_56 = L_55->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___Size_11);
		float L_58 = L_57->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&__this->___Center_10);
		float L_60 = L_59->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&__this->___Size_11);
		float L_62 = L_61->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), ((float)il2cpp_codegen_add(L_56, ((float)(L_58/(2.0f))))), ((float)il2cpp_codegen_add(L_60, ((float)(L_62/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		L_54->___BottomRight_4 = L_63;
		goto IL_02fb;
	}

IL_01c5:
	{
		// this.Center = new Vector2(transform.position.x, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_64, NULL);
		float L_66 = L_65.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		float L_69 = L_68.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_70), L_66, L_69, /*hidden argument*/NULL);
		__this->___Center_10 = L_70;
		// this.Size = new Vector2(transform.localScale.x, transform.localScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_71, NULL);
		float L_73 = L_72.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_74, NULL);
		float L_76 = L_75.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_77), L_73, L_76, /*hidden argument*/NULL);
		__this->___Size_11 = L_77;
		// rootNode.Center = new Vector3(this.Center.x, 0.0f, this.Center.y);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_78 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_79 = (&__this->___Center_10);
		float L_80 = L_79->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = (&__this->___Center_10);
		float L_82 = L_81->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), L_80, (0.0f), L_82, /*hidden argument*/NULL);
		L_78->___Center_1 = L_83;
		// rootNode.Size = new Vector3(this.Size.x, 0.0f, this.Size.y);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_84 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_85 = (&__this->___Size_11);
		float L_86 = L_85->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_87 = (&__this->___Size_11);
		float L_88 = L_87->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), L_86, (0.0f), L_88, /*hidden argument*/NULL);
		L_84->___Size_2 = L_89;
		// rootNode.TopLeft = new Vector3((this.Center.x - (this.Size.x / 2.0f)), 0.0f, (this.Center.y - (this.Size.y / 2.0f)));
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_90 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = (&__this->___Center_10);
		float L_92 = L_91->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_93 = (&__this->___Size_11);
		float L_94 = L_93->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_95 = (&__this->___Center_10);
		float L_96 = L_95->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_97 = (&__this->___Size_11);
		float L_98 = L_97->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		memset((&L_99), 0, sizeof(L_99));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_99), ((float)il2cpp_codegen_subtract(L_92, ((float)(L_94/(2.0f))))), (0.0f), ((float)il2cpp_codegen_subtract(L_96, ((float)(L_98/(2.0f))))), /*hidden argument*/NULL);
		L_90->___TopLeft_3 = L_99;
		// rootNode.BottomRight = new Vector3((this.Center.x + (this.Size.x / 2.0f)), 0.0f, (this.Center.y + (this.Size.y / 2.0f)));
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_100 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_101 = (&__this->___Center_10);
		float L_102 = L_101->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_103 = (&__this->___Size_11);
		float L_104 = L_103->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_105 = (&__this->___Center_10);
		float L_106 = L_105->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_107 = (&__this->___Size_11);
		float L_108 = L_107->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_109), ((float)il2cpp_codegen_add(L_102, ((float)(L_104/(2.0f))))), (0.0f), ((float)il2cpp_codegen_add(L_106, ((float)(L_108/(2.0f))))), /*hidden argument*/NULL);
		L_100->___BottomRight_4 = L_109;
	}

IL_02fb:
	{
		// this.CreateChildCells(rootNode, 1);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_110 = V_0;
		CullArea_CreateChildCells_mAB69F47610FFA9DAAA8BEFB6480A6FE7BF5D047C(__this, L_110, 1, NULL);
		// this.CellTree = new CellTree(rootNode);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_111 = V_0;
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_112 = (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B*)il2cpp_codegen_object_new(CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B_il2cpp_TypeInfo_var);
		CellTree__ctor_mE0964361F9C5F67A9BB9F04967C5E58108843DA2(L_112, L_111, NULL);
		CullArea_set_CellTree_mD8FED6BDC59982FFF163F90316CA3F02E7EF3985_inline(__this, L_112, NULL);
		// this.RecreateCellHierarchy = false;
		__this->___RecreateCellHierarchy_18 = (bool)0;
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::CreateChildCells(Photon.Pun.UtilityScripts.CellTreeNode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_CreateChildCells_mAB69F47610FFA9DAAA8BEFB6480A6FE7BF5D047C (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___parent0, int32_t ___cellLevelInHierarchy1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* V_7 = NULL;
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	uint8_t G_B6_0 = 0x0;
	uint8_t G_B5_0 = 0x0;
	int32_t G_B7_0 = 0;
	uint8_t G_B7_1 = 0x0;
	{
		// if (cellLevelInHierarchy > this.NumberOfSubdivisions)
		int32_t L_0 = ___cellLevelInHierarchy1;
		int32_t L_1 = __this->___NumberOfSubdivisions_13;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// int rowCount = (int)this.Subdivisions[(cellLevelInHierarchy - 1)].x;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = __this->___Subdivisions_12;
		int32_t L_3 = ___cellLevelInHierarchy1;
		float L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_3, 1)))))->___x_0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
		// int columnCount = (int)this.Subdivisions[(cellLevelInHierarchy - 1)].y;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = __this->___Subdivisions_12;
		int32_t L_6 = ___cellLevelInHierarchy1;
		float L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_6, 1)))))->___y_1;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		// float startX = parent.Center.x - (parent.Size.x / 2.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_8 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___Center_1);
		float L_10 = L_9->___x_2;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_11 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___Size_2);
		float L_13 = L_12->___x_2;
		V_2 = ((float)il2cpp_codegen_subtract(L_10, ((float)(L_13/(2.0f)))));
		// float width = parent.Size.x / rowCount;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_14 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&L_14->___Size_2);
		float L_16 = L_15->___x_2;
		int32_t L_17 = V_0;
		V_3 = ((float)(L_16/((float)L_17)));
		// for (int row = 0; row < rowCount; ++row)
		V_4 = 0;
		goto IL_024b;
	}

IL_0069:
	{
		// for (int column = 0; column < columnCount; ++column)
		V_5 = 0;
		goto IL_023d;
	}

IL_0071:
	{
		// float xPos = startX + (row * width) + (width / 2.0f);
		float L_18 = V_2;
		int32_t L_19 = V_4;
		float L_20 = V_3;
		float L_21 = V_3;
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_multiply(((float)L_19), L_20)))), ((float)(L_21/(2.0f)))));
		// CellTreeNode node = new CellTreeNode(this.idCounter++, (this.NumberOfSubdivisions == cellLevelInHierarchy) ? CellTreeNode.ENodeType.Leaf : CellTreeNode.ENodeType.Node, parent);
		uint8_t L_22 = __this->___idCounter_19;
		V_8 = L_22;
		uint8_t L_23 = V_8;
		__this->___idCounter_19 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 1)));
		uint8_t L_24 = V_8;
		int32_t L_25 = __this->___NumberOfSubdivisions_13;
		int32_t L_26 = ___cellLevelInHierarchy1;
		G_B5_0 = L_24;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			G_B6_0 = L_24;
			goto IL_00a3;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B7_0 = 2;
		G_B7_1 = G_B6_0;
	}

IL_00a4:
	{
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_27 = ___parent0;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_28 = (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58*)il2cpp_codegen_object_new(CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58_il2cpp_TypeInfo_var);
		CellTreeNode__ctor_mF6169382A1FB53C1F6FFC96BDD121806E2643F07(L_28, G_B7_1, G_B7_0, L_27, NULL);
		V_7 = L_28;
		// if (this.YIsUpAxis)
		bool L_29 = __this->___YIsUpAxis_17;
		if (!L_29)
		{
			goto IL_0170;
		}
	}
	{
		// float startY = parent.Center.y - (parent.Size.y / 2.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_30 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&L_30->___Center_1);
		float L_32 = L_31->___y_3;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_33 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&L_33->___Size_2);
		float L_35 = L_34->___y_3;
		// float height = parent.Size.y / columnCount;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_36 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&L_36->___Size_2);
		float L_38 = L_37->___y_3;
		int32_t L_39 = V_1;
		V_9 = ((float)(L_38/((float)L_39)));
		// float yPos = startY + (column * height) + (height / 2.0f);
		int32_t L_40 = V_5;
		float L_41 = V_9;
		float L_42 = V_9;
		V_10 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_32, ((float)(L_35/(2.0f))))), ((float)il2cpp_codegen_multiply(((float)L_40), L_41)))), ((float)(L_42/(2.0f)))));
		// node.Center = new Vector3(xPos, yPos, 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_43 = V_7;
		float L_44 = V_6;
		float L_45 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), L_44, L_45, (0.0f), /*hidden argument*/NULL);
		L_43->___Center_1 = L_46;
		// node.Size = new Vector3(width, height, 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_47 = V_7;
		float L_48 = V_3;
		float L_49 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), L_48, L_49, (0.0f), /*hidden argument*/NULL);
		L_47->___Size_2 = L_50;
		// node.TopLeft = new Vector3(xPos - (width / 2.0f), yPos - (height / 2.0f), 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_51 = V_7;
		float L_52 = V_6;
		float L_53 = V_3;
		float L_54 = V_10;
		float L_55 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_56), ((float)il2cpp_codegen_subtract(L_52, ((float)(L_53/(2.0f))))), ((float)il2cpp_codegen_subtract(L_54, ((float)(L_55/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		L_51->___TopLeft_3 = L_56;
		// node.BottomRight = new Vector3(xPos + (width / 2.0f), yPos + (height / 2.0f), 0.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_57 = V_7;
		float L_58 = V_6;
		float L_59 = V_3;
		float L_60 = V_10;
		float L_61 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), ((float)il2cpp_codegen_add(L_58, ((float)(L_59/(2.0f))))), ((float)il2cpp_codegen_add(L_60, ((float)(L_61/(2.0f))))), (0.0f), /*hidden argument*/NULL);
		L_57->___BottomRight_4 = L_62;
		goto IL_0224;
	}

IL_0170:
	{
		// float startZ = parent.Center.z - (parent.Size.z / 2.0f);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_63 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&L_63->___Center_1);
		float L_65 = L_64->___z_4;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_66 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&L_66->___Size_2);
		float L_68 = L_67->___z_4;
		// float depth = parent.Size.z / columnCount;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_69 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = (&L_69->___Size_2);
		float L_71 = L_70->___z_4;
		int32_t L_72 = V_1;
		V_11 = ((float)(L_71/((float)L_72)));
		// float zPos = startZ + (column * depth) + (depth / 2.0f);
		int32_t L_73 = V_5;
		float L_74 = V_11;
		float L_75 = V_11;
		V_12 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_65, ((float)(L_68/(2.0f))))), ((float)il2cpp_codegen_multiply(((float)L_73), L_74)))), ((float)(L_75/(2.0f)))));
		// node.Center = new Vector3(xPos, 0.0f, zPos);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_76 = V_7;
		float L_77 = V_6;
		float L_78 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_79), L_77, (0.0f), L_78, /*hidden argument*/NULL);
		L_76->___Center_1 = L_79;
		// node.Size = new Vector3(width, 0.0f, depth);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_80 = V_7;
		float L_81 = V_3;
		float L_82 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), L_81, (0.0f), L_82, /*hidden argument*/NULL);
		L_80->___Size_2 = L_83;
		// node.TopLeft = new Vector3(xPos - (width / 2.0f), 0.0f, zPos - (depth / 2.0f));
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_84 = V_7;
		float L_85 = V_6;
		float L_86 = V_3;
		float L_87 = V_12;
		float L_88 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), ((float)il2cpp_codegen_subtract(L_85, ((float)(L_86/(2.0f))))), (0.0f), ((float)il2cpp_codegen_subtract(L_87, ((float)(L_88/(2.0f))))), /*hidden argument*/NULL);
		L_84->___TopLeft_3 = L_89;
		// node.BottomRight = new Vector3(xPos + (width / 2.0f), 0.0f, zPos + (depth / 2.0f));
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_90 = V_7;
		float L_91 = V_6;
		float L_92 = V_3;
		float L_93 = V_12;
		float L_94 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_95), ((float)il2cpp_codegen_add(L_91, ((float)(L_92/(2.0f))))), (0.0f), ((float)il2cpp_codegen_add(L_93, ((float)(L_94/(2.0f))))), /*hidden argument*/NULL);
		L_90->___BottomRight_4 = L_95;
	}

IL_0224:
	{
		// parent.AddChild(node);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_96 = ___parent0;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_97 = V_7;
		CellTreeNode_AddChild_mFB74EC89F3B3B6E6B7DC785DACBB5632688F476D(L_96, L_97, NULL);
		// this.CreateChildCells(node, (cellLevelInHierarchy + 1));
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_98 = V_7;
		int32_t L_99 = ___cellLevelInHierarchy1;
		CullArea_CreateChildCells_mAB69F47610FFA9DAAA8BEFB6480A6FE7BF5D047C(__this, L_98, ((int32_t)il2cpp_codegen_add(L_99, 1)), NULL);
		// for (int column = 0; column < columnCount; ++column)
		int32_t L_100 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_023d:
	{
		// for (int column = 0; column < columnCount; ++column)
		int32_t L_101 = V_5;
		int32_t L_102 = V_1;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_0071;
		}
	}
	{
		// for (int row = 0; row < rowCount; ++row)
		int32_t L_103 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_024b:
	{
		// for (int row = 0; row < rowCount; ++row)
		int32_t L_104 = V_4;
		int32_t L_105 = V_0;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_0069;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::DrawCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea_DrawCells_m4FD268DE4FEDB67E3ECA960291CA9C5755130C5B (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// if ((this.CellTree != null) && (this.CellTree.RootNode != null))
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_0;
		L_0 = CullArea_get_CellTree_mEA2517BBE4842D9E02F609B901FB3E2E4CB6F6B1_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_1;
		L_1 = CullArea_get_CellTree_mEA2517BBE4842D9E02F609B901FB3E2E4CB6F6B1_inline(__this, NULL);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_2;
		L_2 = CellTree_get_RootNode_mF8BF401C5A36413F3F9F546C9AA925FFF1F34A20_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// this.CellTree.RootNode.Draw();
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_3;
		L_3 = CullArea_get_CellTree_mEA2517BBE4842D9E02F609B901FB3E2E4CB6F6B1_inline(__this, NULL);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_4;
		L_4 = CellTree_get_RootNode_mF8BF401C5A36413F3F9F546C9AA925FFF1F34A20_inline(L_3, NULL);
		CellTreeNode_Draw_m436C3E676745EC0672C28B0B10136AE0D4CC689E(L_4, NULL);
		return;
	}

IL_0026:
	{
		// this.RecreateCellHierarchy = true;
		__this->___RecreateCellHierarchy_18 = (bool)1;
		// }
		return;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.CullArea::IsCellCountAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CullArea_IsCellCountAllowed_m7593E3C7C41463D15C5762E4E07A530FEA0762B7 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// int horizontalCells = 1;
		V_0 = 1;
		// int verticalCells = 1;
		V_1 = 1;
		// foreach (Vector2 v in this.Subdivisions)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->___Subdivisions_12;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0032;
	}

IL_000f:
	{
		// foreach (Vector2 v in this.Subdivisions)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// horizontalCells *= (int)v.x;
		int32_t L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_4;
		float L_7 = L_6.___x_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_5, il2cpp_codegen_cast_double_to_int<int32_t>(L_7)));
		// verticalCells *= (int)v.y;
		int32_t L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_4;
		float L_10 = L_9.___y_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_8, il2cpp_codegen_cast_double_to_int<int32_t>(L_10)));
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		// foreach (Vector2 v in this.Subdivisions)
		int32_t L_12 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// this.CellCount = horizontalCells * verticalCells;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		CullArea_set_CellCount_m1258F893AA2D32E75CC00FA88AA8120521C28E7F_inline(__this, ((int32_t)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		// return (this.CellCount <= (MAX_NUMBER_OF_ALLOWED_CELLS - this.FIRST_GROUP_ID));
		int32_t L_16;
		L_16 = CullArea_get_CellCount_m9D159D2CA3563F1C8C4DBE0EA7C83489A86BDF0E_inline(__this, NULL);
		uint8_t L_17 = __this->___FIRST_GROUP_ID_6;
		return (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)250), (int32_t)L_17))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<System.Byte> Photon.Pun.UtilityScripts.CullArea::GetActiveCells(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* CullArea_GetActiveCells_m76ECE2396EAC2299976A30D4E9E3514EC9B79A24 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	{
		// List<byte> activeCells = new List<byte>(0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B(L_0, 0, List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		V_0 = L_0;
		// this.CellTree.RootNode.GetActiveCells(activeCells, this.YIsUpAxis, position);
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_1;
		L_1 = CullArea_get_CellTree_mEA2517BBE4842D9E02F609B901FB3E2E4CB6F6B1_inline(__this, NULL);
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_2;
		L_2 = CellTree_get_RootNode_mF8BF401C5A36413F3F9F546C9AA925FFF1F34A20_inline(L_1, NULL);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = V_0;
		bool L_4 = __this->___YIsUpAxis_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___position0;
		CellTreeNode_GetActiveCells_m0D280F9724B726D7B97E52A1534E57F3656F2F61(L_2, L_3, L_4, L_5, NULL);
		// return activeCells;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = V_0;
		return L_6;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullArea__ctor_m3E80690936D6FFC6523EC03F121263FA2EB586D7 (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____0CA47679A8B48490B35902039B874DC32C465A4B547059C0D941091B7B72CB21_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____3BB048C6BCFB13ADB4230B15FDE86F7FCFA341C302CC263DFC9250D7877BABFB_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____7E8D5B72D290BA59F0EDBE3D6F961EEA1A534C250A6EF2CAC5B85C0C2111735F_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly byte FIRST_GROUP_ID = 1;
		__this->___FIRST_GROUP_ID_6 = (uint8_t)1;
		// public readonly int[] SUBDIVISION_FIRST_LEVEL_ORDER = new int[4] { 0, 1, 1, 1 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____7E8D5B72D290BA59F0EDBE3D6F961EEA1A534C250A6EF2CAC5B85C0C2111735F_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___SUBDIVISION_FIRST_LEVEL_ORDER_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBDIVISION_FIRST_LEVEL_ORDER_7), (void*)L_1);
		// public readonly int[] SUBDIVISION_SECOND_LEVEL_ORDER = new int[8] { 0, 2, 1, 2, 0, 2, 1, 2 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____0CA47679A8B48490B35902039B874DC32C465A4B547059C0D941091B7B72CB21_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		__this->___SUBDIVISION_SECOND_LEVEL_ORDER_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBDIVISION_SECOND_LEVEL_ORDER_8), (void*)L_4);
		// public readonly int[] SUBDIVISION_THIRD_LEVEL_ORDER = new int[12] { 0, 3, 2, 3, 1, 3, 2, 3, 1, 3, 2, 3 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDAFC66B6B2081548ADBC02D6C1B300307C3F8239____3BB048C6BCFB13ADB4230B15FDE86F7FCFA341C302CC263DFC9250D7877BABFB_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		__this->___SUBDIVISION_THIRD_LEVEL_ORDER_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBDIVISION_THIRD_LEVEL_ORDER_9), (void*)L_7);
		// public Vector2 Size = new Vector2(25.0f, 25.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (25.0f), (25.0f), /*hidden argument*/NULL);
		__this->___Size_11 = L_9;
		// public Vector2[] Subdivisions = new Vector2[MAX_NUMBER_OF_SUBDIVISIONS];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___Subdivisions_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Subdivisions_12), (void*)L_10);
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
// Photon.Pun.UtilityScripts.CellTreeNode Photon.Pun.UtilityScripts.CellTree::get_RootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* CellTree_get_RootNode_mF8BF401C5A36413F3F9F546C9AA925FFF1F34A20 (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, const RuntimeMethod* method) 
{
	{
		// public CellTreeNode RootNode { get; private set; }
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_0 = __this->___U3CRootNodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Photon.Pun.UtilityScripts.CellTree::set_RootNode(Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTree_set_RootNode_mCA8B8079714739B7BEB711A4E4262356D0C9D3A0 (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___value0, const RuntimeMethod* method) 
{
	{
		// public CellTreeNode RootNode { get; private set; }
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_0 = ___value0;
		__this->___U3CRootNodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRootNodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CellTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTree__ctor_mEAA059A8227A1627162A977AF26B3D559DA99433 (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, const RuntimeMethod* method) 
{
	{
		// public CellTree()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CellTree::.ctor(Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTree__ctor_mE0964361F9C5F67A9BB9F04967C5E58108843DA2 (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___root0, const RuntimeMethod* method) 
{
	{
		// public CellTree(CellTreeNode root)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.RootNode = root;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_0 = ___root0;
		CellTree_set_RootNode_mCA8B8079714739B7BEB711A4E4262356D0C9D3A0_inline(__this, L_0, NULL);
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
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode__ctor_m998419FC1BE5179D17962AFA2C572BF4D7239286 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, const RuntimeMethod* method) 
{
	{
		// public CellTreeNode()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::.ctor(System.Byte,Photon.Pun.UtilityScripts.CellTreeNode/ENodeType,Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode__ctor_mF6169382A1FB53C1F6FFC96BDD121806E2643F07 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, uint8_t ___id0, int32_t ___nodeType1, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___parent2, const RuntimeMethod* method) 
{
	{
		// public CellTreeNode(byte id, ENodeType nodeType, CellTreeNode parent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Id = id;
		uint8_t L_0 = ___id0;
		__this->___Id_0 = L_0;
		// this.NodeType = nodeType;
		int32_t L_1 = ___nodeType1;
		__this->___NodeType_5 = L_1;
		// this.Parent = parent;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_2 = ___parent2;
		__this->___Parent_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Parent_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::AddChild(Photon.Pun.UtilityScripts.CellTreeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode_AddChild_mFB74EC89F3B3B6E6B7DC785DACBB5632688F476D (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m459F94CAEDE56073FF26D86674008D78837090B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4968F61EF536BA01579BA60B189E57B506C68176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.Childs == null)
		List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* L_0 = __this->___Childs_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// this.Childs = new List<CellTreeNode>(1);
		List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* L_1 = (List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B*)il2cpp_codegen_object_new(List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B_il2cpp_TypeInfo_var);
		List_1__ctor_m4968F61EF536BA01579BA60B189E57B506C68176(L_1, 1, List_1__ctor_m4968F61EF536BA01579BA60B189E57B506C68176_RuntimeMethod_var);
		__this->___Childs_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Childs_7), (void*)L_1);
	}

IL_0014:
	{
		// this.Childs.Add(child);
		List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* L_2 = __this->___Childs_7;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_3 = ___child0;
		List_1_Add_m459F94CAEDE56073FF26D86674008D78837090B8_inline(L_2, L_3, List_1_Add_m459F94CAEDE56073FF26D86674008D78837090B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode_Draw_m436C3E676745EC0672C28B0B10136AE0D4CC689E (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CellTreeNode::GetActiveCells(System.Collections.Generic.List`1<System.Byte>,System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellTreeNode_GetActiveCells_m0D280F9724B726D7B97E52A1534E57F3656F2F61 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___activeCells0, bool ___yIsUpAxis1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m53A24C44AB6CB8A0DA44F185D48FC82FABB17A45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFEBC26DDD5CD21774175C1716AF9658AB2729943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F19B57F9182A5DB7B6B4F3D8C71F244AD141C6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m91A7CF9EDC5B71A3E4A8080776934EBC464EE424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* V_1 = NULL;
	{
		// if (this.NodeType != ENodeType.Leaf)
		int32_t L_0 = __this->___NodeType_5;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		// foreach (CellTreeNode node in this.Childs)
		List_1_t5F343B0F1D8A66BB45410EA63E92E86E16467E5B* L_1 = __this->___Childs_7;
		Enumerator_t1542A34146B48D90D130DAAA70EE6596FF4D4A3C L_2;
		L_2 = List_1_GetEnumerator_m91A7CF9EDC5B71A3E4A8080776934EBC464EE424(L_1, List_1_GetEnumerator_m91A7CF9EDC5B71A3E4A8080776934EBC464EE424_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m53A24C44AB6CB8A0DA44F185D48FC82FABB17A45((&V_0), Enumerator_Dispose_m53A24C44AB6CB8A0DA44F185D48FC82FABB17A45_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				// foreach (CellTreeNode node in this.Childs)
				CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_3;
				L_3 = Enumerator_get_Current_m6F19B57F9182A5DB7B6B4F3D8C71F244AD141C6F_inline((&V_0), Enumerator_get_Current_m6F19B57F9182A5DB7B6B4F3D8C71F244AD141C6F_RuntimeMethod_var);
				// node.GetActiveCells(activeCells, yIsUpAxis, position);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = ___activeCells0;
				bool L_5 = ___yIsUpAxis1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position2;
				CellTreeNode_GetActiveCells_m0D280F9724B726D7B97E52A1534E57F3656F2F61(L_3, L_4, L_5, L_6, NULL);
			}

IL_0026_1:
			{
				// foreach (CellTreeNode node in this.Childs)
				bool L_7;
				L_7 = Enumerator_MoveNext_mFEBC26DDD5CD21774175C1716AF9658AB2729943((&V_0), Enumerator_MoveNext_mFEBC26DDD5CD21774175C1716AF9658AB2729943_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// if (this.IsPointNearCell(yIsUpAxis, position))
		bool L_8 = ___yIsUpAxis1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___position2;
		bool L_10;
		L_10 = CellTreeNode_IsPointNearCell_mCEADDFA9CE3717BE1EEE679BEC629311811AFC08(__this, L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008d;
		}
	}
	{
		// if (this.IsPointInsideCell(yIsUpAxis, position))
		bool L_11 = ___yIsUpAxis1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position2;
		bool L_13;
		L_13 = CellTreeNode_IsPointInsideCell_mFA7F5E7F6404A27FD86FF2812003A0E48DC22058(__this, L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		// activeCells.Insert(0, this.Id);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_14 = ___activeCells0;
		uint8_t L_15 = __this->___Id_0;
		List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4(L_14, 0, L_15, List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var);
		// CellTreeNode p = this.Parent;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_16 = __this->___Parent_6;
		V_1 = L_16;
		goto IL_007d;
	}

IL_0069:
	{
		// activeCells.Insert(0, p.Id);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_17 = ___activeCells0;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_18 = V_1;
		uint8_t L_19 = L_18->___Id_0;
		List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4(L_17, 0, L_19, List_1_Insert_m340AA5688FC1B07E49081519A407B6D09B49BAE4_RuntimeMethod_var);
		// p = p.Parent;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_20 = V_1;
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_21 = L_20->___Parent_6;
		V_1 = L_21;
	}

IL_007d:
	{
		// while (p != null)
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_22 = V_1;
		if (L_22)
		{
			goto IL_0069;
		}
	}
	{
		return;
	}

IL_0081:
	{
		// activeCells.Add(this.Id);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_23 = ___activeCells0;
		uint8_t L_24 = __this->___Id_0;
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_23, L_24, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.CellTreeNode::IsPointInsideCell(System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CellTreeNode_IsPointInsideCell_mFA7F5E7F6404A27FD86FF2812003A0E48DC22058 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, bool ___yIsUpAxis0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	{
		// if ((point.x < this.TopLeft.x) || (point.x > this.BottomRight.x))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___point1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___TopLeft_3);
		float L_3 = L_2->___x_2;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___point1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___BottomRight_4);
		float L_7 = L_6->___x_2;
		if ((!(((float)L_5) > ((float)L_7))))
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// if (yIsUpAxis)
		bool L_8 = ___yIsUpAxis0;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// if ((point.y >= this.TopLeft.y) && (point.y <= this.BottomRight.y))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___point1;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___TopLeft_3);
		float L_12 = L_11->___y_3;
		if ((!(((float)L_10) >= ((float)L_12))))
		{
			goto IL_007b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___point1;
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___BottomRight_4);
		float L_16 = L_15->___y_3;
		if ((!(((float)L_14) <= ((float)L_16))))
		{
			goto IL_007b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0053:
	{
		// if ((point.z >= this.TopLeft.z) && (point.z <= this.BottomRight.z))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___point1;
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___TopLeft_3);
		float L_20 = L_19->___z_4;
		if ((!(((float)L_18) >= ((float)L_20))))
		{
			goto IL_007b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___point1;
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___BottomRight_4);
		float L_24 = L_23->___z_4;
		if ((!(((float)L_22) <= ((float)L_24))))
		{
			goto IL_007b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.CellTreeNode::IsPointNearCell(System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CellTreeNode_IsPointNearCell_mCEADDFA9CE3717BE1EEE679BEC629311811AFC08 (CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* __this, bool ___yIsUpAxis0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.maxDistance == 0.0f)
		float L_0 = __this->___maxDistance_8;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// this.maxDistance = (this.Size.x + this.Size.y + this.Size.z) / 2.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___Size_2);
		float L_2 = L_1->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___Size_2);
		float L_4 = L_3->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___Size_2);
		float L_6 = L_5->___z_4;
		__this->___maxDistance_8 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_2, L_4)), L_6))/(2.0f)));
	}

IL_003c:
	{
		// return ((point - this.Center).sqrMagnitude <= (this.maxDistance * this.maxDistance));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___Center_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		float L_11 = __this->___maxDistance_8;
		float L_12 = __this->___maxDistance_8;
		return (bool)((((int32_t)((!(((float)L_10) <= ((float)((float)il2cpp_codegen_multiply(L_11, L_12)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Photon.Pun.UtilityScripts.CullingHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler_OnEnable_m0B7E649AAB1B9CFF0E3E1508C364E00B29CC52DF (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9_m41F99784FBAB2080541F5F361A2AA1A7237CE4BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.pView == null)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0 = __this->___pView_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// this.pView = GetComponent<PhotonView>();
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_2;
		L_2 = Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2(__this, Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		__this->___pView_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pView_8), (void*)L_2);
		// if (!this.pView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_3 = __this->___pView_8;
		bool L_4;
		L_4 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648(L_3, NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// return;
		return;
	}

IL_0028:
	{
		// if (this.cullArea == null)
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_5 = __this->___cullArea_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// this.cullArea = FindObjectOfType<CullArea>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_7;
		L_7 = Object_FindObjectOfType_TisCullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9_m41F99784FBAB2080541F5F361A2AA1A7237CE4BF(Object_FindObjectOfType_TisCullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9_m41F99784FBAB2080541F5F361A2AA1A7237CE4BF_RuntimeMethod_var);
		__this->___cullArea_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cullArea_5), (void*)L_7);
	}

IL_0041:
	{
		// this.previousActiveCells = new List<byte>(0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_8 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B(L_8, 0, List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		__this->___previousActiveCells_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousActiveCells_6), (void*)L_8);
		// this.activeCells = new List<byte>(0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_9 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B(L_9, 0, List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		__this->___activeCells_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeCells_7), (void*)L_9);
		// this.currentPosition = this.lastPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11;
		V_0 = L_12;
		__this->___lastPosition_9 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		__this->___currentPosition_10 = L_13;
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullingHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler_Start_m702526348A90D789948599086B369C78E4C2AEE6 (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.pView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0 = __this->___pView_8;
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		// if (this.cullArea.NumberOfSubdivisions == 0)
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_3 = __this->___cullArea_5;
		int32_t L_4 = L_3->___NumberOfSubdivisions_13;
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		// this.pView.Group = this.cullArea.FIRST_GROUP_ID;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_5 = __this->___pView_8;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_6 = __this->___cullArea_5;
		uint8_t L_7 = L_6->___FIRST_GROUP_ID_6;
		L_5->___Group_5 = L_7;
		// PhotonNetwork.SetInterestGroups(this.cullArea.FIRST_GROUP_ID, true);
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_8 = __this->___cullArea_5;
		uint8_t L_9 = L_8->___FIRST_GROUP_ID_6;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_SetInterestGroups_m387F9CD251F06EC02F8AA4E1C53C1951D046AA74(L_9, (bool)1, NULL);
		return;
	}

IL_004a:
	{
		// this.pView.ObservedComponents.Add(this);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_10 = __this->___pView_8;
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_11 = L_10->___ObservedComponents_15;
		List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_inline(L_11, __this, List_1_Add_mBBDDD9044799C1C54D82DDC7F4F60A0BD9142BBB_RuntimeMethod_var);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullingHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler_Update_m1018B3E496E4407ABEDC378C762096A2621D2E0D (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.pView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0 = __this->___pView_8;
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// this.lastPosition = this.currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___currentPosition_10;
		__this->___lastPosition_9 = L_2;
		// this.currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___currentPosition_10 = L_4;
		// if (this.currentPosition != this.lastPosition)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___currentPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___lastPosition_9;
		bool L_7;
		L_7 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// if (this.HaveActiveCellsChanged())
		bool L_8;
		L_8 = CullingHandler_HaveActiveCellsChanged_mE1D7601102603FEC303BBFA8175CA561103C2829(__this, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// this.UpdateInterestGroups();
		CullingHandler_UpdateInterestGroups_m402FD9095799E5D31CDEC2C5104F6BC0E616DD99(__this, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullingHandler::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler_OnGUI_m439325343CD5C7C576CA4D38D2EC5E17223863AA (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C610EA1DFC306AC03854BBEFDFBBA8019791B8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral937E439316196F8095DA30BC295FA6E33F878139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89F7B3B7E3BAF17B507D3B9FB97AA9E49B7AB50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6185BC6CFB060F14B80A3413D7055D2D4806A43);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		// if (!this.pView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0 = __this->___pView_8;
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// string subscribedAndActiveCells = "Inside cells:\n";
		V_0 = _stringLiteral6C610EA1DFC306AC03854BBEFDFBBA8019791B8E;
		// string subscribedCells = "Subscribed cells:\n";
		V_1 = _stringLiteralF6185BC6CFB060F14B80A3413D7055D2D4806A43;
		// for (int index = 0; index < this.activeCells.Count; ++index)
		V_2 = 0;
		goto IL_0070;
	}

IL_001e:
	{
		// if (index <= this.cullArea.NumberOfSubdivisions)
		int32_t L_2 = V_2;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_3 = __this->___cullArea_5;
		int32_t L_4 = L_3->___NumberOfSubdivisions_13;
		if ((((int32_t)L_2) > ((int32_t)L_4)))
		{
			goto IL_004c;
		}
	}
	{
		// subscribedAndActiveCells += this.activeCells[index] + " | ";
		String_t* L_5 = V_0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_6 = __this->___activeCells_7;
		int32_t L_7 = V_2;
		uint8_t L_8;
		L_8 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_6, L_7, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_3 = L_8;
		String_t* L_9;
		L_9 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_3), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_5, L_9, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136, NULL);
		V_0 = L_10;
	}

IL_004c:
	{
		// subscribedCells += this.activeCells[index] + " | ";
		String_t* L_11 = V_1;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = __this->___activeCells_7;
		int32_t L_13 = V_2;
		uint8_t L_14;
		L_14 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_12, L_13, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_3 = L_14;
		String_t* L_15;
		L_15 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_3), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_11, L_15, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136, NULL);
		V_1 = L_16;
		// for (int index = 0; index < this.activeCells.Count; ++index)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0070:
	{
		// for (int index = 0; index < this.activeCells.Count; ++index)
		int32_t L_18 = V_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_19 = __this->___activeCells_7;
		int32_t L_20;
		L_20 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_19, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001e;
		}
	}
	{
		// GUI.Label(new Rect(20.0f, Screen.height - 120.0f, 200.0f, 40.0f), "<color=white>PhotonView Group: " + this.pView.Group + "</color>", new GUIStyle() { alignment = TextAnchor.UpperLeft, fontSize = 16 });
		int32_t L_21;
		L_21 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		memset((&L_22), 0, sizeof(L_22));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (20.0f), ((float)il2cpp_codegen_subtract(((float)L_21), (120.0f))), (200.0f), (40.0f), /*hidden argument*/NULL);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_23 = __this->___pView_8;
		uint8_t* L_24 = (&L_23->___Group_5);
		String_t* L_25;
		L_25 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4(L_24, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral937E439316196F8095DA30BC295FA6E33F878139, L_25, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_27 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_27, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_28 = L_27;
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_28, 0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_29 = L_28;
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_29, ((int32_t)16), NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m7A2F92799F7D0D0C56D18D0F8BAE77BC9BDCAC31(L_22, L_26, L_29, NULL);
		// GUI.Label(new Rect(20.0f, Screen.height - 100.0f, 200.0f, 40.0f), "<color=white>" + subscribedAndActiveCells + "</color>", new GUIStyle() { alignment = TextAnchor.UpperLeft, fontSize = 16 });
		int32_t L_30;
		L_30 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_31;
		memset((&L_31), 0, sizeof(L_31));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_31), (20.0f), ((float)il2cpp_codegen_subtract(((float)L_30), (100.0f))), (200.0f), (40.0f), /*hidden argument*/NULL);
		String_t* L_32 = V_0;
		String_t* L_33;
		L_33 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralD89F7B3B7E3BAF17B507D3B9FB97AA9E49B7AB50, L_32, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_34 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_34, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_35 = L_34;
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_35, 0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36 = L_35;
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_36, ((int32_t)16), NULL);
		GUI_Label_m7A2F92799F7D0D0C56D18D0F8BAE77BC9BDCAC31(L_31, L_33, L_36, NULL);
		// GUI.Label(new Rect(20.0f, Screen.height - 60.0f, 200.0f, 40.0f), "<color=white>" + subscribedCells + "</color>", new GUIStyle() { alignment = TextAnchor.UpperLeft, fontSize = 16 });
		int32_t L_37;
		L_37 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_38;
		memset((&L_38), 0, sizeof(L_38));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_38), (20.0f), ((float)il2cpp_codegen_subtract(((float)L_37), (60.0f))), (200.0f), (40.0f), /*hidden argument*/NULL);
		String_t* L_39 = V_1;
		String_t* L_40;
		L_40 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralD89F7B3B7E3BAF17B507D3B9FB97AA9E49B7AB50, L_39, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_41 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_41, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_42 = L_41;
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_42, 0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_43 = L_42;
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_43, ((int32_t)16), NULL);
		GUI_Label_m7A2F92799F7D0D0C56D18D0F8BAE77BC9BDCAC31(L_38, L_40, L_43, NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.CullingHandler::HaveActiveCellsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CullingHandler_HaveActiveCellsChanged_mE1D7601102603FEC303BBFA8175CA561103C2829 (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.cullArea.NumberOfSubdivisions == 0)
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_0 = __this->___cullArea_5;
		int32_t L_1 = L_0->___NumberOfSubdivisions_13;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// this.previousActiveCells = new List<byte>(this.activeCells);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2 = __this->___activeCells_7;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_3, L_2, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		__this->___previousActiveCells_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousActiveCells_6), (void*)L_3);
		// this.activeCells = this.cullArea.GetActiveCells(transform.position);
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_4 = __this->___cullArea_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_7;
		L_7 = CullArea_GetActiveCells_m76ECE2396EAC2299976A30D4E9E3514EC9B79A24(L_4, L_6, NULL);
		__this->___activeCells_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeCells_7), (void*)L_7);
		goto IL_0054;
	}

IL_003e:
	{
		// this.activeCells.Add(this.cullArea.FIRST_GROUP_ID);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_8 = __this->___activeCells_7;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_9 = __this->___cullArea_5;
		uint8_t L_10 = L_9->___FIRST_GROUP_ID_6;
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_8, L_10, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_0054:
	{
		// while (this.activeCells.Count <= this.cullArea.NumberOfSubdivisions)
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = __this->___activeCells_7;
		int32_t L_12;
		L_12 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_11, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_13 = __this->___cullArea_5;
		int32_t L_14 = L_13->___NumberOfSubdivisions_13;
		if ((((int32_t)L_12) <= ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		// if (this.activeCells.Count != this.previousActiveCells.Count)
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_15 = __this->___activeCells_7;
		int32_t L_16;
		L_16 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_15, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_17 = __this->___previousActiveCells_6;
		int32_t L_18;
		L_18 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_17, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)L_18)))
		{
			goto IL_0086;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0086:
	{
		// if (this.activeCells[this.cullArea.NumberOfSubdivisions] != this.previousActiveCells[this.cullArea.NumberOfSubdivisions])
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_19 = __this->___activeCells_7;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_20 = __this->___cullArea_5;
		int32_t L_21 = L_20->___NumberOfSubdivisions_13;
		uint8_t L_22;
		L_22 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_19, L_21, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_23 = __this->___previousActiveCells_6;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_24 = __this->___cullArea_5;
		int32_t L_25 = L_24->___NumberOfSubdivisions_13;
		uint8_t L_26;
		L_26 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_23, L_25, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		if ((((int32_t)L_22) == ((int32_t)L_26)))
		{
			goto IL_00b6;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00b6:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullingHandler::UpdateInterestGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler_UpdateInterestGroups_m402FD9095799E5D31CDEC2C5104F6BC0E616DD99 (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7FF5AEA0A7081F270B8FFC65782FCF5C6FCD4A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m62333D089E91797E1B961EF27451EBF82230D916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0x0;
	{
		// List<byte> disable = new List<byte>(0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B(L_0, 0, List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (byte groupId in this.previousActiveCells)
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = __this->___previousActiveCells_6;
		Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA L_2;
		L_2 = List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1(L_1, List_1_GetEnumerator_mB49AC1E6081266034C22194188C90AE90BD804C1_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7FF5AEA0A7081F270B8FFC65782FCF5C6FCD4A62((&V_1), Enumerator_Dispose_m7FF5AEA0A7081F270B8FFC65782FCF5C6FCD4A62_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0015_1:
			{
				// foreach (byte groupId in this.previousActiveCells)
				uint8_t L_3;
				L_3 = Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_inline((&V_1), Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_RuntimeMethod_var);
				V_2 = L_3;
				// if (!this.activeCells.Contains(groupId))
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = __this->___activeCells_7;
				uint8_t L_5 = V_2;
				bool L_6;
				L_6 = List_1_Contains_m62333D089E91797E1B961EF27451EBF82230D916(L_4, L_5, List_1_Contains_m62333D089E91797E1B961EF27451EBF82230D916_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0032_1;
				}
			}
			{
				// disable.Add(groupId);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_7 = V_0;
				uint8_t L_8 = V_2;
				List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_7, L_8, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
			}

IL_0032_1:
			{
				// foreach (byte groupId in this.previousActiveCells)
				bool L_9;
				L_9 = Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7((&V_1), Enumerator_MoveNext_m4839A5F166415BBACD97FEFA8949A79FD353CBC7_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// PhotonNetwork.SetInterestGroups(disable.ToArray(), this.activeCells.ToArray());
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = __this->___activeCells_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_SetInterestGroups_m01692C577977B521A5B5581C3BF13A3FA3A4FC2F(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullingHandler::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler_OnPhotonSerializeView_m7FDA56E43EAE261C0436E0688E5F215B8F98E603 (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___stream0, PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_0018;
	}

IL_0002:
	{
		// this.activeCells.Add(this.cullArea.FIRST_GROUP_ID);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = __this->___activeCells_7;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_1 = __this->___cullArea_5;
		uint8_t L_2 = L_1->___FIRST_GROUP_ID_6;
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_0, L_2, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_0018:
	{
		// while (this.activeCells.Count <= this.cullArea.NumberOfSubdivisions)
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = __this->___activeCells_7;
		int32_t L_4;
		L_4 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_3, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_5 = __this->___cullArea_5;
		int32_t L_6 = L_5->___NumberOfSubdivisions_13;
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0002;
		}
	}
	{
		// if (this.cullArea.NumberOfSubdivisions == 1)
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_7 = __this->___cullArea_5;
		int32_t L_8 = L_7->___NumberOfSubdivisions_13;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		// this.orderIndex = (++this.orderIndex % this.cullArea.SUBDIVISION_FIRST_LEVEL_ORDER.Length);
		int32_t L_9 = __this->___orderIndex_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_0;
		__this->___orderIndex_4 = L_10;
		int32_t L_11 = V_0;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_12 = __this->___cullArea_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___SUBDIVISION_FIRST_LEVEL_ORDER_7;
		__this->___orderIndex_4 = ((int32_t)(L_11%((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// this.pView.Group = this.activeCells[this.cullArea.SUBDIVISION_FIRST_LEVEL_ORDER[this.orderIndex]];
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_14 = __this->___pView_8;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_15 = __this->___activeCells_7;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_16 = __this->___cullArea_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___SUBDIVISION_FIRST_LEVEL_ORDER_7;
		int32_t L_18 = __this->___orderIndex_4;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		uint8_t L_21;
		L_21 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_15, L_20, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		L_14->___Group_5 = L_21;
		return;
	}

IL_008c:
	{
		// else if (this.cullArea.NumberOfSubdivisions == 2)
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_22 = __this->___cullArea_5;
		int32_t L_23 = L_22->___NumberOfSubdivisions_13;
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		// this.orderIndex = (++this.orderIndex % this.cullArea.SUBDIVISION_SECOND_LEVEL_ORDER.Length);
		int32_t L_24 = __this->___orderIndex_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_0;
		__this->___orderIndex_4 = L_25;
		int32_t L_26 = V_0;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_27 = __this->___cullArea_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___SUBDIVISION_SECOND_LEVEL_ORDER_8;
		__this->___orderIndex_4 = ((int32_t)(L_26%((int32_t)(((RuntimeArray*)L_28)->max_length))));
		// this.pView.Group = this.activeCells[this.cullArea.SUBDIVISION_SECOND_LEVEL_ORDER[this.orderIndex]];
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_29 = __this->___pView_8;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_30 = __this->___activeCells_7;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_31 = __this->___cullArea_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = L_31->___SUBDIVISION_SECOND_LEVEL_ORDER_8;
		int32_t L_33 = __this->___orderIndex_4;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		uint8_t L_36;
		L_36 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_30, L_35, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		L_29->___Group_5 = L_36;
		return;
	}

IL_00e8:
	{
		// else if (this.cullArea.NumberOfSubdivisions == 3)
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_37 = __this->___cullArea_5;
		int32_t L_38 = L_37->___NumberOfSubdivisions_13;
		if ((!(((uint32_t)L_38) == ((uint32_t)3))))
		{
			goto IL_0143;
		}
	}
	{
		// this.orderIndex = (++this.orderIndex % this.cullArea.SUBDIVISION_THIRD_LEVEL_ORDER.Length);
		int32_t L_39 = __this->___orderIndex_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_0;
		__this->___orderIndex_4 = L_40;
		int32_t L_41 = V_0;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_42 = __this->___cullArea_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = L_42->___SUBDIVISION_THIRD_LEVEL_ORDER_9;
		__this->___orderIndex_4 = ((int32_t)(L_41%((int32_t)(((RuntimeArray*)L_43)->max_length))));
		// this.pView.Group = this.activeCells[this.cullArea.SUBDIVISION_THIRD_LEVEL_ORDER[this.orderIndex]];
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_44 = __this->___pView_8;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_45 = __this->___activeCells_7;
		CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* L_46 = __this->___cullArea_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = L_46->___SUBDIVISION_THIRD_LEVEL_ORDER_9;
		int32_t L_48 = __this->___orderIndex_4;
		int32_t L_49 = L_48;
		int32_t L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		uint8_t L_51;
		L_51 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_45, L_50, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		L_44->___Group_5 = L_51;
	}

IL_0143:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CullingHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullingHandler__ctor_m647826CC4021F650531E4816FC53271BA884AD7C (CullingHandler_tB6FFCA4A5CACBF7F61BDF4EFFC87DA9DC411CF78* __this, const RuntimeMethod* method) 
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
// ExitGames.Client.Photon.PhotonPeer Photon.Pun.UtilityScripts.PhotonLagSimulationGui::get_Peer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7 (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, const RuntimeMethod* method) 
{
	{
		// public PhotonPeer Peer { get; set; }
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0 = __this->___U3CPeerU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonLagSimulationGui::set_Peer(ExitGames.Client.Photon.PhotonPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonLagSimulationGui_set_Peer_m49E9D5045403F5FC5C426B6D660FF7AD81293CA3 (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___value0, const RuntimeMethod* method) 
{
	{
		// public PhotonPeer Peer { get; set; }
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0 = ___value0;
		__this->___U3CPeerU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPeerU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonLagSimulationGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonLagSimulationGui_Start_mBD291FA4FD38B79476384F61867A0E8DA8BC3228 (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Peer = PhotonNetwork.NetworkingClient.LoadBalancingPeer;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_1;
		L_1 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_0, NULL);
		PhotonLagSimulationGui_set_Peer_m49E9D5045403F5FC5C426B6D660FF7AD81293CA3_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonLagSimulationGui::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonLagSimulationGui_OnGUI_m545E0A699741E65A3740E9C1C126829D933BC9B1 (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonLagSimulationGui_NetSimHasNoPeerWindow_m25D2DDC5F85F556AAECC130E69A328DA72441249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonLagSimulationGui_NetSimWindow_m05DBBA292D86EA173FE184DCABAFA04B490603FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1234B323C09AFE9182581CADB7DA3B1DD7999589);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.Visible)
		bool L_0 = __this->___Visible_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (this.Peer == null)
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_1;
		L_1 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		// this.WindowRect = GUILayout.Window(this.WindowId, this.WindowRect, this.NetSimHasNoPeerWindow, "Netw. Sim.");
		int32_t L_2 = __this->___WindowId_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = __this->___WindowRect_4;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_4 = (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*)il2cpp_codegen_object_new(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71(L_4, __this, (intptr_t)((void*)PhotonLagSimulationGui_NetSimHasNoPeerWindow_m25D2DDC5F85F556AAECC130E69A328DA72441249_RuntimeMethod_var), NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = GUILayout_Window_m6FA538996056AA5E32BCAF3BF2DFBF795AB6B26D(L_2, L_3, L_4, _stringLiteral1234B323C09AFE9182581CADB7DA3B1DD7999589, L_5, NULL);
		__this->___WindowRect_4 = L_6;
		return;
	}

IL_003f:
	{
		// this.WindowRect = GUILayout.Window(this.WindowId, this.WindowRect, this.NetSimWindow, "Netw. Sim.");
		int32_t L_7 = __this->___WindowId_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = __this->___WindowRect_4;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_9 = (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*)il2cpp_codegen_object_new(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71(L_9, __this, (intptr_t)((void*)PhotonLagSimulationGui_NetSimWindow_m05DBBA292D86EA173FE184DCABAFA04B490603FD_RuntimeMethod_var), NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_10;
		L_10 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = GUILayout_Window_m6FA538996056AA5E32BCAF3BF2DFBF795AB6B26D(L_7, L_8, L_9, _stringLiteral1234B323C09AFE9182581CADB7DA3B1DD7999589, L_10, NULL);
		__this->___WindowRect_4 = L_11;
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonLagSimulationGui::NetSimHasNoPeerWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonLagSimulationGui_NetSimHasNoPeerWindow_m25D2DDC5F85F556AAECC130E69A328DA72441249 (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, int32_t ___windowId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7997792A428847741849C2398036C47A179A26F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUILayout.Label("No peer to communicate with. ");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteralC7997792A428847741849C2398036C47A179A26F, L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonLagSimulationGui::NetSimWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonLagSimulationGui_NetSimWindow_m05DBBA292D86EA173FE184DCABAFA04B490603FD (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, int32_t ___windowId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral878F197FC44F2E3B6144F5C31D2BAA30884F3D8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral988D9E32F69C759B2C16830E57D31BA1E330F42C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F37F823C6591E7D635F9B7B9BEF615C5983F9FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF480C8583CFD3A1E38212FC22D0F3D628B8BE269);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF65D9DD240F808922B86DFC7F8C7014C0734E12F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// GUILayout.Label(string.Format("Rtt:{0,4} +/-{1,3}", this.Peer.RoundTripTime, this.Peer.RoundTripTimeVariance));
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0;
		L_0 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		int32_t L_1;
		L_1 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_4;
		L_4 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		int32_t L_5;
		L_5 = PhotonPeer_get_RoundTripTimeVariance_mEB905CCB7BECBD67C8B6BB183F9DF019332F0BCA(L_4, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF480C8583CFD3A1E38212FC22D0F3D628B8BE269, L_3, L_7, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_8, L_9, NULL);
		// bool simEnabled = this.Peer.IsSimulationEnabled;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_10;
		L_10 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled() */, L_10);
		V_0 = L_11;
		// bool newSimEnabled = GUILayout.Toggle(simEnabled, "Simulate");
		bool L_12 = V_0;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13;
		L_13 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_14;
		L_14 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_12, _stringLiteralF65D9DD240F808922B86DFC7F8C7014C0734E12F, L_13, NULL);
		V_1 = L_14;
		// if (newSimEnabled != simEnabled)
		bool L_15 = V_1;
		bool L_16 = V_0;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0061;
		}
	}
	{
		// this.Peer.IsSimulationEnabled = newSimEnabled;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_17;
		L_17 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		bool L_18 = V_1;
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean) */, L_17, L_18);
	}

IL_0061:
	{
		// float inOutLag = this.Peer.NetworkSimulationSettings.IncomingLag;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_19;
		L_19 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_20;
		L_20 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_19, NULL);
		int32_t L_21;
		L_21 = NetworkSimulationSet_get_IncomingLag_mE38F72A9950F07D93AFFB645F504272A0E93D8F0(L_20, NULL);
		V_2 = ((float)L_21);
		// GUILayout.Label("Lag " + inOutLag);
		String_t* L_22;
		L_22 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		String_t* L_23;
		L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9F37F823C6591E7D635F9B7B9BEF615C5983F9FB, L_22, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_24;
		L_24 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_23, L_24, NULL);
		// inOutLag = GUILayout.HorizontalSlider(inOutLag, 0, 500);
		float L_25 = V_2;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_26;
		L_26 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		float L_27;
		L_27 = GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F(L_25, (0.0f), (500.0f), L_26, NULL);
		V_2 = L_27;
		// this.Peer.NetworkSimulationSettings.IncomingLag = (int)inOutLag;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_28;
		L_28 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_29;
		L_29 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_28, NULL);
		float L_30 = V_2;
		NetworkSimulationSet_set_IncomingLag_m25C5AD9C4B1FC2669360A47135B4E0E31531A1D6(L_29, il2cpp_codegen_cast_double_to_int<int32_t>(L_30), NULL);
		// this.Peer.NetworkSimulationSettings.OutgoingLag = (int)inOutLag;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_31;
		L_31 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_32;
		L_32 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_31, NULL);
		float L_33 = V_2;
		NetworkSimulationSet_set_OutgoingLag_m53C3F6F784D7A868A69E1AF5A387B04DAF43EA8A(L_32, il2cpp_codegen_cast_double_to_int<int32_t>(L_33), NULL);
		// float inOutJitter = this.Peer.NetworkSimulationSettings.IncomingJitter;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_34;
		L_34 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_35;
		L_35 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_34, NULL);
		int32_t L_36;
		L_36 = NetworkSimulationSet_get_IncomingJitter_m17E4A249796BCD139B343124A3045150DEB9FD7C(L_35, NULL);
		V_3 = ((float)L_36);
		// GUILayout.Label("Jit " + inOutJitter);
		String_t* L_37;
		L_37 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_38;
		L_38 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral878F197FC44F2E3B6144F5C31D2BAA30884F3D8A, L_37, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_39;
		L_39 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_38, L_39, NULL);
		// inOutJitter = GUILayout.HorizontalSlider(inOutJitter, 0, 100);
		float L_40 = V_3;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_41;
		L_41 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		float L_42;
		L_42 = GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F(L_40, (0.0f), (100.0f), L_41, NULL);
		V_3 = L_42;
		// this.Peer.NetworkSimulationSettings.IncomingJitter = (int)inOutJitter;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_43;
		L_43 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_44;
		L_44 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_43, NULL);
		float L_45 = V_3;
		NetworkSimulationSet_set_IncomingJitter_mCB79E77D490287EEE0CD880E8091539B82409D9C(L_44, il2cpp_codegen_cast_double_to_int<int32_t>(L_45), NULL);
		// this.Peer.NetworkSimulationSettings.OutgoingJitter = (int)inOutJitter;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_46;
		L_46 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_47;
		L_47 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_46, NULL);
		float L_48 = V_3;
		NetworkSimulationSet_set_OutgoingJitter_mB127A220B2DE110E29AF3D4BDC08E393C671B5BC(L_47, il2cpp_codegen_cast_double_to_int<int32_t>(L_48), NULL);
		// float loss = this.Peer.NetworkSimulationSettings.IncomingLossPercentage;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_49;
		L_49 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_50;
		L_50 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_49, NULL);
		int32_t L_51;
		L_51 = NetworkSimulationSet_get_IncomingLossPercentage_m4E99E7B27BCC46F2AE76C547EFF04E02F397432E(L_50, NULL);
		V_4 = ((float)L_51);
		// GUILayout.Label("Loss " + loss);
		String_t* L_52;
		L_52 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		String_t* L_53;
		L_53 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral988D9E32F69C759B2C16830E57D31BA1E330F42C, L_52, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_54;
		L_54 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_53, L_54, NULL);
		// loss = GUILayout.HorizontalSlider(loss, 0, 10);
		float L_55 = V_4;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_56;
		L_56 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		float L_57;
		L_57 = GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F(L_55, (0.0f), (10.0f), L_56, NULL);
		V_4 = L_57;
		// this.Peer.NetworkSimulationSettings.IncomingLossPercentage = (int)loss;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_58;
		L_58 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_59;
		L_59 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_58, NULL);
		float L_60 = V_4;
		NetworkSimulationSet_set_IncomingLossPercentage_mAD28C44A01E5A051D9B1B883C9BEB4E24327F11C(L_59, il2cpp_codegen_cast_double_to_int<int32_t>(L_60), NULL);
		// this.Peer.NetworkSimulationSettings.OutgoingLossPercentage = (int)loss;
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_61;
		L_61 = PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline(__this, NULL);
		NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* L_62;
		L_62 = PhotonPeer_get_NetworkSimulationSettings_mE2613799AD6F2CA5C62107D38C715A5DE0D16674(L_61, NULL);
		float L_63 = V_4;
		NetworkSimulationSet_set_OutgoingLossPercentage_m0EDB404867753C870405E0C1565E13B407063B29(L_62, il2cpp_codegen_cast_double_to_int<int32_t>(L_63), NULL);
		// if (GUI.changed)
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = GUI_get_changed_m691B5A1EC87949AF8474777B24221175ABE1B829(NULL);
		if (!L_64)
		{
			goto IL_01b2;
		}
	}
	{
		// this.WindowRect.height = 100;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_65 = (&__this->___WindowRect_4);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_65, (100.0f), NULL);
	}

IL_01b2:
	{
		// GUI.DragWindow();
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DragWindow_m05D25F2E4010BACB431DF8279272F2DDD2F1B4BF(NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonLagSimulationGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonLagSimulationGui__ctor_mC547F4448B37C713F224F3ABE4708B72A3476E73 (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, const RuntimeMethod* method) 
{
	{
		// public Rect WindowRect = new Rect(0, 100, 120, 100);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (100.0f), (120.0f), (100.0f), /*hidden argument*/NULL);
		__this->___WindowRect_4 = L_0;
		// public int WindowId = 101;
		__this->___WindowId_5 = ((int32_t)101);
		// public bool Visible = true;
		__this->___Visible_6 = (bool)1;
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
// System.Void Photon.Pun.UtilityScripts.PhotonStatsGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStatsGui_Start_m6516050F5D38D7393511C55D0BBA0328F4930FFB (PhotonStatsGui_t91ECC9FD293234632FCE15D15EC6477088F7BC5A* __this, const RuntimeMethod* method) 
{
	{
		// if (this.statsRect.x <= 0)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&__this->___statsRect_9);
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_0, NULL);
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		// this.statsRect.x = Screen.width - this.statsRect.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2 = (&__this->___statsRect_9);
		int32_t L_3;
		L_3 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->___statsRect_9);
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_4, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_2, ((float)il2cpp_codegen_subtract(((float)L_3), L_5)), NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonStatsGui::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStatsGui_Update_m082353F7526D21A0A069D651AED82A6172466E41 (PhotonStatsGui_t91ECC9FD293234632FCE15D15EC6477088F7BC5A* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Tab) && Input.GetKey(KeyCode.LeftShift))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)9), NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// this.statsWindowOn = !this.statsWindowOn;
		bool L_2 = __this->___statsWindowOn_4;
		__this->___statsWindowOn_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// this.statsOn = true;    // enable stats when showing the window
		__this->___statsOn_5 = (bool)1;
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonStatsGui::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStatsGui_OnGUI_mD984AF66CA8F8B3C1D2CAFAE0599A8F3C70F5328 (PhotonStatsGui_t91ECC9FD293234632FCE15D15EC6477088F7BC5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonStatsGui_TrafficStatsWindow_m5844D126092FE2E9FE442BA7E1A7B6D6CF16475C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF4A3188C2D7419F865F97F94695CDD2018663B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsEnabled != statsOn)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_1;
		L_1 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_0, NULL);
		bool L_2;
		L_2 = PhotonPeer_get_TrafficStatsEnabled_mB7C4D26AAD36A731A4C89B1DE6144B480D9FF2C9(L_1, NULL);
		bool L_3 = __this->___statsOn_5;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		// PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsEnabled = this.statsOn;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_4 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_5;
		L_5 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_4, NULL);
		bool L_6 = __this->___statsOn_5;
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_5, L_6, NULL);
	}

IL_002c:
	{
		// if (!this.statsWindowOn)
		bool L_7 = __this->___statsWindowOn_4;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		return;
	}

IL_0035:
	{
		// this.statsRect = GUILayout.Window(this.WindowId, this.statsRect, this.TrafficStatsWindow, "Messages (shift+tab)");
		int32_t L_8 = __this->___WindowId_10;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = __this->___statsRect_9;
		WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550* L_10 = (WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550*)il2cpp_codegen_object_new(WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m31D7B6C221D9A078AE5C8BA7C3BC0FA406EA7B71(L_10, __this, (intptr_t)((void*)PhotonStatsGui_TrafficStatsWindow_m5844D126092FE2E9FE442BA7E1A7B6D6CF16475C_RuntimeMethod_var), NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_11;
		L_11 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = GUILayout_Window_m6FA538996056AA5E32BCAF3BF2DFBF795AB6B26D(L_8, L_9, L_10, _stringLiteralEF4A3188C2D7419F865F97F94695CDD2018663B7, L_11, NULL);
		__this->___statsRect_9 = L_12;
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonStatsGui::TrafficStatsWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStatsGui_TrafficStatsWindow_m5844D126092FE2E9FE442BA7E1A7B6D6CF16475C (PhotonStatsGui_t91ECC9FD293234632FCE15D15EC6477088F7BC5A* __this, int32_t ___windowID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F16092515725572610A7D24576D07709AE3D1A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ABBA4A319AE2113068B5F1585697EEEBD4D6E68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2041DD87E40FF4B23D9550910DB36F409AD904D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E967EC47C0181B3A2E25F28AF8F0061B4E2A296);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C550D612379916935E4282D434E4EA23536FCB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DB64990F3C0419D770F2F59CBA7371DAAB819BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793A42BFC478A0C4DC544E915AF20BE5648D6F65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA65FFD9D9EC7098F16777565B3FCE05AEBFCDC98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05AF52D76595518A075ECA21B966CD1EF5ABA5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA04E9B69AE9502D4E2755F60981654299EA47B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB654DC6E6829721C44D5C02AF79359CB2E53232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8D3BE80C008EAAD0B440A7557B7AC1DF4BD1431);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* V_1 = NULL;
	int64_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		// bool statsToLog = false;
		V_0 = (bool)0;
		// TrafficStatsGameLevel gls = PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsGameLevel;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_1;
		L_1 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_0, NULL);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_2;
		L_2 = PhotonPeer_get_TrafficStatsGameLevel_m83D92F2C803367552F09AD55007BAD250309ED27_inline(L_1, NULL);
		V_1 = L_2;
		// long elapsedMs = PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsElapsedMs / 1000;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_4;
		L_4 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_3, NULL);
		int64_t L_5;
		L_5 = PhotonPeer_get_TrafficStatsElapsedMs_mF57D01ADE9E6A2A552F57139CDF482723420589B(L_4, NULL);
		V_2 = ((int64_t)(L_5/((int64_t)((int32_t)1000))));
		// if (elapsedMs == 0)
		int64_t L_6 = V_2;
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		// elapsedMs = 1;
		V_2 = ((int64_t)1);
	}

IL_002f:
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_7;
		L_7 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_7, NULL);
		// this.buttonsOn = GUILayout.Toggle(this.buttonsOn, "buttons");
		bool L_8 = __this->___buttonsOn_8;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_10;
		L_10 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_8, _stringLiteral2E967EC47C0181B3A2E25F28AF8F0061B4E2A296, L_9, NULL);
		__this->___buttonsOn_8 = L_10;
		// this.healthStatsVisible = GUILayout.Toggle(this.healthStatsVisible, "health");
		bool L_11 = __this->___healthStatsVisible_6;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_12;
		L_12 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_13;
		L_13 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_11, _stringLiteralA65FFD9D9EC7098F16777565B3FCE05AEBFCDC98, L_12, NULL);
		__this->___healthStatsVisible_6 = L_13;
		// this.trafficStatsOn = GUILayout.Toggle(this.trafficStatsOn, "traffic");
		bool L_14 = __this->___trafficStatsOn_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_15;
		L_15 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_16;
		L_16 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_14, _stringLiteralBA04E9B69AE9502D4E2755F60981654299EA47B1, L_15, NULL);
		__this->___trafficStatsOn_7 = L_16;
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// string total = string.Format("Out {0,4} | In {1,4} | Sum {2,4}", gls.TotalOutgoingMessageCount, gls.TotalIncomingMessageCount, gls.TotalMessageCount);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_17 = V_1;
		int32_t L_18;
		L_18 = TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mBD769AE99A34702FEA80F6BC9D79542F0992DC4C(L_17, NULL);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_21 = V_1;
		int32_t L_22;
		L_22 = TrafficStatsGameLevel_get_TotalIncomingMessageCount_m13EB9EE2F58AE4A8884589ECB6C06D176B74A326(L_21, NULL);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_25 = V_1;
		int32_t L_26;
		L_26 = TrafficStatsGameLevel_get_TotalMessageCount_mA6B693C4265A9680FBD12F6259A3BB050B985CF2(L_25, NULL);
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403, L_20, L_24, L_28, NULL);
		V_3 = L_29;
		// string elapsedTime = string.Format("{0}sec average:", elapsedMs);
		int64_t L_30 = V_2;
		int64_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1ABBA4A319AE2113068B5F1585697EEEBD4D6E68, L_32, NULL);
		V_4 = L_33;
		// string average = string.Format("Out {0,4} | In {1,4} | Sum {2,4}", gls.TotalOutgoingMessageCount / elapsedMs, gls.TotalIncomingMessageCount / elapsedMs, gls.TotalMessageCount / elapsedMs);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_34 = V_1;
		int32_t L_35;
		L_35 = TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mBD769AE99A34702FEA80F6BC9D79542F0992DC4C(L_34, NULL);
		int64_t L_36 = V_2;
		int64_t L_37 = ((int64_t)(((int64_t)L_35)/L_36));
		RuntimeObject* L_38 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_37);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_39 = V_1;
		int32_t L_40;
		L_40 = TrafficStatsGameLevel_get_TotalIncomingMessageCount_m13EB9EE2F58AE4A8884589ECB6C06D176B74A326(L_39, NULL);
		int64_t L_41 = V_2;
		int64_t L_42 = ((int64_t)(((int64_t)L_40)/L_41));
		RuntimeObject* L_43 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_42);
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_44 = V_1;
		int32_t L_45;
		L_45 = TrafficStatsGameLevel_get_TotalMessageCount_mA6B693C4265A9680FBD12F6259A3BB050B985CF2(L_44, NULL);
		int64_t L_46 = V_2;
		int64_t L_47 = ((int64_t)(((int64_t)L_45)/L_46));
		RuntimeObject* L_48 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_47);
		String_t* L_49;
		L_49 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral3EAD0C9C0229F389B5FEC486E893C8D5E0049403, L_38, L_43, L_48, NULL);
		V_5 = L_49;
		// GUILayout.Label(total);
		String_t* L_50 = V_3;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_51;
		L_51 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_50, L_51, NULL);
		// GUILayout.Label(elapsedTime);
		String_t* L_52 = V_4;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_53;
		L_53 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_52, L_53, NULL);
		// GUILayout.Label(average);
		String_t* L_54 = V_5;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_55;
		L_55 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_54, L_55, NULL);
		// if (this.buttonsOn)
		bool L_56 = __this->___buttonsOn_8;
		if (!L_56)
		{
			goto IL_0198;
		}
	}
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_57;
		L_57 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_57, NULL);
		// this.statsOn = GUILayout.Toggle(this.statsOn, "stats on");
		bool L_58 = __this->___statsOn_5;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_59;
		L_59 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_60;
		L_60 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_58, _stringLiteral4DB64990F3C0419D770F2F59CBA7371DAAB819BE, L_59, NULL);
		__this->___statsOn_5 = L_60;
		// if (GUILayout.Button("Reset"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_61;
		L_61 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_62;
		L_62 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, L_61, NULL);
		if (!L_62)
		{
			goto IL_0183;
		}
	}
	{
		// PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsReset();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_63 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_64;
		L_64 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_63, NULL);
		PhotonPeer_TrafficStatsReset_m2A7C38F51A95521B3F4A707A24E92C06BAFC3AFD(L_64, NULL);
		// PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_65 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_66;
		L_66 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_65, NULL);
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_66, (bool)1, NULL);
	}

IL_0183:
	{
		// statsToLog = GUILayout.Button("To Log");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_67;
		L_67 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_68;
		L_68 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral793A42BFC478A0C4DC544E915AF20BE5648D6F65, L_67, NULL);
		V_0 = L_68;
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
	}

IL_0198:
	{
		// string trafficStatsIn = string.Empty;
		String_t* L_69 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_6 = L_69;
		// string trafficStatsOut = string.Empty;
		String_t* L_70 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_7 = L_70;
		// if (this.trafficStatsOn)
		bool L_71 = __this->___trafficStatsOn_7;
		if (!L_71)
		{
			goto IL_0215;
		}
	}
	{
		// GUILayout.Box("Traffic Stats");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_72;
		L_72 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD(_stringLiteralB05AF52D76595518A075ECA21B966CD1EF5ABA5A, L_72, NULL);
		// trafficStatsIn = "Incoming: \n" + PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsIncoming.ToString();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_73 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_74;
		L_74 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_73, NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_75;
		L_75 = PhotonPeer_get_TrafficStatsIncoming_mFBFFDE72C315515EF874F92B67D135BEEE3E67D9_inline(L_74, NULL);
		String_t* L_76;
		L_76 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_75);
		String_t* L_77;
		L_77 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2041DD87E40FF4B23D9550910DB36F409AD904D2, L_76, NULL);
		V_6 = L_77;
		// trafficStatsOut = "Outgoing: \n" + PhotonNetwork.NetworkingClient.LoadBalancingPeer.TrafficStatsOutgoing.ToString();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_78 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_79;
		L_79 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_78, NULL);
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_80;
		L_80 = PhotonPeer_get_TrafficStatsOutgoing_mDD70068CDA34548046EF39295A045E978315AADE_inline(L_79, NULL);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_80);
		String_t* L_82;
		L_82 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBB654DC6E6829721C44D5C02AF79359CB2E53232, L_81, NULL);
		V_7 = L_82;
		// GUILayout.Label(trafficStatsIn);
		String_t* L_83 = V_6;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_84;
		L_84 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_83, L_84, NULL);
		// GUILayout.Label(trafficStatsOut);
		String_t* L_85 = V_7;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_86;
		L_86 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_85, L_86, NULL);
	}

IL_0215:
	{
		// string healthStats = string.Empty;
		String_t* L_87 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_8 = L_87;
		// if (this.healthStatsVisible)
		bool L_88 = __this->___healthStatsVisible_6;
		if (!L_88)
		{
			goto IL_02ee;
		}
	}
	{
		// GUILayout.Box("Health Stats");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_89;
		L_89 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Box_m655ED298646F19D9319EE60289DFA7AA5671F7BD(_stringLiteral0F16092515725572610A7D24576D07709AE3D1A8, L_89, NULL);
		// healthStats = string.Format(
		//     "ping: {6}[+/-{7}]ms resent:{8} \n\nmax ms between\nsend: {0,4} \ndispatch: {1,4} \n\nlongest dispatch for: \nev({3}):{2,3}ms \nop({5}):{4,3}ms",
		//     gls.LongestDeltaBetweenSending,
		//     gls.LongestDeltaBetweenDispatching,
		//     gls.LongestEventCallback,
		//     gls.LongestEventCallbackCode,
		//     gls.LongestOpResponseCallback,
		//     gls.LongestOpResponseCallbackOpCode,
		//     PhotonNetwork.NetworkingClient.LoadBalancingPeer.RoundTripTime,
		//     PhotonNetwork.NetworkingClient.LoadBalancingPeer.RoundTripTimeVariance,
		//     PhotonNetwork.NetworkingClient.LoadBalancingPeer.ResentReliableCommands);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_90 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_90;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_92 = V_1;
		int32_t L_93;
		L_93 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline(L_92, NULL);
		int32_t L_94 = L_93;
		RuntimeObject* L_95 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_94);
		ArrayElementTypeCheck (L_91, L_95);
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_91;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_97 = V_1;
		int32_t L_98;
		L_98 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline(L_97, NULL);
		int32_t L_99 = L_98;
		RuntimeObject* L_100 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_99);
		ArrayElementTypeCheck (L_96, L_100);
		(L_96)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_100);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_101 = L_96;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_102 = V_1;
		int32_t L_103;
		L_103 = TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline(L_102, NULL);
		int32_t L_104 = L_103;
		RuntimeObject* L_105 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_104);
		ArrayElementTypeCheck (L_101, L_105);
		(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_105);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = L_101;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_107 = V_1;
		uint8_t L_108;
		L_108 = TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline(L_107, NULL);
		uint8_t L_109 = L_108;
		RuntimeObject* L_110 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_109);
		ArrayElementTypeCheck (L_106, L_110);
		(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_110);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_111 = L_106;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_112 = V_1;
		int32_t L_113;
		L_113 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline(L_112, NULL);
		int32_t L_114 = L_113;
		RuntimeObject* L_115 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_114);
		ArrayElementTypeCheck (L_111, L_115);
		(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_115);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_116 = L_111;
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_117 = V_1;
		uint8_t L_118;
		L_118 = TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline(L_117, NULL);
		uint8_t L_119 = L_118;
		RuntimeObject* L_120 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_119);
		ArrayElementTypeCheck (L_116, L_120);
		(L_116)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_120);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_121 = L_116;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_122 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_123;
		L_123 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_122, NULL);
		int32_t L_124;
		L_124 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_123, NULL);
		int32_t L_125 = L_124;
		RuntimeObject* L_126 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_125);
		ArrayElementTypeCheck (L_121, L_126);
		(L_121)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_126);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_127 = L_121;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_128 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_129;
		L_129 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_128, NULL);
		int32_t L_130;
		L_130 = PhotonPeer_get_RoundTripTimeVariance_mEB905CCB7BECBD67C8B6BB183F9DF019332F0BCA(L_129, NULL);
		int32_t L_131 = L_130;
		RuntimeObject* L_132 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_131);
		ArrayElementTypeCheck (L_127, L_132);
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_132);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_133 = L_127;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_134 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_135;
		L_135 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_134, NULL);
		int32_t L_136;
		L_136 = PhotonPeer_get_ResentReliableCommands_mAEADAB3CEF280037F2208E8969C9E6626973FD87(L_135, NULL);
		int32_t L_137 = L_136;
		RuntimeObject* L_138 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_137);
		ArrayElementTypeCheck (L_133, L_138);
		(L_133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_138);
		String_t* L_139;
		L_139 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralF8D3BE80C008EAAD0B440A7557B7AC1DF4BD1431, L_133, NULL);
		V_8 = L_139;
		// GUILayout.Label(healthStats);
		String_t* L_140 = V_8;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_141;
		L_141 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_140, L_141, NULL);
	}

IL_02ee:
	{
		// if (statsToLog)
		bool L_142 = V_0;
		if (!L_142)
		{
			goto IL_0323;
		}
	}
	{
		// string complete = string.Format("{0}\n{1}\n{2}\n{3}\n{4}\n{5}", total, elapsedTime, average, trafficStatsIn, trafficStatsOut, healthStats);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_143 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_144 = L_143;
		String_t* L_145 = V_3;
		ArrayElementTypeCheck (L_144, L_145);
		(L_144)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_145);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_146 = L_144;
		String_t* L_147 = V_4;
		ArrayElementTypeCheck (L_146, L_147);
		(L_146)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_147);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_148 = L_146;
		String_t* L_149 = V_5;
		ArrayElementTypeCheck (L_148, L_149);
		(L_148)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_149);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_150 = L_148;
		String_t* L_151 = V_6;
		ArrayElementTypeCheck (L_150, L_151);
		(L_150)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_151);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_152 = L_150;
		String_t* L_153 = V_7;
		ArrayElementTypeCheck (L_152, L_153);
		(L_152)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_153);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_154 = L_152;
		String_t* L_155 = V_8;
		ArrayElementTypeCheck (L_154, L_155);
		(L_154)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_155);
		String_t* L_156;
		L_156 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral4C550D612379916935E4282D434E4EA23536FCB6, L_154, NULL);
		// Debug.Log(complete);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_156, NULL);
	}

IL_0323:
	{
		// if (GUI.changed)
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_157;
		L_157 = GUI_get_changed_m691B5A1EC87949AF8474777B24221175ABE1B829(NULL);
		if (!L_157)
		{
			goto IL_033a;
		}
	}
	{
		// this.statsRect.height = 100;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_158 = (&__this->___statsRect_9);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_158, (100.0f), NULL);
	}

IL_033a:
	{
		// GUI.DragWindow();
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DragWindow_m05D25F2E4010BACB431DF8279272F2DDD2F1B4BF(NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PhotonStatsGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStatsGui__ctor_m21276B0A1222884F19037441481BFF25C3A38A38 (PhotonStatsGui_t91ECC9FD293234632FCE15D15EC6477088F7BC5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool statsWindowOn = true;
		__this->___statsWindowOn_4 = (bool)1;
		// public bool statsOn = true;
		__this->___statsOn_5 = (bool)1;
		// public Rect statsRect = new Rect(0, 100, 200, 50);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (100.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		__this->___statsRect_9 = L_0;
		// public int WindowId = 100;
		__this->___WindowId_10 = ((int32_t)100);
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
// System.Void Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointedAtGameObjectInfo_Start_m99A62B3EF1C678A26DFF0E44D4DD932CEC083297 (PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6335F9FF02EA74920DCD2E6CB5FB1A611B8408AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null)
		PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* L_0 = ((PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_StaticFields*)il2cpp_codegen_static_fields_for(PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.LogWarning("PointedAtGameObjectInfo is already featured in the scene, gameobject is destroyed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral6335F9FF02EA74920DCD2E6CB5FB1A611B8408AE, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
	}

IL_0022:
	{
		// Instance = this;
		((PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_StaticFields*)il2cpp_codegen_static_fields_for(PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_StaticFields*)il2cpp_codegen_static_fields_for(PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::SetFocus(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointedAtGameObjectInfo_SetFocus_m1ABC0D7659399BD91CAA4ACAA615F0A4DE27F798 (PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* __this, PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B73AB1C345FD898D675FF9AA1083B03CB79DDE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444F1D295ACEC4488382E48F422A3B344C5A19CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAB6C2DF883B13A404F0682D842DB4D3D7D20944);
		s_Il2CppMethodInitialized = true;
	}
	PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* G_B2_0 = NULL;
	PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* G_B1_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* G_B3_1 = NULL;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_4 = NULL;
	String_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_3 = NULL;
	String_t* G_B7_4 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_5 = NULL;
	int32_t G_B9_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_4 = NULL;
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_4 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_3 = NULL;
	String_t* G_B10_4 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_5 = NULL;
	{
		// focus = pv != null ? pv.transform : null;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0 = ___pv0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_000d:
	{
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_2 = ___pv0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		G_B3_1->___focus_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___focus_6), (void*)G_B3_0);
		// if (pv != null)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_4 = ___pv0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	{
		// text.text = string.Format("id {0} own: {1} {2}{3}", pv.ViewID, pv.OwnerActorNr, (pv.IsSceneView) ? "scn" : "", (pv.IsMine) ? " mine" : "");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___text_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_9 = ___pv0;
		int32_t L_10;
		L_10 = PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_8;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_14 = ___pv0;
		int32_t L_15;
		L_15 = PhotonView_get_OwnerActorNr_mD9C14958B5CC4A817C6720FD0BF37A9B61A47FDF(L_14, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_19 = ___pv0;
		bool L_20;
		L_20 = PhotonView_get_IsSceneView_m83C3705900951386ABFD1B9B15FF9C20B572150A(L_19, NULL);
		G_B5_0 = 2;
		G_B5_1 = L_18;
		G_B5_2 = L_18;
		G_B5_3 = _stringLiteral1B73AB1C345FD898D675FF9AA1083B03CB79DDE5;
		G_B5_4 = L_6;
		if (L_20)
		{
			G_B6_0 = 2;
			G_B6_1 = L_18;
			G_B6_2 = L_18;
			G_B6_3 = _stringLiteral1B73AB1C345FD898D675FF9AA1083B03CB79DDE5;
			G_B6_4 = L_6;
			goto IL_005f;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		goto IL_0064;
	}

IL_005f:
	{
		G_B7_0 = _stringLiteral444F1D295ACEC4488382E48F422A3B344C5A19CC;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
	}

IL_0064:
	{
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		(G_B7_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B7_1), (RuntimeObject*)G_B7_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = G_B7_3;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_22 = ___pv0;
		bool L_23;
		L_23 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648(L_22, NULL);
		G_B8_0 = 3;
		G_B8_1 = L_21;
		G_B8_2 = L_21;
		G_B8_3 = G_B7_4;
		G_B8_4 = G_B7_5;
		if (L_23)
		{
			G_B9_0 = 3;
			G_B9_1 = L_21;
			G_B9_2 = L_21;
			G_B9_3 = G_B7_4;
			G_B9_4 = G_B7_5;
			goto IL_0076;
		}
	}
	{
		G_B10_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		G_B10_4 = G_B8_3;
		G_B10_5 = G_B8_4;
		goto IL_007b;
	}

IL_0076:
	{
		G_B10_0 = _stringLiteralDAB6C2DF883B13A404F0682D842DB4D3D7D20944;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
		G_B10_4 = G_B9_3;
		G_B10_5 = G_B9_4;
	}

IL_007b:
	{
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		(G_B10_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B10_1), (RuntimeObject*)G_B10_0);
		String_t* L_24;
		L_24 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B10_4, G_B10_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B10_5, L_24);
		return;
	}

IL_0087:
	{
		// text.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___text_5;
		String_t* L_26 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_26);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::RemoveFocus(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointedAtGameObjectInfo_RemoveFocus_m4CC9CB8D8C94D676A7B14C79C41CC14A629EBD43 (PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* __this, PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pv == null)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0 = ___pv0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// text.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_5;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// return;
		return;
	}

IL_001a:
	{
		// if (pv.transform == focus)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_4 = ___pv0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___focus_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// text.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___text_5;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		// return;
		return;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointedAtGameObjectInfo_LateUpdate_mAC21BDE3DBF0D0065CF78644555FC1CD34C2FEA0 (PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (focus != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___focus_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// this.transform.position = Camera.main.WorldToScreenPoint(focus.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___focus_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_3, L_5, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_6, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PointedAtGameObjectInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointedAtGameObjectInfo__ctor_m3BB56205401A35E4CC5981A9E97CD139980CDF18 (PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.StatesGui::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatesGui_Awake_mBD456E8006FB552ED33A00D7F3E576B1A8F1F7AD (StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null)
		StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* L_0 = ((StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_StaticFields*)il2cpp_codegen_static_fields_for(StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var))->___Instance_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// DestroyImmediate(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (DontDestroy)
		bool L_3 = __this->___DontDestroy_5;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Instance = this;
		((StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_StaticFields*)il2cpp_codegen_static_fields_for(StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var))->___Instance_19 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_StaticFields*)il2cpp_codegen_static_fields_for(StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var))->___Instance_19), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_4, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.StatesGui::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatesGui_OnDisable_m0D2DEC8983E5F8F7C4E29EBB5B890DC94C25156F (StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DontDestroy && Instance == this)
		bool L_0 = __this->___DontDestroy_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* L_1 = ((StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_StaticFields*)il2cpp_codegen_static_fields_for(StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var))->___Instance_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, __this, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// Instance = null;
		((StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_StaticFields*)il2cpp_codegen_static_fields_for(StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var))->___Instance_19 = (StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_StaticFields*)il2cpp_codegen_static_fields_for(StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D_il2cpp_TypeInfo_var))->___Instance_19), (void*)(StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D*)NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.StatesGui::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatesGui_OnGUI_mD3CAE445E1415C013110C5C9B638E7BB5F3121BF (StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerConnection_t91F7686050F68425C6517C7AC3225669636DD0CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F7301063435300B9C389D534C13A1F83D523072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4240D8B50E7D7141437263EDA1B72E145DDBD84F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C2AA5C5C5960342754BDCDC1BC571B5E153B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F695E381D45532E8A86EF8161488D33016BB1C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753CB4DF5FEC419C0FC66E60ED5CF43419229669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB1D0E143C56545D2C2CFAFCCCB15B5E5067AD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4E23CD3E51379720889C9F4BDA37BE15B3581E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3B1BD9B2FD1433EA56E9AD0E11411666BCDAEBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC09F0D4A7B660E1924D2300CB0765C6FFCB6FDE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* V_4 = NULL;
	int32_t V_5 = 0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B33_0 = 0;
	String_t* G_B35_0 = NULL;
	String_t* G_B35_1 = NULL;
	String_t* G_B35_2 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	String_t* G_B34_2 = NULL;
	String_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	String_t* G_B36_2 = NULL;
	String_t* G_B36_3 = NULL;
	{
		// Rect GuiOffsetRuntime = new Rect(this.GuiOffset);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___GuiOffset_4;
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&V_0), L_0, NULL);
		// if (GuiOffsetRuntime.x < 0)
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// GuiOffsetRuntime.x = Screen.width - GuiOffsetRuntime.width;
		int32_t L_2;
		L_2 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_0), ((float)il2cpp_codegen_subtract(((float)L_2), L_3)), NULL);
	}

IL_0030:
	{
		// GuiRect.xMin = GuiOffsetRuntime.x;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->___GuiRect_18);
		float L_5;
		L_5 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19(L_4, L_5, NULL);
		// GuiRect.yMin = GuiOffsetRuntime.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&__this->___GuiRect_18);
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE(L_6, L_7, NULL);
		// GuiRect.xMax = GuiOffsetRuntime.x + GuiOffsetRuntime.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = (&__this->___GuiRect_18);
		float L_9;
		L_9 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D(L_8, ((float)il2cpp_codegen_add(L_9, L_10)), NULL);
		// GuiRect.yMax = GuiOffsetRuntime.y + GuiOffsetRuntime.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = (&__this->___GuiRect_18);
		float L_12;
		L_12 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_13;
		L_13 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B(L_11, ((float)il2cpp_codegen_add(L_12, L_13)), NULL);
		// GUILayout.BeginArea(GuiRect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14 = __this->___GuiRect_18;
		GUILayout_BeginArea_mA941799D3368A14C4ED7AC8516806369EAF01692(L_14, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_15;
		L_15 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_15, NULL);
		// if (this.ServerTimestamp)
		bool L_16 = __this->___ServerTimestamp_6;
		if (!L_16)
		{
			goto IL_00cc;
		}
	}
	{
		// GUILayout.Label((((double)PhotonNetwork.ServerTimestamp) / 1000d).ToString("F3"));
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = PhotonNetwork_get_ServerTimestamp_m01845E74DA43F1C209FF98980D5B6DF64428F866(NULL);
		V_1 = ((double)(((double)L_17)/(1000.0)));
		String_t* L_18;
		L_18 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_19;
		L_19 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_18, L_19, NULL);
	}

IL_00cc:
	{
		// if (Server)
		bool L_20 = __this->___Server_8;
		if (!L_20)
		{
			goto IL_0100;
		}
	}
	{
		// GUILayout.Label(PhotonNetwork.ServerAddress + " " + PhotonNetwork.Server);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = PhotonNetwork_get_ServerAddress_m622AD348B0CF39A4EDCAC1652414F6E950564F01(NULL);
		int32_t L_22;
		L_22 = PhotonNetwork_get_Server_m66EC4A4BAF944AFA6B851DA697AB10B8402D8FD5(NULL);
		V_2 = L_22;
		Il2CppFakeBox<int32_t> L_23(ServerConnection_t91F7686050F68425C6517C7AC3225669636DD0CC_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_24;
		L_24 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_23), NULL);
		String_t* L_25;
		L_25 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_21, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_24, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_26;
		L_26 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_25, L_26, NULL);
	}

IL_0100:
	{
		// if (DetailedConnection)
		bool L_27 = __this->___DetailedConnection_7;
		if (!L_27)
		{
			goto IL_0125;
		}
	}
	{
		// GUILayout.Label(PhotonNetwork.NetworkClientState.ToString());
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = PhotonNetwork_get_NetworkClientState_mB9C769F7CA93BA39EE6AB259FFD8B716C3D6ACFD(NULL);
		V_3 = L_28;
		Il2CppFakeBox<int32_t> L_29(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_30;
		L_30 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_29), NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_31;
		L_31 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_30, L_31, NULL);
	}

IL_0125:
	{
		// if (AppVersion)
		bool L_32 = __this->___AppVersion_9;
		if (!L_32)
		{
			goto IL_0141;
		}
	}
	{
		// GUILayout.Label(PhotonNetwork.NetworkingClient.AppVersion);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_33 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		String_t* L_34;
		L_34 = LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline(L_33, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_35;
		L_35 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_34, L_35, NULL);
	}

IL_0141:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_36;
		L_36 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_36, NULL);
		// if (UserId)
		bool L_37 = __this->___UserId_10;
		if (!L_37)
		{
			goto IL_01a2;
		}
	}
	{
		// GUILayout.Label("UID: " + ((PhotonNetwork.AuthValues != null) ? PhotonNetwork.AuthValues.UserId : "no UserId"));
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_38;
		L_38 = PhotonNetwork_get_AuthValues_mDE68B63E9DA988A0532AE53C9DF844373248D1A9(NULL);
		G_B12_0 = _stringLiteral4240D8B50E7D7141437263EDA1B72E145DDBD84F;
		if (L_38)
		{
			G_B13_0 = _stringLiteral4240D8B50E7D7141437263EDA1B72E145DDBD84F;
			goto IL_016b;
		}
	}
	{
		G_B14_0 = _stringLiteral4F695E381D45532E8A86EF8161488D33016BB1C0;
		G_B14_1 = G_B12_0;
		goto IL_0175;
	}

IL_016b:
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_39;
		L_39 = PhotonNetwork_get_AuthValues_mDE68B63E9DA988A0532AE53C9DF844373248D1A9(NULL);
		String_t* L_40;
		L_40 = AuthenticationValues_get_UserId_m5589924F18733494DEC1218392BCB531F45A06A8_inline(L_39, NULL);
		G_B14_0 = L_40;
		G_B14_1 = G_B13_0;
	}

IL_0175:
	{
		String_t* L_41;
		L_41 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B14_1, G_B14_0, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_42;
		L_42 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_41, L_42, NULL);
		// GUILayout.Label("UserId:" + PhotonNetwork.LocalPlayer.UserId);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_43;
		L_43 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		String_t* L_44;
		L_44 = Player_get_UserId_m7FAE62845C7080A564297D0BFB285E692A1A234C_inline(L_43, NULL);
		String_t* L_45;
		L_45 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3F7301063435300B9C389D534C13A1F83D523072, L_44, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_46;
		L_46 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_45, L_46, NULL);
	}

IL_01a2:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// if (Room)
		bool L_47 = __this->___Room_11;
		if (!L_47)
		{
			goto IL_01ef;
		}
	}
	{
		// if (PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (!L_48)
		{
			goto IL_01e0;
		}
	}
	{
		// GUILayout.Label(this.RoomProps ? PhotonNetwork.CurrentRoom.ToStringFull() : PhotonNetwork.CurrentRoom.ToString());
		bool L_49 = __this->___RoomProps_12;
		if (L_49)
		{
			goto IL_01ca;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_50;
		L_50 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		String_t* L_51;
		L_51 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		G_B20_0 = L_51;
		goto IL_01d4;
	}

IL_01ca:
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_52;
		L_52 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		String_t* L_53;
		L_53 = Room_ToStringFull_mC592523E5F5327D78E30D24C6224BC4DA50F6E3D(L_52, NULL);
		G_B20_0 = L_53;
	}

IL_01d4:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_54;
		L_54 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(G_B20_0, L_54, NULL);
		goto IL_01ef;
	}

IL_01e0:
	{
		// GUILayout.Label("not in room");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_55;
		L_55 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteral753CB4DF5FEC419C0FC66E60ED5CF43419229669, L_55, NULL);
	}

IL_01ef:
	{
		// if (this.LocalPlayer)
		bool L_56 = __this->___LocalPlayer_13;
		if (!L_56)
		{
			goto IL_020c;
		}
	}
	{
		// GUILayout.Label(PlayerToString(PhotonNetwork.LocalPlayer));
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_57;
		L_57 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		String_t* L_58;
		L_58 = StatesGui_PlayerToString_m5910943502C5A0C43E56AF607DDB6FB0CEA3E2E6(__this, L_57, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_59;
		L_59 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_58, L_59, NULL);
	}

IL_020c:
	{
		// if (Others)
		bool L_60 = __this->___Others_15;
		if (!L_60)
		{
			goto IL_0247;
		}
	}
	{
		// foreach (Player player in PhotonNetwork.PlayerListOthers)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_61;
		L_61 = PhotonNetwork_get_PlayerListOthers_m4F0097067DBF440BA7A875D3D416F089ADD38777(NULL);
		V_4 = L_61;
		V_5 = 0;
		goto IL_023f;
	}

IL_0220:
	{
		// foreach (Player player in PhotonNetwork.PlayerListOthers)
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_6 = L_65;
		// GUILayout.Label(PlayerToString(player));
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_66 = V_6;
		String_t* L_67;
		L_67 = StatesGui_PlayerToString_m5910943502C5A0C43E56AF607DDB6FB0CEA3E2E6(__this, L_66, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_68;
		L_68 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_67, L_68, NULL);
		int32_t L_69 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_023f:
	{
		// foreach (Player player in PhotonNetwork.PlayerListOthers)
		int32_t L_70 = V_5;
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_71 = V_4;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))))
		{
			goto IL_0220;
		}
	}

IL_0247:
	{
		// if (ExpectedUsers)
		bool L_72 = __this->___ExpectedUsers_17;
		if (!L_72)
		{
			goto IL_02ba;
		}
	}
	{
		// if (PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (!L_73)
		{
			goto IL_02ba;
		}
	}
	{
		// int countExpected = (PhotonNetwork.CurrentRoom.ExpectedUsers != null) ? PhotonNetwork.CurrentRoom.ExpectedUsers.Length : 0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_74;
		L_74 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75;
		L_75 = Room_get_ExpectedUsers_m019AFBBF8602E417F5B072C313F1B44AD1B1D1A6_inline(L_74, NULL);
		if (L_75)
		{
			goto IL_0265;
		}
	}
	{
		G_B33_0 = 0;
		goto IL_0271;
	}

IL_0265:
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_76;
		L_76 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77;
		L_77 = Room_get_ExpectedUsers_m019AFBBF8602E417F5B072C313F1B44AD1B1D1A6_inline(L_76, NULL);
		G_B33_0 = ((int32_t)(((RuntimeArray*)L_77)->max_length));
	}

IL_0271:
	{
		V_7 = G_B33_0;
		// GUILayout.Label("Expected: " + countExpected + " " +
		//                ((PhotonNetwork.CurrentRoom.ExpectedUsers != null) ? string.Join(",", PhotonNetwork.CurrentRoom.ExpectedUsers) : "")
		//                 );
		String_t* L_78;
		L_78 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_79;
		L_79 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80;
		L_80 = Room_get_ExpectedUsers_m019AFBBF8602E417F5B072C313F1B44AD1B1D1A6_inline(L_79, NULL);
		G_B34_0 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
		G_B34_1 = L_78;
		G_B34_2 = _stringLiteral8CB1D0E143C56545D2C2CFAFCCCB15B5E5067AD1;
		if (L_80)
		{
			G_B35_0 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
			G_B35_1 = L_78;
			G_B35_2 = _stringLiteral8CB1D0E143C56545D2C2CFAFCCCB15B5E5067AD1;
			goto IL_0297;
		}
	}
	{
		G_B36_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		G_B36_3 = G_B34_2;
		goto IL_02ab;
	}

IL_0297:
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_81;
		L_81 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82;
		L_82 = Room_get_ExpectedUsers_m019AFBBF8602E417F5B072C313F1B44AD1B1D1A6_inline(L_81, NULL);
		String_t* L_83;
		L_83 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_82, NULL);
		G_B36_0 = L_83;
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
		G_B36_3 = G_B35_2;
	}

IL_02ab:
	{
		String_t* L_84;
		L_84 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B36_3, G_B36_2, G_B36_1, G_B36_0, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_85;
		L_85 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_84, L_85, NULL);
	}

IL_02ba:
	{
		// if (Buttons)
		bool L_86 = __this->___Buttons_16;
		if (!L_86)
		{
			goto IL_03aa;
		}
	}
	{
		// if (!PhotonNetwork.IsConnected && GUILayout.Button("Connect"))
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_87;
		L_87 = PhotonNetwork_get_IsConnected_mDEEAF9E141501CCD9CD78A9F11B6D0CAEAE97B11(NULL);
		if (L_87)
		{
			goto IL_02e3;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_88;
		L_88 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_89;
		L_89 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B, L_88, NULL);
		if (!L_89)
		{
			goto IL_02e3;
		}
	}
	{
		// PhotonNetwork.ConnectUsingSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = PhotonNetwork_ConnectUsingSettings_mB2A659A9684CAC6BBBA81F453E31C765DA29E13D(NULL);
	}

IL_02e3:
	{
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_91;
		L_91 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_91, NULL);
		// if (PhotonNetwork.IsConnected && GUILayout.Button("Disconnect"))
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = PhotonNetwork_get_IsConnected_mDEEAF9E141501CCD9CD78A9F11B6D0CAEAE97B11(NULL);
		if (!L_92)
		{
			goto IL_030a;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_93;
		L_93 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_94;
		L_94 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A, L_93, NULL);
		if (!L_94)
		{
			goto IL_030a;
		}
	}
	{
		// PhotonNetwork.Disconnect();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_Disconnect_mBEC1951D664E5B511BE4E78663E106E13D42CB98(NULL);
	}

IL_030a:
	{
		// if (PhotonNetwork.IsConnected && GUILayout.Button("Close Socket"))
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_95;
		L_95 = PhotonNetwork_get_IsConnected_mDEEAF9E141501CCD9CD78A9F11B6D0CAEAE97B11(NULL);
		if (!L_95)
		{
			goto IL_0331;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_96;
		L_96 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_97;
		L_97 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral4E1C2AA5C5C5960342754BDCDC1BC571B5E153B4, L_96, NULL);
		if (!L_97)
		{
			goto IL_0331;
		}
	}
	{
		// PhotonNetwork.NetworkingClient.LoadBalancingPeer.StopThread();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_98 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_99;
		L_99 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_98, NULL);
		VirtualActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_99);
	}

IL_0331:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// if (PhotonNetwork.IsConnected && PhotonNetwork.InRoom && GUILayout.Button("Leave"))
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = PhotonNetwork_get_IsConnected_mDEEAF9E141501CCD9CD78A9F11B6D0CAEAE97B11(NULL);
		if (!L_100)
		{
			goto IL_035c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (!L_101)
		{
			goto IL_035c;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_102;
		L_102 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_103;
		L_103 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralC09F0D4A7B660E1924D2300CB0765C6FFCB6FDE4, L_102, NULL);
		if (!L_103)
		{
			goto IL_035c;
		}
	}
	{
		// PhotonNetwork.LeaveRoom();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_104;
		L_104 = PhotonNetwork_LeaveRoom_mDCAACF6F9544774184AD90123492CAC3F811DC0A((bool)1, NULL);
	}

IL_035c:
	{
		// if (PhotonNetwork.IsConnected && !PhotonNetwork.InRoom && GUILayout.Button("Join Random"))
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_105;
		L_105 = PhotonNetwork_get_IsConnected_mDEEAF9E141501CCD9CD78A9F11B6D0CAEAE97B11(NULL);
		if (!L_105)
		{
			goto IL_0381;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_106;
		L_106 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (L_106)
		{
			goto IL_0381;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_107;
		L_107 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_108;
		L_108 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralB3B1BD9B2FD1433EA56E9AD0E11411666BCDAEBF, L_107, NULL);
		if (!L_108)
		{
			goto IL_0381;
		}
	}
	{
		// PhotonNetwork.JoinRandomRoom();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_109;
		L_109 = PhotonNetwork_JoinRandomRoom_m88524DDB91009AAF7F7DB095EBC96C52A545B68A(NULL);
	}

IL_0381:
	{
		// if (PhotonNetwork.IsConnected && !PhotonNetwork.InRoom && GUILayout.Button("Create Room"))
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_110;
		L_110 = PhotonNetwork_get_IsConnected_mDEEAF9E141501CCD9CD78A9F11B6D0CAEAE97B11(NULL);
		if (!L_110)
		{
			goto IL_03aa;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (L_111)
		{
			goto IL_03aa;
		}
	}
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_112;
		L_112 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		bool L_113;
		L_113 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralA4E23CD3E51379720889C9F4BDA37BE15B3581E0, L_112, NULL);
		if (!L_113)
		{
			goto IL_03aa;
		}
	}
	{
		// PhotonNetwork.CreateRoom(null);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_114;
		L_114 = PhotonNetwork_CreateRoom_m12D48FA7E2BFA9460038A06A7461B5D32404DD28((String_t*)NULL, (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)NULL, (TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
	}

IL_03aa:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_m1A496B300C5FDCEA653A1652CBA173F42E134371(NULL);
		// }
		return;
	}
}
// System.String Photon.Pun.UtilityScripts.StatesGui::PlayerToString(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StatesGui_PlayerToString_m5910943502C5A0C43E56AF607DDB6FB0CEA3E2E6 (StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35E936E5B267BCFCF5DE0347CF1B766A136F7345);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E99550CAD59B3CD2A9A2FE1DDC23F99804CA0E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E80D938B3850F70C375238E85B3E73313649830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C8AD1A913E81B0E242D846F3D93E4E059825744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral980AD35667301A642F24A62DA1C841C6E54DC8E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDBCE744100561DE01D086D0C377C1E8191AE092);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_3 = NULL;
	String_t* G_B8_4 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	int32_t G_B9_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_3 = NULL;
	String_t* G_B11_4 = NULL;
	int32_t G_B13_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_2 = NULL;
	String_t* G_B13_3 = NULL;
	int32_t G_B12_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B14_3 = NULL;
	String_t* G_B14_4 = NULL;
	{
		// if (PhotonNetwork.NetworkingClient == null)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___NetworkingClient_3;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("nwp is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral4E99550CAD59B3CD2A9A2FE1DDC23F99804CA0E6, NULL);
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0017:
	{
		// return string.Format("#{0:00} '{1}'{5} {4}{2} {3} {6}", player.ActorNumber + "/userId:<" + player.UserId + ">", player.NickName, player.IsMasterClient ? "(master)" : "", this.PlayerProps ? player.CustomProperties.ToStringFull() : "", (PhotonNetwork.LocalPlayer.ActorNumber == player.ActorNumber) ? "(you)" : "", player.UserId, player.IsInactive ? " / Is Inactive" : "");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_3 = ___player0;
		int32_t L_4;
		L_4 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_3, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_6 = ___player0;
		String_t* L_7;
		L_7 = Player_get_UserId_m7FAE62845C7080A564297D0BFB285E692A1A234C_inline(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_5, _stringLiteral5E80D938B3850F70C375238E85B3E73313649830, L_7, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_2;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_10 = ___player0;
		String_t* L_11;
		L_11 = Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738_inline(L_10, NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_9;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_13 = ___player0;
		bool L_14;
		L_14 = Player_get_IsMasterClient_m77288AA1F9372448C60757CBB025F7AECA01DDA3(L_13, NULL);
		G_B3_0 = 2;
		G_B3_1 = L_12;
		G_B3_2 = L_12;
		G_B3_3 = _stringLiteral980AD35667301A642F24A62DA1C841C6E54DC8E6;
		if (L_14)
		{
			G_B4_0 = 2;
			G_B4_1 = L_12;
			G_B4_2 = L_12;
			G_B4_3 = _stringLiteral980AD35667301A642F24A62DA1C841C6E54DC8E6;
			goto IL_0062;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		goto IL_0067;
	}

IL_0062:
	{
		G_B5_0 = _stringLiteral35E936E5B267BCFCF5DE0347CF1B766A136F7345;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}

IL_0067:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (RuntimeObject*)G_B5_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = G_B5_3;
		bool L_16 = __this->___PlayerProps_14;
		G_B6_0 = 3;
		G_B6_1 = L_15;
		G_B6_2 = L_15;
		G_B6_3 = G_B5_4;
		if (L_16)
		{
			G_B7_0 = 3;
			G_B7_1 = L_15;
			G_B7_2 = L_15;
			G_B7_3 = G_B5_4;
			goto IL_0079;
		}
	}
	{
		G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0084;
	}

IL_0079:
	{
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_17 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_18;
		L_18 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_17, NULL);
		String_t* L_19;
		L_19 = Extensions_ToStringFull_mAC48EACD33E2EF6430A689C40DFF96C68B5C41D0(L_18, NULL);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0084:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (RuntimeObject*)G_B8_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = G_B8_3;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_21;
		L_21 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		int32_t L_22;
		L_22 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_21, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_23 = ___player0;
		int32_t L_24;
		L_24 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_23, NULL);
		G_B9_0 = 4;
		G_B9_1 = L_20;
		G_B9_2 = L_20;
		G_B9_3 = G_B8_4;
		if ((((int32_t)L_22) == ((int32_t)L_24)))
		{
			G_B10_0 = 4;
			G_B10_1 = L_20;
			G_B10_2 = L_20;
			G_B10_3 = G_B8_4;
			goto IL_00a0;
		}
	}
	{
		G_B11_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_00a5;
	}

IL_00a0:
	{
		G_B11_0 = _stringLiteralCDBCE744100561DE01D086D0C377C1E8191AE092;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_00a5:
	{
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B11_1), (RuntimeObject*)G_B11_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = G_B11_3;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_26 = ___player0;
		String_t* L_27;
		L_27 = Player_get_UserId_m7FAE62845C7080A564297D0BFB285E692A1A234C_inline(L_26, NULL);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_25;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_29 = ___player0;
		bool L_30;
		L_30 = Player_get_IsInactive_m4DDCB652FA77A7DD38F02922C4E411EA4647ED9B_inline(L_29, NULL);
		G_B12_0 = 6;
		G_B12_1 = L_28;
		G_B12_2 = L_28;
		G_B12_3 = G_B11_4;
		if (L_30)
		{
			G_B13_0 = 6;
			G_B13_1 = L_28;
			G_B13_2 = L_28;
			G_B13_3 = G_B11_4;
			goto IL_00c0;
		}
	}
	{
		G_B14_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		goto IL_00c5;
	}

IL_00c0:
	{
		G_B14_0 = _stringLiteral7C8AD1A913E81B0E242D846F3D93E4E059825744;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
	}

IL_00c5:
	{
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B14_1), (RuntimeObject*)G_B14_0);
		String_t* L_31;
		L_31 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B14_4, G_B14_3, NULL);
		return L_31;
	}
}
// System.Void Photon.Pun.UtilityScripts.StatesGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatesGui__ctor_mCCD011490917CAA74F74B64FC9136B66CA340B1E (StatesGui_t981816E0B369EB09BB4267C2F04F2C26C0E6EF8D* __this, const RuntimeMethod* method) 
{
	{
		// public Rect GuiOffset = new Rect(250, 0, 300, 300);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (250.0f), (0.0f), (300.0f), (300.0f), /*hidden argument*/NULL);
		__this->___GuiOffset_4 = L_0;
		// public bool DontDestroy = true;
		__this->___DontDestroy_5 = (bool)1;
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
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::add_OnPlayerNumberingChanged(Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_add_OnPlayerNumberingChanged_m8551D336EEB47A2D69453782E20E623976D44E99 (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* V_0 = NULL;
	PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* V_1 = NULL;
	PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* V_2 = NULL;
	{
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_0 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_1 = V_0;
		V_1 = L_1;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_2 = V_1;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*)CastclassSealed((RuntimeObject*)L_4, PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA_il2cpp_TypeInfo_var));
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_5 = V_2;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_6 = V_1;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*>((&((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7), L_5, L_6);
		V_0 = L_7;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_8 = V_0;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*)L_8) == ((RuntimeObject*)(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::remove_OnPlayerNumberingChanged(Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_remove_OnPlayerNumberingChanged_mE99104AE3D8A8B607D1B569465FA0BA307E5E979 (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* V_0 = NULL;
	PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* V_1 = NULL;
	PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* V_2 = NULL;
	{
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_0 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_1 = V_0;
		V_1 = L_1;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_2 = V_1;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*)CastclassSealed((RuntimeObject*)L_4, PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA_il2cpp_TypeInfo_var));
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_5 = V_2;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_6 = V_1;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*>((&((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7), L_5, L_6);
		V_0 = L_7;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_8 = V_0;
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*)L_8) == ((RuntimeObject*)(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_Awake_m2D01559BE516F9E8D8BA113D78F547495DAA3AC7 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance != this && instance.gameObject != null)
		PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* L_0 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* L_2 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* L_4 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___instance_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// GameObject.DestroyImmediate(instance.gameObject);
		PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* L_7 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___instance_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_8, NULL);
	}

IL_003b:
	{
		// instance = this;
		((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___instance_5), (void*)__this);
		// if (dontDestroyOnLoad)
		bool L_9 = __this->___dontDestroyOnLoad_9;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_10, NULL);
	}

IL_0054:
	{
		// this.RefreshData();
		PlayerNumbering_RefreshData_mBF3FF86F851BE2C224A1B32BCF8DC07A16485D12(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_OnJoinedRoom_m77A67C0B4DB67698D839556155B524EAD7EB4DF8 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, const RuntimeMethod* method) 
{
	{
		// this.RefreshData();
		PlayerNumbering_RefreshData_mBF3FF86F851BE2C224A1B32BCF8DC07A16485D12(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_OnLeftRoom_m832A82DA13A699D08BB4C323CCEFA2CBC9DAC173 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.LocalPlayer.CustomProperties.Remove(PlayerNumbering.RoomPlayerIndexedProp);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0;
		L_0 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1;
		L_1 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_0, NULL);
		bool L_2;
		L_2 = Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86(L_1, _stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6, Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_OnPlayerEnteredRoom_m0737A8E5AF04F74E6708D576900B39E5CC8CC9A2 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newPlayer0, const RuntimeMethod* method) 
{
	{
		// this.RefreshData();
		PlayerNumbering_RefreshData_mBF3FF86F851BE2C224A1B32BCF8DC07A16485D12(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_OnPlayerLeftRoom_m0046D5028C7F1567A0BD8018BFDF0022E953F984 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___otherPlayer0, const RuntimeMethod* method) 
{
	{
		// this.RefreshData();
		PlayerNumbering_RefreshData_mBF3FF86F851BE2C224A1B32BCF8DC07A16485D12(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_OnPlayerPropertiesUpdate_m2323F10811ACCD3A6C74A22C85B82A75EA7BB583 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___targetPlayer0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___changedProps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (changedProps != null && changedProps.ContainsKey(PlayerNumbering.RoomPlayerIndexedProp))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___changedProps1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___changedProps1;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD(L_1, _stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6, Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// this.RefreshData();
		PlayerNumbering_RefreshData_mBF3FF86F851BE2C224A1B32BCF8DC07A16485D12(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::RefreshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering_RefreshData_mBF3FF86F851BE2C224A1B32BCF8DC07A16485D12 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m33EC5729BB0F7AC6474344A1D3C2C0EE34EB3649_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRefreshDataU3Eb__14_0_mE1375696F257E448BFF4E07DAEA89DFDEAD781C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRefreshDataU3Eb__14_1_mDB575FD2EB8387746D62FAC716F141E7D3B33453_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRefreshDataU3Eb__14_2_m830B7C3C77B27FA97B737B423830DAFDF5FF6294_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB84AEE5DD4A62DE003FFE0682EC39B7C9AAC69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC885FDE1E0349C52C54BE77297CA3419A972E72C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCA925A29E3C225E34A46170E11294448B3E8A46);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* V_0 = NULL;
	String_t* V_1 = NULL;
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* V_2 = NULL;
	int32_t V_3 = 0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	int32_t V_8 = 0;
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* G_B5_0 = NULL;
	ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* G_B5_1 = NULL;
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* G_B4_0 = NULL;
	ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* G_B4_1 = NULL;
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* G_B10_0 = NULL;
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* G_B10_1 = NULL;
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* G_B9_0 = NULL;
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* G_B9_1 = NULL;
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* G_B23_0 = NULL;
	ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* G_B23_1 = NULL;
	Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* G_B22_0 = NULL;
	ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* G_B22_1 = NULL;
	{
		// if (PhotonNetwork.CurrentRoom == null)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (PhotonNetwork.LocalPlayer.GetPlayerNumber() >= 0)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1;
		L_1 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		int32_t L_2;
		L_2 = PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7(L_1, NULL);
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		// SortedPlayers = PhotonNetwork.CurrentRoom.Players.Values.OrderBy((p) => p.GetPlayerNumber()).ToArray();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_3;
		L_3 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_4;
		L_4 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065_inline(L_3, NULL);
		ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* L_5;
		L_5 = Dictionary_2_get_Values_m33EC5729BB0F7AC6474344A1D3C2C0EE34EB3649(L_4, Dictionary_2_get_Values_m33EC5729BB0F7AC6474344A1D3C2C0EE34EB3649_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_6 = ((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* L_8 = ((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_9 = (Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8*)il2cpp_codegen_object_new(Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8_il2cpp_TypeInfo_var);
		Func_2__ctor_mEBCED36D0A0E2992256CFB4D29396FB5125815E4(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CRefreshDataU3Eb__14_0_mE1375696F257E448BFF4E07DAEA89DFDEAD781C0_RuntimeMethod_var), NULL);
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_10 = L_9;
		((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_10);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
	}

IL_0043:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4(G_B5_1, G_B5_0, Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4_RuntimeMethod_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_12;
		L_12 = Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5(L_11, Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5_RuntimeMethod_var);
		((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___SortedPlayers_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___SortedPlayers_6), (void*)L_12);
		// if (OnPlayerNumberingChanged != null)
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_13 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// OnPlayerNumberingChanged();
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_14 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7;
		PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_inline(L_14, NULL);
	}

IL_0063:
	{
		// return;
		return;
	}

IL_0064:
	{
		// HashSet<int> usedInts = new HashSet<int>();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_15 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)il2cpp_codegen_object_new(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF(L_15, HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		V_0 = L_15;
		// Player[] sorted = PhotonNetwork.PlayerList.OrderBy((p) => p.ActorNumber).ToArray();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_16;
		L_16 = PhotonNetwork_get_PlayerList_m41DACBC257FBD03BE448DA7259D8BF3B94B94656(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_17 = ((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2;
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_18 = L_17;
		G_B9_0 = L_18;
		G_B9_1 = L_16;
		if (L_18)
		{
			G_B10_0 = L_18;
			G_B10_1 = L_16;
			goto IL_008e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* L_19 = ((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_20 = (Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8*)il2cpp_codegen_object_new(Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8_il2cpp_TypeInfo_var);
		Func_2__ctor_mEBCED36D0A0E2992256CFB4D29396FB5125815E4(L_20, L_19, (intptr_t)((void*)U3CU3Ec_U3CRefreshDataU3Eb__14_1_mDB575FD2EB8387746D62FAC716F141E7D3B33453_RuntimeMethod_var), NULL);
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_21 = L_20;
		((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2), (void*)L_21);
		G_B10_0 = L_21;
		G_B10_1 = G_B9_1;
	}

IL_008e:
	{
		RuntimeObject* L_22;
		L_22 = Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4((RuntimeObject*)G_B10_1, G_B10_0, Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4_RuntimeMethod_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_23;
		L_23 = Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5(L_22, Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5_RuntimeMethod_var);
		// string allPlayers = "all players: ";
		V_1 = _stringLiteralCCA925A29E3C225E34A46170E11294448B3E8A46;
		// foreach (Player player in sorted)
		V_2 = L_23;
		V_3 = 0;
		goto IL_0167;
	}

IL_00a6:
	{
		// foreach (Player player in sorted)
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = L_25;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_4 = L_27;
		// allPlayers += player.ActorNumber + "=pNr:"+player.GetPlayerNumber()+", ";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		String_t* L_30 = V_1;
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_29;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_32 = V_4;
		int32_t L_33;
		L_33 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_32, NULL);
		V_6 = L_33;
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_31;
		ArrayElementTypeCheck (L_35, _stringLiteral7CB84AEE5DD4A62DE003FFE0682EC39B7C9AAC69);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7CB84AEE5DD4A62DE003FFE0682EC39B7C9AAC69);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_37 = V_4;
		int32_t L_38;
		L_38 = PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7(L_37, NULL);
		V_6 = L_38;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_36;
		ArrayElementTypeCheck (L_40, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		String_t* L_41;
		L_41 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_40, NULL);
		V_1 = L_41;
		// int number = player.GetPlayerNumber();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_42 = V_4;
		int32_t L_43;
		L_43 = PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7(L_42, NULL);
		V_5 = L_43;
		// if (player.IsLocal)
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_44 = V_4;
		bool L_45 = L_44->___IsLocal_2;
		if (!L_45)
		{
			goto IL_0155;
		}
	}
	{
		// Debug.Log ("PhotonNetwork.CurrentRoom.PlayerCount = " + PhotonNetwork.CurrentRoom.PlayerCount);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_46;
		L_46 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		uint8_t L_47;
		L_47 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(L_46, NULL);
		V_7 = L_47;
		String_t* L_48;
		L_48 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_7), NULL);
		String_t* L_49;
		L_49 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC885FDE1E0349C52C54BE77297CA3419A972E72C, L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_49, NULL);
		// for (int i = 0; i < PhotonNetwork.CurrentRoom.PlayerCount; i++)
		V_8 = 0;
		goto IL_0145;
	}

IL_012a:
	{
		// if (!usedInts.Contains(i))
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_50 = V_0;
		int32_t L_51 = V_8;
		bool L_52;
		L_52 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_50, L_51, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		if (L_52)
		{
			goto IL_013f;
		}
	}
	{
		// player.SetPlayerNumber(i);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_53 = V_4;
		int32_t L_54 = V_8;
		PlayerNumberingExtensions_SetPlayerNumber_mCA170A02001511B3F5F953A73C35DED7C1813C90(L_53, L_54, NULL);
		// break;
		goto IL_0170;
	}

IL_013f:
	{
		// for (int i = 0; i < PhotonNetwork.CurrentRoom.PlayerCount; i++)
		int32_t L_55 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0145:
	{
		// for (int i = 0; i < PhotonNetwork.CurrentRoom.PlayerCount; i++)
		int32_t L_56 = V_8;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_57;
		L_57 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		uint8_t L_58;
		L_58 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(L_57, NULL);
		if ((((int32_t)L_56) < ((int32_t)L_58)))
		{
			goto IL_012a;
		}
	}
	{
		// break;
		goto IL_0170;
	}

IL_0155:
	{
		// if (number < 0)
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) < ((int32_t)0)))
		{
			goto IL_0170;
		}
	}
	{
		// usedInts.Add(number);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_60 = V_0;
		int32_t L_61 = V_5;
		bool L_62;
		L_62 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_60, L_61, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		int32_t L_63 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0167:
	{
		// foreach (Player player in sorted)
		int32_t L_64 = V_3;
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_65 = V_2;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_00a6;
		}
	}

IL_0170:
	{
		// SortedPlayers = PhotonNetwork.CurrentRoom.Players.Values.OrderBy((p) => p.GetPlayerNumber()).ToArray();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_66;
		L_66 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_67;
		L_67 = Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065_inline(L_66, NULL);
		ValueCollection_t9BC53F8C1E465E800336BB61C37466792EADA6B1* L_68;
		L_68 = Dictionary_2_get_Values_m33EC5729BB0F7AC6474344A1D3C2C0EE34EB3649(L_67, Dictionary_2_get_Values_m33EC5729BB0F7AC6474344A1D3C2C0EE34EB3649_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_69 = ((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_2_3;
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_70 = L_69;
		G_B22_0 = L_70;
		G_B22_1 = L_68;
		if (L_70)
		{
			G_B23_0 = L_70;
			G_B23_1 = L_68;
			goto IL_019e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* L_71 = ((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_72 = (Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8*)il2cpp_codegen_object_new(Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8_il2cpp_TypeInfo_var);
		Func_2__ctor_mEBCED36D0A0E2992256CFB4D29396FB5125815E4(L_72, L_71, (intptr_t)((void*)U3CU3Ec_U3CRefreshDataU3Eb__14_2_m830B7C3C77B27FA97B737B423830DAFDF5FF6294_RuntimeMethod_var), NULL);
		Func_2_t2B3A7FC8E26CAE8436430D5AB21EB327938847A8* L_73 = L_72;
		((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_2_3 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9__14_2_3), (void*)L_73);
		G_B23_0 = L_73;
		G_B23_1 = G_B22_1;
	}

IL_019e:
	{
		RuntimeObject* L_74;
		L_74 = Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4(G_B23_1, G_B23_0, Enumerable_OrderBy_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42A1A4AADEF699D87BD28BC01116EB0C8C1AADF4_RuntimeMethod_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_75;
		L_75 = Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5(L_74, Enumerable_ToArray_TisPlayer_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C_m16B2F7F1017B85153A81D2F230A2B7449C2528D5_RuntimeMethod_var);
		((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___SortedPlayers_6 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___SortedPlayers_6), (void*)L_75);
		// if (OnPlayerNumberingChanged != null)
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_76 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7;
		if (!L_76)
		{
			goto IL_01be;
		}
	}
	{
		// OnPlayerNumberingChanged();
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* L_77 = ((PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC_il2cpp_TypeInfo_var))->___OnPlayerNumberingChanged_7;
		PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_inline(L_77, NULL);
	}

IL_01be:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumbering__ctor_mF29372E199565CEC986EB735ACB8B517C9493958 (PlayerNumbering_t8F33F5B497CD386C7193E3EB283CD4C6846F77BC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
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
void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_Multicast(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* currentDelegate = reinterpret_cast<PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_Open(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_Closed(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, method);
}
void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_OpenStaticInvoker(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_ClosedStaticInvoker(PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumberingChanged__ctor_mAD10305FF2D8347BD273A1848F3CB15CD4F36B80 (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_Multicast;
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64 (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerNumberingChanged_BeginInvoke_m9268B55168ED5FCE8D06F6C875FCA05FCC6BE049 (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumberingChanged_EndInvoke_mD203CA8660AAFA641B35CCC9CF40C89F6D826451 (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE2BB8F9F660235090FCF68FD9555352C2F406AA2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* L_0 = (U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7*)il2cpp_codegen_object_new(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD9893DAFB702631B93542B3DFA70750503E67B36(L_0, NULL);
		((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumbering/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD9893DAFB702631B93542B3DFA70750503E67B36 (U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Photon.Pun.UtilityScripts.PlayerNumbering/<>c::<RefreshData>b__14_0(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRefreshDataU3Eb__14_0_mE1375696F257E448BFF4E07DAEA89DFDEAD781C0 (U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___p0, const RuntimeMethod* method) 
{
	{
		// SortedPlayers = PhotonNetwork.CurrentRoom.Players.Values.OrderBy((p) => p.GetPlayerNumber()).ToArray();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___p0;
		int32_t L_1;
		L_1 = PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Photon.Pun.UtilityScripts.PlayerNumbering/<>c::<RefreshData>b__14_1(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRefreshDataU3Eb__14_1_mDB575FD2EB8387746D62FAC716F141E7D3B33453 (U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___p0, const RuntimeMethod* method) 
{
	{
		// Player[] sorted = PhotonNetwork.PlayerList.OrderBy((p) => p.ActorNumber).ToArray();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___p0;
		int32_t L_1;
		L_1 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Photon.Pun.UtilityScripts.PlayerNumbering/<>c::<RefreshData>b__14_2(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRefreshDataU3Eb__14_2_m830B7C3C77B27FA97B737B423830DAFDF5FF6294 (U3CU3Ec_tEAF67AA21B27D7A5978789FE0D87F954FCF279B7* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___p0, const RuntimeMethod* method) 
{
	{
		// SortedPlayers = PhotonNetwork.CurrentRoom.Players.Values.OrderBy((p) => p.GetPlayerNumber()).ToArray();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___p0;
		int32_t L_1;
		L_1 = PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7(L_0, NULL);
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
// System.Int32 Photon.Pun.UtilityScripts.PlayerNumberingExtensions::GetPlayerNumber(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (player == null) {
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___player0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0005:
	{
		// if (PhotonNetwork.OfflineMode)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PhotonNetwork_get_OfflineMode_m6CE5DD1BEDC91807E215EAD144C476CA1D585178_inline(NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000e:
	{
		// if (!PhotonNetwork.IsConnectedAndReady)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PhotonNetwork_get_IsConnectedAndReady_m5BCD9680B6353BA0006AECC24FCD7AE9CA451A00(NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0017:
	{
		// if (player.CustomProperties.TryGetValue (PlayerNumbering.RoomPlayerIndexedProp, out value)) {
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_3 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4;
		L_4 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_3, NULL);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_4, _stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return (byte)value;
		RuntimeObject* L_6 = V_0;
		return ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_6, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
	}

IL_0032:
	{
		// return -1;
		return (-1);
	}
}
// System.Void Photon.Pun.UtilityScripts.PlayerNumberingExtensions::SetPlayerNumber(Photon.Realtime.Player,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNumberingExtensions_SetPlayerNumber_mCA170A02001511B3F5F953A73C35DED7C1813C90 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, int32_t ___playerNumber1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A8B1306FEC63C6C6AB07D536AFDE562EA7E0990);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F517814D5AA500B2744DE501E2A2A59BF400711);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F9A7AE4A82B8263197103F0AE79A192BCD2E6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41A125B55DB2C48BDEDA549263BD4DDF6F2DEF88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25BA35395B7D2753B89242F5EB5E1C452C1C355);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (player == null) {
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___player0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (PhotonNetwork.OfflineMode)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PhotonNetwork_get_OfflineMode_m6CE5DD1BEDC91807E215EAD144C476CA1D585178_inline(NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// if (playerNumber < 0)
		int32_t L_2 = ___playerNumber1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogWarning("Setting invalid playerNumber: " + playerNumber + " for: " + player.ToStringFull());
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerNumber1), NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4 = ___player0;
		String_t* L_5;
		L_5 = Player_ToStringFull_m50E222716E05BD89E22BD7A15E16524335478B22(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral41A125B55DB2C48BDEDA549263BD4DDF6F2DEF88, L_3, _stringLiteral3F517814D5AA500B2744DE501E2A2A59BF400711, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_6, NULL);
	}

IL_0031:
	{
		// if (!PhotonNetwork.IsConnectedAndReady)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = PhotonNetwork_get_IsConnectedAndReady_m5BCD9680B6353BA0006AECC24FCD7AE9CA451A00(NULL);
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogWarning("SetPlayerNumber was called in state: " + PhotonNetwork.NetworkClientState + ". Not IsConnectedAndReady.");
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = PhotonNetwork_get_NetworkClientState_mB9C769F7CA93BA39EE6AB259FFD8B716C3D6ACFD(NULL);
		V_0 = L_8;
		Il2CppFakeBox<int32_t> L_9(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral3F9A7AE4A82B8263197103F0AE79A192BCD2E6A2, L_10, _stringLiteralA25BA35395B7D2753B89242F5EB5E1C452C1C355, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_11, NULL);
		// return;
		return;
	}

IL_0060:
	{
		// int current = player.GetPlayerNumber();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_12 = ___player0;
		int32_t L_13;
		L_13 = PlayerNumberingExtensions_GetPlayerNumber_mAFAF44FBFB7052D628B0D135F8B045B11F92F8E7(L_12, NULL);
		// if (current != playerNumber)
		int32_t L_14 = ___playerNumber1;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_009e;
		}
	}
	{
		// Debug.Log("PlayerNumbering: Set number "+playerNumber);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___playerNumber1), NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0A8B1306FEC63C6C6AB07D536AFDE562EA7E0990, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
		// player.SetCustomProperties(new Hashtable() { { PlayerNumbering.RoomPlayerIndexedProp, (byte)playerNumber } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_17 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_18 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_18, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_19 = L_18;
		int32_t L_20 = ___playerNumber1;
		uint8_t L_21 = ((uint8_t)((int32_t)(uint8_t)L_20));
		RuntimeObject* L_22 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_21);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_19, _stringLiteralC8EFB233C80242958896D4E6CBE69BCFE68F95D6, L_22, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		Player_SetCustomProperties_mDC89663AFD894E3772E3A44D261667922873584C(L_17, L_19, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
	}

IL_009e:
	{
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
// System.Void Photon.Pun.UtilityScripts.PunPlayerScores::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunPlayerScores__ctor_m76AD650F5DE93D6F9755C388B643840930540922 (PunPlayerScores_t37F6FB5D0EDA234746D7A4E6988485235239BFE1* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.ScoreExtensions::SetScore(Photon.Realtime.Player,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreExtensions_SetScore_mD5096B15777AE2F6B1543A0B470C07285E750A8F (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, int32_t ___newScore1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_0 = NULL;
	{
		// Hashtable score = new Hashtable();  // using PUN's implementation of Hashtable
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_0, NULL);
		V_0 = L_0;
		// score[PunPlayerScores.PlayerScoreProp] = newScore;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = V_0;
		int32_t L_2 = ___newScore1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		Hashtable_set_Item_m625527D848F5AF5C6B1F88CE5DC2B6F283C096FF(L_1, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_4, NULL);
		// player.SetCustomProperties(score);  // this locally sets the score and will sync it in-game asap.
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_5 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_6 = V_0;
		Player_SetCustomProperties_mDC89663AFD894E3772E3A44D261667922873584C(L_5, L_6, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ScoreExtensions::AddScore(Photon.Realtime.Player,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreExtensions_AddScore_mDD86A2ECFE30AA4F34919AFEAD0E22B2DFF3E826 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, int32_t ___scoreToAddToCurrent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_1 = NULL;
	{
		// int current = player.GetScore();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___player0;
		int32_t L_1;
		L_1 = ScoreExtensions_GetScore_m5F24DA0D4339A5E544F788D0C65FC8D496A22092(L_0, NULL);
		V_0 = L_1;
		// current = current + scoreToAddToCurrent;
		int32_t L_2 = V_0;
		int32_t L_3 = ___scoreToAddToCurrent1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		// Hashtable score = new Hashtable();  // using PUN's implementation of Hashtable
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_4, NULL);
		V_1 = L_4;
		// score[PunPlayerScores.PlayerScoreProp] = current;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		Hashtable_set_Item_m625527D848F5AF5C6B1F88CE5DC2B6F283C096FF(L_5, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_8, NULL);
		// player.SetCustomProperties(score);  // this locally sets the score and will sync it in-game asap.
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_9 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_10 = V_1;
		Player_SetCustomProperties_mDC89663AFD894E3772E3A44D261667922873584C(L_9, L_10, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		// }
		return;
	}
}
// System.Int32 Photon.Pun.UtilityScripts.ScoreExtensions::GetScore(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreExtensions_GetScore_m5F24DA0D4339A5E544F788D0C65FC8D496A22092 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (player.CustomProperties.TryGetValue(PunPlayerScores.PlayerScoreProp, out score))
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1;
		L_1 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_0, NULL);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_1, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return (int)score;
		RuntimeObject* L_3 = V_0;
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_3, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_001b:
	{
		// return 0;
		return 0;
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
// System.Void Photon.Pun.UtilityScripts.PunTeams::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_Start_m1F7D6B77465FABB6A1EFE655EACA5931A2BE3DF5 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0F3E747DAA97215CEE01830562357426F2C7F78E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A92CDE1CED53E8B81A082BFE93793E2EE580CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// PlayersPerTeam = new Dictionary<Team, List<Player>>();
		Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* L_0 = (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698*)il2cpp_codegen_object_new(Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2(L_0, Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2_RuntimeMethod_var);
		((PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields*)il2cpp_codegen_static_fields_for(PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var))->___PlayersPerTeam_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields*)il2cpp_codegen_static_fields_for(PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var))->___PlayersPerTeam_5), (void*)L_0);
		// Array enumVals = Enum.GetValues(typeof(Team));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_3;
		L_3 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_2, NULL);
		// foreach (var enumVal in enumVals)
		RuntimeObject* L_4;
		L_4 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_2;
					if (!L_6)
					{
						goto IL_0057;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0057:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_0021_1:
			{
				// foreach (var enumVal in enumVals)
				RuntimeObject* L_8 = V_0;
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_1 = L_9;
				// PlayersPerTeam[(Team)enumVal] = new List<Player>();
				Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* L_10 = ((PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields*)il2cpp_codegen_static_fields_for(PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var))->___PlayersPerTeam_5;
				RuntimeObject* L_11 = V_1;
				List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* L_12 = (List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772*)il2cpp_codegen_object_new(List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772_il2cpp_TypeInfo_var);
				List_1__ctor_m0A92CDE1CED53E8B81A082BFE93793E2EE580CF6(L_12, List_1__ctor_m0A92CDE1CED53E8B81A082BFE93793E2EE580CF6_RuntimeMethod_var);
				Dictionary_2_set_Item_m0F3E747DAA97215CEE01830562357426F2C7F78E(L_10, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_11, Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_il2cpp_TypeInfo_var)))), L_12, Dictionary_2_set_Item_m0F3E747DAA97215CEE01830562357426F2C7F78E_RuntimeMethod_var);
			}

IL_003d_1:
			{
				// foreach (var enumVal in enumVals)
				RuntimeObject* L_13 = V_0;
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_OnDisable_m303518F52445DC7986C92ED3F07F114B2A30F7BF (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayersPerTeam = new Dictionary<Team, List<Player>>();
		Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* L_0 = (Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698*)il2cpp_codegen_object_new(Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2(L_0, Dictionary_2__ctor_m603FA91D61CF521332B20D83BFB0EA4104F761E2_RuntimeMethod_var);
		((PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields*)il2cpp_codegen_static_fields_for(PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var))->___PlayersPerTeam_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields*)il2cpp_codegen_static_fields_for(PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var))->___PlayersPerTeam_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_OnJoinedRoom_mAAE57029083EBB6B804C72364BE95B4297CA9B33 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) 
{
	{
		// this.UpdateTeams();
		PunTeams_UpdateTeams_m7D7FDA587D0A136E2A6DA4B4519A9CAFB23B9F13(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_OnLeftRoom_m76DB7E8D8E74050590DBC3F8F48553BE84F82FA8 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) 
{
	{
		// Start();
		PunTeams_Start_m1F7D6B77465FABB6A1EFE655EACA5931A2BE3DF5(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_OnPlayerPropertiesUpdate_m3DF9842B6754F62190838E93DFE4DD1B67D5791E (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___targetPlayer0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___changedProps1, const RuntimeMethod* method) 
{
	{
		// this.UpdateTeams();
		PunTeams_UpdateTeams_m7D7FDA587D0A136E2A6DA4B4519A9CAFB23B9F13(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_OnPlayerLeftRoom_m2FA7956E8FBEDC98498280DB88BEF0A3F584DACD (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___otherPlayer0, const RuntimeMethod* method) 
{
	{
		// this.UpdateTeams();
		PunTeams_UpdateTeams_m7D7FDA587D0A136E2A6DA4B4519A9CAFB23B9F13(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_OnPlayerEnteredRoom_mA2427BFAF8B82978772D826EA4EF27F4828823A2 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newPlayer0, const RuntimeMethod* method) 
{
	{
		// this.UpdateTeams();
		PunTeams_UpdateTeams_m7D7FDA587D0A136E2A6DA4B4519A9CAFB23B9F13(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::UpdateTeams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams_UpdateTeams_m7D7FDA587D0A136E2A6DA4B4519A9CAFB23B9F13 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m98552B39ADBFD18F02180BF9AC375CBD662DEAC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C3CC8A5379A1C25C13BF70636E7BC872140188B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF66FD30F5B9BB125976D7E864FCBE76B6AF5FA04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_4 = NULL;
	uint8_t V_5 = 0;
	{
		// Array enumVals = Enum.GetValues(typeof(Team));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_1, NULL);
		// foreach (var enumVal in enumVals)
		RuntimeObject* L_3;
		L_3 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_0017_1:
			{
				// foreach (var enumVal in enumVals)
				RuntimeObject* L_7 = V_0;
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				// PlayersPerTeam[(Team)enumVal].Clear();
				Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* L_9 = ((PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields*)il2cpp_codegen_static_fields_for(PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var))->___PlayersPerTeam_5;
				RuntimeObject* L_10 = V_1;
				List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* L_11;
				L_11 = Dictionary_2_get_Item_m98552B39ADBFD18F02180BF9AC375CBD662DEAC3(L_9, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_10, Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_il2cpp_TypeInfo_var)))), Dictionary_2_get_Item_m98552B39ADBFD18F02180BF9AC375CBD662DEAC3_RuntimeMethod_var);
				List_1_Clear_mF66FD30F5B9BB125976D7E864FCBE76B6AF5FA04_inline(L_11, List_1_Clear_mF66FD30F5B9BB125976D7E864FCBE76B6AF5FA04_RuntimeMethod_var);
			}

IL_0033_1:
			{
				// foreach (var enumVal in enumVals)
				RuntimeObject* L_12 = V_0;
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// for (int i = 0; i < PhotonNetwork.PlayerList.Length; i++)
		V_3 = 0;
		goto IL_007b;
	}

IL_0052:
	{
		// Player player = PhotonNetwork.PlayerList[i];
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_14;
		L_14 = PhotonNetwork_get_PlayerList_m41DACBC257FBD03BE448DA7259D8BF3B94B94656(NULL);
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		// Team playerTeam = player.GetTeam();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_18 = V_4;
		uint8_t L_19;
		L_19 = TeamExtensions_GetTeam_mEF750A196D40D83EA566679CC63BD2F3F4DF2CCD(L_18, NULL);
		V_5 = L_19;
		// PlayersPerTeam[playerTeam].Add(player);
		Dictionary_2_tE2DBCBF38FD2A4ADEA266485DCB5FA8DA3A67698* L_20 = ((PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_StaticFields*)il2cpp_codegen_static_fields_for(PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000_il2cpp_TypeInfo_var))->___PlayersPerTeam_5;
		uint8_t L_21 = V_5;
		List_1_t57E7719C01E138DEC0DB59BCD2E0CA93C6EF6772* L_22;
		L_22 = Dictionary_2_get_Item_m98552B39ADBFD18F02180BF9AC375CBD662DEAC3(L_20, L_21, Dictionary_2_get_Item_m98552B39ADBFD18F02180BF9AC375CBD662DEAC3_RuntimeMethod_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_23 = V_4;
		List_1_Add_m3C3CC8A5379A1C25C13BF70636E7BC872140188B_inline(L_22, L_23, List_1_Add_m3C3CC8A5379A1C25C13BF70636E7BC872140188B_RuntimeMethod_var);
		// for (int i = 0; i < PhotonNetwork.PlayerList.Length; i++)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007b:
	{
		// for (int i = 0; i < PhotonNetwork.PlayerList.Length; i++)
		int32_t L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_26;
		L_26 = PhotonNetwork_get_PlayerList_m41DACBC257FBD03BE448DA7259D8BF3B94B94656(NULL);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0052;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTeams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTeams__ctor_mBCDFC73BBF1FFD874610033F53358FBE890941E3 (PunTeams_t1FB70083A80ADF04F33D7747ABB5804305B3A000* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
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
// Photon.Pun.UtilityScripts.PunTeams/Team Photon.Pun.UtilityScripts.TeamExtensions::GetTeam(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TeamExtensions_GetTeam_mEF750A196D40D83EA566679CC63BD2F3F4DF2CCD (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46E5EAC80D178B0AD56E0F31623015D1A5E87EA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (player.CustomProperties.TryGetValue(PunTeams.TeamPlayerProp, out teamId))
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1;
		L_1 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_0, NULL);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_1, _stringLiteralE46E5EAC80D178B0AD56E0F31623015D1A5E87EA, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return (PunTeams.Team)teamId;
		RuntimeObject* L_3 = V_0;
		return ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_3, Team_t37C1E1CB293D02566574D04702B3567BDBEBE3AC_il2cpp_TypeInfo_var))));
	}

IL_001b:
	{
		// return PunTeams.Team.none;
		return (uint8_t)(0);
	}
}
// System.Void Photon.Pun.UtilityScripts.TeamExtensions::SetTeam(Photon.Realtime.Player,Photon.Pun.UtilityScripts.PunTeams/Team)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamExtensions_SetTeam_m297AC7E5507795697A19960AB19C353A5313EF38 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, uint8_t ___team1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58E7FBE2C87F9E67A5D0A23FDF4735E08D6037B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25BA35395B7D2753B89242F5EB5E1C452C1C355);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46E5EAC80D178B0AD56E0F31623015D1A5E87EA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!PhotonNetwork.IsConnectedAndReady)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_IsConnectedAndReady_m5BCD9680B6353BA0006AECC24FCD7AE9CA451A00(NULL);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogWarning("JoinTeam was called in state: " + PhotonNetwork.NetworkClientState + ". Not IsConnectedAndReady.");
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = PhotonNetwork_get_NetworkClientState_mB9C769F7CA93BA39EE6AB259FFD8B716C3D6ACFD(NULL);
		V_0 = L_1;
		Il2CppFakeBox<int32_t> L_2(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral58E7FBE2C87F9E67A5D0A23FDF4735E08D6037B9, L_3, _stringLiteralA25BA35395B7D2753B89242F5EB5E1C452C1C355, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_4, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// PunTeams.Team currentTeam = player.GetTeam();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_5 = ___player0;
		uint8_t L_6;
		L_6 = TeamExtensions_GetTeam_mEF750A196D40D83EA566679CC63BD2F3F4DF2CCD(L_5, NULL);
		// if (currentTeam != team)
		uint8_t L_7 = ___team1;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0056;
		}
	}
	{
		// player.SetCustomProperties(new Hashtable() { { PunTeams.TeamPlayerProp, (byte)team } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_8 = ___player0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_9 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_9, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_10 = L_9;
		uint8_t L_11 = ___team1;
		uint8_t L_12 = ((uint8_t)L_11);
		RuntimeObject* L_13 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_12);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_10, _stringLiteralE46E5EAC80D178B0AD56E0F31623015D1A5E87EA, L_13, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		Player_SetCustomProperties_mDC89663AFD894E3772E3A44D261667922873584C(L_8, L_10, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
	}

IL_0056:
	{
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
// System.Void Photon.Pun.UtilityScripts.SmoothSyncMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothSyncMovement_Awake_mEB724BFB41E1F24B6EDE6C718C7F6A44ADBF27D0 (SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90C99A81FBECE3E0B0C8445142229E1276C14CA4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C* G_B10_0 = NULL;
	SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C* G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	{
		// bool observed = false;
		V_0 = (bool)0;
		// foreach (Component observedComponent in this.photonView.ObservedComponents)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* L_1 = L_0->___ObservedComponents_15;
		Enumerator_t8AE7856BDBCD56AF8CF73DF1F4C5AB961240A059 L_2;
		L_2 = List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA(L_1, List_1_GetEnumerator_mF16DA9C4C341E2A53C8218426BEF1823562CAAAA_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF((&V_1), Enumerator_Dispose_m3342D97220B83B489180A7951E584D061EB1B7AF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0015_1:
			{
				// foreach (Component observedComponent in this.photonView.ObservedComponents)
				Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
				L_3 = Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_inline((&V_1), Enumerator_get_Current_m74A675DCBEB527D2B5D0977980E1580FDB6DB79B_RuntimeMethod_var);
				// if (observedComponent == this)
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, __this, NULL);
				if (!L_4)
				{
					goto IL_0028_1;
				}
			}
			{
				// observed = true;
				V_0 = (bool)1;
				// break;
				goto IL_0041;
			}

IL_0028_1:
			{
				// foreach (Component observedComponent in this.photonView.ObservedComponents)
				bool L_5;
				L_5 = Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF((&V_1), Enumerator_MoveNext_m1177ED7D71AD0FDC72467A25B3636233406D2FFF_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// if (!observed)
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogWarning(this + " is not observed by this object's photonView! OnPhotonSerializeView() in this class won't be used.");
		G_B9_0 = __this;
		if (__this)
		{
			G_B10_0 = __this;
			goto IL_004c;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		goto IL_0051;
	}

IL_004c:
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B10_0);
		G_B11_0 = L_7;
	}

IL_0051:
	{
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B11_0, _stringLiteral90C99A81FBECE3E0B0C8445142229E1276C14CA4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_8, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.SmoothSyncMovement::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothSyncMovement_OnPhotonSerializeView_m598D45B9F273B0AE56A9D34E5A73CBDB9998A581 (SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C* __this, PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* ___stream0, PhotonMessageInfo_tBA8653D413ADDF1C1329026FA1B84F1BD4F203CA ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stream.IsWriting)
		PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* L_0 = ___stream0;
		bool L_1;
		L_1 = PhotonStream_get_IsWriting_m7D9C8E96E51841AC62FC8884C2F8222821BD5ABE_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// stream.SendNext(transform.position);
		PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* L_2 = ___stream0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_5);
		PhotonStream_SendNext_mC4D9796E0A8F4866B7EE983B7F161A55A2FCD5DC(L_2, L_6, NULL);
		// stream.SendNext(transform.rotation);
		PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* L_7 = ___stream0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9;
		RuntimeObject* L_11 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_10);
		PhotonStream_SendNext_mC4D9796E0A8F4866B7EE983B7F161A55A2FCD5DC(L_7, L_11, NULL);
		return;
	}

IL_0035:
	{
		// correctPlayerPos = (Vector3)stream.ReceiveNext();
		PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* L_12 = ___stream0;
		RuntimeObject* L_13;
		L_13 = PhotonStream_ReceiveNext_m364CE7D424FA3F237662BC8A89D7AA6BDA6335C0(L_12, NULL);
		__this->___correctPlayerPos_6 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_13, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// correctPlayerRot = (Quaternion)stream.ReceiveNext();
		PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* L_14 = ___stream0;
		RuntimeObject* L_15;
		L_15 = PhotonStream_ReceiveNext_m364CE7D424FA3F237662BC8A89D7AA6BDA6335C0(L_14, NULL);
		__this->___correctPlayerRot_7 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_15, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.SmoothSyncMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothSyncMovement_Update_mF104809969A55F13EF33FB62ED95C92DD79228DE (SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C* __this, const RuntimeMethod* method) 
{
	{
		// if (!photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648(L_0, NULL);
		if (L_1)
		{
			goto IL_0067;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, correctPlayerPos, Time.deltaTime * this.SmoothingDelay);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___correctPlayerPos_6;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_7 = __this->___SmoothingDelay_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_8, NULL);
		// transform.rotation = Quaternion.Lerp(transform.rotation, correctPlayerRot, Time.deltaTime * this.SmoothingDelay);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___correctPlayerRot_7;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_14 = __this->___SmoothingDelay_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_11, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_15, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.SmoothSyncMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothSyncMovement__ctor_mBA94CC8F907D503E4E35FE650DA3AFCABD639F2C (SmoothSyncMovement_t6C045AA8739EC8BD35BC22651EA56CD55B48940C* __this, const RuntimeMethod* method) 
{
	{
		// public float SmoothingDelay = 5;
		__this->___SmoothingDelay_5 = (5.0f);
		// private Vector3 correctPlayerPos = Vector3.zero; //We lerp towards this
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___correctPlayerPos_6 = L_0;
		// private Quaternion correctPlayerRot = Quaternion.identity; //We lerp towards this
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___correctPlayerRot_7 = L_1;
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
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
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_Start_m2B8356101A4BC7B4EBD6FABD71DDE1EE43F8E39F (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, const RuntimeMethod* method) 
{
	{
		// if (this.AutoConnect)
		bool L_0 = __this->___AutoConnect_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// this.ConnectNow();
		ConnectAndJoinRandom_ConnectNow_m4C39E85AF5C67D4995569F94CB60324434914E71(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::ConnectNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_ConnectNow_m4C39E85AF5C67D4995569F94CB60324434914E71 (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ED41D1844D45D2131D7BC5525D29BBC10F978FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("ConnectAndJoinRandom.ConnectNow() will now call: PhotonNetwork.ConnectUsingSettings().");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7ED41D1844D45D2131D7BC5525D29BBC10F978FF, NULL);
		// PhotonNetwork.ConnectUsingSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_ConnectUsingSettings_mB2A659A9684CAC6BBBA81F453E31C765DA29E13D(NULL);
		// PhotonNetwork.GameVersion = this.Version + "." + SceneManagerHelper.ActiveSceneBuildIndex;
		uint8_t* L_1 = (&__this->___Version_6);
		String_t* L_2;
		L_2 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4(L_1, NULL);
		int32_t L_3;
		L_3 = SceneManagerHelper_get_ActiveSceneBuildIndex_mDADE4464E35190F3241F3AF8F5666B1FFEF97E73(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		PhotonNetwork_set_GameVersion_mB0D2CE96F0F56E32D766759F4A8156797C414731(L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_OnConnectedToMaster_m67A2A991CD354630598EDDD39F1A85F8BB30B801 (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral090A10B2D38316193C6506131523C99A9EFAC26F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnConnectedToMaster() was called by PUN. Now this client is connected and could join a room. Calling: PhotonNetwork.JoinRandomRoom();");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral090A10B2D38316193C6506131523C99A9EFAC26F, NULL);
		// PhotonNetwork.JoinRandomRoom();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_JoinRandomRoom_m88524DDB91009AAF7F7DB095EBC96C52A545B68A(NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_OnJoinedLobby_m2178E0E147E69CC3EBF3D9CE3F38796F4D0922FB (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6410B4F90F62C6122BEEEF64D359EFDCC8C2E07F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedLobby(). This client is connected. This script now calls: PhotonNetwork.JoinRandomRoom();");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6410B4F90F62C6122BEEEF64D359EFDCC8C2E07F, NULL);
		// PhotonNetwork.JoinRandomRoom();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_JoinRandomRoom_m88524DDB91009AAF7F7DB095EBC96C52A545B68A(NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_OnJoinRandomFailed_m60F4670A54E40D84DF705708A04BCDB02F5DC57C (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF972437F7FB14590DA063E54E84D90E9E250A129);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinRandomFailed() was called by PUN. No random room available, so we create one. Calling: PhotonNetwork.CreateRoom(null, new RoomOptions() {maxPlayers = 4}, null);");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF972437F7FB14590DA063E54E84D90E9E250A129, NULL);
		// PhotonNetwork.CreateRoom(null, new RoomOptions() { MaxPlayers = 4 }, null);
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_0 = (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)il2cpp_codegen_object_new(RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8(L_0, NULL);
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_1 = L_0;
		L_1->___MaxPlayers_2 = (uint8_t)4;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PhotonNetwork_CreateRoom_m12D48FA7E2BFA9460038A06A7461B5D32404DD28((String_t*)NULL, L_1, (TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_OnDisconnected_m93331D470A992DD965F7776014871C19552B7C9C (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, int32_t ___cause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected("+cause+")");
		Il2CppFakeBox<int32_t> L_0(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, (&___cause0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E, L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom_OnJoinedRoom_mA71FC1305A3A8E7E6800088B6941AF48EA01EFDA (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19FA00613CDA0F9319738E88B0F5F2DAB6398235);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedRoom() called by PUN. Now this client is in a room. From here on, your game would be running.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral19FA00613CDA0F9319738E88B0F5F2DAB6398235, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ConnectAndJoinRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandom__ctor_mDA2E8672CF354E4331996F05E0F1A39EF77F42C4 (ConnectAndJoinRandom_t4290476999FDE577897128D8C289AF3BFBC9C055* __this, const RuntimeMethod* method) 
{
	{
		// public bool AutoConnect = true;
		__this->___AutoConnect_5 = (bool)1;
		// public byte Version = 1;
		__this->___Version_6 = (uint8_t)1;
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
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
// System.Void Photon.Pun.UtilityScripts.MoveByKeys::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByKeys_Start_m174376104E1E23BCBA6E5CEB983DEDC4DE388B5D (MoveByKeys_t231D556E8EF98714701971423107BFF3CCFA8A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.isSprite = (GetComponent<SpriteRenderer>() != null);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___isSprite_8 = L_1;
		// this.body2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___body2d_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body2d_11), (void*)L_2);
		// this.body = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___body_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.MoveByKeys::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByKeys_FixedUpdate_m4CD43AFF95175BF3D1DF61C742C3DBBA47DF2940 (MoveByKeys_t231D556E8EF98714701971423107BFF3CCFA8A5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if ((Input.GetAxisRaw("Horizontal") < -0.1f) || (Input.GetAxisRaw("Horizontal") > 0.1f))
		float L_2;
		L_2 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((((float)L_2) < ((float)(-0.100000001f))))
		{
			goto IL_0030;
		}
	}
	{
		float L_3;
		L_3 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_3) > ((float)(0.100000001f)))))
		{
			goto IL_006b;
		}
	}

IL_0030:
	{
		// transform.position += Vector3.right * (Speed * Time.deltaTime) * Input.GetAxisRaw("Horizontal");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_8 = __this->___Speed_5;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		float L_11;
		L_11 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_12, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_13, NULL);
	}

IL_006b:
	{
		// if (this.jumpingTime <= 0.0f)
		float L_14 = __this->___jumpingTime_9;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_00f7;
		}
	}
	{
		// if (this.body != null || this.body2d != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___body_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_0094;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_17 = __this->___body2d_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0109;
		}
	}

IL_0094:
	{
		// if (Input.GetKey(KeyCode.Space))
		bool L_19;
		L_19 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)32), NULL);
		if (!L_19)
		{
			goto IL_0109;
		}
	}
	{
		// this.jumpingTime = this.JumpTimeout;
		float L_20 = __this->___JumpTimeout_7;
		__this->___jumpingTime_9 = L_20;
		// Vector2 jump = Vector2.up * this.JumpForce;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_22 = __this->___JumpForce_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_21, L_22, NULL);
		V_0 = L_23;
		// if (this.body2d != null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24 = __this->___body2d_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00d6;
		}
	}
	{
		// this.body2d.AddForce(jump);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_26 = __this->___body2d_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_26, L_27, NULL);
		goto IL_0109;
	}

IL_00d6:
	{
		// else if (this.body != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = __this->___body_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_0109;
		}
	}
	{
		// this.body.AddForce(jump);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___body_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_31, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_30, L_32, NULL);
		goto IL_0109;
	}

IL_00f7:
	{
		// this.jumpingTime -= Time.deltaTime;
		float L_33 = __this->___jumpingTime_9;
		float L_34;
		L_34 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___jumpingTime_9 = ((float)il2cpp_codegen_subtract(L_33, L_34));
	}

IL_0109:
	{
		// if (!this.isSprite)
		bool L_35 = __this->___isSprite_8;
		if (L_35)
		{
			goto IL_016e;
		}
	}
	{
		// if ((Input.GetAxisRaw("Vertical") < -0.1f) || (Input.GetAxisRaw("Vertical") > 0.1f))
		float L_36;
		L_36 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((((float)L_36) < ((float)(-0.100000001f))))
		{
			goto IL_0133;
		}
	}
	{
		float L_37;
		L_37 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_37) > ((float)(0.100000001f)))))
		{
			goto IL_016e;
		}
	}

IL_0133:
	{
		// transform.position += Vector3.forward * (Speed * Time.deltaTime) * Input.GetAxisRaw("Vertical");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_42 = __this->___Speed_5;
		float L_43;
		L_43 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, ((float)il2cpp_codegen_multiply(L_42, L_43)), NULL);
		float L_45;
		L_45 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_40, L_46, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_39, L_47, NULL);
	}

IL_016e:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.MoveByKeys::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByKeys__ctor_m2C49FF561B7B3AB099B04D890845C50C377C8F20 (MoveByKeys_t231D556E8EF98714701971423107BFF3CCFA8A5E* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed = 10f;
		__this->___Speed_5 = (10.0f);
		// public float JumpForce = 200f;
		__this->___JumpForce_6 = (200.0f);
		// public float JumpTimeout = 0.5f;
		__this->___JumpTimeout_7 = (0.5f);
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
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
// System.Void Photon.Pun.UtilityScripts.OnClickDestroy::UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickDestroy_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_mF1FA22275E5BA4AF97F85F2FFEC7FF0703FA3012 (OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD958EA97C55DAFB285DBA2D53A8E7584F9DBC99D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PhotonNetwork.InRoom || (this.ModifierKey != KeyCode.None && !Input.GetKey(this.ModifierKey)) || eventData.button != this.Button )
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = __this->___ModifierKey_6;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___ModifierKey_6;
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_001c:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		int32_t L_5;
		L_5 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_4, NULL);
		int32_t L_6 = __this->___Button_5;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// if (this.DestroyByRpc)
		bool L_7 = __this->___DestroyByRpc_7;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// this.photonView.RPC("DestroyRpc", RpcTarget.AllBuffered);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_8;
		L_8 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_8, _stringLiteralD958EA97C55DAFB285DBA2D53A8E7584F9DBC99D, 3, L_9, NULL);
		return;
	}

IL_004a:
	{
		// PhotonNetwork.Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_Destroy_m60271BBE2EF6DF3C63689B01FF907E68EA14688A(L_10, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Photon.Pun.UtilityScripts.OnClickDestroy::DestroyRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClickDestroy_DestroyRpc_mF68DC88B286753B061684C3F932D2AA61F336BC2 (OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* L_0 = (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3*)il2cpp_codegen_object_new(U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3_il2cpp_TypeInfo_var);
		U3CDestroyRpcU3Ed__4__ctor_mE63A5D3FDB7B86FDEE8CF6C2C6947637C70AA34F(L_0, 0, NULL);
		U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickDestroy__ctor_m955AAF958B46C8DFE8AFD3B25D0F8BAAC8002C86 (OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
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
// System.Void Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyRpcU3Ed__4__ctor_mE63A5D3FDB7B86FDEE8CF6C2C6947637C70AA34F (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyRpcU3Ed__4_System_IDisposable_Dispose_m38D7172029BF3BA3375AFFBE3ED0BAA6F7CDDAA9 (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyRpcU3Ed__4_MoveNext_mDE26DB37414F6252D769088F3F6EB23594FE1028 (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(this.gameObject);
		OnClickDestroy_tBCC1DD93A4429F6B2AC174CCF35F7FAB831E627F* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// yield return 0; // if you allow 1 frame to pass, the object's OnDestroy() method gets called and cleans up references.
		int32_t L_6 = 0;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyRpcU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D4261074F14724582C5D6431489A36BA0A89A1E (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyRpcU3Ed__4_System_Collections_IEnumerator_Reset_mA2BD8852974AC66BF6595FDCF4DA6D747DD7822E (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyRpcU3Ed__4_System_Collections_IEnumerator_Reset_mA2BD8852974AC66BF6595FDCF4DA6D747DD7822E_RuntimeMethod_var)));
	}
}
// System.Object Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyRpcU3Ed__4_System_Collections_IEnumerator_get_Current_mBF09925D70788CA2D65075FCF92B8E0FC7EC2ACF (U3CDestroyRpcU3Ed__4_tB912C7F6B91C829464BA4CCF14BC89E6A102DAC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Photon.Pun.UtilityScripts.OnClickInstantiate::UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickInstantiate_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m7F3C56F468EC05CB429A1A6E3BA485AA101F2626 (OnClickInstantiate_t56B27413C08DF9889A66485DA3411272052D3DE4* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!PhotonNetwork.InRoom || (this.ModifierKey != KeyCode.None && !Input.GetKey(this.ModifierKey)) || eventData.button != this.Button)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = __this->___ModifierKey_5;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___ModifierKey_5;
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_001c:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		int32_t L_5;
		L_5 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_4, NULL);
		int32_t L_6 = __this->___Button_4;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// switch (this.InstantiateType)
		int32_t L_7 = __this->___InstantiateType_7;
		V_0 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_003a:
	{
		// PhotonNetwork.Instantiate(this.Prefab.name, eventData.pointerCurrentRaycast.worldPosition + new Vector3(0, 0.5f, 0), Quaternion.identity, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Prefab_6;
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___eventData0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_13;
		L_13 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___worldPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_14, L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = PhotonNetwork_Instantiate_mDB16644B4DD135B74F606887D511E6BAD46634C6(L_11, L_16, L_17, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// break;
		return;
	}

IL_0077:
	{
		// PhotonNetwork.InstantiateSceneObject(this.Prefab.name, eventData.pointerCurrentRaycast.worldPosition + new Vector3(0, 0.5f, 0), Quaternion.identity, 0, null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___Prefab_6;
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_21 = ___eventData0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_22;
		L_22 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22.___worldPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = PhotonNetwork_InstantiateSceneObject_m82BDE3EFB8E078C39E109CB5EEE8D1C06D9DC018(L_20, L_25, L_26, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickInstantiate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickInstantiate__ctor_mECCB8950C60E1391D30E5DFB9E7B4B4B3516C93B (OnClickInstantiate_t56B27413C08DF9889A66485DA3411272052D3DE4* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Pun.UtilityScripts.OnClickRpc::UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickRpc_UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick_m94E75A6FD7BD68DE4ECA6626C9A624AEE2420868 (OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FAF400707E3E915D133DFA24F8A69E377D4F32B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PhotonNetwork.InRoom || (this.ModifierKey != KeyCode.None && !Input.GetKey(this.ModifierKey)) || eventData.button != this.Button)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_InRoom_m11178D8F9F5C23C149C02E095868FD0FF0EDF07C(NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = __this->___ModifierKey_6;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___ModifierKey_6;
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_001c:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		int32_t L_5;
		L_5 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_4, NULL);
		int32_t L_6 = __this->___Button_5;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// this.photonView.RPC("ClickRpc", this.Target);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_7;
		L_7 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		int32_t L_8 = __this->___Target_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_7, _stringLiteral2FAF400707E3E915D133DFA24F8A69E377D4F32B, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickRpc::ClickRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickRpc_ClickRpc_mC7E147F7F6FC1EAE7DE9D25C59FD756FD925DE02 (OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* __this, const RuntimeMethod* method) 
{
	{
		// this.StartCoroutine(this.ClickFlash());
		RuntimeObject* L_0;
		L_0 = OnClickRpc_ClickFlash_m9F0D529435F413EFD341F9F96D0C6F93943B9EBD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Photon.Pun.UtilityScripts.OnClickRpc::ClickFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClickRpc_ClickFlash_m9F0D529435F413EFD341F9F96D0C6F93943B9EBD (OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* L_0 = (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C*)il2cpp_codegen_object_new(U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C_il2cpp_TypeInfo_var);
		U3CClickFlashU3Ed__8__ctor_mA98A6139F6116A12171E3A97BEA2D42E01BB7E08(L_0, 0, NULL);
		U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickRpc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickRpc__ctor_mBB039B87452714AF43F21B015DD454E7654CB7E5 (OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
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
// System.Void Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClickFlashU3Ed__8__ctor_mA98A6139F6116A12171E3A97BEA2D42E01BB7E08 (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClickFlashU3Ed__8_System_IDisposable_Dispose_m6998C8223907CE7F2E4A00BD15D1FFDAB72DEA20 (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClickFlashU3Ed__8_MoveNext_m8A0BCE618F0B5C0FA2546C52BEF50C335E26A4FD (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D8BC753569472A278384B927E2E5F98D39D704);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_010e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (isFlashing)
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_4 = V_1;
		bool L_5 = L_4->___isFlashing_10;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002b:
	{
		// isFlashing = true;
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_6 = V_1;
		L_6->___isFlashing_10 = (bool)1;
		// this.originalMaterial = GetComponent<Renderer>().material;
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_7 = V_1;
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_8 = V_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_8, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		L_7->___originalMaterial_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___originalMaterial_8), (void*)L_10);
		// if (!this.originalMaterial.HasProperty("_EmissionColor"))
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_11 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = L_11->___originalMaterial_8;
		bool L_13;
		L_13 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_12, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, NULL);
		if (L_13)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.LogWarning("Doesn't have emission, can't flash " + gameObject);
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_14 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15;
		G_B7_0 = L_16;
		G_B7_1 = _stringLiteral14D8BC753569472A278384B927E2E5F98D39D704;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = _stringLiteral14D8BC753569472A278384B927E2E5F98D39D704;
			goto IL_0067;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_006c;
	}

IL_0067:
	{
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B9_1, G_B9_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_18, NULL);
		// yield break;
		return (bool)0;
	}

IL_0078:
	{
		// bool wasEmissive = this.originalMaterial.IsKeywordEnabled("_EMISSION");
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_19 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = L_19->___originalMaterial_8;
		bool L_21;
		L_21 = Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0(L_20, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, NULL);
		__this->___U3CwasEmissiveU3E5__2_3 = L_21;
		// this.originalMaterial.EnableKeyword("_EMISSION");
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_22 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = L_22->___originalMaterial_8;
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_23, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, NULL);
		// this.originalColor = this.originalMaterial.GetColor("_EmissionColor");
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_24 = V_1;
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_25 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = L_25->___originalMaterial_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_26, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, NULL);
		L_24->___originalColor_9 = L_27;
		// this.originalMaterial.SetColor("_EmissionColor", Color.white);
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_28 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = L_28->___originalMaterial_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_29, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_30, NULL);
		// for (float f = 0.0f; f <= 1.0f; f += 0.08f)
		__this->___U3CfU3E5__3_4 = (0.0f);
		goto IL_0127;
	}

IL_00d6:
	{
		// Color lerped = Color.Lerp(Color.white, this.originalColor, f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_32 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = L_32->___originalColor_9;
		float L_34 = __this->___U3CfU3E5__3_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_31, L_33, L_34, NULL);
		V_2 = L_35;
		// this.originalMaterial.SetColor("_EmissionColor", lerped);
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_36 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = L_36->___originalMaterial_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_2;
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_37, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_38, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_010e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float f = 0.0f; f <= 1.0f; f += 0.08f)
		float L_39 = __this->___U3CfU3E5__3_4;
		__this->___U3CfU3E5__3_4 = ((float)il2cpp_codegen_add(L_39, (0.0799999982f)));
	}

IL_0127:
	{
		// for (float f = 0.0f; f <= 1.0f; f += 0.08f)
		float L_40 = __this->___U3CfU3E5__3_4;
		if ((((float)L_40) <= ((float)(1.0f))))
		{
			goto IL_00d6;
		}
	}
	{
		// this.originalMaterial.SetColor("_EmissionColor", this.originalColor);
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_41 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = L_41->___originalMaterial_8;
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_43 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = L_43->___originalColor_9;
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_42, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_44, NULL);
		// if (!wasEmissive) this.originalMaterial.DisableKeyword("_EMISSION");
		bool L_45 = __this->___U3CwasEmissiveU3E5__2_3;
		if (L_45)
		{
			goto IL_0162;
		}
	}
	{
		// if (!wasEmissive) this.originalMaterial.DisableKeyword("_EMISSION");
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_46 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = L_46->___originalMaterial_8;
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_47, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, NULL);
	}

IL_0162:
	{
		// isFlashing = false;
		OnClickRpc_t507E7CF89F51A2D5C07DDEAC380AC654745AC987* L_48 = V_1;
		L_48->___isFlashing_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CClickFlashU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE75F13CC7DD20211CC4D72DEB94805994F4B831E (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClickFlashU3Ed__8_System_Collections_IEnumerator_Reset_m2DD211DD6E72E4B6CC1455ED5E51F1B393BDBC59 (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClickFlashU3Ed__8_System_Collections_IEnumerator_Reset_m2DD211DD6E72E4B6CC1455ED5E51F1B393BDBC59_RuntimeMethod_var)));
	}
}
// System.Object Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CClickFlashU3Ed__8_System_Collections_IEnumerator_get_Current_mBEC8F0BE8D153B6712FC9AA2B48FABDA865591F2 (U3CClickFlashU3Ed__8_tB6656614147B92C1E569D99157BA45718273138C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Photon.Pun.UtilityScripts.OnEscapeQuit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEscapeQuit_Update_mCB7698FD6A189815DAD5C027D925EC1A8C8B28DF (OnEscapeQuit_t03128DF191CDB88E9DA771CE3EABFB4D249C38A7* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnEscapeQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEscapeQuit__ctor_m1AE58C79F61F850A3B0582708761F7F6B84EA70F (OnEscapeQuit_t03128DF191CDB88E9DA771CE3EABFB4D249C38A7* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnEnable_m34AAA969B6B72A22D89451162CD89A5AB49A0FCA (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.AddCallbackTarget(this);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_AddCallbackTarget_mD93CD97B66EC0222B8F9D00018982B408B56F592(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnDisable_m8499AEBE450ED858377CA057311E5F59582A3983 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.RemoveCallbackTarget(this);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_RemoveCallbackTarget_m9EFC20060AAA1B69ED0305BCE39F525291175B5D(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnJoinedRoom_mF734FFB6CE140B87126469CB7325E56CCF130164 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD21FF128FA5A5091E818A1AD3B0A21739BAB129A);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (this.PrefabsToInstantiate != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___PrefabsToInstantiate_6;
		if (!L_0)
		{
			goto IL_00a5;
		}
	}
	{
		// foreach (GameObject o in this.PrefabsToInstantiate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___PrefabsToInstantiate_6;
		V_0 = L_1;
		V_1 = 0;
		goto IL_009c;
	}

IL_0019:
	{
		// foreach (GameObject o in this.PrefabsToInstantiate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// Debug.Log("Instantiating: " + o.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD21FF128FA5A5091E818A1AD3B0A21739BAB129A, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// Vector3 spawnPos = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_3 = L_9;
		// if (this.SpawnPosition != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___SpawnPosition_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		// spawnPos = this.SpawnPosition.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___SpawnPosition_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_3 = L_13;
	}

IL_0052:
	{
		// Vector3 random = Random.insideUnitSphere;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		V_4 = L_14;
		// random.y = 0;
		(&V_4)->___y_3 = (0.0f);
		// random = random.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_4 = L_15;
		// Vector3 itempos = spawnPos + this.PositionOffset * random;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		float L_17 = __this->___PositionOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_19, NULL);
		V_5 = L_20;
		// PhotonNetwork.Instantiate(o.name, itempos, Quaternion.identity, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = PhotonNetwork_Instantiate_mDB16644B4DD135B74F606887D511E6BAD46634C6(L_22, L_23, L_24, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_009c:
	{
		// foreach (GameObject o in this.PrefabsToInstantiate)
		int32_t L_27 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0019;
		}
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnConnected_mE0599D126B8BF0D6ABF79E044D2F9AC0230ACA2E (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnCustomAuthenticationResponse_m80C11853A860F1084127341F48C9D7AC903030BE (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnCustomAuthenticationFailed_mC7D8E0EB017646598E5315E441ED05DEAB7194A8 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, String_t* ___debugMessage0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnConnectedToMaster_m0E229CDF5EC588A4EBA70BEC4179537562FCB070 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnDisconnected_mC52EEA745C4E3CE26B28AF2D9B6A8ED1043304AD (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, int32_t ___cause0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnRegionListReceived_m176BE4068F74F5E2616431FFD6298C68AE248E9E (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___regionHandler0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnRoomListUpdate_m576F291B79128CFAF7136E9D193977800C7879C1 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___roomList0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnFriendListUpdate_m16A989756E011516CBCAD9539BAF10B88E25CF39 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___friendList0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnJoinedLobby_m1DD4B4E1D0A260FC0139031C17A0108C37410138 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnLeftLobby_mAB09809ED2A18078228C2BC3632A1AB895996BBC (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnLobbyStatisticsUpdate_mB170E0BDE57419877F736596ABF6033E0C88E2DE (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnCreatedRoom_mA5031629BE98D29E8A6CCA93270F974C6159548D (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnCreateRoomFailed_m87FDEBDB22DC9A2FD8A2147885606E7BF4C5392A (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnJoinRoomFailed_m65C7DF679D0FA8E20D6B074B6F98E5DD9BB4A7E7 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnJoinRandomFailed_mDBC5B40CE030BFEFDE2A6E7936ECBEB7FDA33B30 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate_OnLeftRoom_m5C8A04384CF3A4A1CD961F056694E25D4740A6C7 (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnJoinedInstantiate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJoinedInstantiate__ctor_mDAA5A7281EDE4C0E32EDD2733B98FB88BA0C72DC (OnJoinedInstantiate_tA453B4DF0E222A5F87AF54C0692514AF26D6FB03* __this, const RuntimeMethod* method) 
{
	{
		// public float PositionOffset = 2.0f;
		__this->___PositionOffset_5 = (2.0f);
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
// System.Void Photon.Pun.UtilityScripts.OnStartDelete::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete_Start_m5B2CDF81D681C97469154E8682061A8A939CAF27 (OnStartDelete_t6C0FC525A79E2EBFA118989E77632B0E4C21CD5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnStartDelete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete__ctor_m1E70CB7917BFC35890AA0509B515D610BE6DCEA2 (OnStartDelete_t6C0FC525A79E2EBFA118989E77632B0E4C21CD5E* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.CountdownTimer::add_OnCountdownTimerHasExpired(Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_add_OnCountdownTimerHasExpired_m7D3053C96BD85E17E42CCBD8B57742A07604F394 (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* V_0 = NULL;
	CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* V_1 = NULL;
	CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* V_2 = NULL;
	{
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_0 = ((CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_StaticFields*)il2cpp_codegen_static_fields_for(CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var))->___OnCountdownTimerHasExpired_6;
		V_0 = L_0;
	}

IL_0006:
	{
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_1 = V_0;
		V_1 = L_1;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_2 = V_1;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*)CastclassSealed((RuntimeObject*)L_4, CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E_il2cpp_TypeInfo_var));
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_5 = V_2;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_6 = V_1;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_7;
		L_7 = InterlockedCompareExchangeImpl<CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*>((&((CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_StaticFields*)il2cpp_codegen_static_fields_for(CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var))->___OnCountdownTimerHasExpired_6), L_5, L_6);
		V_0 = L_7;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_8 = V_0;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_9 = V_1;
		if ((!(((RuntimeObject*)(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*)L_8) == ((RuntimeObject*)(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer::remove_OnCountdownTimerHasExpired(Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_remove_OnCountdownTimerHasExpired_m79E940996A56819429A40194723CB916F7FBAD4A (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* V_0 = NULL;
	CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* V_1 = NULL;
	CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* V_2 = NULL;
	{
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_0 = ((CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_StaticFields*)il2cpp_codegen_static_fields_for(CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var))->___OnCountdownTimerHasExpired_6;
		V_0 = L_0;
	}

IL_0006:
	{
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_1 = V_0;
		V_1 = L_1;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_2 = V_1;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*)CastclassSealed((RuntimeObject*)L_4, CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E_il2cpp_TypeInfo_var));
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_5 = V_2;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_6 = V_1;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_7;
		L_7 = InterlockedCompareExchangeImpl<CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*>((&((CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_StaticFields*)il2cpp_codegen_static_fields_for(CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var))->___OnCountdownTimerHasExpired_6), L_5, L_6);
		V_0 = L_7;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_8 = V_0;
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_9 = V_1;
		if ((!(((RuntimeObject*)(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*)L_8) == ((RuntimeObject*)(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_Start_mC43E99416A654E4F7C3AAC675DE0DE2F5CC6F1CF (CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFBA2EAB06550438423DD89A611E50E2CA315AF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Text == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Text_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError("Reference to 'Text' is not set. Please set a valid reference.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteralEFBA2EAB06550438423DD89A611E50E2CA315AF9, __this, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_Update_m15934DC252F0C2152A665DE2D32CFBF91CB48C47 (CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E94977D519D1AF1DEA6A6B4577C097FDD3FD63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9EC211DA61853C88BF69DD05F964B486824A55F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (!isTimerRunning)
		bool L_0 = __this->___isTimerRunning_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// float timer = (float)PhotonNetwork.Time - startTime;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = PhotonNetwork_get_Time_m7DA7D3EDD59BAB24E679D525E2678B0F40468C5C(NULL);
		float L_2 = __this->___startTime_8;
		V_0 = ((float)il2cpp_codegen_subtract(((float)L_1), L_2));
		// float countdown = Countdown - timer;
		float L_3 = __this->___Countdown_10;
		float L_4 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// Text.text = string.Format("Game starts in {0} seconds", countdown.ToString("n2"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___Text_9;
		String_t* L_6;
		L_6 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_1), _stringLiteral78E94977D519D1AF1DEA6A6B4577C097FDD3FD63, NULL);
		String_t* L_7;
		L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralA9EC211DA61853C88BF69DD05F964B486824A55F, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// if (countdown > 0.0f)
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// return;
		return;
	}

IL_004a:
	{
		// isTimerRunning = false;
		__this->___isTimerRunning_7 = (bool)0;
		// Text.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___Text_9;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		// if (OnCountdownTimerHasExpired != null)
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_11 = ((CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_StaticFields*)il2cpp_codegen_static_fields_for(CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var))->___OnCountdownTimerHasExpired_6;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// OnCountdownTimerHasExpired();
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* L_12 = ((CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_StaticFields*)il2cpp_codegen_static_fields_for(CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC_il2cpp_TypeInfo_var))->___OnCountdownTimerHasExpired_6;
		CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_inline(L_12, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_OnRoomPropertiesUpdate_m04994215C490CEB330033728A09A8C99F5468885 (CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesThatChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB84908DAA1F00E1E4570DCF191DB81E0B663117D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (propertiesThatChanged.TryGetValue(CountdownStartTime, out startTimeFromProps))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___propertiesThatChanged0;
		bool L_1;
		L_1 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_0, _stringLiteralB84908DAA1F00E1E4570DCF191DB81E0B663117D, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// isTimerRunning = true;
		__this->___isTimerRunning_7 = (bool)1;
		// startTime = (float)startTimeFromProps;
		RuntimeObject* L_2 = V_0;
		__this->___startTime_8 = ((*(float*)((float*)(float*)UnBox(L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer__ctor_m0AC798A9A5F10E6641F6B75724214567F76D8B12 (CountdownTimer_t8B2B0E17BB57DE0B6C42151758787D9D761914FC* __this, const RuntimeMethod* method) 
{
	{
		// public float Countdown = 5.0f;
		__this->___Countdown_10 = (5.0f);
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
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
void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_Multicast(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* currentDelegate = reinterpret_cast<CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_Open(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_Closed(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, method);
}
void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_OpenStaticInvoker(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_ClosedStaticInvoker(CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimerHasExpired__ctor_m38A57B55C402FF7A31255EF3AD5AC5A5FA6CC912 (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_Multicast;
}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CountdownTimerHasExpired_BeginInvoke_m65ADF359F5A4752FE2CF40E0C6F7F8E23A8F0C0B (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimerHasExpired_EndInvoke_m6A54A8C746D8E010E8A7C0229DF6F2C741463520 (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Photon.Pun.UtilityScripts.PunTurnManager::get_Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return PhotonNetwork.CurrentRoom.GetTurn(); }
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TurnExtensions_GetTurn_m1EE28CC7124EA38AE7ABFC1953E62F94115072E4(L_0, NULL);
		return L_1;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::set_Turn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_set_Turn_m4C69ACD2B799F1ED763F7F6851F04A35EB68F15D (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isOverCallProcessed = false;
		__this->____isOverCallProcessed_11 = (bool)0;
		// PhotonNetwork.CurrentRoom.SetTurn(value, true);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		int32_t L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		TurnExtensions_SetTurn_m4EFB321BFDEC629ECB882F72D03B0DB891BDB382(L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Single Photon.Pun.UtilityScripts.PunTurnManager::get_ElapsedTimeInTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PunTurnManager_get_ElapsedTimeInTurn_m240327225B5240F10075B21809352C95B40E4A2F (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return ((float) (PhotonNetwork.ServerTimestamp - PhotonNetwork.CurrentRoom.GetTurnStart())) / 1000.0f; }
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PhotonNetwork_get_ServerTimestamp_m01845E74DA43F1C209FF98980D5B6DF64428F866(NULL);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1;
		L_1 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = TurnExtensions_GetTurnStart_mEB41A6B05AC69E730407C4B56288262E7FF13994(L_1, NULL);
		return ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_0, L_2)))/(1000.0f)));
	}
}
// System.Single Photon.Pun.UtilityScripts.PunTurnManager::get_RemainingSecondsInTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PunTurnManager_get_RemainingSecondsInTurn_m5FB93A9723F8B949393B0ED2504E2ED5F1991661 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return Mathf.Max(0f, this.TurnDuration - this.ElapsedTimeInTurn); }
		float L_0 = __this->___TurnDuration_5;
		float L_1;
		L_1 = PunTurnManager_get_ElapsedTimeInTurn_m240327225B5240F10075B21809352C95B40E4A2F(__this, NULL);
		float L_2;
		L_2 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), ((float)il2cpp_codegen_subtract(L_0, L_1)), NULL);
		return L_2;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::get_IsCompletedByAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunTurnManager_get_IsCompletedByAll_m574BB41086381FAB75EE39A4225677E83084A5F3 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m9D5B6FC9E0A91972776D03EB24E8E7FC9ECC76A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return PhotonNetwork.CurrentRoom != null && Turn > 0 && this.finishedPlayers.Count == PhotonNetwork.CurrentRoom.PlayerCount; }
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1;
		L_1 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* L_2 = __this->___finishedPlayers_7;
		int32_t L_3;
		L_3 = HashSet_1_get_Count_m9D5B6FC9E0A91972776D03EB24E8E7FC9ECC76A2_inline(L_2, HashSet_1_get_Count_m9D5B6FC9E0A91972776D03EB24E8E7FC9ECC76A2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_4;
		L_4 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		uint8_t L_5;
		L_5 = Room_get_PlayerCount_mB51FD867790C849B312565EA2052474828EA3F1A(L_4, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::get_IsFinishedByMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunTurnManager_get_IsFinishedByMe_mFE2DA62A4484F7AFB752BE53AF51F2693D0EEE3B (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return this.finishedPlayers.Contains(PhotonNetwork.LocalPlayer); }
		HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* L_0 = __this->___finishedPlayers_7;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1;
		L_1 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		bool L_2;
		L_2 = HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B(L_0, L_1, HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::get_IsOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunTurnManager_get_IsOver_m9C01C296271765BD9782F76EA7DAD5A14541E100 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.RemainingSecondsInTurn <= 0f; }
		float L_0;
		L_0 = PunTurnManager_get_RemainingSecondsInTurn_m5FB93A9723F8B949393B0ED2504E2ED5F1991661(__this, NULL);
		return (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_Start_m4C4B813205D883CF7EACD6D381B2A9FB5F75B11D (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	{
		// void Start(){}
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_Update_m9D740283491212DA225A46BEB864745EE04CE35F (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Turn > 0 && this.IsOver && !_isOverCallProcessed)
		int32_t L_0;
		L_0 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		bool L_1;
		L_1 = PunTurnManager_get_IsOver_m9C01C296271765BD9782F76EA7DAD5A14541E100(__this, NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		bool L_2 = __this->____isOverCallProcessed_11;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		// _isOverCallProcessed = true;
		__this->____isOverCallProcessed_11 = (bool)1;
		// this.TurnManagerListener.OnTurnTimeEnds(this.Turn);
		RuntimeObject* L_3 = __this->___TurnManagerListener_6;
		int32_t L_4;
		L_4 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks::OnTurnTimeEnds(System.Int32) */, IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::BeginTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_BeginTurn_mE8176472CCDC1860CC499A1C53A256F0684C257C (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	{
		// Turn = this.Turn + 1; // note: this will set a property in the room, which is available to the other players.
		int32_t L_0;
		L_0 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		PunTurnManager_set_Turn_m4C69ACD2B799F1ED763F7F6851F04A35EB68F15D(__this, ((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::SendMove(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_SendMove_m8C802E900C3D6A9BBAEEF98A09C3CCB373E585DD (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, RuntimeObject* ___move0, bool ___finished1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49390441935AF8F5D47C8687079636D31A23316C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D1F6F8C99A944BE00F5FEA239292EBCE0705370);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t G_B5_0 = 0;
	{
		// if (IsFinishedByMe)
		bool L_0;
		L_0 = PunTurnManager_get_IsFinishedByMe_mFE2DA62A4484F7AFB752BE53AF51F2693D0EEE3B(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UnityEngine.Debug.LogWarning("Can't SendMove. Turn is finished by this player.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral49390441935AF8F5D47C8687079636D31A23316C, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// Hashtable moveHt = new Hashtable();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_1, NULL);
		V_0 = L_1;
		// moveHt.Add("turn", Turn);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = V_0;
		int32_t L_3;
		L_3 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteral8D1F6F8C99A944BE00F5FEA239292EBCE0705370, L_5, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		// moveHt.Add("move", move);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_6 = V_0;
		RuntimeObject* L_7 = ___move0;
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_6, _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C, L_7, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		// byte evCode = (finished) ? EvFinalMove : EvMove;
		bool L_8 = ___finished1;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 2;
	}

IL_0042:
	{
		V_1 = (uint8_t)G_B5_0;
		// PhotonNetwork.RaiseEvent(evCode, moveHt, new RaiseEventOptions() {CachingOption = EventCaching.AddToRoomCache}, SendOptions.SendReliable);
		uint8_t L_9 = V_1;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_10 = V_0;
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_11 = (RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E*)il2cpp_codegen_object_new(RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E_il2cpp_TypeInfo_var);
		RaiseEventOptions__ctor_m5AD5093C00DD3EE18EB5033E49C61934E978A94F(L_11, NULL);
		RaiseEventOptions_tAEB3A9A0993C52981809954BC2DB304E887D852E* L_12 = L_11;
		L_12->___CachingOption_1 = 4;
		il2cpp_codegen_runtime_class_init_inline(SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var);
		SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8 L_13 = ((SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF9510905DE0E4230B6BF45A2AD2A43773AC32ED8_il2cpp_TypeInfo_var))->___SendReliable_0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = PhotonNetwork_RaiseEvent_m4FDC197F749344D6388845A75D4AD238A3CE3D3B(L_9, L_10, L_12, L_13, NULL);
		// if (finished)
		bool L_15 = ___finished1;
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		// PhotonNetwork.LocalPlayer.SetFinishedTurn(Turn);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_16;
		L_16 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		int32_t L_17;
		L_17 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		TurnExtensions_SetFinishedTurn_m48FE6A0D1A862CB61AA16990A6BFB9A75B66014A(L_16, L_17, NULL);
	}

IL_006f:
	{
		// ProcessOnEvent(evCode, moveHt, PhotonNetwork.LocalPlayer.ActorNumber);
		uint8_t L_18 = V_1;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_20;
		L_20 = PhotonNetwork_get_LocalPlayer_m0EC4461B8F893A1F4EB98E4758385E254F0B5B2D(NULL);
		int32_t L_21;
		L_21 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_20, NULL);
		PunTurnManager_ProcessOnEvent_m1D81FD91A2F0A037E8147079674A7CE51E7266E6(__this, L_18, L_19, L_21, NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.UtilityScripts.PunTurnManager::GetPlayerFinishedTurn(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunTurnManager_GetPlayerFinishedTurn_mDC242B0EC3FAC6BD5E69B6DC47243FA7949323CE (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player != null && this.finishedPlayers != null && this.finishedPlayers.Contains(player))
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___player0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* L_1 = __this->___finishedPlayers_7;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* L_2 = __this->___finishedPlayers_7;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_3 = ___player0;
		bool L_4;
		L_4 = HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B(L_2, L_3, HashSet_1_Contains_m718325ED0E83E4E48343C87996F32FB7ED51F52B_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::ProcessOnEvent(System.Byte,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_ProcessOnEvent_m1D81FD91A2F0A037E8147079674A7CE51E7266E6 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, uint8_t ___eventCode0, RuntimeObject* ___content1, int32_t ___senderId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mFFA4703D523E06722C9BF56C5F8DDCB408225449_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D1F6F8C99A944BE00F5FEA239292EBCE0705370);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// Player sender = PhotonNetwork.CurrentRoom.GetPlayer(senderId);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		int32_t L_1 = ___senderId2;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2;
		L_2 = VirtualFuncInvoker1< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, int32_t >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32) */, L_0, L_1);
		V_0 = L_2;
		uint8_t L_3 = ___eventCode0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		uint8_t L_4 = ___eventCode0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0015:
	{
		// Hashtable evTable = content as Hashtable;
		RuntimeObject* L_5 = ___content1;
		// int turn = (int)evTable["turn"];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_6 = ((Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)IsInstClass((RuntimeObject*)L_5, Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var));
		RuntimeObject* L_7;
		L_7 = Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9(L_6, _stringLiteral8D1F6F8C99A944BE00F5FEA239292EBCE0705370, NULL);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_7, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// object move = evTable["move"];
		RuntimeObject* L_8;
		L_8 = Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9(L_6, _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C, NULL);
		V_2 = L_8;
		// this.TurnManagerListener.OnPlayerMove(sender, turn, move);
		RuntimeObject* L_9 = __this->___TurnManagerListener_6;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_10 = V_0;
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = V_2;
		InterfaceActionInvoker3< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, int32_t, RuntimeObject* >::Invoke(2 /* System.Void Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks::OnPlayerMove(Photon.Realtime.Player,System.Int32,System.Object) */, IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
		// break;
		return;
	}

IL_0046:
	{
		// Hashtable evTable = content as Hashtable;
		RuntimeObject* L_13 = ___content1;
		// int turn = (int)evTable["turn"];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_14 = ((Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)IsInstClass((RuntimeObject*)L_13, Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var));
		RuntimeObject* L_15;
		L_15 = Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9(L_14, _stringLiteral8D1F6F8C99A944BE00F5FEA239292EBCE0705370, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// object move = evTable["move"];
		RuntimeObject* L_16;
		L_16 = Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9(L_14, _stringLiteralEECEAAC359EDB2E91D0F46F3CA9A65F47527BC5C, NULL);
		V_4 = L_16;
		// if (turn == this.Turn)
		int32_t L_17 = V_3;
		int32_t L_18;
		L_18 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_008e;
		}
	}
	{
		// this.finishedPlayers.Add(sender);
		HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* L_19 = __this->___finishedPlayers_7;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_20 = V_0;
		bool L_21;
		L_21 = HashSet_1_Add_mFFA4703D523E06722C9BF56C5F8DDCB408225449(L_19, L_20, HashSet_1_Add_mFFA4703D523E06722C9BF56C5F8DDCB408225449_RuntimeMethod_var);
		// this.TurnManagerListener.OnPlayerFinished(sender, turn, move);
		RuntimeObject* L_22 = __this->___TurnManagerListener_6;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_23 = V_0;
		int32_t L_24 = V_3;
		RuntimeObject* L_25 = V_4;
		InterfaceActionInvoker3< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, int32_t, RuntimeObject* >::Invoke(3 /* System.Void Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks::OnPlayerFinished(Photon.Realtime.Player,System.Int32,System.Object) */, IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var, L_22, L_23, L_24, L_25);
	}

IL_008e:
	{
		// if (IsCompletedByAll)
		bool L_26;
		L_26 = PunTurnManager_get_IsCompletedByAll_m574BB41086381FAB75EE39A4225677E83084A5F3(__this, NULL);
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		// this.TurnManagerListener.OnTurnCompleted(this.Turn);
		RuntimeObject* L_27 = __this->___TurnManagerListener_6;
		int32_t L_28;
		L_28 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks::OnTurnCompleted(System.Int32) */, IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var, L_27, L_28);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::OnEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_OnEvent_m9637AEAEB37EF40E6A336FBAF6981840D13D308B (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* ___photonEvent0, const RuntimeMethod* method) 
{
	{
		// this.ProcessOnEvent(photonEvent.Code, photonEvent.CustomData, photonEvent.Sender);
		EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* L_0 = ___photonEvent0;
		uint8_t L_1 = L_0->___Code_0;
		EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* L_2 = ___photonEvent0;
		RuntimeObject* L_3;
		L_3 = EventData_get_CustomData_m3386E36D9083B2DD33634C698B7E50344AC9A09B(L_2, NULL);
		EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* L_4 = ___photonEvent0;
		int32_t L_5;
		L_5 = EventData_get_Sender_mD42C430CADD5B3CB7B79411FD46B16A4A257A2FB(L_4, NULL);
		PunTurnManager_ProcessOnEvent_m1D81FD91A2F0A037E8147079674A7CE51E7266E6(__this, L_1, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager_OnRoomPropertiesUpdate_mD74E02B4E75617346EAC5473BC1C7D4AF4762726 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesThatChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_mDF22DBDA2ECE30DAE8BB8D479004671DCA684743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (propertiesThatChanged.ContainsKey("Turn"))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___propertiesThatChanged0;
		bool L_1;
		L_1 = Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD(L_0, _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8, Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// _isOverCallProcessed = false;
		__this->____isOverCallProcessed_11 = (bool)0;
		// this.finishedPlayers.Clear();
		HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* L_2 = __this->___finishedPlayers_7;
		HashSet_1_Clear_mDF22DBDA2ECE30DAE8BB8D479004671DCA684743(L_2, HashSet_1_Clear_mDF22DBDA2ECE30DAE8BB8D479004671DCA684743_RuntimeMethod_var);
		// this.TurnManagerListener.OnTurnBegins(this.Turn);
		RuntimeObject* L_3 = __this->___TurnManagerListener_6;
		int32_t L_4;
		L_4 = PunTurnManager_get_Turn_m6F38A143420E88E3894AB5F3BE48889B1F733962(__this, NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks::OnTurnBegins(System.Int32) */, IPunTurnManagerCallbacks_t54482826E7A0B5866FA01DCADBD18D2D52A487BE_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.PunTurnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunTurnManager__ctor_mD22F2AA634BB1E4272D2C253FE0A31CE1F8703C1 (PunTurnManager_t0CF156C4C71A80FF982EF04E165F92B8AB740D8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m0C3261659D8C4A9C0A3A355F9BCA67E760CFACD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float TurnDuration = 20f;
		__this->___TurnDuration_5 = (20.0f);
		// private readonly HashSet<Player> finishedPlayers = new HashSet<Player>();
		HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08* L_0 = (HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08*)il2cpp_codegen_object_new(HashSet_1_t79BA6231E0DBC891D41085E37A14196811789B08_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m0C3261659D8C4A9C0A3A355F9BCA67E760CFACD6(L_0, HashSet_1__ctor_m0C3261659D8C4A9C0A3A355F9BCA67E760CFACD6_RuntimeMethod_var);
		__this->___finishedPlayers_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___finishedPlayers_7), (void*)L_0);
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
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
// System.Void Photon.Pun.UtilityScripts.TurnExtensions::SetTurn(Photon.Realtime.Room,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnExtensions_SetTurn_m4EFB321BFDEC629ECB882F72D03B0DB891BDB382 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___room0, int32_t ___turn1, bool ___setStartTime2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_0 = NULL;
	{
		// if (room == null || room.CustomProperties == null)
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0 = ___room0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2;
		L_2 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
		// Hashtable turnProps = new Hashtable();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_3 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_3, NULL);
		V_0 = L_3;
		// turnProps[TurnPropKey] = turn;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnPropKey_0;
		int32_t L_6 = ___turn1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		Hashtable_set_Item_m625527D848F5AF5C6B1F88CE5DC2B6F283C096FF(L_4, L_5, L_8, NULL);
		// if (setStartTime)
		bool L_9 = ___setStartTime2;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		// turnProps[TurnStartPropKey] = PhotonNetwork.ServerTimestamp;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_11 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnStartPropKey_1;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = PhotonNetwork_get_ServerTimestamp_m01845E74DA43F1C209FF98980D5B6DF64428F866(NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		Hashtable_set_Item_m625527D848F5AF5C6B1F88CE5DC2B6F283C096FF(L_10, L_11, L_14, NULL);
	}

IL_003b:
	{
		// room.SetCustomProperties(turnProps);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_15 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_16 = V_0;
		VirtualActionInvoker3< Hashtable_tD626399B3ADFD501225241D7366103F35472542A*, Hashtable_tD626399B3ADFD501225241D7366103F35472542A*, WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* >::Invoke(5 /* System.Void Photon.Realtime.Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags) */, L_15, L_16, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL);
		// }
		return;
	}
}
// System.Int32 Photon.Pun.UtilityScripts.TurnExtensions::GetTurn(Photon.Realtime.RoomInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnExtensions_GetTurn_m1EE28CC7124EA38AE7ABFC1953E62F94115072E4 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* ___room0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (room == null || room.CustomProperties == null || !room.CustomProperties.ContainsKey(TurnPropKey))
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_0 = ___room0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_1 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2;
		L_2 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_3 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4;
		L_4 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnPropKey_0;
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD(L_4, L_5, Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		// return 0;
		return 0;
	}

IL_001f:
	{
		// return (int) room.CustomProperties[TurnPropKey];
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_7 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_8;
		L_8 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_9 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnPropKey_0;
		RuntimeObject* L_10;
		L_10 = Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9(L_8, L_9, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}
}
// System.Int32 Photon.Pun.UtilityScripts.TurnExtensions::GetTurnStart(Photon.Realtime.RoomInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnExtensions_GetTurnStart_mEB41A6B05AC69E730407C4B56288262E7FF13994 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* ___room0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (room == null || room.CustomProperties == null || !room.CustomProperties.ContainsKey(TurnStartPropKey))
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_0 = ___room0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_1 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2;
		L_2 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_3 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4;
		L_4 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnStartPropKey_1;
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD(L_4, L_5, Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		// return 0;
		return 0;
	}

IL_001f:
	{
		// return (int) room.CustomProperties[TurnStartPropKey];
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_7 = ___room0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_8;
		L_8 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_9 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnStartPropKey_1;
		RuntimeObject* L_10;
		L_10 = Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9(L_8, L_9, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}
}
// System.Int32 Photon.Pun.UtilityScripts.TurnExtensions::GetFinishedTurn(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TurnExtensions_GetFinishedTurn_m083B4F49EF1AE3FE9B99D10B2D659593F8687341 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Room room = PhotonNetwork.CurrentRoom;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		V_0 = L_0;
		// if (room == null || room.CustomProperties == null || !room.CustomProperties.ContainsKey(TurnPropKey))
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_2 = V_0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_3;
		L_3 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_4 = V_0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_5;
		L_5 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_6 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnPropKey_0;
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD(L_5, L_6, Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0025;
		}
	}

IL_0023:
	{
		// return 0;
		return 0;
	}

IL_0025:
	{
		// string propKey = FinishedTurnPropKey + player.ActorNumber;
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_8 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___FinishedTurnPropKey_2;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_9 = ___player0;
		int32_t L_10;
		L_10 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_9, NULL);
		V_2 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, L_11, NULL);
		V_1 = L_12;
		// return (int) room.CustomProperties[propKey];
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_13 = V_0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_14;
		L_14 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_13, NULL);
		String_t* L_15 = V_1;
		RuntimeObject* L_16;
		L_16 = Hashtable_get_Item_m33995CAF3384BA31ADA32E8B6D3AA69946190CA9(L_14, L_15, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_16, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}
}
// System.Void Photon.Pun.UtilityScripts.TurnExtensions::SetFinishedTurn(Photon.Realtime.Player,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnExtensions_SetFinishedTurn_m48FE6A0D1A862CB61AA16990A6BFB9A75B66014A (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, int32_t ___turn1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* V_0 = NULL;
	String_t* V_1 = NULL;
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// Room room = PhotonNetwork.CurrentRoom;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m93A0D4281360B3C1E2D9A0FD6EF1590D80BE7D97(NULL);
		V_0 = L_0;
		// if (room == null || room.CustomProperties == null)
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_2 = V_0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_3;
		L_3 = RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// string propKey = FinishedTurnPropKey + player.ActorNumber;
		il2cpp_codegen_runtime_class_init_inline(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		String_t* L_4 = ((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___FinishedTurnPropKey_2;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_5 = ___player0;
		int32_t L_6;
		L_6 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline(L_5, NULL);
		V_3 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, L_7, NULL);
		V_1 = L_8;
		// Hashtable finishedTurnProp = new Hashtable();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_9 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_9, NULL);
		V_2 = L_9;
		// finishedTurnProp[propKey] = turn;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_10 = V_2;
		String_t* L_11 = V_1;
		int32_t L_12 = ___turn1;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		Hashtable_set_Item_m625527D848F5AF5C6B1F88CE5DC2B6F283C096FF(L_10, L_11, L_14, NULL);
		// room.SetCustomProperties(finishedTurnProp);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_15 = V_0;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_16 = V_2;
		VirtualActionInvoker3< Hashtable_tD626399B3ADFD501225241D7366103F35472542A*, Hashtable_tD626399B3ADFD501225241D7366103F35472542A*, WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* >::Invoke(5 /* System.Void Photon.Realtime.Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags) */, L_15, L_16, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TurnExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnExtensions__cctor_m2EBB608073ED130B2EB324D8338365E20FBD5721 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral332A191E55175DAE3C063B38488410BDA3B2A444);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA4BCEF3D14BF7670BC897FF6386C4020A6AAFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string TurnPropKey = "Turn";
		((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnPropKey_0 = _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8;
		Il2CppCodeGenWriteBarrier((void**)(&((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnPropKey_0), (void*)_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		// public static readonly string TurnStartPropKey = "TStart";
		((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnStartPropKey_1 = _stringLiteral332A191E55175DAE3C063B38488410BDA3B2A444;
		Il2CppCodeGenWriteBarrier((void**)(&((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___TurnStartPropKey_1), (void*)_stringLiteral332A191E55175DAE3C063B38488410BDA3B2A444);
		// public static readonly string FinishedTurnPropKey = "FToA";
		((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___FinishedTurnPropKey_2 = _stringLiteralDEA4BCEF3D14BF7670BC897FF6386C4020A6AAFA;
		Il2CppCodeGenWriteBarrier((void**)(&((TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_StaticFields*)il2cpp_codegen_static_fields_for(TurnExtensions_t8763D6FEE100543B0EC98036E3A33D335CC10E45_il2cpp_TypeInfo_var))->___FinishedTurnPropKey_2), (void*)_stringLiteralDEA4BCEF3D14BF7670BC897FF6386C4020A6AAFA);
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
// System.Void Photon.Pun.UtilityScripts.ButtonInsideScrollList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonInsideScrollList_Start_m179DA04A0E9396936B73F63AB555A5D73F0AEACA (ButtonInsideScrollList_t6BD912E3EC9F27C7AD3927E283BAE6B79A95537F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_mD5D105BD6034A3131A91D7B6534D7E74834D72AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scrollRect = GetComponentInParent<ScrollRect>();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = Component_GetComponentInParent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_mD5D105BD6034A3131A91D7B6534D7E74834D72AD(__this, Component_GetComponentInParent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_mD5D105BD6034A3131A91D7B6534D7E74834D72AD_RuntimeMethod_var);
		__this->___scrollRect_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scrollRect_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ButtonInsideScrollList::UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonInsideScrollList_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_m30D524B45082AE5FBE6ACE7F7F5CADDEB6BEB712 (ButtonInsideScrollList_t6BD912E3EC9F27C7AD3927E283BAE6B79A95537F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scrollRect !=null)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___scrollRect_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// scrollRect.StopMovement();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2 = __this->___scrollRect_4;
		VirtualActionInvoker0::Invoke(41 /* System.Void UnityEngine.UI.ScrollRect::StopMovement() */, L_2);
		// scrollRect.enabled = false;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = __this->___scrollRect_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ButtonInsideScrollList::UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonInsideScrollList_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m9C63B8A425F34164A2DEB1EE12B108D6D2499F51 (ButtonInsideScrollList_t6BD912E3EC9F27C7AD3927E283BAE6B79A95537F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scrollRect !=null && !scrollRect.enabled)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___scrollRect_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2 = __this->___scrollRect_4;
		bool L_3;
		L_3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_2, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// scrollRect.enabled = true;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->___scrollRect_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.ButtonInsideScrollList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonInsideScrollList__ctor_m04356D5574A48AAC205A29160EFC7823F0F9D35E (ButtonInsideScrollList_t6BD912E3EC9F27C7AD3927E283BAE6B79A95537F* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.EventSystemSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner_OnEnable_m5C4F4A240CFDB058597EDAD7C653FA9E29D22763 (EventSystemSpawner_t9E30C9C0D49107F359A6001AF67FF4A0AB8259BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystem sceneEventSystem = FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		// if (sceneEventSystem == null)
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject eventSystem = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		// eventSystem.AddComponent<EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_3, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// eventSystem.AddComponent<StandaloneInputModule>();
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_3, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.EventSystemSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner__ctor_m71C8E3D7BFBA24F0AED7ECE30C69E5144658E8A9 (EventSystemSpawner_t9E30C9C0D49107F359A6001AF67FF4A0AB8259BC* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicToggleIsOnTransition_OnPointerEnter_m3153DDC4B74F8B9D2DB4E32A2F35E07E6A74A832 (GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B2_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B3_1 = NULL;
	{
		// this.isHover = true;
		__this->___isHover_10 = (bool)1;
		// this._graphic.color = this.toggle.isOn ? this.HoverOnColor : this.HoverOffColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->____graphic_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___HoverOffColor_9;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___HoverOnColor_8;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicToggleIsOnTransition_OnPointerExit_mA35484F122D94056BC530C954D1AF2FC850F6E19 (GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B2_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B3_1 = NULL;
	{
		// this.isHover = false;
		__this->___isHover_10 = (bool)0;
		// this._graphic.color = this.toggle.isOn ? this.NormalOnColor : this.NormalOffColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->____graphic_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOnColor_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicToggleIsOnTransition_OnEnable_mABF6E591C6E587A303533FAD84552B6E84A20926 (GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._graphic = this.GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0;
		L_0 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		__this->____graphic_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____graphic_5), (void*)L_0);
		// this.OnValueChanged(this.toggle.isOn);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F(__this, L_2, NULL);
		// this.toggle.onValueChanged.AddListener(this.OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___toggle_4;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F_RuntimeMethod_var), NULL);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicToggleIsOnTransition_OnDisable_m44D54EB71B7771CDA3BD945268374060B65928D7 (GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.toggle.onValueChanged.RemoveListener(this.OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_4;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F_RuntimeMethod_var), NULL);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicToggleIsOnTransition_OnValueChanged_m93646E6E0B9563328A68DA60554C8D1387AD997F (GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B4_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B1_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B3_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B7_1 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B6_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* G_B5_0 = NULL;
	{
		// this._graphic.color = isOn ? (this.isHover ? this.HoverOnColor : this.HoverOnColor) : (this.isHover ? this.NormalOffColor : this.NormalOffColor);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->____graphic_5;
		bool L_1 = ___isOn0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B4_0 = L_0;
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->___isHover_10;
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B7_0 = L_3;
		G_B7_1 = G_B2_0;
		goto IL_0037;
	}

IL_0019:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOffColor_7;
		G_B7_0 = L_4;
		G_B7_1 = G_B3_0;
		goto IL_0037;
	}

IL_0021:
	{
		bool L_5 = __this->___isHover_10;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverOnColor_8;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		goto IL_0037;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___HoverOnColor_8;
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0037:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B7_1, G_B7_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.GraphicToggleIsOnTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicToggleIsOnTransition__ctor_m96F1539F957FDE7A7FB5F53C6AB06168B093FC7A (GraphicToggleIsOnTransition_t280E79A5A503969765740550450101DC2C6F4121* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalOnColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___NormalOnColor_6 = L_0;
		// public Color NormalOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___NormalOffColor_7 = L_1;
		// public Color HoverOnColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverOnColor_8 = L_2;
		// public Color HoverOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverOffColor_9 = L_3;
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
// System.Void Photon.Pun.UtilityScripts.OnPointerOverTooltip::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPointerOverTooltip_OnDestroy_m1A3C70CA634E61563AAC58CB8598C02B45BDA629 (OnPointerOverTooltip_t6CDDC42E25CB38D5A556F999BD366BB3DDB82955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PointedAtGameObjectInfo.Instance.RemoveFocus(this.GetComponent<PhotonView>());
		PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* L_0 = ((PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_StaticFields*)il2cpp_codegen_static_fields_for(PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var))->___Instance_4;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_1;
		L_1 = Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2(__this, Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		PointedAtGameObjectInfo_RemoveFocus_m4CC9CB8D8C94D676A7B14C79C41CC14A629EBD43(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnPointerOverTooltip::UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPointerOverTooltip_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_m3C02FB39A2F4286DB7844F2CD6E8F2285B8A8A89 (OnPointerOverTooltip_t6CDDC42E25CB38D5A556F999BD366BB3DDB82955* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PointedAtGameObjectInfo.Instance.RemoveFocus (this.GetComponent<PhotonView>());
		PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* L_0 = ((PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_StaticFields*)il2cpp_codegen_static_fields_for(PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var))->___Instance_4;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_1;
		L_1 = Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2(__this, Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		PointedAtGameObjectInfo_RemoveFocus_m4CC9CB8D8C94D676A7B14C79C41CC14A629EBD43(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnPointerOverTooltip::UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPointerOverTooltip_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter_m52D428A368C20DB9979A65B94EB8B0198EE721D4 (OnPointerOverTooltip_t6CDDC42E25CB38D5A556F999BD366BB3DDB82955* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PointedAtGameObjectInfo.Instance.SetFocus (this.GetComponent<PhotonView>());
		PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA* L_0 = ((PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_StaticFields*)il2cpp_codegen_static_fields_for(PointedAtGameObjectInfo_t446D167CC33F81A36E587524C1A7311B43BA45AA_il2cpp_TypeInfo_var))->___Instance_4;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_1;
		L_1 = Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2(__this, Component_GetComponent_TisPhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B_m746044A420F6E334D6664146FCFE7569712D22E2_RuntimeMethod_var);
		PointedAtGameObjectInfo_SetFocus_m1ABC0D7659399BD91CAA4ACAA615F0A4DE27F798(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.OnPointerOverTooltip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPointerOverTooltip__ctor_m69E63F4CD3453B133F8A80D0B68910EF7D078788 (OnPointerOverTooltip_t6CDDC42E25CB38D5A556F999BD366BB3DDB82955* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.TabViewManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabViewManager_Start_m3269BDA71B33621D8F6261A0F2D484440EC689F5 (TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m957E284F55A48A654918D23810F057CB245E572F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEBD98D18B111F86CE928C0F98917F52625C1F6F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m5805C8AA8164B7DAC28B6FF76B3A758AC1D20648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* V_2 = NULL;
	{
		// Tab_lut = new Dictionary<Toggle, Tab>();
		Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F* L_0 = (Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F*)il2cpp_codegen_object_new(Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m957E284F55A48A654918D23810F057CB245E572F(L_0, Dictionary_2__ctor_m957E284F55A48A654918D23810F057CB245E572F_RuntimeMethod_var);
		__this->___Tab_lut_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tab_lut_8), (void*)L_0);
		// foreach (Tab _tab in this.Tabs)
		TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* L_1 = __this->___Tabs_5;
		V_0 = L_1;
		V_1 = 0;
		goto IL_00b3;
	}

IL_0019:
	{
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_2 = (U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m83C4EF9827CADDA190243F972C10704EE8555D9A(L_2, NULL);
		V_2 = L_2;
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_3 = V_2;
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// foreach (Tab _tab in this.Tabs)
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_4 = V_2;
		TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		L_4->____tab_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____tab_0), (void*)L_8);
		// Tab_lut[_tab.Toggle] = _tab;
		Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F* L_9 = __this->___Tab_lut_8;
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_10 = V_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_11 = L_10->____tab_0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = L_11->___Toggle_1;
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_13 = V_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_14 = L_13->____tab_0;
		Dictionary_2_set_Item_mEBD98D18B111F86CE928C0F98917F52625C1F6F0(L_9, L_12, L_14, Dictionary_2_set_Item_mEBD98D18B111F86CE928C0F98917F52625C1F6F0_RuntimeMethod_var);
		// _tab.View.gameObject.SetActive(_tab.Toggle.isOn);
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_15 = V_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_16 = L_15->____tab_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = L_16->___View_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_19 = V_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_20 = L_19->____tab_0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_21 = L_20->___Toggle_1;
		bool L_22;
		L_22 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_21, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, L_22, NULL);
		// if (_tab.Toggle.isOn)
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_23 = V_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_24 = L_23->____tab_0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_25 = L_24->___Toggle_1;
		bool L_26;
		L_26 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_25, NULL);
		if (!L_26)
		{
			goto IL_008e;
		}
	}
	{
		// CurrentTab = _tab;
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_27 = V_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_28 = L_27->____tab_0;
		__this->___CurrentTab_7 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentTab_7), (void*)L_28);
	}

IL_008e:
	{
		// _tab.Toggle.onValueChanged.AddListener((isSelected) =>
		// {
		//     if (!isSelected)
		//     {
		//         return;
		//     }
		//     OnTabSelected(_tab);
		// });
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_29 = V_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_30 = L_29->____tab_0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_31 = L_30->___Toggle_1;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_32 = L_31->___onValueChanged_23;
		U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* L_33 = V_2;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_34 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_34, L_33, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m5805C8AA8164B7DAC28B6FF76B3A758AC1D20648_RuntimeMethod_var), NULL);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_32, L_34, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		// foreach (Tab _tab in this.Tabs)
		int32_t L_36 = V_1;
		TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TabViewManager::SelectTab(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabViewManager_SelectTab_m331B9032812249A9DD6D10073A269BFCE85D705A (TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* V_0 = NULL;
	int32_t V_1 = 0;
	Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* V_2 = NULL;
	{
		// foreach (Tab _t in Tabs)
		TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* L_0 = __this->___Tabs_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002e;
	}

IL_000b:
	{
		// foreach (Tab _t in Tabs)
		TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (_t.ID == id)
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_5 = V_2;
		String_t* L_6 = L_5->___ID_0;
		String_t* L_7 = ___id0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		// _t.Toggle.isOn = true;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_9 = V_2;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = L_9->___Toggle_1;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_10, (bool)1, NULL);
		// return;
		return;
	}

IL_002a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// foreach (Tab _t in Tabs)
		int32_t L_12 = V_1;
		TabU5BU5D_t0911B8F773369C8072C525321F0DB749432D87F5* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TabViewManager::OnTabSelected(Photon.Pun.UtilityScripts.TabViewManager/Tab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabViewManager_OnTabSelected_mEB2D07DED0969EAEA451C52BCDC325E19E2F7E6A (TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C* __this, Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* ___tab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0FD75F97F3C736BA3CDB6B5CDDC1FA0668CEEC51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m576AD7EF23D769C9CB3ED482D9849566C02D68E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentTab.View.gameObject.SetActive(false);
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_0 = __this->___CurrentTab_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = L_0->___View_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// CurrentTab = Tab_lut[ToggleGroup.ActiveToggles().FirstOrDefault()];
		Dictionary_2_t2C403773F4ECE7F8D67D45C52C8A89206464042F* L_3 = __this->___Tab_lut_8;
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_4 = __this->___ToggleGroup_4;
		RuntimeObject* L_5;
		L_5 = ToggleGroup_ActiveToggles_m04CAF25D2C9DE5F310090D63B9841963954BF2BF(L_4, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6;
		L_6 = Enumerable_FirstOrDefault_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m576AD7EF23D769C9CB3ED482D9849566C02D68E3(L_5, Enumerable_FirstOrDefault_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m576AD7EF23D769C9CB3ED482D9849566C02D68E3_RuntimeMethod_var);
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_7;
		L_7 = Dictionary_2_get_Item_m0FD75F97F3C736BA3CDB6B5CDDC1FA0668CEEC51(L_3, L_6, Dictionary_2_get_Item_m0FD75F97F3C736BA3CDB6B5CDDC1FA0668CEEC51_RuntimeMethod_var);
		__this->___CurrentTab_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CurrentTab_7), (void*)L_7);
		// CurrentTab.View.gameObject.SetActive(true);
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_8 = __this->___CurrentTab_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8->___View_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// OnTabChanged.Invoke(CurrentTab.ID);
		TabChangeEvent_t7D0974735674B29B166A1C0AD095737C7416A94E* L_11 = __this->___OnTabChanged_6;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_12 = __this->___CurrentTab_7;
		String_t* L_13 = L_12->___ID_0;
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_11, L_13, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TabViewManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabViewManager__ctor_mD5C53EA09615C548E2EC31B526AB7C4B96660DD6 (TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C* __this, const RuntimeMethod* method) 
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
// System.Void Photon.Pun.UtilityScripts.TabViewManager/TabChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabChangeEvent__ctor_mD8E09DADCE172C843B7D1631DF7D12801CEDF5C5 (TabChangeEvent_t7D0974735674B29B166A1C0AD095737C7416A94E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Photon.Pun.UtilityScripts.TabViewManager/Tab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab__ctor_mB517FCEF8843066D6485BCA09559528B7EB77A9D (Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ID = "";
		__this->___ID_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ID_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m83C4EF9827CADDA190243F972C10704EE8555D9A (U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0::<Start>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m5805C8AA8164B7DAC28B6FF76B3A758AC1D20648 (U3CU3Ec__DisplayClass7_0_tFBF77D1A7504113932F382D19AE8A3550CFF13C5* __this, bool ___isSelected0, const RuntimeMethod* method) 
{
	{
		// if (!isSelected)
		bool L_0 = ___isSelected0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// OnTabSelected(_tab);
		TabViewManager_t79FEB4028D3B4FD8E83489CB2D62553D0AFDAA7C* L_1 = __this->___U3CU3E4__this_1;
		Tab_t1A9E1728FBE38ACCF311983BC69B0EBCF5E9C208* L_2 = __this->____tab_0;
		TabViewManager_OnTabSelected_mEB2D07DED0969EAEA451C52BCDC325E19E2F7E6A(L_1, L_2, NULL);
		// });
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
// System.Void Photon.Pun.UtilityScripts.TextButtonTransition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_Awake_m7E3E7D768F2E4FCB1F3A7F3E84FDE55A667539C1 (TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextButtonTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnEnable_m7DA2E2FEE48C13F7C83F65C00EC95A77A46187C3 (TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextButtonTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnDisable_mEF478E2E8613998FD76D6C5689464D1308B581BC (TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextButtonTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerEnter_mF36A735940E19ECCF00F77BC91A85B460EFCD622 (TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_001b:
	{
		// _text.color = HoverColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___HoverColor_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextButtonTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerExit_mB38DA84FA2E5ED2D93FA6956E398905821559863 (TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_001b:
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___NormalColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextButtonTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition__ctor_m1372F49BBEB14B7F2C57398E78632E3C63F6667C (TextButtonTransition_t0DF2ED4C8569F1C095B7F30EA2E5C460E915F112* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___NormalColor_6 = L_0;
		// public Color HoverColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverColor_7 = L_1;
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
// System.Void Photon.Pun.UtilityScripts.TextToggleIsOnTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnEnable_mE1235C9EB31D977E9C753A497D4ACA20CA8CA15F (TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_5), (void*)L_0);
		// OnValueChanged (toggle.isOn);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143(__this, L_2, NULL);
		// toggle.onValueChanged.AddListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___toggle_4;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143_RuntimeMethod_var), NULL);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextToggleIsOnTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnDisable_m0A4253D5076399B5E616B0928EC053CB6FD4A263 (TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_4;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143_RuntimeMethod_var), NULL);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_mA516F1DC6521052476D813F0DAB2886FF1A78143 (TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	{
		// _text.color = isOn? (isHover?HoverOnColor:HoverOnColor) : (isHover?NormalOffColor:NormalOffColor) ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		bool L_1 = ___isOn0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B4_0 = L_0;
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->___isHover_10;
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B7_0 = L_3;
		G_B7_1 = G_B2_0;
		goto IL_0037;
	}

IL_0019:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOffColor_7;
		G_B7_0 = L_4;
		G_B7_1 = G_B3_0;
		goto IL_0037;
	}

IL_0021:
	{
		bool L_5 = __this->___isHover_10;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverOnColor_8;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		goto IL_0037;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___HoverOnColor_8;
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0037:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B7_1, G_B7_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextToggleIsOnTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerEnter_m9EE834566B444F2A17995D6BEE6B7024E2E3DAA0 (TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = true;
		__this->___isHover_10 = (bool)1;
		// _text.color = toggle.isOn?HoverOnColor:HoverOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___HoverOffColor_9;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___HoverOnColor_8;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextToggleIsOnTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerExit_m75C57FB7D8FB222595FCA3F499FF8A449F15D9B5 (TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = false;
		__this->___isHover_10 = (bool)0;
		// _text.color = toggle.isOn?NormalOnColor:NormalOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0022;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOnColor_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.UtilityScripts.TextToggleIsOnTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition__ctor_m51F00DB9CF2A699E64FFF8B191AB817CA7ADEED1 (TextToggleIsOnTransition_tA74C22D370973E52916FB0BB9CF0E81595A737F3* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalOnColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___NormalOnColor_6 = L_0;
		// public Color NormalOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___NormalOffColor_7 = L_1;
		// public Color HoverOnColor= Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverOnColor_8 = L_2;
		// public Color HoverOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___HoverOffColor_9 = L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CullArea_get_CellCount_m9D159D2CA3563F1C8C4DBE0EA7C83489A86BDF0E_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// public int CellCount { get; private set; }
		int32_t L_0 = __this->___U3CCellCountU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CullArea_set_CellTree_mD8FED6BDC59982FFF163F90316CA3F02E7EF3985_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* ___value0, const RuntimeMethod* method) 
{
	{
		// public CellTree CellTree { get; private set; }
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_0 = ___value0;
		__this->___U3CCellTreeU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCellTreeU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* CullArea_get_CellTree_mEA2517BBE4842D9E02F609B901FB3E2E4CB6F6B1_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, const RuntimeMethod* method) 
{
	{
		// public CellTree CellTree { get; private set; }
		CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* L_0 = __this->___U3CCellTreeU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* CellTree_get_RootNode_mF8BF401C5A36413F3F9F546C9AA925FFF1F34A20_inline (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, const RuntimeMethod* method) 
{
	{
		// public CellTreeNode RootNode { get; private set; }
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_0 = __this->___U3CRootNodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CullArea_set_CellCount_m1258F893AA2D32E75CC00FA88AA8120521C28E7F_inline (CullArea_tD15E9FFB61D9412CFF5F9FE69A4DAC12C588A6F9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int CellCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CCellCountU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellTree_set_RootNode_mCA8B8079714739B7BEB711A4E4262356D0C9D3A0_inline (CellTree_t3834355C99830F56A458D907FF2CDA6F2F01376B* __this, CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* ___value0, const RuntimeMethod* method) 
{
	{
		// public CellTreeNode RootNode { get; private set; }
		CellTreeNode_tBEE25AC7A42F65120A4AE6404A9FFC196FBC8B58* L_0 = ___value0;
		__this->___U3CRootNodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRootNodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_0 = __this->___U3CLoadBalancingPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonLagSimulationGui_set_Peer_m49E9D5045403F5FC5C426B6D660FF7AD81293CA3_inline (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___value0, const RuntimeMethod* method) 
{
	{
		// public PhotonPeer Peer { get; set; }
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0 = ___value0;
		__this->___U3CPeerU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPeerU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* PhotonLagSimulationGui_get_Peer_m6CA9590FE54B8E95493EE40E3912AF18AB22B3E7_inline (PhotonLagSimulationGui_t02374F7065C779FA5CCBC7F37851D894AF2E89BC* __this, const RuntimeMethod* method) 
{
	{
		// public PhotonPeer Peer { get; set; }
		PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* L_0 = __this->___U3CPeerU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* PhotonPeer_get_TrafficStatsGameLevel_m83D92F2C803367552F09AD55007BAD250309ED27_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* L_0 = __this->___U3CTrafficStatsGameLevelU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsIncoming_mFBFFDE72C315515EF874F92B67D135BEEE3E67D9_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_0 = __this->___U3CTrafficStatsIncomingU3Ek__BackingField_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* PhotonPeer_get_TrafficStatsOutgoing_mDD70068CDA34548046EF39295A045E978315AADE_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* L_0 = __this->___U3CTrafficStatsOutgoingU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mA2AF67D43294ED001C2635947B7106F31AF2A258_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m71114B26D67B50B310CDA6ABB04EE0BF56B22DC2_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m0D1CCC61EBD9CB994D7B9D06BD72DB05A965CCFF_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestEventCallbackU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_mB552F016E8EF81892BCF534E0BD04AA59909AE34_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m143E9CA4DA33C7A7CA213BD07A55C2AAAC1C3651_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m9801E6BC19F09875F7D3F65DE5E9B0EB2733907B_inline (TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m69795CA0AB8AB13740BEDAD899BED88745F4C8A5_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.viewIdField; }
		int32_t L_0 = __this->___viewIdField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->___U3CAppVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m5589924F18733494DEC1218392BCB531F45A06A8_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, const RuntimeMethod* method) 
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_UserId_m7FAE62845C7080A564297D0BFB285E692A1A234C_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// public string UserId { get; internal set; }
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Room_get_ExpectedUsers_m019AFBBF8602E417F5B072C313F1B44AD1B1D1A6_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.expectedUsers; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___expectedUsers_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.actorNumber; }
		int32_t L_0 = __this->___actorNumber_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// return this.nickName;
		String_t* L_0 = __this->___nickName_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// public Hashtable CustomProperties { get; set; }
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = __this->___U3CCustomPropertiesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Player_get_IsInactive_m4DDCB652FA77A7DD38F02922C4E411EA4647ED9B_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInactive { get; protected internal set; }
		bool L_0 = __this->___U3CIsInactiveU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* Room_get_Players_m4EC3800DE15506B277257D1EF67C6BCFBBE31065_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// return this.players;
		Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* L_0 = __this->___players_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerNumberingChanged_Invoke_mDD148C5F4DC1688BBAEBD29A3D24FA49EE598B64_inline (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (PlayerNumberingChanged_tDBC9D30DF851F4FE050F1610200F223DE58AE0EA* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonNetwork_get_OfflineMode_m6CE5DD1BEDC91807E215EAD144C476CA1D585178_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return offlineMode;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0 = ((PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var))->___offlineMode_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonStream_get_IsWriting_m7D9C8E96E51841AC62FC8884C2F8222821BD5ABE_inline (PhotonStream_t51D26D86E501F1931A26F2CF1C7D915D690CBD2E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsWriting { get; private set; }
		bool L_0 = __this->___U3CIsWritingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; set; }
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerCurrentRaycastU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CountdownTimerHasExpired_Invoke_mFCA700064E9DF7ED5A0C869ADDB69BAB5218D79B_inline (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (CountdownTimerHasExpired_t304470D949955C954E2701C853CE70D19743EC9E* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.customProperties;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = __this->___customProperties_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___item0;
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_mB39CFA30D2676E660366D7ED7B809B69FD56052E_gshared_inline (Enumerator_tC5339EB6E9A23E34DEEF2F0B458F1F376762DDBA* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
