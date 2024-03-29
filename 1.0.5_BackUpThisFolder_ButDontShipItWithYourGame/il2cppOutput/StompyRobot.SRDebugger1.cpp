﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.RectTransform>
struct Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B;
// System.Action`2<SRDebugger.Services.IDebugPanelService,System.Boolean>
struct Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<System.Object,System.Double>
struct Action_2_t20E1B0E5A61C42E2C74B90596ED942D921D42DE1;
// System.Action`2<SRDebugger.Profiler.ProfilerCameraListener,System.Double>
struct Action_2_tA32F4EFC7166F2307471608913A5C43E19FB7710;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994;
// SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>
struct CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86;
// SRDebugger.CircularBuffer`1<System.Object>
struct CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8;
// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>
struct CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>
struct Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<SRF.SRMonoBehaviourEx/FieldInfo>>
struct Dictionary_2_t97DF2C40713810247DAF867B5948BDDB6B61CC50;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Func`2<SRDebugger.UI.Controls.DataBoundControl,System.Boolean>
struct Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441;
// System.Func`2<SRDebugger.InfoEntry,System.Boolean>
struct Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t378757FF082427448349A80CC63683B50DA787D3;
// System.Collections.Generic.ICollection`1<SRDebugger.Internal.OptionDefinition>
struct ICollection_1_t0F47EB7AC6539447CABCB68183C6B8DF6C922D01;
// System.Collections.Generic.IEnumerable`1<SRDebugger.UI.Controls.Data.ActionControl>
struct IEnumerable_1_t01845B25734C6356310D36250FDD2072E54C2B93;
// System.Collections.Generic.IEnumerable`1<SRDebugger.UI.Controls.DataBoundControl>
struct IEnumerable_1_tD28B45256C2A534B63E734D4DD61C56B7F1B3AD0;
// System.Collections.Generic.IEnumerable`1<SRDebugger.InfoEntry>
struct IEnumerable_1_t1F00D19442885BD3E8E0A7788610EBB4F7C2D8CE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<System.String>>
struct IList_1_t8CBF8A14D60D30F596E914C85E39764EC4EA6C5E;
// System.Collections.Generic.IList`1<SRDebugger.UI.Controls.DataBoundControl>
struct IList_1_tA83287C403F77C6377AF9F1403D0286FCBE6CFF3;
// System.Collections.Generic.IList`1<SRDebugger.InfoEntry>
struct IList_1_t6B2B874B9F9D86D0474FE80853FAD605BFABFFED;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// SRDebugger.IReadOnlyList`1<SRDebugger.Services.ConsoleEntry>
struct IReadOnlyList_1_tFFEC872FBEEBFFB8E0390B224F3B0AB70EE67BE1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct KeyCollection_t7409E9C6F4F5E131453483B9B491A804453420D7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>
struct KeyCollection_tF0CF6DD8201C11E01157A0897C6A04F41CEFD372;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.String>>
struct List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF;
// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<SRDebugger.Services.ConsoleEntry>
struct List_1_tA9A645673265E80D7717D18DDFA69948FF697705;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<SRDebugger.InfoEntry>
struct List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<SRDebugger.Internal.OptionDefinition>
struct List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<SRF.Service.SRServiceManager/ServiceStub>
struct List_1_tA40EAFCC730C93D1879229844563FCFE5F96D449;
// System.Collections.Generic.List`1<SRDebugger.Settings/KeyboardShortcut>
struct List_1_t43F7817C4F27FD62F1DEA9057F84009FD3B2D012;
// SRF.SRList`1<SRF.Service.SRServiceManager/Service>
struct SRList_1_t2D3343394F7A650635CB6D1A97AC7BCF211FBEF0;
// SRF.Service.SRServiceBase`1<SRDebugger.Services.IProfilerService>
struct SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F;
// SRF.Service.SRServiceBase`1<System.Object>
struct SRServiceBase_1_tB2B1BC1D24274B5A1EB32E6B98DFC8EAD78C1418;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct ValueCollection_tC3D663C86025174C982B34E4D0DBC1D5E9B7E289;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>
struct ValueCollection_t58489CA2244BA66E100B2971572082EBC1DBE77A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>[]
struct EntryU5BU5D_t3DDC4DC6D48702292157B1BD874E92A63954E181;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>[]
struct EntryU5BU5D_t31FA95F6352DA38CFAA808573A1AAB81BEDE1082;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.IList`1<System.String>[]
struct IList_1U5BU5D_tB67D43809CBE34774C2E2AF0C1E1BF19A2DB4990;
// SRDebugger.UI.Controls.Data.ActionControl[]
struct ActionControlU5BU5D_t61A2FC0D511AE266CED70888DA92EF6F92EBFAE5;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// SRDebugger.Services.ConsoleEntry[]
struct ConsoleEntryU5BU5D_t06567CE6BE9B12A0717E6375058EC6554A27999E;
// SRDebugger.UI.Controls.DataBoundControl[]
struct DataBoundControlU5BU5D_t4B2E2AA435C74EA0A3C4FADDB23F303E09C1FB4F;
// SRDebugger.DefaultTabs[]
struct DefaultTabsU5BU5D_tD2873533C8FA7714E714764F244BD7BFE7110FA3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// SRDebugger.InfoEntry[]
struct InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// SRDebugger.Internal.OptionDefinition[]
struct OptionDefinitionU5BU5D_t395813AA90508BF82495A03972819AC39ABF28AE;
// SRDebugger.Services.ProfilerFrame[]
struct ProfilerFrameU5BU5D_t0C770999D7BF8B67DD6478C1397C41D6F4714B8D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// SRDebugger.Settings/KeyboardShortcut[]
struct KeyboardShortcutU5BU5D_tB004723F38D8D1795EB803EE1C95810CC95CB4BE;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// SRDebugger.ActionCompleteCallback
struct ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8;
// SRDebugger.UI.Controls.Data.ActionControl
struct ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// SRDebugger.Services.BugReport
struct BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE;
// SRDebugger.Internal.BugReportApi
struct BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6;
// SRDebugger.Services.BugReportCompleteCallback
struct BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742;
// SRDebugger.UI.Other.BugReportPopoverRoot
struct BugReportPopoverRoot_tD9AD1ED90F2260135F96B9A258720478D6EB33B6;
// SRDebugger.Services.Implementation.BugReportPopoverService
struct BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9;
// SRDebugger.Internal.BugReportScreenshotUtil
struct BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E;
// SRDebugger.UI.Other.BugReportSheetController
struct BugReportSheetController_t6AC7AEE3FAF8DE2E470B4F40000ABBB7A757751E;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// SRDebugger.Services.ConsoleEntry
struct ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E;
// SRDebugger.Services.ConsoleUpdatedEventHandler
struct ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E;
// System.Net.CookieContainer
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// SRDebugger.UI.Controls.DataBoundControl
struct DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244;
// SRDebugger.UI.DebugPanelRoot
struct DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8;
// SRDebugger.Services.Implementation.DebugPanelServiceImpl
struct DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF;
// SRDebugger.Scripts.DebuggerTabController
struct DebuggerTabController_t45624726A389690DCB52DF7465E2D938EABE4E91;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// System.Net.HttpWebResponse
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// SRDebugger.Services.IConsoleService
struct IConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// SRDebugger.Services.IDebugCameraService
struct IDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301;
// SRDebugger.Services.IDebugPanelService
struct IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5;
// SRDebugger.Services.IDebugTriggerService
struct IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// SRDebugger.Services.IDockConsoleService
struct IDockConsoleService_t93EDAA14AFD0DD9125973947F55322E972E09525;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// SRDebugger.Services.IOptionsService
struct IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647;
// SRDebugger.Services.IPinEntryService
struct IPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF;
// SRDebugger.Services.IPinnedUIService
struct IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF;
// SRDebugger.Services.IProfilerService
struct IProfilerService_t083F65D4ED0799FBAFFD3B9A94CFACF344315B60;
// SRDebugger.Services.ISystemInformationService
struct ISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// SRDebugger.InfoEntry
struct InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50;
// SRDebugger.Internal.InternalOptionsRegistry
struct InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// SRDebugger.Services.Implementation.KeyboardShortcutListenerService
struct KeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SRF.Helpers.MethodReference
struct MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// SRDebugger.Internal.OptionDefinition
struct OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E;
// SRDebugger.UI.Controls.OptionsControlBase
struct OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// SRDebugger.Services.PinEntryCompleteCallback
struct PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9;
// SRDebugger.PinnedUiCanvasCreated
struct PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// SRDebugger.Profiler.ProfilerCameraListener
struct ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5;
// SRDebugger.Profiler.ProfilerLateUpdateListener
struct ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765;
// SRDebugger.Profiler.ProfilerServiceImpl
struct ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SRF.Helpers.PropertyReference
struct PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Net.Cache.RequestCacheBinding
struct RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// System.Net.Cache.RequestCacheProtocol
struct RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// SRDebugger.Services.Implementation.SRDebugService
struct SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C;
// SRDebugger.Internal.SRDebugStrings
struct SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87;
// SRF.SRMonoBehaviour
struct SRMonoBehaviour_tEB92279D238CA6CFFD8EF186B5A92EB2F576BC1E;
// SRF.SRMonoBehaviourEx
struct SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F;
// SRDebugger.Profiler.SRPProfilerService
struct SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974;
// SRF.Service.SRServiceManager
struct SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F;
// System.Net.ServicePoint
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29;
// SRDebugger.Settings
struct Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD;
// SRDebugger.SortAttribute
struct SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// SRDebugger.Services.Implementation.StandardConsoleService
struct StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4;
// SRDebugger.Services.Implementation.StandardSystemInformationService
struct StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// SRDebugger.VisibilityChangedDelegate
struct VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// System.Net.WebCompletionSource
struct WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5;
// System.Net.WebException
struct WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebOperation
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
// System.Net.WebRequestStream
struct WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB;
// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// SRDebugger.Internal.BugReportApi/<Submit>d__19
struct U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8;
// SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1
struct U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB;
// SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19
struct U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B;
// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c
struct U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0;
// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Net.TimerThread/Queue
struct Queue_t644DC21212BC432819522EDA395EB4562BE2CC47;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hierarchy_t9BDC3294EE499A1B9E5B491D35FFF32DB3103234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t1DAF468795D1A9734CE27745D24DCA4F7A380793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1F00D19442885BD3E8E0A7788610EBB4F7C2D8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t841A81850A1EC7B22CB4EB80731C759D67895D4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9A97DD1070D5E1C432D04B9740F64D346594778F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6414DB3F37C3E622DE702802EE0837DED9844F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NPOTSupport_t6B3E25043FDF72E1E29C773947CA67098136BC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral00DB0EF248E66DE9F4DEE181D859C07B8B58B27B;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral07C17CC4E3045072DCA080B9FE1AB29FB7C85437;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5AFF7360D9A2572C53DEBA7CB218F5D672689D;
IL2CPP_EXTERN_C String_t* _stringLiteral0BBA6CE4003870CF27417A37DA15698A74F039FB;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2A74FAB4F43DEBE6E1D22C9BA57F0F657BAD2C;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6F498BAF68798C6D18ABF1EDD820D8888DBCAB;
IL2CPP_EXTERN_C String_t* _stringLiteral0D524543128424DA4DCDBE32D4889C4F167F4B87;
IL2CPP_EXTERN_C String_t* _stringLiteral0DD32B18A388C5F1A6BAFD3629759260C61F767C;
IL2CPP_EXTERN_C String_t* _stringLiteral0E461397E7076E9606713F5DF755114B9023ACF0;
IL2CPP_EXTERN_C String_t* _stringLiteral1350F8DDC655DCB4BFCF3A9B1BEE6066B862DA49;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral17471421ADABB6FA2E2BDAAFFD1E87AD00FE95A9;
IL2CPP_EXTERN_C String_t* _stringLiteral1821F646CFB5DD773411AD03961F65B0CC15DDCB;
IL2CPP_EXTERN_C String_t* _stringLiteral184E1F1A65632C44DB1FFB76F9053C42479DBD5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD5BAEA5774474EA13ABE255EEA58C428D76C00;
IL2CPP_EXTERN_C String_t* _stringLiteral1CEFF85110CDDBDC0AB424AB39D77009117E54C7;
IL2CPP_EXTERN_C String_t* _stringLiteral1D19752517E75B3D0F3FDFA49B895C10E863FDD1;
IL2CPP_EXTERN_C String_t* _stringLiteral1E77C8D5904D216C0CB266860238E3274F6A9750;
IL2CPP_EXTERN_C String_t* _stringLiteral1F8F870F7EB4426F00DE192C8070A43D127A26CE;
IL2CPP_EXTERN_C String_t* _stringLiteral22363BF58F994B1DA4D4FD5F66D80CF256EC53B5;
IL2CPP_EXTERN_C String_t* _stringLiteral23B186CF9AF0F24B9CE3025E2BEB2E8600991924;
IL2CPP_EXTERN_C String_t* _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D;
IL2CPP_EXTERN_C String_t* _stringLiteral259F624CAB8A5EEE164893015C52B5AE616DD7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral27E680F20276347E2D435AD7F5BB9AC1EA1B5A99;
IL2CPP_EXTERN_C String_t* _stringLiteral285A2B564964942D7A47F406823353C5AD45144F;
IL2CPP_EXTERN_C String_t* _stringLiteral28F5C012678D748A0B5424CD0244C002C56C49BA;
IL2CPP_EXTERN_C String_t* _stringLiteral2A585893BF72B49DADCEEACFE7DDF15D46943D29;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28;
IL2CPP_EXTERN_C String_t* _stringLiteral2C05461EF89568470E463928D10004E41D3BCF25;
IL2CPP_EXTERN_C String_t* _stringLiteral2C383529B6FD1D83DCDC0376F9F820FABB9A6C64;
IL2CPP_EXTERN_C String_t* _stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01;
IL2CPP_EXTERN_C String_t* _stringLiteral37ACCC3A62D2755E3CE975CD5662B7CFB0EB15AA;
IL2CPP_EXTERN_C String_t* _stringLiteral37C638884F0AF983CA3BD982A74F43DC0542E573;
IL2CPP_EXTERN_C String_t* _stringLiteral3B5F7BC59239981C1657A8A7F2562B1595A8467D;
IL2CPP_EXTERN_C String_t* _stringLiteral3C04182C9EE95F2880B939E2889AC73A76105B69;
IL2CPP_EXTERN_C String_t* _stringLiteral3E80AC34E4CAFA57DAA608CA95AC14CA648AAD94;
IL2CPP_EXTERN_C String_t* _stringLiteral44E7DB54F6E7048752D7239D26CAF904781C00A2;
IL2CPP_EXTERN_C String_t* _stringLiteral45045578780FD0B9DC1862175DE1C8476691896A;
IL2CPP_EXTERN_C String_t* _stringLiteral45E6D2167D5D059177E1E218904C4225E3C5CE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral48A35EC2092DB28A4C0E02293DD5DC74A0864EF0;
IL2CPP_EXTERN_C String_t* _stringLiteral4BBAA8AE21F00A2CED5FB34854B673FC39AE686E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5AE35F9D6B65C24EF57F766406601BC6EB29AB;
IL2CPP_EXTERN_C String_t* _stringLiteral4E68228F9565CCBB3F7C81D7DD36435A0F6970B8;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE60759EB2AF6D65D23436B1A331F83469A7B66;
IL2CPP_EXTERN_C String_t* _stringLiteral5252758825B8A7D31C7F3933F5B110522A05965C;
IL2CPP_EXTERN_C String_t* _stringLiteral540FAB15DE2300A364D718F90A3635887FB3D814;
IL2CPP_EXTERN_C String_t* _stringLiteral54C7390269A5D0D68159F749168D3C42D632FD97;
IL2CPP_EXTERN_C String_t* _stringLiteral56BBFE3C174A0B7F658871FEA094B6A061F1D753;
IL2CPP_EXTERN_C String_t* _stringLiteral59755FF314A1DF393CC0D0F6B030C52B4D641B8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64;
IL2CPP_EXTERN_C String_t* _stringLiteral6310BCA9A5340BFD134FD5009595DF7685C76E57;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral65180AFA71B817B68EDE371AE819B16562B357C8;
IL2CPP_EXTERN_C String_t* _stringLiteral6C379854BE64F495042DF2C26D73DBF30568882D;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9258046CEF20F342A802F2CC5EC455EBEC9C0A;
IL2CPP_EXTERN_C String_t* _stringLiteral6CA4C9CC4A99F82C6683ECCCAE8B4A89591693F7;
IL2CPP_EXTERN_C String_t* _stringLiteral741891CD1DFAF8BC69234A05831BEECA609A2B89;
IL2CPP_EXTERN_C String_t* _stringLiteral742E3BD69B2C05ADA8608A6EB02266681C8C0090;
IL2CPP_EXTERN_C String_t* _stringLiteral781A9D06EAD36B767A657BAD21ECE44EB0924108;
IL2CPP_EXTERN_C String_t* _stringLiteral81E80EA114E7CD2B970C5BA3E85B8F9E93C46DC4;
IL2CPP_EXTERN_C String_t* _stringLiteral8796FAC5F0D6C95B226E72C72868FFF40C8D6987;
IL2CPP_EXTERN_C String_t* _stringLiteral89E367D12A0F8E46E159CD87E621BA7B91E12E4B;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADAEA962224F943708B82E366B9BB92B9EAEED6;
IL2CPP_EXTERN_C String_t* _stringLiteral8CA4A64DAB7D941B6D64DC389E7457DB93D354A4;
IL2CPP_EXTERN_C String_t* _stringLiteral8D38182AB23D87B0C46DAD13BD19E552C295DD8A;
IL2CPP_EXTERN_C String_t* _stringLiteral8EBBE1A854521723F24B805C00DFAEE4496C19B0;
IL2CPP_EXTERN_C String_t* _stringLiteral932C6BBECE7CA25FF668B9E4EFD3367303D756CF;
IL2CPP_EXTERN_C String_t* _stringLiteral9814724DB63029E81ED8BEDE9D6F218A383A8D35;
IL2CPP_EXTERN_C String_t* _stringLiteral99A5B22C9FE377EEAE5B3A19C51127EB1FDF523D;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA13A3274AE9866BDD47D0410F6BA512E2BF28E22;
IL2CPP_EXTERN_C String_t* _stringLiteralA36810F90782F255182E394B91B39FE70AE1FDD4;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA6277078585E964B9C9DCAFD87BC3AADEA267B9C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA820DEF30222215CAA4A9E1EA39FAB5001C00B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralA824662BDE770142A50F46AF6397A81DBA0A6551;
IL2CPP_EXTERN_C String_t* _stringLiteralAAE948B77F656B98D57FEC0C362F7969616AF9CC;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4EDA30A8A838CFA2D76FF18EAEEF0AB7419DEC;
IL2CPP_EXTERN_C String_t* _stringLiteralB209F757E4C44505F93282E2475B06794598CAAE;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F6A2B1528F1875EE5A41A9FBEA6D27DD03AF43;
IL2CPP_EXTERN_C String_t* _stringLiteralB58AB42952E3CC34E68332B4F4602A9397B0DD7D;
IL2CPP_EXTERN_C String_t* _stringLiteralB9EC6EAAAF2E2340311BE9DD42838AE398DDFB36;
IL2CPP_EXTERN_C String_t* _stringLiteralBD1A526F409AD2387D44892AE83EAFF3865EC5E0;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB51A7C740F8B043D9E827C21242799BED7DACA;
IL2CPP_EXTERN_C String_t* _stringLiteralBE7090E01CFC12689400AEFE575AC0F0346F7C02;
IL2CPP_EXTERN_C String_t* _stringLiteralC90EBBF94B71833321121E964EA1F331C9786674;
IL2CPP_EXTERN_C String_t* _stringLiteralC9A44514151CE04EDAE281B4E9668234A8B40FF8;
IL2CPP_EXTERN_C String_t* _stringLiteralCB3DC5B15338827C4BBAD965646138C69223C405;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0ED9AD92B5ED567FD88A0CE10068B29B631F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0DDD731583C6D557F1C85F454D75EE8F61D3BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2FF3C3801822722D27CB555763D80CCC4F632B8;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D231AE0A6528DFC3E99D4D1A4F830DD6B15955;
IL2CPP_EXTERN_C String_t* _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
IL2CPP_EXTERN_C String_t* _stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A6CB80426DCBF11B603E554B76B75C657506E4;
IL2CPP_EXTERN_C String_t* _stringLiteralD8545E8ABF489F28193143F69A2FA8F73A036FB8;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE06233BCF7C676FD672C0CFC60FBB62ECBADBDA5;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE44409E3E22722610F99DB393175D49B7072CFBB;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B83DD1DFEB4C809D0DEE277711945702971ECB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D79C7913C186293BAEB9DBCA35212C2B8F3444;
IL2CPP_EXTERN_C String_t* _stringLiteralE8D1FEEA7D88D4575BF106080D4295F1BC51F2F1;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E4037C3CBD8F89F613F6B2A70829CD4DB86648;
IL2CPP_EXTERN_C String_t* _stringLiteralF352595D654E0B647FA5E2180ADE7FE36D3A8A34;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D6891E1C77A3310A5092F5198F55D8101765F0;
IL2CPP_EXTERN_C String_t* _stringLiteralF700ED6398D33BEEEB8EE97EF2D042B2AD837B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralFAACC83710F995D37FCEDE7419E784FEE5DA909F;
IL2CPP_EXTERN_C String_t* _stringLiteralFDCB496AC472147DF60D19C783F823CAA381451E;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_Clear_mAC06BBE2B106B3566649CADD0F29E35E2D7F9E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_Front_m581236D6257EA7EA795A62CDC40310864520A7A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_PopFront_m59F714C42681308F4C6110D937A678DE4BEAA42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_PushBack_m76E9F7FDBF8312C2BB54E0BD3D9969E265E190E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_get_IsFull_mD056EE761CFC320557BAFA6DF356DB1941A28DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_get_Item_m7F828D8B35F413B19399197C984C0EDF2895DA50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mCE058E969DE6E87614D6A355DDC4A0BDCF4A8C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3D25D70BDA57A43C5931F8BC28D87F30698426FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6B822B7BEB11BBAC17E6FAC337E3C9A937197F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m2BA2E5B78AA21FDFC5F7449F7060ED28829E4E15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisInfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50_m03FE185B282F3504C2228629F0ACD838F515E829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_mAD8DA63A82564A1F34A17D9D7BDD72D30FC763E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mED5599CA9BB23B9A04517D33F93B23D5B4A1CD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD50973638019052A0B0D6293E2ED746EFBCD7455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m662CF19E2EDC059D7044CD6778DEC1945F97DA36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA59C2B99EFEE708D057D4CE1C0DA44719F07FB6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mEC7AB3D0609F55A3F741B9E93C42D13B46ACECC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1DDA54A45D6F4F197E21E24EAC89E9B47749FDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2A824432281C9A9C273B4CF0A7DC4CA03C742E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDEC686466C2E704A3CCB79836ABE399654D2A7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE669B1265BB825E5D01FCB81EFF7286E0C93B5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1C5ED5A73337618E268C2D415B290E561AC09A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB1B1CE1C1AD9A2DB1E4AAA7CFCE06797D9D15336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEAD86F7CE9CE4AA75531C36DE1BFA5259C19D15B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFF6E748EB118D2AE7AF4670CED4DCDF127178406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mADFA037625C83670824A036BC3FC4366091C44FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m93980F9474961FBFF7E0C2C98171BF10CDCFE27C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBD450EC11E782B553DAED1B5CA71393D54781845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionControlFactory_CreateControl_mCB8330F2A671F00A2FA2D520EB60817C66470BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerServiceImpl_OnCameraPostRender_m97A1FD65FC9D77A14788454D08F862DFEB12CF0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerServiceImpl_OnCameraPreRender_mA200192D227D1D796C5E086F9BDDC2FC55B382F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerServiceImpl_OnLateUpdate_m4FBBEFB5598965A826A292C27C3EA6349D67DF48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m5958C571CCF5D97BBF0EBBA903F55E46B5A7AE97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_m3245729B8C12D3FCD75104ABC5C28974B9F20E0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRDebugService_DebugPanelServiceOnVisibilityChanged_mF9E5F1F083E3DD7567753824BCE6222D5124C81F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRDebugService_EnableWorldSpaceMode_m6216B3C6CE3BD959161D011C462E67DCD2B412E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRDebugService_U3CPromptEntryCodeU3Eb__42_0_m8E711B58E8E3B67370FA853A7EF840BAEEA28344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRDebugService_U3C_ctorU3Eb__17_0_mF1D1B1B74CE3B15D4F11E797A71AED1AD6D64A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRFGameObjectExtensions_RemoveComponentIfExists_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_mE1C1C11CFD9AA5A9A221FF3C76DB5FD97029CF22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRFGameObjectExtensions_RemoveComponentIfExists_TisSRRetinaScaler_t8C03AD3B0C71602F5A2888E2C612B396FC908ED2_m58FF2BA4705B73EC9D92196B5DC30F6B724CCFE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRInstantiate_Instantiate_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m095E2C90396BA4782161FC139CB0520542E806A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRInstantiate_Instantiate_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mF1BDEB1F76C3382B59BA71EEB799F01FDB8A3CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRPProfilerService_OnLateUpdate_m0ED473BDFED6D71D584BF10CBB3213130091BAF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRPProfilerService_RenderPipelineOnBeginFrameRendering_m42035B8421950BD46513981E2183F06849AE8B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRReflection_GetAttribute_TisCategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_m14082A6B1DB34ED14C36CB30AF342122ED5BA5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRReflection_GetAttribute_TisDisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_m8BDAA1BFF6BBC266E2E072C3A5A61702CC54D8AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRReflection_GetAttribute_TisSortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA_m14A0BB78B77A7341110F6E0419161B5C5A3711AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisBugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9_m5C6D3897B52BEEE1D12723DEC953001294018027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m4CE807F684A49BEA600DEFFA9852257E3CE631B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_mA0155022E01E183A8AC24BBFC6FFE4D28BAC8951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIDockConsoleService_t93EDAA14AFD0DD9125973947F55322E972E09525_mF948428FAC682F018A51C3360FB0D35C1A332EEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_m70A40ED23F6930F18D9B6AE9CD4D6A42518E0D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisIProfilerService_t083F65D4ED0799FBAFFD3B9A94CFACF344315B60_mCCBEF0038BE7C4F48A723BDC58C0AFA002300D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_m3BA0C18F7957036C76387AE5725AE6898708DFE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_GetService_TisKeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF_m428C22E42058C81ECB9B65426A119D59553531EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_RegisterService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m76DE4DEEC20C6765E2ABF69C9E75631951F05041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SRServiceManager_RegisterService_TisIDebugService_tCD191555D5201CA7C8017D05AFDDB2657C579CB0_m6A303BC42DF365205B42B10FE2E4942BF5441298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardConsoleService_UnityLogCallback_m2D5DCE7195D45EF94D5F2BE66D5F3688C43BB543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardSystemInformationService_Add_m7E13652641FDCC79F9835D51FBD0E483BB06B97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndOfFrameCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mB084A91ACE2CCE3AAE4EB1F2FB2C3BDF1A930ACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScreenshotCaptureCoU3Ed__1_System_Collections_IEnumerator_Reset_mC9D72892E2B4668AEE2D540C519F7EEB50393BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSubmitU3Ed__19_MoveNext_m8BBA8C799E173A5D53534BB21015F9D9103AFBD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSubmitU3Ed__19_System_Collections_IEnumerator_Reset_m495C0B3D2E7ECEF987BB036E68C191AAC9CC9EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_0_mB06C74A51DFD775788C959CAA8252451E8472714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_1_m58D86873A84209B4B0ED3BB4289AF3F28B366B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_2_m6F9CD00A106957DD1C61106E7D9B3D8AAC7FB5EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_3_m803738A5F8537CED11339641E53380223461E9E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_4_mFD342E0F3CC9D313C339DA8ED6F16191952D47A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_5_m487335BAE4AB30212E20762B009FBA4A1B2C6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_6_m6186B2F734D59071EEDB30A17602B9ADE69DDEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_7_mB42DC9F268C11496BD28E4CC820141DF0A2BE0B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_0_U3CShowBugReportSheetU3Eb__0_m277AA3301E4203C4B9DDB59E8F05E80E01116196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CAddU3Eb__0_m916DF7DEFD186B308CC62EE0DB4DDD1AB81E3127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCreateDataControlU3Eb__0_mE29E74AF5470E6A75AB2A0FEF92890A047D81EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ActionControlU5BU5D_t61A2FC0D511AE266CED70888DA92EF6F92EBFAE5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct DataBoundControlU5BU5D_t4B2E2AA435C74EA0A3C4FADDB23F303E09C1FB4F;
struct InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>
struct CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86  : public RuntimeObject
{
	// T[] SRDebugger.CircularBuffer`1::_buffer
	ConsoleEntryU5BU5D_t06567CE6BE9B12A0717E6375058EC6554A27999E* ____buffer_0;
	// System.Int32 SRDebugger.CircularBuffer`1::_end
	int32_t ____end_1;
	// System.Int32 SRDebugger.CircularBuffer`1::_count
	int32_t ____count_2;
	// System.Int32 SRDebugger.CircularBuffer`1::_start
	int32_t ____start_3;
};

// SRDebugger.CircularBuffer`1<System.Object>
struct CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8  : public RuntimeObject
{
	// T[] SRDebugger.CircularBuffer`1::_buffer
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____buffer_0;
	// System.Int32 SRDebugger.CircularBuffer`1::_end
	int32_t ____end_1;
	// System.Int32 SRDebugger.CircularBuffer`1::_count
	int32_t ____count_2;
	// System.Int32 SRDebugger.CircularBuffer`1::_start
	int32_t ____start_3;
};

// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>
struct CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD  : public RuntimeObject
{
	// T[] SRDebugger.CircularBuffer`1::_buffer
	ProfilerFrameU5BU5D_t0C770999D7BF8B67DD6478C1397C41D6F4714B8D* ____buffer_0;
	// System.Int32 SRDebugger.CircularBuffer`1::_end
	int32_t ____end_1;
	// System.Int32 SRDebugger.CircularBuffer`1::_count
	int32_t ____count_2;
	// System.Int32 SRDebugger.CircularBuffer`1::_start
	int32_t ____start_3;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3DDC4DC6D48702292157B1BD874E92A63954E181* ____entries_1;
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
	KeyCollection_t7409E9C6F4F5E131453483B9B491A804453420D7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC3D663C86025174C982B34E4D0DBC1D5E9B7E289* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>
struct Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t31FA95F6352DA38CFAA808573A1AAB81BEDE1082* ____entries_1;
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
	KeyCollection_tF0CF6DD8201C11E01157A0897C6A04F41CEFD372* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t58489CA2244BA66E100B2971572082EBC1DBE77A* ____values_8;
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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>
struct KeyCollection_tF0CF6DD8201C11E01157A0897C6A04F41CEFD372  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.String>>
struct List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IList_1U5BU5D_tB67D43809CBE34774C2E2AF0C1E1BF19A2DB4990* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<SRDebugger.InfoEntry>
struct List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<SRDebugger.Internal.OptionDefinition>
struct List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDefinitionU5BU5D_t395813AA90508BF82495A03972819AC39ABF28AE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// SRDebugger.Services.BugReport
struct BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<SRDebugger.Services.ConsoleEntry> SRDebugger.Services.BugReport::ConsoleLog
	List_1_tA9A645673265E80D7717D18DDFA69948FF697705* ___ConsoleLog_0;
	// System.String SRDebugger.Services.BugReport::Email
	String_t* ___Email_1;
	// System.Byte[] SRDebugger.Services.BugReport::ScreenshotData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ScreenshotData_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>> SRDebugger.Services.BugReport::SystemInformation
	Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* ___SystemInformation_3;
	// System.String SRDebugger.Services.BugReport::UserDescription
	String_t* ___UserDescription_4;
};

// SRDebugger.Internal.BugReportApi
struct BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6  : public RuntimeObject
{
	// System.String SRDebugger.Internal.BugReportApi::_apiKey
	String_t* ____apiKey_0;
	// SRDebugger.Services.BugReport SRDebugger.Internal.BugReportApi::_bugReport
	BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* ____bugReport_1;
	// System.Boolean SRDebugger.Internal.BugReportApi::_isBusy
	bool ____isBusy_2;
	// UnityEngine.Networking.UnityWebRequest SRDebugger.Internal.BugReportApi::_webRequest
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____webRequest_3;
	// System.Boolean SRDebugger.Internal.BugReportApi::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_4;
	// System.Boolean SRDebugger.Internal.BugReportApi::<WasSuccessful>k__BackingField
	bool ___U3CWasSuccessfulU3Ek__BackingField_5;
	// System.String SRDebugger.Internal.BugReportApi::<ErrorMessage>k__BackingField
	String_t* ___U3CErrorMessageU3Ek__BackingField_6;
};

// SRDebugger.Internal.BugReportScreenshotUtil
struct BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E  : public RuntimeObject
{
};

// SRDebugger.Services.ConsoleEntry
struct ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E  : public RuntimeObject
{
	// System.String SRDebugger.Services.ConsoleEntry::_messagePreview
	String_t* ____messagePreview_2;
	// System.String SRDebugger.Services.ConsoleEntry::_stackTracePreview
	String_t* ____stackTracePreview_3;
	// System.Int32 SRDebugger.Services.ConsoleEntry::Count
	int32_t ___Count_4;
	// UnityEngine.LogType SRDebugger.Services.ConsoleEntry::LogType
	int32_t ___LogType_5;
	// System.String SRDebugger.Services.ConsoleEntry::Message
	String_t* ___Message_6;
	// System.String SRDebugger.Services.ConsoleEntry::StackTrace
	String_t* ___StackTrace_7;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// SRDebugger.InfoEntry
struct InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50  : public RuntimeObject
{
	// System.String SRDebugger.InfoEntry::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.Boolean SRDebugger.InfoEntry::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_1;
	// System.Func`1<System.Object> SRDebugger.InfoEntry::_valueGetter
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ____valueGetter_2;
};

// SRDebugger.Internal.InternalOptionsRegistry
struct InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Object> SRDebugger.Internal.InternalOptionsRegistry::_registeredContainers
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____registeredContainers_0;
	// System.Action`1<System.Object> SRDebugger.Internal.InternalOptionsRegistry::_handler
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____handler_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// SRF.Helpers.MethodReference
struct MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F  : public RuntimeObject
{
	// System.Reflection.MethodInfo SRF.Helpers.MethodReference::_method
	MethodInfo_t* ____method_0;
	// System.Object SRF.Helpers.MethodReference::_target
	RuntimeObject* ____target_1;
};

// SRDebugger.Internal.OptionControlFactory
struct OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819  : public RuntimeObject
{
};

// SRDebugger.Internal.OptionDefinition
struct OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E  : public RuntimeObject
{
	// System.String SRDebugger.Internal.OptionDefinition::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String SRDebugger.Internal.OptionDefinition::<Category>k__BackingField
	String_t* ___U3CCategoryU3Ek__BackingField_1;
	// System.Int32 SRDebugger.Internal.OptionDefinition::<SortPriority>k__BackingField
	int32_t ___U3CSortPriorityU3Ek__BackingField_2;
	// SRF.Helpers.MethodReference SRDebugger.Internal.OptionDefinition::<Method>k__BackingField
	MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ___U3CMethodU3Ek__BackingField_3;
	// SRF.Helpers.PropertyReference SRDebugger.Internal.OptionDefinition::<Property>k__BackingField
	PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ___U3CPropertyU3Ek__BackingField_4;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// SRF.Helpers.PropertyReference
struct PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40  : public RuntimeObject
{
	// System.Reflection.PropertyInfo SRF.Helpers.PropertyReference::_property
	PropertyInfo_t* ____property_0;
	// System.Object SRF.Helpers.PropertyReference::_target
	RuntimeObject* ____target_1;
};

// SRDebugger.Internal.SRDebugApi
struct SRDebugApi_tB3EB565BDD619AA17E4AD856B074B141B2A4BB5A  : public RuntimeObject
{
};

// SRDebugger.Internal.SRDebugApiUtil
struct SRDebugApiUtil_t6C662CF5EDBA7007ABD4D3226C53EBECFC445C48  : public RuntimeObject
{
};

// SRDebugger.Internal.SRDebugPaths
struct SRDebugPaths_t8DDC364F80520420260424C127C8ED382EB2294F  : public RuntimeObject
{
};

// SRDebugger.Internal.SRDebugStrings
struct SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87  : public RuntimeObject
{
	// System.String SRDebugger.Internal.SRDebugStrings::Console_MessageTruncated
	String_t* ___Console_MessageTruncated_1;
	// System.String SRDebugger.Internal.SRDebugStrings::Console_NoStackTrace
	String_t* ___Console_NoStackTrace_2;
	// System.String SRDebugger.Internal.SRDebugStrings::PinEntryPrompt
	String_t* ___PinEntryPrompt_3;
	// System.String SRDebugger.Internal.SRDebugStrings::Profiler_DisableProfilerInfo
	String_t* ___Profiler_DisableProfilerInfo_4;
	// System.String SRDebugger.Internal.SRDebugStrings::Profiler_EnableProfilerInfo
	String_t* ___Profiler_EnableProfilerInfo_5;
	// System.String SRDebugger.Internal.SRDebugStrings::Profiler_NoProInfo
	String_t* ___Profiler_NoProInfo_6;
	// System.String SRDebugger.Internal.SRDebugStrings::Profiler_NotSupported
	String_t* ___Profiler_NotSupported_7;
	// System.String SRDebugger.Internal.SRDebugStrings::ProfilerCameraListenerHelp
	String_t* ___ProfilerCameraListenerHelp_8;
};

// SRDebugger.Internal.SRDebuggerUtil
struct SRDebuggerUtil_t8E5C355AED953A9AE74F89761ECBF2CE0265968C  : public RuntimeObject
{
};

// SRDebugger.Internal.Service
struct Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A  : public RuntimeObject
{
};

// SRDebugger.Services.Implementation.StandardConsoleService
struct StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4  : public RuntimeObject
{
	// System.Boolean SRDebugger.Services.Implementation.StandardConsoleService::_collapseEnabled
	bool ____collapseEnabled_0;
	// System.Boolean SRDebugger.Services.Implementation.StandardConsoleService::_hasCleared
	bool ____hasCleared_1;
	// SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry> SRDebugger.Services.Implementation.StandardConsoleService::_allConsoleEntries
	CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* ____allConsoleEntries_2;
	// SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry> SRDebugger.Services.Implementation.StandardConsoleService::_consoleEntries
	CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* ____consoleEntries_3;
	// System.Object SRDebugger.Services.Implementation.StandardConsoleService::_threadLock
	RuntimeObject* ____threadLock_4;
	// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::<ErrorCount>k__BackingField
	int32_t ___U3CErrorCountU3Ek__BackingField_5;
	// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::<WarningCount>k__BackingField
	int32_t ___U3CWarningCountU3Ek__BackingField_6;
	// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::<InfoCount>k__BackingField
	int32_t ___U3CInfoCountU3Ek__BackingField_7;
	// SRDebugger.Services.ConsoleUpdatedEventHandler SRDebugger.Services.Implementation.StandardConsoleService::Updated
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* ___Updated_8;
	// SRDebugger.Services.ConsoleUpdatedEventHandler SRDebugger.Services.Implementation.StandardConsoleService::Error
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* ___Error_9;
};

// SRDebugger.Services.Implementation.StandardSystemInformationService
struct StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>> SRDebugger.Services.Implementation.StandardSystemInformationService::_info
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* ____info_0;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// SRDebugger.Internal.BugReportApi/<Submit>d__19
struct U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8  : public RuntimeObject
{
	// System.Int32 SRDebugger.Internal.BugReportApi/<Submit>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SRDebugger.Internal.BugReportApi/<Submit>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SRDebugger.Internal.BugReportApi SRDebugger.Internal.BugReportApi/<Submit>d__19::<>4__this
	BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* ___U3CU3E4__this_2;
};

// SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1
struct U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303  : public RuntimeObject
{
	// System.Int32 SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137  : public RuntimeObject
{
	// SRDebugger.Internal.OptionDefinition SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0::from
	OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___from_0;
};

// SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB  : public RuntimeObject
{
	// SRDebugger.ActionCompleteCallback SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0::onComplete
	ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8* ___onComplete_0;
};

// SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19
struct U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B  : public RuntimeObject
{
	// System.Int32 SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SRDebugger.Profiler.SRPProfilerService SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::<>4__this
	SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* ___U3CU3E4__this_2;
};

// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c
struct U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0  : public RuntimeObject
{
};

// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E  : public RuntimeObject
{
	// SRDebugger.InfoEntry SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0::info
	InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* ___info_0;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>
struct KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<UnityEngine.CursorLockMode>
struct Nullable_1_t1BDF686E2EB05B9E18508CC14EA1C2CA1D25D475 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<SRDebugger.DefaultTabs>
struct Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.CategoryAttribute::localized
	bool ___localized_0;
	// System.String System.ComponentModel.CategoryAttribute::categoryValue
	String_t* ___categoryValue_1;
};

// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DisplayNameAttribute::<DisplayNameValue>k__BackingField
	String_t* ___U3CDisplayNameValueU3Ek__BackingField_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// SRDebugger.Services.ProfilerFrame
struct ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE 
{
	// System.Double SRDebugger.Services.ProfilerFrame::FrameTime
	double ___FrameTime_0;
	// System.Double SRDebugger.Services.ProfilerFrame::OtherTime
	double ___OtherTime_1;
	// System.Double SRDebugger.Services.ProfilerFrame::RenderTime
	double ___RenderTime_2;
	// System.Double SRDebugger.Services.ProfilerFrame::UpdateTime
	double ___UpdateTime_3;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// SRDebugger.SortAttribute
struct SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 SRDebugger.SortAttribute::SortPriority
	int32_t ___SortPriority_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;
	// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::m_CachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___m_CachePolicy_6;
	// System.Net.Cache.RequestCacheProtocol System.Net.WebRequest::m_CacheProtocol
	RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85* ___m_CacheProtocol_7;
	// System.Net.Cache.RequestCacheBinding System.Net.WebRequest::m_CacheBinding
	RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE* ___m_CacheBinding_8;
};

// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_tA8091398783D6C28CB17462491E5278FCEA986FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tA8091398783D6C28CB17462491E5278FCEA986FD__padding[36];
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

// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 
{
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;
};
// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_pinvoke
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_com
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>
struct Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5460B541814177F1FF16AF73E95193AB58326219  : public RuntimeObject
{
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9  : public WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B
{
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___requestUri_12;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___actualUri_13;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_14;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_15;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_16;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates_17;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_18;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_19;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_20;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9* ___continueDelegate_21;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookieContainer_22;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_23;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_24;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_25;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders_26;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_27;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_28;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_29;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_30;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_31;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_32;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_33;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_34;
	// System.Version System.Net.HttpWebRequest::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_35;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_36;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___actualVersion_37;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_38;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_39;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29* ___servicePoint_40;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_41;
	// System.Int32 System.Net.HttpWebRequest::continueTimeout
	int32_t ___continueTimeout_42;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB* ___writeStream_43;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___webResponse_44;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5* ___responseTask_45;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___currentOperation_46;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_47;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_48;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_49;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_50;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_51;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject* ___locker_52;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_53;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_54;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_58;
	// Mono.Net.Security.MobileTlsProvider System.Net.HttpWebRequest::tlsProvider
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___tlsProvider_59;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings_60;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F* ___certValidationCallback_61;
	// System.Boolean System.Net.HttpWebRequest::hostHasPort
	bool ___hostHasPort_62;
	// System.Uri System.Net.HttpWebRequest::hostUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___hostUri_63;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___auth_state_64;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___proxy_auth_state_65;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t378757FF082427448349A80CC63683B50DA787D3* ___ResendContentFactory_66;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_67;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_68;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// SRDebugger.Services.Implementation.SRDebugService
struct SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C  : public RuntimeObject
{
	// SRDebugger.VisibilityChangedDelegate SRDebugger.Services.Implementation.SRDebugService::PanelVisibilityChanged
	VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* ___PanelVisibilityChanged_0;
	// SRDebugger.PinnedUiCanvasCreated SRDebugger.Services.Implementation.SRDebugService::PinnedUiCanvasCreated
	PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* ___PinnedUiCanvasCreated_1;
	// SRDebugger.Services.IDebugPanelService SRDebugger.Services.Implementation.SRDebugService::_debugPanelService
	RuntimeObject* ____debugPanelService_2;
	// SRDebugger.Services.IDebugTriggerService SRDebugger.Services.Implementation.SRDebugService::_debugTrigger
	RuntimeObject* ____debugTrigger_3;
	// SRDebugger.Services.ISystemInformationService SRDebugger.Services.Implementation.SRDebugService::_informationService
	RuntimeObject* ____informationService_4;
	// SRDebugger.Services.IOptionsService SRDebugger.Services.Implementation.SRDebugService::_optionsService
	RuntimeObject* ____optionsService_5;
	// SRDebugger.Services.IPinnedUIService SRDebugger.Services.Implementation.SRDebugService::_pinnedUiService
	RuntimeObject* ____pinnedUiService_6;
	// System.Boolean SRDebugger.Services.Implementation.SRDebugService::_entryCodeEnabled
	bool ____entryCodeEnabled_7;
	// System.Boolean SRDebugger.Services.Implementation.SRDebugService::_hasAuthorised
	bool ____hasAuthorised_8;
	// System.Nullable`1<SRDebugger.DefaultTabs> SRDebugger.Services.Implementation.SRDebugService::_queuedTab
	Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F ____queuedTab_9;
	// UnityEngine.RectTransform SRDebugger.Services.Implementation.SRDebugService::_worldSpaceTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____worldSpaceTransform_10;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.RectTransform>
struct Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B  : public MulticastDelegate_t
{
};

// System.Action`2<SRDebugger.Services.IDebugPanelService,System.Boolean>
struct Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Double>
struct Action_2_t20E1B0E5A61C42E2C74B90596ED942D921D42DE1  : public MulticastDelegate_t
{
};

// System.Action`2<SRDebugger.Profiler.ProfilerCameraListener,System.Double>
struct Action_2_tA32F4EFC7166F2307471608913A5C43E19FB7710  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
{
};

// System.Func`2<SRDebugger.UI.Controls.DataBoundControl,System.Boolean>
struct Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441  : public MulticastDelegate_t
{
};

// System.Func`2<SRDebugger.InfoEntry,System.Boolean>
struct Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// SRDebugger.ActionCompleteCallback
struct ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SRDebugger.Services.BugReportCompleteCallback
struct BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742  : public MulticastDelegate_t
{
};

// SRDebugger.Services.ConsoleUpdatedEventHandler
struct ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E  : public MulticastDelegate_t
{
};

// SRDebugger.Services.Implementation.DebugPanelServiceImpl
struct DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// SRDebugger.UI.DebugPanelRoot SRDebugger.Services.Implementation.DebugPanelServiceImpl::_debugPanelRootObject
	DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* ____debugPanelRootObject_4;
	// System.Action`2<SRDebugger.Services.IDebugPanelService,System.Boolean> SRDebugger.Services.Implementation.DebugPanelServiceImpl::VisibilityChanged
	Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6* ___VisibilityChanged_5;
	// System.Boolean SRDebugger.Services.Implementation.DebugPanelServiceImpl::_isVisible
	bool ____isVisible_6;
	// System.Nullable`1<System.Boolean> SRDebugger.Services.Implementation.DebugPanelServiceImpl::_cursorWasVisible
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____cursorWasVisible_7;
	// System.Nullable`1<UnityEngine.CursorLockMode> SRDebugger.Services.Implementation.DebugPanelServiceImpl::_cursorLockMode
	Nullable_1_t1BDF686E2EB05B9E18508CC14EA1C2CA1D25D475 ____cursorLockMode_8;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// SRDebugger.Services.PinEntryCompleteCallback
struct PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9  : public MulticastDelegate_t
{
};

// SRDebugger.PinnedUiCanvasCreated
struct PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C  : public MulticastDelegate_t
{
};

// SRDebugger.Settings
struct Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.ComponentModel.PropertyChangedEventHandler SRDebugger.Settings::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_7;
	// System.Boolean SRDebugger.Settings::_isEnabled
	bool ____isEnabled_8;
	// SRDebugger.DefaultTabs SRDebugger.Settings::_defaultTab
	int32_t ____defaultTab_9;
	// SRDebugger.Settings/TriggerEnableModes SRDebugger.Settings::_triggerEnableMode
	int32_t ____triggerEnableMode_10;
	// SRDebugger.Settings/TriggerBehaviours SRDebugger.Settings::_triggerBehaviour
	int32_t ____triggerBehaviour_11;
	// System.Boolean SRDebugger.Settings::_errorNotification
	bool ____errorNotification_12;
	// System.Boolean SRDebugger.Settings::_enableKeyboardShortcuts
	bool ____enableKeyboardShortcuts_13;
	// SRDebugger.Settings/KeyboardShortcut[] SRDebugger.Settings::_keyboardShortcuts
	KeyboardShortcutU5BU5D_tB004723F38D8D1795EB803EE1C95810CC95CB4BE* ____keyboardShortcuts_14;
	// SRDebugger.Settings/KeyboardShortcut[] SRDebugger.Settings::_newKeyboardShortcuts
	KeyboardShortcutU5BU5D_tB004723F38D8D1795EB803EE1C95810CC95CB4BE* ____newKeyboardShortcuts_15;
	// System.Boolean SRDebugger.Settings::_keyboardModifierControl
	bool ____keyboardModifierControl_16;
	// System.Boolean SRDebugger.Settings::_keyboardModifierAlt
	bool ____keyboardModifierAlt_17;
	// System.Boolean SRDebugger.Settings::_keyboardModifierShift
	bool ____keyboardModifierShift_18;
	// System.Boolean SRDebugger.Settings::_keyboardEscapeClose
	bool ____keyboardEscapeClose_19;
	// System.Boolean SRDebugger.Settings::_enableBackgroundTransparency
	bool ____enableBackgroundTransparency_20;
	// System.Boolean SRDebugger.Settings::_collapseDuplicateLogEntries
	bool ____collapseDuplicateLogEntries_21;
	// System.Boolean SRDebugger.Settings::_richTextInConsole
	bool ____richTextInConsole_22;
	// System.Boolean SRDebugger.Settings::_requireEntryCode
	bool ____requireEntryCode_23;
	// System.Boolean SRDebugger.Settings::_requireEntryCodeEveryTime
	bool ____requireEntryCodeEveryTime_24;
	// System.Int32[] SRDebugger.Settings::_entryCode
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____entryCode_25;
	// System.Boolean SRDebugger.Settings::_useDebugCamera
	bool ____useDebugCamera_26;
	// System.Int32 SRDebugger.Settings::_debugLayer
	int32_t ____debugLayer_27;
	// System.Single SRDebugger.Settings::_debugCameraDepth
	float ____debugCameraDepth_28;
	// System.String SRDebugger.Settings::_apiKey
	String_t* ____apiKey_29;
	// System.Boolean SRDebugger.Settings::_enableBugReporter
	bool ____enableBugReporter_30;
	// SRDebugger.DefaultTabs[] SRDebugger.Settings::_disabledTabs
	DefaultTabsU5BU5D_tD2873533C8FA7714E714764F244BD7BFE7110FA3* ____disabledTabs_31;
	// SRDebugger.PinAlignment SRDebugger.Settings::_profilerAlignment
	int32_t ____profilerAlignment_32;
	// SRDebugger.PinAlignment SRDebugger.Settings::_optionsAlignment
	int32_t ____optionsAlignment_33;
	// SRDebugger.ConsoleAlignment SRDebugger.Settings::_consoleAlignment
	int32_t ____consoleAlignment_34;
	// SRDebugger.PinAlignment SRDebugger.Settings::_triggerPosition
	int32_t ____triggerPosition_35;
	// System.Int32 SRDebugger.Settings::_maximumConsoleEntries
	int32_t ____maximumConsoleEntries_36;
	// System.Boolean SRDebugger.Settings::_enableEventSystemCreation
	bool ____enableEventSystemCreation_37;
	// System.Boolean SRDebugger.Settings::_automaticShowCursor
	bool ____automaticShowCursor_38;
	// System.Single SRDebugger.Settings::_uiScale
	float ____uiScale_39;
	// System.Boolean SRDebugger.Settings::_unloadOnClose
	bool ____unloadOnClose_40;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SRDebugger.VisibilityChangedDelegate
struct VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// System.Net.WebException
struct WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.Net.WebExceptionStatus System.Net.WebException::m_Status
	int32_t ___m_Status_18;
	// System.Net.WebResponse System.Net.WebException::m_Response
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ___m_Response_19;
	// System.Net.WebExceptionInternalStatus System.Net.WebException::m_InternalStatus
	int32_t ___m_InternalStatus_20;
};

// SRDebugger.Profiler.ProfilerCameraListener
struct ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera SRDebugger.Profiler.ProfilerCameraListener::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// System.Diagnostics.Stopwatch SRDebugger.Profiler.ProfilerCameraListener::_stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ____stopwatch_5;
	// System.Action`2<SRDebugger.Profiler.ProfilerCameraListener,System.Double> SRDebugger.Profiler.ProfilerCameraListener::RenderDurationCallback
	Action_2_tA32F4EFC7166F2307471608913A5C43E19FB7710* ___RenderDurationCallback_6;
};

// SRDebugger.Profiler.ProfilerLateUpdateListener
struct ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action SRDebugger.Profiler.ProfilerLateUpdateListener::OnLateUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnLateUpdate_4;
};

// SRF.SRMonoBehaviour
struct SRMonoBehaviour_tEB92279D238CA6CFFD8EF186B5A92EB2F576BC1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider SRF.SRMonoBehaviour::_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____collider_4;
	// UnityEngine.Transform SRF.SRMonoBehaviour::_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____transform_5;
	// UnityEngine.Rigidbody SRF.SRMonoBehaviour::_rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidBody_6;
	// UnityEngine.GameObject SRF.SRMonoBehaviour::_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObject_7;
	// UnityEngine.Rigidbody2D SRF.SRMonoBehaviour::_rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody2D_8;
	// UnityEngine.Collider2D SRF.SRMonoBehaviour::_collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ____collider2D_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SRF.Components.SRAutoSingleton`1<SRF.Service.SRServiceManager>
struct SRAutoSingleton_1_t19FB134FA3E229C21D7EC5A3A0F7E5B27E2B871B  : public SRMonoBehaviour_tEB92279D238CA6CFFD8EF186B5A92EB2F576BC1E
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
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

// SRF.SRMonoBehaviourEx
struct SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F  : public SRMonoBehaviour_tEB92279D238CA6CFFD8EF186B5A92EB2F576BC1E
{
};

// SRF.Service.SRServiceBase`1<SRDebugger.Services.Implementation.BugReportPopoverService>
struct SRServiceBase_1_tF3C6DB8336EF42580CBE0E7FF97457DC59B08D7B  : public SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F
{
};

// SRF.Service.SRServiceBase`1<SRDebugger.Services.IProfilerService>
struct SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F  : public SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F
{
};

// SRF.Service.SRServiceBase`1<SRDebugger.Services.Implementation.KeyboardShortcutListenerService>
struct SRServiceBase_1_tC1BABA830A50BBA5FD8F460874D01BFDF1C75786  : public SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F
{
};

// SRDebugger.UI.DebugPanelRoot
struct DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8  : public SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F
{
	// UnityEngine.Canvas SRDebugger.UI.DebugPanelRoot::Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___Canvas_11;
	// UnityEngine.CanvasGroup SRDebugger.UI.DebugPanelRoot::CanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___CanvasGroup_12;
	// SRDebugger.Scripts.DebuggerTabController SRDebugger.UI.DebugPanelRoot::TabController
	DebuggerTabController_t45624726A389690DCB52DF7465E2D938EABE4E91* ___TabController_13;
};

// SRDebugger.UI.Controls.OptionsControlBase
struct OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91  : public SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F
{
	// System.Boolean SRDebugger.UI.Controls.OptionsControlBase::_selectionModeEnabled
	bool ____selectionModeEnabled_11;
	// UnityEngine.UI.Toggle SRDebugger.UI.Controls.OptionsControlBase::SelectionModeToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___SelectionModeToggle_12;
	// SRDebugger.Internal.OptionDefinition SRDebugger.UI.Controls.OptionsControlBase::Option
	OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___Option_13;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
};

// SRF.Service.SRServiceManager
struct SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F  : public SRAutoSingleton_1_t19FB134FA3E229C21D7EC5A3A0F7E5B27E2B871B
{
	// SRF.SRList`1<SRF.Service.SRServiceManager/Service> SRF.Service.SRServiceManager::_services
	SRList_1_t2D3343394F7A650635CB6D1A97AC7BCF211FBEF0* ____services_15;
	// System.Collections.Generic.List`1<SRF.Service.SRServiceManager/ServiceStub> SRF.Service.SRServiceManager::_serviceStubs
	List_1_tA40EAFCC730C93D1879229844563FCFE5F96D449* ____serviceStubs_16;
};

// SRDebugger.UI.Controls.Data.ActionControl
struct ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A  : public OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91
{
	// SRF.Helpers.MethodReference SRDebugger.UI.Controls.Data.ActionControl::_method
	MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ____method_14;
	// UnityEngine.UI.Button SRDebugger.UI.Controls.Data.ActionControl::Button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Button_15;
	// UnityEngine.UI.Text SRDebugger.UI.Controls.Data.ActionControl::Title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Title_16;
};

// SRDebugger.Services.Implementation.BugReportPopoverService
struct BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9  : public SRServiceBase_1_tF3C6DB8336EF42580CBE0E7FF97457DC59B08D7B
{
	// SRDebugger.Services.BugReportCompleteCallback SRDebugger.Services.Implementation.BugReportPopoverService::_callback
	BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742* ____callback_11;
	// System.Boolean SRDebugger.Services.Implementation.BugReportPopoverService::_isVisible
	bool ____isVisible_12;
	// SRDebugger.UI.Other.BugReportPopoverRoot SRDebugger.Services.Implementation.BugReportPopoverService::_popover
	BugReportPopoverRoot_tD9AD1ED90F2260135F96B9A258720478D6EB33B6* ____popover_13;
	// SRDebugger.UI.Other.BugReportSheetController SRDebugger.Services.Implementation.BugReportPopoverService::_sheet
	BugReportSheetController_t6AC7AEE3FAF8DE2E470B4F40000ABBB7A757751E* ____sheet_14;
};

// SRDebugger.UI.Controls.DataBoundControl
struct DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244  : public OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91
{
	// System.Boolean SRDebugger.UI.Controls.DataBoundControl::_hasStarted
	bool ____hasStarted_14;
	// System.Boolean SRDebugger.UI.Controls.DataBoundControl::_isReadOnly
	bool ____isReadOnly_15;
	// System.Object SRDebugger.UI.Controls.DataBoundControl::_prevValue
	RuntimeObject* ____prevValue_16;
	// SRF.Helpers.PropertyReference SRDebugger.UI.Controls.DataBoundControl::_prop
	PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ____prop_17;
	// System.String SRDebugger.UI.Controls.DataBoundControl::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_18;
};

// SRDebugger.Services.Implementation.KeyboardShortcutListenerService
struct KeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF  : public SRServiceBase_1_tC1BABA830A50BBA5FD8F460874D01BFDF1C75786
{
	// System.Collections.Generic.List`1<SRDebugger.Settings/KeyboardShortcut> SRDebugger.Services.Implementation.KeyboardShortcutListenerService::_shortcuts
	List_1_t43F7817C4F27FD62F1DEA9057F84009FD3B2D012* ____shortcuts_11;
};

// SRDebugger.Profiler.ProfilerServiceImpl
struct ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811  : public SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F
{
	// System.Single SRDebugger.Profiler.ProfilerServiceImpl::<AverageFrameTime>k__BackingField
	float ___U3CAverageFrameTimeU3Ek__BackingField_11;
	// System.Single SRDebugger.Profiler.ProfilerServiceImpl::<LastFrameTime>k__BackingField
	float ___U3CLastFrameTimeU3Ek__BackingField_12;
	// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame> SRDebugger.Profiler.ProfilerServiceImpl::_frameBuffer
	CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* ____frameBuffer_14;
	// SRDebugger.Profiler.ProfilerLateUpdateListener SRDebugger.Profiler.ProfilerServiceImpl::_lateUpdateListener
	ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* ____lateUpdateListener_15;
	// System.Diagnostics.Stopwatch SRDebugger.Profiler.ProfilerServiceImpl::_stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ____stopwatch_16;
	// System.Double SRDebugger.Profiler.ProfilerServiceImpl::_updateDuration
	double ____updateDuration_17;
	// System.Double SRDebugger.Profiler.ProfilerServiceImpl::_renderStartTime
	double ____renderStartTime_18;
	// System.Double SRDebugger.Profiler.ProfilerServiceImpl::_renderDuration
	double ____renderDuration_19;
	// System.Int32 SRDebugger.Profiler.ProfilerServiceImpl::_camerasThisFrame
	int32_t ____camerasThisFrame_20;
};

// SRDebugger.Profiler.SRPProfilerService
struct SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974  : public SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F
{
	// System.Single SRDebugger.Profiler.SRPProfilerService::<AverageFrameTime>k__BackingField
	float ___U3CAverageFrameTimeU3Ek__BackingField_11;
	// System.Single SRDebugger.Profiler.SRPProfilerService::<LastFrameTime>k__BackingField
	float ___U3CLastFrameTimeU3Ek__BackingField_12;
	// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame> SRDebugger.Profiler.SRPProfilerService::_frameBuffer
	CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* ____frameBuffer_14;
	// SRDebugger.Profiler.ProfilerLateUpdateListener SRDebugger.Profiler.SRPProfilerService::_lateUpdateListener
	ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* ____lateUpdateListener_15;
	// System.Double SRDebugger.Profiler.SRPProfilerService::_updateDuration
	double ____updateDuration_16;
	// System.Double SRDebugger.Profiler.SRPProfilerService::_renderStartTime
	double ____renderStartTime_17;
	// System.Double SRDebugger.Profiler.SRPProfilerService::_renderDuration
	double ____renderDuration_18;
	// System.Diagnostics.Stopwatch SRDebugger.Profiler.SRPProfilerService::_stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ____stopwatch_19;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_18;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_20;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_21;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_22;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_26;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_28;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_29;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_30;
};

// SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>

// SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>

// SRDebugger.CircularBuffer`1<System.Object>

// SRDebugger.CircularBuffer`1<System.Object>

// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>

// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.String>>
struct List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IList_1U5BU5D_tB67D43809CBE34774C2E2AF0C1E1BF19A2DB4990* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.String>>

// System.Collections.Generic.List`1<SRDebugger.InfoEntry>
struct List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SRDebugger.InfoEntry>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<SRDebugger.Internal.OptionDefinition>
struct List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDefinitionU5BU5D_t395813AA90508BF82495A03972819AC39ABF28AE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SRDebugger.Internal.OptionDefinition>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Attribute

// System.Attribute

// SRDebugger.Services.BugReport

// SRDebugger.Services.BugReport

// SRDebugger.Internal.BugReportApi

// SRDebugger.Internal.BugReportApi

// SRDebugger.Internal.BugReportScreenshotUtil
struct BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_StaticFields
{
	// System.Byte[] SRDebugger.Internal.BugReportScreenshotUtil::ScreenshotData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ScreenshotData_0;
};

// SRDebugger.Internal.BugReportScreenshotUtil

// SRDebugger.Services.ConsoleEntry

// SRDebugger.Services.ConsoleEntry

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// SRDebugger.InfoEntry

// SRDebugger.InfoEntry

// SRDebugger.Internal.InternalOptionsRegistry

// SRDebugger.Internal.InternalOptionsRegistry

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// SRF.Helpers.MethodReference

// SRF.Helpers.MethodReference

// SRDebugger.Internal.OptionControlFactory
struct OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields
{
	// System.Collections.Generic.IList`1<SRDebugger.UI.Controls.DataBoundControl> SRDebugger.Internal.OptionControlFactory::_dataControlPrefabs
	RuntimeObject* ____dataControlPrefabs_0;
	// SRDebugger.UI.Controls.Data.ActionControl SRDebugger.Internal.OptionControlFactory::_actionControlPrefab
	ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* ____actionControlPrefab_1;
};

// SRDebugger.Internal.OptionControlFactory

// SRDebugger.Internal.OptionDefinition

// SRDebugger.Internal.OptionDefinition

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// SRF.Helpers.PropertyReference

// SRF.Helpers.PropertyReference

// SRDebugger.Internal.SRDebugApi

// SRDebugger.Internal.SRDebugApi

// SRDebugger.Internal.SRDebugApiUtil

// SRDebugger.Internal.SRDebugApiUtil

// SRDebugger.Internal.SRDebugPaths

// SRDebugger.Internal.SRDebugPaths

// SRDebugger.Internal.SRDebugStrings
struct SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_StaticFields
{
	// SRDebugger.Internal.SRDebugStrings SRDebugger.Internal.SRDebugStrings::Current
	SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87* ___Current_0;
};

// SRDebugger.Internal.SRDebugStrings

// SRDebugger.Internal.SRDebuggerUtil

// SRDebugger.Internal.SRDebuggerUtil

// SRDebugger.Internal.Service
struct Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields
{
	// SRDebugger.Services.IConsoleService SRDebugger.Internal.Service::_consoleService
	RuntimeObject* ____consoleService_0;
	// SRDebugger.Services.IDebugPanelService SRDebugger.Internal.Service::_debugPanelService
	RuntimeObject* ____debugPanelService_1;
	// SRDebugger.Services.IDebugTriggerService SRDebugger.Internal.Service::_debugTriggerService
	RuntimeObject* ____debugTriggerService_2;
	// SRDebugger.Services.IPinnedUIService SRDebugger.Internal.Service::_pinnedUiService
	RuntimeObject* ____pinnedUiService_3;
	// SRDebugger.Services.IDebugCameraService SRDebugger.Internal.Service::_debugCameraService
	RuntimeObject* ____debugCameraService_4;
	// SRDebugger.Services.IOptionsService SRDebugger.Internal.Service::_optionsService
	RuntimeObject* ____optionsService_5;
	// SRDebugger.Services.IDockConsoleService SRDebugger.Internal.Service::_dockConsoleService
	RuntimeObject* ____dockConsoleService_6;
};

// SRDebugger.Internal.Service

// SRDebugger.Services.Implementation.StandardConsoleService

// SRDebugger.Services.Implementation.StandardConsoleService

// SRDebugger.Services.Implementation.StandardSystemInformationService

// SRDebugger.Services.Implementation.StandardSystemInformationService

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.Diagnostics.Stopwatch

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// SRDebugger.Internal.BugReportApi/<Submit>d__19

// SRDebugger.Internal.BugReportApi/<Submit>d__19

// SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1

// SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1

// SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0

// SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0

// SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0

// SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0

// SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19

// SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19

// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c
struct U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields
{
	// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9
	U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* ___U3CU3E9_0;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_0
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_0_1;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_1
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_1_2;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_2
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_2_3;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_3
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_3_4;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_4
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_4_5;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_5
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_5_6;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_6
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_6_7;
	// System.Func`1<System.Object> SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<>9__6_7
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__6_7_8;
};

// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c

// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0

// SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<UnityEngine.CursorLockMode>

// System.Nullable`1<UnityEngine.CursorLockMode>

// System.Nullable`1<SRDebugger.DefaultTabs>

// System.Nullable`1<SRDebugger.DefaultTabs>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.ComponentModel.CategoryAttribute

// System.ComponentModel.CategoryAttribute

// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields
{
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* ___Default_0;
};

// System.ComponentModel.DisplayNameAttribute

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// SRDebugger.Services.ProfilerFrame

// SRDebugger.Services.ProfilerFrame

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// UnityEngine.Rendering.ShaderTagId

// UnityEngine.Rendering.ShaderTagId

// System.Single

// System.Single

// SRDebugger.SortAttribute

// SRDebugger.SortAttribute

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_StaticFields
{
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_t644DC21212BC432819522EDA395EB4562BE2CC47* ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E* ___webRequestCreate_9;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_11;
};

// System.Net.WebRequest

// System.Net.WebResponse

// System.Net.WebResponse

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// System.Net.HttpWebRequest/AuthorizationState

// System.Net.HttpWebRequest/AuthorizationState

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5460B541814177F1FF16AF73E95193AB58326219_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::0B92E635AE849B517CA3A2F28C2502AF8675E5C6C01CD75EA9F53120E81DDAAA
	__StaticArrayInitTypeSizeU3D36_tA8091398783D6C28CB17462491E5278FCEA986FD ___0B92E635AE849B517CA3A2F28C2502AF8675E5C6C01CD75EA9F53120E81DDAAA_0;
};

// <PrivateImplementationDetails>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_StaticFields
{
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_55;
	// System.Int32 System.Net.HttpWebRequest::defaultMaximumErrorResponseLength
	int32_t ___defaultMaximumErrorResponseLength_56;
	// System.Net.Cache.RequestCachePolicy System.Net.HttpWebRequest::defaultCachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___defaultCachePolicy_57;
};

// System.Net.HttpWebRequest

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// SRDebugger.Services.Implementation.SRDebugService

// SRDebugger.Services.Implementation.SRDebugService

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Rendering.ScriptableRenderContext

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamReader

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// UnityEngine.TextAsset

// UnityEngine.TextAsset

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
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

// System.Type

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Networking.UploadHandlerRaw

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<UnityEngine.RectTransform>

// System.Action`1<UnityEngine.RectTransform>

// System.Action`2<SRDebugger.Services.IDebugPanelService,System.Boolean>

// System.Action`2<SRDebugger.Services.IDebugPanelService,System.Boolean>

// System.Action`2<System.Object,System.Double>

// System.Action`2<System.Object,System.Double>

// System.Action`2<SRDebugger.Profiler.ProfilerCameraListener,System.Double>

// System.Action`2<SRDebugger.Profiler.ProfilerCameraListener,System.Double>

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>

// System.Func`1<System.Object>

// System.Func`1<System.Object>

// System.Func`1<System.String>

// System.Func`1<System.String>

// System.Func`2<SRDebugger.UI.Controls.DataBoundControl,System.Boolean>

// System.Func`2<SRDebugger.UI.Controls.DataBoundControl,System.Boolean>

// System.Func`2<SRDebugger.InfoEntry,System.Boolean>

// System.Func`2<SRDebugger.InfoEntry,System.Boolean>

// System.Action

// System.Action

// SRDebugger.ActionCompleteCallback

// SRDebugger.ActionCompleteCallback

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// SRDebugger.Services.BugReportCompleteCallback

// SRDebugger.Services.BugReportCompleteCallback

// SRDebugger.Services.ConsoleUpdatedEventHandler

// SRDebugger.Services.ConsoleUpdatedEventHandler

// SRDebugger.Services.Implementation.DebugPanelServiceImpl

// SRDebugger.Services.Implementation.DebugPanelServiceImpl

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// SRDebugger.Services.PinEntryCompleteCallback

// SRDebugger.Services.PinEntryCompleteCallback

// SRDebugger.PinnedUiCanvasCreated

// SRDebugger.PinnedUiCanvasCreated

// SRDebugger.Settings
struct Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD_StaticFields
{
	// SRDebugger.Settings SRDebugger.Settings::_instance
	Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* ____instance_6;
};

// SRDebugger.Settings

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// SRDebugger.VisibilityChangedDelegate

// SRDebugger.VisibilityChangedDelegate

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// UnityEngine.Camera/CameraCallback

// UnityEngine.Camera/CameraCallback

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// System.Net.WebException

// System.Net.WebException

// SRDebugger.Profiler.ProfilerCameraListener

// SRDebugger.Profiler.ProfilerCameraListener

// SRDebugger.Profiler.ProfilerLateUpdateListener

// SRDebugger.Profiler.ProfilerLateUpdateListener

// SRF.SRMonoBehaviour

// SRF.SRMonoBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// SRF.Components.SRAutoSingleton`1<SRF.Service.SRServiceManager>
struct SRAutoSingleton_1_t19FB134FA3E229C21D7EC5A3A0F7E5B27E2B871B_StaticFields
{
	// T SRF.Components.SRAutoSingleton`1::_instance
	SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F* ____instance_10;
};

// SRF.Components.SRAutoSingleton`1<SRF.Service.SRServiceManager>

// UnityEngine.EventSystems.BaseInputModule

// UnityEngine.EventSystems.BaseInputModule

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// SRF.SRMonoBehaviourEx
struct SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<SRF.SRMonoBehaviourEx/FieldInfo>> SRF.SRMonoBehaviourEx::_checkedFields
	Dictionary_2_t97DF2C40713810247DAF867B5948BDDB6B61CC50* ____checkedFields_10;
};

// SRF.SRMonoBehaviourEx

// SRF.Service.SRServiceBase`1<SRDebugger.Services.Implementation.BugReportPopoverService>

// SRF.Service.SRServiceBase`1<SRDebugger.Services.Implementation.BugReportPopoverService>

// SRF.Service.SRServiceBase`1<SRDebugger.Services.IProfilerService>

// SRF.Service.SRServiceBase`1<SRDebugger.Services.IProfilerService>

// SRF.Service.SRServiceBase`1<SRDebugger.Services.Implementation.KeyboardShortcutListenerService>

// SRF.Service.SRServiceBase`1<SRDebugger.Services.Implementation.KeyboardShortcutListenerService>

// SRDebugger.UI.DebugPanelRoot

// SRDebugger.UI.DebugPanelRoot

// SRDebugger.UI.Controls.OptionsControlBase

// SRDebugger.UI.Controls.OptionsControlBase

// UnityEngine.EventSystems.PointerInputModule

// UnityEngine.EventSystems.PointerInputModule

// SRF.Service.SRServiceManager
struct SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_StaticFields
{
	// System.Func`1<System.String> SRF.Service.SRServiceManager::GetPlayerData
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___GetPlayerData_11;
	// System.Int32 SRF.Service.SRServiceManager::LoadingCount
	int32_t ___LoadingCount_13;
	// System.Collections.Generic.List`1<System.Reflection.Assembly> SRF.Service.SRServiceManager::_assemblies
	List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* ____assemblies_14;
	// System.Boolean SRF.Service.SRServiceManager::_hasQuit
	bool ____hasQuit_17;
};

// SRF.Service.SRServiceManager

// SRDebugger.UI.Controls.Data.ActionControl

// SRDebugger.UI.Controls.Data.ActionControl

// SRDebugger.Services.Implementation.BugReportPopoverService

// SRDebugger.Services.Implementation.BugReportPopoverService

// SRDebugger.UI.Controls.DataBoundControl

// SRDebugger.UI.Controls.DataBoundControl

// SRDebugger.Services.Implementation.KeyboardShortcutListenerService

// SRDebugger.Services.Implementation.KeyboardShortcutListenerService

// SRDebugger.Profiler.ProfilerServiceImpl

// SRDebugger.Profiler.ProfilerServiceImpl

// SRDebugger.Profiler.SRPProfilerService

// SRDebugger.Profiler.SRPProfilerService

// UnityEngine.EventSystems.StandaloneInputModule

// UnityEngine.EventSystems.StandaloneInputModule
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// SRDebugger.InfoEntry[]
struct InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B  : public RuntimeArray
{
	ALIGN_FIELD (8) InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* m_Items[1];

	inline InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// SRDebugger.UI.Controls.DataBoundControl[]
struct DataBoundControlU5BU5D_t4B2E2AA435C74EA0A3C4FADDB23F303E09C1FB4F  : public RuntimeArray
{
	ALIGN_FIELD (8) DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* m_Items[1];

	inline DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SRDebugger.UI.Controls.Data.ActionControl[]
struct ActionControlU5BU5D_t61A2FC0D511AE266CED70888DA92EF6F92EBFAE5  : public RuntimeArray
{
	ALIGN_FIELD (8) ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* m_Items[1];

	inline ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void SRF.Service.SRServiceManager::RegisterService<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRServiceManager_RegisterService_TisRuntimeObject_m84A5C52C5682558B4A1C1C3D843ED1ED1245260A_gshared (RuntimeObject* ___0_service, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SRF.SRFGameObjectExtensions::RemoveComponentIfExists<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRFGameObjectExtensions_RemoveComponentIfExists_TisRuntimeObject_m51E848BAC389DB4CCF6984E0242D2F0090E958EB_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1__ctor_m90266F1F9A5748A20EFBBF99301331A7FF3CA124_gshared (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1_Clear_m83231C618104D38633D27A97D5A4D355AAD578B3_gshared (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, const RuntimeMethod* method) ;
// System.Boolean SRDebugger.CircularBuffer`1<System.Object>::get_IsFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CircularBuffer_1_get_IsFull_mF8D1EA5C6B85A15A9FCD255DF4D573D11B025CA6_gshared (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, const RuntimeMethod* method) ;
// T SRDebugger.CircularBuffer`1<System.Object>::Front()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CircularBuffer_1_Front_m8E9EF74F0A71F09812069F23DBD07862A3BAD5CE_gshared (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<System.Object>::PopFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1_PopFront_mE244F61E9F08CADE08770B5605AAFB093A7473EB_gshared (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<System.Object>::PushBack(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1_PushBack_m7D5AFCE74DF074030EC0E9DC5CD989BF35A2EC46_gshared (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 SRDebugger.CircularBuffer`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_1_get_Count_mA93F3D9CEFD193D4670E54D42141E6C697F1D129_gshared_inline (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, const RuntimeMethod* method) ;
// T SRDebugger.CircularBuffer`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CircularBuffer_1_get_Item_m0FD1266AD783275A5A00067E58B6F0C77ADF3860_gshared (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Double>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7F2CC56FA8287124AA51B6C591AFFA31C0AEE65D_gshared_inline (Action_2_t20E1B0E5A61C42E2C74B90596ED942D921D42DE1* __this, RuntimeObject* ___0_arg1, double ___1_arg2, const RuntimeMethod* method) ;
// System.Void SRF.Service.SRServiceBase`1<System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRServiceBase_1_Awake_m8004E5E6C77840C75D8FA9AA9BF411B3DA06E174_gshared (SRServiceBase_1_tB2B1BC1D24274B5A1EB32E6B98DFC8EAD78C1418* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_gshared_inline (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, const RuntimeMethod* method) ;
// T SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6_gshared (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32_gshared (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, int32_t ___0_index, ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE ___1_value, const RuntimeMethod* method) ;
// T SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4_gshared (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::PushBack(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23_gshared (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE ___0_item, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39_gshared (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void SRF.Service.SRServiceBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRServiceBase_1__ctor_m8FE61234AC274586F7A2611F403921B950AA6D89_gshared (SRServiceBase_1_tB2B1BC1D24274B5A1EB32E6B98DFC8EAD78C1418* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared (Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T SRInstantiate::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRInstantiate_Instantiate_TisRuntimeObject_mAC9B3756D8F3A513E83E39BBBDC4C147A854ECCD_gshared (RuntimeObject* ___0_prefab, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T SRF.Helpers.SRReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRReflection_GetAttribute_TisRuntimeObject_m09197806987C00A84E3A1A45B420F4856C77C623_gshared (MemberInfo_t* ___0_t, const RuntimeMethod* method) ;

// SRDebugger.Services.IDockConsoleService SRDebugger.Internal.Service::get_DockConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_DockConsole_mBECAAE6E08AC7614F59F20CE04BE303B11B73FFE (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void SRF.Service.SRServiceManager::RegisterService<SRDebugger.Services.IDebugService>(System.Object)
inline void SRServiceManager_RegisterService_TisIDebugService_tCD191555D5201CA7C8017D05AFDDB2657C579CB0_m6A303BC42DF365205B42B10FE2E4942BF5441298 (RuntimeObject* ___0_service, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))SRServiceManager_RegisterService_TisRuntimeObject_m84A5C52C5682558B4A1C1C3D843ED1ED1245260A_gshared)(___0_service, method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IProfilerService>()
inline RuntimeObject* SRServiceManager_GetService_TisIProfilerService_t083F65D4ED0799FBAFFD3B9A94CFACF344315B60_mCCBEF0038BE7C4F48A723BDC58C0AFA002300D66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IDebugTriggerService>()
inline RuntimeObject* SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.ISystemInformationService>()
inline RuntimeObject* SRServiceManager_GetService_TisISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_m3BA0C18F7957036C76387AE5725AE6898708DFE3 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IPinnedUIService>()
inline RuntimeObject* SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// System.Void System.Action`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCEE85CBFCCB8AA905ECF96AFF5A489EEB2F7BCB4 (Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IOptionsService>()
inline RuntimeObject* SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IDebugPanelService>()
inline RuntimeObject* SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// System.Void System.Action`2<SRDebugger.Services.IDebugPanelService,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB8FC67FF893A041F6D51996E9E2BAC5EC243CA9C (Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared)(__this, ___0_object, ___1_method, method);
}
// SRDebugger.Settings SRDebugger.Services.Implementation.SRDebugService::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* SRDebugService_get_Settings_mC0D6BD34B84BBE28915CB78708BF00028D128910 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) ;
// SRDebugger.Settings/TriggerEnableModes SRDebugger.Settings::get_EnableTrigger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Settings_get_EnableTrigger_mA3693551519784E8A2D829E07F0EA4B30DBC995C_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// SRDebugger.PinAlignment SRDebugger.Settings::get_TriggerPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Settings_get_TriggerPosition_mA7186D7A0443BE6462A86FA857150F3D01DB3634_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Boolean SRDebugger.Settings::get_EnableKeyboardShortcuts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_EnableKeyboardShortcuts_m823AD3F9FB449196183963CE56C52977B5C59604_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.Implementation.KeyboardShortcutListenerService>()
inline KeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF* SRServiceManager_GetService_TisKeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF_m428C22E42058C81ECB9B65426A119D59553531EB (const RuntimeMethod* method)
{
	return ((  KeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// SRDebugger.Settings SRDebugger.Settings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927 (const RuntimeMethod* method) ;
// System.Boolean SRDebugger.Settings::get_RequireCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_RequireCode_m4F4B946BEDC3E1E9BB11CF424102507F11402DD0_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<System.Int32> SRDebugger.Settings::get_EntryCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Settings_get_EntryCode_m339ACCB27014286B061B309801703F5668EB7A26 (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Transform SRF.Hierarchy::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Hierarchy_Get_mC18843395021DCD1B48E06FCEF99F5AC07AEDA5D (String_t* ___0_key, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Internal.InternalOptionsRegistry>()
inline InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC (const RuntimeMethod* method)
{
	return ((  InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void SRDebugger.Internal.InternalOptionsRegistry::SetHandler(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOptionsRegistry_SetHandler_mB3164190B753BA472088FF3ABD14893656EA593F (InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, const RuntimeMethod* method) ;
// SRDebugger.Services.IPinnedUIService SRDebugger.Internal.Service::get_PinnedUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_PinnedUI_mB7CAD34F2F8653AC0690B5C5792E7B0FECCC0E7D (const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.SRDebugService::PromptEntryCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_PromptEntryCode_m7BD6799103459C3E890B72535F24E16AC64EF0BF (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<SRDebugger.DefaultTabs>::.ctor(T)
inline void Nullable_1__ctor_mADFA037625C83670824A036BC3FC4366091C44FC (Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___0_value, method);
}
// System.String SRDebugger.Internal.OptionDefinition::get_Category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionDefinition_get_Category_mBB68D6868EF7CBE16FC76AED27A8B28E6F71035C_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String SRDebugger.Internal.OptionDefinition::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mA4A106335C91826661104DB0935C2E50E2057143 (U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB* __this, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.Implementation.BugReportPopoverService>()
inline BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* SRServiceManager_GetService_TisBugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9_m5C6D3897B52BEEE1D12723DEC953001294018027 (const RuntimeMethod* method)
{
	return ((  BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// System.Boolean SRDebugger.Services.Implementation.BugReportPopoverService::get_IsShowingPopover()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BugReportPopoverService_get_IsShowingPopover_m97DA57E7A8168DE5E0DC88E393960A42417C6FBC_inline (BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.BugReportCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportCompleteCallback__ctor_mE5360CDAAAA29095305E67B43DA416EA32462326 (BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.BugReportPopoverService::ShowBugReporter(SRDebugger.Services.BugReportCompleteCallback,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportPopoverService_ShowBugReporter_mB1EB4893B7445B6AF4CE9FADDACC27AB9C0C50D8 (BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* __this, BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742* ___0_callback, bool ___1_takeScreenshotFirst, String_t* ___2_descriptionText, const RuntimeMethod* method) ;
// System.Void SRDebugger.VisibilityChangedDelegate::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisibilityChangedDelegate_Invoke_m1AD00544711BEBEB368C4C30373ED26DC293F336_inline (VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* __this, bool ___0_isVisible, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IPinEntryService>()
inline RuntimeObject* SRServiceManager_GetService_TisIPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_m70A40ED23F6930F18D9B6AE9CD4D6A42518E0D6C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// System.Void SRDebugger.Services.PinEntryCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinEntryCompleteCallback__ctor_m3ECF8ADA8DC0EF09135E206310F119F1995937F9 (PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean SRDebugger.Settings::get_UseDebugCamera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_UseDebugCamera_m9386EB935CDC7B54DFBC7E7ADBD4ACF86665B41B_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// SRDebugger.UI.DebugPanelRoot SRDebugger.Services.Implementation.DebugPanelServiceImpl::get_RootObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* DebugPanelServiceImpl_get_RootObject_mD47703381EBE44C2D11AFDB5CB06DCDBA86D744A_inline (DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF* __this, const RuntimeMethod* method) ;
// System.Void SRF.SRFGameObjectExtensions::RemoveComponentIfExists<SRF.UI.SRRetinaScaler>(UnityEngine.GameObject)
inline void SRFGameObjectExtensions_RemoveComponentIfExists_TisSRRetinaScaler_t8C03AD3B0C71602F5A2888E2C612B396FC908ED2_m58FF2BA4705B73EC9D92196B5DC30F6B724CCFE5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))SRFGameObjectExtensions_RemoveComponentIfExists_TisRuntimeObject_m51E848BAC389DB4CCF6984E0242D2F0090E958EB_gshared)(___0_obj, method);
}
// System.Void SRF.SRFGameObjectExtensions::RemoveComponentIfExists<UnityEngine.UI.CanvasScaler>(UnityEngine.GameObject)
inline void SRFGameObjectExtensions_RemoveComponentIfExists_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_mE1C1C11CFD9AA5A9A221FF3C76DB5FD97029CF22 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))SRFGameObjectExtensions_RemoveComponentIfExists_TisRuntimeObject_m51E848BAC389DB4CCF6984E0242D2F0090E958EB_gshared)(___0_obj, method);
}
// System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.PinnedUiCanvasCreated::Invoke(UnityEngine.RectTransform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PinnedUiCanvasCreated_Invoke_m7D1C7644D7A89208CD4CB2916C3EEDD9E25C2024_inline (PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_canvasTransform, const RuntimeMethod* method) ;
// System.Boolean SRDebugger.Settings::get_RequireEntryCodeEveryTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_RequireEntryCodeEveryTime_m0143EC0BF9C3518ADA94C4DA5BFDAC508970EA4B_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<SRDebugger.DefaultTabs>::get_HasValue()
inline bool Nullable_1_get_HasValue_m93980F9474961FBFF7E0C2C98171BF10CDCFE27C_inline (Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<SRDebugger.DefaultTabs>::get_Value()
inline int32_t Nullable_1_get_Value_mBD450EC11E782B553DAED1B5CA71393D54781845 (Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::ShowDebugPanel(SRDebugger.DefaultTabs,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_ShowDebugPanel_m6B81175C204B856A4DCEE879883B081C7DE59C65 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, int32_t ___0_tab, bool ___1_requireEntryCode, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.SRDebugService::ShowDebugPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_ShowDebugPanel_mCD3125F7927578BD4C7B0548F212B21807251E78 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, bool ___0_requireEntryCode, const RuntimeMethod* method) ;
// System.Void SRDebugger.ActionCompleteCallback::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActionCompleteCallback_Invoke_m887BF69B332AFEF2D0A9A685B6B1C191CCB7F2D4_inline (ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8* __this, bool ___0_success, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceivedThreaded_mDD8B873BF766306B205F549CF98249DD84FCA04C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Void SRF.Service.SRServiceManager::RegisterService<SRDebugger.Services.IConsoleService>(System.Object)
inline void SRServiceManager_RegisterService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m76DE4DEEC20C6765E2ABF69C9E75631951F05041 (RuntimeObject* ___0_service, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))SRServiceManager_RegisterService_TisRuntimeObject_m84A5C52C5682558B4A1C1C3D843ED1ED1245260A_gshared)(___0_service, method);
}
// System.Boolean SRDebugger.Settings::get_CollapseDuplicateLogEntries()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_CollapseDuplicateLogEntries_m7C55F799102AF04476F7C58FA92126C5E67B8B78_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Int32 SRDebugger.Settings::get_MaximumConsoleEntries()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Settings_get_MaximumConsoleEntries_m058C84626DE7941E8BE210250EC05E54D3889225_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::.ctor(System.Int32)
inline void CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17 (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, int32_t, const RuntimeMethod*))CircularBuffer_1__ctor_m90266F1F9A5748A20EFBBF99301331A7FF3CA124_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::Clear()
inline void CircularBuffer_1_Clear_mAC06BBE2B106B3566649CADD0F29E35E2D7F9E1E (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, const RuntimeMethod*))CircularBuffer_1_Clear_m83231C618104D38633D27A97D5A4D355AAD578B3_gshared)(__this, method);
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::set_InfoCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardConsoleService_set_InfoCount_m2668E0E54EDA47B896D4FE82FE3724515BA1C9A9_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::set_WarningCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardConsoleService_set_WarningCount_m3BCA884D256296A89AF1D89F0BE7546AC0984370_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::set_ErrorCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardConsoleService_set_ErrorCount_m13148DAEEB51CB249AB5BF26E91285411A2A2DD3_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::OnUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_OnUpdated_m31F134D081207E16EB1C6B4809F95305B041FC79 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) ;
// System.Boolean SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::get_IsFull()
inline bool CircularBuffer_1_get_IsFull_mD056EE761CFC320557BAFA6DF356DB1941A28DA9 (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, const RuntimeMethod*))CircularBuffer_1_get_IsFull_mF8D1EA5C6B85A15A9FCD255DF4D573D11B025CA6_gshared)(__this, method);
}
// T SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::Front()
inline ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* CircularBuffer_1_Front_m581236D6257EA7EA795A62CDC40310864520A7A0 (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, const RuntimeMethod* method)
{
	return ((  ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, const RuntimeMethod*))CircularBuffer_1_Front_m8E9EF74F0A71F09812069F23DBD07862A3BAD5CE_gshared)(__this, method);
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::AdjustCounter(UnityEngine.LogType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_AdjustCounter_m7A3DCE8F0D6FC8A2A480F63B3BC5D4D240BA4493 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_type, int32_t ___1_amount, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::PopFront()
inline void CircularBuffer_1_PopFront_m59F714C42681308F4C6110D937A678DE4BEAA42A (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, const RuntimeMethod*))CircularBuffer_1_PopFront_mE244F61E9F08CADE08770B5605AAFB093A7473EB_gshared)(__this, method);
}
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::PushBack(T)
inline void CircularBuffer_1_PushBack_m76E9F7FDBF8312C2BB54E0BD3D9969E265E190E2 (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E*, const RuntimeMethod*))CircularBuffer_1_PushBack_m7D5AFCE74DF074030EC0E9DC5CD989BF35A2EC46_gshared)(__this, ___0_item, method);
}
// System.Int32 SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::get_Count()
inline int32_t CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_inline (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, const RuntimeMethod*))CircularBuffer_1_get_Count_mA93F3D9CEFD193D4670E54D42141E6C697F1D129_gshared_inline)(__this, method);
}
// System.Void SRDebugger.Services.ConsoleEntry::.ctor(SRDebugger.Services.ConsoleEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleEntry__ctor_mA70A472490FC5E7CE27F8DDC43348E5332FBF838 (ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* __this, ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* ___0_other, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::OnEntryAdded(SRDebugger.Services.ConsoleEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_OnEntryAdded_mB3403B1F9AE59B62AB15B72EF7DA0DBCA35B4672 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* ___0_entry, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.ConsoleUpdatedEventHandler::Invoke(SRDebugger.Services.IConsoleService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleUpdatedEventHandler_Invoke_mD0820E51FAE657C384EBB18BF58631FC047DFEDC_inline (ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* __this, RuntimeObject* ___0_console, const RuntimeMethod* method) ;
// T SRDebugger.CircularBuffer`1<SRDebugger.Services.ConsoleEntry>::get_Item(System.Int32)
inline ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* CircularBuffer_1_get_Item_m7F828D8B35F413B19399197C984C0EDF2895DA50 (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* (*) (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*, int32_t, const RuntimeMethod*))CircularBuffer_1_get_Item_m0FD1266AD783275A5A00067E58B6F0C77ADF3860_gshared)(__this, ___0_index, method);
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::OnEntryDuplicated(SRDebugger.Services.ConsoleEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_OnEntryDuplicated_m34F4ED28263102CC5672DCB4533DDE224CE7B26D (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* ___0_entry, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.ConsoleEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleEntry__ctor_mDC3212E0FDA47F5BE768E0035A2F97BD7B30F83A (ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* __this, const RuntimeMethod* method) ;
// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::get_ErrorCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_ErrorCount_mEAC6AE8C3E7A00433240246E6675B9ED3985037F_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) ;
// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::get_WarningCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_WarningCount_m9031F40A6C0952E3B9FD2226F9668844EDF94F0D_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) ;
// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::get_InfoCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_InfoCount_m739F40962BB15A015C85317D867E6F1134B532B9_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::.ctor()
inline void Dictionary_2__ctor_m3D25D70BDA57A43C5931F8BC28D87F30698426FE (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService::CreateDefaultSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardSystemInformationService_CreateDefaultSet_mF23F83E05D918E7C7E212D24FEBDDDC92A76D267 (StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::get_Keys()
inline KeyCollection_tF0CF6DD8201C11E01157A0897C6A04F41CEFD372* Dictionary_2_get_Keys_m2BA2E5B78AA21FDFC5F7449F7060ED28829E4E15 (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tF0CF6DD8201C11E01157A0897C6A04F41CEFD372* (*) (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3 (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String SRF.SRFStringExtensions::Fmt(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRFStringExtensions_Fmt_mDC3A183764FA93B17B0461570F9431D8B60D7E8A (String_t* ___0_formatString, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2CEB66840A05BBAF2655F96E0AEA74253C793FC7 (U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SRDebugger.InfoEntry>::.ctor()
inline void List_1__ctor_m1C5ED5A73337618E268C2D415B290E561AC09A67 (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Func`2<SRDebugger.InfoEntry,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1F7B8D9170F19BE133C9F8B27119D89CE145CD3C (Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::Any<SRDebugger.InfoEntry>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisInfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50_m03FE185B282F3504C2228629F0ACD838F515E829 (RuntimeObject* ___0_source, Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___0_source, ___1_predicate, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::.ctor()
inline void Dictionary_2__ctor_m6B822B7BEB11BBAC17E6FAC337E3C9A937197F38 (Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::GetEnumerator()
inline Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132 Dictionary_2_GetEnumerator_mCE058E969DE6E87614D6A355DDC4A0BDCF4A8C2A (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132 (*) (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::Dispose()
inline void Enumerator_Dispose_mD50973638019052A0B0D6293E2ED746EFBCD7455 (Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::get_Current()
inline KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266 Enumerator_get_Current_mA59C2B99EFEE708D057D4CE1C0DA44719F07FB6D_inline (Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266 (*) (Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m1DDA54A45D6F4F197E21E24EAC89E9B47749FDB4_inline (KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean SRDebugger.InfoEntry::get_IsPrivate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InfoEntry_get_IsPrivate_m5A0C481C6A165325264A20F8DDB95611AA7DA034_inline (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* __this, const RuntimeMethod* method) ;
// System.String SRDebugger.InfoEntry::get_Title()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InfoEntry_get_Title_m36F77A5C657D73714A077817C673E934D19F2A3D_inline (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* __this, const RuntimeMethod* method) ;
// System.Object SRDebugger.InfoEntry::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InfoEntry_get_Value_m4C48E9333CE503CD5B2FD39DED7084729C1F98E4 (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mEC7AB3D0609F55A3F741B9E93C42D13B46ACECC3_inline (KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5 (Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* __this, String_t* ___0_key, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2*, String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IList`1<SRDebugger.InfoEntry>>::MoveNext()
inline bool Enumerator_MoveNext_m662CF19E2EDC059D7044CD6778DEC1945F97DA36 (Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D (const RuntimeMethod* method) ;
// SRDebugger.InfoEntry SRDebugger.InfoEntry::Create(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3 (String_t* ___0_name, RuntimeObject* ___1_value, bool ___2_isPrivate, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E (const RuntimeMethod* method) ;
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_processorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E (const RuntimeMethod* method) ;
// System.String SRFileUtil::GetBytesReadable(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRFileUtil_GetBytesReadable_m244882621735B2A7855151333B433E77F216CB52 (int64_t ___0_i, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::HasProLicense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_HasProLicense_mB70706D82DCE9E0E5FDA4BBA91DF3AD8F7241A92 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_genuine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_genuine_m809A0E5A68D890B8BED1FD2A5CF13637C773AEC6 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_genuineCheckAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_genuineCheckAvailable_m9E92ED00A38600259813F2CDF40841702336B331 (const RuntimeMethod* method) ;
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_systemLanguage_m4D8B6DC60ED7236DD233C8DCB9E13D287B4FCF65 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124 (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// SRDebugger.InfoEntry SRDebugger.InfoEntry::Create(System.String,System.Func`1<System.Object>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F (String_t* ___0_name, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___1_getter, bool ___2_isPrivate, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Object SRF.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m4159CC5A44F99F4E01D0549B7D711C2C4904B20B (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SRDebugger.InfoEntry>::.ctor(System.Int32)
inline void List_1__ctor_mFF6E748EB118D2AE7AF4670CED4DCDF127178406 (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String SRDebugger.Services.Implementation.StandardSystemInformationService::GetCloudManifestPrettyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandardSystemInformationService_GetCloudManifestPrettyName_mBF0C0497AC20B78E02BD1F174BEFC257AEF6E154 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SRDebugger.InfoEntry>::Add(T)
inline void List_1_Add_mDEC686466C2E704A3CCB79836ABE399654D2A7EE_inline (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* __this, InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9*, InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean UnityEngine.SystemInfo::get_supportsLocationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsLocationService_m7274D2AE36316B66F33043270B6CBCFBD1DAA54E (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsAccelerometer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsAccelerometer_mDD94E914406FBF282CCECEFF79F80A3E5ECC9559 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsGyroscope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsVibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsVibration_m04ED54B2651F6376E2B8E81DDEF8E514D074185F (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// UnityEngine.NPOTSupport UnityEngine.SystemInfo::get_npotSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_npotSupport_mFC585492C86980DFDF2DB779FC9059E752C0BEAE (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_supportedRenderTargetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_supportedRenderTargetCount_mA8696B2D9AB343F9D04B0F4F14A4A1F7098DBC34 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supports3DTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supports3DTextures_mA80B4F445CEEC84FFAA80B7F94C90EC270813CE3 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_m4A029D2F8FB9343E65E6F1C6F1C79DA41911F13A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderToCubemap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsRenderToCubemap_mA2B3335B7C248A1F117887E6ED24BDD6ACC8346F (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsShadows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsShadows_mC38F1230132BCB8059CD1C1E96D5106030166261 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_supportsStencil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_supportsStencil_m8012C26C42BCD3A3CB13B3668BE593B2BA92A789 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsSparseTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsSparseTextures_mF9AF91C4712213C4305C29BDCDAC4EABA30DD007 (const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1114F531DA5F12CC8A0147771555A65DF52CB44E (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_fullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_fullScreen_m9B3B4F9FB4B6FD6E1AEF626736C4462A2FD7407C (const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921 (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.String[] UnityEngine.QualitySettings::get_names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* QualitySettings_get_names_m61A6181CC5752EE5405DB3A22F676C9F6861B02D (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.QualitySettings::GetQualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_GetQualityLevel_m01019D879AF250BE95341490BF704E4A69B0497B (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Diagnostics.Stopwatch SRDebugger.Profiler.ProfilerCameraListener::get_Stopwatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ProfilerCameraListener_get_Stopwatch_m08E4C21BAFE6F9741150AB0ABACF0C231CE2419E (ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`2<SRDebugger.Profiler.ProfilerCameraListener,System.Double>::Invoke(T1,T2)
inline void Action_2_Invoke_m7F779A46066A7C7C83D4F1E8A3E22D0BBEEFA6D6_inline (Action_2_tA32F4EFC7166F2307471608913A5C43E19FB7710* __this, ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5* ___0_arg1, double ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA32F4EFC7166F2307471608913A5C43E19FB7710*, ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5*, double, const RuntimeMethod*))Action_2_Invoke_m7F2CC56FA8287124AA51B6C591AFFA31C0AEE65D_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void SRF.Service.SRServiceBase`1<SRDebugger.Services.IProfilerService>::Awake()
inline void SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC (SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F* __this, const RuntimeMethod* method)
{
	((  void (*) (SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F*, const RuntimeMethod*))SRServiceBase_1_Awake_m8004E5E6C77840C75D8FA9AA9BF411B3DA06E174_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<SRDebugger.Profiler.ProfilerLateUpdateListener>()
inline ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// UnityEngine.GameObject SRF.SRMonoBehaviour::get_CachedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SRMonoBehaviour_get_CachedGameObject_m9B4A6CC57D00238F28D6405C3FF3EE766EA2DC09 (SRMonoBehaviour_tEB92279D238CA6CFFD8EF186B5A92EB2F576BC1E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform SRF.SRMonoBehaviour::get_CachedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SRMonoBehaviour_get_CachedTransform_m94B58E6F71BCFC3EDD8750E0334F84584ABD48DC (SRMonoBehaviour_tEB92279D238CA6CFFD8EF186B5A92EB2F576BC1E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_mB48D13F30E749B551E4692E4F2D762C375F62B41 (CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void SRF.SRMonoBehaviourEx::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRMonoBehaviourEx_Update_m08103FA9B63AEBEDF53BFBDE2B38AF8B36D19A17 (SRMonoBehaviourEx_t8F7A68F533C322E97636B179AD7AE99F5900CC8F* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::EndFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_EndFrame_m49B5E1F5C1C366DE1D99491443DF5B8B30EC85CE (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) ;
// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame> SRDebugger.Profiler.ProfilerServiceImpl::get_FrameBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) ;
// System.Int32 SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::get_Count()
inline int32_t CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*, const RuntimeMethod*))CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_gshared_inline)(__this, method);
}
// T SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::Back()
inline ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6 (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, const RuntimeMethod* method)
{
	return ((  ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE (*) (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*, const RuntimeMethod*))CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::set_Item(System.Int32,T)
inline void CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32 (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, int32_t ___0_index, ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*, int32_t, ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE, const RuntimeMethod*))CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::set_LastFrameTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerServiceImpl_set_LastFrameTime_m54EB197F691ABAF479AC3D9AB5F8988491D9F714_inline (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// T SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::get_Item(System.Int32)
inline ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4 (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE (*) (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*, int32_t, const RuntimeMethod*))CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4_gshared)(__this, ___0_index, method);
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::set_AverageFrameTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerServiceImpl_set_AverageFrameTime_mCC7E3105235EFE04F75D07F700B9A3FDAF6290CC_inline (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::PushBack(T)
inline void CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23 (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE ___0_item, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*, ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE, const RuntimeMethod*))CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Diagnostics.Stopwatch::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::PushFrame(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_PushFrame_m4493EF2E10FB67FB2B94FFBD0A1CBC06497E44A0 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, double ___0_totalTime, double ___1_updateTime, double ___2_renderTime, const RuntimeMethod* method) ;
// System.Void SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame>::.ctor(System.Int32)
inline void CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39 (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*, int32_t, const RuntimeMethod*))CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39_gshared)(__this, ___0_capacity, method);
}
// System.Void SRF.Service.SRServiceBase`1<SRDebugger.Services.IProfilerService>::.ctor()
inline void SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC (SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F* __this, const RuntimeMethod* method)
{
	((  void (*) (SRServiceBase_1_t720482F6880A357945464D77E8594A40EC46800F*, const RuntimeMethod*))SRServiceBase_1__ctor_m8FE61234AC274586F7A2611F403921B950AA6D89_gshared)(__this, method);
}
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mDD0B44EA1C60ACB47ACDB66134FC9473D24E9FED (Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginFrameRendering_m4269C8B1B2B0AB5CA56D91D9C8F10DFD8AABFC92 (Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SRDebugger.Profiler.SRPProfilerService::EndOfFrameCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRPProfilerService_EndOfFrameCoroutine_mDD325702114C9BA40FFDC426EF86EB622D617E19 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void SRDebugger.Profiler.SRPProfilerService::EndFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_EndFrame_mC0F57C6756DD59BB8197879D4211C5F7C73B30FB (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) ;
// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame> SRDebugger.Profiler.SRPProfilerService::get_FrameBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Profiler.SRPProfilerService::set_LastFrameTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SRPProfilerService_set_LastFrameTime_m371B7F55EB6071C6BE1809F6FB4B66CCE95C1713_inline (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Profiler.SRPProfilerService::set_AverageFrameTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SRPProfilerService_set_AverageFrameTime_mA109C296FCB2F235B72B0D1689AE641E00ED9C79_inline (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameCoroutineU3Ed__19__ctor_m4F82DF2009D74E108E601C459F7C5161E57A9A6C (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SRDebugger.Profiler.SRPProfilerService::PushFrame(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_PushFrame_mAF209F601033633F84DBA354692AA9875958CAD2 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, double ___0_totalTime, double ___1_updateTime, double ___2_renderTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Net.WebResponse System.Net.WebException::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) ;
// System.String SRDebugger.Internal.SRDebugApiUtil::ReadResponseStream(System.Net.WebResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRDebugApiUtil_ReadResponseStream_mE9FC424F47B67FE0F4F1A3030A4B601F9CF3B0B9 (WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ___0_stream, const RuntimeMethod* method) ;
// System.String SRDebugger.Internal.SRDebugApiUtil::ParseErrorResponse(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRDebugApiUtil_ParseErrorResponse_mCDCB7A160D69CC4266803BBF149EAFBBDD990F75 (String_t* ___0_response, String_t* ___1_fallback, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String SRDebugger.Internal.SRDebugApiUtil::ParseErrorException(System.Net.WebException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRDebugApiUtil_ParseErrorException_mC6F36452D96A8216FD972D18BFA2A19FE94D23B5 (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* ___0_ex, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_uploadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.BugReportApi/<Submit>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubmitU3Ed__19__ctor_m4B202650863D606CE20DD0B2AE02DBA58407CFC5 (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.BugReportApi::set_WasSuccessful(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BugReportApi_set_WasSuccessful_mD27A79A4761D6B8D9DCB9E7E31A26A17E0BCED12_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.BugReportApi::set_IsComplete(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BugReportApi_set_IsComplete_mAC4E6F91C5E62038CCC04F2D0473415BBE207388_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String SRDebugger.Internal.BugReportApi::get_ErrorMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BugReportApi_get_ErrorMessage_m83ABFF3C3A41C9F30880E80918095E5AD2D874DB_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<System.String>> SRDebugger.Internal.BugReportApi::CreateConsoleDump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BugReportApi_CreateConsoleDump_mFE85CBB3FD594049F0654A1B9A64411C24C9BA2C (const RuntimeMethod* method) ;
// TResult System.Func`1<System.String>::Invoke()
inline String_t* Func_1_Invoke_m731CAFD8102845345E28040B091301A1B469C9DE_inline (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// System.String SRF.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m43B383C2B548590C4192298F031F09943C7C9C97 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.String>>::.ctor()
inline void List_1__ctor_mB1B1CE1C1AD9A2DB1E4AAA7CFCE06797D9D15336 (List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// SRDebugger.Services.IConsoleService SRDebugger.Internal.Service::get_Console()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_Console_m990F21C7FDAB261C7831A050505DE509BE2BD0C9 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IList`1<System.String>>::Add(T)
inline void List_1_Add_m2A824432281C9A9C273B4CF0A7DC4CA03C742E55_inline (List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void SRDebugger.Internal.BugReportApi::set_ErrorMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String SRDebugger.Internal.BugReportApi::BuildJsonRequest(SRDebugger.Services.BugReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugReportApi_BuildJsonRequest_m9758888595A6FBEF217AD657C1D7A4E55962F29F (BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* ___0_report, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.BugReportApi::SetCompletionState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_wasSuccessful, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, String_t* ___1_method, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___2_downloadHandler, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___3_uploadHandler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenshotCaptureCoU3Ed__1__ctor_m7D338844F4009EBC541C9B68823F8D2266C27EEB (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Resources::LoadAll<SRDebugger.UI.Controls.DataBoundControl>(System.String)
inline DataBoundControlU5BU5D_t4B2E2AA435C74EA0A3C4FADDB23F303E09C1FB4F* Resources_LoadAll_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_m3245729B8C12D3FCD75104ABC5C28974B9F20E0E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  DataBoundControlU5BU5D_t4B2E2AA435C74EA0A3C4FADDB23F303E09C1FB4F* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared)(___0_path, method);
}
// T[] UnityEngine.Resources::LoadAll<SRDebugger.UI.Controls.Data.ActionControl>(System.String)
inline ActionControlU5BU5D_t61A2FC0D511AE266CED70888DA92EF6F92EBFAE5* Resources_LoadAll_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m5958C571CCF5D97BBF0EBBA903F55E46B5A7AE97 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  ActionControlU5BU5D_t61A2FC0D511AE266CED70888DA92EF6F92EBFAE5* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared)(___0_path, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<SRDebugger.UI.Controls.Data.ActionControl>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* Enumerable_FirstOrDefault_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_mAD8DA63A82564A1F34A17D9D7BDD72D30FC763E6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___0_source, method);
}
// SRF.Helpers.PropertyReference SRDebugger.Internal.OptionDefinition::get_Property()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) ;
// SRDebugger.UI.Controls.DataBoundControl SRDebugger.Internal.OptionControlFactory::CreateDataControl(SRDebugger.Internal.OptionDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* OptionControlFactory_CreateDataControl_mD2B049093729C56262C504BF5272FE3D097331A2 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___0_from, String_t* ___1_categoryPrefix, const RuntimeMethod* method) ;
// SRF.Helpers.MethodReference SRDebugger.Internal.OptionDefinition::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* OptionDefinition_get_Method_mC4CC5B9EA1440C20A99029AC1F1BB884D589B136_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) ;
// SRDebugger.UI.Controls.Data.ActionControl SRDebugger.Internal.OptionControlFactory::CreateActionControl(SRDebugger.Internal.OptionDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* OptionControlFactory_CreateActionControl_m2EB388F8AAE5EAE5D860BE63917EDE8A5B8BA1D4 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___0_from, String_t* ___1_categoryPrefix, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T SRInstantiate::Instantiate<SRDebugger.UI.Controls.Data.ActionControl>(T)
inline ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* SRInstantiate_Instantiate_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m095E2C90396BA4782161FC139CB0520542E806A8 (ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* ___0_prefab, const RuntimeMethod* method)
{
	return ((  ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* (*) (ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A*, const RuntimeMethod*))SRInstantiate_Instantiate_TisRuntimeObject_mAC9B3756D8F3A513E83E39BBBDC4C147A854ECCD_gshared)(___0_prefab, method);
}
// System.Void SRDebugger.UI.Controls.Data.ActionControl::SetMethod(System.String,SRF.Helpers.MethodReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionControl_SetMethod_m78FB92F6EF80ED61FEFF6DE961F6830B9A624E11 (ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* __this, String_t* ___0_methodName, MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ___1_method, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m0445EE4B12DFDA43A8FEF36895360CA6D58A2B10 (U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<SRDebugger.UI.Controls.DataBoundControl,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF0B6493C29D9726DB80413866D1C7B8862783089 (Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<SRDebugger.UI.Controls.DataBoundControl>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* Enumerable_FirstOrDefault_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mED5599CA9BB23B9A04517D33F93B23D5B4A1CD70 (RuntimeObject* ___0_source, Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441* ___1_predicate, const RuntimeMethod* method)
{
	return ((  DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* (*) (RuntimeObject*, Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___0_source, ___1_predicate, method);
}
// System.Type SRF.Helpers.PropertyReference::get_PropertyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PropertyReference_get_PropertyType_m99831B5B59D6666307F41F176CA1FB331C1E55BA (PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* __this, const RuntimeMethod* method) ;
// T SRInstantiate::Instantiate<SRDebugger.UI.Controls.DataBoundControl>(T)
inline DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* SRInstantiate_Instantiate_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mF1BDEB1F76C3382B59BA71EEB799F01FDB8A3CCC (DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* ___0_prefab, const RuntimeMethod* method)
{
	return ((  DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* (*) (DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244*, const RuntimeMethod*))SRInstantiate_Instantiate_TisRuntimeObject_mAC9B3756D8F3A513E83E39BBBDC4C147A854ECCD_gshared)(___0_prefab, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.UI.Controls.DataBoundControl::Bind(System.String,SRF.Helpers.PropertyReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataBoundControl_Bind_m8A6BDB00567B46CDBEAF7561E6B203250CC680E7 (DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* __this, String_t* ___0_propertyName, PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ___1_prop, const RuntimeMethod* method) ;
// System.Boolean SRF.Helpers.PropertyReference::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyReference_get_CanWrite_m81739E775FBCB2FAC9097E612833F8C053283AB7 (PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Name_m93F41D436591B877B3974E777BF9D16667B67505_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::set_Category(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Category_mA72D8E6F221DFF67CB77C6503B889FA73004FA7E_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::set_SortPriority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_SortPriority_mE62064C924D671607C0FDE6BF7E9ECAFDF6A3B3A_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition__ctor_mDE3912D3EC8A281344D39CBE8531D3A88B2D0E71 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_name, String_t* ___1_category, int32_t ___2_sortPriority, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::set_Method(SRF.Helpers.MethodReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Method_mCF478C0F87EDE6355A9707F56C02E76F04BAE19B_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ___0_value, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::set_Property(SRF.Helpers.PropertyReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Property_m91B0838C33D9FA64A932CE23D387D4543BAE3F1F_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ___0_value, const RuntimeMethod* method) ;
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IConsoleService>()
inline RuntimeObject* SRServiceManager_GetService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m4CE807F684A49BEA600DEFFA9852257E3CE631B8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IDockConsoleService>()
inline RuntimeObject* SRServiceManager_GetService_TisIDockConsoleService_t93EDAA14AFD0DD9125973947F55322E972E09525_mF948428FAC682F018A51C3360FB0D35C1A332EEA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// T SRF.Service.SRServiceManager::GetService<SRDebugger.Services.IDebugCameraService>()
inline RuntimeObject* SRServiceManager_GetService_TisIDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_mA0155022E01E183A8AC24BBFC6FFE4D28BAC8951 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SRServiceManager_GetService_TisRuntimeObject_mCECA3E42BBB83185086FEC067BAE634309D9A6FD_gshared)(method);
}
// System.Void SRDebugger.Internal.SRDebugStrings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugStrings__ctor_m2F17ABDE3AA3C1D7102E69D9546CC15BEA42E9CF (SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87* __this, const RuntimeMethod* method) ;
// System.Boolean SRDebugger.Settings::get_EnableEventSystemGeneration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_EnableEventSystemGeneration_m2D5D310A2107EF11C253F4FF405D6A8837FFC18F_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4 (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.SRDebuggerUtil::CreateDefaultEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebuggerUtil_CreateDefaultEventSystem_mE773C6A9C74DEF5DAA2F815785D88021F2D5C980 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
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
// System.Void System.Collections.Generic.List`1<SRDebugger.Internal.OptionDefinition>::.ctor()
inline void List_1__ctor_mEAD86F7CE9CE4AA75531C36DE1BFA5259C19D15B (List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T SRF.Helpers.SRReflection::GetAttribute<System.ComponentModel.CategoryAttribute>(System.Reflection.MemberInfo)
inline CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* SRReflection_GetAttribute_TisCategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_m14082A6B1DB34ED14C36CB30AF342122ED5BA5AC (MemberInfo_t* ___0_t, const RuntimeMethod* method)
{
	return ((  CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* (*) (MemberInfo_t*, const RuntimeMethod*))SRReflection_GetAttribute_TisRuntimeObject_m09197806987C00A84E3A1A45B420F4856C77C623_gshared)(___0_t, method);
}
// System.String System.ComponentModel.CategoryAttribute::get_Category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CategoryAttribute_get_Category_m2CBF9A5E77191E414E879293395732962EC8A1BB (CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* __this, const RuntimeMethod* method) ;
// T SRF.Helpers.SRReflection::GetAttribute<SRDebugger.SortAttribute>(System.Reflection.MemberInfo)
inline SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA* SRReflection_GetAttribute_TisSortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA_m14A0BB78B77A7341110F6E0419161B5C5A3711AE (MemberInfo_t* ___0_t, const RuntimeMethod* method)
{
	return ((  SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA* (*) (MemberInfo_t*, const RuntimeMethod*))SRReflection_GetAttribute_TisRuntimeObject_m09197806987C00A84E3A1A45B420F4856C77C623_gshared)(___0_t, method);
}
// T SRF.Helpers.SRReflection::GetAttribute<System.ComponentModel.DisplayNameAttribute>(System.Reflection.MemberInfo)
inline DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* SRReflection_GetAttribute_TisDisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_m8BDAA1BFF6BBC266E2E072C3A5A61702CC54D8AE (MemberInfo_t* ___0_t, const RuntimeMethod* method)
{
	return ((  DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* (*) (MemberInfo_t*, const RuntimeMethod*))SRReflection_GetAttribute_TisRuntimeObject_m09197806987C00A84E3A1A45B420F4856C77C623_gshared)(___0_t, method);
}
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Void SRF.Helpers.PropertyReference::.ctor(System.Object,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyReference__ctor_m7772819A2F9E4FADB8099EC049AF67D7F1038618 (PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* __this, RuntimeObject* ___0_target, PropertyInfo_t* ___1_property, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::.ctor(System.String,System.String,System.Int32,SRF.Helpers.PropertyReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition__ctor_m49A3CEB51888AF65CD392E53AB31A390108063DC (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_name, String_t* ___1_category, int32_t ___2_sortPriority, PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ___3_property, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SRDebugger.Internal.OptionDefinition>::Add(T)
inline void List_1_Add_mE669B1265BB825E5D01FCB81EFF7286E0C93B5CB_inline (List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183* __this, OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183*, OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void SRF.Helpers.MethodReference::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodReference__ctor_m1E7D5D39A6BF8639F4ADBB5AC32285D9F84595DE (MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
// System.Void SRDebugger.Internal.OptionDefinition::.ctor(System.String,System.String,System.Int32,SRF.Helpers.MethodReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition__ctor_mF89CAAAC0B68A85C6715B154E10C73C6DE288853 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_name, String_t* ___1_category, int32_t ___2_sortPriority, MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ___3_method, const RuntimeMethod* method) ;
// SRDebugger.Services.IDebugCameraService SRDebugger.Internal.Service::get_DebugCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_DebugCamera_m61871B86CFC16C9215C0E2CE6E97EC0E97B8E411 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SRDebugger.Services.IDockConsoleService SRDebugger.Services.Implementation.SRDebugService::get_DockConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRDebugService_get_DockConsole_m01DE915B04D02AB2CCECE958D1F65F5F4EC8152B (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	{
		// get { return Service.DockConsole; }
		RuntimeObject* L_0;
		L_0 = Service_get_DockConsole_mBECAAE6E08AC7614F59F20CE04BE303B11B73FFE(NULL);
		return L_0;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::add_PanelVisibilityChanged(SRDebugger.VisibilityChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_add_PanelVisibilityChanged_m749785A4CB2B009E86DC59A248F1040F6F9F8006 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* V_0 = NULL;
	VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* V_1 = NULL;
	VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* V_2 = NULL;
	{
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_0 = __this->___PanelVisibilityChanged_0;
		V_0 = L_0;
	}

IL_0007:
	{
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_1 = V_0;
		V_1 = L_1;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_2 = V_1;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*)CastclassSealed((RuntimeObject*)L_4, VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367_il2cpp_TypeInfo_var));
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367** L_5 = (&__this->___PanelVisibilityChanged_0);
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_6 = V_2;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_7 = V_1;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_8;
		L_8 = InterlockedCompareExchangeImpl<VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*>(L_5, L_6, L_7);
		V_0 = L_8;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_9 = V_0;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_10 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*)L_9) == ((RuntimeObject*)(VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::remove_PanelVisibilityChanged(SRDebugger.VisibilityChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_remove_PanelVisibilityChanged_m419819AA710023979034495935444D304D3A14A0 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* V_0 = NULL;
	VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* V_1 = NULL;
	VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* V_2 = NULL;
	{
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_0 = __this->___PanelVisibilityChanged_0;
		V_0 = L_0;
	}

IL_0007:
	{
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_1 = V_0;
		V_1 = L_1;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_2 = V_1;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*)CastclassSealed((RuntimeObject*)L_4, VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367_il2cpp_TypeInfo_var));
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367** L_5 = (&__this->___PanelVisibilityChanged_0);
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_6 = V_2;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_7 = V_1;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_8;
		L_8 = InterlockedCompareExchangeImpl<VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*>(L_5, L_6, L_7);
		V_0 = L_8;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_9 = V_0;
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_10 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*)L_9) == ((RuntimeObject*)(VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::add_PinnedUiCanvasCreated(SRDebugger.PinnedUiCanvasCreated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_add_PinnedUiCanvasCreated_m8EB338E8EA51B7015DDC1A277D405B0932841701 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* V_0 = NULL;
	PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* V_1 = NULL;
	PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* V_2 = NULL;
	{
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_0 = __this->___PinnedUiCanvasCreated_1;
		V_0 = L_0;
	}

IL_0007:
	{
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_1 = V_0;
		V_1 = L_1;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_2 = V_1;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*)CastclassSealed((RuntimeObject*)L_4, PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C_il2cpp_TypeInfo_var));
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C** L_5 = (&__this->___PinnedUiCanvasCreated_1);
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_6 = V_2;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_7 = V_1;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_8;
		L_8 = InterlockedCompareExchangeImpl<PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*>(L_5, L_6, L_7);
		V_0 = L_8;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_9 = V_0;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_10 = V_1;
		if ((!(((RuntimeObject*)(PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*)L_9) == ((RuntimeObject*)(PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::remove_PinnedUiCanvasCreated(SRDebugger.PinnedUiCanvasCreated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_remove_PinnedUiCanvasCreated_m367E8F110B67843A7C811D5C16575D3421B1BD1A (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* V_0 = NULL;
	PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* V_1 = NULL;
	PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* V_2 = NULL;
	{
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_0 = __this->___PinnedUiCanvasCreated_1;
		V_0 = L_0;
	}

IL_0007:
	{
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_1 = V_0;
		V_1 = L_1;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_2 = V_1;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*)CastclassSealed((RuntimeObject*)L_4, PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C_il2cpp_TypeInfo_var));
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C** L_5 = (&__this->___PinnedUiCanvasCreated_1);
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_6 = V_2;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_7 = V_1;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_8;
		L_8 = InterlockedCompareExchangeImpl<PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*>(L_5, L_6, L_7);
		V_0 = L_8;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_9 = V_0;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_10 = V_1;
		if ((!(((RuntimeObject*)(PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*)L_9) == ((RuntimeObject*)(PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService__ctor_m3D7C5699384C2CF2DECC3AF2DFA41212CA7C4B6D (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t9BDC3294EE499A1B9E5B491D35FFF32DB3103234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRDebugService_DebugPanelServiceOnVisibilityChanged_mF9E5F1F083E3DD7567753824BCE6222D5124C81F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRDebugService_U3C_ctorU3Eb__17_0_mF1D1B1B74CE3B15D4F11E797A71AED1AD6D64A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIProfilerService_t083F65D4ED0799FBAFFD3B9A94CFACF344315B60_mCCBEF0038BE7C4F48A723BDC58C0AFA002300D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_m3BA0C18F7957036C76387AE5725AE6898708DFE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisKeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF_m428C22E42058C81ECB9B65426A119D59553531EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_RegisterService_TisIDebugService_tCD191555D5201CA7C8017D05AFDDB2657C579CB0_m6A303BC42DF365205B42B10FE2E4942BF5441298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EBBE1A854521723F24B805C00DFAEE4496C19B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D1FEEA7D88D4575BF106080D4295F1BC51F2F1);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B7_0 = 0;
	RuntimeObject* G_B7_1 = NULL;
	SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* G_B11_0 = NULL;
	SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* G_B12_1 = NULL;
	{
		// public SRDebugService()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SRServiceManager.RegisterService<IDebugService>(this);
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		SRServiceManager_RegisterService_TisIDebugService_tCD191555D5201CA7C8017D05AFDDB2657C579CB0_m6A303BC42DF365205B42B10FE2E4942BF5441298(__this, SRServiceManager_RegisterService_TisIDebugService_tCD191555D5201CA7C8017D05AFDDB2657C579CB0_m6A303BC42DF365205B42B10FE2E4942BF5441298_RuntimeMethod_var);
		// SRServiceManager.GetService<IProfilerService>();
		RuntimeObject* L_0;
		L_0 = SRServiceManager_GetService_TisIProfilerService_t083F65D4ED0799FBAFFD3B9A94CFACF344315B60_mCCBEF0038BE7C4F48A723BDC58C0AFA002300D66(SRServiceManager_GetService_TisIProfilerService_t083F65D4ED0799FBAFFD3B9A94CFACF344315B60_mCCBEF0038BE7C4F48A723BDC58C0AFA002300D66_RuntimeMethod_var);
		// _debugTrigger = SRServiceManager.GetService<IDebugTriggerService>();
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F(SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F_RuntimeMethod_var);
		__this->____debugTrigger_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debugTrigger_3), (void*)L_1);
		// _informationService = SRServiceManager.GetService<ISystemInformationService>();
		RuntimeObject* L_2;
		L_2 = SRServiceManager_GetService_TisISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_m3BA0C18F7957036C76387AE5725AE6898708DFE3(SRServiceManager_GetService_TisISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_m3BA0C18F7957036C76387AE5725AE6898708DFE3_RuntimeMethod_var);
		__this->____informationService_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____informationService_4), (void*)L_2);
		// _pinnedUiService = SRServiceManager.GetService<IPinnedUIService>();
		RuntimeObject* L_3;
		L_3 = SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14(SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14_RuntimeMethod_var);
		__this->____pinnedUiService_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnedUiService_6), (void*)L_3);
		// _pinnedUiService.OptionsCanvasCreated += transform =>
		// {
		//     if (PinnedUiCanvasCreated == null) return;
		//     try
		//     {
		//         PinnedUiCanvasCreated(transform);
		//     }
		//     catch(Exception e)
		//     {
		//         Debug.LogException(e);
		//     }
		// };
		RuntimeObject* L_4 = __this->____pinnedUiService_6;
		Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B* L_5 = (Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B*)il2cpp_codegen_object_new(Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mCEE85CBFCCB8AA905ECF96AFF5A489EEB2F7BCB4(L_5, __this, (intptr_t)((void*)SRDebugService_U3C_ctorU3Eb__17_0_mF1D1B1B74CE3B15D4F11E797A71AED1AD6D64A2B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t4D9EFDEA5EEEC3217A3F31A7BE2C759FD717200B* >::Invoke(2 /* System.Void SRDebugger.Services.IPinnedUIService::add_OptionsCanvasCreated(System.Action`1<UnityEngine.RectTransform>) */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_4, L_5);
		// _optionsService = SRServiceManager.GetService<IOptionsService>();
		RuntimeObject* L_6;
		L_6 = SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF(SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF_RuntimeMethod_var);
		__this->____optionsService_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____optionsService_5), (void*)L_6);
		// _debugPanelService = SRServiceManager.GetService<IDebugPanelService>();
		RuntimeObject* L_7;
		L_7 = SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2(SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2_RuntimeMethod_var);
		__this->____debugPanelService_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debugPanelService_2), (void*)L_7);
		// _debugPanelService.VisibilityChanged += DebugPanelServiceOnVisibilityChanged;
		RuntimeObject* L_8 = __this->____debugPanelService_2;
		Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6* L_9 = (Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6*)il2cpp_codegen_object_new(Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_2__ctor_mB8FC67FF893A041F6D51996E9E2BAC5EC243CA9C(L_9, __this, (intptr_t)((void*)SRDebugService_DebugPanelServiceOnVisibilityChanged_mF9E5F1F083E3DD7567753824BCE6222D5124C81F_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_2_tFCD5512AAB0F0AF48DF6C1226BBAA0A2B46017F6* >::Invoke(4 /* System.Void SRDebugger.Services.IDebugPanelService::add_VisibilityChanged(System.Action`2<SRDebugger.Services.IDebugPanelService,System.Boolean>) */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_8, L_9);
		// _debugTrigger.IsEnabled = Settings.EnableTrigger == Settings.TriggerEnableModes.Enabled ||
		//                           Settings.EnableTrigger == Settings.TriggerEnableModes.MobileOnly && Application.isMobilePlatform ||
		//                           Settings.EnableTrigger == Settings.TriggerEnableModes.DevelopmentBuildsOnly && Debug.isDebugBuild;
		RuntimeObject* L_10 = __this->____debugTrigger_3;
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_11;
		L_11 = SRDebugService_get_Settings_mC0D6BD34B84BBE28915CB78708BF00028D128910(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Settings_get_EnableTrigger_mA3693551519784E8A2D829E07F0EA4B30DBC995C_inline(L_11, NULL);
		G_B1_0 = L_10;
		if (!L_12)
		{
			G_B6_0 = L_10;
			goto IL_00b7;
		}
	}
	{
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_13;
		L_13 = SRDebugService_get_Settings_mC0D6BD34B84BBE28915CB78708BF00028D128910(__this, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Settings_get_EnableTrigger_mA3693551519784E8A2D829E07F0EA4B30DBC995C_inline(L_13, NULL);
		G_B2_0 = G_B1_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			G_B3_0 = G_B1_0;
			goto IL_009f;
		}
	}
	{
		bool L_15;
		L_15 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		G_B3_0 = G_B2_0;
		if (L_15)
		{
			G_B6_0 = G_B2_0;
			goto IL_00b7;
		}
	}

IL_009f:
	{
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_16;
		L_16 = SRDebugService_get_Settings_mC0D6BD34B84BBE28915CB78708BF00028D128910(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Settings_get_EnableTrigger_mA3693551519784E8A2D829E07F0EA4B30DBC995C_inline(L_16, NULL);
		G_B4_0 = G_B3_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			G_B5_0 = G_B3_0;
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		G_B7_0 = ((int32_t)(L_18));
		G_B7_1 = G_B4_0;
		goto IL_00b8;
	}

IL_00b4:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_00b8:
	{
		NullCheck(G_B7_1);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void SRDebugger.Services.IDebugTriggerService::set_IsEnabled(System.Boolean) */, IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var, G_B7_1, (bool)G_B7_0);
		// _debugTrigger.Position = Settings.TriggerPosition;
		RuntimeObject* L_19 = __this->____debugTrigger_3;
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_20;
		L_20 = SRDebugService_get_Settings_mC0D6BD34B84BBE28915CB78708BF00028D128910(__this, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Settings_get_TriggerPosition_mA7186D7A0443BE6462A86FA857150F3D01DB3634_inline(L_20, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void SRDebugger.Services.IDebugTriggerService::set_Position(SRDebugger.PinAlignment) */, IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var, L_19, L_21);
		// if (Settings.EnableKeyboardShortcuts)
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_22;
		L_22 = SRDebugService_get_Settings_mC0D6BD34B84BBE28915CB78708BF00028D128910(__this, NULL);
		NullCheck(L_22);
		bool L_23;
		L_23 = Settings_get_EnableKeyboardShortcuts_m823AD3F9FB449196183963CE56C52977B5C59604_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		// SRServiceManager.GetService<KeyboardShortcutListenerService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		KeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF* L_24;
		L_24 = SRServiceManager_GetService_TisKeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF_m428C22E42058C81ECB9B65426A119D59553531EB(SRServiceManager_GetService_TisKeyboardShortcutListenerService_t9BFAB8B885C864E58AA3C67AA3C6BC44864096FF_m428C22E42058C81ECB9B65426A119D59553531EB_RuntimeMethod_var);
	}

IL_00e6:
	{
		// _entryCodeEnabled = Settings.Instance.RequireCode && Settings.Instance.EntryCode.Count == 4;
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_25;
		L_25 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_25);
		bool L_26;
		L_26 = Settings_get_RequireCode_m4F4B946BEDC3E1E9BB11CF424102507F11402DD0_inline(L_25, NULL);
		G_B10_0 = __this;
		if (!L_26)
		{
			G_B11_0 = __this;
			goto IL_0107;
		}
	}
	{
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_27;
		L_27 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Settings_get_EntryCode_m339ACCB27014286B061B309801703F5668EB7A26(L_27, NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_28);
		G_B12_0 = ((((int32_t)L_29) == ((int32_t)4))? 1 : 0);
		G_B12_1 = G_B10_0;
		goto IL_0108;
	}

IL_0107:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_0108:
	{
		NullCheck(G_B12_1);
		G_B12_1->____entryCodeEnabled_7 = (bool)G_B12_0;
		// if (Settings.Instance.RequireCode && !_entryCodeEnabled)
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_30;
		L_30 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_30);
		bool L_31;
		L_31 = Settings_get_RequireCode_m4F4B946BEDC3E1E9BB11CF424102507F11402DD0_inline(L_30, NULL);
		if (!L_31)
		{
			goto IL_012b;
		}
	}
	{
		bool L_32 = __this->____entryCodeEnabled_7;
		if (L_32)
		{
			goto IL_012b;
		}
	}
	{
		// Debug.LogError("[SRDebugger] RequireCode is enabled, but pin is not 4 digits");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8EBBE1A854521723F24B805C00DFAEE4496C19B0, NULL);
	}

IL_012b:
	{
		// var srDebuggerParent = Hierarchy.Get("SRDebugger");
		il2cpp_codegen_runtime_class_init_inline(Hierarchy_t9BDC3294EE499A1B9E5B491D35FFF32DB3103234_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Hierarchy_Get_mC18843395021DCD1B48E06FCEF99F5AC07AEDA5D(_stringLiteralE8D1FEEA7D88D4575BF106080D4295F1BC51F2F1, NULL);
		// Object.DontDestroyOnLoad(srDebuggerParent.gameObject);
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_34, NULL);
		// var internalRegistry = SRServiceManager.GetService<InternalOptionsRegistry>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* L_35;
		L_35 = SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC(SRServiceManager_GetService_TisInternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96_m9C1B26F6376FD4144BC139300A02AC30A89EF6DC_RuntimeMethod_var);
		// internalRegistry.SetHandler(_optionsService.AddContainer);
		RuntimeObject* L_36 = __this->____optionsService_5;
		RuntimeObject* L_37 = L_36;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_38 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_38, L_37, (intptr_t)((void*)GetInterfaceMethodInfo(L_37, 6, IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_35);
		InternalOptionsRegistry_SetHandler_mB3164190B753BA472088FF3ABD14893656EA593F(L_35, L_38, NULL);
		// }
		return;
	}
}
// SRDebugger.Settings SRDebugger.Services.Implementation.SRDebugService::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* SRDebugService_get_Settings_mC0D6BD34B84BBE28915CB78708BF00028D128910 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	{
		// get { return Settings.Instance; }
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_0;
		L_0 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		return L_0;
	}
}
// System.Boolean SRDebugger.Services.Implementation.SRDebugService::get_IsDebugPanelVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SRDebugService_get_IsDebugPanelVisible_m3036C8935B31A20D604AABAF549AB48FC77F1E37 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _debugPanelService.IsVisible; }
		RuntimeObject* L_0 = __this->____debugPanelService_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean SRDebugger.Services.IDebugPanelService::get_IsVisible() */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean SRDebugger.Services.Implementation.SRDebugService::get_IsTriggerEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SRDebugService_get_IsTriggerEnabled_m9358907CFB6DC6395634F44542680564E3F42DB0 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _debugTrigger.IsEnabled; }
		RuntimeObject* L_0 = __this->____debugTrigger_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean SRDebugger.Services.IDebugTriggerService::get_IsEnabled() */, IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::set_IsTriggerEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_set_IsTriggerEnabled_mF38936C59F06D778698AED63688683D24421AE8D (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _debugTrigger.IsEnabled = value; }
		RuntimeObject* L_0 = __this->____debugTrigger_3;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void SRDebugger.Services.IDebugTriggerService::set_IsEnabled(System.Boolean) */, IDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_il2cpp_TypeInfo_var, L_0, L_1);
		// set { _debugTrigger.IsEnabled = value; }
		return;
	}
}
// System.Boolean SRDebugger.Services.Implementation.SRDebugService::get_IsProfilerDocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SRDebugService_get_IsProfilerDocked_m268E74BA8C7EE73BA7D4576F019A59659C2D866E (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Service.PinnedUI.IsProfilerPinned; }
		RuntimeObject* L_0;
		L_0 = Service_get_PinnedUI_mB7CAD34F2F8653AC0690B5C5792E7B0FECCC0E7D(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean SRDebugger.Services.IPinnedUIService::get_IsProfilerPinned() */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::set_IsProfilerDocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_set_IsProfilerDocked_mE05047F4E1F3E0824B2B2135D7B87723025E56F6 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Service.PinnedUI.IsProfilerPinned = value; }
		RuntimeObject* L_0;
		L_0 = Service_get_PinnedUI_mB7CAD34F2F8653AC0690B5C5792E7B0FECCC0E7D(NULL);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void SRDebugger.Services.IPinnedUIService::set_IsProfilerPinned(System.Boolean) */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_0, L_1);
		// set { Service.PinnedUI.IsProfilerPinned = value; }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::AddSystemInfo(SRDebugger.InfoEntry,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_AddSystemInfo_m1DF56F1BE224B3DD79BFF2DD7DBA43C575A77E56 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* ___0_entry, String_t* ___1_category, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _informationService.Add(entry, category);
		RuntimeObject* L_0 = __this->____informationService_4;
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_1 = ___0_entry;
		String_t* L_2 = ___1_category;
		NullCheck(L_0);
		InterfaceActionInvoker2< InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*, String_t* >::Invoke(2 /* System.Void SRDebugger.Services.ISystemInformationService::Add(SRDebugger.InfoEntry,System.String) */, ISystemInformationService_t17388CFCE25BE76977FA3F64B5D382C9E73CF4CF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::ShowDebugPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_ShowDebugPanel_mCD3125F7927578BD4C7B0548F212B21807251E78 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, bool ___0_requireEntryCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (requireEntryCode && _entryCodeEnabled && !_hasAuthorised)
		bool L_0 = ___0_requireEntryCode;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->____entryCodeEnabled_7;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = __this->____hasAuthorised_8;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// PromptEntryCode();
		SRDebugService_PromptEntryCode_m7BD6799103459C3E890B72535F24E16AC64EF0BF(__this, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// _debugPanelService.IsVisible = true;
		RuntimeObject* L_3 = __this->____debugPanelService_2;
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void SRDebugger.Services.IDebugPanelService::set_IsVisible(System.Boolean) */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_3, (bool)1);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::ShowDebugPanel(SRDebugger.DefaultTabs,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_ShowDebugPanel_m6B81175C204B856A4DCEE879883B081C7DE59C65 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, int32_t ___0_tab, bool ___1_requireEntryCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mADFA037625C83670824A036BC3FC4366091C44FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (requireEntryCode && _entryCodeEnabled && !_hasAuthorised)
		bool L_0 = ___1_requireEntryCode;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = __this->____entryCodeEnabled_7;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2 = __this->____hasAuthorised_8;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _queuedTab = tab;
		int32_t L_3 = ___0_tab;
		Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mADFA037625C83670824A036BC3FC4366091C44FC((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_mADFA037625C83670824A036BC3FC4366091C44FC_RuntimeMethod_var);
		__this->____queuedTab_9 = L_4;
		// PromptEntryCode();
		SRDebugService_PromptEntryCode_m7BD6799103459C3E890B72535F24E16AC64EF0BF(__this, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// _debugPanelService.IsVisible = true;
		RuntimeObject* L_5 = __this->____debugPanelService_2;
		NullCheck(L_5);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void SRDebugger.Services.IDebugPanelService::set_IsVisible(System.Boolean) */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_5, (bool)1);
		// _debugPanelService.OpenTab(tab);
		RuntimeObject* L_6 = __this->____debugPanelService_2;
		int32_t L_7 = ___0_tab;
		NullCheck(L_6);
		InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void SRDebugger.Services.IDebugPanelService::OpenTab(SRDebugger.DefaultTabs) */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_6, L_7);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::HideDebugPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_HideDebugPanel_m1148B27AEFDBA63E7EFE32F4C037ADA1B4090A47 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _debugPanelService.IsVisible = false;
		RuntimeObject* L_0 = __this->____debugPanelService_2;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void SRDebugger.Services.IDebugPanelService::set_IsVisible(System.Boolean) */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_0, (bool)0);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::DestroyDebugPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_DestroyDebugPanel_m6432D2D2116F8CC36D27211E320AC7D2496D2B58 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _debugPanelService.IsVisible = false;
		RuntimeObject* L_0 = __this->____debugPanelService_2;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void SRDebugger.Services.IDebugPanelService::set_IsVisible(System.Boolean) */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_0, (bool)0);
		// _debugPanelService.Unload();
		RuntimeObject* L_1 = __this->____debugPanelService_2;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(6 /* System.Void SRDebugger.Services.IDebugPanelService::Unload() */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::AddOptionContainer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_AddOptionContainer_m1AE9D06FFACDE1E6A0098787E1C355C9B3DD8868 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, RuntimeObject* ___0_container, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _optionsService.AddContainer(container);
		RuntimeObject* L_0 = __this->____optionsService_5;
		RuntimeObject* L_1 = ___0_container;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void SRDebugger.Services.IOptionsService::AddContainer(System.Object) */, IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::RemoveOptionContainer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_RemoveOptionContainer_m69CFC3201305E4AC6E367BD7CD6B52EA9B0647F3 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, RuntimeObject* ___0_container, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _optionsService.RemoveContainer(container);
		RuntimeObject* L_0 = __this->____optionsService_5;
		RuntimeObject* L_1 = ___0_container;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void SRDebugger.Services.IOptionsService::RemoveContainer(System.Object) */, IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::PinAllOptions(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_PinAllOptions_mD4B1D848D201FB2A9DFEFE62CF78508A2F4F3381 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, String_t* ___0_category, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* V_1 = NULL;
	{
		// foreach (var op in _optionsService.Options)
		RuntimeObject* L_0 = __this->____optionsService_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<SRDebugger.Internal.OptionDefinition> SRDebugger.Services.IOptionsService::get_Options() */, IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SRDebugger.Internal.OptionDefinition>::GetEnumerator() */, IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_0013_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_6;
				L_6 = InterfaceFuncInvoker0< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SRDebugger.Internal.OptionDefinition>::get_Current() */, IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// if (op.Category == category)
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = OptionDefinition_get_Category_mBB68D6868EF7CBE16FC76AED27A8B28E6F71035C_inline(L_7, NULL);
				String_t* L_9 = ___0_category;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
				if (!L_10)
				{
					goto IL_0035_1;
				}
			}
			{
				// _pinnedUiService.Pin(op);
				RuntimeObject* L_11 = __this->____pinnedUiService_6;
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_12 = V_1;
				NullCheck(L_11);
				InterfaceActionInvoker2< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E*, int32_t >::Invoke(6 /* System.Void SRDebugger.Services.IPinnedUIService::Pin(SRDebugger.Internal.OptionDefinition,System.Int32) */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_11, L_12, (-1));
			}

IL_0035_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::UnpinAllOptions(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_UnpinAllOptions_m73E5626411171FD0E0E85D33E6FAA6AEED1DA793 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, String_t* ___0_category, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* V_1 = NULL;
	{
		// foreach (var op in _optionsService.Options)
		RuntimeObject* L_0 = __this->____optionsService_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<SRDebugger.Internal.OptionDefinition> SRDebugger.Services.IOptionsService::get_Options() */, IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SRDebugger.Internal.OptionDefinition>::GetEnumerator() */, IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0047;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0013_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_6;
				L_6 = InterfaceFuncInvoker0< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SRDebugger.Internal.OptionDefinition>::get_Current() */, IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// if (op.Category == category)
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = OptionDefinition_get_Category_mBB68D6868EF7CBE16FC76AED27A8B28E6F71035C_inline(L_7, NULL);
				String_t* L_9 = ___0_category;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
				if (!L_10)
				{
					goto IL_0034_1;
				}
			}
			{
				// _pinnedUiService.Unpin(op);
				RuntimeObject* L_11 = __this->____pinnedUiService_6;
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_12 = V_1;
				NullCheck(L_11);
				InterfaceActionInvoker1< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* >::Invoke(7 /* System.Void SRDebugger.Services.IPinnedUIService::Unpin(SRDebugger.Internal.OptionDefinition) */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_11, L_12);
			}

IL_0034_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::PinOption(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_PinOption_m4C59F1D3FC19A879EC8488B326337A99203A7A97 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* V_1 = NULL;
	{
		// foreach (var op in _optionsService.Options)
		RuntimeObject* L_0 = __this->____optionsService_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<SRDebugger.Internal.OptionDefinition> SRDebugger.Services.IOptionsService::get_Options() */, IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SRDebugger.Internal.OptionDefinition>::GetEnumerator() */, IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_0013_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_6;
				L_6 = InterfaceFuncInvoker0< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SRDebugger.Internal.OptionDefinition>::get_Current() */, IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// if (op.Name == name)
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3_inline(L_7, NULL);
				String_t* L_9 = ___0_name;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
				if (!L_10)
				{
					goto IL_0035_1;
				}
			}
			{
				// _pinnedUiService.Pin(op);
				RuntimeObject* L_11 = __this->____pinnedUiService_6;
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_12 = V_1;
				NullCheck(L_11);
				InterfaceActionInvoker2< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E*, int32_t >::Invoke(6 /* System.Void SRDebugger.Services.IPinnedUIService::Pin(SRDebugger.Internal.OptionDefinition,System.Int32) */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_11, L_12, (-1));
			}

IL_0035_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::UnpinOption(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_UnpinOption_m2A7BAB4F56B10B2BDC6AD925C18A6B95F990E22E (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* V_1 = NULL;
	{
		// foreach (var op in _optionsService.Options)
		RuntimeObject* L_0 = __this->____optionsService_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<SRDebugger.Internal.OptionDefinition> SRDebugger.Services.IOptionsService::get_Options() */, IOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SRDebugger.Internal.OptionDefinition>::GetEnumerator() */, IEnumerable_1_tE7325D5A57068E09F8281DFFD3C22DF376F61453_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0047;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0013_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_6;
				L_6 = InterfaceFuncInvoker0< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SRDebugger.Internal.OptionDefinition>::get_Current() */, IEnumerator_1_t0010DD9C974E6D28C99A6A431FE52FC78E8C3CE1_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// if (op.Name == name)
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3_inline(L_7, NULL);
				String_t* L_9 = ___0_name;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
				if (!L_10)
				{
					goto IL_0034_1;
				}
			}
			{
				// _pinnedUiService.Unpin(op);
				RuntimeObject* L_11 = __this->____pinnedUiService_6;
				OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_12 = V_1;
				NullCheck(L_11);
				InterfaceActionInvoker1< OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* >::Invoke(7 /* System.Void SRDebugger.Services.IPinnedUIService::Unpin(SRDebugger.Internal.OptionDefinition) */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_11, L_12);
			}

IL_0034_1:
			{
				// foreach (var op in _optionsService.Options)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::ClearPinnedOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_ClearPinnedOptions_m147AB9B7E1A49E8AFFE7DCAA4628F57DB0A4CDF7 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pinnedUiService.UnpinAll();
		RuntimeObject* L_0 = __this->____pinnedUiService_6;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(8 /* System.Void SRDebugger.Services.IPinnedUIService::UnpinAll() */, IPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::ShowBugReportSheet(SRDebugger.ActionCompleteCallback,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_ShowBugReportSheet_m95CC7A5F5AFCDF9F9533D9F255029DAC91338F98 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8* ___0_onComplete, bool ___1_takeScreenshot, String_t* ___2_descriptionContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisBugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9_m5C6D3897B52BEEE1D12723DEC953001294018027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_U3CShowBugReportSheetU3Eb__0_m277AA3301E4203C4B9DDB59E8F05E80E01116196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB* V_0 = NULL;
	BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB* L_0 = (U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass40_0__ctor_mA4A106335C91826661104DB0935C2E50E2057143(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB* L_1 = V_0;
		ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8* L_2 = ___0_onComplete;
		NullCheck(L_1);
		L_1->___onComplete_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onComplete_0), (void*)L_2);
		// var popoverService = SRServiceManager.GetService<BugReportPopoverService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* L_3;
		L_3 = SRServiceManager_GetService_TisBugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9_m5C6D3897B52BEEE1D12723DEC953001294018027(SRServiceManager_GetService_TisBugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9_m5C6D3897B52BEEE1D12723DEC953001294018027_RuntimeMethod_var);
		V_1 = L_3;
		// if (popoverService.IsShowingPopover)
		BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = BugReportPopoverService_get_IsShowingPopover_m97DA57E7A8168DE5E0DC88E393960A42417C6FBC_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// popoverService.ShowBugReporter((succeed, message) =>
		// {
		//     if (onComplete != null)
		//     {
		//         onComplete(succeed);
		//     }
		// }, takeScreenshot, descriptionContent);
		BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* L_6 = V_1;
		U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB* L_7 = V_0;
		BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742* L_8 = (BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742*)il2cpp_codegen_object_new(BugReportCompleteCallback_t26A96A7C05C170C20AB3D1BC1273F0E0CEDA9742_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		BugReportCompleteCallback__ctor_mE5360CDAAAA29095305E67B43DA416EA32462326(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass40_0_U3CShowBugReportSheetU3Eb__0_m277AA3301E4203C4B9DDB59E8F05E80E01116196_RuntimeMethod_var), NULL);
		bool L_9 = ___1_takeScreenshot;
		String_t* L_10 = ___2_descriptionContent;
		NullCheck(L_6);
		BugReportPopoverService_ShowBugReporter_mB1EB4893B7445B6AF4CE9FADDACC27AB9C0C50D8(L_6, L_8, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::DebugPanelServiceOnVisibilityChanged(SRDebugger.Services.IDebugPanelService,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_DebugPanelServiceOnVisibilityChanged_mF9E5F1F083E3DD7567753824BCE6222D5124C81F (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, RuntimeObject* ___0_debugPanelService, bool ___1_b, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (PanelVisibilityChanged == null)
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_0 = __this->___PanelVisibilityChanged_0;
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
	}
	try
	{// begin try (depth: 1)
		// PanelVisibilityChanged(b);
		VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* L_1 = __this->___PanelVisibilityChanged_0;
		bool L_2 = ___1_b;
		NullCheck(L_1);
		VisibilityChangedDelegate_Invoke_m1AD00544711BEBEB368C4C30373ED26DC293F336_inline(L_1, L_2, NULL);
		// }
		goto IL_0029;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(System.Exception)
		// Debug.LogError("[SRDebugger] Event target threw exception (IDebugService.PanelVisiblityChanged)");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9EC6EAAAF2E2340311BE9DD42838AE398DDFB36)), NULL);
		// Debug.LogException(e);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::PromptEntryCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_PromptEntryCode_m7BD6799103459C3E890B72535F24E16AC64EF0BF (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRDebugService_U3CPromptEntryCodeU3Eb__42_0_m8E711B58E8E3B67370FA853A7EF840BAEEA28344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_m70A40ED23F6930F18D9B6AE9CD4D6A42518E0D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SRServiceManager.GetService<IPinEntryService>()
		//     .ShowPinEntry(Settings.Instance.EntryCode, SRDebugStrings.Current.PinEntryPrompt,
		//         entered =>
		//         {
		//             if (entered)
		//             {
		//                 if (!Settings.Instance.RequireEntryCodeEveryTime)
		//                 {
		//                     _hasAuthorised = true;
		//                 }
		// 
		//                 if (_queuedTab.HasValue)
		//                 {
		//                     var t = _queuedTab.Value;
		// 
		//                     _queuedTab = null;
		//                     ShowDebugPanel(t, false);
		//                 }
		//                 else
		//                 {
		//                     ShowDebugPanel(false);
		//                 }
		//             }
		// 
		//             _queuedTab = null;
		//         });
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = SRServiceManager_GetService_TisIPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_m70A40ED23F6930F18D9B6AE9CD4D6A42518E0D6C(SRServiceManager_GetService_TisIPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_m70A40ED23F6930F18D9B6AE9CD4D6A42518E0D6C_RuntimeMethod_var);
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_1;
		L_1 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Settings_get_EntryCode_m339ACCB27014286B061B309801703F5668EB7A26(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var);
		SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87* L_3 = ((SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_StaticFields*)il2cpp_codegen_static_fields_for(SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var))->___Current_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___PinEntryPrompt_3;
		PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9* L_5 = (PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9*)il2cpp_codegen_object_new(PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PinEntryCompleteCallback__ctor_m3ECF8ADA8DC0EF09135E206310F119F1995937F9(L_5, __this, (intptr_t)((void*)SRDebugService_U3CPromptEntryCodeU3Eb__42_0_m8E711B58E8E3B67370FA853A7EF840BAEEA28344_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker4< RuntimeObject*, String_t*, PinEntryCompleteCallback_t704AC86F950B51D8E16D0E87F07B854093AFA8F9*, bool >::Invoke(1 /* System.Void SRDebugger.Services.IPinEntryService::ShowPinEntry(System.Collections.Generic.IList`1<System.Int32>,System.String,SRDebugger.Services.PinEntryCompleteCallback,System.Boolean) */, IPinEntryService_tA653C11FA449ED9E904FF7E941234251A9CD2ECF_il2cpp_TypeInfo_var, L_0, L_2, L_4, L_5, (bool)1);
		// }
		return;
	}
}
// UnityEngine.RectTransform SRDebugger.Services.Implementation.SRDebugService::EnableWorldSpaceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* SRDebugService_EnableWorldSpaceMode_m6216B3C6CE3BD959161D011C462E67DCD2B412E9 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRFGameObjectExtensions_RemoveComponentIfExists_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_mE1C1C11CFD9AA5A9A221FF3C76DB5FD97029CF22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRFGameObjectExtensions_RemoveComponentIfExists_TisSRRetinaScaler_t8C03AD3B0C71602F5A2888E2C612B396FC908ED2_m58FF2BA4705B73EC9D92196B5DC30F6B724CCFE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	{
		// if (_worldSpaceTransform != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____worldSpaceTransform_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return _worldSpaceTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->____worldSpaceTransform_10;
		return L_2;
	}

IL_0015:
	{
		// if (Settings.Instance.UseDebugCamera)
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_3;
		L_3 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = Settings_get_UseDebugCamera_m9386EB935CDC7B54DFBC7E7ADBD4ACF86665B41B_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new InvalidOperationException("UseDebugCamera cannot be enabled at the same time as EnableWorldSpaceMode.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28F5C012678D748A0B5424CD0244C002C56C49BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SRDebugService_EnableWorldSpaceMode_m6216B3C6CE3BD959161D011C462E67DCD2B412E9_RuntimeMethod_var)));
	}

IL_002c:
	{
		// _debugPanelService.IsVisible = true;
		RuntimeObject* L_6 = __this->____debugPanelService_2;
		NullCheck(L_6);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void SRDebugger.Services.IDebugPanelService::set_IsVisible(System.Boolean) */, IDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_il2cpp_TypeInfo_var, L_6, (bool)1);
		// var root = ((DebugPanelServiceImpl) _debugPanelService).RootObject;
		RuntimeObject* L_7 = __this->____debugPanelService_2;
		NullCheck(((DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF*)CastclassClass((RuntimeObject*)L_7, DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF_il2cpp_TypeInfo_var)));
		DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* L_8;
		L_8 = DebugPanelServiceImpl_get_RootObject_mD47703381EBE44C2D11AFDB5CB06DCDBA86D744A_inline(((DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF*)CastclassClass((RuntimeObject*)L_7, DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF_il2cpp_TypeInfo_var)), NULL);
		// root.Canvas.gameObject.RemoveComponentIfExists<SRRetinaScaler>();
		DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* L_9 = L_8;
		NullCheck(L_9);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = L_9->___Canvas_11;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		SRFGameObjectExtensions_RemoveComponentIfExists_TisSRRetinaScaler_t8C03AD3B0C71602F5A2888E2C612B396FC908ED2_m58FF2BA4705B73EC9D92196B5DC30F6B724CCFE5(L_11, SRFGameObjectExtensions_RemoveComponentIfExists_TisSRRetinaScaler_t8C03AD3B0C71602F5A2888E2C612B396FC908ED2_m58FF2BA4705B73EC9D92196B5DC30F6B724CCFE5_RuntimeMethod_var);
		// root.Canvas.gameObject.RemoveComponentIfExists<CanvasScaler>();
		DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* L_12 = L_9;
		NullCheck(L_12);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13 = L_12->___Canvas_11;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		SRFGameObjectExtensions_RemoveComponentIfExists_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_mE1C1C11CFD9AA5A9A221FF3C76DB5FD97029CF22(L_14, SRFGameObjectExtensions_RemoveComponentIfExists_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_mE1C1C11CFD9AA5A9A221FF3C76DB5FD97029CF22_RuntimeMethod_var);
		// root.Canvas.renderMode = RenderMode.WorldSpace;
		DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* L_15 = L_12;
		NullCheck(L_15);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = L_15->___Canvas_11;
		NullCheck(L_16);
		Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47(L_16, 2, NULL);
		// var rectTransform = root.Canvas.GetComponent<RectTransform>();
		NullCheck(L_15);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = L_15->___Canvas_11;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_17, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_0 = L_18;
		// rectTransform.sizeDelta = new Vector2(1024, 768);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (1024.0f), (768.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_19, L_20, NULL);
		// rectTransform.position = Vector3.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_21);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_22, NULL);
		// return _worldSpaceTransform = rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = L_23;
		V_1 = L_24;
		__this->____worldSpaceTransform_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldSpaceTransform_10), (void*)L_24);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = V_1;
		return L_25;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::<.ctor>b__17_0(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_U3C_ctorU3Eb__17_0_mF1D1B1B74CE3B15D4F11E797A71AED1AD6D64A2B (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_transform, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (PinnedUiCanvasCreated == null) return;
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_0 = __this->___PinnedUiCanvasCreated_1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (PinnedUiCanvasCreated == null) return;
		return;
	}

IL_0009:
	{
	}
	try
	{// begin try (depth: 1)
		// PinnedUiCanvasCreated(transform);
		PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* L_1 = __this->___PinnedUiCanvasCreated_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___0_transform;
		NullCheck(L_1);
		PinnedUiCanvasCreated_Invoke_m7D1C7644D7A89208CD4CB2916C3EEDD9E25C2024_inline(L_1, L_2, NULL);
		// }
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(System.Exception)
		// Debug.LogException(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		// };
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService::<PromptEntryCode>b__42_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugService_U3CPromptEntryCodeU3Eb__42_0_m8E711B58E8E3B67370FA853A7EF840BAEEA28344 (SRDebugService_tAFBB99785297F8B1056ECC268D22BECF357A675C* __this, bool ___0_entered, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m93980F9474961FBFF7E0C2C98171BF10CDCFE27C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mBD450EC11E782B553DAED1B5CA71393D54781845_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (entered)
		bool L_0 = ___0_entered;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if (!Settings.Instance.RequireEntryCodeEveryTime)
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_1;
		L_1 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Settings_get_RequireEntryCodeEveryTime_m0143EC0BF9C3518ADA94C4DA5BFDAC508970EA4B_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// _hasAuthorised = true;
		__this->____hasAuthorised_8 = (bool)1;
	}

IL_0016:
	{
		// if (_queuedTab.HasValue)
		Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F* L_3 = (&__this->____queuedTab_9);
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m93980F9474961FBFF7E0C2C98171BF10CDCFE27C_inline(L_3, Nullable_1_get_HasValue_m93980F9474961FBFF7E0C2C98171BF10CDCFE27C_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// var t = _queuedTab.Value;
		Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F* L_5 = (&__this->____queuedTab_9);
		int32_t L_6;
		L_6 = Nullable_1_get_Value_mBD450EC11E782B553DAED1B5CA71393D54781845(L_5, Nullable_1_get_Value_mBD450EC11E782B553DAED1B5CA71393D54781845_RuntimeMethod_var);
		V_0 = L_6;
		// _queuedTab = null;
		Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F* L_7 = (&__this->____queuedTab_9);
		il2cpp_codegen_initobj(L_7, sizeof(Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F));
		// ShowDebugPanel(t, false);
		int32_t L_8 = V_0;
		SRDebugService_ShowDebugPanel_m6B81175C204B856A4DCEE879883B081C7DE59C65(__this, L_8, (bool)0, NULL);
		goto IL_004c;
	}

IL_0045:
	{
		// ShowDebugPanel(false);
		SRDebugService_ShowDebugPanel_mCD3125F7927578BD4C7B0548F212B21807251E78(__this, (bool)0, NULL);
	}

IL_004c:
	{
		// _queuedTab = null;
		Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F* L_9 = (&__this->____queuedTab_9);
		il2cpp_codegen_initobj(L_9, sizeof(Nullable_1_t731268F8BA026730B92CE3F4D1AD1429A7999B5F));
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
// System.Void SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mA4A106335C91826661104DB0935C2E50E2057143 (U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.SRDebugService/<>c__DisplayClass40_0::<ShowBugReportSheet>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CShowBugReportSheetU3Eb__0_m277AA3301E4203C4B9DDB59E8F05E80E01116196 (U3CU3Ec__DisplayClass40_0_t5FCBDB332C7BF6CF1C95004AA447FCF0C32A93DB* __this, bool ___0_succeed, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// if (onComplete != null)
		ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8* L_0 = __this->___onComplete_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onComplete(succeed);
		ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8* L_1 = __this->___onComplete_0;
		bool L_2 = ___0_succeed;
		NullCheck(L_1);
		ActionCompleteCallback_Invoke_m887BF69B332AFEF2D0A9A685B6B1C191CCB7F2D4_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }, takeScreenshot, descriptionContent);
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
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService__ctor_m8CE94FEB8383B354EAB6104BB7FC2DFD4F2756D6 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_RegisterService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m76DE4DEEC20C6765E2ABF69C9E75631951F05041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardConsoleService_UnityLogCallback_m2D5DCE7195D45EF94D5F2BE66D5F3688C43BB543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly object _threadLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____threadLock_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____threadLock_4), (void*)L_0);
		// public StandardConsoleService()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Application.logMessageReceivedThreaded += UnityLogCallback;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_1 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_1, __this, (intptr_t)((void*)StandardConsoleService_UnityLogCallback_m2D5DCE7195D45EF94D5F2BE66D5F3688C43BB543_RuntimeMethod_var), NULL);
		Application_add_logMessageReceivedThreaded_mDD8B873BF766306B205F549CF98249DD84FCA04C(L_1, NULL);
		// SRServiceManager.RegisterService<IConsoleService>(this);
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		SRServiceManager_RegisterService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m76DE4DEEC20C6765E2ABF69C9E75631951F05041(__this, SRServiceManager_RegisterService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m76DE4DEEC20C6765E2ABF69C9E75631951F05041_RuntimeMethod_var);
		// _collapseEnabled = Settings.Instance.CollapseDuplicateLogEntries;
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_2;
		L_2 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Settings_get_CollapseDuplicateLogEntries_m7C55F799102AF04476F7C58FA92126C5E67B8B78_inline(L_2, NULL);
		__this->____collapseEnabled_0 = L_3;
		// _allConsoleEntries = new CircularBuffer<ConsoleEntry>(Settings.Instance.MaximumConsoleEntries);
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_4;
		L_4 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Settings_get_MaximumConsoleEntries_m058C84626DE7941E8BE210250EC05E54D3889225_inline(L_4, NULL);
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_6 = (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*)il2cpp_codegen_object_new(CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17(L_6, L_5, CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17_RuntimeMethod_var);
		__this->____allConsoleEntries_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allConsoleEntries_2), (void*)L_6);
		// }
		return;
	}
}
// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::get_ErrorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_ErrorCount_mEAC6AE8C3E7A00433240246E6675B9ED3985037F (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// public int ErrorCount { get; private set; }
		int32_t L_0 = __this->___U3CErrorCountU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::set_ErrorCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_set_ErrorCount_m13148DAEEB51CB249AB5BF26E91285411A2A2DD3 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int ErrorCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::get_WarningCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_WarningCount_m9031F40A6C0952E3B9FD2226F9668844EDF94F0D (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// public int WarningCount { get; private set; }
		int32_t L_0 = __this->___U3CWarningCountU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::set_WarningCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_set_WarningCount_m3BCA884D256296A89AF1D89F0BE7546AC0984370 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int WarningCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CWarningCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 SRDebugger.Services.Implementation.StandardConsoleService::get_InfoCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_InfoCount_m739F40962BB15A015C85317D867E6F1134B532B9 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// public int InfoCount { get; private set; }
		int32_t L_0 = __this->___U3CInfoCountU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::set_InfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_set_InfoCount_m2668E0E54EDA47B896D4FE82FE3724515BA1C9A9 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int InfoCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CInfoCountU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::add_Updated(SRDebugger.Services.ConsoleUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_add_Updated_mAEAE81B2963D479C0DD888BC9C2EC78BA60152EC (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_0 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_1 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_2 = NULL;
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_0 = __this->___Updated_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_1 = V_0;
		V_1 = L_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_2 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)CastclassSealed((RuntimeObject*)L_4, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var));
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E** L_5 = (&__this->___Updated_8);
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_6 = V_2;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_7 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_8;
		L_8 = InterlockedCompareExchangeImpl<ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*>(L_5, L_6, L_7);
		V_0 = L_8;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_9 = V_0;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_10 = V_1;
		if ((!(((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_9) == ((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::remove_Updated(SRDebugger.Services.ConsoleUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_remove_Updated_m6500B1F264E9F114EE4FDEBD87CFD6A2AD645C49 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_0 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_1 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_2 = NULL;
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_0 = __this->___Updated_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_1 = V_0;
		V_1 = L_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_2 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)CastclassSealed((RuntimeObject*)L_4, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var));
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E** L_5 = (&__this->___Updated_8);
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_6 = V_2;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_7 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_8;
		L_8 = InterlockedCompareExchangeImpl<ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*>(L_5, L_6, L_7);
		V_0 = L_8;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_9 = V_0;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_10 = V_1;
		if ((!(((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_9) == ((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::add_Error(SRDebugger.Services.ConsoleUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_add_Error_m7564C4C3BFDA23850EF1CFA2AC2BD589B88C3D97 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_0 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_1 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_2 = NULL;
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_0 = __this->___Error_9;
		V_0 = L_0;
	}

IL_0007:
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_1 = V_0;
		V_1 = L_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_2 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)CastclassSealed((RuntimeObject*)L_4, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var));
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E** L_5 = (&__this->___Error_9);
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_6 = V_2;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_7 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_8;
		L_8 = InterlockedCompareExchangeImpl<ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*>(L_5, L_6, L_7);
		V_0 = L_8;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_9 = V_0;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_10 = V_1;
		if ((!(((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_9) == ((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::remove_Error(SRDebugger.Services.ConsoleUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_remove_Error_m2C4231FE6E1F2CC693569977C9051612F401D28F (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_0 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_1 = NULL;
	ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* V_2 = NULL;
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_0 = __this->___Error_9;
		V_0 = L_0;
	}

IL_0007:
	{
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_1 = V_0;
		V_1 = L_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_2 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)CastclassSealed((RuntimeObject*)L_4, ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E_il2cpp_TypeInfo_var));
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E** L_5 = (&__this->___Error_9);
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_6 = V_2;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_7 = V_1;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_8;
		L_8 = InterlockedCompareExchangeImpl<ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*>(L_5, L_6, L_7);
		V_0 = L_8;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_9 = V_0;
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_10 = V_1;
		if ((!(((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_9) == ((RuntimeObject*)(ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// SRDebugger.IReadOnlyList`1<SRDebugger.Services.ConsoleEntry> SRDebugger.Services.Implementation.StandardConsoleService::get_Entries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StandardConsoleService_get_Entries_m968B21595FE470C7FA5650314662731FBBCB9A84 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// if (!_hasCleared)
		bool L_0 = __this->____hasCleared_1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return _allConsoleEntries;
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_1 = __this->____allConsoleEntries_2;
		return L_1;
	}

IL_000f:
	{
		// return _consoleEntries;
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_2 = __this->____consoleEntries_3;
		return L_2;
	}
}
// SRDebugger.IReadOnlyList`1<SRDebugger.Services.ConsoleEntry> SRDebugger.Services.Implementation.StandardConsoleService::get_AllEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StandardConsoleService_get_AllEntries_m2ADE359B114C8968AF865CEB875C7B9E2B1DC2DE (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// get { return _allConsoleEntries; }
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_0 = __this->____allConsoleEntries_2;
		return L_0;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_Clear_m7E53CDB1AAAC3C66EB634825681E9C4BB64CF2F6 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_Clear_mAC06BBE2B106B3566649CADD0F29E35E2D7F9E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// lock (_threadLock)
		RuntimeObject* L_0 = __this->____threadLock_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// _hasCleared = true;
				__this->____hasCleared_1 = (bool)1;
				// if (_consoleEntries == null)
				CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_4 = __this->____consoleEntries_3;
				if (L_4)
				{
					goto IL_0037_1;
				}
			}
			{
				// _consoleEntries = new CircularBuffer<ConsoleEntry>(Settings.Instance.MaximumConsoleEntries);
				Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_5;
				L_5 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
				NullCheck(L_5);
				int32_t L_6;
				L_6 = Settings_get_MaximumConsoleEntries_m058C84626DE7941E8BE210250EC05E54D3889225_inline(L_5, NULL);
				CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_7 = (CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86*)il2cpp_codegen_object_new(CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17(L_7, L_6, CircularBuffer_1__ctor_mBCD3D89329085F634D698F09021A0C990210CC17_RuntimeMethod_var);
				__this->____consoleEntries_3 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____consoleEntries_3), (void*)L_7);
				goto IL_0042_1;
			}

IL_0037_1:
			{
				// _consoleEntries.Clear();
				CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_8 = __this->____consoleEntries_3;
				NullCheck(L_8);
				CircularBuffer_1_Clear_mAC06BBE2B106B3566649CADD0F29E35E2D7F9E1E(L_8, CircularBuffer_1_Clear_mAC06BBE2B106B3566649CADD0F29E35E2D7F9E1E_RuntimeMethod_var);
			}

IL_0042_1:
			{
				// ErrorCount = WarningCount = InfoCount = 0;
				int32_t L_9 = 0;
				V_3 = L_9;
				StandardConsoleService_set_InfoCount_m2668E0E54EDA47B896D4FE82FE3724515BA1C9A9_inline(__this, L_9, NULL);
				int32_t L_10 = V_3;
				int32_t L_11 = L_10;
				V_2 = L_11;
				StandardConsoleService_set_WarningCount_m3BCA884D256296A89AF1D89F0BE7546AC0984370_inline(__this, L_11, NULL);
				int32_t L_12 = V_2;
				StandardConsoleService_set_ErrorCount_m13148DAEEB51CB249AB5BF26E91285411A2A2DD3_inline(__this, L_12, NULL);
				// }
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// OnUpdated();
		StandardConsoleService_OnUpdated_m31F134D081207E16EB1C6B4809F95305B041FC79(__this, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::OnEntryAdded(SRDebugger.Services.ConsoleEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_OnEntryAdded_mB3403B1F9AE59B62AB15B72EF7DA0DBCA35B4672 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* ___0_entry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_Front_m581236D6257EA7EA795A62CDC40310864520A7A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_PopFront_m59F714C42681308F4C6110D937A678DE4BEAA42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_PushBack_m76E9F7FDBF8312C2BB54E0BD3D9969E265E190E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_IsFull_mD056EE761CFC320557BAFA6DF356DB1941A28DA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hasCleared)
		bool L_0 = __this->____hasCleared_1;
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		// if (_consoleEntries.IsFull)
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_1 = __this->____consoleEntries_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = CircularBuffer_1_get_IsFull_mD056EE761CFC320557BAFA6DF356DB1941A28DA9(L_1, CircularBuffer_1_get_IsFull_mD056EE761CFC320557BAFA6DF356DB1941A28DA9_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// AdjustCounter(_consoleEntries.Front().LogType, -1);
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_3 = __this->____consoleEntries_3;
		NullCheck(L_3);
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_4;
		L_4 = CircularBuffer_1_Front_m581236D6257EA7EA795A62CDC40310864520A7A0(L_3, CircularBuffer_1_Front_m581236D6257EA7EA795A62CDC40310864520A7A0_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->___LogType_5;
		StandardConsoleService_AdjustCounter_m7A3DCE8F0D6FC8A2A480F63B3BC5D4D240BA4493(__this, L_5, (-1), NULL);
		// _consoleEntries.PopFront();
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_6 = __this->____consoleEntries_3;
		NullCheck(L_6);
		CircularBuffer_1_PopFront_m59F714C42681308F4C6110D937A678DE4BEAA42A(L_6, CircularBuffer_1_PopFront_m59F714C42681308F4C6110D937A678DE4BEAA42A_RuntimeMethod_var);
	}

IL_0037:
	{
		// _consoleEntries.PushBack(entry);
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_7 = __this->____consoleEntries_3;
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_8 = ___0_entry;
		NullCheck(L_7);
		CircularBuffer_1_PushBack_m76E9F7FDBF8312C2BB54E0BD3D9969E265E190E2(L_7, L_8, CircularBuffer_1_PushBack_m76E9F7FDBF8312C2BB54E0BD3D9969E265E190E2_RuntimeMethod_var);
		goto IL_0074;
	}

IL_0045:
	{
		// if (_allConsoleEntries.IsFull)
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_9 = __this->____allConsoleEntries_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = CircularBuffer_1_get_IsFull_mD056EE761CFC320557BAFA6DF356DB1941A28DA9(L_9, CircularBuffer_1_get_IsFull_mD056EE761CFC320557BAFA6DF356DB1941A28DA9_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// AdjustCounter(_allConsoleEntries.Front().LogType, -1);
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_11 = __this->____allConsoleEntries_2;
		NullCheck(L_11);
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_12;
		L_12 = CircularBuffer_1_Front_m581236D6257EA7EA795A62CDC40310864520A7A0(L_11, CircularBuffer_1_Front_m581236D6257EA7EA795A62CDC40310864520A7A0_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13 = L_12->___LogType_5;
		StandardConsoleService_AdjustCounter_m7A3DCE8F0D6FC8A2A480F63B3BC5D4D240BA4493(__this, L_13, (-1), NULL);
		// _allConsoleEntries.PopFront();
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_14 = __this->____allConsoleEntries_2;
		NullCheck(L_14);
		CircularBuffer_1_PopFront_m59F714C42681308F4C6110D937A678DE4BEAA42A(L_14, CircularBuffer_1_PopFront_m59F714C42681308F4C6110D937A678DE4BEAA42A_RuntimeMethod_var);
	}

IL_0074:
	{
		// _allConsoleEntries.PushBack(entry);
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_15 = __this->____allConsoleEntries_2;
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_16 = ___0_entry;
		NullCheck(L_15);
		CircularBuffer_1_PushBack_m76E9F7FDBF8312C2BB54E0BD3D9969E265E190E2(L_15, L_16, CircularBuffer_1_PushBack_m76E9F7FDBF8312C2BB54E0BD3D9969E265E190E2_RuntimeMethod_var);
		// OnUpdated();
		StandardConsoleService_OnUpdated_m31F134D081207E16EB1C6B4809F95305B041FC79(__this, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::OnEntryDuplicated(SRDebugger.Services.ConsoleEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_OnEntryDuplicated_m34F4ED28263102CC5672DCB4533DDE224CE7B26D (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* ___0_entry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entry.Count++;
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_0 = ___0_entry;
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Count_4;
		NullCheck(L_1);
		L_1->___Count_4 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// OnUpdated();
		StandardConsoleService_OnUpdated_m31F134D081207E16EB1C6B4809F95305B041FC79(__this, NULL);
		// if (_hasCleared && _consoleEntries.Count == 0)
		bool L_3 = __this->____hasCleared_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_4 = __this->____consoleEntries_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_inline(L_4, CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		// OnEntryAdded(new ConsoleEntry(entry) {Count = 1});
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_6 = ___0_entry;
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_7 = (ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E*)il2cpp_codegen_object_new(ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ConsoleEntry__ctor_mA70A472490FC5E7CE27F8DDC43348E5332FBF838(L_7, L_6, NULL);
		ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_8 = L_7;
		NullCheck(L_8);
		L_8->___Count_4 = 1;
		StandardConsoleService_OnEntryAdded_mB3403B1F9AE59B62AB15B72EF7DA0DBCA35B4672(__this, L_8, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::OnUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_OnUpdated_m31F134D081207E16EB1C6B4809F95305B041FC79 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Updated != null)
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_0 = __this->___Updated_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	try
	{// begin try (depth: 1)
		// Updated(this);
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_1 = __this->___Updated_8;
		NullCheck(L_1);
		ConsoleUpdatedEventHandler_Invoke_mD0820E51FAE657C384EBB18BF58631FC047DFEDC_inline(L_1, __this, NULL);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Object)
		// catch {}
		// catch {}
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::UnityLogCallback(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_UnityLogCallback_m2D5DCE7195D45EF94D5F2BE66D5F3688C43BB543 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_Item_m7F828D8B35F413B19399197C984C0EDF2895DA50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* V_2 = NULL;
	ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* V_3 = NULL;
	ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* G_B5_0 = NULL;
	{
		// lock (_threadLock)
		RuntimeObject* L_0 = __this->____threadLock_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a9;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// var prevMessage = _collapseEnabled && _allConsoleEntries.Count > 0
				//     ? _allConsoleEntries[_allConsoleEntries.Count - 1]
				//     : null;
				bool L_4 = __this->____collapseEnabled_0;
				if (!L_4)
				{
					goto IL_0027_1;
				}
			}
			{
				CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_5 = __this->____allConsoleEntries_2;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_inline(L_5, CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_RuntimeMethod_var);
				if ((((int32_t)L_6) > ((int32_t)0)))
				{
					goto IL_002a_1;
				}
			}

IL_0027_1:
			{
				G_B5_0 = ((ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E*)(NULL));
				goto IL_0042_1;
			}

IL_002a_1:
			{
				CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_7 = __this->____allConsoleEntries_2;
				CircularBuffer_1_tCBE18538BCBFED869FE0077BF5BECA5B0432EF86* L_8 = __this->____allConsoleEntries_2;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_inline(L_8, CircularBuffer_1_get_Count_mA1CA18F5C8437080AAB0AD3A458600AD4993F355_RuntimeMethod_var);
				NullCheck(L_7);
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_10;
				L_10 = CircularBuffer_1_get_Item_m7F828D8B35F413B19399197C984C0EDF2895DA50(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), CircularBuffer_1_get_Item_m7F828D8B35F413B19399197C984C0EDF2895DA50_RuntimeMethod_var);
				G_B5_0 = L_10;
			}

IL_0042_1:
			{
				V_2 = G_B5_0;
				// AdjustCounter(type, 1);
				int32_t L_11 = ___2_type;
				StandardConsoleService_AdjustCounter_m7A3DCE8F0D6FC8A2A480F63B3BC5D4D240BA4493(__this, L_11, 1, NULL);
				// if (prevMessage != null && prevMessage.LogType == type && prevMessage.Message == condition &&
				//     prevMessage.StackTrace == stackTrace)
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_12 = V_2;
				if (!L_12)
				{
					goto IL_007c_1;
				}
			}
			{
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_13 = V_2;
				NullCheck(L_13);
				int32_t L_14 = L_13->___LogType_5;
				int32_t L_15 = ___2_type;
				if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
				{
					goto IL_007c_1;
				}
			}
			{
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_16 = V_2;
				NullCheck(L_16);
				String_t* L_17 = L_16->___Message_6;
				String_t* L_18 = ___0_condition;
				bool L_19;
				L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, L_18, NULL);
				if (!L_19)
				{
					goto IL_007c_1;
				}
			}
			{
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_20 = V_2;
				NullCheck(L_20);
				String_t* L_21 = L_20->___StackTrace_7;
				String_t* L_22 = ___1_stackTrace;
				bool L_23;
				L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, L_22, NULL);
				if (!L_23)
				{
					goto IL_007c_1;
				}
			}
			{
				// OnEntryDuplicated(prevMessage);
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_24 = V_2;
				StandardConsoleService_OnEntryDuplicated_m34F4ED28263102CC5672DCB4533DDE224CE7B26D(__this, L_24, NULL);
				goto IL_00aa;
			}

IL_007c_1:
			{
				// var newEntry = new ConsoleEntry
				// {
				//     LogType = type,
				//     StackTrace = stackTrace,
				//     Message = condition
				// };
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_25 = (ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E*)il2cpp_codegen_object_new(ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				ConsoleEntry__ctor_mDC3212E0FDA47F5BE768E0035A2F97BD7B30F83A(L_25, NULL);
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_26 = L_25;
				int32_t L_27 = ___2_type;
				NullCheck(L_26);
				L_26->___LogType_5 = L_27;
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_28 = L_26;
				String_t* L_29 = ___1_stackTrace;
				NullCheck(L_28);
				L_28->___StackTrace_7 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&L_28->___StackTrace_7), (void*)L_29);
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_30 = L_28;
				String_t* L_31 = ___0_condition;
				NullCheck(L_30);
				L_30->___Message_6 = L_31;
				Il2CppCodeGenWriteBarrier((void**)(&L_30->___Message_6), (void*)L_31);
				V_3 = L_30;
				// OnEntryAdded(newEntry);
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_32 = V_3;
				StandardConsoleService_OnEntryAdded_mB3403B1F9AE59B62AB15B72EF7DA0DBCA35B4672(__this, L_32, NULL);
				// }
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardConsoleService::AdjustCounter(UnityEngine.LogType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardConsoleService_AdjustCounter_m7A3DCE8F0D6FC8A2A480F63B3BC5D4D240BA4493 (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_type, int32_t ___1_amount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_001b;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		// ErrorCount += amount;
		int32_t L_1;
		L_1 = StandardConsoleService_get_ErrorCount_mEAC6AE8C3E7A00433240246E6675B9ED3985037F_inline(__this, NULL);
		int32_t L_2 = ___1_amount;
		StandardConsoleService_set_ErrorCount_m13148DAEEB51CB249AB5BF26E91285411A2A2DD3_inline(__this, ((int32_t)il2cpp_codegen_add(L_1, L_2)), NULL);
		// if (Error != null)
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_3 = __this->___Error_9;
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		// Error.Invoke(this);
		ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* L_4 = __this->___Error_9;
		NullCheck(L_4);
		ConsoleUpdatedEventHandler_Invoke_mD0820E51FAE657C384EBB18BF58631FC047DFEDC_inline(L_4, __this, NULL);
		// break;
		return;
	}

IL_003e:
	{
		// WarningCount += amount;
		int32_t L_5;
		L_5 = StandardConsoleService_get_WarningCount_m9031F40A6C0952E3B9FD2226F9668844EDF94F0D_inline(__this, NULL);
		int32_t L_6 = ___1_amount;
		StandardConsoleService_set_WarningCount_m3BCA884D256296A89AF1D89F0BE7546AC0984370_inline(__this, ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		// break;
		return;
	}

IL_004d:
	{
		// InfoCount += amount;
		int32_t L_7;
		L_7 = StandardConsoleService_get_InfoCount_m739F40962BB15A015C85317D867E6F1134B532B9_inline(__this, NULL);
		int32_t L_8 = ___1_amount;
		StandardConsoleService_set_InfoCount_m2668E0E54EDA47B896D4FE82FE3724515BA1C9A9_inline(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), NULL);
	}

IL_005b:
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
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardSystemInformationService__ctor_m5E3137BAD73D8FB824DC3893439C67B1A77294F8 (StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3D25D70BDA57A43C5931F8BC28D87F30698426FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, IList<InfoEntry>> _info = new Dictionary<string, IList<InfoEntry>>();
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_0 = (Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820*)il2cpp_codegen_object_new(Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3D25D70BDA57A43C5931F8BC28D87F30698426FE(L_0, Dictionary_2__ctor_m3D25D70BDA57A43C5931F8BC28D87F30698426FE_RuntimeMethod_var);
		__this->____info_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____info_0), (void*)L_0);
		// public StandardSystemInformationService()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// CreateDefaultSet();
		StandardSystemInformationService_CreateDefaultSet_mF23F83E05D918E7C7E212D24FEBDDDC92A76D267(__this, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> SRDebugger.Services.Implementation.StandardSystemInformationService::GetCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StandardSystemInformationService_GetCategories_mE712D4645F290E04CB83132BDD4E651D096B0CFA (StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m2BA2E5B78AA21FDFC5F7449F7060ED28829E4E15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _info.Keys;
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_0 = __this->____info_0;
		NullCheck(L_0);
		KeyCollection_tF0CF6DD8201C11E01157A0897C6A04F41CEFD372* L_1;
		L_1 = Dictionary_2_get_Keys_m2BA2E5B78AA21FDFC5F7449F7060ED28829E4E15(L_0, Dictionary_2_get_Keys_m2BA2E5B78AA21FDFC5F7449F7060ED28829E4E15_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IList`1<SRDebugger.InfoEntry> SRDebugger.Services.Implementation.StandardSystemInformationService::GetInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StandardSystemInformationService_GetInfo_mD61DBAF65E4558CA3C70F4916F4970165159E67A (StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB* __this, String_t* ___0_category, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral741891CD1DFAF8BC69234A05831BEECA609A2B89);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (!_info.TryGetValue(category, out list))
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_0 = __this->____info_0;
		String_t* L_1 = ___0_category;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("[SystemInformationService] Category not found: {0}".Fmt(category));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_category;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = SRFStringExtensions_Fmt_mDC3A183764FA93B17B0461570F9431D8B60D7E8A(_stringLiteral741891CD1DFAF8BC69234A05831BEECA609A2B89, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		// return new InfoEntry[0];
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_7 = (InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)SZArrayNew(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var, (uint32_t)0);
		return (RuntimeObject*)L_7;
	}

IL_0030:
	{
		// return list;
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService::Add(SRDebugger.InfoEntry,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardSystemInformationService_Add_m7E13652641FDCC79F9835D51FBD0E483BB06B97B (StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB* __this, InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* ___0_info, String_t* ___1_category, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisInfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50_m03FE185B282F3504C2228629F0ACD838F515E829_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1DAF468795D1A9734CE27745D24DCA4F7A380793_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1C5ED5A73337618E268C2D415B290E561AC09A67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CAddU3Eb__0_m916DF7DEFD186B308CC62EE0DB4DDD1AB81E3127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* L_0 = (U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m2CEB66840A05BBAF2655F96E0AEA74253C793FC7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* L_1 = V_0;
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_2 = ___0_info;
		NullCheck(L_1);
		L_1->___info_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___info_0), (void*)L_2);
		// if (!_info.TryGetValue(category, out list))
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_3 = __this->____info_0;
		String_t* L_4 = ___1_category;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_mB543AB5E3FF3AB18783C2483649DAD04679200D3_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		// list = new List<InfoEntry>();
		List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* L_6 = (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9*)il2cpp_codegen_object_new(List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m1C5ED5A73337618E268C2D415B290E561AC09A67(L_6, List_1__ctor_m1C5ED5A73337618E268C2D415B290E561AC09A67_RuntimeMethod_var);
		V_1 = L_6;
		// _info.Add(category, list);
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_7 = __this->____info_0;
		String_t* L_8 = ___1_category;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_7);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(L_7, L_8, L_9, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
	}

IL_0030:
	{
		// if (list.Any(p => p.Title == info.Title))
		RuntimeObject* L_10 = V_1;
		U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* L_11 = V_0;
		Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023* L_12 = (Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023*)il2cpp_codegen_object_new(Func_2_t918F15400D1DC505C4D3C01338B8354A6C176023_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m1F7B8D9170F19BE133C9F8B27119D89CE145CD3C(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CAddU3Eb__0_m916DF7DEFD186B308CC62EE0DB4DDD1AB81E3127_RuntimeMethod_var), NULL);
		bool L_13;
		L_13 = Enumerable_Any_TisInfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50_m03FE185B282F3504C2228629F0ACD838F515E829(L_10, L_12, Enumerable_Any_TisInfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50_m03FE185B282F3504C2228629F0ACD838F515E829_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		// throw new ArgumentException("An InfoEntry object with the same title already exists in that category.", "info");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D19752517E75B3D0F3FDFA49B895C10E863FDD1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandardSystemInformationService_Add_m7E13652641FDCC79F9835D51FBD0E483BB06B97B_RuntimeMethod_var)));
	}

IL_0054:
	{
		// list.Add(info);
		RuntimeObject* L_15 = V_1;
		U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* L_16 = V_0;
		NullCheck(L_16);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_17 = L_16->___info_0;
		NullCheck(L_15);
		InterfaceActionInvoker1< InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<SRDebugger.InfoEntry>::Add(T) */, ICollection_1_t1DAF468795D1A9734CE27745D24DCA4F7A380793_il2cpp_TypeInfo_var, L_15, L_17);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>> SRDebugger.Services.Implementation.StandardSystemInformationService::CreateReport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* StandardSystemInformationService_CreateReport_m172D114885FDB33A57460EB25F42ECC9D0E816AF (StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB* __this, bool ___0_includePrivate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mCE058E969DE6E87614D6A355DDC4A0BDCF4A8C2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6B822B7BEB11BBAC17E6FAC337E3C9A937197F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD50973638019052A0B0D6293E2ED746EFBCD7455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m662CF19E2EDC059D7044CD6778DEC1945F97DA36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA59C2B99EFEE708D057D4CE1C0DA44719F07FB6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1F00D19442885BD3E8E0A7788610EBB4F7C2D8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6414DB3F37C3E622DE702802EE0837DED9844F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mEC7AB3D0609F55A3F741B9E93C42D13B46ACECC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1DDA54A45D6F4F197E21E24EAC89E9B47749FDB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* V_0 = NULL;
	Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* V_5 = NULL;
	{
		// var dict = new Dictionary<string, Dictionary<string, object>>();
		Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* L_0 = (Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2*)il2cpp_codegen_object_new(Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6B822B7BEB11BBAC17E6FAC337E3C9A937197F38(L_0, Dictionary_2__ctor_m6B822B7BEB11BBAC17E6FAC337E3C9A937197F38_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var keyValuePair in _info)
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_1 = __this->____info_0;
		NullCheck(L_1);
		Enumerator_tDA11493B18D84335069B8537C6C00A20D727D132 L_2;
		L_2 = Dictionary_2_GetEnumerator_mCE058E969DE6E87614D6A355DDC4A0BDCF4A8C2A(L_1, Dictionary_2_GetEnumerator_mCE058E969DE6E87614D6A355DDC4A0BDCF4A8C2A_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD50973638019052A0B0D6293E2ED746EFBCD7455((&V_1), Enumerator_Dispose_mD50973638019052A0B0D6293E2ED746EFBCD7455_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_0014_1:
			{
				// foreach (var keyValuePair in _info)
				KeyValuePair_2_t257A7F2B9EE3894387316963BB03A3D4CB720266 L_3;
				L_3 = Enumerator_get_Current_mA59C2B99EFEE708D057D4CE1C0DA44719F07FB6D_inline((&V_1), Enumerator_get_Current_mA59C2B99EFEE708D057D4CE1C0DA44719F07FB6D_RuntimeMethod_var);
				V_2 = L_3;
				// var category = new Dictionary<string, object>();
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_4, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
				V_3 = L_4;
				// foreach (var systemInfo in keyValuePair.Value)
				RuntimeObject* L_5;
				L_5 = KeyValuePair_2_get_Value_m1DDA54A45D6F4F197E21E24EAC89E9B47749FDB4_inline((&V_2), KeyValuePair_2_get_Value_m1DDA54A45D6F4F197E21E24EAC89E9B47749FDB4_RuntimeMethod_var);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SRDebugger.InfoEntry>::GetEnumerator() */, IEnumerable_1_t1F00D19442885BD3E8E0A7788610EBB4F7C2D8CE_il2cpp_TypeInfo_var, L_5);
				V_4 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0066_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_7 = V_4;
							if (!L_7)
							{
								goto IL_0071_1;
							}
						}
						{
							RuntimeObject* L_8 = V_4;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_0071_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_005b_2;
					}

IL_0032_2:
					{
						// foreach (var systemInfo in keyValuePair.Value)
						RuntimeObject* L_9 = V_4;
						NullCheck(L_9);
						InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_10;
						L_10 = InterfaceFuncInvoker0< InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SRDebugger.InfoEntry>::get_Current() */, IEnumerator_1_tD6414DB3F37C3E622DE702802EE0837DED9844F5_il2cpp_TypeInfo_var, L_9);
						V_5 = L_10;
						// if (systemInfo.IsPrivate && !includePrivate)
						InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_11 = V_5;
						NullCheck(L_11);
						bool L_12;
						L_12 = InfoEntry_get_IsPrivate_m5A0C481C6A165325264A20F8DDB95611AA7DA034_inline(L_11, NULL);
						if (!L_12)
						{
							goto IL_0047_2;
						}
					}
					{
						bool L_13 = ___0_includePrivate;
						if (!L_13)
						{
							goto IL_005b_2;
						}
					}

IL_0047_2:
					{
						// category.Add(systemInfo.Title, systemInfo.Value);
						Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = V_3;
						InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_15 = V_5;
						NullCheck(L_15);
						String_t* L_16;
						L_16 = InfoEntry_get_Title_m36F77A5C657D73714A077817C673E934D19F2A3D_inline(L_15, NULL);
						InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_17 = V_5;
						NullCheck(L_17);
						RuntimeObject* L_18;
						L_18 = InfoEntry_get_Value_m4C48E9333CE503CD5B2FD39DED7084729C1F98E4(L_17, NULL);
						NullCheck(L_14);
						Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_14, L_16, L_18, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
					}

IL_005b_2:
					{
						// foreach (var systemInfo in keyValuePair.Value)
						RuntimeObject* L_19 = V_4;
						NullCheck(L_19);
						bool L_20;
						L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
						if (L_20)
						{
							goto IL_0032_2;
						}
					}
					{
						goto IL_0072_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0072_1:
			{
				// dict.Add(keyValuePair.Key, category);
				Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* L_21 = V_0;
				String_t* L_22;
				L_22 = KeyValuePair_2_get_Key_mEC7AB3D0609F55A3F741B9E93C42D13B46ACECC3_inline((&V_2), KeyValuePair_2_get_Key_mEC7AB3D0609F55A3F741B9E93C42D13B46ACECC3_RuntimeMethod_var);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_23 = V_3;
				NullCheck(L_21);
				Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5(L_21, L_22, L_23, Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5_RuntimeMethod_var);
			}

IL_0080_1:
			{
				// foreach (var keyValuePair in _info)
				bool L_24;
				L_24 = Enumerator_MoveNext_m662CF19E2EDC059D7044CD6778DEC1945F97DA36((&V_1), Enumerator_MoveNext_m662CF19E2EDC059D7044CD6778DEC1945F97DA36_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		// return dict;
		Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* L_25 = V_0;
		return L_25;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService::CreateDefaultSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardSystemInformationService_CreateDefaultSet_mF23F83E05D918E7C7E212D24FEBDDDC92A76D267 (StandardSystemInformationService_tBA9C528A5719031421824CD3341FFBCDF0BC43EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDEC686466C2E704A3CCB79836ABE399654D2A7EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFF6E748EB118D2AE7AF4670CED4DCDF127178406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NPOTSupport_t6B3E25043FDF72E1E29C773947CA67098136BC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_0_mB06C74A51DFD775788C959CAA8252451E8472714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_1_m58D86873A84209B4B0ED3BB4289AF3F28B366B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_2_m6F9CD00A106957DD1C61106E7D9B3D8AAC7FB5EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_3_m803738A5F8537CED11339641E53380223461E9E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_4_mFD342E0F3CC9D313C339DA8ED6F16191952D47A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_5_m487335BAE4AB30212E20762B009FBA4A1B2C6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_6_m6186B2F734D59071EEDB30A17602B9ADE69DDEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultSetU3Eb__6_7_mB42DC9F268C11496BD28E4CC820141DF0A2BE0B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00DB0EF248E66DE9F4DEE181D859C07B8B58B27B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5AFF7360D9A2572C53DEBA7CB218F5D672689D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BBA6CE4003870CF27417A37DA15698A74F039FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C2A74FAB4F43DEBE6E1D22C9BA57F0F657BAD2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6F498BAF68798C6D18ABF1EDD820D8888DBCAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D524543128424DA4DCDBE32D4889C4F167F4B87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DD32B18A388C5F1A6BAFD3629759260C61F767C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E461397E7076E9606713F5DF755114B9023ACF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1350F8DDC655DCB4BFCF3A9B1BEE6066B862DA49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral184E1F1A65632C44DB1FFB76F9053C42479DBD5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD5BAEA5774474EA13ABE255EEA58C428D76C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F8F870F7EB4426F00DE192C8070A43D127A26CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral259F624CAB8A5EEE164893015C52B5AE616DD7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27E680F20276347E2D435AD7F5BB9AC1EA1B5A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B5F7BC59239981C1657A8A7F2562B1595A8467D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44E7DB54F6E7048752D7239D26CAF904781C00A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45045578780FD0B9DC1862175DE1C8476691896A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E6D2167D5D059177E1E218904C4225E3C5CE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5AE35F9D6B65C24EF57F766406601BC6EB29AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5252758825B8A7D31C7F3933F5B110522A05965C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C7390269A5D0D68159F749168D3C42D632FD97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BBFE3C174A0B7F658871FEA094B6A061F1D753);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59755FF314A1DF393CC0D0F6B030C52B4D641B8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6310BCA9A5340BFD134FD5009595DF7685C76E57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C379854BE64F495042DF2C26D73DBF30568882D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CA4C9CC4A99F82C6683ECCCAE8B4A89591693F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81E80EA114E7CD2B970C5BA3E85B8F9E93C46DC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADAEA962224F943708B82E366B9BB92B9EAEED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CA4A64DAB7D941B6D64DC389E7457DB93D354A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral932C6BBECE7CA25FF668B9E4EFD3367303D756CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99A5B22C9FE377EEAE5B3A19C51127EB1FDF523D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA13A3274AE9866BDD47D0410F6BA512E2BF28E22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA824662BDE770142A50F46AF6397A81DBA0A6551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAE948B77F656B98D57FEC0C362F7969616AF9CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB209F757E4C44505F93282E2475B06794598CAAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F6A2B1528F1875EE5A41A9FBEA6D27DD03AF43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58AB42952E3CC34E68332B4F4602A9397B0DD7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2FF3C3801822722D27CB555763D80CCC4F632B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D231AE0A6528DFC3E99D4D1A4F830DD6B15955);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A6CB80426DCBF11B603E554B76B75C657506E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8545E8ABF489F28193143F69A2FA8F73A036FB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE44409E3E22722610F99DB393175D49B7072CFBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF352595D654E0B647FA5E2180ADE7FE36D3A8A34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D6891E1C77A3310A5092F5198F55D8101765F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDCB496AC472147DF60D19C783F823CAA381451E);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* V_2 = NULL;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	int32_t G_B2_5 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B2_6 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B2_7 = NULL;
	String_t* G_B2_8 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B2_9 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	int32_t G_B1_5 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B1_6 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B1_7 = NULL;
	String_t* G_B1_8 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B1_9 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	int32_t G_B3_6 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B3_7 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B3_8 = NULL;
	String_t* G_B3_9 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B3_10 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B5_5 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B5_6 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B5_7 = NULL;
	String_t* G_B5_8 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B5_9 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	int32_t G_B4_5 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B4_6 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B4_7 = NULL;
	String_t* G_B4_8 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B4_9 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	String_t* G_B6_5 = NULL;
	int32_t G_B6_6 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B6_7 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B6_8 = NULL;
	String_t* G_B6_9 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B6_10 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B8_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B8_4 = NULL;
	String_t* G_B8_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B8_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B7_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B7_4 = NULL;
	String_t* G_B7_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B7_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	int32_t G_B10_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B10_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B10_4 = NULL;
	String_t* G_B10_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B10_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B9_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B9_4 = NULL;
	String_t* G_B9_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B9_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B12_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B12_4 = NULL;
	String_t* G_B12_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B12_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	int32_t G_B11_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B11_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B11_4 = NULL;
	String_t* G_B11_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B11_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	int32_t G_B14_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B14_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B14_4 = NULL;
	String_t* G_B14_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B14_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	int32_t G_B13_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B13_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B13_4 = NULL;
	String_t* G_B13_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B13_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	int32_t G_B16_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B16_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B16_4 = NULL;
	String_t* G_B16_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B16_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	int32_t G_B15_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B15_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B15_4 = NULL;
	String_t* G_B15_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B15_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	int32_t G_B18_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B18_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B18_4 = NULL;
	String_t* G_B18_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B18_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	int32_t G_B17_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B17_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B17_4 = NULL;
	String_t* G_B17_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B17_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	int32_t G_B20_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B20_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B20_4 = NULL;
	String_t* G_B20_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B20_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	int32_t G_B19_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B19_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B19_4 = NULL;
	String_t* G_B19_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B19_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	int32_t G_B22_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B22_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B22_4 = NULL;
	String_t* G_B22_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B22_6 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	int32_t G_B21_2 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B21_3 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B21_4 = NULL;
	String_t* G_B21_5 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B21_6 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* G_B25_0 = NULL;
	int32_t G_B36_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B36_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B36_2 = NULL;
	String_t* G_B36_3 = NULL;
	String_t* G_B36_4 = NULL;
	int32_t G_B36_5 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B36_6 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B36_7 = NULL;
	String_t* G_B36_8 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B36_9 = NULL;
	int32_t G_B35_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B35_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B35_2 = NULL;
	String_t* G_B35_3 = NULL;
	String_t* G_B35_4 = NULL;
	int32_t G_B35_5 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B35_6 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B35_7 = NULL;
	String_t* G_B35_8 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B35_9 = NULL;
	String_t* G_B37_0 = NULL;
	int32_t G_B37_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B37_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B37_3 = NULL;
	String_t* G_B37_4 = NULL;
	String_t* G_B37_5 = NULL;
	int32_t G_B37_6 = 0;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B37_7 = NULL;
	InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* G_B37_8 = NULL;
	String_t* G_B37_9 = NULL;
	Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* G_B37_10 = NULL;
	{
		// _info.Add("System", new[]
		// {
		//     InfoEntry.Create("Operating System", UnityEngine.SystemInfo.operatingSystem),
		//     InfoEntry.Create("Device Name", UnityEngine.SystemInfo.deviceName, true),
		//     InfoEntry.Create("Device Type", UnityEngine.SystemInfo.deviceType),
		//     InfoEntry.Create("Device Model", UnityEngine.SystemInfo.deviceModel),
		//     InfoEntry.Create("CPU Type", UnityEngine.SystemInfo.processorType),
		//     InfoEntry.Create("CPU Count", UnityEngine.SystemInfo.processorCount),
		//     InfoEntry.Create("System Memory", SRFileUtil.GetBytesReadable(((long) UnityEngine.SystemInfo.systemMemorySize)*1024*1024))
		//     //Info.Create("Process Name", () => Process.GetCurrentProcess().ProcessName)
		// });
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_0 = __this->____info_0;
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_1 = (InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)SZArrayNew(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var, (uint32_t)7);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_2 = L_1;
		String_t* L_3;
		L_3 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_4;
		L_4 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral44E7DB54F6E7048752D7239D26CAF904781C00A2, L_3, (bool)0, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_4);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_5 = L_2;
		String_t* L_6;
		L_6 = SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_7;
		L_7 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral0B5AFF7360D9A2572C53DEBA7CB218F5D672689D, L_6, (bool)1, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_7);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_8 = L_5;
		int32_t L_9;
		L_9 = SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0(NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var, &L_10);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_12;
		L_12 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralB209F757E4C44505F93282E2475B06794598CAAE, L_11, (bool)0, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_12);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_13 = L_8;
		String_t* L_14;
		L_14 = SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_15;
		L_15 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral1BD5BAEA5774474EA13ABE255EEA58C428D76C00, L_14, (bool)0, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_15);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_16 = L_13;
		String_t* L_17;
		L_17 = SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_18;
		L_18 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral45E6D2167D5D059177E1E218904C4225E3C5CE9D, L_17, (bool)0, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_18);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_19 = L_16;
		int32_t L_20;
		L_20 = SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55(NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_23;
		L_23 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralD3D231AE0A6528DFC3E99D4D1A4F830DD6B15955, L_22, (bool)0, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_23);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_24 = L_19;
		int32_t L_25;
		L_25 = SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E(NULL);
		String_t* L_26;
		L_26 = SRFileUtil_GetBytesReadable_m244882621735B2A7855151333B433E77F216CB52(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)L_25), ((int64_t)((int32_t)1024)))), ((int64_t)((int32_t)1024)))), NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_27;
		L_27 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral5252758825B8A7D31C7F3933F5B110522A05965C, L_26, (bool)0, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_27);
		NullCheck(L_0);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(L_0, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64, (RuntimeObject*)L_24, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		// _info.Add("Unity", new[]
		// {
		//     InfoEntry.Create("Version", Application.unityVersion),
		//     InfoEntry.Create("Debug", Debug.isDebugBuild),
		//     InfoEntry.Create("Unity Pro", Application.HasProLicense()),
		//     InfoEntry.Create("Genuine",
		//         "{0} ({1})".Fmt(Application.genuine ? "Yes" : "No",
		//             Application.genuineCheckAvailable ? "Trusted" : "Untrusted")),
		//     InfoEntry.Create("System Language", Application.systemLanguage),
		//     InfoEntry.Create("Platform", Application.platform),
		//     InfoEntry.Create("IL2CPP", IL2CPP),
		//     InfoEntry.Create("Application Version", Application.version),
		//     InfoEntry.Create("SRDebugger Version", SRDebug.Version),
		// });
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_28 = __this->____info_0;
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_29 = (InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)SZArrayNew(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_30 = L_29;
		String_t* L_31;
		L_31 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_32;
		L_32 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_31, (bool)0, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_32);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_33 = L_30;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		bool L_35 = L_34;
		RuntimeObject* L_36 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_35);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_37;
		L_37 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral6C379854BE64F495042DF2C26D73DBF30568882D, L_36, (bool)0, NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_37);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_38 = L_33;
		bool L_39;
		L_39 = Application_HasProLicense_mB70706D82DCE9E0E5FDA4BBA91DF3AD8F7241A92(NULL);
		bool L_40 = L_39;
		RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_42;
		L_42 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral56BBFE3C174A0B7F658871FEA094B6A061F1D753, L_41, (bool)0, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_42);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_43 = L_38;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_44;
		bool L_46;
		L_46 = Application_get_genuine_m809A0E5A68D890B8BED1FD2A5CF13637C773AEC6(NULL);
		G_B1_0 = 0;
		G_B1_1 = L_45;
		G_B1_2 = L_45;
		G_B1_3 = _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
		G_B1_4 = _stringLiteralD2FF3C3801822722D27CB555763D80CCC4F632B8;
		G_B1_5 = 3;
		G_B1_6 = L_43;
		G_B1_7 = L_43;
		G_B1_8 = _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
		G_B1_9 = L_28;
		if (L_46)
		{
			G_B2_0 = 0;
			G_B2_1 = L_45;
			G_B2_2 = L_45;
			G_B2_3 = _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
			G_B2_4 = _stringLiteralD2FF3C3801822722D27CB555763D80CCC4F632B8;
			G_B2_5 = 3;
			G_B2_6 = L_43;
			G_B2_7 = L_43;
			G_B2_8 = _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
			G_B2_9 = L_28;
			goto IL_0130;
		}
	}
	{
		G_B3_0 = _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		G_B3_6 = G_B1_5;
		G_B3_7 = G_B1_6;
		G_B3_8 = G_B1_7;
		G_B3_9 = G_B1_8;
		G_B3_10 = G_B1_9;
		goto IL_0135;
	}

IL_0130:
	{
		G_B3_0 = _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
		G_B3_6 = G_B2_5;
		G_B3_7 = G_B2_6;
		G_B3_8 = G_B2_7;
		G_B3_9 = G_B2_8;
		G_B3_10 = G_B2_9;
	}

IL_0135:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = G_B3_3;
		bool L_48;
		L_48 = Application_get_genuineCheckAvailable_m9E92ED00A38600259813F2CDF40841702336B331(NULL);
		G_B4_0 = 1;
		G_B4_1 = L_47;
		G_B4_2 = L_47;
		G_B4_3 = G_B3_4;
		G_B4_4 = G_B3_5;
		G_B4_5 = G_B3_6;
		G_B4_6 = G_B3_7;
		G_B4_7 = G_B3_8;
		G_B4_8 = G_B3_9;
		G_B4_9 = G_B3_10;
		if (L_48)
		{
			G_B5_0 = 1;
			G_B5_1 = L_47;
			G_B5_2 = L_47;
			G_B5_3 = G_B3_4;
			G_B5_4 = G_B3_5;
			G_B5_5 = G_B3_6;
			G_B5_6 = G_B3_7;
			G_B5_7 = G_B3_8;
			G_B5_8 = G_B3_9;
			G_B5_9 = G_B3_10;
			goto IL_0146;
		}
	}
	{
		G_B6_0 = _stringLiteral6CA4C9CC4A99F82C6683ECCCAE8B4A89591693F7;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		G_B6_8 = G_B4_7;
		G_B6_9 = G_B4_8;
		G_B6_10 = G_B4_9;
		goto IL_014b;
	}

IL_0146:
	{
		G_B6_0 = _stringLiteral0E461397E7076E9606713F5DF755114B9023ACF0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
		G_B6_8 = G_B5_7;
		G_B6_9 = G_B5_8;
		G_B6_10 = G_B5_9;
	}

IL_014b:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		String_t* L_49;
		L_49 = SRFStringExtensions_Fmt_mDC3A183764FA93B17B0461570F9431D8B60D7E8A(G_B6_4, G_B6_3, NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_50;
		L_50 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(G_B6_5, L_49, (bool)0, NULL);
		NullCheck(G_B6_7);
		ArrayElementTypeCheck (G_B6_7, L_50);
		(G_B6_7)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_6), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_50);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_51 = G_B6_8;
		int32_t L_52;
		L_52 = Application_get_systemLanguage_m4D8B6DC60ED7236DD233C8DCB9E13D287B4FCF65(NULL);
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var, &L_53);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_55;
		L_55 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral0C2A74FAB4F43DEBE6E1D22C9BA57F0F657BAD2C, L_54, (bool)0, NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_55);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_55);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_56 = L_51;
		int32_t L_57;
		L_57 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		int32_t L_58 = L_57;
		RuntimeObject* L_59 = Box(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, &L_58);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_60;
		L_60 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, L_59, (bool)0, NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_60);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(5), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_60);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_61 = L_56;
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_62;
		L_62 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7, _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C, (bool)0, NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(6), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_62);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_63 = L_61;
		String_t* L_64;
		L_64 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_65;
		L_65 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralAAE948B77F656B98D57FEC0C362F7969616AF9CC, L_64, (bool)0, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_65);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(7), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_65);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_66 = L_63;
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_67;
		L_67 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralA13A3274AE9866BDD47D0410F6BA512E2BF28E22, _stringLiteralD8545E8ABF489F28193143F69A2FA8F73A036FB8, (bool)0, NULL);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(8), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_67);
		NullCheck(G_B6_10);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(G_B6_10, G_B6_9, (RuntimeObject*)L_66, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		// _info.Add("Display", new[]
		// {
		//     InfoEntry.Create("Resolution", () => Screen.width + "x" + Screen.height),
		//     InfoEntry.Create("DPI", () => Screen.dpi),
		//     InfoEntry.Create("Fullscreen", () => Screen.fullScreen),
		//     InfoEntry.Create("Orientation", () => Screen.orientation)
		// });
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_68 = __this->____info_0;
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_69 = (InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)SZArrayNew(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var, (uint32_t)4);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_70 = L_69;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_71 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_72 = L_71;
		G_B7_0 = L_72;
		G_B7_1 = _stringLiteral4D5AE35F9D6B65C24EF57F766406601BC6EB29AB;
		G_B7_2 = 0;
		G_B7_3 = L_70;
		G_B7_4 = L_70;
		G_B7_5 = _stringLiteral0BBA6CE4003870CF27417A37DA15698A74F039FB;
		G_B7_6 = L_68;
		if (L_72)
		{
			G_B8_0 = L_72;
			G_B8_1 = _stringLiteral4D5AE35F9D6B65C24EF57F766406601BC6EB29AB;
			G_B8_2 = 0;
			G_B8_3 = L_70;
			G_B8_4 = L_70;
			G_B8_5 = _stringLiteral0BBA6CE4003870CF27417A37DA15698A74F039FB;
			G_B8_6 = L_68;
			goto IL_01fd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_73 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_74 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_74, L_73, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_0_mB06C74A51DFD775788C959CAA8252451E8472714_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_75 = L_74;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_75);
		G_B8_0 = L_75;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
		G_B8_4 = G_B7_4;
		G_B8_5 = G_B7_5;
		G_B8_6 = G_B7_6;
	}

IL_01fd:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_76;
		L_76 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B8_1, G_B8_0, (bool)0, NULL);
		NullCheck(G_B8_3);
		ArrayElementTypeCheck (G_B8_3, L_76);
		(G_B8_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_76);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_77 = G_B8_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_78 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_1_2;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_79 = L_78;
		G_B9_0 = L_79;
		G_B9_1 = _stringLiteral932C6BBECE7CA25FF668B9E4EFD3367303D756CF;
		G_B9_2 = 1;
		G_B9_3 = L_77;
		G_B9_4 = L_77;
		G_B9_5 = G_B8_5;
		G_B9_6 = G_B8_6;
		if (L_79)
		{
			G_B10_0 = L_79;
			G_B10_1 = _stringLiteral932C6BBECE7CA25FF668B9E4EFD3367303D756CF;
			G_B10_2 = 1;
			G_B10_3 = L_77;
			G_B10_4 = L_77;
			G_B10_5 = G_B8_5;
			G_B10_6 = G_B8_6;
			goto IL_022a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_80 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_81 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_81, L_80, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_1_m58D86873A84209B4B0ED3BB4289AF3F28B366B53_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_82 = L_81;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_1_2 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_1_2), (void*)L_82);
		G_B10_0 = L_82;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
		G_B10_6 = G_B9_6;
	}

IL_022a:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_83;
		L_83 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B10_1, G_B10_0, (bool)0, NULL);
		NullCheck(G_B10_3);
		ArrayElementTypeCheck (G_B10_3, L_83);
		(G_B10_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_83);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_84 = G_B10_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_85 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_3;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_86 = L_85;
		G_B11_0 = L_86;
		G_B11_1 = _stringLiteral27E680F20276347E2D435AD7F5BB9AC1EA1B5A99;
		G_B11_2 = 2;
		G_B11_3 = L_84;
		G_B11_4 = L_84;
		G_B11_5 = G_B10_5;
		G_B11_6 = G_B10_6;
		if (L_86)
		{
			G_B12_0 = L_86;
			G_B12_1 = _stringLiteral27E680F20276347E2D435AD7F5BB9AC1EA1B5A99;
			G_B12_2 = 2;
			G_B12_3 = L_84;
			G_B12_4 = L_84;
			G_B12_5 = G_B10_5;
			G_B12_6 = G_B10_6;
			goto IL_0257;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_87 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_88 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_88);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_88, L_87, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_2_m6F9CD00A106957DD1C61106E7D9B3D8AAC7FB5EC_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_89 = L_88;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_3 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_3), (void*)L_89);
		G_B12_0 = L_89;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
		G_B12_4 = G_B11_4;
		G_B12_5 = G_B11_5;
		G_B12_6 = G_B11_6;
	}

IL_0257:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_90;
		L_90 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B12_1, G_B12_0, (bool)0, NULL);
		NullCheck(G_B12_3);
		ArrayElementTypeCheck (G_B12_3, L_90);
		(G_B12_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_90);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_91 = G_B12_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_92 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_4;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_93 = L_92;
		G_B13_0 = L_93;
		G_B13_1 = _stringLiteral1F8F870F7EB4426F00DE192C8070A43D127A26CE;
		G_B13_2 = 3;
		G_B13_3 = L_91;
		G_B13_4 = L_91;
		G_B13_5 = G_B12_5;
		G_B13_6 = G_B12_6;
		if (L_93)
		{
			G_B14_0 = L_93;
			G_B14_1 = _stringLiteral1F8F870F7EB4426F00DE192C8070A43D127A26CE;
			G_B14_2 = 3;
			G_B14_3 = L_91;
			G_B14_4 = L_91;
			G_B14_5 = G_B12_5;
			G_B14_6 = G_B12_6;
			goto IL_0284;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_94 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_95 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_95, L_94, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_3_m803738A5F8537CED11339641E53380223461E9E3_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_96 = L_95;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_4 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_4), (void*)L_96);
		G_B14_0 = L_96;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
		G_B14_5 = G_B13_5;
		G_B14_6 = G_B13_6;
	}

IL_0284:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_97;
		L_97 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B14_1, G_B14_0, (bool)0, NULL);
		NullCheck(G_B14_3);
		ArrayElementTypeCheck (G_B14_3, L_97);
		(G_B14_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_97);
		NullCheck(G_B14_6);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(G_B14_6, G_B14_5, (RuntimeObject*)G_B14_4, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		//             _info.Add("Runtime", new[]
		//             {
		//                 InfoEntry.Create("Play Time", () => Time.unscaledTime),
		//                 InfoEntry.Create("Level Play Time", () => Time.timeSinceLevelLoad),
		// #if UNITY_4_6 || UNITY_4_7 || UNITY_5_0 || UNITY_5_1 || UNITY_5_2
		//                 InfoEntry.Create("Current Level", () => Application.loadedLevelName),
		// #else
		//                 InfoEntry.Create("Current Level", () =>
		//                 {
		//                     var activeScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene();
		//                     return "{0} (Index: {1})".Fmt(activeScene.name, activeScene.buildIndex);
		//                 }),
		// #endif
		//                 InfoEntry.Create("Quality Level",
		//                     () =>
		//                         QualitySettings.names[QualitySettings.GetQualityLevel()] + " (" +
		//                         QualitySettings.GetQualityLevel() + ")")
		//             });
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_98 = __this->____info_0;
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_99 = (InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)SZArrayNew(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var, (uint32_t)4);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_100 = L_99;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_101 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_4_5;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_102 = L_101;
		G_B15_0 = L_102;
		G_B15_1 = _stringLiteral54C7390269A5D0D68159F749168D3C42D632FD97;
		G_B15_2 = 0;
		G_B15_3 = L_100;
		G_B15_4 = L_100;
		G_B15_5 = _stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01;
		G_B15_6 = L_98;
		if (L_102)
		{
			G_B16_0 = L_102;
			G_B16_1 = _stringLiteral54C7390269A5D0D68159F749168D3C42D632FD97;
			G_B16_2 = 0;
			G_B16_3 = L_100;
			G_B16_4 = L_100;
			G_B16_5 = _stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01;
			G_B16_6 = L_98;
			goto IL_02c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_103 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_104 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_104, L_103, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_4_mFD342E0F3CC9D313C339DA8ED6F16191952D47A0_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_105 = L_104;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_4_5 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_4_5), (void*)L_105);
		G_B16_0 = L_105;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
		G_B16_4 = G_B15_4;
		G_B16_5 = G_B15_5;
		G_B16_6 = G_B15_6;
	}

IL_02c7:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_106;
		L_106 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B16_1, G_B16_0, (bool)0, NULL);
		NullCheck(G_B16_3);
		ArrayElementTypeCheck (G_B16_3, L_106);
		(G_B16_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_106);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_107 = G_B16_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_108 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_5_6;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_109 = L_108;
		G_B17_0 = L_109;
		G_B17_1 = _stringLiteral184E1F1A65632C44DB1FFB76F9053C42479DBD5A;
		G_B17_2 = 1;
		G_B17_3 = L_107;
		G_B17_4 = L_107;
		G_B17_5 = G_B16_5;
		G_B17_6 = G_B16_6;
		if (L_109)
		{
			G_B18_0 = L_109;
			G_B18_1 = _stringLiteral184E1F1A65632C44DB1FFB76F9053C42479DBD5A;
			G_B18_2 = 1;
			G_B18_3 = L_107;
			G_B18_4 = L_107;
			G_B18_5 = G_B16_5;
			G_B18_6 = G_B16_6;
			goto IL_02f4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_110 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_111 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_111, L_110, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_5_m487335BAE4AB30212E20762B009FBA4A1B2C6BB5_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_112 = L_111;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_5_6 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_5_6), (void*)L_112);
		G_B18_0 = L_112;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		G_B18_5 = G_B17_5;
		G_B18_6 = G_B17_6;
	}

IL_02f4:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_113;
		L_113 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B18_1, G_B18_0, (bool)0, NULL);
		NullCheck(G_B18_3);
		ArrayElementTypeCheck (G_B18_3, L_113);
		(G_B18_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_113);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_114 = G_B18_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_115 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_6_7;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_116 = L_115;
		G_B19_0 = L_116;
		G_B19_1 = _stringLiteral99A5B22C9FE377EEAE5B3A19C51127EB1FDF523D;
		G_B19_2 = 2;
		G_B19_3 = L_114;
		G_B19_4 = L_114;
		G_B19_5 = G_B18_5;
		G_B19_6 = G_B18_6;
		if (L_116)
		{
			G_B20_0 = L_116;
			G_B20_1 = _stringLiteral99A5B22C9FE377EEAE5B3A19C51127EB1FDF523D;
			G_B20_2 = 2;
			G_B20_3 = L_114;
			G_B20_4 = L_114;
			G_B20_5 = G_B18_5;
			G_B20_6 = G_B18_6;
			goto IL_0321;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_117 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_118 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_118);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_118, L_117, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_6_m6186B2F734D59071EEDB30A17602B9ADE69DDEFE_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_119 = L_118;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_6_7 = L_119;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_6_7), (void*)L_119);
		G_B20_0 = L_119;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
		G_B20_5 = G_B19_5;
		G_B20_6 = G_B19_6;
	}

IL_0321:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_120;
		L_120 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B20_1, G_B20_0, (bool)0, NULL);
		NullCheck(G_B20_3);
		ArrayElementTypeCheck (G_B20_3, L_120);
		(G_B20_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_120);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_121 = G_B20_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_122 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_7_8;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_123 = L_122;
		G_B21_0 = L_123;
		G_B21_1 = _stringLiteral0C6F498BAF68798C6D18ABF1EDD820D8888DBCAB;
		G_B21_2 = 3;
		G_B21_3 = L_121;
		G_B21_4 = L_121;
		G_B21_5 = G_B20_5;
		G_B21_6 = G_B20_6;
		if (L_123)
		{
			G_B22_0 = L_123;
			G_B22_1 = _stringLiteral0C6F498BAF68798C6D18ABF1EDD820D8888DBCAB;
			G_B22_2 = 3;
			G_B22_3 = L_121;
			G_B22_4 = L_121;
			G_B22_5 = G_B20_5;
			G_B22_6 = G_B20_6;
			goto IL_034e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_124 = ((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_125 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_125);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_125, L_124, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultSetU3Eb__6_7_mB42DC9F268C11496BD28E4CC820141DF0A2BE0B5_RuntimeMethod_var), NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_126 = L_125;
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_7_8 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9__6_7_8), (void*)L_126);
		G_B22_0 = L_126;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		G_B22_4 = G_B21_4;
		G_B22_5 = G_B21_5;
		G_B22_6 = G_B21_6;
	}

IL_034e:
	{
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_127;
		L_127 = InfoEntry_Create_mD6E5EEDEFBC4E9A4CE0A6E35514EDF192DB76F7F(G_B22_1, G_B22_0, (bool)0, NULL);
		NullCheck(G_B22_3);
		ArrayElementTypeCheck (G_B22_3, L_127);
		(G_B22_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_127);
		NullCheck(G_B22_6);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(G_B22_6, G_B22_5, (RuntimeObject*)G_B22_4, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		// var cloudBuildManifest = (TextAsset)Resources.Load("UnityCloudBuildManifest.json");
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_128;
		L_128 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteral8ADAEA962224F943708B82E366B9BB92B9EAEED6, NULL);
		V_0 = ((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)CastclassClass((RuntimeObject*)L_128, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var));
		// var manifestDict = cloudBuildManifest != null
		//     ? Json.Deserialize(cloudBuildManifest.text) as Dictionary<string, object>
		//     : null;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_129 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_130;
		L_130 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_129, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_130)
		{
			goto IL_0376;
		}
	}
	{
		G_B25_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)(NULL));
		goto IL_0386;
	}

IL_0376:
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_131 = V_0;
		NullCheck(L_131);
		String_t* L_132;
		L_132 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_131, NULL);
		RuntimeObject* L_133;
		L_133 = Json_Deserialize_m4159CC5A44F99F4E01D0549B7D711C2C4904B20B(L_132, NULL);
		G_B25_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_133, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
	}

IL_0386:
	{
		V_1 = G_B25_0;
		// if (manifestDict != null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_134 = V_1;
		if (!L_134)
		{
			goto IL_0403;
		}
	}
	{
		// var manifestList = new List<InfoEntry>(manifestDict.Count);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_135 = V_1;
		NullCheck(L_135);
		int32_t L_136;
		L_136 = Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA(L_135, Dictionary_2_get_Count_mA194D0E2787B81ED9FC54005AF0B23147EF51CBA_RuntimeMethod_var);
		List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* L_137 = (List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9*)il2cpp_codegen_object_new(List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9_il2cpp_TypeInfo_var);
		NullCheck(L_137);
		List_1__ctor_mFF6E748EB118D2AE7AF4670CED4DCDF127178406(L_137, L_136, List_1__ctor_mFF6E748EB118D2AE7AF4670CED4DCDF127178406_RuntimeMethod_var);
		V_2 = L_137;
		// foreach (var kvp in manifestDict)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_138 = V_1;
		NullCheck(L_138);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_139;
		L_139 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_138, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_3 = L_139;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03e4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_3), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03d9_1;
			}

IL_039f_1:
			{
				// foreach (var kvp in manifestDict)
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_140;
				L_140 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_3), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_4 = L_140;
				// if (kvp.Value == null)
				RuntimeObject* L_141;
				L_141 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_4), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				if (!L_141)
				{
					goto IL_03d9_1;
				}
			}
			{
				// var value = kvp.Value.ToString();
				RuntimeObject* L_142;
				L_142 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_4), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				NullCheck(L_142);
				String_t* L_143;
				L_143 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_142);
				V_5 = L_143;
				// manifestList.Add(InfoEntry.Create(GetCloudManifestPrettyName(kvp.Key), value));
				List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* L_144 = V_2;
				String_t* L_145;
				L_145 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_4), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				String_t* L_146;
				L_146 = StandardSystemInformationService_GetCloudManifestPrettyName_mBF0C0497AC20B78E02BD1F174BEFC257AEF6E154(L_145, NULL);
				String_t* L_147 = V_5;
				InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_148;
				L_148 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(L_146, L_147, (bool)0, NULL);
				NullCheck(L_144);
				List_1_Add_mDEC686466C2E704A3CCB79836ABE399654D2A7EE_inline(L_144, L_148, List_1_Add_mDEC686466C2E704A3CCB79836ABE399654D2A7EE_RuntimeMethod_var);
			}

IL_03d9_1:
			{
				// foreach (var kvp in manifestDict)
				bool L_149;
				L_149 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_3), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_149)
				{
					goto IL_039f_1;
				}
			}
			{
				goto IL_03f2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03f2:
	{
		// _info.Add("Build", manifestList);
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_150 = __this->____info_0;
		List_1_t639D33690F2A2DD500550EE5FB8825972BDB65F9* L_151 = V_2;
		NullCheck(L_150);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(L_150, _stringLiteral45045578780FD0B9DC1862175DE1C8476691896A, L_151, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
	}

IL_0403:
	{
		// _info.Add("Features", new[]
		// {
		//     InfoEntry.Create("Location", UnityEngine.SystemInfo.supportsLocationService),
		//     InfoEntry.Create("Accelerometer", UnityEngine.SystemInfo.supportsAccelerometer),
		//     InfoEntry.Create("Gyroscope", UnityEngine.SystemInfo.supportsGyroscope),
		//     InfoEntry.Create("Vibration", UnityEngine.SystemInfo.supportsVibration)
		// });
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_152 = __this->____info_0;
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_153 = (InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)SZArrayNew(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var, (uint32_t)4);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_154 = L_153;
		bool L_155;
		L_155 = SystemInfo_get_supportsLocationService_m7274D2AE36316B66F33043270B6CBCFBD1DAA54E(NULL);
		bool L_156 = L_155;
		RuntimeObject* L_157 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_156);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_158;
		L_158 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral0DD32B18A388C5F1A6BAFD3629759260C61F767C, L_157, (bool)0, NULL);
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, L_158);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(0), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_158);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_159 = L_154;
		bool L_160;
		L_160 = SystemInfo_get_supportsAccelerometer_mDD94E914406FBF282CCECEFF79F80A3E5ECC9559(NULL);
		bool L_161 = L_160;
		RuntimeObject* L_162 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_161);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_163;
		L_163 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral1350F8DDC655DCB4BFCF3A9B1BEE6066B862DA49, L_162, (bool)0, NULL);
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_163);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_163);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_164 = L_159;
		bool L_165;
		L_165 = SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211(NULL);
		bool L_166 = L_165;
		RuntimeObject* L_167 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_166);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_168;
		L_168 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral81E80EA114E7CD2B970C5BA3E85B8F9E93C46DC4, L_167, (bool)0, NULL);
		NullCheck(L_164);
		ArrayElementTypeCheck (L_164, L_168);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_168);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_169 = L_164;
		bool L_170;
		L_170 = SystemInfo_get_supportsVibration_m04ED54B2651F6376E2B8E81DDEF8E514D074185F(NULL);
		bool L_171 = L_170;
		RuntimeObject* L_172 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_171);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_173;
		L_173 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralB58AB42952E3CC34E68332B4F4602A9397B0DD7D, L_172, (bool)0, NULL);
		NullCheck(L_169);
		ArrayElementTypeCheck (L_169, L_173);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(3), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_173);
		NullCheck(L_152);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(L_152, _stringLiteral59755FF314A1DF393CC0D0F6B030C52B4D641B8B, (RuntimeObject*)L_169, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		//             _info.Add("Graphics", new[]
		//             {
		//                 InfoEntry.Create("Device Name", UnityEngine.SystemInfo.graphicsDeviceName),
		//                 InfoEntry.Create("Device Vendor", UnityEngine.SystemInfo.graphicsDeviceVendor),
		//                 InfoEntry.Create("Device Version", UnityEngine.SystemInfo.graphicsDeviceVersion),
		//                 InfoEntry.Create("Max Tex Size", UnityEngine.SystemInfo.maxTextureSize),
		// #if !UNITY_5 && !UNITY_5_3_OR_NEWER
		//                 InfoEntry.Create("Fill Rate",
		//                     SystemInfo.graphicsPixelFillrate > 0 ? "{0}mpix/s".Fmt(SystemInfo.graphicsPixelFillrate) : "Unknown"),
		// #endif
		//                 InfoEntry.Create("NPOT Support", UnityEngine.SystemInfo.npotSupport),
		//                 InfoEntry.Create("Render Textures",
		//                     "{0} ({1})".Fmt(UnityEngine.SystemInfo.supportsRenderTextures ? "Yes" : "No",
		//                         UnityEngine.SystemInfo.supportedRenderTargetCount)),
		//                 InfoEntry.Create("3D Textures", UnityEngine.SystemInfo.supports3DTextures),
		//                 InfoEntry.Create("Compute Shaders", UnityEngine.SystemInfo.supportsComputeShaders),
		// #if !UNITY_5 && !UNITY_5_3_OR_NEWER
		//                 InfoEntry.Create("Vertex Programs", SystemInfo.supportsVertexPrograms),
		// #endif
		//                 InfoEntry.Create("Image Effects", UnityEngine.SystemInfo.supportsImageEffects),
		//                 InfoEntry.Create("Cubemaps", UnityEngine.SystemInfo.supportsRenderToCubemap),
		//                 InfoEntry.Create("Shadows", UnityEngine.SystemInfo.supportsShadows),
		//                 InfoEntry.Create("Stencil", UnityEngine.SystemInfo.supportsStencil),
		//                 InfoEntry.Create("Sparse Textures", UnityEngine.SystemInfo.supportsSparseTextures)
		//             });
		Dictionary_2_tFA6B6299B3F3C6E40BE8BC6446E4FA84E864D820* L_174 = __this->____info_0;
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_175 = (InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B*)SZArrayNew(InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_176 = L_175;
		String_t* L_177;
		L_177 = SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_178;
		L_178 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral0B5AFF7360D9A2572C53DEBA7CB218F5D672689D, L_177, (bool)0, NULL);
		NullCheck(L_176);
		ArrayElementTypeCheck (L_176, L_178);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(0), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_178);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_179 = L_176;
		String_t* L_180;
		L_180 = SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_181;
		L_181 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralF352595D654E0B647FA5E2180ADE7FE36D3A8A34, L_180, (bool)0, NULL);
		NullCheck(L_179);
		ArrayElementTypeCheck (L_179, L_181);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(1), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_181);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_182 = L_179;
		String_t* L_183;
		L_183 = SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C(NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_184;
		L_184 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralB4F6A2B1528F1875EE5A41A9FBEA6D27DD03AF43, L_183, (bool)0, NULL);
		NullCheck(L_182);
		ArrayElementTypeCheck (L_182, L_184);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(2), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_184);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_185 = L_182;
		int32_t L_186;
		L_186 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		int32_t L_187 = L_186;
		RuntimeObject* L_188 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_187);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_189;
		L_189 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral3B5F7BC59239981C1657A8A7F2562B1595A8467D, L_188, (bool)0, NULL);
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, L_189);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(3), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_189);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_190 = L_185;
		int32_t L_191;
		L_191 = SystemInfo_get_npotSupport_mFC585492C86980DFDF2DB779FC9059E752C0BEAE(NULL);
		int32_t L_192 = L_191;
		RuntimeObject* L_193 = Box(NPOTSupport_t6B3E25043FDF72E1E29C773947CA67098136BC36_il2cpp_TypeInfo_var, &L_192);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_194;
		L_194 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral00DB0EF248E66DE9F4DEE181D859C07B8B58B27B, L_193, (bool)0, NULL);
		NullCheck(L_190);
		ArrayElementTypeCheck (L_190, L_194);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(4), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_194);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_195 = L_190;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_196 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_197 = L_196;
		bool L_198;
		L_198 = SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105(NULL);
		G_B35_0 = 0;
		G_B35_1 = L_197;
		G_B35_2 = L_197;
		G_B35_3 = _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
		G_B35_4 = _stringLiteralF6D6891E1C77A3310A5092F5198F55D8101765F0;
		G_B35_5 = 5;
		G_B35_6 = L_195;
		G_B35_7 = L_195;
		G_B35_8 = _stringLiteralE44409E3E22722610F99DB393175D49B7072CFBB;
		G_B35_9 = L_174;
		if (L_198)
		{
			G_B36_0 = 0;
			G_B36_1 = L_197;
			G_B36_2 = L_197;
			G_B36_3 = _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
			G_B36_4 = _stringLiteralF6D6891E1C77A3310A5092F5198F55D8101765F0;
			G_B36_5 = 5;
			G_B36_6 = L_195;
			G_B36_7 = L_195;
			G_B36_8 = _stringLiteralE44409E3E22722610F99DB393175D49B7072CFBB;
			G_B36_9 = L_174;
			goto IL_0516;
		}
	}
	{
		G_B37_0 = _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		G_B37_4 = G_B35_3;
		G_B37_5 = G_B35_4;
		G_B37_6 = G_B35_5;
		G_B37_7 = G_B35_6;
		G_B37_8 = G_B35_7;
		G_B37_9 = G_B35_8;
		G_B37_10 = G_B35_9;
		goto IL_051b;
	}

IL_0516:
	{
		G_B37_0 = _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
		G_B37_4 = G_B36_3;
		G_B37_5 = G_B36_4;
		G_B37_6 = G_B36_5;
		G_B37_7 = G_B36_6;
		G_B37_8 = G_B36_7;
		G_B37_9 = G_B36_8;
		G_B37_10 = G_B36_9;
	}

IL_051b:
	{
		NullCheck(G_B37_2);
		ArrayElementTypeCheck (G_B37_2, G_B37_0);
		(G_B37_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B37_1), (RuntimeObject*)G_B37_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_199 = G_B37_3;
		int32_t L_200;
		L_200 = SystemInfo_get_supportedRenderTargetCount_mA8696B2D9AB343F9D04B0F4F14A4A1F7098DBC34(NULL);
		int32_t L_201 = L_200;
		RuntimeObject* L_202 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_201);
		NullCheck(L_199);
		ArrayElementTypeCheck (L_199, L_202);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_202);
		String_t* L_203;
		L_203 = SRFStringExtensions_Fmt_mDC3A183764FA93B17B0461570F9431D8B60D7E8A(G_B37_4, L_199, NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_204;
		L_204 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(G_B37_5, L_203, (bool)0, NULL);
		NullCheck(G_B37_7);
		ArrayElementTypeCheck (G_B37_7, L_204);
		(G_B37_7)->SetAt(static_cast<il2cpp_array_size_t>(G_B37_6), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_204);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_205 = G_B37_8;
		bool L_206;
		L_206 = SystemInfo_get_supports3DTextures_mA80B4F445CEEC84FFAA80B7F94C90EC270813CE3(NULL);
		bool L_207 = L_206;
		RuntimeObject* L_208 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_207);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_209;
		L_209 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral6310BCA9A5340BFD134FD5009595DF7685C76E57, L_208, (bool)0, NULL);
		NullCheck(L_205);
		ArrayElementTypeCheck (L_205, L_209);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(6), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_209);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_210 = L_205;
		bool L_211;
		L_211 = SystemInfo_get_supportsComputeShaders_m4A029D2F8FB9343E65E6F1C6F1C79DA41911F13A(NULL);
		bool L_212 = L_211;
		RuntimeObject* L_213 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_212);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_214;
		L_214 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral8CA4A64DAB7D941B6D64DC389E7457DB93D354A4, L_213, (bool)0, NULL);
		NullCheck(L_210);
		ArrayElementTypeCheck (L_210, L_214);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(7), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_214);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_215 = L_210;
		bool L_216;
		L_216 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		bool L_217 = L_216;
		RuntimeObject* L_218 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_217);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_219;
		L_219 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral0D524543128424DA4DCDBE32D4889C4F167F4B87, L_218, (bool)0, NULL);
		NullCheck(L_215);
		ArrayElementTypeCheck (L_215, L_219);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(8), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_219);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_220 = L_215;
		bool L_221;
		L_221 = SystemInfo_get_supportsRenderToCubemap_mA2B3335B7C248A1F117887E6ED24BDD6ACC8346F(NULL);
		bool L_222 = L_221;
		RuntimeObject* L_223 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_222);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_224;
		L_224 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralFDCB496AC472147DF60D19C783F823CAA381451E, L_223, (bool)0, NULL);
		NullCheck(L_220);
		ArrayElementTypeCheck (L_220, L_224);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_224);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_225 = L_220;
		bool L_226;
		L_226 = SystemInfo_get_supportsShadows_mC38F1230132BCB8059CD1C1E96D5106030166261(NULL);
		bool L_227 = L_226;
		RuntimeObject* L_228 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_227);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_229;
		L_229 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteral259F624CAB8A5EEE164893015C52B5AE616DD7D0, L_228, (bool)0, NULL);
		NullCheck(L_225);
		ArrayElementTypeCheck (L_225, L_229);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_229);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_230 = L_225;
		int32_t L_231;
		L_231 = SystemInfo_get_supportsStencil_m8012C26C42BCD3A3CB13B3668BE593B2BA92A789(NULL);
		int32_t L_232 = L_231;
		RuntimeObject* L_233 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_232);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_234;
		L_234 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralD7A6CB80426DCBF11B603E554B76B75C657506E4, L_233, (bool)0, NULL);
		NullCheck(L_230);
		ArrayElementTypeCheck (L_230, L_234);
		(L_230)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_234);
		InfoEntryU5BU5D_t31FBEB05CBFA94A7DB31D068E5BFC6F01D34ED6B* L_235 = L_230;
		bool L_236;
		L_236 = SystemInfo_get_supportsSparseTextures_mF9AF91C4712213C4305C29BDCDAC4EABA30DD007(NULL);
		bool L_237 = L_236;
		RuntimeObject* L_238 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_237);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_239;
		L_239 = InfoEntry_Create_m12700C199D13CF4DA7EF1A7913D4B05711C1B3E3(_stringLiteralA824662BDE770142A50F46AF6397A81DBA0A6551, L_238, (bool)0, NULL);
		NullCheck(L_235);
		ArrayElementTypeCheck (L_235, L_239);
		(L_235)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50*)L_239);
		NullCheck(G_B37_10);
		Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D(G_B37_10, G_B37_9, (RuntimeObject*)L_235, Dictionary_2_Add_mEEC6A0D70F190702F16A16DC5B5C3E0D2487925D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String SRDebugger.Services.Implementation.StandardSystemInformationService::GetCloudManifestPrettyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandardSystemInformationService_GetCloudManifestPrettyName_mBF0C0497AC20B78E02BD1F174BEFC257AEF6E154 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1821F646CFB5DD773411AD03961F65B0CC15DDCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E77C8D5904D216C0CB266860238E3274F6A9750);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22363BF58F994B1DA4D4FD5F66D80CF256EC53B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37C638884F0AF983CA3BD982A74F43DC0542E573);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E80AC34E4CAFA57DAA608CA95AC14CA648AAD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89E367D12A0F8E46E159CD87E621BA7B91E12E4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D38182AB23D87B0C46DAD13BD19E552C295DD8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB3DC5B15338827C4BBAD965646138C69223C405);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral3E80AC34E4CAFA57DAA608CA95AC14CA648AAD94, NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_2 = ___0_name;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCB3DC5B15338827C4BBAD965646138C69223C405, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___0_name;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral1821F646CFB5DD773411AD03961F65B0CC15DDCB, NULL);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_6 = ___0_name;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral37C638884F0AF983CA3BD982A74F43DC0542E573, NULL);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_004e;
	}

IL_0036:
	{
		// return "Commit";
		return _stringLiteral22363BF58F994B1DA4D4FD5F66D80CF256EC53B5;
	}

IL_003c:
	{
		// return "Branch";
		return _stringLiteral1E77C8D5904D216C0CB266860238E3274F6A9750;
	}

IL_0042:
	{
		// return "Build Target";
		return _stringLiteral8D38182AB23D87B0C46DAD13BD19E552C295DD8A;
	}

IL_0048:
	{
		// return "Build Date";
		return _stringLiteral89E367D12A0F8E46E159CD87E621BA7B91E12E4B;
	}

IL_004e:
	{
		// return name.Substring(0, 1).ToUpper() + name.Substring(1);
		String_t* L_8 = ___0_name;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_8, 0, 1, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_9, NULL);
		String_t* L_11 = ___0_name;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_11, 1, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_12, NULL);
		return L_13;
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
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2CEB66840A05BBAF2655F96E0AEA74253C793FC7 (U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SRDebugger.Services.Implementation.StandardSystemInformationService/<>c__DisplayClass4_0::<Add>b__0(SRDebugger.InfoEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CAddU3Eb__0_m916DF7DEFD186B308CC62EE0DB4DDD1AB81E3127 (U3CU3Ec__DisplayClass4_0_tBB16BAA630827A60BE34E26E23EEEA33514E8E6E* __this, InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* ___0_p, const RuntimeMethod* method) 
{
	{
		// if (list.Any(p => p.Title == info.Title))
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_0 = ___0_p;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InfoEntry_get_Title_m36F77A5C657D73714A077817C673E934D19F2A3D_inline(L_0, NULL);
		InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* L_2 = __this->___info_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InfoEntry_get_Title_m36F77A5C657D73714A077817C673E934D19F2A3D_inline(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		return L_4;
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
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7E79E00650D13E18FC73DA2BDFC2C2AC2E3E01AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* L_0 = (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0*)il2cpp_codegen_object_new(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1114F531DA5F12CC8A0147771555A65DF52CB44E(L_0, NULL);
		((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1114F531DA5F12CC8A0147771555A65DF52CB44E (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_0_mB06C74A51DFD775788C959CAA8252451E8472714 (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// InfoEntry.Create("Resolution", () => Screen.width + "x" + Screen.height),
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		return L_4;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_1_m58D86873A84209B4B0ED3BB4289AF3F28B366B53 (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InfoEntry.Create("DPI", () => Screen.dpi),
		float L_0;
		L_0 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_2_m6F9CD00A106957DD1C61106E7D9B3D8AAC7FB5EC (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InfoEntry.Create("Fullscreen", () => Screen.fullScreen),
		bool L_0;
		L_0 = Screen_get_fullScreen_m9B3B4F9FB4B6FD6E1AEF626736C4462A2FD7407C(NULL);
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_3_m803738A5F8537CED11339641E53380223461E9E3 (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InfoEntry.Create("Orientation", () => Screen.orientation)
		int32_t L_0;
		L_0 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_4_mFD342E0F3CC9D313C339DA8ED6F16191952D47A0 (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InfoEntry.Create("Play Time", () => Time.unscaledTime),
		float L_0;
		L_0 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_5_m487335BAE4AB30212E20762B009FBA4A1B2C6BB5 (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InfoEntry.Create("Level Play Time", () => Time.timeSinceLevelLoad),
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_6_m6186B2F734D59071EEDB30A17602B9ADE69DDEFE (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E4037C3CBD8F89F613F6B2A70829CD4DB86648);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var activeScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		// return "{0} (Index: {1})".Fmt(activeScene.name, activeScene.buildIndex);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = SRFStringExtensions_Fmt_mDC3A183764FA93B17B0461570F9431D8B60D7E8A(_stringLiteralF1E4037C3CBD8F89F613F6B2A70829CD4DB86648, L_4, NULL);
		return L_8;
	}
}
// System.Object SRDebugger.Services.Implementation.StandardSystemInformationService/<>c::<CreateDefaultSet>b__6_7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateDefaultSetU3Eb__6_7_mB42DC9F268C11496BD28E4CC820141DF0A2BE0B5 (U3CU3Ec_tAE0662E5A7386695F45E00D4FD8460AA58B902C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// QualitySettings.names[QualitySettings.GetQualityLevel()] + " (" +
		// QualitySettings.GetQualityLevel() + ")")
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = QualitySettings_get_names_m61A6181CC5752EE5405DB3A22F676C9F6861B02D(NULL);
		int32_t L_1;
		L_1 = QualitySettings_GetQualityLevel_m01019D879AF250BE95341490BF704E4A69B0497B(NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4;
		L_4 = QualitySettings_GetQualityLevel_m01019D879AF250BE95341490BF704E4A69B0497B(NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_3, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, L_5, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_6;
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
// System.Diagnostics.Stopwatch SRDebugger.Profiler.ProfilerCameraListener::get_Stopwatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ProfilerCameraListener_get_Stopwatch_m08E4C21BAFE6F9741150AB0ABACF0C231CE2419E (ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_stopwatch == null)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->____stopwatch_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _stopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_1, NULL);
		__this->____stopwatch_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stopwatch_5), (void*)L_1);
	}

IL_0013:
	{
		// return _stopwatch;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->____stopwatch_5;
		return L_2;
	}
}
// UnityEngine.Camera SRDebugger.Profiler.ProfilerCameraListener::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ProfilerCameraListener_get_Camera_m657413C30D3EF6CEAF6AE99794F1DFF5B8996604 (ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->____camera_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_4), (void*)L_2);
	}

IL_001a:
	{
		// return _camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->____camera_4;
		return L_3;
	}
}
// System.Void SRDebugger.Profiler.ProfilerCameraListener::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCameraListener_OnPreCull_m4A34CD7A1282CEA70F9F14F11302F46910BB65AB (ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral742E3BD69B2C05ADA8608A6EB02266681C8C0090);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log("OnPreCull");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral742E3BD69B2C05ADA8608A6EB02266681C8C0090, NULL);
		// if (!isActiveAndEnabled)
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// Stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1;
		L_1 = ProfilerCameraListener_get_Stopwatch_m08E4C21BAFE6F9741150AB0ABACF0C231CE2419E(__this, NULL);
		NullCheck(L_1);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_1, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerCameraListener::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCameraListener_OnPostRender_mECAC2C9946FCA050C6BC05D7169884D6EC8B00F0 (ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE7090E01CFC12689400AEFE575AC0F0346F7C02);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// UnityEngine.Debug.Log("OnPostRender");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBE7090E01CFC12689400AEFE575AC0F0346F7C02, NULL);
		// if (!isActiveAndEnabled)
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// var renderTime = _stopwatch.Elapsed.TotalSeconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = __this->____stopwatch_5;
		NullCheck(L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_1, NULL);
		V_1 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		V_0 = L_3;
		// Stopwatch.Stop();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4;
		L_4 = ProfilerCameraListener_get_Stopwatch_m08E4C21BAFE6F9741150AB0ABACF0C231CE2419E(__this, NULL);
		NullCheck(L_4);
		Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_4, NULL);
		// Stopwatch.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_5;
		L_5 = ProfilerCameraListener_get_Stopwatch_m08E4C21BAFE6F9741150AB0ABACF0C231CE2419E(__this, NULL);
		NullCheck(L_5);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_5, NULL);
		// if (RenderDurationCallback == null)
		Action_2_tA32F4EFC7166F2307471608913A5C43E19FB7710* L_6 = __this->___RenderDurationCallback_6;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// return;
		return;
	}

IL_004c:
	{
		// RenderDurationCallback(this, renderTime);
		Action_2_tA32F4EFC7166F2307471608913A5C43E19FB7710* L_7 = __this->___RenderDurationCallback_6;
		double L_8 = V_0;
		NullCheck(L_7);
		Action_2_Invoke_m7F779A46066A7C7C83D4F1E8A3E22D0BBEEFA6D6_inline(L_7, __this, L_8, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerCameraListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCameraListener__ctor_m89E1D734022FE85E5683A769F6CCB0FD25AFAD77 (ProfilerCameraListener_t873924BF5F14EEFBD4E2C4E95FF502EC18650DB5* __this, const RuntimeMethod* method) 
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
// System.Void SRDebugger.Profiler.ProfilerLateUpdateListener::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerLateUpdateListener_LateUpdate_mB7524C40F3935012E84DBCC8DA1081D3ADE58273 (ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* __this, const RuntimeMethod* method) 
{
	{
		// if (OnLateUpdate != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnLateUpdate_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// OnLateUpdate();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnLateUpdate_4;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerLateUpdateListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerLateUpdateListener__ctor_m6372DD42BD1BD156E1C5E67236639F8F728E173B (ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* __this, const RuntimeMethod* method) 
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
// System.Single SRDebugger.Profiler.ProfilerServiceImpl::get_AverageFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProfilerServiceImpl_get_AverageFrameTime_mA8671E779A0ED9E89BAA13030B04DF3A7C6D64F6 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	{
		// public float AverageFrameTime { get; private set; }
		float L_0 = __this->___U3CAverageFrameTimeU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::set_AverageFrameTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_set_AverageFrameTime_mCC7E3105235EFE04F75D07F700B9A3FDAF6290CC (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AverageFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAverageFrameTimeU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Single SRDebugger.Profiler.ProfilerServiceImpl::get_LastFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProfilerServiceImpl_get_LastFrameTime_m902A3A21E99BCCA7405F9008FB2DA8D8C6BC57A2 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	{
		// public float LastFrameTime { get; private set; }
		float L_0 = __this->___U3CLastFrameTimeU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::set_LastFrameTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_set_LastFrameTime_m54EB197F691ABAF479AC3D9AB5F8988491D9F714 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float LastFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CLastFrameTimeU3Ek__BackingField_12 = L_0;
		return;
	}
}
// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame> SRDebugger.Profiler.ProfilerServiceImpl::get_FrameBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frameBuffer; }
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = __this->____frameBuffer_14;
		return L_0;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_Awake_m86BBAD544DB897571DCB80A165914AF7B3B2F53A (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t9BDC3294EE499A1B9E5B491D35FFF32DB3103234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerServiceImpl_OnCameraPostRender_m97A1FD65FC9D77A14788454D08F862DFEB12CF0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerServiceImpl_OnCameraPreRender_mA200192D227D1D796C5E086F9BDDC2FC55B382F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerServiceImpl_OnLateUpdate_m4FBBEFB5598965A826A292C27C3EA6349D67DF48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D1FEEA7D88D4575BF106080D4295F1BC51F2F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC(__this, SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC_RuntimeMethod_var);
		// _lateUpdateListener = gameObject.AddComponent<ProfilerLateUpdateListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* L_1;
		L_1 = GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401(L_0, GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401_RuntimeMethod_var);
		__this->____lateUpdateListener_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lateUpdateListener_15), (void*)L_1);
		// _lateUpdateListener.OnLateUpdate = OnLateUpdate;
		ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* L_2 = __this->____lateUpdateListener_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)ProfilerServiceImpl_OnLateUpdate_m4FBBEFB5598965A826A292C27C3EA6349D67DF48_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		L_2->___OnLateUpdate_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnLateUpdate_4), (void*)L_3);
		// CachedGameObject.hideFlags = HideFlags.NotEditable;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = SRMonoBehaviour_get_CachedGameObject_m9B4A6CC57D00238F28D6405C3FF3EE766EA2DC09(__this, NULL);
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, 8, NULL);
		// CachedTransform.SetParent(Hierarchy.Get("SRDebugger"), true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = SRMonoBehaviour_get_CachedTransform_m94B58E6F71BCFC3EDD8750E0334F84584ABD48DC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Hierarchy_t9BDC3294EE499A1B9E5B491D35FFF32DB3103234_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Hierarchy_Get_mC18843395021DCD1B48E06FCEF99F5AC07AEDA5D(_stringLiteralE8D1FEEA7D88D4575BF106080D4295F1BC51F2F1, NULL);
		NullCheck(L_5);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_5, L_6, (bool)1, NULL);
		// Camera.onPreRender += OnCameraPreRender;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_7 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_8 = (CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)il2cpp_codegen_object_new(CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		CameraCallback__ctor_mB48D13F30E749B551E4692E4F2D762C375F62B41(L_8, __this, (intptr_t)((void*)ProfilerServiceImpl_OnCameraPreRender_mA200192D227D1D796C5E086F9BDDC2FC55B382F1_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5 = ((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_9, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPreRender_5), (void*)((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_9, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var)));
		// Camera.onPostRender += OnCameraPostRender;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_10 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPostRender_6;
		CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* L_11 = (CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)il2cpp_codegen_object_new(CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CameraCallback__ctor_mB48D13F30E749B551E4692E4F2D762C375F62B41(L_11, __this, (intptr_t)((void*)ProfilerServiceImpl_OnCameraPostRender_m97A1FD65FC9D77A14788454D08F862DFEB12CF0D_RuntimeMethod_var), NULL);
		Delegate_t* L_12;
		L_12 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_10, L_11, NULL);
		((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPostRender_6 = ((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_12, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields*)il2cpp_codegen_static_fields_for(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var))->___onPostRender_6), (void*)((CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD*)CastclassSealed((RuntimeObject*)L_12, CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_Update_m48755D5026F0278146D6F4DDF8F5C9352384EFBA (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// base.Update();
		SRMonoBehaviourEx_Update_m08103FA9B63AEBEDF53BFBDE2B38AF8B36D19A17(__this, NULL);
		// _camerasThisFrame = 0;
		__this->____camerasThisFrame_20 = 0;
		// EndFrame();
		ProfilerServiceImpl_EndFrame_m49B5E1F5C1C366DE1D99491443DF5B8B30EC85CE(__this, NULL);
		// if (FrameBuffer.Count > 0)
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0;
		L_0 = ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_0, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// var frame = FrameBuffer.Back();
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_2;
		L_2 = ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline(__this, NULL);
		NullCheck(L_2);
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_3;
		L_3 = CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6(L_2, CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6_RuntimeMethod_var);
		V_2 = L_3;
		// frame.FrameTime = Time.unscaledDeltaTime;
		float L_4;
		L_4 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		(&V_2)->___FrameTime_0 = ((double)L_4);
		// FrameBuffer[FrameBuffer.Count - 1] = frame;
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_5;
		L_5 = ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline(__this, NULL);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_6;
		L_6 = ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_6, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_8 = V_2;
		NullCheck(L_5);
		CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_8, CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32_RuntimeMethod_var);
	}

IL_0053:
	{
		// LastFrameTime = Time.unscaledDeltaTime;
		float L_9;
		L_9 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		ProfilerServiceImpl_set_LastFrameTime_m54EB197F691ABAF479AC3D9AB5F8988491D9F714_inline(__this, L_9, NULL);
		// var frameCount = Mathf.Min(20, FrameBuffer.Count);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_10;
		L_10 = ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_10, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		int32_t L_12;
		L_12 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)20), L_11, NULL);
		V_0 = L_12;
		// var f = 0d;
		V_1 = (0.0);
		// for (var i = 0; i < frameCount; i++)
		V_3 = 0;
		goto IL_00a5;
	}

IL_007f:
	{
		// f += FrameBuffer[FrameBuffer.Count - 1 - i].FrameTime;
		double L_13 = V_1;
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_14;
		L_14 = ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline(__this, NULL);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_15;
		L_15 = ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline(__this, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_15, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		int32_t L_17 = V_3;
		NullCheck(L_14);
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_18;
		L_18 = CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4(L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17)), CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4_RuntimeMethod_var);
		double L_19 = L_18.___FrameTime_0;
		V_1 = ((double)il2cpp_codegen_add(L_13, L_19));
		// for (var i = 0; i < frameCount; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00a5:
	{
		// for (var i = 0; i < frameCount; i++)
		int32_t L_21 = V_3;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_007f;
		}
	}
	{
		// AverageFrameTime = (float) f / frameCount;
		double L_23 = V_1;
		int32_t L_24 = V_0;
		ProfilerServiceImpl_set_AverageFrameTime_mCC7E3105235EFE04F75D07F700B9A3FDAF6290CC_inline(__this, ((float)(((float)L_23)/((float)L_24))), NULL);
		// _stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_25 = __this->____stopwatch_16;
		NullCheck(L_25);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_25, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::PushFrame(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_PushFrame_m4493EF2E10FB67FB2B94FFBD0A1CBC06497E44A0 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, double ___0_totalTime, double ___1_updateTime, double ___2_renderTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _frameBuffer.PushBack(new ProfilerFrame
		// {
		//     OtherTime = totalTime - updateTime - renderTime,
		//     UpdateTime = updateTime,
		//     RenderTime = renderTime
		// });
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = __this->____frameBuffer_14;
		il2cpp_codegen_initobj((&V_0), sizeof(ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE));
		double L_1 = ___0_totalTime;
		double L_2 = ___1_updateTime;
		double L_3 = ___2_renderTime;
		(&V_0)->___OtherTime_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1, L_2)), L_3));
		double L_4 = ___1_updateTime;
		(&V_0)->___UpdateTime_3 = L_4;
		double L_5 = ___2_renderTime;
		(&V_0)->___RenderTime_2 = L_5;
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_6 = V_0;
		NullCheck(L_0);
		CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23(L_0, L_6, CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::OnLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_OnLateUpdate_m4FBBEFB5598965A826A292C27C3EA6349D67DF48 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _updateDuration = _stopwatch.Elapsed.TotalSeconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->____stopwatch_16;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_0, NULL);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		__this->____updateDuration_17 = L_2;
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::OnCameraPreRender(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_OnCameraPreRender_mA200192D227D1D796C5E086F9BDDC2FC55B382F1 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_cam, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_camerasThisFrame == 0)
		int32_t L_0 = __this->____camerasThisFrame_20;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// _renderStartTime = _stopwatch.Elapsed.TotalSeconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = __this->____stopwatch_16;
		NullCheck(L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_1, NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		__this->____renderStartTime_18 = L_3;
	}

IL_0021:
	{
		// _camerasThisFrame++;
		int32_t L_4 = __this->____camerasThisFrame_20;
		__this->____camerasThisFrame_20 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::OnCameraPostRender(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_OnCameraPostRender_m97A1FD65FC9D77A14788454D08F862DFEB12CF0D (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_cam, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _renderDuration = _stopwatch.Elapsed.TotalSeconds - _renderStartTime;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->____stopwatch_16;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_0, NULL);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		double L_3 = __this->____renderStartTime_18;
		__this->____renderDuration_19 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::EndFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl_EndFrame_m49B5E1F5C1C366DE1D99491443DF5B8B30EC85CE (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		// if (_stopwatch.IsRunning)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->____stopwatch_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// PushFrame(_stopwatch.Elapsed.TotalSeconds, _updateDuration, _renderDuration);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->____stopwatch_16;
		NullCheck(L_2);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_2, NULL);
		V_0 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		double L_5 = __this->____updateDuration_17;
		double L_6 = __this->____renderDuration_19;
		ProfilerServiceImpl_PushFrame_m4493EF2E10FB67FB2B94FFBD0A1CBC06497E44A0(__this, L_4, L_5, L_6, NULL);
		// _stopwatch.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = __this->____stopwatch_16;
		NullCheck(L_7);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_7, NULL);
		// _stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_8 = __this->____stopwatch_16;
		NullCheck(L_8);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_8, NULL);
	}

IL_0048:
	{
		// _updateDuration = _renderDuration = 0;
		double L_9 = (0.0);
		V_1 = L_9;
		__this->____renderDuration_19 = L_9;
		double L_10 = V_1;
		__this->____updateDuration_17 = L_10;
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.ProfilerServiceImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerServiceImpl__ctor_m42642C52006FBF741FE1FF7E5D7944467B44B054 (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly CircularBuffer<ProfilerFrame>
		//     _frameBuffer = new CircularBuffer<ProfilerFrame>(FrameBufferSize);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*)il2cpp_codegen_object_new(CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39(L_0, ((int32_t)400), CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39_RuntimeMethod_var);
		__this->____frameBuffer_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____frameBuffer_14), (void*)L_0);
		// private readonly Stopwatch _stopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_1, NULL);
		__this->____stopwatch_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stopwatch_16), (void*)L_1);
		SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC(__this, SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC_RuntimeMethod_var);
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
// System.Single SRDebugger.Profiler.SRPProfilerService::get_AverageFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SRPProfilerService_get_AverageFrameTime_mB99E973CD8D49A2B88B53C57CE46B2CAFD7CF3FC (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	{
		// public float AverageFrameTime { get; private set; }
		float L_0 = __this->___U3CAverageFrameTimeU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::set_AverageFrameTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_set_AverageFrameTime_mA109C296FCB2F235B72B0D1689AE641E00ED9C79 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AverageFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAverageFrameTimeU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Single SRDebugger.Profiler.SRPProfilerService::get_LastFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SRPProfilerService_get_LastFrameTime_m88FD864B4D7D6195F70BE367039962F804677F32 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	{
		// public float LastFrameTime { get; private set; }
		float L_0 = __this->___U3CLastFrameTimeU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::set_LastFrameTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_set_LastFrameTime_m371B7F55EB6071C6BE1809F6FB4B66CCE95C1713 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float LastFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CLastFrameTimeU3Ek__BackingField_12 = L_0;
		return;
	}
}
// SRDebugger.CircularBuffer`1<SRDebugger.Services.ProfilerFrame> SRDebugger.Profiler.SRPProfilerService::get_FrameBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frameBuffer; }
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = __this->____frameBuffer_14;
		return L_0;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_Awake_mAD7E243A05B992D7382012F5E54C8DD7F88A7A78 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hierarchy_t9BDC3294EE499A1B9E5B491D35FFF32DB3103234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRPProfilerService_OnLateUpdate_m0ED473BDFED6D71D584BF10CBB3213130091BAF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRPProfilerService_RenderPipelineOnBeginFrameRendering_m42035B8421950BD46513981E2183F06849AE8B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D1FEEA7D88D4575BF106080D4295F1BC51F2F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC(__this, SRServiceBase_1_Awake_m6EEC99590E6386AE5F326922849EA835F07656EC_RuntimeMethod_var);
		// _lateUpdateListener = gameObject.AddComponent<ProfilerLateUpdateListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* L_1;
		L_1 = GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401(L_0, GameObject_AddComponent_TisProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765_m12963D80D32FE68DB3474341B4CEF1C9A9172401_RuntimeMethod_var);
		__this->____lateUpdateListener_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lateUpdateListener_15), (void*)L_1);
		// _lateUpdateListener.OnLateUpdate = OnLateUpdate;
		ProfilerLateUpdateListener_t95513080299C622EB8EAB7CDFA56EBA7E1269765* L_2 = __this->____lateUpdateListener_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)SRPProfilerService_OnLateUpdate_m0ED473BDFED6D71D584BF10CBB3213130091BAF3_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		L_2->___OnLateUpdate_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnLateUpdate_4), (void*)L_3);
		// CachedGameObject.hideFlags = HideFlags.NotEditable;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = SRMonoBehaviour_get_CachedGameObject_m9B4A6CC57D00238F28D6405C3FF3EE766EA2DC09(__this, NULL);
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, 8, NULL);
		// CachedTransform.SetParent(Hierarchy.Get("SRDebugger"), true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = SRMonoBehaviour_get_CachedTransform_m94B58E6F71BCFC3EDD8750E0334F84584ABD48DC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Hierarchy_t9BDC3294EE499A1B9E5B491D35FFF32DB3103234_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Hierarchy_Get_mC18843395021DCD1B48E06FCEF99F5AC07AEDA5D(_stringLiteralE8D1FEEA7D88D4575BF106080D4295F1BC51F2F1, NULL);
		NullCheck(L_5);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_5, L_6, (bool)1, NULL);
		// RenderPipelineManager.beginFrameRendering += RenderPipelineOnBeginFrameRendering;
		Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C* L_7 = (Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C*)il2cpp_codegen_object_new(Action_2_tBFF2A95C6B603A20229CAD6BD0749C19A9AC849C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_mDD0B44EA1C60ACB47ACDB66134FC9473D24E9FED(L_7, __this, (intptr_t)((void*)SRPProfilerService_RenderPipelineOnBeginFrameRendering_m42035B8421950BD46513981E2183F06849AE8B37_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_add_beginFrameRendering_m4269C8B1B2B0AB5CA56D91D9C8F10DFD8AABFC92(L_7, NULL);
		// StartCoroutine(EndOfFrameCoroutine());
		RuntimeObject* L_8;
		L_8 = SRPProfilerService_EndOfFrameCoroutine_mDD325702114C9BA40FFDC426EF86EB622D617E19(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_Update_m641875267E6CD01A4D3262D292AF46E8DCB075A9 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// base.Update();
		SRMonoBehaviourEx_Update_m08103FA9B63AEBEDF53BFBDE2B38AF8B36D19A17(__this, NULL);
		// EndFrame();
		SRPProfilerService_EndFrame_mC0F57C6756DD59BB8197879D4211C5F7C73B30FB(__this, NULL);
		// if (FrameBuffer.Count > 0)
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0;
		L_0 = SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_0, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// var frame = FrameBuffer.Back();
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_2;
		L_2 = SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline(__this, NULL);
		NullCheck(L_2);
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_3;
		L_3 = CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6(L_2, CircularBuffer_1_Back_m3D16836F793B3F101F204D97CEB4974FE9C11FA6_RuntimeMethod_var);
		V_2 = L_3;
		// frame.FrameTime = Time.unscaledDeltaTime;
		float L_4;
		L_4 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		(&V_2)->___FrameTime_0 = ((double)L_4);
		// FrameBuffer[FrameBuffer.Count - 1] = frame;
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_5;
		L_5 = SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline(__this, NULL);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_6;
		L_6 = SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_6, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_8 = V_2;
		NullCheck(L_5);
		CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_8, CircularBuffer_1_set_Item_m71991605EEFD0F88CC4CB70295BBE47FF8286A32_RuntimeMethod_var);
	}

IL_004c:
	{
		// LastFrameTime = Time.unscaledDeltaTime;
		float L_9;
		L_9 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		SRPProfilerService_set_LastFrameTime_m371B7F55EB6071C6BE1809F6FB4B66CCE95C1713_inline(__this, L_9, NULL);
		// var frameCount = Mathf.Min(20, FrameBuffer.Count);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_10;
		L_10 = SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_10, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		int32_t L_12;
		L_12 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)20), L_11, NULL);
		V_0 = L_12;
		// var f = 0d;
		V_1 = (0.0);
		// for (var i = 0; i < frameCount; i++)
		V_3 = 0;
		goto IL_009e;
	}

IL_0078:
	{
		// f += FrameBuffer[FrameBuffer.Count - 1 - i].FrameTime;
		double L_13 = V_1;
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_14;
		L_14 = SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline(__this, NULL);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_15;
		L_15 = SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline(__this, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_inline(L_15, CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_RuntimeMethod_var);
		int32_t L_17 = V_3;
		NullCheck(L_14);
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_18;
		L_18 = CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4(L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17)), CircularBuffer_1_get_Item_m36002F499F0B36AB4728DE5854241B07432BB7E4_RuntimeMethod_var);
		double L_19 = L_18.___FrameTime_0;
		V_1 = ((double)il2cpp_codegen_add(L_13, L_19));
		// for (var i = 0; i < frameCount; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_009e:
	{
		// for (var i = 0; i < frameCount; i++)
		int32_t L_21 = V_3;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0078;
		}
	}
	{
		// AverageFrameTime = (float)f / frameCount;
		double L_23 = V_1;
		int32_t L_24 = V_0;
		SRPProfilerService_set_AverageFrameTime_mA109C296FCB2F235B72B0D1689AE641E00ED9C79_inline(__this, ((float)(((float)L_23)/((float)L_24))), NULL);
		// _stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_25 = __this->____stopwatch_19;
		NullCheck(L_25);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_25, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SRDebugger.Profiler.SRPProfilerService::EndOfFrameCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRPProfilerService_EndOfFrameCoroutine_mDD325702114C9BA40FFDC426EF86EB622D617E19 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* L_0 = (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B*)il2cpp_codegen_object_new(U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEndOfFrameCoroutineU3Ed__19__ctor_m4F82DF2009D74E108E601C459F7C5161E57A9A6C(L_0, 0, NULL);
		U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::PushFrame(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_PushFrame_mAF209F601033633F84DBA354692AA9875958CAD2 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, double ___0_totalTime, double ___1_updateTime, double ___2_renderTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _frameBuffer.PushBack(new ProfilerFrame
		// {
		//     OtherTime = totalTime - updateTime - renderTime,
		//     UpdateTime = updateTime,
		//     RenderTime = renderTime
		// });
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = __this->____frameBuffer_14;
		il2cpp_codegen_initobj((&V_0), sizeof(ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE));
		double L_1 = ___0_totalTime;
		double L_2 = ___1_updateTime;
		double L_3 = ___2_renderTime;
		(&V_0)->___OtherTime_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1, L_2)), L_3));
		double L_4 = ___1_updateTime;
		(&V_0)->___UpdateTime_3 = L_4;
		double L_5 = ___2_renderTime;
		(&V_0)->___RenderTime_2 = L_5;
		ProfilerFrame_t004E05FC9A2B2A0B5B43E52001FCC37875BBFEFE L_6 = V_0;
		NullCheck(L_0);
		CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23(L_0, L_6, CircularBuffer_1_PushBack_mFFAC6F714833E8B35AFC28631B34BE9FB8CEAE23_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::OnLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_OnLateUpdate_m0ED473BDFED6D71D584BF10CBB3213130091BAF3 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _updateDuration = _stopwatch.Elapsed.TotalSeconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->____stopwatch_19;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_0, NULL);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		__this->____updateDuration_16 = L_2;
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::RenderPipelineOnBeginFrameRendering(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_RenderPipelineOnBeginFrameRendering_m42035B8421950BD46513981E2183F06849AE8B37 (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___1_cameras, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _renderStartTime = _stopwatch.Elapsed.TotalSeconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->____stopwatch_19;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_0, NULL);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		__this->____renderStartTime_17 = L_2;
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::EndFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService_EndFrame_mC0F57C6756DD59BB8197879D4211C5F7C73B30FB (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		// if (_stopwatch.IsRunning)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->____stopwatch_19;
		NullCheck(L_0);
		bool L_1;
		L_1 = Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// PushFrame(_stopwatch.Elapsed.TotalSeconds, _updateDuration, _renderDuration);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->____stopwatch_19;
		NullCheck(L_2);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_2, NULL);
		V_0 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		double L_5 = __this->____updateDuration_16;
		double L_6 = __this->____renderDuration_18;
		SRPProfilerService_PushFrame_mAF209F601033633F84DBA354692AA9875958CAD2(__this, L_4, L_5, L_6, NULL);
		// _stopwatch.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = __this->____stopwatch_19;
		NullCheck(L_7);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_7, NULL);
		// _stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_8 = __this->____stopwatch_19;
		NullCheck(L_8);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_8, NULL);
	}

IL_0048:
	{
		// _updateDuration = _renderDuration = 0;
		double L_9 = (0.0);
		V_1 = L_9;
		__this->____renderDuration_18 = L_9;
		double L_10 = V_1;
		__this->____updateDuration_16 = L_10;
		// }
		return;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRPProfilerService__ctor_mB32A7841B698CA1406F6E4EE1D7CC38602182E3C (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly CircularBuffer<ProfilerFrame> _frameBuffer = new CircularBuffer<ProfilerFrame>(FrameBufferSize);
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD*)il2cpp_codegen_object_new(CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39(L_0, ((int32_t)400), CircularBuffer_1__ctor_m92B5C5B7179122AA5F7F0073627D3CA1CAB4FB39_RuntimeMethod_var);
		__this->____frameBuffer_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____frameBuffer_14), (void*)L_0);
		// private readonly Stopwatch _stopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_1, NULL);
		__this->____stopwatch_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stopwatch_19), (void*)L_1);
		SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC(__this, SRServiceBase_1__ctor_mC2173FD582F21C65D8E4F72D0AEC774A437DFBEC_RuntimeMethod_var);
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
// System.Void SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameCoroutineU3Ed__19__ctor_m4F82DF2009D74E108E601C459F7C5161E57A9A6C (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameCoroutineU3Ed__19_System_IDisposable_Dispose_m8CEF4CC25BEFE62DECAF39F0279D9583B5F0649B (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndOfFrameCoroutineU3Ed__19_MoveNext_m5158A9051FC496F5CFAE7BC802F1CAC677CD7B36 (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* V_1 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _renderDuration = _stopwatch.Elapsed.TotalSeconds - _renderStartTime;
		SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* L_5 = V_1;
		SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* L_6 = V_1;
		NullCheck(L_6);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = L_6->____stopwatch_19;
		NullCheck(L_7);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_7, NULL);
		V_2 = L_8;
		double L_9;
		L_9 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_2), NULL);
		SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* L_10 = V_1;
		NullCheck(L_10);
		double L_11 = L_10->____renderStartTime_17;
		NullCheck(L_5);
		L_5->____renderDuration_18 = ((double)il2cpp_codegen_subtract(L_9, L_11));
		// while (true)
		goto IL_001e;
	}
}
// System.Object SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndOfFrameCoroutineU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB369EFB0AEEEE01B26086AFD59249F4D2956A13B (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mB084A91ACE2CCE3AAE4EB1F2FB2C3BDF1A930ACA (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndOfFrameCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mB084A91ACE2CCE3AAE4EB1F2FB2C3BDF1A930ACA_RuntimeMethod_var)));
	}
}
// System.Object SRDebugger.Profiler.SRPProfilerService/<EndOfFrameCoroutine>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndOfFrameCoroutineU3Ed__19_System_Collections_IEnumerator_get_Current_mD1632A36A69055859D5305A6E2F1A69C2FCC17D1 (U3CEndOfFrameCoroutineU3Ed__19_tF1E5271402B0D7BFC57D55C81C3F52925FC1B01B* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SRDebugger.Internal.SRDebugApiUtil::ParseErrorException(System.Net.WebException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRDebugApiUtil_ParseErrorException_mC6F36452D96A8216FD972D18BFA2A19FE94D23B5 (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* ___0_ex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37ACCC3A62D2755E3CE975CD5662B7CFB0EB15AA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (ex.Response == null)
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_0 = ___0_ex;
		NullCheck(L_0);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_1;
		L_1 = WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return ex.Message;
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_2 = ___0_ex;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_2);
		return L_3;
	}

IL_000f:
	{
	}
	try
	{// begin try (depth: 1)
		// var response = ReadResponseStream(ex.Response);
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_4 = ___0_ex;
		NullCheck(L_4);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_5;
		L_5 = WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline(L_4, NULL);
		String_t* L_6;
		L_6 = SRDebugApiUtil_ReadResponseStream_mE9FC424F47B67FE0F4F1A3030A4B601F9CF3B0B9(L_5, NULL);
		// return ParseErrorResponse(response);
		String_t* L_7;
		L_7 = SRDebugApiUtil_ParseErrorResponse_mCDCB7A160D69CC4266803BBF149EAFBBDD990F75(L_6, _stringLiteral37ACCC3A62D2755E3CE975CD5662B7CFB0EB15AA, NULL);
		V_0 = L_7;
		goto IL_0032;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Object)
		// catch
		// return ex.Message;
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_8 = ___0_ex;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		V_0 = L_9;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0032;
	}// end catch (depth: 1)

IL_0032:
	{
		// }
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String SRDebugger.Internal.SRDebugApiUtil::ParseErrorResponse(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRDebugApiUtil_ParseErrorResponse_mCDCB7A160D69CC4266803BBF149EAFBBDD990F75 (String_t* ___0_response, String_t* ___1_fallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DE1E906F1FC76998185695007FB138A32E707D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BBAA8AE21F00A2CED5FB34854B673FC39AE686E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	RuntimeObject* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	try
	{// begin try (depth: 1)
		{
			// var jsonTable = (Dictionary<string, object>) Json.Deserialize(response);
			String_t* L_0 = ___0_response;
			RuntimeObject* L_1;
			L_1 = Json_Deserialize_m4159CC5A44F99F4E01D0549B7D711C2C4904B20B(L_0, NULL);
			V_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)CastclassClass((RuntimeObject*)L_1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
			// var error = "";
			V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// error += jsonTable["errorMessage"];
			String_t* L_2 = V_1;
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = V_0;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			RuntimeObject* L_5 = L_4;
			G_B1_0 = L_5;
			G_B1_1 = L_2;
			if (L_5)
			{
				G_B2_0 = L_5;
				G_B2_1 = L_2;
				goto IL_0025_1;
			}
		}
		{
			G_B3_0 = ((String_t*)(NULL));
			G_B3_1 = G_B1_1;
			goto IL_002a_1;
		}

IL_0025_1:
		{
			NullCheck(G_B2_0);
			String_t* L_6;
			L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
			G_B3_0 = L_6;
			G_B3_1 = G_B2_1;
		}

IL_002a_1:
		{
			String_t* L_7;
			L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
			V_1 = L_7;
			// if (jsonTable.TryGetValue("errors", out value) && value is IList<object>)
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = V_0;
			NullCheck(L_8);
			bool L_9;
			L_9 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_8, _stringLiteral4BBAA8AE21F00A2CED5FB34854B673FC39AE686E, (&V_2), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
			if (!L_9)
			{
				goto IL_0092_1;
			}
		}
		{
			RuntimeObject* L_10 = V_2;
			if (!((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var)))
			{
				goto IL_0092_1;
			}
		}
		{
			// var errors = value as IList<object>;
			RuntimeObject* L_11 = V_2;
			// foreach (var e in errors)
			NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_11, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var)));
			RuntimeObject* L_12;
			L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var)));
			V_3 = L_12;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0088_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_13 = V_3;
						if (!L_13)
						{
							goto IL_0091_1;
						}
					}
					{
						RuntimeObject* L_14 = V_3;
						NullCheck(L_14);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
					}

IL_0091_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_007e_2;
				}

IL_0055_2:
				{
					// foreach (var e in errors)
					RuntimeObject* L_15 = V_3;
					NullCheck(L_15);
					RuntimeObject* L_16;
					L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var, L_15);
					V_4 = L_16;
					// error += "\n";
					String_t* L_17 = V_1;
					String_t* L_18;
					L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
					V_1 = L_18;
					// error += e;
					String_t* L_19 = V_1;
					RuntimeObject* L_20 = V_4;
					G_B8_0 = L_19;
					if (L_20)
					{
						G_B9_0 = L_19;
						goto IL_0071_2;
					}
				}
				{
					G_B10_0 = ((String_t*)(NULL));
					G_B10_1 = G_B8_0;
					goto IL_0078_2;
				}

IL_0071_2:
				{
					RuntimeObject* L_21 = V_4;
					NullCheck(L_21);
					String_t* L_22;
					L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
					G_B10_0 = L_22;
					G_B10_1 = G_B9_0;
				}

IL_0078_2:
				{
					String_t* L_23;
					L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B10_1, G_B10_0, NULL);
					V_1 = L_23;
				}

IL_007e_2:
				{
					// foreach (var e in errors)
					RuntimeObject* L_24 = V_3;
					NullCheck(L_24);
					bool L_25;
					L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
					if (L_25)
					{
						goto IL_0055_2;
					}
				}
				{
					goto IL_0092_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0092_1:
		{
			// return error;
			String_t* L_26 = V_1;
			V_5 = L_26;
			goto IL_00af;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{// begin catch(System.Object)
		{
			// catch
			// if (response.Contains("<html>"))
			String_t* L_27 = ___0_response;
			NullCheck(L_27);
			bool L_28;
			L_28 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6277078585E964B9C9DCAFD87BC3AADEA267B9C)), NULL);
			if (!L_28)
			{
				goto IL_00aa;
			}
		}
		{
			// return fallback;
			String_t* L_29 = ___1_fallback;
			V_5 = L_29;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00af;
		}

IL_00aa:
		{
			// return response;
			String_t* L_30 = ___0_response;
			V_5 = L_30;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00af;
		}
	}// end catch (depth: 1)

IL_00af:
	{
		// }
		String_t* L_31 = V_5;
		return L_31;
	}
}
// System.Boolean SRDebugger.Internal.SRDebugApiUtil::ReadResponse(System.Net.HttpWebRequest,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SRDebugApiUtil_ReadResponse_mF5C375FB81B44B7C8EC8E530163A056EB101215C (HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___0_request, String_t** ___1_result, const RuntimeMethod* method) 
{
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* V_0 = NULL;
	bool V_1 = false;
	WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var response = request.GetResponse();
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_0 = ___0_request;
		NullCheck(L_0);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_1;
		L_1 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(20 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_0);
		V_0 = L_1;
		// result = ReadResponseStream(response);
		String_t** L_2 = ___1_result;
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_3 = V_0;
		String_t* L_4;
		L_4 = SRDebugApiUtil_ReadResponseStream_mE9FC424F47B67FE0F4F1A3030A4B601F9CF3B0B9(L_3, NULL);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		// return true;
		V_1 = (bool)1;
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0013;
		}
		throw e;
	}

CATCH_0013:
	{// begin catch(System.Net.WebException)
		// catch (WebException e)
		V_2 = ((WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*)IL2CPP_GET_ACTIVE_EXCEPTION(WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8*));
		// result = ParseErrorException(e);
		String_t** L_5 = ___1_result;
		WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* L_6 = V_2;
		String_t* L_7;
		L_7 = SRDebugApiUtil_ParseErrorException_mC6F36452D96A8216FD972D18BFA2A19FE94D23B5(L_6, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		// return false;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.String SRDebugger.Internal.SRDebugApiUtil::ReadResponseStream(System.Net.WebResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRDebugApiUtil_ReadResponseStream_mE9FC424F47B67FE0F4F1A3030A4B601F9CF3B0B9 (WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// using (var responseSteam = stream.GetResponseStream())
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_0 = ___0_stream;
		NullCheck(L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1;
		L_1 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(12 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002a;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var streamReader = new StreamReader(responseSteam))
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = V_0;
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_5 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_5, L_4, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0017_1:
					{// begin finally (depth: 2)
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = V_1;
							if (!L_6)
							{
								goto IL_0020_1;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = V_1;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_0020_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// return streamReader.ReadToEnd();
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_8 = V_1;
					NullCheck(L_8);
					String_t* L_9;
					L_9 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadToEnd() */, L_8);
					V_2 = L_9;
					goto IL_002b;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// }
		String_t* L_10 = V_2;
		return L_10;
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
// System.Void SRDebugger.Internal.BugReportApi::.ctor(SRDebugger.Services.BugReport,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportApi__ctor_mDD72860F800A016EB140F35930667E4F8D894532 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* ___0_report, String_t* ___1_apiKey, const RuntimeMethod* method) 
{
	{
		// public BugReportApi(BugReport report, string apiKey)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _bugReport = report;
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_0 = ___0_report;
		__this->____bugReport_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bugReport_1), (void*)L_0);
		// _apiKey = apiKey;
		String_t* L_1 = ___1_apiKey;
		__this->____apiKey_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____apiKey_0), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean SRDebugger.Internal.BugReportApi::get_IsComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BugReportApi_get_IsComplete_m3CE20BE0FD338A9F5D6AF457B07DE5CAEC99A591 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsComplete { get; private set; }
		bool L_0 = __this->___U3CIsCompleteU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.BugReportApi::set_IsComplete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportApi_set_IsComplete_mAC4E6F91C5E62038CCC04F2D0473415BBE207388 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsComplete { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompleteU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean SRDebugger.Internal.BugReportApi::get_WasSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BugReportApi_get_WasSuccessful_m9EB23180C86BB8292932AC52EC350EFBBD871603 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, const RuntimeMethod* method) 
{
	{
		// public bool WasSuccessful { get; private set; }
		bool L_0 = __this->___U3CWasSuccessfulU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.BugReportApi::set_WasSuccessful(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportApi_set_WasSuccessful_mD27A79A4761D6B8D9DCB9E7E31A26A17E0BCED12 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool WasSuccessful { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CWasSuccessfulU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String SRDebugger.Internal.BugReportApi::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugReportApi_get_ErrorMessage_m83ABFF3C3A41C9F30880E80918095E5AD2D874DB (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get; private set; }
		String_t* L_0 = __this->___U3CErrorMessageU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.BugReportApi::set_ErrorMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorMessageU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorMessageU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Single SRDebugger.Internal.BugReportApi::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BugReportApi_get_Progress_mE3C5A79FA3FB7D8AB1483ED5D09F048739F94FF6 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, const RuntimeMethod* method) 
{
	{
		// if (_webRequest == null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->____webRequest_3;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_000e:
	{
		// return Mathf.Clamp01(_webRequest.uploadProgress);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->____webRequest_3;
		NullCheck(L_1);
		float L_2;
		L_2 = UnityWebRequest_get_uploadProgress_m3D2DCD424E0435ABAC0F84EE857121E839652F95(L_1, NULL);
		float L_3;
		L_3 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_2, NULL);
		return L_3;
	}
}
// System.Collections.IEnumerator SRDebugger.Internal.BugReportApi::Submit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BugReportApi_Submit_m6D5E5EFDBC9F1049A8917D2712C0BA05F3C39191 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* L_0 = (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8*)il2cpp_codegen_object_new(U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSubmitU3Ed__19__ctor_m4B202650863D606CE20DD0B2AE02DBA58407CFC5(L_0, 0, NULL);
		U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SRDebugger.Internal.BugReportApi::SetCompletionState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444 (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_wasSuccessful, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06233BCF7C676FD672C0CFC60FBB62ECBADBDA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bugReport.ScreenshotData = null;
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_0 = __this->____bugReport_1;
		NullCheck(L_0);
		L_0->___ScreenshotData_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ScreenshotData_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// WasSuccessful = wasSuccessful;
		bool L_1 = ___0_wasSuccessful;
		BugReportApi_set_WasSuccessful_mD27A79A4761D6B8D9DCB9E7E31A26A17E0BCED12_inline(__this, L_1, NULL);
		// IsComplete = true;
		BugReportApi_set_IsComplete_mAC4E6F91C5E62038CCC04F2D0473415BBE207388_inline(__this, (bool)1, NULL);
		// _isBusy = false;
		__this->____isBusy_2 = (bool)0;
		// if (!wasSuccessful)
		bool L_2 = ___0_wasSuccessful;
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError("Bug Reporter Error: " + ErrorMessage);
		String_t* L_3;
		L_3 = BugReportApi_get_ErrorMessage_m83ABFF3C3A41C9F30880E80918095E5AD2D874DB_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE06233BCF7C676FD672C0CFC60FBB62ECBADBDA5, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.String SRDebugger.Internal.BugReportApi::BuildJsonRequest(SRDebugger.Services.BugReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugReportApi_BuildJsonRequest_m9758888595A6FBEF217AD657C1D7A4E55962F29F (BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* ___0_report, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285A2B564964942D7A47F406823353C5AD45144F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral540FAB15DE2300A364D718F90A3635887FB3D814);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8796FAC5F0D6C95B226E72C72868FFF40C8D6987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA820DEF30222215CAA4A9E1EA39FAB5001C00B3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD1A526F409AD2387D44892AE83EAFF3865EC5E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D79C7913C186293BAEB9DBCA35212C2B8F3444);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	{
		// var ht = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		V_0 = L_0;
		// ht.Add("userEmail", report.Email);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = V_0;
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_2 = ___0_report;
		NullCheck(L_2);
		String_t* L_3 = L_2->___Email_1;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_1, _stringLiteralE7D79C7913C186293BAEB9DBCA35212C2B8F3444, L_3);
		// ht.Add("userDescription", report.UserDescription);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = V_0;
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_5 = ___0_report;
		NullCheck(L_5);
		String_t* L_6 = L_5->___UserDescription_4;
		NullCheck(L_4);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_4, _stringLiteralBD1A526F409AD2387D44892AE83EAFF3865EC5E0, L_6);
		// ht.Add("console", CreateConsoleDump());
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = BugReportApi_CreateConsoleDump_mFE85CBB3FD594049F0654A1B9A64411C24C9BA2C(NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_7, _stringLiteral540FAB15DE2300A364D718F90A3635887FB3D814, L_8);
		// var d = new Dictionary<string, object> {{"", SRServiceManager.GetPlayerData.Invoke()}};
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_9, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = L_9;
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_11 = ((SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_StaticFields*)il2cpp_codegen_static_fields_for(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var))->___GetPlayerData_11;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Func_1_Invoke_m731CAFD8102845345E28040B091301A1B469C9DE_inline(L_11, NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_12, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_1 = L_10;
		// report.SystemInformation.Add("PlayerData", d);
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_13 = ___0_report;
		NullCheck(L_13);
		Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* L_14 = L_13->___SystemInformation_3;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = V_1;
		NullCheck(L_14);
		Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5(L_14, _stringLiteral8796FAC5F0D6C95B226E72C72868FFF40C8D6987, L_15, Dictionary_2_Add_m8F293AA9A84828C14F492EAC1E838F6F37022EE5_RuntimeMethod_var);
		// ht.Add("systemInformation", report.SystemInformation);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_16 = V_0;
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_17 = ___0_report;
		NullCheck(L_17);
		Dictionary_2_t8AEFEA4891FEBB224C85ADA66FB2500D9769EDC2* L_18 = L_17->___SystemInformation_3;
		NullCheck(L_16);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_16, _stringLiteralA820DEF30222215CAA4A9E1EA39FAB5001C00B3F, L_18);
		// if (report.ScreenshotData != null)
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_19 = ___0_report;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19->___ScreenshotData_2;
		if (!L_20)
		{
			goto IL_0093;
		}
	}
	{
		// ht.Add("screenshot", Convert.ToBase64String(report.ScreenshotData));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_21 = V_0;
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_22 = ___0_report;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_22->___ScreenshotData_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_23, NULL);
		NullCheck(L_21);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_21, _stringLiteral285A2B564964942D7A47F406823353C5AD45144F, L_24);
	}

IL_0093:
	{
		// var json = Json.Serialize(ht);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_25 = V_0;
		String_t* L_26;
		L_26 = Json_Serialize_m43B383C2B548590C4192298F031F09943C7C9C97(L_25, NULL);
		// return json;
		return L_26;
	}
}
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<System.String>> SRDebugger.Internal.BugReportApi::CreateConsoleDump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BugReportApi_CreateConsoleDump_mFE85CBB3FD594049F0654A1B9A64411C24C9BA2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t841A81850A1EC7B22CB4EB80731C759D67895D4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9A97DD1070D5E1C432D04B9740F64D346594778F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2A824432281C9A9C273B4CF0A7DC4CA03C742E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB1B1CE1C1AD9A2DB1E4AAA7CFCE06797D9D15336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* V_2 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	{
		// var list = new List<IList<string>>();
		List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF* L_0 = (List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF*)il2cpp_codegen_object_new(List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB1B1CE1C1AD9A2DB1E4AAA7CFCE06797D9D15336(L_0, List_1__ctor_mB1B1CE1C1AD9A2DB1E4AAA7CFCE06797D9D15336_RuntimeMethod_var);
		V_0 = L_0;
		// var consoleLog = Service.Console.AllEntries;
		RuntimeObject* L_1;
		L_1 = Service_get_Console_m990F21C7FDAB261C7831A050505DE509BE2BD0C9(NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* SRDebugger.IReadOnlyList`1<SRDebugger.Services.ConsoleEntry> SRDebugger.Services.IConsoleService::get_AllEntries() */, IConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_il2cpp_TypeInfo_var, L_1);
		// foreach (var consoleEntry in consoleLog)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SRDebugger.Services.ConsoleEntry>::GetEnumerator() */, IEnumerable_1_t841A81850A1EC7B22CB4EB80731C759D67895D4A_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0088;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0088:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0075_1;
			}

IL_0018_1:
			{
				// foreach (var consoleEntry in consoleLog)
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_7;
				L_7 = InterfaceFuncInvoker0< ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SRDebugger.Services.ConsoleEntry>::get_Current() */, IEnumerator_1_t9A97DD1070D5E1C432D04B9740F64D346594778F_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// var entry = new List<string>();
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_8, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_3 = L_8;
				// entry.Add(consoleEntry.LogType.ToString());
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_3;
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_10 = V_2;
				NullCheck(L_10);
				int32_t* L_11 = (&L_10->___LogType_5);
				Il2CppFakeBox<int32_t> L_12(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, L_11);
				String_t* L_13;
				L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
				NullCheck(L_9);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// entry.Add(consoleEntry.Message);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_3;
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_15 = V_2;
				NullCheck(L_15);
				String_t* L_16 = L_15->___Message_6;
				NullCheck(L_14);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// entry.Add(consoleEntry.StackTrace);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_3;
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_18 = V_2;
				NullCheck(L_18);
				String_t* L_19 = L_18->___StackTrace_7;
				NullCheck(L_17);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, L_19, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// if (consoleEntry.Count > 1)
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_20 = V_2;
				NullCheck(L_20);
				int32_t L_21 = L_20->___Count_4;
				if ((((int32_t)L_21) <= ((int32_t)1)))
				{
					goto IL_006e_1;
				}
			}
			{
				// entry.Add(consoleEntry.Count.ToString());
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = V_3;
				ConsoleEntry_tEAC8429C12A8864CF8C685049112D66DE066CF7E* L_23 = V_2;
				NullCheck(L_23);
				int32_t* L_24 = (&L_23->___Count_4);
				String_t* L_25;
				L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
				NullCheck(L_22);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, L_25, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_006e_1:
			{
				// list.Add(entry);
				List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF* L_26 = V_0;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = V_3;
				NullCheck(L_26);
				List_1_Add_m2A824432281C9A9C273B4CF0A7DC4CA03C742E55_inline(L_26, L_27, List_1_Add_m2A824432281C9A9C273B4CF0A7DC4CA03C742E55_RuntimeMethod_var);
			}

IL_0075_1:
			{
				// foreach (var consoleEntry in consoleLog)
				RuntimeObject* L_28 = V_1;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// return list;
		List_1_tF46A7FAA5A9AF25F120A3DE3E0955C37B63E3CBF* L_30 = V_0;
		return L_30;
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
// System.Void SRDebugger.Internal.BugReportApi/<Submit>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubmitU3Ed__19__ctor_m4B202650863D606CE20DD0B2AE02DBA58407CFC5 (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SRDebugger.Internal.BugReportApi/<Submit>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubmitU3Ed__19_System_IDisposable_Dispose_mCC267FDE645823E06290350C0E42C38CFEC3268F (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SRDebugger.Internal.BugReportApi/<Submit>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSubmitU3Ed__19_MoveNext_m8BBA8C799E173A5D53534BB21015F9D9103AFBD3 (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17471421ADABB6FA2E2BDAAFFD1E87AD00FE95A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C383529B6FD1D83DCDC0376F9F820FABB9A6C64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0ED9AD92B5ED567FD88A0CE10068B29B631F1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0DDD731583C6D557F1C85F454D75EE8F61D3BAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5B83DD1DFEB4C809D0DEE277711945702971ECB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* V_2 = NULL;
	String_t* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	String_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_1 = L_0;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_1 = __this->___U3CU3E4__this_2;
		V_2 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0145;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_isBusy)
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_4 = V_2;
		NullCheck(L_4);
		bool L_5 = L_4->____isBusy_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// throw new InvalidOperationException("BugReportApi is already sending a bug report");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF700ED6398D33BEEEB8EE97EF2D042B2AD837B2C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSubmitU3Ed__19_MoveNext_m8BBA8C799E173A5D53534BB21015F9D9103AFBD3_RuntimeMethod_var)));
	}

IL_0034:
	{
		// _isBusy = true;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_7 = V_2;
		NullCheck(L_7);
		L_7->____isBusy_2 = (bool)1;
		// ErrorMessage = "";
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_8 = V_2;
		NullCheck(L_8);
		BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E_inline(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// IsComplete = false;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_9 = V_2;
		NullCheck(L_9);
		BugReportApi_set_IsComplete_mAC4E6F91C5E62038CCC04F2D0473415BBE207388_inline(L_9, (bool)0, NULL);
		// WasSuccessful = false;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_10 = V_2;
		NullCheck(L_10);
		BugReportApi_set_WasSuccessful_mD27A79A4761D6B8D9DCB9E7E31A26A17E0BCED12_inline(L_10, (bool)0, NULL);
		// _webRequest = null;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_11 = V_2;
		NullCheck(L_11);
		L_11->____webRequest_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->____webRequest_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
	}
	try
	{// begin try (depth: 1)
		// json = BuildJsonRequest(_bugReport);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_12 = V_2;
		NullCheck(L_12);
		BugReport_t87D8F6DF95574F5AA3F3975A9B281CB23E1516FE* L_13 = L_12->____bugReport_1;
		String_t* L_14;
		L_14 = BugReportApi_BuildJsonRequest_m9758888595A6FBEF217AD657C1D7A4E55962F29F(L_13, NULL);
		V_3 = L_14;
		// jsonBytes = Encoding.UTF8.GetBytes(json);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_16 = V_3;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_15, L_16);
		V_4 = L_17;
		// }
		goto IL_0094;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Exception)
		// ErrorMessage = "Error building bug report.";
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_18 = V_2;
		NullCheck(L_18);
		BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E_inline(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48A35EC2092DB28A4C0E02293DD5DC74A0864EF0)), NULL);
		// Debug.LogError(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// SetCompletionState(false);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_19 = V_2;
		NullCheck(L_19);
		BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444(L_19, (bool)0, NULL);
		// yield break;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e6;
	}// end catch (depth: 1)

IL_0094:
	{
	}
	try
	{// begin try (depth: 1)
		// _webRequest = new UnityWebRequest(SRDebugApi.BugReportEndPoint, UnityWebRequest.kHttpVerbPOST,
		//     new DownloadHandlerBuffer(), new UploadHandlerRaw(jsonBytes)
		//     {
		//         contentType = jsonContentType
		//     });
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_20 = V_2;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_21 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_21, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_23 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_23, L_22, NULL);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_24 = L_23;
		NullCheck(L_24);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_24, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A(L_25, _stringLiteralE5B83DD1DFEB4C809D0DEE277711945702971ECB, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_21, L_24, NULL);
		NullCheck(L_20);
		L_20->____webRequest_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____webRequest_3), (void*)L_25);
		// _webRequest.SetRequestHeader("Accept", jsonContentType);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_26 = V_2;
		NullCheck(L_26);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = L_26->____webRequest_3;
		NullCheck(L_27);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_27, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// _webRequest.SetRequestHeader("X-ApiKey", _apiKey);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_28 = V_2;
		NullCheck(L_28);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = L_28->____webRequest_3;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_30 = V_2;
		NullCheck(L_30);
		String_t* L_31 = L_30->____apiKey_0;
		NullCheck(L_29);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_29, _stringLiteralD0DDD731583C6D557F1C85F454D75EE8F61D3BAE, L_31, NULL);
		// }
		goto IL_011a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ee;
		}
		throw e;
	}

CATCH_00ee:
	{// begin catch(System.Exception)
		{
			// ErrorMessage = "Error building bug report request.";
			BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_32 = V_2;
			NullCheck(L_32);
			BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E_inline(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA36810F90782F255182E394B91B39FE70AE1FDD4)), NULL);
			// Debug.LogError(e);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
			// if (_webRequest != null)
			BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_33 = V_2;
			NullCheck(L_33);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_34 = L_33->____webRequest_3;
			if (!L_34)
			{
				goto IL_0111;
			}
		}
		{
			// _webRequest.Dispose();
			BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_35 = V_2;
			NullCheck(L_35);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_36 = L_35->____webRequest_3;
			NullCheck(L_36);
			UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_36, NULL);
		}

IL_0111:
		{
			// SetCompletionState(false);
			BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_37 = V_2;
			NullCheck(L_37);
			BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444(L_37, (bool)0, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_011a;
		}
	}// end catch (depth: 1)

IL_011a:
	{
		// if (_webRequest == null)
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_38 = V_2;
		NullCheck(L_38);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_39 = L_38->____webRequest_3;
		if (L_39)
		{
			goto IL_012b;
		}
	}
	{
		// SetCompletionState(false);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_40 = V_2;
		NullCheck(L_40);
		BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444(L_40, (bool)0, NULL);
		// yield break;
		return (bool)0;
	}

IL_012b:
	{
		// yield return _webRequest.SendWebRequest();
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_41 = V_2;
		NullCheck(L_41);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_42 = L_41->____webRequest_3;
		NullCheck(L_42);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_43;
		L_43 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_42, NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0145:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_webRequest.isNetworkError)
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_44 = V_2;
		NullCheck(L_44);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_45 = L_44->____webRequest_3;
		NullCheck(L_45);
		bool L_46;
		L_46 = UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0(L_45, NULL);
		if (!L_46)
		{
			goto IL_0188;
		}
	}
	{
		// ErrorMessage = "Request Error: " + _webRequest.error;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_47 = V_2;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_48 = V_2;
		NullCheck(L_48);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_49 = L_48->____webRequest_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_49, NULL);
		String_t* L_51;
		L_51 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral17471421ADABB6FA2E2BDAAFFD1E87AD00FE95A9, L_50, NULL);
		NullCheck(L_47);
		BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E_inline(L_47, L_51, NULL);
		// SetCompletionState(false);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_52 = V_2;
		NullCheck(L_52);
		BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444(L_52, (bool)0, NULL);
		// _webRequest.Dispose();
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_53 = V_2;
		NullCheck(L_53);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_54 = L_53->____webRequest_3;
		NullCheck(L_54);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_54, NULL);
		// yield break;
		return (bool)0;
	}

IL_0188:
	{
		// long responseCode = _webRequest.responseCode;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_55 = V_2;
		NullCheck(L_55);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_56 = L_55->____webRequest_3;
		NullCheck(L_56);
		int64_t L_57;
		L_57 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_56, NULL);
		// var responseJson = _webRequest.downloadHandler.text;
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_58 = V_2;
		NullCheck(L_58);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_59 = L_58->____webRequest_3;
		NullCheck(L_59);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_60;
		L_60 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_59, NULL);
		NullCheck(L_60);
		String_t* L_61;
		L_61 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_60, NULL);
		V_5 = L_61;
		// _webRequest.Dispose();
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_62 = V_2;
		NullCheck(L_62);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_63 = L_62->____webRequest_3;
		NullCheck(L_63);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_63, NULL);
		// if (responseCode != 200)
		if ((((int64_t)L_57) == ((int64_t)((int64_t)((int32_t)200)))))
		{
			goto IL_01dd;
		}
	}
	{
		// ErrorMessage = "Server: " + SRDebugApiUtil.ParseErrorResponse(responseJson, "Unknown response from server");
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_64 = V_2;
		String_t* L_65 = V_5;
		String_t* L_66;
		L_66 = SRDebugApiUtil_ParseErrorResponse_mCDCB7A160D69CC4266803BBF149EAFBBDD990F75(L_65, _stringLiteralCE0ED9AD92B5ED567FD88A0CE10068B29B631F1F, NULL);
		String_t* L_67;
		L_67 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2C383529B6FD1D83DCDC0376F9F820FABB9A6C64, L_66, NULL);
		NullCheck(L_64);
		BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E_inline(L_64, L_67, NULL);
		// SetCompletionState(false);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_68 = V_2;
		NullCheck(L_68);
		BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444(L_68, (bool)0, NULL);
		// yield break;
		return (bool)0;
	}

IL_01dd:
	{
		// SetCompletionState(true);
		BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* L_69 = V_2;
		NullCheck(L_69);
		BugReportApi_SetCompletionState_m172ABCCB3BC069E4BDA97FAE25C30634B4258444(L_69, (bool)1, NULL);
		// }
		return (bool)0;
	}

IL_01e6:
	{
		bool L_70 = V_0;
		return L_70;
	}
}
// System.Object SRDebugger.Internal.BugReportApi/<Submit>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSubmitU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47B1686B9541AA93C17790E9145F4D14CE506E55 (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.BugReportApi/<Submit>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubmitU3Ed__19_System_Collections_IEnumerator_Reset_m495C0B3D2E7ECEF987BB036E68C191AAC9CC9EF8 (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSubmitU3Ed__19_System_Collections_IEnumerator_Reset_m495C0B3D2E7ECEF987BB036E68C191AAC9CC9EF8_RuntimeMethod_var)));
	}
}
// System.Object SRDebugger.Internal.BugReportApi/<Submit>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSubmitU3Ed__19_System_Collections_IEnumerator_get_Current_m301E99BD725056C776E14370F80F11F994A332A2 (U3CSubmitU3Ed__19_t6E81CC41BA705FC77D4947046BCE7BEA3C95E2A8* __this, const RuntimeMethod* method) 
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
// System.Collections.IEnumerator SRDebugger.Internal.BugReportScreenshotUtil::ScreenshotCaptureCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BugReportScreenshotUtil_ScreenshotCaptureCo_m7E699778BEB396D7D07ACFAF0D4B328978CBD9B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* L_0 = (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303*)il2cpp_codegen_object_new(U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CScreenshotCaptureCoU3Ed__1__ctor_m7D338844F4009EBC541C9B68823F8D2266C27EEB(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void SRDebugger.Internal.BugReportScreenshotUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugReportScreenshotUtil__ctor_mAE15BE09F39F40D986F78DC45DB6C0F89B3DF06C (BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E* __this, const RuntimeMethod* method) 
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
// System.Void SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenshotCaptureCoU3Ed__1__ctor_m7D338844F4009EBC541C9B68823F8D2266C27EEB (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenshotCaptureCoU3Ed__1_System_IDisposable_Dispose_m5B7CE17F2F14AA800B7CAF60595DB20ADABE27FE (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScreenshotCaptureCoU3Ed__1_MoveNext_m0C78DADB3F70373D3B8D4EC83618D975FB3120F2 (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CEFF85110CDDBDC0AB424AB39D77009117E54C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (ScreenshotData != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_StaticFields*)il2cpp_codegen_static_fields_for(BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_il2cpp_TypeInfo_var))->___ScreenshotData_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogWarning("[SRDebugger] Warning, overriding existing screenshot data.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1CEFF85110CDDBDC0AB424AB39D77009117E54C7, NULL);
	}

IL_0028:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var tex = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		int32_t L_5;
		L_5 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_7, L_5, L_6, 3, (bool)0, NULL);
		// tex.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = L_7;
		int32_t L_9;
		L_9 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_11), (0.0f), (0.0f), ((float)L_9), ((float)L_10), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_8, L_11, 0, 0, NULL);
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = L_8;
		NullCheck(L_12);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_12, NULL);
		// ScreenshotData = tex.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_13, NULL);
		((BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_StaticFields*)il2cpp_codegen_static_fields_for(BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_il2cpp_TypeInfo_var))->___ScreenshotData_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_StaticFields*)il2cpp_codegen_static_fields_for(BugReportScreenshotUtil_t3AE76CA673694E45AAC2EF3554F70BA3DB94177E_il2cpp_TypeInfo_var))->___ScreenshotData_0), (void*)L_14);
		// Object.Destroy(tex);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScreenshotCaptureCoU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE3F498F853D5DBCD5973C91FACD314A6EC1A0729 (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenshotCaptureCoU3Ed__1_System_Collections_IEnumerator_Reset_mC9D72892E2B4668AEE2D540C519F7EEB50393BEC (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScreenshotCaptureCoU3Ed__1_System_Collections_IEnumerator_Reset_mC9D72892E2B4668AEE2D540C519F7EEB50393BEC_RuntimeMethod_var)));
	}
}
// System.Object SRDebugger.Internal.BugReportScreenshotUtil/<ScreenshotCaptureCo>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScreenshotCaptureCoU3Ed__1_System_Collections_IEnumerator_get_Current_mA36393BA3C5D84B71D1FC475AFF33CD35891D83C (U3CScreenshotCaptureCoU3Ed__1_t295BD05D535AAC7550047B19AC5193BC066C2303* __this, const RuntimeMethod* method) 
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
// System.Void SRDebugger.Internal.InternalOptionsRegistry::AddOptionContainer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOptionsRegistry_AddOptionContainer_mF55C2902BBBFE5D741EBB38A3074BF47175FAC2D (InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_handler != null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->____handler_1;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _handler(obj);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____handler_1;
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0015:
	{
		// _registeredContainers.Add(obj);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->____registeredContainers_0;
		RuntimeObject* L_4 = ___0_obj;
		NullCheck(L_3);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_3, L_4, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SRDebugger.Internal.InternalOptionsRegistry::SetHandler(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOptionsRegistry_SetHandler_mB3164190B753BA472088FF3ABD14893656EA593F (InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// _handler = action;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_action;
		__this->____handler_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handler_1), (void*)L_0);
		// foreach (object o in _registeredContainers)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = __this->____registeredContainers_0;
		NullCheck(L_1);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_2;
		L_2 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_1, List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0015_1:
			{
				// foreach (object o in _registeredContainers)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				V_1 = L_3;
				// _handler(o);
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = __this->____handler_1;
				RuntimeObject* L_5 = V_1;
				NullCheck(L_4);
				Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_4, L_5, NULL);
			}

IL_0029_1:
			{
				// foreach (object o in _registeredContainers)
				bool L_6;
				L_6 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// _registeredContainers = null;
		__this->____registeredContainers_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____registeredContainers_0), (void*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Internal.InternalOptionsRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOptionsRegistry__ctor_mE399C603CD287607ED2DEDA956A187EA450BFE30 (InternalOptionsRegistry_t37F5D710767EF2F74CF225D94C602B84151A8F96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<object> _registeredContainers = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		__this->____registeredContainers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____registeredContainers_0), (void*)L_0);
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
// SRDebugger.UI.Controls.OptionsControlBase SRDebugger.Internal.OptionControlFactory::CreateControl(SRDebugger.Internal.OptionDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91* OptionControlFactory_CreateControl_mCB8330F2A671F00A2FA2D520EB60817C66470BFF (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___0_from, String_t* ___1_categoryPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_mAD8DA63A82564A1F34A17D9D7BDD72D30FC763E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m5958C571CCF5D97BBF0EBBA903F55E46B5A7AE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_m3245729B8C12D3FCD75104ABC5C28974B9F20E0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE60759EB2AF6D65D23436B1A331F83469A7B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9A44514151CE04EDAE281B4E9668234A8B40FF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dataControlPrefabs == null)
		RuntimeObject* L_0 = ((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____dataControlPrefabs_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// _dataControlPrefabs = Resources.LoadAll<DataBoundControl>(SRDebugPaths.DataControlsResourcesPath);
		DataBoundControlU5BU5D_t4B2E2AA435C74EA0A3C4FADDB23F303E09C1FB4F* L_1;
		L_1 = Resources_LoadAll_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_m3245729B8C12D3FCD75104ABC5C28974B9F20E0E(_stringLiteral4EE60759EB2AF6D65D23436B1A331F83469A7B66, Resources_LoadAll_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_m3245729B8C12D3FCD75104ABC5C28974B9F20E0E_RuntimeMethod_var);
		((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____dataControlPrefabs_0 = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____dataControlPrefabs_0), (void*)(RuntimeObject*)L_1);
	}

IL_0016:
	{
		// if (_actionControlPrefab == null)
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_2 = ((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____actionControlPrefab_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// _actionControlPrefab =
		//     Resources.LoadAll<ActionControl>(SRDebugPaths.DataControlsResourcesPath).FirstOrDefault();
		ActionControlU5BU5D_t61A2FC0D511AE266CED70888DA92EF6F92EBFAE5* L_4;
		L_4 = Resources_LoadAll_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m5958C571CCF5D97BBF0EBBA903F55E46B5A7AE97(_stringLiteral4EE60759EB2AF6D65D23436B1A331F83469A7B66, Resources_LoadAll_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m5958C571CCF5D97BBF0EBBA903F55E46B5A7AE97_RuntimeMethod_var);
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_5;
		L_5 = Enumerable_FirstOrDefault_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_mAD8DA63A82564A1F34A17D9D7BDD72D30FC763E6((RuntimeObject*)L_4, Enumerable_FirstOrDefault_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_mAD8DA63A82564A1F34A17D9D7BDD72D30FC763E6_RuntimeMethod_var);
		((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____actionControlPrefab_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____actionControlPrefab_1), (void*)L_5);
	}

IL_0037:
	{
		// if (_actionControlPrefab == null)
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_6 = ((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____actionControlPrefab_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("[SRDebugger.Options] Cannot find ActionControl prefab.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC9A44514151CE04EDAE281B4E9668234A8B40FF8, NULL);
	}

IL_004e:
	{
		// if (from.Property != null)
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_8 = ___0_from;
		NullCheck(L_8);
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_9;
		L_9 = OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// return CreateDataControl(from, categoryPrefix);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_10 = ___0_from;
		String_t* L_11 = ___1_categoryPrefix;
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_12;
		L_12 = OptionControlFactory_CreateDataControl_mD2B049093729C56262C504BF5272FE3D097331A2(L_10, L_11, NULL);
		return L_12;
	}

IL_005e:
	{
		// if (from.Method != null)
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_13 = ___0_from;
		NullCheck(L_13);
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_14;
		L_14 = OptionDefinition_get_Method_mC4CC5B9EA1440C20A99029AC1F1BB884D589B136_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_006e;
		}
	}
	{
		// return CreateActionControl(from, categoryPrefix);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_15 = ___0_from;
		String_t* L_16 = ___1_categoryPrefix;
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_17;
		L_17 = OptionControlFactory_CreateActionControl_m2EB388F8AAE5EAE5D860BE63917EDE8A5B8BA1D4(L_15, L_16, NULL);
		return L_17;
	}

IL_006e:
	{
		// throw new Exception("OptionDefinition did not contain property or method.");
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9814724DB63029E81ED8BEDE9D6F218A383A8D35)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionControlFactory_CreateControl_mCB8330F2A671F00A2FA2D520EB60817C66470BFF_RuntimeMethod_var)));
	}
}
// SRDebugger.UI.Controls.Data.ActionControl SRDebugger.Internal.OptionControlFactory::CreateActionControl(SRDebugger.Internal.OptionDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* OptionControlFactory_CreateActionControl_m2EB388F8AAE5EAE5D860BE63917EDE8A5B8BA1D4 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___0_from, String_t* ___1_categoryPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRInstantiate_Instantiate_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m095E2C90396BA4782161FC139CB0520542E806A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9258046CEF20F342A802F2CC5EC455EBEC9C0A);
		s_Il2CppMethodInitialized = true;
	}
	ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* V_0 = NULL;
	{
		// var control = SRInstantiate.Instantiate(_actionControlPrefab);
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_0 = ((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____actionControlPrefab_1;
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_1;
		L_1 = SRInstantiate_Instantiate_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m095E2C90396BA4782161FC139CB0520542E806A8(L_0, SRInstantiate_Instantiate_TisActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A_m095E2C90396BA4782161FC139CB0520542E806A8_RuntimeMethod_var);
		V_0 = L_1;
		// if (control == null)
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogWarning("[SRDebugger.OptionsTab] Error creating action control from prefab");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral6C9258046CEF20F342A802F2CC5EC455EBEC9C0A, NULL);
		// return null;
		return (ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A*)NULL;
	}

IL_0020:
	{
		// control.SetMethod(from.Name, from.Method);
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_4 = V_0;
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_5 = ___0_from;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3_inline(L_5, NULL);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_7 = ___0_from;
		NullCheck(L_7);
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_8;
		L_8 = OptionDefinition_get_Method_mC4CC5B9EA1440C20A99029AC1F1BB884D589B136_inline(L_7, NULL);
		NullCheck(L_4);
		ActionControl_SetMethod_m78FB92F6EF80ED61FEFF6DE961F6830B9A624E11(L_4, L_6, L_8, NULL);
		// control.Option = from;
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_9 = V_0;
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_10 = ___0_from;
		NullCheck(L_9);
		((OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91*)L_9)->___Option_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91*)L_9)->___Option_13), (void*)L_10);
		// return control;
		ActionControl_tDA8747E38892A90CD250FC04DBF223B7113C221A* L_11 = V_0;
		return L_11;
	}
}
// SRDebugger.UI.Controls.DataBoundControl SRDebugger.Internal.OptionControlFactory::CreateDataControl(SRDebugger.Internal.OptionDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* OptionControlFactory_CreateDataControl_mD2B049093729C56262C504BF5272FE3D097331A2 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* ___0_from, String_t* ___1_categoryPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mED5599CA9BB23B9A04517D33F93B23D5B4A1CD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRInstantiate_Instantiate_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mF1BDEB1F76C3382B59BA71EEB799F01FDB8A3CCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CCreateDataControlU3Eb__0_mE29E74AF5470E6A75AB2A0FEF92890A047D81EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781A9D06EAD36B767A657BAD21ECE44EB0924108);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* V_0 = NULL;
	DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* V_1 = NULL;
	DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_0 = (U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m0445EE4B12DFDA43A8FEF36895360CA6D58A2B10(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_1 = V_0;
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_2 = ___0_from;
		NullCheck(L_1);
		L_1->___from_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___from_0), (void*)L_2);
		// var prefab = _dataControlPrefabs.FirstOrDefault(p => p.CanBind(@from.Property.PropertyType, !from.Property.CanWrite));
		RuntimeObject* L_3 = ((OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_StaticFields*)il2cpp_codegen_static_fields_for(OptionControlFactory_t907FB684364F491E6B0D389A53DDF204D869C819_il2cpp_TypeInfo_var))->____dataControlPrefabs_0;
		U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_4 = V_0;
		Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441* L_5 = (Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441*)il2cpp_codegen_object_new(Func_2_tE5B87845E48405B56E51F06E0CA3ED54093F1441_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mF0B6493C29D9726DB80413866D1C7B8862783089(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CCreateDataControlU3Eb__0_mE29E74AF5470E6A75AB2A0FEF92890A047D81EA8_RuntimeMethod_var), NULL);
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_6;
		L_6 = Enumerable_FirstOrDefault_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mED5599CA9BB23B9A04517D33F93B23D5B4A1CD70(L_3, L_5, Enumerable_FirstOrDefault_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mED5599CA9BB23B9A04517D33F93B23D5B4A1CD70_RuntimeMethod_var);
		V_1 = L_6;
		// if (prefab == null)
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.LogWarning(
		//     "[SRDebugger.OptionsTab] Can't find data control for type {0}".Fmt(from.Property.PropertyType));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_11 = V_0;
		NullCheck(L_11);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_12 = L_11->___from_0;
		NullCheck(L_12);
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_13;
		L_13 = OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049_inline(L_12, NULL);
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = PropertyReference_get_PropertyType_m99831B5B59D6666307F41F176CA1FB331C1E55BA(L_13, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = SRFStringExtensions_Fmt_mDC3A183764FA93B17B0461570F9431D8B60D7E8A(_stringLiteral781A9D06EAD36B767A657BAD21ECE44EB0924108, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_15, NULL);
		// return null;
		return (DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244*)NULL;
	}

IL_0057:
	{
		// var instance = SRInstantiate.Instantiate(prefab);
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_16 = V_1;
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_17;
		L_17 = SRInstantiate_Instantiate_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mF1BDEB1F76C3382B59BA71EEB799F01FDB8A3CCC(L_16, SRInstantiate_Instantiate_TisDataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244_mF1BDEB1F76C3382B59BA71EEB799F01FDB8A3CCC_RuntimeMethod_var);
		V_2 = L_17;
	}
	try
	{// begin try (depth: 1)
		{
			// var n = from.Name;
			U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_18 = V_0;
			NullCheck(L_18);
			OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_19 = L_18->___from_0;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3_inline(L_19, NULL);
			V_3 = L_20;
			// if (!string.IsNullOrEmpty(categoryPrefix) && n.StartsWith(categoryPrefix))
			String_t* L_21 = ___1_categoryPrefix;
			bool L_22;
			L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
			if (L_22)
			{
				goto IL_0088_1;
			}
		}
		{
			String_t* L_23 = V_3;
			String_t* L_24 = ___1_categoryPrefix;
			NullCheck(L_23);
			bool L_25;
			L_25 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_23, L_24, NULL);
			if (!L_25)
			{
				goto IL_0088_1;
			}
		}
		{
			// n = n.Substring(categoryPrefix.Length);
			String_t* L_26 = V_3;
			String_t* L_27 = ___1_categoryPrefix;
			NullCheck(L_27);
			int32_t L_28;
			L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
			NullCheck(L_26);
			String_t* L_29;
			L_29 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_26, L_28, NULL);
			V_3 = L_29;
		}

IL_0088_1:
		{
			// instance.Bind(n, from.Property);
			DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_30 = V_2;
			String_t* L_31 = V_3;
			U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_32 = V_0;
			NullCheck(L_32);
			OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_33 = L_32->___from_0;
			NullCheck(L_33);
			PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_34;
			L_34 = OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049_inline(L_33, NULL);
			NullCheck(L_30);
			DataBoundControl_Bind_m8A6BDB00567B46CDBEAF7561E6B203250CC680E7(L_30, L_31, L_34, NULL);
			// instance.Option = from;
			DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_35 = V_2;
			U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_36 = V_0;
			NullCheck(L_36);
			OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_37 = L_36->___from_0;
			NullCheck(L_35);
			((OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91*)L_35)->___Option_13 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&((OptionsControlBase_tB3394BD9A95B38C9C366391203BC0951C51EAF91*)L_35)->___Option_13), (void*)L_37);
			// }
			goto IL_00de;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a8;
		}
		throw e;
	}

CATCH_00a8:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError("[SRDebugger.Options] Error binding to property {0}".Fmt(from.Name));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_38;
		U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* L_40 = V_0;
		NullCheck(L_40);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_41 = L_40->___from_0;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3_inline(L_41, NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_42);
		String_t* L_43;
		L_43 = SRFStringExtensions_Fmt_mDC3A183764FA93B17B0461570F9431D8B60D7E8A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E68228F9565CCBB3F7C81D7DD36435A0F6970B8)), L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_43, NULL);
		// Debug.LogException(e);
		Exception_t* L_44 = V_4;
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_44, NULL);
		// Object.Destroy(instance);
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_45 = V_2;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_45, NULL);
		// instance = null;
		V_2 = (DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244*)NULL;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00de;
	}// end catch (depth: 1)

IL_00de:
	{
		// return instance;
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_46 = V_2;
		return L_46;
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
// System.Void SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m0445EE4B12DFDA43A8FEF36895360CA6D58A2B10 (U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SRDebugger.Internal.OptionControlFactory/<>c__DisplayClass4_0::<CreateDataControl>b__0(SRDebugger.UI.Controls.DataBoundControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CCreateDataControlU3Eb__0_mE29E74AF5470E6A75AB2A0FEF92890A047D81EA8 (U3CU3Ec__DisplayClass4_0_tAAC1C2FDC15974A6C098706B75BB16CD40BAD137* __this, DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* ___0_p, const RuntimeMethod* method) 
{
	{
		// var prefab = _dataControlPrefabs.FirstOrDefault(p => p.CanBind(@from.Property.PropertyType, !from.Property.CanWrite));
		DataBoundControl_tF1D3ED8EE2574C38907FCA16A19580283E3C1244* L_0 = ___0_p;
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_1 = __this->___from_0;
		NullCheck(L_1);
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_2;
		L_2 = OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049_inline(L_1, NULL);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = PropertyReference_get_PropertyType_m99831B5B59D6666307F41F176CA1FB331C1E55BA(L_2, NULL);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_4 = __this->___from_0;
		NullCheck(L_4);
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_5;
		L_5 = OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = PropertyReference_get_CanWrite_m81739E775FBCB2FAC9097E612833F8C053283AB7(L_5, NULL);
		NullCheck(L_0);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(14 /* System.Boolean SRDebugger.UI.Controls.DataBoundControl::CanBind(System.Type,System.Boolean) */, L_0, L_3, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0));
		return L_7;
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
// System.Void SRDebugger.Internal.OptionDefinition::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition__ctor_mDE3912D3EC8A281344D39CBE8531D3A88B2D0E71 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_name, String_t* ___1_category, int32_t ___2_sortPriority, const RuntimeMethod* method) 
{
	{
		// private OptionDefinition(string name, string category, int sortPriority)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___0_name;
		OptionDefinition_set_Name_m93F41D436591B877B3974E777BF9D16667B67505_inline(__this, L_0, NULL);
		// Category = category;
		String_t* L_1 = ___1_category;
		OptionDefinition_set_Category_mA72D8E6F221DFF67CB77C6503B889FA73004FA7E_inline(__this, L_1, NULL);
		// SortPriority = sortPriority;
		int32_t L_2 = ___2_sortPriority;
		OptionDefinition_set_SortPriority_mE62064C924D671607C0FDE6BF7E9ECAFDF6A3B3A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Internal.OptionDefinition::.ctor(System.String,System.String,System.Int32,SRF.Helpers.MethodReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition__ctor_mF89CAAAC0B68A85C6715B154E10C73C6DE288853 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_name, String_t* ___1_category, int32_t ___2_sortPriority, MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ___3_method, const RuntimeMethod* method) 
{
	{
		// : this(name, category, sortPriority)
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_category;
		int32_t L_2 = ___2_sortPriority;
		OptionDefinition__ctor_mDE3912D3EC8A281344D39CBE8531D3A88B2D0E71(__this, L_0, L_1, L_2, NULL);
		// Method = method;
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_3 = ___3_method;
		OptionDefinition_set_Method_mCF478C0F87EDE6355A9707F56C02E76F04BAE19B_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void SRDebugger.Internal.OptionDefinition::.ctor(System.String,System.String,System.Int32,SRF.Helpers.PropertyReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition__ctor_m49A3CEB51888AF65CD392E53AB31A390108063DC (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_name, String_t* ___1_category, int32_t ___2_sortPriority, PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ___3_property, const RuntimeMethod* method) 
{
	{
		// : this(name, category, sortPriority)
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_category;
		int32_t L_2 = ___2_sortPriority;
		OptionDefinition__ctor_mDE3912D3EC8A281344D39CBE8531D3A88B2D0E71(__this, L_0, L_1, L_2, NULL);
		// Property = property;
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_3 = ___3_property;
		OptionDefinition_set_Property_m91B0838C33D9FA64A932CE23D387D4543BAE3F1F_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.String SRDebugger.Internal.OptionDefinition::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.OptionDefinition::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition_set_Name_m93F41D436591B877B3974E777BF9D16667B67505 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String SRDebugger.Internal.OptionDefinition::get_Category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionDefinition_get_Category_mBB68D6868EF7CBE16FC76AED27A8B28E6F71035C (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public string Category { get; private set; }
		String_t* L_0 = __this->___U3CCategoryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.OptionDefinition::set_Category(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition_set_Category_mA72D8E6F221DFF67CB77C6503B889FA73004FA7E (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Category { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCategoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCategoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 SRDebugger.Internal.OptionDefinition::get_SortPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OptionDefinition_get_SortPriority_m209C30EFFBB4817D0855841792FC2700281AEBE0 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public int SortPriority { get; private set; }
		int32_t L_0 = __this->___U3CSortPriorityU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.OptionDefinition::set_SortPriority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition_set_SortPriority_mE62064C924D671607C0FDE6BF7E9ECAFDF6A3B3A (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int SortPriority { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CSortPriorityU3Ek__BackingField_2 = L_0;
		return;
	}
}
// SRF.Helpers.MethodReference SRDebugger.Internal.OptionDefinition::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* OptionDefinition_get_Method_mC4CC5B9EA1440C20A99029AC1F1BB884D589B136 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.MethodReference Method { get; private set; }
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_0 = __this->___U3CMethodU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.OptionDefinition::set_Method(SRF.Helpers.MethodReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition_set_Method_mCF478C0F87EDE6355A9707F56C02E76F04BAE19B (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.MethodReference Method { get; private set; }
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_0 = ___0_value;
		__this->___U3CMethodU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// SRF.Helpers.PropertyReference SRDebugger.Internal.OptionDefinition::get_Property()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049 (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.PropertyReference Property { get; private set; }
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_0 = __this->___U3CPropertyU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SRDebugger.Internal.OptionDefinition::set_Property(SRF.Helpers.PropertyReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDefinition_set_Property_m91B0838C33D9FA64A932CE23D387D4543BAE3F1F (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.PropertyReference Property { get; private set; }
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_0 = ___0_value;
		__this->___U3CPropertyU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertyU3Ek__BackingField_4), (void*)L_0);
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
// SRDebugger.Services.IConsoleService SRDebugger.Internal.Service::get_Console()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_Console_m990F21C7FDAB261C7831A050505DE509BE2BD0C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m4CE807F684A49BEA600DEFFA9852257E3CE631B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_consoleService == null)
		RuntimeObject* L_0 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____consoleService_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _consoleService = SRServiceManager.GetService<IConsoleService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m4CE807F684A49BEA600DEFFA9852257E3CE631B8(SRServiceManager_GetService_TisIConsoleService_tDE9A8A974B76DFD52C5FBB299B71BA6E824F5E9B_m4CE807F684A49BEA600DEFFA9852257E3CE631B8_RuntimeMethod_var);
		((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____consoleService_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____consoleService_0), (void*)L_1);
	}

IL_0011:
	{
		// return _consoleService;
		RuntimeObject* L_2 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____consoleService_0;
		return L_2;
	}
}
// SRDebugger.Services.IDockConsoleService SRDebugger.Internal.Service::get_DockConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_DockConsole_mBECAAE6E08AC7614F59F20CE04BE303B11B73FFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIDockConsoleService_t93EDAA14AFD0DD9125973947F55322E972E09525_mF948428FAC682F018A51C3360FB0D35C1A332EEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dockConsoleService == null)
		RuntimeObject* L_0 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____dockConsoleService_6;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _dockConsoleService = SRServiceManager.GetService<IDockConsoleService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIDockConsoleService_t93EDAA14AFD0DD9125973947F55322E972E09525_mF948428FAC682F018A51C3360FB0D35C1A332EEA(SRServiceManager_GetService_TisIDockConsoleService_t93EDAA14AFD0DD9125973947F55322E972E09525_mF948428FAC682F018A51C3360FB0D35C1A332EEA_RuntimeMethod_var);
		((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____dockConsoleService_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____dockConsoleService_6), (void*)L_1);
	}

IL_0011:
	{
		// return _dockConsoleService;
		RuntimeObject* L_2 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____dockConsoleService_6;
		return L_2;
	}
}
// SRDebugger.Services.IDebugPanelService SRDebugger.Internal.Service::get_Panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_Panel_mE5030A312B5A215996592F7E3A10464A58473DC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_debugPanelService == null)
		RuntimeObject* L_0 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugPanelService_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _debugPanelService = SRServiceManager.GetService<IDebugPanelService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2(SRServiceManager_GetService_TisIDebugPanelService_tFA409E57CC4C96D8B471EEEE3187593E10A9EAC5_mE3F2CA0FF4EFB613735B1D9E701E3FF15B655CD2_RuntimeMethod_var);
		((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugPanelService_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugPanelService_1), (void*)L_1);
	}

IL_0011:
	{
		// return _debugPanelService;
		RuntimeObject* L_2 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugPanelService_1;
		return L_2;
	}
}
// SRDebugger.Services.IDebugTriggerService SRDebugger.Internal.Service::get_Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_Trigger_m980186A6DBAAF3D2C2E9C8EE48A003B332674319 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_debugTriggerService == null)
		RuntimeObject* L_0 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugTriggerService_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _debugTriggerService = SRServiceManager.GetService<IDebugTriggerService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F(SRServiceManager_GetService_TisIDebugTriggerService_tDC9599A677461534D74AF78C4250D1DB79A60EEC_m49F16C3078FEF67AECE32CEF31976A7EC340936F_RuntimeMethod_var);
		((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugTriggerService_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugTriggerService_2), (void*)L_1);
	}

IL_0011:
	{
		// return _debugTriggerService;
		RuntimeObject* L_2 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugTriggerService_2;
		return L_2;
	}
}
// SRDebugger.Services.IPinnedUIService SRDebugger.Internal.Service::get_PinnedUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_PinnedUI_mB7CAD34F2F8653AC0690B5C5792E7B0FECCC0E7D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pinnedUiService == null)
		RuntimeObject* L_0 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____pinnedUiService_3;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _pinnedUiService = SRServiceManager.GetService<IPinnedUIService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14(SRServiceManager_GetService_TisIPinnedUIService_t65F2D8FC1CCD398EE9FE6BE81CA69D35B02C6BCF_mC9BF1138EFE7E7360D317ED19EF28FA0C75B3B14_RuntimeMethod_var);
		((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____pinnedUiService_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____pinnedUiService_3), (void*)L_1);
	}

IL_0011:
	{
		// return _pinnedUiService;
		RuntimeObject* L_2 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____pinnedUiService_3;
		return L_2;
	}
}
// SRDebugger.Services.IDebugCameraService SRDebugger.Internal.Service::get_DebugCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_DebugCamera_m61871B86CFC16C9215C0E2CE6E97EC0E97B8E411 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_mA0155022E01E183A8AC24BBFC6FFE4D28BAC8951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_debugCameraService == null)
		RuntimeObject* L_0 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugCameraService_4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _debugCameraService = SRServiceManager.GetService<IDebugCameraService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_mA0155022E01E183A8AC24BBFC6FFE4D28BAC8951(SRServiceManager_GetService_TisIDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_mA0155022E01E183A8AC24BBFC6FFE4D28BAC8951_RuntimeMethod_var);
		((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugCameraService_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugCameraService_4), (void*)L_1);
	}

IL_0011:
	{
		// return _debugCameraService;
		RuntimeObject* L_2 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____debugCameraService_4;
		return L_2;
	}
}
// SRDebugger.Services.IOptionsService SRDebugger.Internal.Service::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Service_get_Options_m70682DF72E8F5093D7522C2BA728F18584DC1FAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_optionsService == null)
		RuntimeObject* L_0 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____optionsService_5;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _optionsService = SRServiceManager.GetService<IOptionsService>();
		il2cpp_codegen_runtime_class_init_inline(SRServiceManager_t65EAD8CD1C096A4BCD42B5D36406A7954972394F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF(SRServiceManager_GetService_TisIOptionsService_tC101704E42C3E3513616C52149DFBAC573CB0647_m5808928B3E3BC3FC916086B01ED418F4B7A288CF_RuntimeMethod_var);
		((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____optionsService_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____optionsService_5), (void*)L_1);
	}

IL_0011:
	{
		// return _optionsService;
		RuntimeObject* L_2 = ((Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_StaticFields*)il2cpp_codegen_static_fields_for(Service_t3ED169DD9518B558AC1AAA3E897365E1DF04C11A_il2cpp_TypeInfo_var))->____optionsService_5;
		return L_2;
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
// System.Void SRDebugger.Internal.SRDebugStrings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugStrings__ctor_m2F17ABDE3AA3C1D7102E69D9546CC15BEA42E9CF (SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07C17CC4E3045072DCA080B9FE1AB29FB7C85437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B186CF9AF0F24B9CE3025E2BEB2E8600991924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C05461EF89568470E463928D10004E41D3BCF25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C04182C9EE95F2880B939E2889AC73A76105B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65180AFA71B817B68EDE371AE819B16562B357C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4EDA30A8A838CFA2D76FF18EAEEF0AB7419DEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC90EBBF94B71833321121E964EA1F331C9786674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAACC83710F995D37FCEDE7419E784FEE5DA909F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly string Console_MessageTruncated = "-- Message Truncated --";
		__this->___Console_MessageTruncated_1 = _stringLiteral3C04182C9EE95F2880B939E2889AC73A76105B69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Console_MessageTruncated_1), (void*)_stringLiteral3C04182C9EE95F2880B939E2889AC73A76105B69);
		// public readonly string Console_NoStackTrace = "-- No Stack Trace Available --";
		__this->___Console_NoStackTrace_2 = _stringLiteralFAACC83710F995D37FCEDE7419E784FEE5DA909F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Console_NoStackTrace_2), (void*)_stringLiteralFAACC83710F995D37FCEDE7419E784FEE5DA909F);
		// public readonly string PinEntryPrompt = "Enter code to open debug panel";
		__this->___PinEntryPrompt_3 = _stringLiteral23B186CF9AF0F24B9CE3025E2BEB2E8600991924;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PinEntryPrompt_3), (void*)_stringLiteral23B186CF9AF0F24B9CE3025E2BEB2E8600991924);
		// public readonly string Profiler_DisableProfilerInfo =
		//     "Unity profiler is currently <b>enabled</b>. Disable to improve performance.";
		__this->___Profiler_DisableProfilerInfo_4 = _stringLiteral07C17CC4E3045072DCA080B9FE1AB29FB7C85437;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Profiler_DisableProfilerInfo_4), (void*)_stringLiteral07C17CC4E3045072DCA080B9FE1AB29FB7C85437);
		// public readonly string Profiler_EnableProfilerInfo =
		//     "Unity profiler is currently <b>disabled</b>. Enable to show more information.";
		__this->___Profiler_EnableProfilerInfo_5 = _stringLiteral65180AFA71B817B68EDE371AE819B16562B357C8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Profiler_EnableProfilerInfo_5), (void*)_stringLiteral65180AFA71B817B68EDE371AE819B16562B357C8);
		// public readonly string Profiler_NoProInfo =
		//     "Unity profiler is currently <b>disabled</b>. Unity Pro is required to enable it.";
		__this->___Profiler_NoProInfo_6 = _stringLiteralC90EBBF94B71833321121E964EA1F331C9786674;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Profiler_NoProInfo_6), (void*)_stringLiteralC90EBBF94B71833321121E964EA1F331C9786674);
		// public readonly string Profiler_NotSupported = "Unity profiler is <b>not supported</b> in this build.";
		__this->___Profiler_NotSupported_7 = _stringLiteralAF4EDA30A8A838CFA2D76FF18EAEEF0AB7419DEC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Profiler_NotSupported_7), (void*)_stringLiteralAF4EDA30A8A838CFA2D76FF18EAEEF0AB7419DEC);
		// public readonly string ProfilerCameraListenerHelp =
		//     "This behaviour is attached by the SRDebugger profiler to calculate render times.";
		__this->___ProfilerCameraListenerHelp_8 = _stringLiteral2C05461EF89568470E463928D10004E41D3BCF25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ProfilerCameraListenerHelp_8), (void*)_stringLiteral2C05461EF89568470E463928D10004E41D3BCF25);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SRDebugger.Internal.SRDebugStrings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebugStrings__cctor_m9F13F3FADE44B6DEF7E6D0E5168625036CDD3A65 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly SRDebugStrings Current = new SRDebugStrings();
		SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87* L_0 = (SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87*)il2cpp_codegen_object_new(SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SRDebugStrings__ctor_m2F17ABDE3AA3C1D7102E69D9546CC15BEA42E9CF(L_0, NULL);
		((SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_StaticFields*)il2cpp_codegen_static_fields_for(SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var))->___Current_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_StaticFields*)il2cpp_codegen_static_fields_for(SRDebugStrings_t8F245E37AFBE19747BFE770211701A9F89384A87_il2cpp_TypeInfo_var))->___Current_0), (void*)L_0);
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
// System.Boolean SRDebugger.Internal.SRDebuggerUtil::get_IsMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SRDebuggerUtil_get_IsMobilePlatform_mFE8688C635CD71AF0316FA6B047F8B046CAED21C (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// switch (Application.platform)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)18)))) <= ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean SRDebugger.Internal.SRDebuggerUtil::EnsureEventSystemExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SRDebuggerUtil_EnsureEventSystemExists_m3F1717D0CDF4D42D93D0522A4EFF38E78D61A57F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDB51A7C740F8B043D9E827C21242799BED7DACA);
		s_Il2CppMethodInitialized = true;
	}
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* V_0 = NULL;
	{
		// if (!Settings.Instance.EnableEventSystemGeneration)
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_0;
		L_0 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Settings_get_EnableEventSystemGeneration_m2D5D310A2107EF11C253F4FF405D6A8837FFC18F_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// if (EventSystem.current != null)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// var e = Object.FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		V_0 = L_4;
		// if (e != null && e.gameObject.activeSelf && e.enabled)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5 = V_0;
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_8, NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_10, NULL);
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// Debug.LogWarning("[SRDebugger] No EventSystem found in scene - creating a default one. Disable this behaviour in Window -> SRDebugger -> Settings Window -> Advanced)");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBDB51A7C740F8B043D9E827C21242799BED7DACA, NULL);
		// CreateDefaultEventSystem();
		SRDebuggerUtil_CreateDefaultEventSystem_mE773C6A9C74DEF5DAA2F815785D88021F2D5C980(NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void SRDebugger.Internal.SRDebuggerUtil::CreateDefaultEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebuggerUtil_CreateDefaultEventSystem_mE773C6A9C74DEF5DAA2F815785D88021F2D5C980 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A585893BF72B49DADCEEACFE7DDF15D46943D29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var go = new GameObject("EventSystem (Created by SRDebugger, disable in Window -> SRDebugger -> Settings Window -> Advanced)");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral2A585893BF72B49DADCEEACFE7DDF15D46943D29, NULL);
		// go.AddComponent<EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_1, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// go.AddComponent<StandaloneInputModule>();
		NullCheck(L_1);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_3;
		L_3 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_1, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.ICollection`1<SRDebugger.Internal.OptionDefinition> SRDebugger.Internal.SRDebuggerUtil::ScanForOptions(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SRDebuggerUtil_ScanForOptions_m9E20151E2F31B47E80DFEB882AAB40274F5CB339 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE669B1265BB825E5D01FCB81EFF7286E0C93B5CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEAD86F7CE9CE4AA75531C36DE1BFA5259C19D15B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRReflection_GetAttribute_TisCategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_m14082A6B1DB34ED14C36CB30AF342122ED5BA5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRReflection_GetAttribute_TisDisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_m8BDAA1BFF6BBC266E2E072C3A5A61702CC54D8AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SRReflection_GetAttribute_TisSortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA_m14A0BB78B77A7341110F6E0419161B5C5A3711AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183* V_0 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_1 = NULL;
	int32_t V_2 = 0;
	MemberInfo_t* V_3 = NULL;
	CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* V_4 = NULL;
	String_t* V_5 = NULL;
	SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA* V_6 = NULL;
	int32_t V_7 = 0;
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* V_8 = NULL;
	String_t* V_9 = NULL;
	PropertyInfo_t* V_10 = NULL;
	MethodInfo_t* V_11 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B10_0 = NULL;
	{
		// var options = new List<OptionDefinition>();
		List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183* L_0 = (List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183*)il2cpp_codegen_object_new(List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEAD86F7CE9CE4AA75531C36DE1BFA5259C19D15B(L_0, List_1__ctor_mEAD86F7CE9CE4AA75531C36DE1BFA5259C19D15B_RuntimeMethod_var);
		V_0 = L_0;
		// var members =
		//     obj.GetType().GetMembers(BindingFlags.Instance | BindingFlags.Public | BindingFlags.GetProperty |
		//                              BindingFlags.SetProperty | BindingFlags.InvokeMethod);
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		NullCheck(L_2);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_3;
		L_3 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(93 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_2, ((int32_t)12564));
		// foreach (var memberInfo in members)
		V_1 = L_3;
		V_2 = 0;
		goto IL_0119;
	}

IL_001e:
	{
		// foreach (var memberInfo in members)
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		MemberInfo_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// var categoryAttribute = SRReflection.GetAttribute<CategoryAttribute>(memberInfo);
		MemberInfo_t* L_8 = V_3;
		CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* L_9;
		L_9 = SRReflection_GetAttribute_TisCategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_m14082A6B1DB34ED14C36CB30AF342122ED5BA5AC(L_8, SRReflection_GetAttribute_TisCategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB_m14082A6B1DB34ED14C36CB30AF342122ED5BA5AC_RuntimeMethod_var);
		V_4 = L_9;
		// var category = categoryAttribute == null ? "Default" : categoryAttribute.Category;
		CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* L_10 = V_4;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		CategoryAttribute_tBA4309ADAF92290C5F879988D4311BF0C923B7DB* L_11 = V_4;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = CategoryAttribute_get_Category_m2CBF9A5E77191E414E879293395732962EC8A1BB(L_11, NULL);
		G_B4_0 = L_12;
		goto IL_003c;
	}

IL_0037:
	{
		G_B4_0 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
	}

IL_003c:
	{
		V_5 = G_B4_0;
		// var sortAttribute = SRReflection.GetAttribute<SortAttribute>(memberInfo);
		MemberInfo_t* L_13 = V_3;
		SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA* L_14;
		L_14 = SRReflection_GetAttribute_TisSortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA_m14A0BB78B77A7341110F6E0419161B5C5A3711AE(L_13, SRReflection_GetAttribute_TisSortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA_m14A0BB78B77A7341110F6E0419161B5C5A3711AE_RuntimeMethod_var);
		V_6 = L_14;
		// var sortPriority = sortAttribute == null ? 0 : sortAttribute.SortPriority;
		SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA* L_15 = V_6;
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		SortAttribute_t745731D856AA0915EBA410630E554D11F6CCADBA* L_16 = V_6;
		NullCheck(L_16);
		int32_t L_17 = L_16->___SortPriority_0;
		G_B7_0 = L_17;
		goto IL_0054;
	}

IL_0053:
	{
		G_B7_0 = 0;
	}

IL_0054:
	{
		V_7 = G_B7_0;
		// var nameAttribute = SRReflection.GetAttribute<DisplayNameAttribute>(memberInfo);
		MemberInfo_t* L_18 = V_3;
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_19;
		L_19 = SRReflection_GetAttribute_TisDisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_m8BDAA1BFF6BBC266E2E072C3A5A61702CC54D8AE(L_18, SRReflection_GetAttribute_TisDisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_m8BDAA1BFF6BBC266E2E072C3A5A61702CC54D8AE_RuntimeMethod_var);
		V_8 = L_19;
		// var name = nameAttribute == null ? memberInfo.Name : nameAttribute.DisplayName;
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_20 = V_8;
		if (!L_20)
		{
			goto IL_006b;
		}
	}
	{
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_21 = V_8;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, L_21);
		G_B10_0 = L_22;
		goto IL_0071;
	}

IL_006b:
	{
		MemberInfo_t* L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		G_B10_0 = L_24;
	}

IL_0071:
	{
		V_9 = G_B10_0;
		// if (memberInfo is PropertyInfo)
		MemberInfo_t* L_25 = V_3;
		if (!((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_25, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00c1;
		}
	}
	{
		// var propertyInfo = memberInfo as PropertyInfo;
		MemberInfo_t* L_26 = V_3;
		V_10 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_26, PropertyInfo_t_il2cpp_TypeInfo_var));
		// if (propertyInfo.GetGetMethod() == null)
		PropertyInfo_t* L_27 = V_10;
		NullCheck(L_27);
		MethodInfo_t* L_28;
		L_28 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_27, NULL);
		bool L_29;
		L_29 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_28, (MethodInfo_t*)NULL, NULL);
		if (L_29)
		{
			goto IL_0115;
		}
	}
	{
		// if ((propertyInfo.GetGetMethod().Attributes & MethodAttributes.Static) != 0)
		PropertyInfo_t* L_30 = V_10;
		NullCheck(L_30);
		MethodInfo_t* L_31;
		L_31 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_30, NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_31);
		if (((int32_t)((int32_t)L_32&((int32_t)16))))
		{
			goto IL_0115;
		}
	}
	{
		// options.Add(new OptionDefinition(name, category, sortPriority,
		//     new SRF.Helpers.PropertyReference(obj, propertyInfo)));
		List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183* L_33 = V_0;
		String_t* L_34 = V_9;
		String_t* L_35 = V_5;
		int32_t L_36 = V_7;
		RuntimeObject* L_37 = ___0_obj;
		PropertyInfo_t* L_38 = V_10;
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_39 = (PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40*)il2cpp_codegen_object_new(PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		PropertyReference__ctor_m7772819A2F9E4FADB8099EC049AF67D7F1038618(L_39, L_37, L_38, NULL);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_40 = (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E*)il2cpp_codegen_object_new(OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		OptionDefinition__ctor_m49A3CEB51888AF65CD392E53AB31A390108063DC(L_40, L_34, L_35, L_36, L_39, NULL);
		NullCheck(L_33);
		List_1_Add_mE669B1265BB825E5D01FCB81EFF7286E0C93B5CB_inline(L_33, L_40, List_1_Add_mE669B1265BB825E5D01FCB81EFF7286E0C93B5CB_RuntimeMethod_var);
		goto IL_0115;
	}

IL_00c1:
	{
		// else if (memberInfo is MethodInfo)
		MemberInfo_t* L_41 = V_3;
		if (!((MethodInfo_t*)IsInstClass((RuntimeObject*)L_41, MethodInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0115;
		}
	}
	{
		// var methodInfo = memberInfo as MethodInfo;
		MemberInfo_t* L_42 = V_3;
		V_11 = ((MethodInfo_t*)IsInstClass((RuntimeObject*)L_42, MethodInfo_t_il2cpp_TypeInfo_var));
		// if (methodInfo.IsStatic)
		MethodInfo_t* L_43 = V_11;
		NullCheck(L_43);
		bool L_44;
		L_44 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_43, NULL);
		if (L_44)
		{
			goto IL_0115;
		}
	}
	{
		// if (methodInfo.ReturnType != typeof (void) || methodInfo.GetParameters().Length > 0)
		MethodInfo_t* L_45 = V_11;
		NullCheck(L_45);
		Type_t* L_46;
		L_46 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_45);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_46, L_48, NULL);
		if (L_49)
		{
			goto IL_0115;
		}
	}
	{
		MethodInfo_t* L_50 = V_11;
		NullCheck(L_50);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_51;
		L_51 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_50);
		NullCheck(L_51);
		if ((((RuntimeArray*)L_51)->max_length))
		{
			goto IL_0115;
		}
	}
	{
		// options.Add(new OptionDefinition(name, category, sortPriority,
		//     new SRF.Helpers.MethodReference(obj, methodInfo)));
		List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183* L_52 = V_0;
		String_t* L_53 = V_9;
		String_t* L_54 = V_5;
		int32_t L_55 = V_7;
		RuntimeObject* L_56 = ___0_obj;
		MethodInfo_t* L_57 = V_11;
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_58 = (MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F*)il2cpp_codegen_object_new(MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		MethodReference__ctor_m1E7D5D39A6BF8639F4ADBB5AC32285D9F84595DE(L_58, L_56, L_57, NULL);
		OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* L_59 = (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E*)il2cpp_codegen_object_new(OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		OptionDefinition__ctor_mF89CAAAC0B68A85C6715B154E10C73C6DE288853(L_59, L_53, L_54, L_55, L_58, NULL);
		NullCheck(L_52);
		List_1_Add_mE669B1265BB825E5D01FCB81EFF7286E0C93B5CB_inline(L_52, L_59, List_1_Add_mE669B1265BB825E5D01FCB81EFF7286E0C93B5CB_RuntimeMethod_var);
	}

IL_0115:
	{
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0119:
	{
		// foreach (var memberInfo in members)
		int32_t L_61 = V_2;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_62 = V_1;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// return options;
		List_1_t817BDF4CC9176C7FB95E3395792B16C37371C183* L_63 = V_0;
		return L_63;
	}
}
// System.String SRDebugger.Internal.SRDebuggerUtil::GetNumberString(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SRDebuggerUtil_GetNumberString_mFCB56F1C148F124F63BA6E4DD5E59AA5A78A146A (int32_t ___0_value, int32_t ___1_max, String_t* ___2_exceedsMaxString, const RuntimeMethod* method) 
{
	{
		// if (value >= max)
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_max;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		// return exceedsMaxString;
		String_t* L_2 = ___2_exceedsMaxString;
		return L_2;
	}

IL_0006:
	{
		// return value.ToString();
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_value), NULL);
		return L_3;
	}
}
// System.Void SRDebugger.Internal.SRDebuggerUtil::ConfigureCanvas(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SRDebuggerUtil_ConfigureCanvas_mA0E8003D4132DEADF1D0478B1873C39BADFE0B25 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___0_canvas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Settings.Instance.UseDebugCamera)
		Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* L_0;
		L_0 = Settings_get_Instance_m046B2CD775387FE2D63C992C81C76DDE1D9A3927(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Settings_get_UseDebugCamera_m9386EB935CDC7B54DFBC7E7ADBD4ACF86665B41B_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// canvas.worldCamera = Service.DebugCamera.Camera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = ___0_canvas;
		RuntimeObject* L_3;
		L_3 = Service_get_DebugCamera_m61871B86CFC16C9215C0E2CE6E97EC0E97B8E411(NULL);
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(0 /* UnityEngine.Camera SRDebugger.Services.IDebugCameraService::get_Camera() */, IDebugCameraService_t86DFE01855BDA535AAEC9FE74AC0B7C4FE92A301_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_2, L_4, NULL);
		// canvas.renderMode = RenderMode.ScreenSpaceCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = ___0_canvas;
		NullCheck(L_5);
		Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47(L_5, 1, NULL);
	}

IL_0023:
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Settings_get_EnableTrigger_mA3693551519784E8A2D829E07F0EA4B30DBC995C_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _triggerEnableMode; }
		int32_t L_0 = __this->____triggerEnableMode_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Settings_get_TriggerPosition_mA7186D7A0443BE6462A86FA857150F3D01DB3634_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _triggerPosition; }
		int32_t L_0 = __this->____triggerPosition_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_EnableKeyboardShortcuts_m823AD3F9FB449196183963CE56C52977B5C59604_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _enableKeyboardShortcuts; }
		bool L_0 = __this->____enableKeyboardShortcuts_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_RequireCode_m4F4B946BEDC3E1E9BB11CF424102507F11402DD0_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _requireEntryCode; }
		bool L_0 = __this->____requireEntryCode_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionDefinition_get_Category_mBB68D6868EF7CBE16FC76AED27A8B28E6F71035C_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public string Category { get; private set; }
		String_t* L_0 = __this->___U3CCategoryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionDefinition_get_Name_mA7802F9916A4B8181352C0CDB906299DFB9D49F3_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BugReportPopoverService_get_IsShowingPopover_m97DA57E7A8168DE5E0DC88E393960A42417C6FBC_inline (BugReportPopoverService_t792EC716D5A18FA8708E5BF14776FE3AD019AEA9* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isVisible; }
		bool L_0 = __this->____isVisible_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisibilityChangedDelegate_Invoke_m1AD00544711BEBEB368C4C30373ED26DC293F336_inline (VisibilityChangedDelegate_t33D4DDA6130FFE29257998CDE5F20D4AFB476367* __this, bool ___0_isVisible, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_isVisible, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_UseDebugCamera_m9386EB935CDC7B54DFBC7E7ADBD4ACF86665B41B_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _useDebugCamera; }
		bool L_0 = __this->____useDebugCamera_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* DebugPanelServiceImpl_get_RootObject_mD47703381EBE44C2D11AFDB5CB06DCDBA86D744A_inline (DebugPanelServiceImpl_t9050111A9149AF3A4DD5B61372B150525ECABCBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return _debugPanelRootObject; }
		DebugPanelRoot_t692E8485482E41A923766CC86BBD0F860D236BA8* L_0 = __this->____debugPanelRootObject_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PinnedUiCanvasCreated_Invoke_m7D1C7644D7A89208CD4CB2916C3EEDD9E25C2024_inline (PinnedUiCanvasCreated_tD325CD72723FAB6DA40E6678587B3DE9EF34665C* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_canvasTransform, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_canvasTransform, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_RequireEntryCodeEveryTime_m0143EC0BF9C3518ADA94C4DA5BFDAC508970EA4B_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _requireEntryCodeEveryTime; }
		bool L_0 = __this->____requireEntryCodeEveryTime_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActionCompleteCallback_Invoke_m887BF69B332AFEF2D0A9A685B6B1C191CCB7F2D4_inline (ActionCompleteCallback_tD183CB1D1C2F8A47A46AE4AFEE6A7E3FA01A08C8* __this, bool ___0_success, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_CollapseDuplicateLogEntries_m7C55F799102AF04476F7C58FA92126C5E67B8B78_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _collapseDuplicateLogEntries; }
		bool L_0 = __this->____collapseDuplicateLogEntries_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Settings_get_MaximumConsoleEntries_m058C84626DE7941E8BE210250EC05E54D3889225_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _maximumConsoleEntries; }
		int32_t L_0 = __this->____maximumConsoleEntries_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardConsoleService_set_InfoCount_m2668E0E54EDA47B896D4FE82FE3724515BA1C9A9_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int InfoCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CInfoCountU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardConsoleService_set_WarningCount_m3BCA884D256296A89AF1D89F0BE7546AC0984370_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int WarningCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CWarningCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardConsoleService_set_ErrorCount_m13148DAEEB51CB249AB5BF26E91285411A2A2DD3_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int ErrorCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsoleUpdatedEventHandler_Invoke_mD0820E51FAE657C384EBB18BF58631FC047DFEDC_inline (ConsoleUpdatedEventHandler_tCA8B5D6C863A59653E10F01724722D5093434C7E* __this, RuntimeObject* ___0_console, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_console, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_ErrorCount_mEAC6AE8C3E7A00433240246E6675B9ED3985037F_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// public int ErrorCount { get; private set; }
		int32_t L_0 = __this->___U3CErrorCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_WarningCount_m9031F40A6C0952E3B9FD2226F9668844EDF94F0D_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// public int WarningCount { get; private set; }
		int32_t L_0 = __this->___U3CWarningCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardConsoleService_get_InfoCount_m739F40962BB15A015C85317D867E6F1134B532B9_inline (StandardConsoleService_t50E78FB61017B0686DF1429D327B0F0F09F8EFD4* __this, const RuntimeMethod* method) 
{
	{
		// public int InfoCount { get; private set; }
		int32_t L_0 = __this->___U3CInfoCountU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InfoEntry_get_IsPrivate_m5A0C481C6A165325264A20F8DDB95611AA7DA034_inline (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPrivate { get; private set; }
		bool L_0 = __this->___U3CIsPrivateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InfoEntry_get_Title_m36F77A5C657D73714A077817C673E934D19F2A3D_inline (InfoEntry_t5491A419C1FAD0B7E523042F8903F1F6D8E2FE50* __this, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->___U3CTitleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* ProfilerServiceImpl_get_FrameBuffer_mAA7FE195800C5739A557D85DB6436D56F2F47C98_inline (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frameBuffer; }
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = __this->____frameBuffer_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerServiceImpl_set_LastFrameTime_m54EB197F691ABAF479AC3D9AB5F8988491D9F714_inline (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float LastFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CLastFrameTimeU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerServiceImpl_set_AverageFrameTime_mCC7E3105235EFE04F75D07F700B9A3FDAF6290CC_inline (ProfilerServiceImpl_tB749FF6CB1980C0E7569DF8279F8475F40334811* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AverageFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAverageFrameTimeU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_running_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* SRPProfilerService_get_FrameBuffer_m118281C8F4A5A38F62BECB7B12BB9016A6B02B60_inline (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frameBuffer; }
		CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* L_0 = __this->____frameBuffer_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SRPProfilerService_set_LastFrameTime_m371B7F55EB6071C6BE1809F6FB4B66CCE95C1713_inline (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float LastFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CLastFrameTimeU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SRPProfilerService_set_AverageFrameTime_mA109C296FCB2F235B72B0D1689AE641E00ED9C79_inline (SRPProfilerService_tE2266544E4062451FD287A4CA7915E165C494974* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AverageFrameTime { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAverageFrameTimeU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* WebException_get_Response_m808BF96464DDCE6C66D633355101C69800A5A7E7_inline (WebException_t106BE934ACC529D73F9EA01B0545487E8F6582C8* __this, const RuntimeMethod* method) 
{
	{
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_0 = __this->___m_Response_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BugReportApi_set_WasSuccessful_mD27A79A4761D6B8D9DCB9E7E31A26A17E0BCED12_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool WasSuccessful { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CWasSuccessfulU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BugReportApi_set_IsComplete_mAC4E6F91C5E62038CCC04F2D0473415BBE207388_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsComplete { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompleteU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BugReportApi_get_ErrorMessage_m83ABFF3C3A41C9F30880E80918095E5AD2D874DB_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get; private set; }
		String_t* L_0 = __this->___U3CErrorMessageU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BugReportApi_set_ErrorMessage_m3077482015DA113E7156251B5F5FC6E2E86A6F9E_inline (BugReportApi_tCE7442F48FB75B813E8518351E04A69573E70BE6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorMessageU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorMessageU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* OptionDefinition_get_Property_mE9E3BFB5868AC027158F586485010A5856AEC049_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.PropertyReference Property { get; private set; }
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_0 = __this->___U3CPropertyU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* OptionDefinition_get_Method_mC4CC5B9EA1440C20A99029AC1F1BB884D589B136_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.MethodReference Method { get; private set; }
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_0 = __this->___U3CMethodU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Name_m93F41D436591B877B3974E777BF9D16667B67505_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Category_mA72D8E6F221DFF67CB77C6503B889FA73004FA7E_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Category { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCategoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCategoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_SortPriority_mE62064C924D671607C0FDE6BF7E9ECAFDF6A3B3A_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int SortPriority { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CSortPriorityU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Method_mCF478C0F87EDE6355A9707F56C02E76F04BAE19B_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.MethodReference Method { get; private set; }
		MethodReference_t978243DD5814CD00A34061E532A14B8684A9851F* L_0 = ___0_value;
		__this->___U3CMethodU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDefinition_set_Property_m91B0838C33D9FA64A932CE23D387D4543BAE3F1F_inline (OptionDefinition_t086AE41CA14CBD2BA0DD9E3019942DA78E3B066E* __this, PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SRF.Helpers.PropertyReference Property { get; private set; }
		PropertyReference_t9B60282491A18D2D3B12FE6F1B7825EC6EE30F40* L_0 = ___0_value;
		__this->___U3CPropertyU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertyU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Settings_get_EnableEventSystemGeneration_m2D5D310A2107EF11C253F4FF405D6A8837FFC18F_inline (Settings_t7719B9E2E54EC160F77DDB8DBEF40F46824D37AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _enableEventSystemCreation; }
		bool L_0 = __this->____enableEventSystemCreation_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_1_get_Count_mA93F3D9CEFD193D4670E54D42141E6C697F1D129_gshared_inline (CircularBuffer_1_tFC65A310CEDD5FAEBC984644F409E701258151E8* __this, const RuntimeMethod* method) 
{
	{
		// get { return _count; }
		int32_t L_0 = (int32_t)__this->____count_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		NullCheck(L_4);
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7F2CC56FA8287124AA51B6C591AFFA31C0AEE65D_gshared_inline (Action_2_t20E1B0E5A61C42E2C74B90596ED942D921D42DE1* __this, RuntimeObject* ___0_arg1, double ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_1_get_Count_m3F5E274574AEB1D3C95234C6039DC75489AC727F_gshared_inline (CircularBuffer_1_t8307CBBCA38F98D2D86B617EDA3DCE06C13E4BCD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _count; }
		int32_t L_0 = (int32_t)__this->____count_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
