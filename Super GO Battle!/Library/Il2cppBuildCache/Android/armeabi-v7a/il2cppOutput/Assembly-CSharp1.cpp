#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.LinkedListNode`1<System.Single>
struct LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3;
// System.Collections.Generic.LinkedList`1<System.Single>
struct LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>
struct List_1_tC99819DB8413C2B7D5C8755BF8D2188DD7F4736D;
// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8;
// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375;
// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48;
// Google.XR.ARCoreExtensions.ARPlaybackManager
struct ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// Google.XR.ARCoreExtensions.ARRecordingManager
struct ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// AvatarController
struct AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E;
// BackgroundToDepthMapEffectController
struct BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// BulletBarrage
struct BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CarouselLabelOrientation
struct CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8;
// CarouselMovement
struct CarouselMovement_tAF48659B09D5F7089CFA8D9E0EA14A18F105CD5A;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427;
// UnityEngine.ComputeShader
struct ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DepthMeshCollider
struct DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HelpBalloonController
struct HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LoadingSpinner
struct LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE;
// LowPassFilter
struct LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OcclusionChanged
struct OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68;
// OrientedReticle
struct OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101;
// PlayerScript
struct PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805;
// PositionFilter
struct PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31;
// ProjectileScript
struct ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38;
// QuaternionFilter
struct QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Recorder
struct Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// RotateCarouselButton
struct RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneSwitcher
struct SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// ShadowReceiverMesh
struct ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA;
// SingleValueFilter
struct SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SliderValueToText
struct SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB;
// SmoothingFilterTest
struct SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC;
// SpeedAdaptiveFilter
struct SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B;
// SpinnerProgress
struct SpinnerProgress_tC109EF85401ECC68610C1A8290C889AD9F97CCBA;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F;
// System.String
struct String_t;
// Testing
struct Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ToggleUIVisibility
struct ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TutorialTesting
struct TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UpdateDistanceMetrics
struct UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitWhile
struct WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61;
// Whirlwind
struct Whirlwind_tA828026CF25F25325B4B2392543DE60675579401;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454;
// AvatarController/<LookAtCameraCoroutine>d__19
struct U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37;
// BackgroundToDepthMapEffectController/<AnimateTransition>d__37
struct U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C;
// BulletBarrage/<Cooldown>d__7
struct U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CarouselLabelOrientation/<GetValidDeviceOrientation>d__6
struct U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21;
// DepthMeshCollider/<BulletCool>d__61
struct U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9;
// HapticManager/HapticFeedbackManager
struct HapticFeedbackManager_t4D5267FFFEECD4E2D605DF0E1A41C79ACF5C0BB8;
// HelpBalloonController/<ShowHide>d__9
struct U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC;
// LoadingSpinner/<FadeSpinner>d__12
struct U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MotionStereoDepthDataSource/AcquireDepthImageDelegate
struct AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480;
// NoticeHelper/<CheckDepthCoroutine>d__10
struct U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD;
// PlayerScript/<BulletCool>d__8
struct U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4;
// ProjectileScript/<DestroyCount>d__12
struct U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3;
// Recorder/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511;
// Recorder/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC;
// Recorder/<PlaybackDataset>d__22
struct U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412;
// Recorder/<Record>d__21
struct U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// RotateCarouselButton/<GetValidDeviceOrientation>d__2
struct U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE;
// SceneSwitcher/<InitSceneLoad>d__8
struct U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3;
// SceneSwitcher/<LoadSceneAsync>d__11
struct U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// Whirlwind/<Ded>d__3
struct U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral029BFDCAAAB769E9E37947E19E4E5876A8A6A09B;
IL2CPP_EXTERN_C String_t* _stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral4CA0263DA4286CB6AEE0317E58BAFACBB241D5B1;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5A2924F9E9968F93C09684E73CE57FB52FB48C1F;
IL2CPP_EXTERN_C String_t* _stringLiteral62D7507EC5637C7B7F1C6FD21B11BD1EEDBA5C7A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A382760914966180DF3E22D7CD123E40B3CDF25;
IL2CPP_EXTERN_C String_t* _stringLiteral79A010C3168ABBA36B31C8771E1DAD4CC0206E4C;
IL2CPP_EXTERN_C String_t* _stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB9B04C005667610BC0515282EF8D265E8FCF4C43;
IL2CPP_EXTERN_C String_t* _stringLiteralC9AF66EC18858B3102B9D316FB27CB4ACF014B62;
IL2CPP_EXTERN_C String_t* _stringLiteralD44477E6A7F5C8FD463864D42D42CE936E483322;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31_m5B3FDE8EDF18F4AB7378F1EFA165F4F577ACD630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisQuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987_m0948A24F19E5CF7B89F8E2709F7128FD4F4B4A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD5C5B63F114D47658E4F056ADB3DE06973E936B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3ABAEA49D99554AA05247944F5C4F0C02754C236_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Next_mDCC3EFE818041922B7990C5B30681538026406EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddBefore_mFB19B9B819BFAA270438665E0FC86F89E54C04F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m322C99C02EBFBAD56375A2103C6BD82D66B42CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101_m1AD3A06EB99A7E8859EC1231C98D486B2EA250B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateTransitionU3Ed__37_System_Collections_IEnumerator_Reset_mF9B5BCA0BD78723F3EA2E6E35D122612A1B11372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBulletCoolU3Ed__61_System_Collections_IEnumerator_Reset_mF3885BA959D3EEAACE72DB16D73D2D93D3A53CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBulletCoolU3Ed__8_System_Collections_IEnumerator_Reset_m1EC4AB08A9561650BF266347DF16EE5AC623A078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckDepthCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_mE7164065561812E5CAFC69136BEAEB70466039FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCooldownU3Ed__7_System_Collections_IEnumerator_Reset_m9BB62D463144669A414D2A8520C6EDBC5C7B315B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDedU3Ed__3_System_Collections_IEnumerator_Reset_m127103B7EA1ED4C77318A6599034688146791A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyCountU3Ed__12_System_Collections_IEnumerator_Reset_mD4F543A4B6A0C8F3A588DC13B20F9C15EF0B9001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeSpinnerU3Ed__12_System_Collections_IEnumerator_Reset_mBF5E2704EC878E4572E1D43344E0020994F4F7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetValidDeviceOrientationU3Ed__2_System_Collections_IEnumerator_Reset_m1D89E4473C76DF3F909D2D2CBB5007B4BC0963B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetValidDeviceOrientationU3Ed__6_System_Collections_IEnumerator_Reset_mA4EB49EE309886149C7D75932B627D408259EB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitSceneLoadU3Ed__8_System_Collections_IEnumerator_Reset_m0ECBA2E9A6EB42A6E2665ED5CEB638CD9AAF48F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_Reset_m16A9D51FBB92C0C07D22F40A401D370BB6AAC437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLookAtCameraCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mE3744A0D67651A36ED652D7F09855A9952BF20D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlaybackDatasetU3Ed__22_System_Collections_IEnumerator_Reset_m351E0E916542983C63DF5DDAF151A887D48F1B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRecordU3Ed__21_System_Collections_IEnumerator_Reset_m42EBD657EBDA9F86A68ABE48934AE5AFC63B6E50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowHideU3Ed__9_System_Collections_IEnumerator_Reset_m0F2461655369A39303A0E36E24E39EB4A716251E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CRecordU3Eb__0_m99A28583FA82C024D23DE3443CDD432672FE56F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CPlaybackDatasetU3Eb__0_mC0C3340E8C138B8F59F53B82511FEAA83900C365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD;
struct SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A;
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.LinkedListNode`1<System.Single>
struct LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::list
	LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::next
	LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___next_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::prev
	LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___prev_2;
	// T System.Collections.Generic.LinkedListNode`1::item
	float ___item_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___list_0)); }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * get_list_0() const { return ___list_0; }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___next_1)); }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * get_next_1() const { return ___next_1; }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}

	inline static int32_t get_offset_of_prev_2() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___prev_2)); }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * get_prev_2() const { return ___prev_2; }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 ** get_address_of_prev_2() { return &___prev_2; }
	inline void set_prev_2(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * value)
	{
		___prev_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_2), (void*)value);
	}

	inline static int32_t get_offset_of_item_3() { return static_cast<int32_t>(offsetof(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3, ___item_3)); }
	inline float get_item_3() const { return ___item_3; }
	inline float* get_address_of_item_3() { return &___item_3; }
	inline void set_item_3(float value)
	{
		___item_3 = value;
	}
};


// System.Collections.Generic.LinkedList`1<System.Single>
struct LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject * ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ___head_0)); }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * get_head_0() const { return ___head_0; }
	inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}

	inline static int32_t get_offset_of__siInfo_4() { return static_cast<int32_t>(offsetof(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27, ____siInfo_4)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_4() const { return ____siInfo_4; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_4() { return &____siInfo_4; }
	inline void set__siInfo_4(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____items_1)); }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* get__items_1() const { return ____items_1; }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_StaticFields, ____emptyArray_5)); }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
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


// LowPassFilter
struct LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2  : public RuntimeObject
{
public:
	// System.Single LowPassFilter::_outputSmoothed
	float ____outputSmoothed_0;
	// System.Single LowPassFilter::_weight
	float ____weight_1;
	// System.Single LowPassFilter::_inputData
	float ____inputData_2;
	// System.Boolean LowPassFilter::_isInitialized
	bool ____isInitialized_3;

public:
	inline static int32_t get_offset_of__outputSmoothed_0() { return static_cast<int32_t>(offsetof(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2, ____outputSmoothed_0)); }
	inline float get__outputSmoothed_0() const { return ____outputSmoothed_0; }
	inline float* get_address_of__outputSmoothed_0() { return &____outputSmoothed_0; }
	inline void set__outputSmoothed_0(float value)
	{
		____outputSmoothed_0 = value;
	}

	inline static int32_t get_offset_of__weight_1() { return static_cast<int32_t>(offsetof(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2, ____weight_1)); }
	inline float get__weight_1() const { return ____weight_1; }
	inline float* get_address_of__weight_1() { return &____weight_1; }
	inline void set__weight_1(float value)
	{
		____weight_1 = value;
	}

	inline static int32_t get_offset_of__inputData_2() { return static_cast<int32_t>(offsetof(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2, ____inputData_2)); }
	inline float get__inputData_2() const { return ____inputData_2; }
	inline float* get_address_of__inputData_2() { return &____inputData_2; }
	inline void set__inputData_2(float value)
	{
		____inputData_2 = value;
	}

	inline static int32_t get_offset_of__isInitialized_3() { return static_cast<int32_t>(offsetof(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2, ____isInitialized_3)); }
	inline bool get__isInitialized_3() const { return ____isInitialized_3; }
	inline bool* get_address_of__isInitialized_3() { return &____isInitialized_3; }
	inline void set__isInitialized_3(bool value)
	{
		____isInitialized_3 = value;
	}
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


// Utilities
struct Utilities_t80AF6C6EDACA7C1864E14FA8941FB2C6BE6897F1  : public RuntimeObject
{
public:

public:
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

// BackgroundToDepthMapEffectController/<AnimateTransition>d__37
struct U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C  : public RuntimeObject
{
public:
	// System.Int32 BackgroundToDepthMapEffectController/<AnimateTransition>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BackgroundToDepthMapEffectController/<AnimateTransition>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BackgroundToDepthMapEffectController BackgroundToDepthMapEffectController/<AnimateTransition>d__37::<>4__this
	BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * ___U3CU3E4__this_2;
	// System.Single BackgroundToDepthMapEffectController/<AnimateTransition>d__37::targetValue
	float ___targetValue_3;
	// System.Single BackgroundToDepthMapEffectController/<AnimateTransition>d__37::animationTime
	float ___animationTime_4;
	// System.Single BackgroundToDepthMapEffectController/<AnimateTransition>d__37::<originalTransition>5__2
	float ___U3CoriginalTransitionU3E5__2_5;
	// System.Single BackgroundToDepthMapEffectController/<AnimateTransition>d__37::<t>5__3
	float ___U3CtU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C, ___U3CU3E4__this_2)); }
	inline BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_targetValue_3() { return static_cast<int32_t>(offsetof(U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C, ___targetValue_3)); }
	inline float get_targetValue_3() const { return ___targetValue_3; }
	inline float* get_address_of_targetValue_3() { return &___targetValue_3; }
	inline void set_targetValue_3(float value)
	{
		___targetValue_3 = value;
	}

	inline static int32_t get_offset_of_animationTime_4() { return static_cast<int32_t>(offsetof(U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C, ___animationTime_4)); }
	inline float get_animationTime_4() const { return ___animationTime_4; }
	inline float* get_address_of_animationTime_4() { return &___animationTime_4; }
	inline void set_animationTime_4(float value)
	{
		___animationTime_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalTransitionU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C, ___U3CoriginalTransitionU3E5__2_5)); }
	inline float get_U3CoriginalTransitionU3E5__2_5() const { return ___U3CoriginalTransitionU3E5__2_5; }
	inline float* get_address_of_U3CoriginalTransitionU3E5__2_5() { return &___U3CoriginalTransitionU3E5__2_5; }
	inline void set_U3CoriginalTransitionU3E5__2_5(float value)
	{
		___U3CoriginalTransitionU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C, ___U3CtU3E5__3_6)); }
	inline float get_U3CtU3E5__3_6() const { return ___U3CtU3E5__3_6; }
	inline float* get_address_of_U3CtU3E5__3_6() { return &___U3CtU3E5__3_6; }
	inline void set_U3CtU3E5__3_6(float value)
	{
		___U3CtU3E5__3_6 = value;
	}
};


// BulletBarrage/<Cooldown>d__7
struct U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF  : public RuntimeObject
{
public:
	// System.Int32 BulletBarrage/<Cooldown>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BulletBarrage/<Cooldown>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BulletBarrage BulletBarrage/<Cooldown>d__7::<>4__this
	BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF, ___U3CU3E4__this_2)); }
	inline BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// CarouselLabelOrientation/<GetValidDeviceOrientation>d__6
struct U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21  : public RuntimeObject
{
public:
	// System.Int32 CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CarouselLabelOrientation CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::<>4__this
	CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21, ___U3CU3E4__this_2)); }
	inline CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DepthMeshCollider/<BulletCool>d__61
struct U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9  : public RuntimeObject
{
public:
	// System.Int32 DepthMeshCollider/<BulletCool>d__61::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DepthMeshCollider/<BulletCool>d__61::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DepthMeshCollider DepthMeshCollider/<BulletCool>d__61::<>4__this
	DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9, ___U3CU3E4__this_2)); }
	inline DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// HapticManager/HapticFeedbackManager
struct HapticFeedbackManager_t4D5267FFFEECD4E2D605DF0E1A41C79ACF5C0BB8  : public RuntimeObject
{
public:
	// System.Int32 HapticManager/HapticFeedbackManager::HapticFeedbackConstantsKey
	int32_t ___HapticFeedbackConstantsKey_0;
	// UnityEngine.AndroidJavaObject HapticManager/HapticFeedbackManager::UnityPlayer
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___UnityPlayer_1;

public:
	inline static int32_t get_offset_of_HapticFeedbackConstantsKey_0() { return static_cast<int32_t>(offsetof(HapticFeedbackManager_t4D5267FFFEECD4E2D605DF0E1A41C79ACF5C0BB8, ___HapticFeedbackConstantsKey_0)); }
	inline int32_t get_HapticFeedbackConstantsKey_0() const { return ___HapticFeedbackConstantsKey_0; }
	inline int32_t* get_address_of_HapticFeedbackConstantsKey_0() { return &___HapticFeedbackConstantsKey_0; }
	inline void set_HapticFeedbackConstantsKey_0(int32_t value)
	{
		___HapticFeedbackConstantsKey_0 = value;
	}

	inline static int32_t get_offset_of_UnityPlayer_1() { return static_cast<int32_t>(offsetof(HapticFeedbackManager_t4D5267FFFEECD4E2D605DF0E1A41C79ACF5C0BB8, ___UnityPlayer_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_UnityPlayer_1() const { return ___UnityPlayer_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_UnityPlayer_1() { return &___UnityPlayer_1; }
	inline void set_UnityPlayer_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___UnityPlayer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityPlayer_1), (void*)value);
	}
};


// HelpBalloonController/<ShowHide>d__9
struct U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC  : public RuntimeObject
{
public:
	// System.Int32 HelpBalloonController/<ShowHide>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HelpBalloonController/<ShowHide>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean HelpBalloonController/<ShowHide>d__9::Show
	bool ___Show_2;
	// HelpBalloonController HelpBalloonController/<ShowHide>d__9::<>4__this
	HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_Show_2() { return static_cast<int32_t>(offsetof(U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC, ___Show_2)); }
	inline bool get_Show_2() const { return ___Show_2; }
	inline bool* get_address_of_Show_2() { return &___Show_2; }
	inline void set_Show_2(bool value)
	{
		___Show_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC, ___U3CU3E4__this_3)); }
	inline HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// LoadingSpinner/<FadeSpinner>d__12
struct U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A  : public RuntimeObject
{
public:
	// System.Int32 LoadingSpinner/<FadeSpinner>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadingSpinner/<FadeSpinner>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single LoadingSpinner/<FadeSpinner>d__12::lerpTime
	float ___lerpTime_2;
	// System.Single LoadingSpinner/<FadeSpinner>d__12::start
	float ___start_3;
	// System.Single LoadingSpinner/<FadeSpinner>d__12::end
	float ___end_4;
	// UnityEngine.CanvasGroup LoadingSpinner/<FadeSpinner>d__12::canvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup_5;
	// LoadingSpinner LoadingSpinner/<FadeSpinner>d__12::<>4__this
	LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * ___U3CU3E4__this_6;
	// System.Single LoadingSpinner/<FadeSpinner>d__12::<timeStartedLerping>5__2
	float ___U3CtimeStartedLerpingU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_lerpTime_2() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___lerpTime_2)); }
	inline float get_lerpTime_2() const { return ___lerpTime_2; }
	inline float* get_address_of_lerpTime_2() { return &___lerpTime_2; }
	inline void set_lerpTime_2(float value)
	{
		___lerpTime_2 = value;
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___start_3)); }
	inline float get_start_3() const { return ___start_3; }
	inline float* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(float value)
	{
		___start_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___end_4)); }
	inline float get_end_4() const { return ___end_4; }
	inline float* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(float value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_canvasGroup_5() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___canvasGroup_5)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_canvasGroup_5() const { return ___canvasGroup_5; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_canvasGroup_5() { return &___canvasGroup_5; }
	inline void set_canvasGroup_5(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___canvasGroup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasGroup_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_6() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___U3CU3E4__this_6)); }
	inline LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * get_U3CU3E4__this_6() const { return ___U3CU3E4__this_6; }
	inline LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE ** get_address_of_U3CU3E4__this_6() { return &___U3CU3E4__this_6; }
	inline void set_U3CU3E4__this_6(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * value)
	{
		___U3CU3E4__this_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeStartedLerpingU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A, ___U3CtimeStartedLerpingU3E5__2_7)); }
	inline float get_U3CtimeStartedLerpingU3E5__2_7() const { return ___U3CtimeStartedLerpingU3E5__2_7; }
	inline float* get_address_of_U3CtimeStartedLerpingU3E5__2_7() { return &___U3CtimeStartedLerpingU3E5__2_7; }
	inline void set_U3CtimeStartedLerpingU3E5__2_7(float value)
	{
		___U3CtimeStartedLerpingU3E5__2_7 = value;
	}
};


// NoticeHelper/<CheckDepthCoroutine>d__10
struct U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD  : public RuntimeObject
{
public:
	// System.Int32 NoticeHelper/<CheckDepthCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NoticeHelper/<CheckDepthCoroutine>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// PlayerScript/<BulletCool>d__8
struct U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4  : public RuntimeObject
{
public:
	// System.Int32 PlayerScript/<BulletCool>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerScript/<BulletCool>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerScript PlayerScript/<BulletCool>d__8::<>4__this
	PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4, ___U3CU3E4__this_2)); }
	inline PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ProjectileScript/<DestroyCount>d__12
struct U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3  : public RuntimeObject
{
public:
	// System.Int32 ProjectileScript/<DestroyCount>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ProjectileScript/<DestroyCount>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Recorder/<PlaybackDataset>d__22
struct U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412  : public RuntimeObject
{
public:
	// System.Int32 Recorder/<PlaybackDataset>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Recorder/<PlaybackDataset>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Recorder Recorder/<PlaybackDataset>d__22::<>4__this
	Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * ___U3CU3E4__this_2;
	// System.String Recorder/<PlaybackDataset>d__22::datasetPath
	String_t* ___datasetPath_3;
	// Recorder/<>c__DisplayClass22_0 Recorder/<PlaybackDataset>d__22::<>8__1
	U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * ___U3CU3E8__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412, ___U3CU3E4__this_2)); }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_datasetPath_3() { return static_cast<int32_t>(offsetof(U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412, ___datasetPath_3)); }
	inline String_t* get_datasetPath_3() const { return ___datasetPath_3; }
	inline String_t** get_address_of_datasetPath_3() { return &___datasetPath_3; }
	inline void set_datasetPath_3(String_t* value)
	{
		___datasetPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datasetPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_4() { return static_cast<int32_t>(offsetof(U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412, ___U3CU3E8__1_4)); }
	inline U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * get_U3CU3E8__1_4() const { return ___U3CU3E8__1_4; }
	inline U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC ** get_address_of_U3CU3E8__1_4() { return &___U3CU3E8__1_4; }
	inline void set_U3CU3E8__1_4(U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * value)
	{
		___U3CU3E8__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_4), (void*)value);
	}
};


// Recorder/<Record>d__21
struct U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0  : public RuntimeObject
{
public:
	// System.Int32 Recorder/<Record>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Recorder/<Record>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Recorder Recorder/<Record>d__21::<>4__this
	Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * ___U3CU3E4__this_2;
	// Recorder/<>c__DisplayClass21_0 Recorder/<Record>d__21::<>8__1
	U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * ___U3CU3E8__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0, ___U3CU3E4__this_2)); }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}
};


// RotateCarouselButton/<GetValidDeviceOrientation>d__2
struct U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE  : public RuntimeObject
{
public:
	// System.Int32 RotateCarouselButton/<GetValidDeviceOrientation>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RotateCarouselButton/<GetValidDeviceOrientation>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RotateCarouselButton RotateCarouselButton/<GetValidDeviceOrientation>d__2::<>4__this
	RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE, ___U3CU3E4__this_2)); }
	inline RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SceneSwitcher/<InitSceneLoad>d__8
struct U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3  : public RuntimeObject
{
public:
	// System.Int32 SceneSwitcher/<InitSceneLoad>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneSwitcher/<InitSceneLoad>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SceneSwitcher SceneSwitcher/<InitSceneLoad>d__8::<>4__this
	SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3, ___U3CU3E4__this_2)); }
	inline SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SceneSwitcher/<LoadSceneAsync>d__11
struct U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23  : public RuntimeObject
{
public:
	// System.Int32 SceneSwitcher/<LoadSceneAsync>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneSwitcher/<LoadSceneAsync>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String SceneSwitcher/<LoadSceneAsync>d__11::sceneName
	String_t* ___sceneName_2;
	// SceneSwitcher SceneSwitcher/<LoadSceneAsync>d__11::<>4__this
	SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation SceneSwitcher/<LoadSceneAsync>d__11::<_async>5__2
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3C_asyncU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23, ___sceneName_2)); }
	inline String_t* get_sceneName_2() const { return ___sceneName_2; }
	inline String_t** get_address_of_sceneName_2() { return &___sceneName_2; }
	inline void set_sceneName_2(String_t* value)
	{
		___sceneName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23, ___U3CU3E4__this_3)); }
	inline SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3C_asyncU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23, ___U3C_asyncU3E5__2_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3C_asyncU3E5__2_4() const { return ___U3C_asyncU3E5__2_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3C_asyncU3E5__2_4() { return &___U3C_asyncU3E5__2_4; }
	inline void set_U3C_asyncU3E5__2_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3C_asyncU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_asyncU3E5__2_4), (void*)value);
	}
};


// Whirlwind/<Ded>d__3
struct U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700  : public RuntimeObject
{
public:
	// System.Int32 Whirlwind/<Ded>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Whirlwind/<Ded>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Whirlwind Whirlwind/<Ded>d__3::<>4__this
	Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700, ___U3CU3E4__this_2)); }
	inline Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.RectInt
struct RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitWhile
struct WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F__padding[32];
	};

public:
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>
struct Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A, ___list_0)); }
	inline List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * get_list_0() const { return ___list_0; }
	inline List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A, ___current_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_current_3() const { return ___current_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___current_3 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.DeviceOrientation
struct DeviceOrientation_t73A4A44136AE4C97E4139F7805534F9CBCB9782C 
{
public:
	// System.Int32 UnityEngine.DeviceOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceOrientation_t73A4A44136AE4C97E4139F7805534F9CBCB9782C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
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

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// Google.XR.ARCoreExtensions.PlaybackResult
struct PlaybackResult_tAB72CDFC6D688237C20AABFA1C13B1249BAE90FC 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.PlaybackResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaybackResult_tAB72CDFC6D688237C20AABFA1C13B1249BAE90FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Google.XR.ARCoreExtensions.RecordingResult
struct RecordingResult_t80BF850E9AB903D64644EBA83D7746195C733C5C 
{
public:
	// System.Int32 Google.XR.ARCoreExtensions.RecordingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecordingResult_t80BF850E9AB903D64644EBA83D7746195C733C5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SpeedAdaptiveFilter
struct SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B  : public RuntimeObject
{
public:
	// System.Single SpeedAdaptiveFilter::_lastValue
	float ____lastValue_0;
	// System.Single SpeedAdaptiveFilter::_sensorFrequency
	float ____sensorFrequency_1;
	// System.Single SpeedAdaptiveFilter::_minCutoff
	float ____minCutoff_2;
	// System.Single SpeedAdaptiveFilter::_betaCutoffSlope
	float ____betaCutoffSlope_3;
	// System.Single SpeedAdaptiveFilter::_derivateCutoffFrequency
	float ____derivateCutoffFrequency_4;
	// LowPassFilter SpeedAdaptiveFilter::_xFilter
	LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * ____xFilter_5;
	// LowPassFilter SpeedAdaptiveFilter::_dxFilter
	LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * ____dxFilter_6;
	// System.DateTime SpeedAdaptiveFilter::_prevTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____prevTime_7;

public:
	inline static int32_t get_offset_of__lastValue_0() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____lastValue_0)); }
	inline float get__lastValue_0() const { return ____lastValue_0; }
	inline float* get_address_of__lastValue_0() { return &____lastValue_0; }
	inline void set__lastValue_0(float value)
	{
		____lastValue_0 = value;
	}

	inline static int32_t get_offset_of__sensorFrequency_1() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____sensorFrequency_1)); }
	inline float get__sensorFrequency_1() const { return ____sensorFrequency_1; }
	inline float* get_address_of__sensorFrequency_1() { return &____sensorFrequency_1; }
	inline void set__sensorFrequency_1(float value)
	{
		____sensorFrequency_1 = value;
	}

	inline static int32_t get_offset_of__minCutoff_2() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____minCutoff_2)); }
	inline float get__minCutoff_2() const { return ____minCutoff_2; }
	inline float* get_address_of__minCutoff_2() { return &____minCutoff_2; }
	inline void set__minCutoff_2(float value)
	{
		____minCutoff_2 = value;
	}

	inline static int32_t get_offset_of__betaCutoffSlope_3() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____betaCutoffSlope_3)); }
	inline float get__betaCutoffSlope_3() const { return ____betaCutoffSlope_3; }
	inline float* get_address_of__betaCutoffSlope_3() { return &____betaCutoffSlope_3; }
	inline void set__betaCutoffSlope_3(float value)
	{
		____betaCutoffSlope_3 = value;
	}

	inline static int32_t get_offset_of__derivateCutoffFrequency_4() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____derivateCutoffFrequency_4)); }
	inline float get__derivateCutoffFrequency_4() const { return ____derivateCutoffFrequency_4; }
	inline float* get_address_of__derivateCutoffFrequency_4() { return &____derivateCutoffFrequency_4; }
	inline void set__derivateCutoffFrequency_4(float value)
	{
		____derivateCutoffFrequency_4 = value;
	}

	inline static int32_t get_offset_of__xFilter_5() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____xFilter_5)); }
	inline LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * get__xFilter_5() const { return ____xFilter_5; }
	inline LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 ** get_address_of__xFilter_5() { return &____xFilter_5; }
	inline void set__xFilter_5(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * value)
	{
		____xFilter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xFilter_5), (void*)value);
	}

	inline static int32_t get_offset_of__dxFilter_6() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____dxFilter_6)); }
	inline LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * get__dxFilter_6() const { return ____dxFilter_6; }
	inline LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 ** get_address_of__dxFilter_6() { return &____dxFilter_6; }
	inline void set__dxFilter_6(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * value)
	{
		____dxFilter_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dxFilter_6), (void*)value);
	}

	inline static int32_t get_offset_of__prevTime_7() { return static_cast<int32_t>(offsetof(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B, ____prevTime_7)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__prevTime_7() const { return ____prevTime_7; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__prevTime_7() { return &____prevTime_7; }
	inline void set__prevTime_7(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____prevTime_7 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AvatarController/<LookAtCameraCoroutine>d__19
struct U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37  : public RuntimeObject
{
public:
	// System.Int32 AvatarController/<LookAtCameraCoroutine>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AvatarController/<LookAtCameraCoroutine>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AvatarController AvatarController/<LookAtCameraCoroutine>d__19::<>4__this
	AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * ___U3CU3E4__this_2;
	// System.Single AvatarController/<LookAtCameraCoroutine>d__19::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
	// UnityEngine.Vector3 AvatarController/<LookAtCameraCoroutine>d__19::<LookAtPos>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CLookAtPosU3E5__3_4;
	// UnityEngine.Quaternion AvatarController/<LookAtCameraCoroutine>d__19::<sourceRotation>5__4
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CsourceRotationU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37, ___U3CU3E4__this_2)); }
	inline AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtPosU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37, ___U3CLookAtPosU3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CLookAtPosU3E5__3_4() const { return ___U3CLookAtPosU3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CLookAtPosU3E5__3_4() { return &___U3CLookAtPosU3E5__3_4; }
	inline void set_U3CLookAtPosU3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CLookAtPosU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CsourceRotationU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37, ___U3CsourceRotationU3E5__4_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CsourceRotationU3E5__4_5() const { return ___U3CsourceRotationU3E5__4_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CsourceRotationU3E5__4_5() { return &___U3CsourceRotationU3E5__4_5; }
	inline void set_U3CsourceRotationU3E5__4_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CsourceRotationU3E5__4_5 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Recorder/RecorderStatus
struct RecorderStatus_t8EB771FDD776E97B2964D119C4CD00E1EF884A3B 
{
public:
	// System.Int32 Recorder/RecorderStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecorderStatus_t8EB771FDD776E97B2964D119C4CD00E1EF884A3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// Recorder/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511  : public RuntimeObject
{
public:
	// Google.XR.ARCoreExtensions.RecordingResult Recorder/<>c__DisplayClass21_0::result
	int32_t ___result_0;
	// Recorder Recorder/<>c__DisplayClass21_0::<>4__this
	Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511, ___result_0)); }
	inline int32_t get_result_0() const { return ___result_0; }
	inline int32_t* get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(int32_t value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511, ___U3CU3E4__this_1)); }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Recorder/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC  : public RuntimeObject
{
public:
	// Google.XR.ARCoreExtensions.PlaybackResult Recorder/<>c__DisplayClass22_0::result
	int32_t ___result_0;
	// Recorder Recorder/<>c__DisplayClass22_0::<>4__this
	Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * ___U3CU3E4__this_1;
	// System.String Recorder/<>c__DisplayClass22_0::datasetPath
	String_t* ___datasetPath_2;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC, ___result_0)); }
	inline int32_t get_result_0() const { return ___result_0; }
	inline int32_t* get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(int32_t value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC, ___U3CU3E4__this_1)); }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_datasetPath_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC, ___datasetPath_2)); }
	inline String_t* get_datasetPath_2() const { return ___datasetPath_2; }
	inline String_t** get_address_of_datasetPath_2() { return &___datasetPath_2; }
	inline void set_datasetPath_2(String_t* value)
	{
		___datasetPath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datasetPath_2), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Google.XR.ARCoreExtensions.ARCoreRecordingConfig::AutoStopOnPause
	bool ___AutoStopOnPause_4;
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track> Google.XR.ARCoreExtensions.ARCoreRecordingConfig::Tracks
	List_1_tC99819DB8413C2B7D5C8755BF8D2188DD7F4736D * ___Tracks_5;
	// System.Uri Google.XR.ARCoreExtensions.ARCoreRecordingConfig::Mp4DatasetUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___Mp4DatasetUri_6;

public:
	inline static int32_t get_offset_of_AutoStopOnPause_4() { return static_cast<int32_t>(offsetof(ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46, ___AutoStopOnPause_4)); }
	inline bool get_AutoStopOnPause_4() const { return ___AutoStopOnPause_4; }
	inline bool* get_address_of_AutoStopOnPause_4() { return &___AutoStopOnPause_4; }
	inline void set_AutoStopOnPause_4(bool value)
	{
		___AutoStopOnPause_4 = value;
	}

	inline static int32_t get_offset_of_Tracks_5() { return static_cast<int32_t>(offsetof(ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46, ___Tracks_5)); }
	inline List_1_tC99819DB8413C2B7D5C8755BF8D2188DD7F4736D * get_Tracks_5() const { return ___Tracks_5; }
	inline List_1_tC99819DB8413C2B7D5C8755BF8D2188DD7F4736D ** get_address_of_Tracks_5() { return &___Tracks_5; }
	inline void set_Tracks_5(List_1_tC99819DB8413C2B7D5C8755BF8D2188DD7F4736D * value)
	{
		___Tracks_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tracks_5), (void*)value);
	}

	inline static int32_t get_offset_of_Mp4DatasetUri_6() { return static_cast<int32_t>(offsetof(ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46, ___Mp4DatasetUri_6)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_Mp4DatasetUri_6() const { return ___Mp4DatasetUri_6; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_Mp4DatasetUri_6() { return &___Mp4DatasetUri_6; }
	inline void set_Mp4DatasetUri_6(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___Mp4DatasetUri_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mp4DatasetUri_6), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// OcclusionChanged
struct OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
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


// MotionStereoDepthDataSource/AcquireDepthImageDelegate
struct AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
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


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Testing
struct Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// UnityEngine.GameObject Testing::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_4;
	// UnityEngine.GameObject Testing::localProjectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___localProjectile_5;

public:
	inline static int32_t get_offset_of_projectile_4() { return static_cast<int32_t>(offsetof(Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784, ___projectile_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_4() const { return ___projectile_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_4() { return &___projectile_4; }
	inline void set_projectile_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_4), (void*)value);
	}

	inline static int32_t get_offset_of_localProjectile_5() { return static_cast<int32_t>(offsetof(Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784, ___localProjectile_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_localProjectile_5() const { return ___localProjectile_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_localProjectile_5() { return &___localProjectile_5; }
	inline void set_localProjectile_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___localProjectile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localProjectile_5), (void*)value);
	}
};


// TutorialTesting
struct TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// UnityEngine.GameObject TutorialTesting::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_4;
	// UnityEngine.GameObject TutorialTesting::localProjectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___localProjectile_5;

public:
	inline static int32_t get_offset_of_projectile_4() { return static_cast<int32_t>(offsetof(TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42, ___projectile_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_4() const { return ___projectile_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_4() { return &___projectile_4; }
	inline void set_projectile_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_4), (void*)value);
	}

	inline static int32_t get_offset_of_localProjectile_5() { return static_cast<int32_t>(offsetof(TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42, ___localProjectile_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_localProjectile_5() const { return ___localProjectile_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_localProjectile_5() { return &___localProjectile_5; }
	inline void set_localProjectile_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___localProjectile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localProjectile_5), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * ____cachedFilter_17;

public:
	inline static int32_t get_offset_of_Session_4() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___Session_4)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get_Session_4() const { return ___Session_4; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of_Session_4() { return &___Session_4; }
	inline void set_Session_4(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		___Session_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Session_4), (void*)value);
	}

	inline static int32_t get_offset_of_SessionOrigin_5() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___SessionOrigin_5)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_SessionOrigin_5() const { return ___SessionOrigin_5; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_SessionOrigin_5() { return &___SessionOrigin_5; }
	inline void set_SessionOrigin_5(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___SessionOrigin_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionOrigin_5), (void*)value);
	}

	inline static int32_t get_offset_of_CameraManager_6() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___CameraManager_6)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_CameraManager_6() const { return ___CameraManager_6; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_CameraManager_6() { return &___CameraManager_6; }
	inline void set_CameraManager_6(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___CameraManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_ARCoreExtensionsConfig_7() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___ARCoreExtensionsConfig_7)); }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * get_ARCoreExtensionsConfig_7() const { return ___ARCoreExtensionsConfig_7; }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 ** get_address_of_ARCoreExtensionsConfig_7() { return &___ARCoreExtensionsConfig_7; }
	inline void set_ARCoreExtensionsConfig_7(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * value)
	{
		___ARCoreExtensionsConfig_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARCoreExtensionsConfig_7), (void*)value);
	}

	inline static int32_t get_offset_of_CameraConfigFilter_8() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___CameraConfigFilter_8)); }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * get_CameraConfigFilter_8() const { return ___CameraConfigFilter_8; }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 ** get_address_of_CameraConfigFilter_8() { return &___CameraConfigFilter_8; }
	inline void set_CameraConfigFilter_8(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * value)
	{
		___CameraConfigFilter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraConfigFilter_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnChooseXRCameraConfiguration_9() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ___OnChooseXRCameraConfiguration_9)); }
	inline OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * get_OnChooseXRCameraConfiguration_9() const { return ___OnChooseXRCameraConfiguration_9; }
	inline OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 ** get_address_of_OnChooseXRCameraConfiguration_9() { return &___OnChooseXRCameraConfiguration_9; }
	inline void set_OnChooseXRCameraConfiguration_9(OnChooseXRCameraConfigurationEvent_t04D1FA1451FA3C598B834C13638BFDE2F4B32454 * value)
	{
		___OnChooseXRCameraConfiguration_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnChooseXRCameraConfiguration_9), (void*)value);
	}

	inline static int32_t get_offset_of__currentPermissionRequest_12() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____currentPermissionRequest_12)); }
	inline String_t* get__currentPermissionRequest_12() const { return ____currentPermissionRequest_12; }
	inline String_t** get_address_of__currentPermissionRequest_12() { return &____currentPermissionRequest_12; }
	inline void set__currentPermissionRequest_12(String_t* value)
	{
		____currentPermissionRequest_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentPermissionRequest_12), (void*)value);
	}

	inline static int32_t get_offset_of__requiredPermissionNames_13() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____requiredPermissionNames_13)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__requiredPermissionNames_13() const { return ____requiredPermissionNames_13; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__requiredPermissionNames_13() { return &____requiredPermissionNames_13; }
	inline void set__requiredPermissionNames_13(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____requiredPermissionNames_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requiredPermissionNames_13), (void*)value);
	}

	inline static int32_t get_offset_of__arCoreSubsystem_14() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____arCoreSubsystem_14)); }
	inline ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * get__arCoreSubsystem_14() const { return ____arCoreSubsystem_14; }
	inline ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 ** get_address_of__arCoreSubsystem_14() { return &____arCoreSubsystem_14; }
	inline void set__arCoreSubsystem_14(ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * value)
	{
		____arCoreSubsystem_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arCoreSubsystem_14), (void*)value);
	}

	inline static int32_t get_offset_of__cachedConfig_15() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____cachedConfig_15)); }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * get__cachedConfig_15() const { return ____cachedConfig_15; }
	inline ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 ** get_address_of__cachedConfig_15() { return &____cachedConfig_15; }
	inline void set__cachedConfig_15(ARCoreExtensionsConfig_t283622D175923ECCAF4C880BE6E80EEE08F628A8 * value)
	{
		____cachedConfig_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedConfig_15), (void*)value);
	}

	inline static int32_t get_offset_of__arCoreCameraSubsystem_16() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____arCoreCameraSubsystem_16)); }
	inline ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * get__arCoreCameraSubsystem_16() const { return ____arCoreCameraSubsystem_16; }
	inline ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C ** get_address_of__arCoreCameraSubsystem_16() { return &____arCoreCameraSubsystem_16; }
	inline void set__arCoreCameraSubsystem_16(ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * value)
	{
		____arCoreCameraSubsystem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arCoreCameraSubsystem_16), (void*)value);
	}

	inline static int32_t get_offset_of__cachedFilter_17() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB, ____cachedFilter_17)); }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * get__cachedFilter_17() const { return ____cachedFilter_17; }
	inline ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 ** get_address_of__cachedFilter_17() { return &____cachedFilter_17; }
	inline void set__cachedFilter_17(ARCoreExtensionsCameraConfigFilter_t90F26D0CA1E917BA4E190DEB1D4247AAD2A4B223 * value)
	{
		____cachedFilter_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedFilter_17), (void*)value);
	}
};

struct ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___U3C_instanceU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of__versionInfo_11() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields, ____versionInfo_11)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get__versionInfo_11() const { return ____versionInfo_11; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of__versionInfo_11() { return &____versionInfo_11; }
	inline void set__versionInfo_11(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		____versionInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____versionInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3C_instanceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB_StaticFields, ___U3C_instanceU3Ek__BackingField_18)); }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * get_U3C_instanceU3Ek__BackingField_18() const { return ___U3C_instanceU3Ek__BackingField_18; }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB ** get_address_of_U3C_instanceU3Ek__BackingField_18() { return &___U3C_instanceU3Ek__BackingField_18; }
	inline void set_U3C_instanceU3Ek__BackingField_18(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * value)
	{
		___U3C_instanceU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_instanceU3Ek__BackingField_18), (void*)value);
	}
};


// Google.XR.ARCoreExtensions.ARPlaybackManager
struct ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Google.XR.ARCoreExtensions.ARRecordingManager
struct ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// AvatarController
struct AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single AvatarController::BaseSpeed
	float ___BaseSpeed_4;
	// System.Boolean AvatarController::EnableAvatarManipulation
	bool ___EnableAvatarManipulation_5;
	// UnityEngine.Vector3 AvatarController::_guidePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____guidePosition_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AvatarController::_cubeObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____cubeObjects_16;

public:
	inline static int32_t get_offset_of_BaseSpeed_4() { return static_cast<int32_t>(offsetof(AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E, ___BaseSpeed_4)); }
	inline float get_BaseSpeed_4() const { return ___BaseSpeed_4; }
	inline float* get_address_of_BaseSpeed_4() { return &___BaseSpeed_4; }
	inline void set_BaseSpeed_4(float value)
	{
		___BaseSpeed_4 = value;
	}

	inline static int32_t get_offset_of_EnableAvatarManipulation_5() { return static_cast<int32_t>(offsetof(AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E, ___EnableAvatarManipulation_5)); }
	inline bool get_EnableAvatarManipulation_5() const { return ___EnableAvatarManipulation_5; }
	inline bool* get_address_of_EnableAvatarManipulation_5() { return &___EnableAvatarManipulation_5; }
	inline void set_EnableAvatarManipulation_5(bool value)
	{
		___EnableAvatarManipulation_5 = value;
	}

	inline static int32_t get_offset_of__guidePosition_15() { return static_cast<int32_t>(offsetof(AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E, ____guidePosition_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__guidePosition_15() const { return ____guidePosition_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__guidePosition_15() { return &____guidePosition_15; }
	inline void set__guidePosition_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____guidePosition_15 = value;
	}

	inline static int32_t get_offset_of__cubeObjects_16() { return static_cast<int32_t>(offsetof(AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E, ____cubeObjects_16)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__cubeObjects_16() const { return ____cubeObjects_16; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__cubeObjects_16() { return &____cubeObjects_16; }
	inline void set__cubeObjects_16(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____cubeObjects_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cubeObjects_16), (void*)value);
	}
};


// BackgroundToDepthMapEffectController
struct BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ShadowReceiverMesh BackgroundToDepthMapEffectController::ShadowReceiver
	ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * ___ShadowReceiver_4;
	// System.Single BackgroundToDepthMapEffectController::Transition
	float ___Transition_5;
	// System.Single BackgroundToDepthMapEffectController::CameraViewOpacity
	float ___CameraViewOpacity_6;
	// UnityEngine.Material BackgroundToDepthMapEffectController::BackgroundToDepthMapMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___BackgroundToDepthMapMaterial_7;
	// UnityEngine.Coroutine BackgroundToDepthMapEffectController::_currentCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____currentCoroutine_19;
	// System.Boolean BackgroundToDepthMapEffectController::_enableOcclusionTransition
	bool ____enableOcclusionTransition_20;
	// System.Boolean BackgroundToDepthMapEffectController::_occlusionOn
	bool ____occlusionOn_21;
	// System.Single BackgroundToDepthMapEffectController::_transitionDurationS
	float ____transitionDurationS_22;
	// System.Single BackgroundToDepthMapEffectController::_maxVisualizationDistanceM
	float ____maxVisualizationDistanceM_23;
	// System.Single BackgroundToDepthMapEffectController::_minVisualizationDistanceM
	float ____minVisualizationDistanceM_24;
	// System.Single BackgroundToDepthMapEffectController::_farFadePortion
	float ____farFadePortion_25;
	// System.Single BackgroundToDepthMapEffectController::_halfTransitionHighlightWidth
	float ____halfTransitionHighlightWidth_26;
	// System.Single BackgroundToDepthMapEffectController::_applyAntiAliasing
	float ____applyAntiAliasing_27;
	// UnityEngine.Material BackgroundToDepthMapEffectController::_shadowReceiverMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____shadowReceiverMaterial_28;
	// OcclusionChanged BackgroundToDepthMapEffectController::OcclusionChangedEvent
	OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * ___OcclusionChangedEvent_29;

public:
	inline static int32_t get_offset_of_ShadowReceiver_4() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ___ShadowReceiver_4)); }
	inline ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * get_ShadowReceiver_4() const { return ___ShadowReceiver_4; }
	inline ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA ** get_address_of_ShadowReceiver_4() { return &___ShadowReceiver_4; }
	inline void set_ShadowReceiver_4(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * value)
	{
		___ShadowReceiver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShadowReceiver_4), (void*)value);
	}

	inline static int32_t get_offset_of_Transition_5() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ___Transition_5)); }
	inline float get_Transition_5() const { return ___Transition_5; }
	inline float* get_address_of_Transition_5() { return &___Transition_5; }
	inline void set_Transition_5(float value)
	{
		___Transition_5 = value;
	}

	inline static int32_t get_offset_of_CameraViewOpacity_6() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ___CameraViewOpacity_6)); }
	inline float get_CameraViewOpacity_6() const { return ___CameraViewOpacity_6; }
	inline float* get_address_of_CameraViewOpacity_6() { return &___CameraViewOpacity_6; }
	inline void set_CameraViewOpacity_6(float value)
	{
		___CameraViewOpacity_6 = value;
	}

	inline static int32_t get_offset_of_BackgroundToDepthMapMaterial_7() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ___BackgroundToDepthMapMaterial_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_BackgroundToDepthMapMaterial_7() const { return ___BackgroundToDepthMapMaterial_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_BackgroundToDepthMapMaterial_7() { return &___BackgroundToDepthMapMaterial_7; }
	inline void set_BackgroundToDepthMapMaterial_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___BackgroundToDepthMapMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundToDepthMapMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of__currentCoroutine_19() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____currentCoroutine_19)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__currentCoroutine_19() const { return ____currentCoroutine_19; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__currentCoroutine_19() { return &____currentCoroutine_19; }
	inline void set__currentCoroutine_19(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____currentCoroutine_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentCoroutine_19), (void*)value);
	}

	inline static int32_t get_offset_of__enableOcclusionTransition_20() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____enableOcclusionTransition_20)); }
	inline bool get__enableOcclusionTransition_20() const { return ____enableOcclusionTransition_20; }
	inline bool* get_address_of__enableOcclusionTransition_20() { return &____enableOcclusionTransition_20; }
	inline void set__enableOcclusionTransition_20(bool value)
	{
		____enableOcclusionTransition_20 = value;
	}

	inline static int32_t get_offset_of__occlusionOn_21() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____occlusionOn_21)); }
	inline bool get__occlusionOn_21() const { return ____occlusionOn_21; }
	inline bool* get_address_of__occlusionOn_21() { return &____occlusionOn_21; }
	inline void set__occlusionOn_21(bool value)
	{
		____occlusionOn_21 = value;
	}

	inline static int32_t get_offset_of__transitionDurationS_22() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____transitionDurationS_22)); }
	inline float get__transitionDurationS_22() const { return ____transitionDurationS_22; }
	inline float* get_address_of__transitionDurationS_22() { return &____transitionDurationS_22; }
	inline void set__transitionDurationS_22(float value)
	{
		____transitionDurationS_22 = value;
	}

	inline static int32_t get_offset_of__maxVisualizationDistanceM_23() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____maxVisualizationDistanceM_23)); }
	inline float get__maxVisualizationDistanceM_23() const { return ____maxVisualizationDistanceM_23; }
	inline float* get_address_of__maxVisualizationDistanceM_23() { return &____maxVisualizationDistanceM_23; }
	inline void set__maxVisualizationDistanceM_23(float value)
	{
		____maxVisualizationDistanceM_23 = value;
	}

	inline static int32_t get_offset_of__minVisualizationDistanceM_24() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____minVisualizationDistanceM_24)); }
	inline float get__minVisualizationDistanceM_24() const { return ____minVisualizationDistanceM_24; }
	inline float* get_address_of__minVisualizationDistanceM_24() { return &____minVisualizationDistanceM_24; }
	inline void set__minVisualizationDistanceM_24(float value)
	{
		____minVisualizationDistanceM_24 = value;
	}

	inline static int32_t get_offset_of__farFadePortion_25() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____farFadePortion_25)); }
	inline float get__farFadePortion_25() const { return ____farFadePortion_25; }
	inline float* get_address_of__farFadePortion_25() { return &____farFadePortion_25; }
	inline void set__farFadePortion_25(float value)
	{
		____farFadePortion_25 = value;
	}

	inline static int32_t get_offset_of__halfTransitionHighlightWidth_26() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____halfTransitionHighlightWidth_26)); }
	inline float get__halfTransitionHighlightWidth_26() const { return ____halfTransitionHighlightWidth_26; }
	inline float* get_address_of__halfTransitionHighlightWidth_26() { return &____halfTransitionHighlightWidth_26; }
	inline void set__halfTransitionHighlightWidth_26(float value)
	{
		____halfTransitionHighlightWidth_26 = value;
	}

	inline static int32_t get_offset_of__applyAntiAliasing_27() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____applyAntiAliasing_27)); }
	inline float get__applyAntiAliasing_27() const { return ____applyAntiAliasing_27; }
	inline float* get_address_of__applyAntiAliasing_27() { return &____applyAntiAliasing_27; }
	inline void set__applyAntiAliasing_27(float value)
	{
		____applyAntiAliasing_27 = value;
	}

	inline static int32_t get_offset_of__shadowReceiverMaterial_28() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ____shadowReceiverMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__shadowReceiverMaterial_28() const { return ____shadowReceiverMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__shadowReceiverMaterial_28() { return &____shadowReceiverMaterial_28; }
	inline void set__shadowReceiverMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____shadowReceiverMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowReceiverMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_OcclusionChangedEvent_29() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF, ___OcclusionChangedEvent_29)); }
	inline OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * get_OcclusionChangedEvent_29() const { return ___OcclusionChangedEvent_29; }
	inline OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 ** get_address_of_OcclusionChangedEvent_29() { return &___OcclusionChangedEvent_29; }
	inline void set_OcclusionChangedEvent_29(OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * value)
	{
		___OcclusionChangedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OcclusionChangedEvent_29), (void*)value);
	}
};

struct BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF_StaticFields
{
public:
	// System.String BackgroundToDepthMapEffectController::_transitionPropertyName
	String_t* ____transitionPropertyName_13;
	// System.String BackgroundToDepthMapEffectController::_cameraViewOpacityPropertyName
	String_t* ____cameraViewOpacityPropertyName_14;
	// System.String BackgroundToDepthMapEffectController::_maxVisualizationDistancePropertyName
	String_t* ____maxVisualizationDistancePropertyName_15;
	// System.String BackgroundToDepthMapEffectController::_minVisualizationDistancePropertyName
	String_t* ____minVisualizationDistancePropertyName_16;
	// System.String BackgroundToDepthMapEffectController::_farFadePortionPropertyName
	String_t* ____farFadePortionPropertyName_17;
	// System.String BackgroundToDepthMapEffectController::_halfTransitionHighlightWidtPropertyName
	String_t* ____halfTransitionHighlightWidtPropertyName_18;

public:
	inline static int32_t get_offset_of__transitionPropertyName_13() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF_StaticFields, ____transitionPropertyName_13)); }
	inline String_t* get__transitionPropertyName_13() const { return ____transitionPropertyName_13; }
	inline String_t** get_address_of__transitionPropertyName_13() { return &____transitionPropertyName_13; }
	inline void set__transitionPropertyName_13(String_t* value)
	{
		____transitionPropertyName_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transitionPropertyName_13), (void*)value);
	}

	inline static int32_t get_offset_of__cameraViewOpacityPropertyName_14() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF_StaticFields, ____cameraViewOpacityPropertyName_14)); }
	inline String_t* get__cameraViewOpacityPropertyName_14() const { return ____cameraViewOpacityPropertyName_14; }
	inline String_t** get_address_of__cameraViewOpacityPropertyName_14() { return &____cameraViewOpacityPropertyName_14; }
	inline void set__cameraViewOpacityPropertyName_14(String_t* value)
	{
		____cameraViewOpacityPropertyName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraViewOpacityPropertyName_14), (void*)value);
	}

	inline static int32_t get_offset_of__maxVisualizationDistancePropertyName_15() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF_StaticFields, ____maxVisualizationDistancePropertyName_15)); }
	inline String_t* get__maxVisualizationDistancePropertyName_15() const { return ____maxVisualizationDistancePropertyName_15; }
	inline String_t** get_address_of__maxVisualizationDistancePropertyName_15() { return &____maxVisualizationDistancePropertyName_15; }
	inline void set__maxVisualizationDistancePropertyName_15(String_t* value)
	{
		____maxVisualizationDistancePropertyName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maxVisualizationDistancePropertyName_15), (void*)value);
	}

	inline static int32_t get_offset_of__minVisualizationDistancePropertyName_16() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF_StaticFields, ____minVisualizationDistancePropertyName_16)); }
	inline String_t* get__minVisualizationDistancePropertyName_16() const { return ____minVisualizationDistancePropertyName_16; }
	inline String_t** get_address_of__minVisualizationDistancePropertyName_16() { return &____minVisualizationDistancePropertyName_16; }
	inline void set__minVisualizationDistancePropertyName_16(String_t* value)
	{
		____minVisualizationDistancePropertyName_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minVisualizationDistancePropertyName_16), (void*)value);
	}

	inline static int32_t get_offset_of__farFadePortionPropertyName_17() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF_StaticFields, ____farFadePortionPropertyName_17)); }
	inline String_t* get__farFadePortionPropertyName_17() const { return ____farFadePortionPropertyName_17; }
	inline String_t** get_address_of__farFadePortionPropertyName_17() { return &____farFadePortionPropertyName_17; }
	inline void set__farFadePortionPropertyName_17(String_t* value)
	{
		____farFadePortionPropertyName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____farFadePortionPropertyName_17), (void*)value);
	}

	inline static int32_t get_offset_of__halfTransitionHighlightWidtPropertyName_18() { return static_cast<int32_t>(offsetof(BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF_StaticFields, ____halfTransitionHighlightWidtPropertyName_18)); }
	inline String_t* get__halfTransitionHighlightWidtPropertyName_18() const { return ____halfTransitionHighlightWidtPropertyName_18; }
	inline String_t** get_address_of__halfTransitionHighlightWidtPropertyName_18() { return &____halfTransitionHighlightWidtPropertyName_18; }
	inline void set__halfTransitionHighlightWidtPropertyName_18(String_t* value)
	{
		____halfTransitionHighlightWidtPropertyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____halfTransitionHighlightWidtPropertyName_18), (void*)value);
	}
};


// BulletBarrage
struct BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean BulletBarrage::projectileCooldown
	bool ___projectileCooldown_4;
	// UnityEngine.GameObject BulletBarrage::localProjectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___localProjectile_5;
	// UnityEngine.GameObject BulletBarrage::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_6;
	// System.Single BulletBarrage::speed
	float ___speed_7;
	// UnityEngine.Transform BulletBarrage::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_8;

public:
	inline static int32_t get_offset_of_projectileCooldown_4() { return static_cast<int32_t>(offsetof(BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8, ___projectileCooldown_4)); }
	inline bool get_projectileCooldown_4() const { return ___projectileCooldown_4; }
	inline bool* get_address_of_projectileCooldown_4() { return &___projectileCooldown_4; }
	inline void set_projectileCooldown_4(bool value)
	{
		___projectileCooldown_4 = value;
	}

	inline static int32_t get_offset_of_localProjectile_5() { return static_cast<int32_t>(offsetof(BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8, ___localProjectile_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_localProjectile_5() const { return ___localProjectile_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_localProjectile_5() { return &___localProjectile_5; }
	inline void set_localProjectile_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___localProjectile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localProjectile_5), (void*)value);
	}

	inline static int32_t get_offset_of_projectile_6() { return static_cast<int32_t>(offsetof(BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8, ___projectile_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_6() const { return ___projectile_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_6() { return &___projectile_6; }
	inline void set_projectile_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_6), (void*)value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8, ___player_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_8() const { return ___player_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}
};


// CarouselLabelOrientation
struct CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CarouselLabelOrientation::SceneLabelPortrait
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SceneLabelPortrait_4;
	// UnityEngine.GameObject CarouselLabelOrientation::SceneLabelLandscapeLeft
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SceneLabelLandscapeLeft_5;
	// UnityEngine.GameObject CarouselLabelOrientation::SceneLabelLandscapeRight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SceneLabelLandscapeRight_6;
	// CarouselMovement CarouselLabelOrientation::CarouselMovement
	CarouselMovement_tAF48659B09D5F7089CFA8D9E0EA14A18F105CD5A * ___CarouselMovement_7;
	// UnityEngine.DeviceOrientation CarouselLabelOrientation::_deviceOrientationInit
	int32_t ____deviceOrientationInit_8;

public:
	inline static int32_t get_offset_of_SceneLabelPortrait_4() { return static_cast<int32_t>(offsetof(CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8, ___SceneLabelPortrait_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SceneLabelPortrait_4() const { return ___SceneLabelPortrait_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SceneLabelPortrait_4() { return &___SceneLabelPortrait_4; }
	inline void set_SceneLabelPortrait_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SceneLabelPortrait_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneLabelPortrait_4), (void*)value);
	}

	inline static int32_t get_offset_of_SceneLabelLandscapeLeft_5() { return static_cast<int32_t>(offsetof(CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8, ___SceneLabelLandscapeLeft_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SceneLabelLandscapeLeft_5() const { return ___SceneLabelLandscapeLeft_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SceneLabelLandscapeLeft_5() { return &___SceneLabelLandscapeLeft_5; }
	inline void set_SceneLabelLandscapeLeft_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SceneLabelLandscapeLeft_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneLabelLandscapeLeft_5), (void*)value);
	}

	inline static int32_t get_offset_of_SceneLabelLandscapeRight_6() { return static_cast<int32_t>(offsetof(CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8, ___SceneLabelLandscapeRight_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SceneLabelLandscapeRight_6() const { return ___SceneLabelLandscapeRight_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SceneLabelLandscapeRight_6() { return &___SceneLabelLandscapeRight_6; }
	inline void set_SceneLabelLandscapeRight_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SceneLabelLandscapeRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneLabelLandscapeRight_6), (void*)value);
	}

	inline static int32_t get_offset_of_CarouselMovement_7() { return static_cast<int32_t>(offsetof(CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8, ___CarouselMovement_7)); }
	inline CarouselMovement_tAF48659B09D5F7089CFA8D9E0EA14A18F105CD5A * get_CarouselMovement_7() const { return ___CarouselMovement_7; }
	inline CarouselMovement_tAF48659B09D5F7089CFA8D9E0EA14A18F105CD5A ** get_address_of_CarouselMovement_7() { return &___CarouselMovement_7; }
	inline void set_CarouselMovement_7(CarouselMovement_tAF48659B09D5F7089CFA8D9E0EA14A18F105CD5A * value)
	{
		___CarouselMovement_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CarouselMovement_7), (void*)value);
	}

	inline static int32_t get_offset_of__deviceOrientationInit_8() { return static_cast<int32_t>(offsetof(CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8, ____deviceOrientationInit_8)); }
	inline int32_t get__deviceOrientationInit_8() const { return ____deviceOrientationInit_8; }
	inline int32_t* get_address_of__deviceOrientationInit_8() { return &____deviceOrientationInit_8; }
	inline void set__deviceOrientationInit_8(int32_t value)
	{
		____deviceOrientationInit_8 = value;
	}
};


// DepthMeshCollider
struct DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ComputeShader DepthMeshCollider::DepthProcessingCS
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___DepthProcessingCS_4;
	// System.Boolean DepthMeshCollider::CalculateNormals
	bool ___CalculateNormals_5;
	// UnityEngine.GameObject[] DepthMeshCollider::Projectiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Projectiles_6;
	// System.Int32 DepthMeshCollider::ProjectileLifetimeS
	int32_t ___ProjectileLifetimeS_7;
	// System.Boolean DepthMeshCollider::Render
	bool ___Render_8;
	// System.Boolean DepthMeshCollider::UseRawDepth
	bool ___UseRawDepth_9;
	// System.Boolean DepthMeshCollider::ExtendMeshEdges
	bool ___ExtendMeshEdges_10;
	// System.Single DepthMeshCollider::ForwardOffset
	float ___ForwardOffset_11;
	// UnityEngine.Events.UnityEvent DepthMeshCollider::ColliderMeshReadyEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___ColliderMeshReadyEvent_12;
	// System.Single DepthMeshCollider::ProjectileThrust
	float ___ProjectileThrust_13;
	// UnityEngine.Mesh DepthMeshCollider::_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ____mesh_22;
	// System.Boolean DepthMeshCollider::_initialized
	bool ____initialized_23;
	// UnityEngine.MeshCollider DepthMeshCollider::_meshCollider
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ____meshCollider_24;
	// System.Random DepthMeshCollider::_random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ____random_25;
	// System.Int32 DepthMeshCollider::_vertexFromDepthHandle
	int32_t ____vertexFromDepthHandle_26;
	// System.Int32 DepthMeshCollider::_normalFromVertexHandle
	int32_t ____normalFromVertexHandle_27;
	// System.Int32 DepthMeshCollider::_numElements
	int32_t ____numElements_28;
	// UnityEngine.ComputeBuffer DepthMeshCollider::_vertexBuffer
	ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ____vertexBuffer_29;
	// UnityEngine.ComputeBuffer DepthMeshCollider::_normalBuffer
	ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ____normalBuffer_30;
	// UnityEngine.Vector3[] DepthMeshCollider::_vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____vertices_31;
	// UnityEngine.Vector3[] DepthMeshCollider::_normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____normals_32;
	// System.Int32 DepthMeshCollider::_getDataCountdown
	int32_t ____getDataCountdown_33;
	// System.Int32 DepthMeshCollider::_depthPixelSkippingX
	int32_t ____depthPixelSkippingX_34;
	// System.Int32 DepthMeshCollider::_depthPixelSkippingY
	int32_t ____depthPixelSkippingY_35;
	// System.Int32 DepthMeshCollider::_meshWidth
	int32_t ____meshWidth_36;
	// System.Int32 DepthMeshCollider::_meshHeight
	int32_t ____meshHeight_37;
	// UnityEngine.GameObject DepthMeshCollider::_root
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____root_38;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DepthMeshCollider::_gameObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____gameObjects_39;
	// System.Boolean DepthMeshCollider::_cachedUseRawDepth
	bool ____cachedUseRawDepth_40;
	// UnityEngine.XR.ARFoundation.AROcclusionManager DepthMeshCollider::_occlusionManager
	AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * ____occlusionManager_41;
	// UnityEngine.Texture2D DepthMeshCollider::_depthTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____depthTexture_42;
	// System.Int32 DepthMeshCollider::health
	int32_t ___health_43;
	// UnityEngine.GameObject DepthMeshCollider::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_44;
	// System.Int32 DepthMeshCollider::attackStat
	int32_t ___attackStat_45;
	// System.Int32 DepthMeshCollider::defenceStat
	int32_t ___defenceStat_46;
	// UnityEngine.GameObject DepthMeshCollider::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_47;
	// System.Boolean DepthMeshCollider::coolDown
	bool ___coolDown_48;

public:
	inline static int32_t get_offset_of_DepthProcessingCS_4() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___DepthProcessingCS_4)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_DepthProcessingCS_4() const { return ___DepthProcessingCS_4; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_DepthProcessingCS_4() { return &___DepthProcessingCS_4; }
	inline void set_DepthProcessingCS_4(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___DepthProcessingCS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DepthProcessingCS_4), (void*)value);
	}

	inline static int32_t get_offset_of_CalculateNormals_5() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___CalculateNormals_5)); }
	inline bool get_CalculateNormals_5() const { return ___CalculateNormals_5; }
	inline bool* get_address_of_CalculateNormals_5() { return &___CalculateNormals_5; }
	inline void set_CalculateNormals_5(bool value)
	{
		___CalculateNormals_5 = value;
	}

	inline static int32_t get_offset_of_Projectiles_6() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___Projectiles_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Projectiles_6() const { return ___Projectiles_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Projectiles_6() { return &___Projectiles_6; }
	inline void set_Projectiles_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Projectiles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Projectiles_6), (void*)value);
	}

	inline static int32_t get_offset_of_ProjectileLifetimeS_7() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___ProjectileLifetimeS_7)); }
	inline int32_t get_ProjectileLifetimeS_7() const { return ___ProjectileLifetimeS_7; }
	inline int32_t* get_address_of_ProjectileLifetimeS_7() { return &___ProjectileLifetimeS_7; }
	inline void set_ProjectileLifetimeS_7(int32_t value)
	{
		___ProjectileLifetimeS_7 = value;
	}

	inline static int32_t get_offset_of_Render_8() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___Render_8)); }
	inline bool get_Render_8() const { return ___Render_8; }
	inline bool* get_address_of_Render_8() { return &___Render_8; }
	inline void set_Render_8(bool value)
	{
		___Render_8 = value;
	}

	inline static int32_t get_offset_of_UseRawDepth_9() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___UseRawDepth_9)); }
	inline bool get_UseRawDepth_9() const { return ___UseRawDepth_9; }
	inline bool* get_address_of_UseRawDepth_9() { return &___UseRawDepth_9; }
	inline void set_UseRawDepth_9(bool value)
	{
		___UseRawDepth_9 = value;
	}

	inline static int32_t get_offset_of_ExtendMeshEdges_10() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___ExtendMeshEdges_10)); }
	inline bool get_ExtendMeshEdges_10() const { return ___ExtendMeshEdges_10; }
	inline bool* get_address_of_ExtendMeshEdges_10() { return &___ExtendMeshEdges_10; }
	inline void set_ExtendMeshEdges_10(bool value)
	{
		___ExtendMeshEdges_10 = value;
	}

	inline static int32_t get_offset_of_ForwardOffset_11() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___ForwardOffset_11)); }
	inline float get_ForwardOffset_11() const { return ___ForwardOffset_11; }
	inline float* get_address_of_ForwardOffset_11() { return &___ForwardOffset_11; }
	inline void set_ForwardOffset_11(float value)
	{
		___ForwardOffset_11 = value;
	}

	inline static int32_t get_offset_of_ColliderMeshReadyEvent_12() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___ColliderMeshReadyEvent_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_ColliderMeshReadyEvent_12() const { return ___ColliderMeshReadyEvent_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_ColliderMeshReadyEvent_12() { return &___ColliderMeshReadyEvent_12; }
	inline void set_ColliderMeshReadyEvent_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___ColliderMeshReadyEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColliderMeshReadyEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_ProjectileThrust_13() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___ProjectileThrust_13)); }
	inline float get_ProjectileThrust_13() const { return ___ProjectileThrust_13; }
	inline float* get_address_of_ProjectileThrust_13() { return &___ProjectileThrust_13; }
	inline void set_ProjectileThrust_13(float value)
	{
		___ProjectileThrust_13 = value;
	}

	inline static int32_t get_offset_of__mesh_22() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____mesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get__mesh_22() const { return ____mesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of__mesh_22() { return &____mesh_22; }
	inline void set__mesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		____mesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mesh_22), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_23() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____initialized_23)); }
	inline bool get__initialized_23() const { return ____initialized_23; }
	inline bool* get_address_of__initialized_23() { return &____initialized_23; }
	inline void set__initialized_23(bool value)
	{
		____initialized_23 = value;
	}

	inline static int32_t get_offset_of__meshCollider_24() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____meshCollider_24)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get__meshCollider_24() const { return ____meshCollider_24; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of__meshCollider_24() { return &____meshCollider_24; }
	inline void set__meshCollider_24(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		____meshCollider_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshCollider_24), (void*)value);
	}

	inline static int32_t get_offset_of__random_25() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____random_25)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get__random_25() const { return ____random_25; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of__random_25() { return &____random_25; }
	inline void set__random_25(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		____random_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____random_25), (void*)value);
	}

	inline static int32_t get_offset_of__vertexFromDepthHandle_26() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____vertexFromDepthHandle_26)); }
	inline int32_t get__vertexFromDepthHandle_26() const { return ____vertexFromDepthHandle_26; }
	inline int32_t* get_address_of__vertexFromDepthHandle_26() { return &____vertexFromDepthHandle_26; }
	inline void set__vertexFromDepthHandle_26(int32_t value)
	{
		____vertexFromDepthHandle_26 = value;
	}

	inline static int32_t get_offset_of__normalFromVertexHandle_27() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____normalFromVertexHandle_27)); }
	inline int32_t get__normalFromVertexHandle_27() const { return ____normalFromVertexHandle_27; }
	inline int32_t* get_address_of__normalFromVertexHandle_27() { return &____normalFromVertexHandle_27; }
	inline void set__normalFromVertexHandle_27(int32_t value)
	{
		____normalFromVertexHandle_27 = value;
	}

	inline static int32_t get_offset_of__numElements_28() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____numElements_28)); }
	inline int32_t get__numElements_28() const { return ____numElements_28; }
	inline int32_t* get_address_of__numElements_28() { return &____numElements_28; }
	inline void set__numElements_28(int32_t value)
	{
		____numElements_28 = value;
	}

	inline static int32_t get_offset_of__vertexBuffer_29() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____vertexBuffer_29)); }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * get__vertexBuffer_29() const { return ____vertexBuffer_29; }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 ** get_address_of__vertexBuffer_29() { return &____vertexBuffer_29; }
	inline void set__vertexBuffer_29(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * value)
	{
		____vertexBuffer_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vertexBuffer_29), (void*)value);
	}

	inline static int32_t get_offset_of__normalBuffer_30() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____normalBuffer_30)); }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * get__normalBuffer_30() const { return ____normalBuffer_30; }
	inline ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 ** get_address_of__normalBuffer_30() { return &____normalBuffer_30; }
	inline void set__normalBuffer_30(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * value)
	{
		____normalBuffer_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____normalBuffer_30), (void*)value);
	}

	inline static int32_t get_offset_of__vertices_31() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____vertices_31)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__vertices_31() const { return ____vertices_31; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__vertices_31() { return &____vertices_31; }
	inline void set__vertices_31(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____vertices_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vertices_31), (void*)value);
	}

	inline static int32_t get_offset_of__normals_32() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____normals_32)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__normals_32() const { return ____normals_32; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__normals_32() { return &____normals_32; }
	inline void set__normals_32(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____normals_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____normals_32), (void*)value);
	}

	inline static int32_t get_offset_of__getDataCountdown_33() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____getDataCountdown_33)); }
	inline int32_t get__getDataCountdown_33() const { return ____getDataCountdown_33; }
	inline int32_t* get_address_of__getDataCountdown_33() { return &____getDataCountdown_33; }
	inline void set__getDataCountdown_33(int32_t value)
	{
		____getDataCountdown_33 = value;
	}

	inline static int32_t get_offset_of__depthPixelSkippingX_34() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____depthPixelSkippingX_34)); }
	inline int32_t get__depthPixelSkippingX_34() const { return ____depthPixelSkippingX_34; }
	inline int32_t* get_address_of__depthPixelSkippingX_34() { return &____depthPixelSkippingX_34; }
	inline void set__depthPixelSkippingX_34(int32_t value)
	{
		____depthPixelSkippingX_34 = value;
	}

	inline static int32_t get_offset_of__depthPixelSkippingY_35() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____depthPixelSkippingY_35)); }
	inline int32_t get__depthPixelSkippingY_35() const { return ____depthPixelSkippingY_35; }
	inline int32_t* get_address_of__depthPixelSkippingY_35() { return &____depthPixelSkippingY_35; }
	inline void set__depthPixelSkippingY_35(int32_t value)
	{
		____depthPixelSkippingY_35 = value;
	}

	inline static int32_t get_offset_of__meshWidth_36() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____meshWidth_36)); }
	inline int32_t get__meshWidth_36() const { return ____meshWidth_36; }
	inline int32_t* get_address_of__meshWidth_36() { return &____meshWidth_36; }
	inline void set__meshWidth_36(int32_t value)
	{
		____meshWidth_36 = value;
	}

	inline static int32_t get_offset_of__meshHeight_37() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____meshHeight_37)); }
	inline int32_t get__meshHeight_37() const { return ____meshHeight_37; }
	inline int32_t* get_address_of__meshHeight_37() { return &____meshHeight_37; }
	inline void set__meshHeight_37(int32_t value)
	{
		____meshHeight_37 = value;
	}

	inline static int32_t get_offset_of__root_38() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____root_38)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__root_38() const { return ____root_38; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__root_38() { return &____root_38; }
	inline void set__root_38(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____root_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____root_38), (void*)value);
	}

	inline static int32_t get_offset_of__gameObjects_39() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____gameObjects_39)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__gameObjects_39() const { return ____gameObjects_39; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__gameObjects_39() { return &____gameObjects_39; }
	inline void set__gameObjects_39(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____gameObjects_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameObjects_39), (void*)value);
	}

	inline static int32_t get_offset_of__cachedUseRawDepth_40() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____cachedUseRawDepth_40)); }
	inline bool get__cachedUseRawDepth_40() const { return ____cachedUseRawDepth_40; }
	inline bool* get_address_of__cachedUseRawDepth_40() { return &____cachedUseRawDepth_40; }
	inline void set__cachedUseRawDepth_40(bool value)
	{
		____cachedUseRawDepth_40 = value;
	}

	inline static int32_t get_offset_of__occlusionManager_41() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____occlusionManager_41)); }
	inline AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * get__occlusionManager_41() const { return ____occlusionManager_41; }
	inline AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 ** get_address_of__occlusionManager_41() { return &____occlusionManager_41; }
	inline void set__occlusionManager_41(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * value)
	{
		____occlusionManager_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____occlusionManager_41), (void*)value);
	}

	inline static int32_t get_offset_of__depthTexture_42() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ____depthTexture_42)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__depthTexture_42() const { return ____depthTexture_42; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__depthTexture_42() { return &____depthTexture_42; }
	inline void set__depthTexture_42(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____depthTexture_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____depthTexture_42), (void*)value);
	}

	inline static int32_t get_offset_of_health_43() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___health_43)); }
	inline int32_t get_health_43() const { return ___health_43; }
	inline int32_t* get_address_of_health_43() { return &___health_43; }
	inline void set_health_43(int32_t value)
	{
		___health_43 = value;
	}

	inline static int32_t get_offset_of_projectile_44() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___projectile_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_44() const { return ___projectile_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_44() { return &___projectile_44; }
	inline void set_projectile_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_44), (void*)value);
	}

	inline static int32_t get_offset_of_attackStat_45() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___attackStat_45)); }
	inline int32_t get_attackStat_45() const { return ___attackStat_45; }
	inline int32_t* get_address_of_attackStat_45() { return &___attackStat_45; }
	inline void set_attackStat_45(int32_t value)
	{
		___attackStat_45 = value;
	}

	inline static int32_t get_offset_of_defenceStat_46() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___defenceStat_46)); }
	inline int32_t get_defenceStat_46() const { return ___defenceStat_46; }
	inline int32_t* get_address_of_defenceStat_46() { return &___defenceStat_46; }
	inline void set_defenceStat_46(int32_t value)
	{
		___defenceStat_46 = value;
	}

	inline static int32_t get_offset_of_bullet_47() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___bullet_47)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_47() const { return ___bullet_47; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_47() { return &___bullet_47; }
	inline void set_bullet_47(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_47), (void*)value);
	}

	inline static int32_t get_offset_of_coolDown_48() { return static_cast<int32_t>(offsetof(DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9, ___coolDown_48)); }
	inline bool get_coolDown_48() const { return ___coolDown_48; }
	inline bool* get_address_of_coolDown_48() { return &___coolDown_48; }
	inline void set_coolDown_48(bool value)
	{
		___coolDown_48 = value;
	}
};


// DeviceOrientationInit
struct DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean DeviceOrientationInit::EnableRotation
	bool ___EnableRotation_5;

public:
	inline static int32_t get_offset_of_EnableRotation_5() { return static_cast<int32_t>(offsetof(DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A, ___EnableRotation_5)); }
	inline bool get_EnableRotation_5() const { return ___EnableRotation_5; }
	inline bool* get_address_of_EnableRotation_5() { return &___EnableRotation_5; }
	inline void set_EnableRotation_5(bool value)
	{
		___EnableRotation_5 = value;
	}
};

struct DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_StaticFields
{
public:
	// UnityEngine.DeviceOrientation DeviceOrientationInit::DeviceOrientationInstance
	int32_t ___DeviceOrientationInstance_4;

public:
	inline static int32_t get_offset_of_DeviceOrientationInstance_4() { return static_cast<int32_t>(offsetof(DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_StaticFields, ___DeviceOrientationInstance_4)); }
	inline int32_t get_DeviceOrientationInstance_4() const { return ___DeviceOrientationInstance_4; }
	inline int32_t* get_address_of_DeviceOrientationInstance_4() { return &___DeviceOrientationInstance_4; }
	inline void set_DeviceOrientationInstance_4(int32_t value)
	{
		___DeviceOrientationInstance_4 = value;
	}
};


// HelpBalloonController
struct HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean HelpBalloonController::HideOnTap
	bool ___HideOnTap_4;
	// System.Boolean HelpBalloonController::FadeInOnStart
	bool ___FadeInOnStart_5;
	// UnityEngine.Transform HelpBalloonController::BalloonPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___BalloonPosition_6;
	// UnityEngine.Vector2 HelpBalloonController::PositionOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___PositionOffset_7;
	// System.Boolean HelpBalloonController::_helpBalloonShowing
	bool ____helpBalloonShowing_8;

public:
	inline static int32_t get_offset_of_HideOnTap_4() { return static_cast<int32_t>(offsetof(HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031, ___HideOnTap_4)); }
	inline bool get_HideOnTap_4() const { return ___HideOnTap_4; }
	inline bool* get_address_of_HideOnTap_4() { return &___HideOnTap_4; }
	inline void set_HideOnTap_4(bool value)
	{
		___HideOnTap_4 = value;
	}

	inline static int32_t get_offset_of_FadeInOnStart_5() { return static_cast<int32_t>(offsetof(HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031, ___FadeInOnStart_5)); }
	inline bool get_FadeInOnStart_5() const { return ___FadeInOnStart_5; }
	inline bool* get_address_of_FadeInOnStart_5() { return &___FadeInOnStart_5; }
	inline void set_FadeInOnStart_5(bool value)
	{
		___FadeInOnStart_5 = value;
	}

	inline static int32_t get_offset_of_BalloonPosition_6() { return static_cast<int32_t>(offsetof(HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031, ___BalloonPosition_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_BalloonPosition_6() const { return ___BalloonPosition_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_BalloonPosition_6() { return &___BalloonPosition_6; }
	inline void set_BalloonPosition_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___BalloonPosition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BalloonPosition_6), (void*)value);
	}

	inline static int32_t get_offset_of_PositionOffset_7() { return static_cast<int32_t>(offsetof(HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031, ___PositionOffset_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_PositionOffset_7() const { return ___PositionOffset_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_PositionOffset_7() { return &___PositionOffset_7; }
	inline void set_PositionOffset_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___PositionOffset_7 = value;
	}

	inline static int32_t get_offset_of__helpBalloonShowing_8() { return static_cast<int32_t>(offsetof(HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031, ____helpBalloonShowing_8)); }
	inline bool get__helpBalloonShowing_8() const { return ____helpBalloonShowing_8; }
	inline bool* get_address_of__helpBalloonShowing_8() { return &____helpBalloonShowing_8; }
	inline void set__helpBalloonShowing_8(bool value)
	{
		____helpBalloonShowing_8 = value;
	}
};


// LoadingSpinner
struct LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Object LoadingSpinner::_currentLoadingOperationLock
	RuntimeObject * ____currentLoadingOperationLock_5;
	// UnityEngine.AsyncOperation LoadingSpinner::_currentLoadingOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ____currentLoadingOperation_6;
	// System.Boolean LoadingSpinner::_isLoading
	bool ____isLoading_7;
	// UnityEngine.CanvasGroup LoadingSpinner::_canvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ____canvasGroup_8;

public:
	inline static int32_t get_offset_of__currentLoadingOperationLock_5() { return static_cast<int32_t>(offsetof(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE, ____currentLoadingOperationLock_5)); }
	inline RuntimeObject * get__currentLoadingOperationLock_5() const { return ____currentLoadingOperationLock_5; }
	inline RuntimeObject ** get_address_of__currentLoadingOperationLock_5() { return &____currentLoadingOperationLock_5; }
	inline void set__currentLoadingOperationLock_5(RuntimeObject * value)
	{
		____currentLoadingOperationLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentLoadingOperationLock_5), (void*)value);
	}

	inline static int32_t get_offset_of__currentLoadingOperation_6() { return static_cast<int32_t>(offsetof(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE, ____currentLoadingOperation_6)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get__currentLoadingOperation_6() const { return ____currentLoadingOperation_6; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of__currentLoadingOperation_6() { return &____currentLoadingOperation_6; }
	inline void set__currentLoadingOperation_6(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		____currentLoadingOperation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentLoadingOperation_6), (void*)value);
	}

	inline static int32_t get_offset_of__isLoading_7() { return static_cast<int32_t>(offsetof(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE, ____isLoading_7)); }
	inline bool get__isLoading_7() const { return ____isLoading_7; }
	inline bool* get_address_of__isLoading_7() { return &____isLoading_7; }
	inline void set__isLoading_7(bool value)
	{
		____isLoading_7 = value;
	}

	inline static int32_t get_offset_of__canvasGroup_8() { return static_cast<int32_t>(offsetof(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE, ____canvasGroup_8)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get__canvasGroup_8() const { return ____canvasGroup_8; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of__canvasGroup_8() { return &____canvasGroup_8; }
	inline void set__canvasGroup_8(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		____canvasGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____canvasGroup_8), (void*)value);
	}
};

struct LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_StaticFields
{
public:
	// LoadingSpinner LoadingSpinner::Instance
	LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_StaticFields, ___Instance_4)); }
	inline LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * get_Instance_4() const { return ___Instance_4; }
	inline LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// OrientedReticle
struct OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single OrientedReticle::Interpolation
	float ___Interpolation_4;
	// UnityEngine.Vector2 OrientedReticle::ScreenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___ScreenPosition_5;
	// System.Single OrientedReticle::_distance
	float ____distance_8;

public:
	inline static int32_t get_offset_of_Interpolation_4() { return static_cast<int32_t>(offsetof(OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101, ___Interpolation_4)); }
	inline float get_Interpolation_4() const { return ___Interpolation_4; }
	inline float* get_address_of_Interpolation_4() { return &___Interpolation_4; }
	inline void set_Interpolation_4(float value)
	{
		___Interpolation_4 = value;
	}

	inline static int32_t get_offset_of_ScreenPosition_5() { return static_cast<int32_t>(offsetof(OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101, ___ScreenPosition_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_ScreenPosition_5() const { return ___ScreenPosition_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_ScreenPosition_5() { return &___ScreenPosition_5; }
	inline void set_ScreenPosition_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___ScreenPosition_5 = value;
	}

	inline static int32_t get_offset_of__distance_8() { return static_cast<int32_t>(offsetof(OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101, ____distance_8)); }
	inline float get__distance_8() const { return ____distance_8; }
	inline float* get_address_of__distance_8() { return &____distance_8; }
	inline void set__distance_8(float value)
	{
		____distance_8 = value;
	}
};


// PlayerScript
struct PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PlayerScript::health
	int32_t ___health_4;
	// UnityEngine.GameObject PlayerScript::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_5;
	// System.Int32 PlayerScript::attackStat
	int32_t ___attackStat_6;
	// System.Int32 PlayerScript::defenceStat
	int32_t ___defenceStat_7;
	// UnityEngine.GameObject PlayerScript::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_8;
	// System.Boolean PlayerScript::coolDown
	bool ___coolDown_9;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_projectile_5() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___projectile_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_5() const { return ___projectile_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_5() { return &___projectile_5; }
	inline void set_projectile_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_5), (void*)value);
	}

	inline static int32_t get_offset_of_attackStat_6() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___attackStat_6)); }
	inline int32_t get_attackStat_6() const { return ___attackStat_6; }
	inline int32_t* get_address_of_attackStat_6() { return &___attackStat_6; }
	inline void set_attackStat_6(int32_t value)
	{
		___attackStat_6 = value;
	}

	inline static int32_t get_offset_of_defenceStat_7() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___defenceStat_7)); }
	inline int32_t get_defenceStat_7() const { return ___defenceStat_7; }
	inline int32_t* get_address_of_defenceStat_7() { return &___defenceStat_7; }
	inline void set_defenceStat_7(int32_t value)
	{
		___defenceStat_7 = value;
	}

	inline static int32_t get_offset_of_bullet_8() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___bullet_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_8() const { return ___bullet_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_8() { return &___bullet_8; }
	inline void set_bullet_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_8), (void*)value);
	}

	inline static int32_t get_offset_of_coolDown_9() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___coolDown_9)); }
	inline bool get_coolDown_9() const { return ___coolDown_9; }
	inline bool* get_address_of_coolDown_9() { return &___coolDown_9; }
	inline void set_coolDown_9(bool value)
	{
		___coolDown_9 = value;
	}
};


// PositionFilter
struct PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PositionFilter::DoWindowFilterOnly
	bool ___DoWindowFilterOnly_4;
	// System.Single PositionFilter::InnerHysteresisWindowSizeM
	float ___InnerHysteresisWindowSizeM_5;
	// System.Single PositionFilter::OuterHysteresisWindowSizeM
	float ___OuterHysteresisWindowSizeM_6;
	// System.Single PositionFilter::MinCutoff
	float ___MinCutoff_7;
	// System.Single PositionFilter::BetaCutoffSlope
	float ___BetaCutoffSlope_8;
	// System.Single PositionFilter::DerivateCutoffFrequency
	float ___DerivateCutoffFrequency_9;
	// SpeedAdaptiveFilter PositionFilter::_xFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____xFilter_16;
	// SpeedAdaptiveFilter PositionFilter::_yFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____yFilter_17;
	// SpeedAdaptiveFilter PositionFilter::_zFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____zFilter_18;
	// UnityEngine.Vector3 PositionFilter::_lastValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____lastValue_19;
	// System.Single PositionFilter::_sensorFrequency
	float ____sensorFrequency_20;

public:
	inline static int32_t get_offset_of_DoWindowFilterOnly_4() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ___DoWindowFilterOnly_4)); }
	inline bool get_DoWindowFilterOnly_4() const { return ___DoWindowFilterOnly_4; }
	inline bool* get_address_of_DoWindowFilterOnly_4() { return &___DoWindowFilterOnly_4; }
	inline void set_DoWindowFilterOnly_4(bool value)
	{
		___DoWindowFilterOnly_4 = value;
	}

	inline static int32_t get_offset_of_InnerHysteresisWindowSizeM_5() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ___InnerHysteresisWindowSizeM_5)); }
	inline float get_InnerHysteresisWindowSizeM_5() const { return ___InnerHysteresisWindowSizeM_5; }
	inline float* get_address_of_InnerHysteresisWindowSizeM_5() { return &___InnerHysteresisWindowSizeM_5; }
	inline void set_InnerHysteresisWindowSizeM_5(float value)
	{
		___InnerHysteresisWindowSizeM_5 = value;
	}

	inline static int32_t get_offset_of_OuterHysteresisWindowSizeM_6() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ___OuterHysteresisWindowSizeM_6)); }
	inline float get_OuterHysteresisWindowSizeM_6() const { return ___OuterHysteresisWindowSizeM_6; }
	inline float* get_address_of_OuterHysteresisWindowSizeM_6() { return &___OuterHysteresisWindowSizeM_6; }
	inline void set_OuterHysteresisWindowSizeM_6(float value)
	{
		___OuterHysteresisWindowSizeM_6 = value;
	}

	inline static int32_t get_offset_of_MinCutoff_7() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ___MinCutoff_7)); }
	inline float get_MinCutoff_7() const { return ___MinCutoff_7; }
	inline float* get_address_of_MinCutoff_7() { return &___MinCutoff_7; }
	inline void set_MinCutoff_7(float value)
	{
		___MinCutoff_7 = value;
	}

	inline static int32_t get_offset_of_BetaCutoffSlope_8() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ___BetaCutoffSlope_8)); }
	inline float get_BetaCutoffSlope_8() const { return ___BetaCutoffSlope_8; }
	inline float* get_address_of_BetaCutoffSlope_8() { return &___BetaCutoffSlope_8; }
	inline void set_BetaCutoffSlope_8(float value)
	{
		___BetaCutoffSlope_8 = value;
	}

	inline static int32_t get_offset_of_DerivateCutoffFrequency_9() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ___DerivateCutoffFrequency_9)); }
	inline float get_DerivateCutoffFrequency_9() const { return ___DerivateCutoffFrequency_9; }
	inline float* get_address_of_DerivateCutoffFrequency_9() { return &___DerivateCutoffFrequency_9; }
	inline void set_DerivateCutoffFrequency_9(float value)
	{
		___DerivateCutoffFrequency_9 = value;
	}

	inline static int32_t get_offset_of__xFilter_16() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ____xFilter_16)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__xFilter_16() const { return ____xFilter_16; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__xFilter_16() { return &____xFilter_16; }
	inline void set__xFilter_16(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____xFilter_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xFilter_16), (void*)value);
	}

	inline static int32_t get_offset_of__yFilter_17() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ____yFilter_17)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__yFilter_17() const { return ____yFilter_17; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__yFilter_17() { return &____yFilter_17; }
	inline void set__yFilter_17(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____yFilter_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____yFilter_17), (void*)value);
	}

	inline static int32_t get_offset_of__zFilter_18() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ____zFilter_18)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__zFilter_18() const { return ____zFilter_18; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__zFilter_18() { return &____zFilter_18; }
	inline void set__zFilter_18(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____zFilter_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zFilter_18), (void*)value);
	}

	inline static int32_t get_offset_of__lastValue_19() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ____lastValue_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__lastValue_19() const { return ____lastValue_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__lastValue_19() { return &____lastValue_19; }
	inline void set__lastValue_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____lastValue_19 = value;
	}

	inline static int32_t get_offset_of__sensorFrequency_20() { return static_cast<int32_t>(offsetof(PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31, ____sensorFrequency_20)); }
	inline float get__sensorFrequency_20() const { return ____sensorFrequency_20; }
	inline float* get_address_of__sensorFrequency_20() { return &____sensorFrequency_20; }
	inline void set__sensorFrequency_20(float value)
	{
		____sensorFrequency_20 = value;
	}
};


// ProjectileScript
struct ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ProjectileScript::attackPower
	int32_t ___attackPower_4;
	// System.Int32 ProjectileScript::attackSpeed
	int32_t ___attackSpeed_5;
	// System.Single ProjectileScript::distanceDivider
	float ___distanceDivider_6;
	// System.Single ProjectileScript::totalDamage
	float ___totalDamage_7;
	// UnityEngine.GameObject ProjectileScript::Origin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Origin_8;
	// UnityEngine.GameObject ProjectileScript::redConfetti
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___redConfetti_9;
	// UnityEngine.GameObject ProjectileScript::blueConfetti
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___blueConfetti_10;
	// UnityEngine.Rigidbody ProjectileScript::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_11;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ProjectileScript::_raycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ____raycastManager_12;
	// UnityEngine.XR.ARFoundation.ARAnchorManager ProjectileScript::_anchorManager
	ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ____anchorManager_13;

public:
	inline static int32_t get_offset_of_attackPower_4() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ___attackPower_4)); }
	inline int32_t get_attackPower_4() const { return ___attackPower_4; }
	inline int32_t* get_address_of_attackPower_4() { return &___attackPower_4; }
	inline void set_attackPower_4(int32_t value)
	{
		___attackPower_4 = value;
	}

	inline static int32_t get_offset_of_attackSpeed_5() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ___attackSpeed_5)); }
	inline int32_t get_attackSpeed_5() const { return ___attackSpeed_5; }
	inline int32_t* get_address_of_attackSpeed_5() { return &___attackSpeed_5; }
	inline void set_attackSpeed_5(int32_t value)
	{
		___attackSpeed_5 = value;
	}

	inline static int32_t get_offset_of_distanceDivider_6() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ___distanceDivider_6)); }
	inline float get_distanceDivider_6() const { return ___distanceDivider_6; }
	inline float* get_address_of_distanceDivider_6() { return &___distanceDivider_6; }
	inline void set_distanceDivider_6(float value)
	{
		___distanceDivider_6 = value;
	}

	inline static int32_t get_offset_of_totalDamage_7() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ___totalDamage_7)); }
	inline float get_totalDamage_7() const { return ___totalDamage_7; }
	inline float* get_address_of_totalDamage_7() { return &___totalDamage_7; }
	inline void set_totalDamage_7(float value)
	{
		___totalDamage_7 = value;
	}

	inline static int32_t get_offset_of_Origin_8() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ___Origin_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Origin_8() const { return ___Origin_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Origin_8() { return &___Origin_8; }
	inline void set_Origin_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Origin_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Origin_8), (void*)value);
	}

	inline static int32_t get_offset_of_redConfetti_9() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ___redConfetti_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_redConfetti_9() const { return ___redConfetti_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_redConfetti_9() { return &___redConfetti_9; }
	inline void set_redConfetti_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___redConfetti_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___redConfetti_9), (void*)value);
	}

	inline static int32_t get_offset_of_blueConfetti_10() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ___blueConfetti_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_blueConfetti_10() const { return ___blueConfetti_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_blueConfetti_10() { return &___blueConfetti_10; }
	inline void set_blueConfetti_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___blueConfetti_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blueConfetti_10), (void*)value);
	}

	inline static int32_t get_offset_of__rigidbody_11() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ____rigidbody_11)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_11() const { return ____rigidbody_11; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_11() { return &____rigidbody_11; }
	inline void set__rigidbody_11(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_11), (void*)value);
	}

	inline static int32_t get_offset_of__raycastManager_12() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ____raycastManager_12)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get__raycastManager_12() const { return ____raycastManager_12; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of__raycastManager_12() { return &____raycastManager_12; }
	inline void set__raycastManager_12(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		____raycastManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastManager_12), (void*)value);
	}

	inline static int32_t get_offset_of__anchorManager_13() { return static_cast<int32_t>(offsetof(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38, ____anchorManager_13)); }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * get__anchorManager_13() const { return ____anchorManager_13; }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F ** get_address_of__anchorManager_13() { return &____anchorManager_13; }
	inline void set__anchorManager_13(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * value)
	{
		____anchorManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anchorManager_13), (void*)value);
	}
};


// QuaternionFilter
struct QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean QuaternionFilter::DoWindowFilterOnly
	bool ___DoWindowFilterOnly_4;
	// System.Single QuaternionFilter::InnerHysteresisDegrees
	float ___InnerHysteresisDegrees_5;
	// System.Single QuaternionFilter::OuterHysteresisDegrees
	float ___OuterHysteresisDegrees_6;
	// System.Single QuaternionFilter::MinCutoff
	float ___MinCutoff_7;
	// System.Single QuaternionFilter::BetaCutoffSlope
	float ___BetaCutoffSlope_8;
	// System.Single QuaternionFilter::DerivateCutoffFrequency
	float ___DerivateCutoffFrequency_9;
	// SpeedAdaptiveFilter QuaternionFilter::_xFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____xFilter_16;
	// SpeedAdaptiveFilter QuaternionFilter::_yFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____yFilter_17;
	// SpeedAdaptiveFilter QuaternionFilter::_zFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____zFilter_18;
	// SpeedAdaptiveFilter QuaternionFilter::_wFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____wFilter_19;
	// UnityEngine.Quaternion QuaternionFilter::_lastValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____lastValue_20;
	// System.Single QuaternionFilter::_sensorFrequency
	float ____sensorFrequency_21;

public:
	inline static int32_t get_offset_of_DoWindowFilterOnly_4() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ___DoWindowFilterOnly_4)); }
	inline bool get_DoWindowFilterOnly_4() const { return ___DoWindowFilterOnly_4; }
	inline bool* get_address_of_DoWindowFilterOnly_4() { return &___DoWindowFilterOnly_4; }
	inline void set_DoWindowFilterOnly_4(bool value)
	{
		___DoWindowFilterOnly_4 = value;
	}

	inline static int32_t get_offset_of_InnerHysteresisDegrees_5() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ___InnerHysteresisDegrees_5)); }
	inline float get_InnerHysteresisDegrees_5() const { return ___InnerHysteresisDegrees_5; }
	inline float* get_address_of_InnerHysteresisDegrees_5() { return &___InnerHysteresisDegrees_5; }
	inline void set_InnerHysteresisDegrees_5(float value)
	{
		___InnerHysteresisDegrees_5 = value;
	}

	inline static int32_t get_offset_of_OuterHysteresisDegrees_6() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ___OuterHysteresisDegrees_6)); }
	inline float get_OuterHysteresisDegrees_6() const { return ___OuterHysteresisDegrees_6; }
	inline float* get_address_of_OuterHysteresisDegrees_6() { return &___OuterHysteresisDegrees_6; }
	inline void set_OuterHysteresisDegrees_6(float value)
	{
		___OuterHysteresisDegrees_6 = value;
	}

	inline static int32_t get_offset_of_MinCutoff_7() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ___MinCutoff_7)); }
	inline float get_MinCutoff_7() const { return ___MinCutoff_7; }
	inline float* get_address_of_MinCutoff_7() { return &___MinCutoff_7; }
	inline void set_MinCutoff_7(float value)
	{
		___MinCutoff_7 = value;
	}

	inline static int32_t get_offset_of_BetaCutoffSlope_8() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ___BetaCutoffSlope_8)); }
	inline float get_BetaCutoffSlope_8() const { return ___BetaCutoffSlope_8; }
	inline float* get_address_of_BetaCutoffSlope_8() { return &___BetaCutoffSlope_8; }
	inline void set_BetaCutoffSlope_8(float value)
	{
		___BetaCutoffSlope_8 = value;
	}

	inline static int32_t get_offset_of_DerivateCutoffFrequency_9() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ___DerivateCutoffFrequency_9)); }
	inline float get_DerivateCutoffFrequency_9() const { return ___DerivateCutoffFrequency_9; }
	inline float* get_address_of_DerivateCutoffFrequency_9() { return &___DerivateCutoffFrequency_9; }
	inline void set_DerivateCutoffFrequency_9(float value)
	{
		___DerivateCutoffFrequency_9 = value;
	}

	inline static int32_t get_offset_of__xFilter_16() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ____xFilter_16)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__xFilter_16() const { return ____xFilter_16; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__xFilter_16() { return &____xFilter_16; }
	inline void set__xFilter_16(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____xFilter_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xFilter_16), (void*)value);
	}

	inline static int32_t get_offset_of__yFilter_17() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ____yFilter_17)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__yFilter_17() const { return ____yFilter_17; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__yFilter_17() { return &____yFilter_17; }
	inline void set__yFilter_17(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____yFilter_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____yFilter_17), (void*)value);
	}

	inline static int32_t get_offset_of__zFilter_18() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ____zFilter_18)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__zFilter_18() const { return ____zFilter_18; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__zFilter_18() { return &____zFilter_18; }
	inline void set__zFilter_18(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____zFilter_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zFilter_18), (void*)value);
	}

	inline static int32_t get_offset_of__wFilter_19() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ____wFilter_19)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__wFilter_19() const { return ____wFilter_19; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__wFilter_19() { return &____wFilter_19; }
	inline void set__wFilter_19(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____wFilter_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wFilter_19), (void*)value);
	}

	inline static int32_t get_offset_of__lastValue_20() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ____lastValue_20)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__lastValue_20() const { return ____lastValue_20; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__lastValue_20() { return &____lastValue_20; }
	inline void set__lastValue_20(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____lastValue_20 = value;
	}

	inline static int32_t get_offset_of__sensorFrequency_21() { return static_cast<int32_t>(offsetof(QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987, ____sensorFrequency_21)); }
	inline float get__sensorFrequency_21() const { return ____sensorFrequency_21; }
	inline float* get_address_of__sensorFrequency_21() { return &____sensorFrequency_21; }
	inline void set__sensorFrequency_21(float value)
	{
		____sensorFrequency_21 = value;
	}
};


// Recorder
struct Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Google.XR.ARCoreExtensions.ARCoreExtensions Recorder::Extensions
	ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * ___Extensions_4;
	// Google.XR.ARCoreExtensions.ARRecordingManager Recorder::_recordingManager
	ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF * ____recordingManager_5;
	// Google.XR.ARCoreExtensions.ARPlaybackManager Recorder::_playbackManager
	ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2 * ____playbackManager_6;
	// UnityEngine.UI.Button Recorder::RecordButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___RecordButton_7;
	// UnityEngine.UI.Button Recorder::StopRecordingButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___StopRecordingButton_8;
	// UnityEngine.UI.Button Recorder::PlaybackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PlaybackButton_9;
	// UnityEngine.UI.Button Recorder::StopPlayingbackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___StopPlayingbackButton_10;
	// ToggleUIVisibility Recorder::CarouselUIToggle
	ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B * ___CarouselUIToggle_11;
	// UnityEngine.GameObject Recorder::Carousel3D
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Carousel3D_12;
	// UnityEngine.UI.Text Recorder::RecordingTimerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RecordingTimerText_13;
	// Recorder/RecorderStatus Recorder::_status
	int32_t ____status_17;
	// System.String Recorder::_filenameToSave
	String_t* ____filenameToSave_18;
	// System.Single Recorder::_timeWhenRecorderStarts
	float ____timeWhenRecorderStarts_19;
	// Google.XR.ARCoreExtensions.ARCoreRecordingConfig Recorder::_recordingConfig
	ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * ____recordingConfig_20;

public:
	inline static int32_t get_offset_of_Extensions_4() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___Extensions_4)); }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * get_Extensions_4() const { return ___Extensions_4; }
	inline ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB ** get_address_of_Extensions_4() { return &___Extensions_4; }
	inline void set_Extensions_4(ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * value)
	{
		___Extensions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extensions_4), (void*)value);
	}

	inline static int32_t get_offset_of__recordingManager_5() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ____recordingManager_5)); }
	inline ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF * get__recordingManager_5() const { return ____recordingManager_5; }
	inline ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF ** get_address_of__recordingManager_5() { return &____recordingManager_5; }
	inline void set__recordingManager_5(ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF * value)
	{
		____recordingManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordingManager_5), (void*)value);
	}

	inline static int32_t get_offset_of__playbackManager_6() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ____playbackManager_6)); }
	inline ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2 * get__playbackManager_6() const { return ____playbackManager_6; }
	inline ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2 ** get_address_of__playbackManager_6() { return &____playbackManager_6; }
	inline void set__playbackManager_6(ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2 * value)
	{
		____playbackManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playbackManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_RecordButton_7() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___RecordButton_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_RecordButton_7() const { return ___RecordButton_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_RecordButton_7() { return &___RecordButton_7; }
	inline void set_RecordButton_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___RecordButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecordButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_StopRecordingButton_8() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___StopRecordingButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_StopRecordingButton_8() const { return ___StopRecordingButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_StopRecordingButton_8() { return &___StopRecordingButton_8; }
	inline void set_StopRecordingButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___StopRecordingButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StopRecordingButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_PlaybackButton_9() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___PlaybackButton_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PlaybackButton_9() const { return ___PlaybackButton_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PlaybackButton_9() { return &___PlaybackButton_9; }
	inline void set_PlaybackButton_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PlaybackButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaybackButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_StopPlayingbackButton_10() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___StopPlayingbackButton_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_StopPlayingbackButton_10() const { return ___StopPlayingbackButton_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_StopPlayingbackButton_10() { return &___StopPlayingbackButton_10; }
	inline void set_StopPlayingbackButton_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___StopPlayingbackButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StopPlayingbackButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_CarouselUIToggle_11() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___CarouselUIToggle_11)); }
	inline ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B * get_CarouselUIToggle_11() const { return ___CarouselUIToggle_11; }
	inline ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B ** get_address_of_CarouselUIToggle_11() { return &___CarouselUIToggle_11; }
	inline void set_CarouselUIToggle_11(ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B * value)
	{
		___CarouselUIToggle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CarouselUIToggle_11), (void*)value);
	}

	inline static int32_t get_offset_of_Carousel3D_12() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___Carousel3D_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Carousel3D_12() const { return ___Carousel3D_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Carousel3D_12() { return &___Carousel3D_12; }
	inline void set_Carousel3D_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Carousel3D_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Carousel3D_12), (void*)value);
	}

	inline static int32_t get_offset_of_RecordingTimerText_13() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ___RecordingTimerText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RecordingTimerText_13() const { return ___RecordingTimerText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RecordingTimerText_13() { return &___RecordingTimerText_13; }
	inline void set_RecordingTimerText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RecordingTimerText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecordingTimerText_13), (void*)value);
	}

	inline static int32_t get_offset_of__status_17() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ____status_17)); }
	inline int32_t get__status_17() const { return ____status_17; }
	inline int32_t* get_address_of__status_17() { return &____status_17; }
	inline void set__status_17(int32_t value)
	{
		____status_17 = value;
	}

	inline static int32_t get_offset_of__filenameToSave_18() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ____filenameToSave_18)); }
	inline String_t* get__filenameToSave_18() const { return ____filenameToSave_18; }
	inline String_t** get_address_of__filenameToSave_18() { return &____filenameToSave_18; }
	inline void set__filenameToSave_18(String_t* value)
	{
		____filenameToSave_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____filenameToSave_18), (void*)value);
	}

	inline static int32_t get_offset_of__timeWhenRecorderStarts_19() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ____timeWhenRecorderStarts_19)); }
	inline float get__timeWhenRecorderStarts_19() const { return ____timeWhenRecorderStarts_19; }
	inline float* get_address_of__timeWhenRecorderStarts_19() { return &____timeWhenRecorderStarts_19; }
	inline void set__timeWhenRecorderStarts_19(float value)
	{
		____timeWhenRecorderStarts_19 = value;
	}

	inline static int32_t get_offset_of__recordingConfig_20() { return static_cast<int32_t>(offsetof(Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759, ____recordingConfig_20)); }
	inline ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * get__recordingConfig_20() const { return ____recordingConfig_20; }
	inline ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 ** get_address_of__recordingConfig_20() { return &____recordingConfig_20; }
	inline void set__recordingConfig_20(ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * value)
	{
		____recordingConfig_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordingConfig_20), (void*)value);
	}
};


// RotateCarouselButton
struct RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.DeviceOrientation RotateCarouselButton::_deviceOrientationInit
	int32_t ____deviceOrientationInit_4;

public:
	inline static int32_t get_offset_of__deviceOrientationInit_4() { return static_cast<int32_t>(offsetof(RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400, ____deviceOrientationInit_4)); }
	inline int32_t get__deviceOrientationInit_4() const { return ____deviceOrientationInit_4; }
	inline int32_t* get_address_of__deviceOrientationInit_4() { return &____deviceOrientationInit_4; }
	inline void set__deviceOrientationInit_4(int32_t value)
	{
		____deviceOrientationInit_4 = value;
	}
};


// SceneSwitcher
struct SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform SceneSwitcher::ActiveObjectsContainer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ActiveObjectsContainer_5;
	// UnityEngine.Transform SceneSwitcher::ActiveObjectsToDestroy
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ActiveObjectsToDestroy_6;
	// System.String SceneSwitcher::StartScene
	String_t* ___StartScene_7;
	// UnityEngine.SceneManagement.Scene SceneSwitcher::_baseScene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ____baseScene_8;
	// System.Boolean SceneSwitcher::_sceneChangeComplete
	bool ____sceneChangeComplete_9;
	// System.String SceneSwitcher::_currentScene
	String_t* ____currentScene_10;

public:
	inline static int32_t get_offset_of_ActiveObjectsContainer_5() { return static_cast<int32_t>(offsetof(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F, ___ActiveObjectsContainer_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_ActiveObjectsContainer_5() const { return ___ActiveObjectsContainer_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_ActiveObjectsContainer_5() { return &___ActiveObjectsContainer_5; }
	inline void set_ActiveObjectsContainer_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___ActiveObjectsContainer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveObjectsContainer_5), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveObjectsToDestroy_6() { return static_cast<int32_t>(offsetof(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F, ___ActiveObjectsToDestroy_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_ActiveObjectsToDestroy_6() const { return ___ActiveObjectsToDestroy_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_ActiveObjectsToDestroy_6() { return &___ActiveObjectsToDestroy_6; }
	inline void set_ActiveObjectsToDestroy_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___ActiveObjectsToDestroy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveObjectsToDestroy_6), (void*)value);
	}

	inline static int32_t get_offset_of_StartScene_7() { return static_cast<int32_t>(offsetof(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F, ___StartScene_7)); }
	inline String_t* get_StartScene_7() const { return ___StartScene_7; }
	inline String_t** get_address_of_StartScene_7() { return &___StartScene_7; }
	inline void set_StartScene_7(String_t* value)
	{
		___StartScene_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartScene_7), (void*)value);
	}

	inline static int32_t get_offset_of__baseScene_8() { return static_cast<int32_t>(offsetof(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F, ____baseScene_8)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get__baseScene_8() const { return ____baseScene_8; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of__baseScene_8() { return &____baseScene_8; }
	inline void set__baseScene_8(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		____baseScene_8 = value;
	}

	inline static int32_t get_offset_of__sceneChangeComplete_9() { return static_cast<int32_t>(offsetof(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F, ____sceneChangeComplete_9)); }
	inline bool get__sceneChangeComplete_9() const { return ____sceneChangeComplete_9; }
	inline bool* get_address_of__sceneChangeComplete_9() { return &____sceneChangeComplete_9; }
	inline void set__sceneChangeComplete_9(bool value)
	{
		____sceneChangeComplete_9 = value;
	}

	inline static int32_t get_offset_of__currentScene_10() { return static_cast<int32_t>(offsetof(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F, ____currentScene_10)); }
	inline String_t* get__currentScene_10() const { return ____currentScene_10; }
	inline String_t** get_address_of__currentScene_10() { return &____currentScene_10; }
	inline void set__currentScene_10(String_t* value)
	{
		____currentScene_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentScene_10), (void*)value);
	}
};

struct SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F_StaticFields
{
public:
	// SceneSwitcher SceneSwitcher::Instance
	SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F_StaticFields, ___Instance_4)); }
	inline SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * get_Instance_4() const { return ___Instance_4; }
	inline SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// ShadowReceiverMesh
struct ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ShadowReceiverMesh::MinimumMeshDistance
	float ___MinimumMeshDistance_4;
	// System.Single ShadowReceiverMesh::MaximumMeshDistance
	float ___MaximumMeshDistance_5;
	// UnityEngine.Mesh ShadowReceiverMesh::_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ____mesh_10;
	// System.Boolean ShadowReceiverMesh::_initialized
	bool ____initialized_11;
	// UnityEngine.Material ShadowReceiverMesh::_material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____material_12;

public:
	inline static int32_t get_offset_of_MinimumMeshDistance_4() { return static_cast<int32_t>(offsetof(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA, ___MinimumMeshDistance_4)); }
	inline float get_MinimumMeshDistance_4() const { return ___MinimumMeshDistance_4; }
	inline float* get_address_of_MinimumMeshDistance_4() { return &___MinimumMeshDistance_4; }
	inline void set_MinimumMeshDistance_4(float value)
	{
		___MinimumMeshDistance_4 = value;
	}

	inline static int32_t get_offset_of_MaximumMeshDistance_5() { return static_cast<int32_t>(offsetof(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA, ___MaximumMeshDistance_5)); }
	inline float get_MaximumMeshDistance_5() const { return ___MaximumMeshDistance_5; }
	inline float* get_address_of_MaximumMeshDistance_5() { return &___MaximumMeshDistance_5; }
	inline void set_MaximumMeshDistance_5(float value)
	{
		___MaximumMeshDistance_5 = value;
	}

	inline static int32_t get_offset_of__mesh_10() { return static_cast<int32_t>(offsetof(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA, ____mesh_10)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get__mesh_10() const { return ____mesh_10; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of__mesh_10() { return &____mesh_10; }
	inline void set__mesh_10(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		____mesh_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mesh_10), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_11() { return static_cast<int32_t>(offsetof(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA, ____initialized_11)); }
	inline bool get__initialized_11() const { return ____initialized_11; }
	inline bool* get_address_of__initialized_11() { return &____initialized_11; }
	inline void set__initialized_11(bool value)
	{
		____initialized_11 = value;
	}

	inline static int32_t get_offset_of__material_12() { return static_cast<int32_t>(offsetof(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA, ____material_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__material_12() const { return ____material_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__material_12() { return &____material_12; }
	inline void set__material_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____material_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____material_12), (void*)value);
	}
};

struct ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA_StaticFields
{
public:
	// UnityEngine.Vector3 ShadowReceiverMesh::_defaultMeshOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____defaultMeshOffset_8;
	// System.String ShadowReceiverMesh::_vertexModelTransformPropertyName
	String_t* ____vertexModelTransformPropertyName_9;

public:
	inline static int32_t get_offset_of__defaultMeshOffset_8() { return static_cast<int32_t>(offsetof(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA_StaticFields, ____defaultMeshOffset_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__defaultMeshOffset_8() const { return ____defaultMeshOffset_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__defaultMeshOffset_8() { return &____defaultMeshOffset_8; }
	inline void set__defaultMeshOffset_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____defaultMeshOffset_8 = value;
	}

	inline static int32_t get_offset_of__vertexModelTransformPropertyName_9() { return static_cast<int32_t>(offsetof(ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA_StaticFields, ____vertexModelTransformPropertyName_9)); }
	inline String_t* get__vertexModelTransformPropertyName_9() const { return ____vertexModelTransformPropertyName_9; }
	inline String_t** get_address_of__vertexModelTransformPropertyName_9() { return &____vertexModelTransformPropertyName_9; }
	inline void set__vertexModelTransformPropertyName_9(String_t* value)
	{
		____vertexModelTransformPropertyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vertexModelTransformPropertyName_9), (void*)value);
	}
};


// SingleValueFilter
struct SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SingleValueFilter::DoWindowFilterOnly
	bool ___DoWindowFilterOnly_4;
	// System.Single SingleValueFilter::InnerHysteresisWindowSizeM
	float ___InnerHysteresisWindowSizeM_5;
	// System.Single SingleValueFilter::OuterHysteresisWindowSizeM
	float ___OuterHysteresisWindowSizeM_6;
	// System.Single SingleValueFilter::MinCutoff
	float ___MinCutoff_7;
	// System.Single SingleValueFilter::BetaCutoffSlope
	float ___BetaCutoffSlope_8;
	// System.Single SingleValueFilter::DerivateCutoffFrequency
	float ___DerivateCutoffFrequency_9;
	// SpeedAdaptiveFilter SingleValueFilter::_xFilter
	SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ____xFilter_16;
	// System.Single SingleValueFilter::_lastValue
	float ____lastValue_17;
	// System.Single SingleValueFilter::_sensorFrequency
	float ____sensorFrequency_18;

public:
	inline static int32_t get_offset_of_DoWindowFilterOnly_4() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ___DoWindowFilterOnly_4)); }
	inline bool get_DoWindowFilterOnly_4() const { return ___DoWindowFilterOnly_4; }
	inline bool* get_address_of_DoWindowFilterOnly_4() { return &___DoWindowFilterOnly_4; }
	inline void set_DoWindowFilterOnly_4(bool value)
	{
		___DoWindowFilterOnly_4 = value;
	}

	inline static int32_t get_offset_of_InnerHysteresisWindowSizeM_5() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ___InnerHysteresisWindowSizeM_5)); }
	inline float get_InnerHysteresisWindowSizeM_5() const { return ___InnerHysteresisWindowSizeM_5; }
	inline float* get_address_of_InnerHysteresisWindowSizeM_5() { return &___InnerHysteresisWindowSizeM_5; }
	inline void set_InnerHysteresisWindowSizeM_5(float value)
	{
		___InnerHysteresisWindowSizeM_5 = value;
	}

	inline static int32_t get_offset_of_OuterHysteresisWindowSizeM_6() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ___OuterHysteresisWindowSizeM_6)); }
	inline float get_OuterHysteresisWindowSizeM_6() const { return ___OuterHysteresisWindowSizeM_6; }
	inline float* get_address_of_OuterHysteresisWindowSizeM_6() { return &___OuterHysteresisWindowSizeM_6; }
	inline void set_OuterHysteresisWindowSizeM_6(float value)
	{
		___OuterHysteresisWindowSizeM_6 = value;
	}

	inline static int32_t get_offset_of_MinCutoff_7() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ___MinCutoff_7)); }
	inline float get_MinCutoff_7() const { return ___MinCutoff_7; }
	inline float* get_address_of_MinCutoff_7() { return &___MinCutoff_7; }
	inline void set_MinCutoff_7(float value)
	{
		___MinCutoff_7 = value;
	}

	inline static int32_t get_offset_of_BetaCutoffSlope_8() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ___BetaCutoffSlope_8)); }
	inline float get_BetaCutoffSlope_8() const { return ___BetaCutoffSlope_8; }
	inline float* get_address_of_BetaCutoffSlope_8() { return &___BetaCutoffSlope_8; }
	inline void set_BetaCutoffSlope_8(float value)
	{
		___BetaCutoffSlope_8 = value;
	}

	inline static int32_t get_offset_of_DerivateCutoffFrequency_9() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ___DerivateCutoffFrequency_9)); }
	inline float get_DerivateCutoffFrequency_9() const { return ___DerivateCutoffFrequency_9; }
	inline float* get_address_of_DerivateCutoffFrequency_9() { return &___DerivateCutoffFrequency_9; }
	inline void set_DerivateCutoffFrequency_9(float value)
	{
		___DerivateCutoffFrequency_9 = value;
	}

	inline static int32_t get_offset_of__xFilter_16() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ____xFilter_16)); }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * get__xFilter_16() const { return ____xFilter_16; }
	inline SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B ** get_address_of__xFilter_16() { return &____xFilter_16; }
	inline void set__xFilter_16(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * value)
	{
		____xFilter_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xFilter_16), (void*)value);
	}

	inline static int32_t get_offset_of__lastValue_17() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ____lastValue_17)); }
	inline float get__lastValue_17() const { return ____lastValue_17; }
	inline float* get_address_of__lastValue_17() { return &____lastValue_17; }
	inline void set__lastValue_17(float value)
	{
		____lastValue_17 = value;
	}

	inline static int32_t get_offset_of__sensorFrequency_18() { return static_cast<int32_t>(offsetof(SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86, ____sensorFrequency_18)); }
	inline float get__sensorFrequency_18() const { return ____sensorFrequency_18; }
	inline float* get_address_of__sensorFrequency_18() { return &____sensorFrequency_18; }
	inline void set__sensorFrequency_18(float value)
	{
		____sensorFrequency_18 = value;
	}
};


// SliderValueToText
struct SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider SliderValueToText::sliderUI
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___sliderUI_4;
	// UnityEngine.UI.Text SliderValueToText::textSliderValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textSliderValue_5;

public:
	inline static int32_t get_offset_of_sliderUI_4() { return static_cast<int32_t>(offsetof(SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB, ___sliderUI_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_sliderUI_4() const { return ___sliderUI_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_sliderUI_4() { return &___sliderUI_4; }
	inline void set_sliderUI_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___sliderUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliderUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_textSliderValue_5() { return static_cast<int32_t>(offsetof(SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB, ___textSliderValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textSliderValue_5() const { return ___textSliderValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textSliderValue_5() { return &___textSliderValue_5; }
	inline void set_textSliderValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textSliderValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSliderValue_5), (void*)value);
	}
};


// SmoothingFilterTest
struct SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform SmoothingFilterTest::NoisyObject
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___NoisyObject_4;
	// UnityEngine.Transform SmoothingFilterTest::FilteredObject
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___FilteredObject_5;
	// UnityEngine.Transform SmoothingFilterTest::NeutralObject
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___NeutralObject_6;
	// System.Single SmoothingFilterTest::PositionalNoiseM
	float ___PositionalNoiseM_7;
	// System.Single SmoothingFilterTest::RotationalNoiseRatio
	float ___RotationalNoiseRatio_8;
	// System.Single SmoothingFilterTest::TestObjectZOffsetM
	float ___TestObjectZOffsetM_9;
	// System.Single SmoothingFilterTest::_mouseScroll
	float ____mouseScroll_12;
	// System.Boolean SmoothingFilterTest::_detachTestObjects
	bool ____detachTestObjects_13;
	// UnityEngine.Vector3 SmoothingFilterTest::_prevPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____prevPos_14;

public:
	inline static int32_t get_offset_of_NoisyObject_4() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ___NoisyObject_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_NoisyObject_4() const { return ___NoisyObject_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_NoisyObject_4() { return &___NoisyObject_4; }
	inline void set_NoisyObject_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___NoisyObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoisyObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_FilteredObject_5() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ___FilteredObject_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_FilteredObject_5() const { return ___FilteredObject_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_FilteredObject_5() { return &___FilteredObject_5; }
	inline void set_FilteredObject_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___FilteredObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilteredObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_NeutralObject_6() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ___NeutralObject_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_NeutralObject_6() const { return ___NeutralObject_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_NeutralObject_6() { return &___NeutralObject_6; }
	inline void set_NeutralObject_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___NeutralObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NeutralObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_PositionalNoiseM_7() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ___PositionalNoiseM_7)); }
	inline float get_PositionalNoiseM_7() const { return ___PositionalNoiseM_7; }
	inline float* get_address_of_PositionalNoiseM_7() { return &___PositionalNoiseM_7; }
	inline void set_PositionalNoiseM_7(float value)
	{
		___PositionalNoiseM_7 = value;
	}

	inline static int32_t get_offset_of_RotationalNoiseRatio_8() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ___RotationalNoiseRatio_8)); }
	inline float get_RotationalNoiseRatio_8() const { return ___RotationalNoiseRatio_8; }
	inline float* get_address_of_RotationalNoiseRatio_8() { return &___RotationalNoiseRatio_8; }
	inline void set_RotationalNoiseRatio_8(float value)
	{
		___RotationalNoiseRatio_8 = value;
	}

	inline static int32_t get_offset_of_TestObjectZOffsetM_9() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ___TestObjectZOffsetM_9)); }
	inline float get_TestObjectZOffsetM_9() const { return ___TestObjectZOffsetM_9; }
	inline float* get_address_of_TestObjectZOffsetM_9() { return &___TestObjectZOffsetM_9; }
	inline void set_TestObjectZOffsetM_9(float value)
	{
		___TestObjectZOffsetM_9 = value;
	}

	inline static int32_t get_offset_of__mouseScroll_12() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ____mouseScroll_12)); }
	inline float get__mouseScroll_12() const { return ____mouseScroll_12; }
	inline float* get_address_of__mouseScroll_12() { return &____mouseScroll_12; }
	inline void set__mouseScroll_12(float value)
	{
		____mouseScroll_12 = value;
	}

	inline static int32_t get_offset_of__detachTestObjects_13() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ____detachTestObjects_13)); }
	inline bool get__detachTestObjects_13() const { return ____detachTestObjects_13; }
	inline bool* get_address_of__detachTestObjects_13() { return &____detachTestObjects_13; }
	inline void set__detachTestObjects_13(bool value)
	{
		____detachTestObjects_13 = value;
	}

	inline static int32_t get_offset_of__prevPos_14() { return static_cast<int32_t>(offsetof(SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC, ____prevPos_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__prevPos_14() const { return ____prevPos_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__prevPos_14() { return &____prevPos_14; }
	inline void set__prevPos_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____prevPos_14 = value;
	}
};


// SpinnerProgress
struct SpinnerProgress_tC109EF85401ECC68610C1A8290C889AD9F97CCBA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform SpinnerProgress::_spinnerComponent
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____spinnerComponent_4;
	// System.Single SpinnerProgress::_rotateSpeed
	float ____rotateSpeed_5;

public:
	inline static int32_t get_offset_of__spinnerComponent_4() { return static_cast<int32_t>(offsetof(SpinnerProgress_tC109EF85401ECC68610C1A8290C889AD9F97CCBA, ____spinnerComponent_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__spinnerComponent_4() const { return ____spinnerComponent_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__spinnerComponent_4() { return &____spinnerComponent_4; }
	inline void set__spinnerComponent_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____spinnerComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spinnerComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of__rotateSpeed_5() { return static_cast<int32_t>(offsetof(SpinnerProgress_tC109EF85401ECC68610C1A8290C889AD9F97CCBA, ____rotateSpeed_5)); }
	inline float get__rotateSpeed_5() const { return ____rotateSpeed_5; }
	inline float* get_address_of__rotateSpeed_5() { return &____rotateSpeed_5; }
	inline void set__rotateSpeed_5(float value)
	{
		____rotateSpeed_5 = value;
	}
};


// ToggleUIVisibility
struct ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] ToggleUIVisibility::CarouselCanvases
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___CarouselCanvases_4;

public:
	inline static int32_t get_offset_of_CarouselCanvases_4() { return static_cast<int32_t>(offsetof(ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B, ___CarouselCanvases_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_CarouselCanvases_4() const { return ___CarouselCanvases_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_CarouselCanvases_4() { return &___CarouselCanvases_4; }
	inline void set_CarouselCanvases_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___CarouselCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CarouselCanvases_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UpdateDistanceMetrics
struct UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UpdateDistanceMetrics::DistanceLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DistanceLabel_4;
	// UnityEngine.UI.Text UpdateDistanceMetrics::HeightLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___HeightLabel_5;
	// OrientedReticle UpdateDistanceMetrics::_orientedReticle
	OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * ____orientedReticle_6;
	// System.Collections.Generic.LinkedList`1<System.Single> UpdateDistanceMetrics::_floorHeights
	LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * ____floorHeights_7;

public:
	inline static int32_t get_offset_of_DistanceLabel_4() { return static_cast<int32_t>(offsetof(UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672, ___DistanceLabel_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DistanceLabel_4() const { return ___DistanceLabel_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DistanceLabel_4() { return &___DistanceLabel_4; }
	inline void set_DistanceLabel_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DistanceLabel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DistanceLabel_4), (void*)value);
	}

	inline static int32_t get_offset_of_HeightLabel_5() { return static_cast<int32_t>(offsetof(UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672, ___HeightLabel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_HeightLabel_5() const { return ___HeightLabel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_HeightLabel_5() { return &___HeightLabel_5; }
	inline void set_HeightLabel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___HeightLabel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeightLabel_5), (void*)value);
	}

	inline static int32_t get_offset_of__orientedReticle_6() { return static_cast<int32_t>(offsetof(UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672, ____orientedReticle_6)); }
	inline OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * get__orientedReticle_6() const { return ____orientedReticle_6; }
	inline OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 ** get_address_of__orientedReticle_6() { return &____orientedReticle_6; }
	inline void set__orientedReticle_6(OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * value)
	{
		____orientedReticle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____orientedReticle_6), (void*)value);
	}

	inline static int32_t get_offset_of__floorHeights_7() { return static_cast<int32_t>(offsetof(UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672, ____floorHeights_7)); }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * get__floorHeights_7() const { return ____floorHeights_7; }
	inline LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 ** get_address_of__floorHeights_7() { return &____floorHeights_7; }
	inline void set__floorHeights_7(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * value)
	{
		____floorHeights_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____floorHeights_7), (void*)value);
	}
};


// Whirlwind
struct Whirlwind_tA828026CF25F25325B4B2392543DE60675579401  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 Whirlwind::scaleUp
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scaleUp_4;

public:
	inline static int32_t get_offset_of_scaleUp_4() { return static_cast<int32_t>(offsetof(Whirlwind_tA828026CF25F25325B4B2392543DE60675579401, ___scaleUp_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scaleUp_4() const { return ___scaleUp_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scaleUp_4() { return &___scaleUp_4; }
	inline void set_scaleUp_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scaleUp_4 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
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


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
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
// UnityEngine.UI.Slider[]
struct SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * m_Items[1];

public:
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * m_Items[1];

public:
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * m_Items[1];

public:
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Plane[]
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  m_Items[1];

public:
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  m_Items[1];

public:
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::get_First()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.LinkedListNode`1<System.Single>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_gshared_inline (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedListNode`1<System.Single>::get_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedListNode_1_get_Next_mDCC3EFE818041922B7990C5B30681538026406EE_gshared (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::AddBefore(System.Collections.Generic.LinkedListNode`1<!0>,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_AddBefore_mFB19B9B819BFAA270438665E0FC86F89E54C04F7_gshared (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___node0, float ___value1, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::AddLast(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_gshared (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::RemoveFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_gshared (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.LinkedList`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_gshared (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_gshared (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_gshared (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_gshared_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2Int>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A  List_1_GetEnumerator_m322C99C02EBFBAD56375A2103C6BD82D66B42CEF_gshared (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_gshared_inline (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3ABAEA49D99554AA05247944F5C4F0C02754C236_gshared (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD5C5B63F114D47658E4F056ADB3DE06973E936B2_gshared (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Get_TisRuntimeObject_mF909DF1A8B4C9F8749FC7619CE27DB4BA1CFA586_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void SingleValueFilter::ReinitalizeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleValueFilter_ReinitalizeFilter_mF94620B1DA131005D985DD314547D66E68611DA9 (SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86 * __this, const RuntimeMethod* method);
// System.Void SpeedAdaptiveFilter::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter__ctor_m9455A774D77CA3B733FE8E74F95C69F4B874FCEB (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___frequency0, float ___mincutoff1, float ___beta2, float ___dcutoff3, const RuntimeMethod* method);
// System.Void SingleValueFilter::UpdateFilterParameters(SpeedAdaptiveFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleValueFilter_UpdateFilterParameters_m362B2CEA885C4D1ED4E6746713DEC65DDD070247 (SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86 * __this, SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ___filter0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single SpeedAdaptiveFilter::Filter(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpeedAdaptiveFilter_Filter_m0C7F356FE6ABA3DDB4454C64D4D78B16365A9135 (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void SpeedAdaptiveFilter::SetBeta(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetBeta_mB913296198D3526439532AC9995E3094019FA43C_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void SpeedAdaptiveFilter::SetMinimumCutoff(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetMinimumCutoff_m54190B98074E4A8FC47AA2F94667AFF335832737_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void SpeedAdaptiveFilter::SetDerivateCutoff(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetDerivateCutoff_m9F5ADF15942F987690613623627898B9FB93DA89_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void SliderValueToText::ShowSliderValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValueToText_ShowSliderValue_mD42B3420B75F215F92859A4D57A9B08E9C554AE3 (SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Camera DepthSource::get_ARCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * DepthSource_get_ARCamera_m001936E4456F0E11B48DEBF11A610F564FBBB1D9 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Random::get_rotationUniform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Random_get_rotationUniform_mBAA9559C88E277D4397A1F580EA6DC534BB369FC (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PositionFilter>()
inline PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31 * Component_GetComponent_TisPositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31_m5B3FDE8EDF18F4AB7378F1EFA165F4F577ACD630 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<QuaternionFilter>()
inline QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987 * Component_GetComponent_TisQuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987_m0948A24F19E5CF7B89F8E2709F7128FD4F4B4A9C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 PositionFilter::Filter(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PositionFilter_Filter_mE59187486D8D743BFA359CE1D0D10BA4D59A4FC0 (PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion QuaternionFilter::Filter(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  QuaternionFilter_Filter_m4EDC73C583E5553867489375DA838698401BD514 (QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void SpeedAdaptiveFilter::SetFrequency(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetFrequency_mA1E67B35286F1737F5F1AB00F962CE6EB381FBCB_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method);
// System.Single SpeedAdaptiveFilter::GetWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpeedAdaptiveFilter_GetWeight_m4A518E2765C4DFC45820550BD289278315E5D754 (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___cutoff0, const RuntimeMethod* method);
// System.Void LowPassFilter::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPassFilter__ctor_m06B0BAA094272474034BC2C5F8EE3DDDC8D8CD60 (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * __this, float ___weight0, float ___initialValue1, const RuntimeMethod* method);
// System.Void SpeedAdaptiveFilter::UpdateSensorFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_UpdateSensorFrequency_m6DBC997A1483B9C1C2BD7F359E8085D569B4879E (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, const RuntimeMethod* method);
// System.Boolean LowPassFilter::GetIsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LowPassFilter_GetIsInitialized_mD0A957476003BCAFFF2A6BC008D5B5A10263184A_inline (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * __this, const RuntimeMethod* method);
// System.Single LowPassFilter::GetRawInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LowPassFilter_GetRawInput_mE79CF2A3E4461A524580B840CD90F380CF1DF163_inline (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * __this, const RuntimeMethod* method);
// System.Single LowPassFilter::UpdateFilterValue(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LowPassFilter_UpdateFilterValue_m95216E75DB916235AA1363A085C94A5F694C415A (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * __this, float ___val0, float ___weight1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_Inequality_mA99EAB5E3E7973D645B820DB8C29E9E5790BB13A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<ProjectileScript>()
inline ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Resources_FindObjectsOfTypeAll_mAC4233995ECE942E2C0250607C5CFD9E805F2215 (Type_t * ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void ToggleUIVisibility::CarouselVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleUIVisibility_CarouselVisible_m15F13AB655F1B9039DA26F2E5879330A13EA16BC (ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B * __this, bool ___visible0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::get_First()
inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.LinkedListNode`1<System.Single>::get_Value()
inline float LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_inline (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *, const RuntimeMethod*))LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_gshared_inline)(__this, method);
}
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedListNode`1<System.Single>::get_Next()
inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedListNode_1_get_Next_mDCC3EFE818041922B7990C5B30681538026406EE (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * (*) (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *, const RuntimeMethod*))LinkedListNode_1_get_Next_mDCC3EFE818041922B7990C5B30681538026406EE_gshared)(__this, method);
}
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::AddBefore(System.Collections.Generic.LinkedListNode`1<!0>,!0)
inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_AddBefore_mFB19B9B819BFAA270438665E0FC86F89E54C04F7 (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * ___node0, float ___value1, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *, float, const RuntimeMethod*))LinkedList_1_AddBefore_mFB19B9B819BFAA270438665E0FC86F89E54C04F7_gshared)(__this, ___node0, ___value1, method);
}
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Single>::AddLast(!0)
inline LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3 (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, float ___value0, const RuntimeMethod* method)
{
	return ((  LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, float, const RuntimeMethod*))LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::RemoveFirst()
inline void LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756 (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.LinkedList`1<System.Single>::get_Count()
inline int32_t LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_gshared_inline)(__this, method);
}
// System.Single UpdateDistanceMetrics::EstimateFloorHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateDistanceMetrics_EstimateFloorHeight_m6FA4489ECEC626B09CF3E2B3C4B7845FE287C5DB (UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<OrientedReticle>()
inline OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * Object_FindObjectOfType_TisOrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101_m1AD3A06EB99A7E8859EC1231C98D486B2EA250B6 (const RuntimeMethod* method)
{
	return ((  OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UpdateDistanceMetrics::EstimateCurrentHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateDistanceMetrics_EstimateCurrentHeight_mE8DBBF0361F02C3D0EB0398D044E2ED8BA7FF0A7 (UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Single OrientedReticle::get_Distance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientedReticle_get_Distance_m0543F1D45C48CFEA0C96447A98415B568522DBEB_inline (OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Single>::.ctor()
inline void LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *, const RuntimeMethod*))LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshFilter>()
inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Expand_mA5AD4498F5171696B1684268150F5FAA8D3C3A61 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___amount0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* GeometryUtility_CalculateFrustumPlanes_mB4DD05307602B87B5279CD3D9B4EED69D4429663 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryUtility_TestPlanesAABB_mC37D104FA9ACBC6A959A7CCD6C1EAD3A7A450491 (PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* ___planes0, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m53209E2851578015083B4DEF8354AB38EAD4C553 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] Utilities::GetBoundingBoxVertices(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Utilities_GetBoundingBoxVertices_mE2EBA10E69F3A7ED3C99A119443ED92F12B7A6C6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dimensions1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
inline void List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, const RuntimeMethod*))List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_gshared)(__this, method);
}
// UnityEngine.Vector2Int Utilities::WorldPointToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Utilities_WorldPointToScreenPoint_m89D63A8BDE5309AE08990680F8DD99B7B86245B8 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPoint0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(!0)
inline void List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153 (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 , const RuntimeMethod*))List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Item(System.Int32)
inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, int32_t, const RuntimeMethod*))List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector2Int>::GetEnumerator()
inline Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A  List_1_GetEnumerator_m322C99C02EBFBAD56375A2103C6BD82D66B42CEF (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A  (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, const RuntimeMethod*))List_1_GetEnumerator_m322C99C02EBFBAD56375A2103C6BD82D66B42CEF_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::get_Current()
inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_inline (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A * __this, const RuntimeMethod* method)
{
	return ((  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  (*) (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A *, const RuntimeMethod*))Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_gshared_inline)(__this, method);
}
// UnityEngine.Vector2Int UnityEngine.Vector2Int::Min(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_Min_m1D63F92E4FD8B89FCFA2BAAA574194F29BF538BE_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::Max(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_Max_mE31DD0B63B01E585B3EA8C876DB7AB2AB72E61B0_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::MoveNext()
inline bool Enumerator_MoveNext_m3ABAEA49D99554AA05247944F5C4F0C02754C236 (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A *, const RuntimeMethod*))Enumerator_MoveNext_m3ABAEA49D99554AA05247944F5C4F0C02754C236_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2Int>::Dispose()
inline void Enumerator_Dispose_mD5C5B63F114D47658E4F056ADB3DE06973E936B2 (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A *, const RuntimeMethod*))Enumerator_Dispose_mD5C5B63F114D47658E4F056ADB3DE06973E936B2_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Whirlwind::Ded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Whirlwind_Ded_m266D17E0C633CDD774770CD0FD060026E0B5832F (Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Whirlwind/<Ded>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDedU3Ed__3__ctor_mA18D38945839978CAD7379C830896D4F8EA290BA (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void OcclusionChanged::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcclusionChanged_Invoke_mBE4D861E18D4EDB7B0433ED7DADE9CA32068F302 (OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * __this, bool ___occlusionOn0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.DeviceOrientation UnityEngine.Input::get_deviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_deviceOrientation_m2620E06825B2772FF5FFCF7FE4D814FAB9365224 (const RuntimeMethod* method);
// System.Void CarouselLabelOrientation::RotateCarouselLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarouselLabelOrientation_RotateCarouselLabel_m6B66FE65C71874188F03B70421C3892BF193EF60 (CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared)(__this, ___fieldName0, method);
}
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0 UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF909DF1A8B4C9F8749FC7619CE27DB4BA1CFA586_gshared)(__this, ___fieldName0, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::StartRecording(Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_StartRecording_m963CB0B48D2774D5E9EAB1573F83EF4B74E6CCC6 (ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF * __this, ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * ___config0, const RuntimeMethod* method);
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.ARPlaybackManager::SetPlaybackDataset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_SetPlaybackDataset_mF1B1B0FDB818AB3FF865A5AA784267E6C1D02265 (ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2 * __this, String_t* ___datasetFilepath0, const RuntimeMethod* method);
// System.Void Recorder/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mB929708087EA4F5A40B8FF8291C0063405E8464F (U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_m5DA00ED9A37FBDE983CC8895B36AA8702F965375 (WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Void Recorder/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m548AAB70F75E402905A6B7ACD216019A82412555 (U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * __this, const RuntimeMethod* method);
// System.Void Google.XR.ARCoreExtensions.ARCoreRecordingConfig::set_Mp4DatasetFilepath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRecordingConfig_set_Mp4DatasetFilepath_m6744288907AC0992BF71DC57119C595C329D1280 (ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Recorder::ResetScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_ResetScenes_mB6B1019633C186C0CE566209F0ACA78B8F4095D9 (Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * __this, const RuntimeMethod* method);
// System.Void RotateCarouselButton::RotateCarouselItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateCarouselButton_RotateCarouselItem_m034EE567BDBE3B414B3FA0BB6D94B0F30093F441 (RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * __this, const RuntimeMethod* method);
// System.Void SceneSwitcher::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitcher_LoadScene_m29C1C82E7858E7800B69F4AF7245F99D20BEF8D1 (SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void LoadingSpinner::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingSpinner_Show_m3F511B6A514F64545197873DF0F2185E5381AEDD (LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_UnloadSceneAsync_m94D080FDA6440916AA8F8F4FA13B1002C96BB589 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void LoadingSpinner::SetLoadingOperation(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingSpinner_SetLoadingOperation_m0CB6E600AA95DBE2FDE716FDF3043A921CEF67DB (LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___loadingOperation0, const RuntimeMethod* method);
// System.Void LoadingSpinner::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingSpinner_Hide_m5D4AC460DDA88321EAC12F0A5219A054C5D9C911 (LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SingleValueFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleValueFilter__ctor_m1D56B086118709FF2416E27DE57029529DBE2792 (SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86 * __this, const RuntimeMethod* method)
{
	{
		// public float InnerHysteresisWindowSizeM = _innerHysteresisWindowSizeM;
		__this->set_InnerHysteresisWindowSizeM_5((0.00300000003f));
		// public float OuterHysteresisWindowSizeM = _outerHysteresisWindowSizeM;
		__this->set_OuterHysteresisWindowSizeM_6((0.0149999997f));
		// public float MinCutoff = _minCutoff;
		__this->set_MinCutoff_7((7.0f));
		// public float BetaCutoffSlope = _betaCutoffSlope;
		__this->set_BetaCutoffSlope_8((0.5f));
		// public float DerivateCutoffFrequency = _derivateCutoffFrequency;
		__this->set_DerivateCutoffFrequency_9((1.0f));
		// private float _sensorFrequency = _initialSensorFrequency;
		__this->set__sensorFrequency_18((60.0f));
		// public SingleValueFilter()
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// ReinitalizeFilter();
		SingleValueFilter_ReinitalizeFilter_mF94620B1DA131005D985DD314547D66E68611DA9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single SingleValueFilter::get_LastValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SingleValueFilter_get_LastValue_m5C709D5ED347EF5CC8D3CE193F69A2233C1F730B (SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86 * __this, const RuntimeMethod* method)
{
	{
		// return _lastValue;
		float L_0 = __this->get__lastValue_17();
		return L_0;
	}
}
// System.Void SingleValueFilter::ReinitalizeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleValueFilter_ReinitalizeFilter_mF94620B1DA131005D985DD314547D66E68611DA9 (SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _xFilter = new SpeedAdaptiveFilter(
		//     _sensorFrequency, MinCutoff, BetaCutoffSlope, DerivateCutoffFrequency);
		float L_0 = __this->get__sensorFrequency_18();
		float L_1 = __this->get_MinCutoff_7();
		float L_2 = __this->get_BetaCutoffSlope_8();
		float L_3 = __this->get_DerivateCutoffFrequency_9();
		SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * L_4 = (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B *)il2cpp_codegen_object_new(SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B_il2cpp_TypeInfo_var);
		SpeedAdaptiveFilter__ctor_m9455A774D77CA3B733FE8E74F95C69F4B874FCEB(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set__xFilter_16(L_4);
		// }
		return;
	}
}
// System.Single SingleValueFilter::Filter(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SingleValueFilter_Filter_mAB4B6AE7EAE3EA818CBEF8D883B55F5E12023E7E (SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// UpdateFilterParameters(_xFilter);
		SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * L_0 = __this->get__xFilter_16();
		SingleValueFilter_UpdateFilterParameters_m362B2CEA885C4D1ED4E6746713DEC65DDD070247(__this, L_0, /*hidden argument*/NULL);
		// float distFromLastPos = Math.Abs(_lastValue - value);
		float L_1 = __this->get__lastValue_17();
		float L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// float ratio = (distFromLastPos - InnerHysteresisWindowSizeM) /
		//     (OuterHysteresisWindowSizeM - InnerHysteresisWindowSizeM);
		float L_4 = __this->get_InnerHysteresisWindowSizeM_5();
		float L_5 = __this->get_OuterHysteresisWindowSizeM_6();
		float L_6 = __this->get_InnerHysteresisWindowSizeM_5();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))/(float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6))));
		// ratio = Mathf.Clamp01(ratio);
		float L_7 = V_0;
		float L_8;
		L_8 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// float result = value;
		float L_9 = ___value0;
		V_1 = L_9;
		// if (!DoWindowFilterOnly)
		bool L_10 = __this->get_DoWindowFilterOnly_4();
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		// result = _xFilter.Filter(value);
		SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * L_11 = __this->get__xFilter_16();
		float L_12 = ___value0;
		NullCheck(L_11);
		float L_13;
		L_13 = SpeedAdaptiveFilter_Filter_m0C7F356FE6ABA3DDB4454C64D4D78B16365A9135(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_004d:
	{
		// result = (ratio * result) + ((1.0f - ratio) * _lastValue);
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_0;
		float L_17 = __this->get__lastValue_17();
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_16)), (float)L_17))));
		// _lastValue = result;
		float L_18 = V_1;
		__this->set__lastValue_17(L_18);
		// return result;
		float L_19 = V_1;
		return L_19;
	}
}
// System.Void SingleValueFilter::UpdateFilterParameters(SpeedAdaptiveFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleValueFilter_UpdateFilterParameters_m362B2CEA885C4D1ED4E6746713DEC65DDD070247 (SingleValueFilter_tA4288192BCA5CCC27AEB20047050F06B020D1D86 * __this, SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * ___filter0, const RuntimeMethod* method)
{
	{
		// filter.SetBeta(BetaCutoffSlope);
		SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * L_0 = ___filter0;
		float L_1 = __this->get_BetaCutoffSlope_8();
		NullCheck(L_0);
		SpeedAdaptiveFilter_SetBeta_mB913296198D3526439532AC9995E3094019FA43C_inline(L_0, L_1, /*hidden argument*/NULL);
		// filter.SetMinimumCutoff(MinCutoff);
		SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * L_2 = ___filter0;
		float L_3 = __this->get_MinCutoff_7();
		NullCheck(L_2);
		SpeedAdaptiveFilter_SetMinimumCutoff_m54190B98074E4A8FC47AA2F94667AFF335832737_inline(L_2, L_3, /*hidden argument*/NULL);
		// filter.SetDerivateCutoff(DerivateCutoffFrequency);
		SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * L_4 = ___filter0;
		float L_5 = __this->get_DerivateCutoffFrequency_9();
		NullCheck(L_4);
		SpeedAdaptiveFilter_SetDerivateCutoff_m9F5ADF15942F987690613623627898B9FB93DA89_inline(L_4, L_5, /*hidden argument*/NULL);
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
// System.Void SliderValueToText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValueToText_Start_m82C55275BBFC11A9AD3888663509D2F736CB0025 (SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textSliderValue = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_textSliderValue_5(L_0);
		// ShowSliderValue();
		SliderValueToText_ShowSliderValue_mD42B3420B75F215F92859A4D57A9B08E9C554AE3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SliderValueToText::ShowSliderValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValueToText_ShowSliderValue_mD42B3420B75F215F92859A4D57A9B08E9C554AE3 (SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// string sliderMessage = "" + sliderUI.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_sliderUI_4();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001c:
	{
		V_0 = G_B2_0;
		// textSliderValue.text = sliderMessage;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_textSliderValue_5();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void SliderValueToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValueToText__ctor_m043433A8C0B9E80DBC4E6F9094FBB1AC68A80F13 (SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SmoothingFilterTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothingFilterTest_Update_mE87268E40B47EC512BDE3F290DE2FCF76D52044F (SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31_m5B3FDE8EDF18F4AB7378F1EFA165F4F577ACD630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisQuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987_m0948A24F19E5CF7B89F8E2709F7128FD4F4B4A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31 * V_5 = NULL;
	QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987 * V_6 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// _detachTestObjects = !_detachTestObjects;
		bool L_1 = __this->get__detachTestObjects_13();
		__this->set__detachTestObjects_13((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
	}

IL_0017:
	{
		// Vector2 v2 = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Vector3 v3 = _detachTestObjects ?
		//     _prevPos :
		//     DepthSource.ARCamera.ScreenToWorldPoint(new Vector3(v2.x, v2.y, TestObjectZOffsetM));
		bool L_4 = __this->get__detachTestObjects_13();
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = DepthSource_get_ARCamera_m001936E4456F0E11B48DEBF11A610F564FBBB1D9(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		float L_7 = L_6.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_y_1();
		float L_10 = __this->get_TestObjectZOffsetM_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_7, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_5, L_11, /*hidden argument*/NULL);
		G_B5_0 = L_12;
		goto IL_0053;
	}

IL_004d:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get__prevPos_14();
		G_B5_0 = L_13;
	}

IL_0053:
	{
		V_1 = G_B5_0;
		// Vector3 newPosition = v3 + (Random.onUnitSphere * PositionalNoiseM * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED(/*hidden argument*/NULL);
		float L_16 = __this->get_PositionalNoiseM_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// _mouseScroll += Input.mouseScrollDelta.y;
		float L_20 = __this->get__mouseScroll_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		float L_22 = L_21.get_y_1();
		__this->set__mouseScroll_12(((float)il2cpp_codegen_add((float)L_20, (float)L_22)));
		// Quaternion rotation = Quaternion.Euler(0, 0, _mouseScroll);
		float L_23 = __this->get__mouseScroll_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		// Quaternion newRotation = Quaternion.Slerp(
		//     rotation,
		//     Random.rotationUniform,
		//     RotationalNoiseRatio);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Random_get_rotationUniform_mBAA9559C88E277D4397A1F580EA6DC534BB369FC(/*hidden argument*/NULL);
		float L_27 = __this->get_RotationalNoiseRatio_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
		L_28 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_25, L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		// if (NeutralObject != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = __this->get_NeutralObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00db;
		}
	}
	{
		// NeutralObject.localPosition = v3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = __this->get_NeutralObject_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_1;
		NullCheck(L_31);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_31, L_32, /*hidden argument*/NULL);
		// NeutralObject.localRotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_NeutralObject_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34 = V_3;
		NullCheck(L_33);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_33, L_34, /*hidden argument*/NULL);
	}

IL_00db:
	{
		// if (FilteredObject != null &&
		//     (posFilter = FilteredObject.GetComponent<PositionFilter>()) != null &&
		//     (rotFilter = FilteredObject.GetComponent<QuaternionFilter>()) != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_FilteredObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_015e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = __this->get_FilteredObject_5();
		NullCheck(L_37);
		PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31 * L_38;
		L_38 = Component_GetComponent_TisPositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31_m5B3FDE8EDF18F4AB7378F1EFA165F4F577ACD630(L_37, /*hidden argument*/Component_GetComponent_TisPositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31_m5B3FDE8EDF18F4AB7378F1EFA165F4F577ACD630_RuntimeMethod_var);
		PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31 * L_39 = L_38;
		V_5 = L_39;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_015e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = __this->get_FilteredObject_5();
		NullCheck(L_41);
		QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987 * L_42;
		L_42 = Component_GetComponent_TisQuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987_m0948A24F19E5CF7B89F8E2709F7128FD4F4B4A9C(L_41, /*hidden argument*/Component_GetComponent_TisQuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987_m0948A24F19E5CF7B89F8E2709F7128FD4F4B4A9C_RuntimeMethod_var);
		QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987 * L_43 = L_42;
		V_6 = L_43;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_015e;
		}
	}
	{
		// Vector3 filteredPos = posFilter.Filter(newPosition);
		PositionFilter_t97F637CD0D340EAAD6990496E00C4FDCE9724E31 * L_45 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_2;
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = PositionFilter_Filter_mE59187486D8D743BFA359CE1D0D10BA4D59A4FC0(L_45, L_46, /*hidden argument*/NULL);
		V_7 = L_47;
		// filteredPos.x += -0.5f * _testObjectXOffsetM;
		float* L_48 = (&V_7)->get_address_of_x_2();
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		*((float*)L_49) = (float)((float)il2cpp_codegen_add((float)L_50, (float)(-0.5f)));
		// FilteredObject.transform.localPosition = filteredPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = __this->get_FilteredObject_5();
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_7;
		NullCheck(L_52);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_52, L_53, /*hidden argument*/NULL);
		// Quaternion filteredRotation = rotFilter.Filter(newRotation);
		QuaternionFilter_tF3790FA02A480BD9A55F562C6AA4CDC83F514987 * L_54 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55 = V_4;
		NullCheck(L_54);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = QuaternionFilter_Filter_m4EDC73C583E5553867489375DA838698401BD514(L_54, L_55, /*hidden argument*/NULL);
		V_8 = L_56;
		// FilteredObject.transform.localRotation = filteredRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57 = __this->get_FilteredObject_5();
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_57, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_59 = V_8;
		NullCheck(L_58);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_58, L_59, /*hidden argument*/NULL);
	}

IL_015e:
	{
		// if (NoisyObject != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = __this->get_NoisyObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_019a;
		}
	}
	{
		// newPosition.x += 0.5f * _testObjectXOffsetM;
		float* L_62 = (&V_2)->get_address_of_x_2();
		float* L_63 = L_62;
		float L_64 = *((float*)L_63);
		*((float*)L_63) = (float)((float)il2cpp_codegen_add((float)L_64, (float)(0.5f)));
		// NoisyObject.localPosition = newPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65 = __this->get_NoisyObject_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_2;
		NullCheck(L_65);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_65, L_66, /*hidden argument*/NULL);
		// NoisyObject.transform.localRotation = newRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67 = __this->get_NoisyObject_4();
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_67, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69 = V_4;
		NullCheck(L_68);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_68, L_69, /*hidden argument*/NULL);
	}

IL_019a:
	{
		// _prevPos = v3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_1;
		__this->set__prevPos_14(L_70);
		// }
		return;
	}
}
// System.Void SmoothingFilterTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothingFilterTest__ctor_m58CAB43BE579D3994A1A3F94C7E10D1A7394C528 (SmoothingFilterTest_t54B9A438E1F849B76552039369345C3EB27BB2FC * __this, const RuntimeMethod* method)
{
	{
		// public float TestObjectZOffsetM = _testObjectZOffsetM;
		__this->set_TestObjectZOffsetM_9((2.0f));
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
// System.Void SpeedAdaptiveFilter::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter__ctor_m9455A774D77CA3B733FE8E74F95C69F4B874FCEB (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___frequency0, float ___mincutoff1, float ___beta2, float ___dcutoff3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SpeedAdaptiveFilter(
		//     float frequency, float mincutoff = 1, float beta = 0, float dcutoff = 1)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SetFrequency(frequency);
		float L_0 = ___frequency0;
		SpeedAdaptiveFilter_SetFrequency_mA1E67B35286F1737F5F1AB00F962CE6EB381FBCB_inline(__this, L_0, /*hidden argument*/NULL);
		// SetMinimumCutoff(mincutoff);
		float L_1 = ___mincutoff1;
		SpeedAdaptiveFilter_SetMinimumCutoff_m54190B98074E4A8FC47AA2F94667AFF335832737_inline(__this, L_1, /*hidden argument*/NULL);
		// SetBeta(beta);
		float L_2 = ___beta2;
		SpeedAdaptiveFilter_SetBeta_mB913296198D3526439532AC9995E3094019FA43C_inline(__this, L_2, /*hidden argument*/NULL);
		// SetDerivateCutoff(dcutoff);
		float L_3 = ___dcutoff3;
		SpeedAdaptiveFilter_SetDerivateCutoff_m9F5ADF15942F987690613623627898B9FB93DA89_inline(__this, L_3, /*hidden argument*/NULL);
		// _xFilter = new LowPassFilter(GetWeight(mincutoff), 0);
		float L_4 = ___mincutoff1;
		float L_5;
		L_5 = SpeedAdaptiveFilter_GetWeight_m4A518E2765C4DFC45820550BD289278315E5D754(__this, L_4, /*hidden argument*/NULL);
		LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * L_6 = (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 *)il2cpp_codegen_object_new(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2_il2cpp_TypeInfo_var);
		LowPassFilter__ctor_m06B0BAA094272474034BC2C5F8EE3DDDC8D8CD60(L_6, L_5, (0.0f), /*hidden argument*/NULL);
		__this->set__xFilter_5(L_6);
		// _dxFilter = new LowPassFilter(GetWeight(dcutoff), 0);
		float L_7 = ___dcutoff3;
		float L_8;
		L_8 = SpeedAdaptiveFilter_GetWeight_m4A518E2765C4DFC45820550BD289278315E5D754(__this, L_7, /*hidden argument*/NULL);
		LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * L_9 = (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 *)il2cpp_codegen_object_new(LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2_il2cpp_TypeInfo_var);
		LowPassFilter__ctor_m06B0BAA094272474034BC2C5F8EE3DDDC8D8CD60(L_9, L_8, (0.0f), /*hidden argument*/NULL);
		__this->set__dxFilter_6(L_9);
		// _prevTime = DateTime.MinValue;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_10 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
		__this->set__prevTime_7(L_10);
		// }
		return;
	}
}
// System.Single SpeedAdaptiveFilter::get_LastValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpeedAdaptiveFilter_get_LastValue_m75D9B812DD7DE4388B978E77940F18C031642720 (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, const RuntimeMethod* method)
{
	{
		// return _lastValue;
		float L_0 = __this->get__lastValue_0();
		return L_0;
	}
}
// System.Single SpeedAdaptiveFilter::GetWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpeedAdaptiveFilter_GetWeight_m4A518E2765C4DFC45820550BD289278315E5D754 (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___cutoff0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float te = 1f / _sensorFrequency;
		float L_0 = __this->get__sensorFrequency_1();
		V_0 = ((float)((float)(1.0f)/(float)L_0));
		// float tau = 1f / (2f * Mathf.PI * cutoff);
		float L_1 = ___cutoff0;
		V_1 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_1))));
		// return 1f / (1f + (tau / te));
		float L_2 = V_1;
		float L_3 = V_0;
		return ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)((float)L_2/(float)L_3))))));
	}
}
// System.Void SpeedAdaptiveFilter::SetFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetFrequency_mA1E67B35286F1737F5F1AB00F962CE6EB381FBCB (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _sensorFrequency = value;
		float L_0 = ___value0;
		__this->set__sensorFrequency_1(L_0);
		// }
		return;
	}
}
// System.Void SpeedAdaptiveFilter::SetMinimumCutoff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetMinimumCutoff_m54190B98074E4A8FC47AA2F94667AFF335832737 (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _minCutoff = value;
		float L_0 = ___value0;
		__this->set__minCutoff_2(L_0);
		// }
		return;
	}
}
// System.Void SpeedAdaptiveFilter::SetBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetBeta_mB913296198D3526439532AC9995E3094019FA43C (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _betaCutoffSlope = value;
		float L_0 = ___value0;
		__this->set__betaCutoffSlope_3(L_0);
		// }
		return;
	}
}
// System.Void SpeedAdaptiveFilter::SetDerivateCutoff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetDerivateCutoff_m9F5ADF15942F987690613623627898B9FB93DA89 (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _derivateCutoffFrequency = value;
		float L_0 = ___value0;
		__this->set__derivateCutoffFrequency_4(L_0);
		// }
		return;
	}
}
// System.Single SpeedAdaptiveFilter::Filter(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpeedAdaptiveFilter_Filter_m0C7F356FE6ABA3DDB4454C64D4D78B16365A9135 (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// UpdateSensorFrequency();
		SpeedAdaptiveFilter_UpdateSensorFrequency_m6DBC997A1483B9C1C2BD7F359E8085D569B4879E(__this, /*hidden argument*/NULL);
		// float dx = _xFilter.GetIsInitialized() ?
		//     (value - _xFilter.GetRawInput()) * _sensorFrequency :
		//     0f;
		LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * L_0 = __this->get__xFilter_5();
		NullCheck(L_0);
		bool L_1;
		L_1 = LowPassFilter_GetIsInitialized_mD0A957476003BCAFFF2A6BC008D5B5A10263184A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_002e;
	}

IL_001a:
	{
		float L_2 = ___value0;
		LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * L_3 = __this->get__xFilter_5();
		NullCheck(L_3);
		float L_4;
		L_4 = LowPassFilter_GetRawInput_mE79CF2A3E4461A524580B840CD90F380CF1DF163_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get__sensorFrequency_1();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_4)), (float)L_5));
	}

IL_002e:
	{
		V_0 = G_B3_0;
		// float edx = _dxFilter.UpdateFilterValue(dx, GetWeight(_derivateCutoffFrequency));
		LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * L_6 = __this->get__dxFilter_6();
		float L_7 = V_0;
		float L_8 = __this->get__derivateCutoffFrequency_4();
		float L_9;
		L_9 = SpeedAdaptiveFilter_GetWeight_m4A518E2765C4DFC45820550BD289278315E5D754(__this, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_10;
		L_10 = LowPassFilter_UpdateFilterValue_m95216E75DB916235AA1363A085C94A5F694C415A(L_6, L_7, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// float cutoff = _minCutoff + (_betaCutoffSlope * Mathf.Abs(edx));
		float L_11 = __this->get__minCutoff_2();
		float L_12 = __this->get__betaCutoffSlope_3();
		float L_13 = V_1;
		float L_14;
		L_14 = fabsf(L_13);
		V_2 = ((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_14))));
		// _lastValue = _xFilter.UpdateFilterValue(value, GetWeight(cutoff));
		LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * L_15 = __this->get__xFilter_5();
		float L_16 = ___value0;
		float L_17 = V_2;
		float L_18;
		L_18 = SpeedAdaptiveFilter_GetWeight_m4A518E2765C4DFC45820550BD289278315E5D754(__this, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		float L_19;
		L_19 = LowPassFilter_UpdateFilterValue_m95216E75DB916235AA1363A085C94A5F694C415A(L_15, L_16, L_18, /*hidden argument*/NULL);
		__this->set__lastValue_0(L_19);
		// return _lastValue;
		float L_20 = __this->get__lastValue_0();
		return L_20;
	}
}
// System.Void SpeedAdaptiveFilter::UpdateSensorFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_UpdateSensorFrequency_m6DBC997A1483B9C1C2BD7F359E8085D569B4879E (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime now = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (_prevTime != DateTime.MinValue)
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = __this->get__prevTime_7();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
		bool L_3;
		L_3 = DateTime_op_Inequality_mA99EAB5E3E7973D645B820DB8C29E9E5790BB13A(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// _sensorFrequency = 1f / (float)(now - _prevTime).TotalSeconds;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = __this->get__prevTime_7();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_6;
		L_6 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		double L_7;
		L_7 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		__this->set__sensorFrequency_1(((float)((float)(1.0f)/(float)((float)((float)L_7)))));
	}

IL_0039:
	{
		// _prevTime = now;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8 = V_0;
		__this->set__prevTime_7(L_8);
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
// System.Void SpinnerProgress::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerProgress_Start_m2B9B76D74D235B8A55C4ACC8877D1676090AAD75 (SpinnerProgress_tC109EF85401ECC68610C1A8290C889AD9F97CCBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _spinnerComponent = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set__spinnerComponent_4(L_0);
		// }
		return;
	}
}
// System.Void SpinnerProgress::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerProgress_Update_m7423CB6B9D2D7E0CFBA853AECC7F6CC8D041BC8F (SpinnerProgress_tC109EF85401ECC68610C1A8290C889AD9F97CCBA * __this, const RuntimeMethod* method)
{
	{
		// _spinnerComponent.Rotate(0f, 0f, _rotateSpeed * Time.deltaTime);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get__spinnerComponent_4();
		float L_1 = __this->get__rotateSpeed_5();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpinnerProgress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerProgress__ctor_mC277E25DA753F709F5408F1FAAEEDE90CC685F7B (SpinnerProgress_tC109EF85401ECC68610C1A8290C889AD9F97CCBA * __this, const RuntimeMethod* method)
{
	{
		// private float _rotateSpeed = 400f;
		__this->set__rotateSpeed_5((400.0f));
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
// System.Void Testing::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_OnStateEnter_m27344633BE16BAFD64B4485E3DEAB927B9C84D33 (Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 playerDirection = GameObject.FindGameObjectWithTag("MainCamera").transform.position - animator.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = ___animator0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// localProjectile = Instantiate(projectile, animator.transform.position, Quaternion.LookRotation(playerDirection));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_projectile_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = ___animator0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_10, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_localProjectile_5(L_13);
		// localProjectile.GetComponent<ProjectileScript>().Origin = animator.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_localProjectile_5();
		NullCheck(L_14);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_15;
		L_15 = GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08(L_14, /*hidden argument*/GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = ___animator0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_Origin_8(L_17);
		// animator.SetInteger("SpecialMeter", animator.GetInteger("SpecialMeter") + 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = ___animator0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = ___animator0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A(L_19, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, /*hidden argument*/NULL);
		NullCheck(L_18);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_18, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
		// animator.SetBool("CoolingDown", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_21 = ___animator0;
		NullCheck(L_21);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_21, _stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Testing::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_OnStateUpdate_m68DD17E38198E6C97540F846E7AF863E68135747 (Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Testing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing__ctor_mB2A300BC87D60FF1509230FC27CB1C2715E48FA4 (Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
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
// System.Void ToggleUIVisibility::CarouselVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleUIVisibility_CarouselVisible_m15F13AB655F1B9039DA26F2E5879330A13EA16BC (ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B * __this, bool ___visible0, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject canvas in CarouselCanvases)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_CarouselCanvases_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (GameObject canvas in CarouselCanvases)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// canvas.SetActive(visible);
		bool L_5 = ___visible0;
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (GameObject canvas in CarouselCanvases)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToggleUIVisibility::AllUIVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleUIVisibility_AllUIVisible_mE18C0D2B800E0525B18D3909460242063901ED0A (ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* V_0 = NULL;
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* V_1 = NULL;
	int32_t V_2 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B3_0 = NULL;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B2_0 = NULL;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B4_0 = NULL;
	{
		// Button[] Buttons = Resources.FindObjectsOfTypeAll(typeof(Button)) as Button[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_mAC4233995ECE942E2C0250607C5CFD9E805F2215(L_1, /*hidden argument*/NULL);
		// Slider[] Sliders = Resources.FindObjectsOfTypeAll(typeof(Slider)) as Slider[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_5;
		L_5 = Resources_FindObjectsOfTypeAll_mAC4233995ECE942E2C0250607C5CFD9E805F2215(L_4, /*hidden argument*/NULL);
		V_0 = ((SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A*)IsInst((RuntimeObject*)L_5, SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A_il2cpp_TypeInfo_var));
		// foreach (Button button in Buttons)
		V_1 = ((ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B*)IsInst((RuntimeObject*)L_2, ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_00bc;
	}

IL_0031:
	{
		// foreach (Button button in Buttons)
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// var origColor = button.gameObject.GetComponent<Image>().color;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = L_9;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12;
		L_12 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_11, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_12);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		V_3 = L_13;
		// if (visible)
		bool L_14 = ___visible0;
		G_B2_0 = L_10;
		if (!L_14)
		{
			G_B3_0 = L_10;
			goto IL_0056;
		}
	}
	{
		// origColor.a = 1f;
		(&V_3)->set_a_3((1.0f));
		// }
		G_B4_0 = G_B2_0;
		goto IL_0062;
	}

IL_0056:
	{
		// origColor.a = 0f;
		(&V_3)->set_a_3((0.0f));
		G_B4_0 = G_B3_0;
	}

IL_0062:
	{
		// button.gameObject.GetComponent<Image>().color = origColor;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = G_B4_0;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17;
		L_17 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_16, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = V_3;
		NullCheck(L_17);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// foreach (Transform child in button.transform)
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
	}

IL_007f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0098;
		}

IL_0081:
		{
			// foreach (Transform child in button.transform)
			RuntimeObject* L_21 = V_4;
			NullCheck(L_21);
			RuntimeObject * L_22;
			L_22 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			// child.gameObject.SetActive(visible);
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_22, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
			L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_22, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			bool L_24 = ___visible0;
			NullCheck(L_23);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, L_24, /*hidden argument*/NULL);
		}

IL_0098:
		{
			// foreach (Transform child in button.transform)
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			bool L_26;
			L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0081;
			}
		}

IL_00a1:
		{
			IL2CPP_LEAVE(0xB8, FINALLY_00a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_4;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_27, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_28 = V_5;
			if (!L_28)
			{
				goto IL_00b7;
			}
		}

IL_00b0:
		{
			RuntimeObject* L_29 = V_5;
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_29);
		}

IL_00b7:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB8, IL_00b8)
	}

IL_00b8:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00bc:
	{
		// foreach (Button button in Buttons)
		int32_t L_31 = V_2;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// foreach (Slider slider in Sliders)
		SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_33 = V_0;
		V_6 = L_33;
		V_2 = 0;
		goto IL_00df;
	}

IL_00cc:
	{
		// foreach (Slider slider in Sliders)
		SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_34 = V_6;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		// slider.gameObject.SetActive(visible);
		NullCheck(L_37);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_37, /*hidden argument*/NULL);
		bool L_39 = ___visible0;
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00df:
	{
		// foreach (Slider slider in Sliders)
		int32_t L_41 = V_2;
		SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_42 = V_6;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_00cc;
		}
	}
	{
		// CarouselVisible(visible);
		bool L_43 = ___visible0;
		ToggleUIVisibility_CarouselVisible_m15F13AB655F1B9039DA26F2E5879330A13EA16BC(__this, L_43, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToggleUIVisibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleUIVisibility__ctor_mFCA5792F7B8964A22A840BDC455677234C4DC49F (ToggleUIVisibility_t83A00885FC95ECFF0713BCE7CA78116A846C989B * __this, const RuntimeMethod* method)
{
	{
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
// System.Void TutorialTesting::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialTesting_OnStateEnter_m0F9CF52BA8BB33F711E287CA30877D4800656242 (TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 playerDirection = GameObject.FindGameObjectWithTag("MainCamera").transform.position - animator.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = ___animator0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_5, /*hidden argument*/NULL);
		// localProjectile = Instantiate(projectile, animator.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_projectile_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = ___animator0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_7, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_localProjectile_5(L_10);
		// localProjectile.GetComponent<ProjectileScript>().Origin = animator.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_localProjectile_5();
		NullCheck(L_11);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_12;
		L_12 = GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08(L_11, /*hidden argument*/GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = ___animator0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_Origin_8(L_14);
		// animator.SetInteger("SpecialMeter", animator.GetInteger("SpecialMeter") + 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_15 = ___animator0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = ___animator0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A(L_16, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, /*hidden argument*/NULL);
		NullCheck(L_15);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_15, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		// animator.SetBool("CoolingDown", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = ___animator0;
		NullCheck(L_18);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_18, _stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TutorialTesting::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialTesting_OnStateUpdate_m3B77D515E0EFD01AF7C07FDB5DEEB18ADCED193B (TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TutorialTesting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialTesting__ctor_mB38306AFEF0B5F7C74021F9E5E207D277EEDDC41 (TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
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
// System.Single UpdateDistanceMetrics::EstimateFloorHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateDistanceMetrics_EstimateFloorHeight_m6FA4489ECEC626B09CF3E2B3C4B7845FE287C5DB (UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Next_mDCC3EFE818041922B7990C5B30681538026406EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddBefore_mFB19B9B819BFAA270438665E0FC86F89E54C04F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * V_1 = NULL;
	{
		// float current_height = _orientedReticle.transform.position.y;
		OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * L_0 = __this->get__orientedReticle_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		V_0 = L_3;
		// var nodeToInsert = _floorHeights.First;
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_4 = __this->get__floorHeights_7();
		NullCheck(L_4);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_5;
		L_5 = LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_inline(L_4, /*hidden argument*/LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0046;
	}

IL_0024:
	{
		// if (current_height < nodeToInsert.Value)
		float L_6 = V_0;
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_7 = V_1;
		NullCheck(L_7);
		float L_8;
		L_8 = LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_inline(L_7, /*hidden argument*/LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_RuntimeMethod_var);
		if ((!(((float)L_6) < ((float)L_8))))
		{
			goto IL_0036;
		}
	}
	{
		// nodeToInsert = nodeToInsert.Next;
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_9 = V_1;
		NullCheck(L_9);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_10;
		L_10 = LinkedListNode_1_get_Next_mDCC3EFE818041922B7990C5B30681538026406EE(L_9, /*hidden argument*/LinkedListNode_1_get_Next_mDCC3EFE818041922B7990C5B30681538026406EE_RuntimeMethod_var);
		V_1 = L_10;
		// }
		goto IL_0046;
	}

IL_0036:
	{
		// _floorHeights.AddBefore(nodeToInsert, current_height);
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_11 = __this->get__floorHeights_7();
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_12 = V_1;
		float L_13 = V_0;
		NullCheck(L_11);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_14;
		L_14 = LinkedList_1_AddBefore_mFB19B9B819BFAA270438665E0FC86F89E54C04F7(L_11, L_12, L_13, /*hidden argument*/LinkedList_1_AddBefore_mFB19B9B819BFAA270438665E0FC86F89E54C04F7_RuntimeMethod_var);
		// break;
		goto IL_0049;
	}

IL_0046:
	{
		// while (nodeToInsert != null)
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_15 = V_1;
		if (L_15)
		{
			goto IL_0024;
		}
	}

IL_0049:
	{
		// if (nodeToInsert == null)
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_16 = V_1;
		if (L_16)
		{
			goto IL_0066;
		}
	}
	{
		// _floorHeights.AddLast(current_height);
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_17 = __this->get__floorHeights_7();
		float L_18 = V_0;
		NullCheck(L_17);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_19;
		L_19 = LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3(L_17, L_18, /*hidden argument*/LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var);
		goto IL_0066;
	}

IL_005b:
	{
		// _floorHeights.RemoveFirst();
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_20 = __this->get__floorHeights_7();
		NullCheck(L_20);
		LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756(L_20, /*hidden argument*/LinkedList_1_RemoveFirst_m7DDA60CBD00B0A5D88BA887D4F2575C038E32756_RuntimeMethod_var);
	}

IL_0066:
	{
		// while (_floorHeights.Count > 100)
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_21 = __this->get__floorHeights_7();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_inline(L_21, /*hidden argument*/LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_RuntimeMethod_var);
		if ((((int32_t)L_22) > ((int32_t)((int32_t)100))))
		{
			goto IL_005b;
		}
	}
	{
		// return _floorHeights.First.Value;
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_23 = __this->get__floorHeights_7();
		NullCheck(L_23);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_24;
		L_24 = LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_inline(L_23, /*hidden argument*/LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25;
		L_25 = LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_inline(L_24, /*hidden argument*/LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_RuntimeMethod_var);
		return L_25;
	}
}
// System.Single UpdateDistanceMetrics::EstimateCurrentHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateDistanceMetrics_EstimateCurrentHeight_mE8DBBF0361F02C3D0EB0398D044E2ED8BA7FF0A7 (UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float current_height = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		// float floor_height = EstimateFloorHeight();
		float L_3;
		L_3 = UpdateDistanceMetrics_EstimateFloorHeight_m6FA4489ECEC626B09CF3E2B3C4B7845FE287C5DB(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		// return Mathf.Max(current_height - floor_height, 0.0f);
		float L_4 = V_0;
		float L_5;
		L_5 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_2, (float)L_4)), (0.0f), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UpdateDistanceMetrics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDistanceMetrics_Start_m19A7000407293A3C417CC14C6212A33755DD4E01 (UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101_m1AD3A06EB99A7E8859EC1231C98D486B2EA250B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029BFDCAAAB769E9E37947E19E4E5876A8A6A09B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _orientedReticle = FindObjectOfType<OrientedReticle>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * L_0;
		L_0 = Object_FindObjectOfType_TisOrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101_m1AD3A06EB99A7E8859EC1231C98D486B2EA250B6(/*hidden argument*/Object_FindObjectOfType_TisOrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101_m1AD3A06EB99A7E8859EC1231C98D486B2EA250B6_RuntimeMethod_var);
		__this->set__orientedReticle_6(L_0);
		// if (_orientedReticle == null)
		OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * L_1 = __this->get__orientedReticle_6();
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogError("Cannot find OrientedReticle.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral029BFDCAAAB769E9E37947E19E4E5876A8A6A09B, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// gameObject.SetActive(_orientedReticle != null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * L_4 = __this->get__orientedReticle_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, L_5, /*hidden argument*/NULL);
		// _floorHeights.AddLast(float.PositiveInfinity);
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_6 = __this->get__floorHeights_7();
		NullCheck(L_6);
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_7;
		L_7 = LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3(L_6, (std::numeric_limits<float>::infinity()), /*hidden argument*/LinkedList_1_AddLast_m4DD91ACDAC1A8D61399FC65E1A38601D1B95D6C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UpdateDistanceMetrics::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDistanceMetrics_Update_mECE4A8CA836783D154454DC2F66CDB3225BE75E1 (UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D7507EC5637C7B7F1C6FD21B11BD1EEDBA5C7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9B04C005667610BC0515282EF8D265E8FCF4C43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9AF66EC18858B3102B9D316FB27CB4ACF014B62);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// HeightLabel.text = "Height\n" + EstimateCurrentHeight().ToString("F2") + " meters";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_HeightLabel_5();
		float L_1;
		L_1 = UpdateDistanceMetrics_EstimateCurrentHeight_mE8DBBF0361F02C3D0EB0398D044E2ED8BA7FF0A7(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralC9AF66EC18858B3102B9D316FB27CB4ACF014B62, L_2, _stringLiteral62D7507EC5637C7B7F1C6FD21B11BD1EEDBA5C7A, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// DistanceLabel.text = "Distance\n" + _orientedReticle.Distance.ToString("F2") + " meters";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_DistanceLabel_4();
		OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * L_5 = __this->get__orientedReticle_6();
		NullCheck(L_5);
		float L_6;
		L_6 = OrientedReticle_get_Distance_m0543F1D45C48CFEA0C96447A98415B568522DBEB_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB9B04C005667610BC0515282EF8D265E8FCF4C43, L_7, _stringLiteral62D7507EC5637C7B7F1C6FD21B11BD1EEDBA5C7A, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_8);
		// }
		return;
	}
}
// System.Void UpdateDistanceMetrics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateDistanceMetrics__ctor_m99284B63AF377EA4B59497CB7BA110C32E71DF1E (UpdateDistanceMetrics_t7E4A0E7270E837D2AE9D95FD7DF52B2041AFB672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LinkedList<float> _floorHeights = new LinkedList<float>();
		LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * L_0 = (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 *)il2cpp_codegen_object_new(LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F(L_0, /*hidden argument*/LinkedList_1__ctor_m1D81D06D2B8525B2D4C1EE8CA5D423E890F97E4F_RuntimeMethod_var);
		__this->set__floorHeights_7(L_0);
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
// UnityEngine.Vector2 Utilities::MultiplyVector2(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Utilities_MultiplyVector2_m36EC1B8435FAFA3755161EA765BEC713633EC681 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v21, const RuntimeMethod* method)
{
	{
		// return new Vector2(v1.x * v2.x, v1.y * v2.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v10;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v21;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___v10;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___v21;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 Utilities::GetXY(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Utilities_GetXY_mE5A6F58A0F3731D553F19E7F9BDFABAC8EA1E224 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return new Vector2(v.x, v.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3[] Utilities::GetBoundingBoxVertices(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Utilities_GetBoundingBoxVertices_mA7D09278D7870AAE3AA58F3ECE8E5C212FBDA002 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_0 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* V_2 = NULL;
	int32_t V_3 = 0;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var meshFilters = targetObject.GetComponentsInChildren<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___targetObject0;
		NullCheck(L_0);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638_RuntimeMethod_var);
		// var vertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_2, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		V_0 = L_2;
		// Bounds box = new Bounds();
		il2cpp_codegen_initobj((&V_1), sizeof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 ));
		// foreach (var meshFilter in meshFilters)
		V_2 = L_1;
		V_3 = 0;
		goto IL_0048;
	}

IL_0019:
	{
		// foreach (var meshFilter in meshFilters)
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// var bounds = meshFilter.mesh.bounds;
		NullCheck(L_6);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7;
		L_7 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_8;
		L_8 = Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// box.Expand(bounds.min);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Bounds_Expand_mA5AD4498F5171696B1684268150F5FAA8D3C3A61((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), L_9, /*hidden argument*/NULL);
		// box.Expand(bounds.max);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Bounds_Expand_mA5AD4498F5171696B1684268150F5FAA8D3C3A61((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0048:
	{
		// foreach (var meshFilter in meshFilters)
		int32_t L_12 = V_3;
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		// vertices.Add(box.min);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_14, L_15, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(box.max);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_16, L_17, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box.min.x, box.min.y, box.max.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_18 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_24 = L_23.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), L_20, L_22, L_24, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_18, L_25, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box.min.x, box.max.y, box.min.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), L_28, L_30, L_32, /*hidden argument*/NULL);
		NullCheck(L_26);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_26, L_33, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box.max.x, box.min.y, box.min.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_34 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_38 = L_37.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_40 = L_39.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_41), L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_34, L_41, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box.min.x, box.max.y, box.max.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_42 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_44 = L_43.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_46 = L_45.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_48 = L_47.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), L_44, L_46, L_48, /*hidden argument*/NULL);
		NullCheck(L_42);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_42, L_49, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box.max.x, box.min.y, box.max.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_50 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_54 = L_53.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_56 = L_55.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_57), L_52, L_54, L_56, /*hidden argument*/NULL);
		NullCheck(L_50);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_50, L_57, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box.max.x, box.max.y, box.min.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_58 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_60 = L_59.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_62 = L_61.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_64 = L_63.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_65), L_60, L_62, L_64, /*hidden argument*/NULL);
		NullCheck(L_58);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_58, L_65, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// return vertices.ToArray();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_66 = V_0;
		NullCheck(L_66);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_67;
		L_67 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_66, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		return L_67;
	}
}
// UnityEngine.Vector3[] Utilities::GetBoundingBoxVertices(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Utilities_GetBoundingBoxVertices_mE2EBA10E69F3A7ED3C99A119443ED92F12B7A6C6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dimensions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var box_min = origin - (dimensions * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___origin0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___dimensions1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var box_max = origin + (dimensions * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___origin0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___dimensions1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// var vertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_8 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_8, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		// vertices.Add(box_min);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_9 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_9, L_10, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(box_max);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_11, L_12, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box_min.x, box_min.y, box_max.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_13 = L_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = L_14.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		float L_17 = L_16.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_15, L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_13, L_20, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box_min.x, box_max.y, box_min.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_21 = L_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		float L_23 = L_22.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		float L_25 = L_24.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_0;
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_23, L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_21, L_28, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box_max.x, box_min.y, box_min.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_29 = L_21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_1;
		float L_31 = L_30.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		float L_33 = L_32.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_0;
		float L_35 = L_34.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), L_31, L_33, L_35, /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_29, L_36, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box_min.x, box_max.y, box_max.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_37 = L_29;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_0;
		float L_39 = L_38.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_1;
		float L_41 = L_40.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_1;
		float L_43 = L_42.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), L_39, L_41, L_43, /*hidden argument*/NULL);
		NullCheck(L_37);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_37, L_44, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box_max.x, box_min.y, box_max.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_45 = L_37;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_1;
		float L_47 = L_46.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_0;
		float L_49 = L_48.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_1;
		float L_51 = L_50.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), L_47, L_49, L_51, /*hidden argument*/NULL);
		NullCheck(L_45);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_45, L_52, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// vertices.Add(new Vector3(box_max.x, box_max.y, box_min.z));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_53 = L_45;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = V_1;
		float L_55 = L_54.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_1;
		float L_57 = L_56.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = V_0;
		float L_59 = L_58.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_60), L_55, L_57, L_59, /*hidden argument*/NULL);
		NullCheck(L_53);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_53, L_60, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// return vertices.ToArray();
		NullCheck(L_53);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_61;
		L_61 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_53, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		return L_61;
	}
}
// UnityEngine.Vector2Int Utilities::WorldPointToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Utilities_WorldPointToScreenPoint_m89D63A8BDE5309AE08990680F8DD99B7B86245B8 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var screenPoint = DepthSource.ARCamera.WorldToScreenPoint(worldPoint);
		IL2CPP_RUNTIME_CLASS_INIT(DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = DepthSource_get_ARCamera_m001936E4456F0E11B48DEBF11A610F564FBBB1D9(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___worldPoint0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return new Vector2Int((int)screenPoint.x, Screen.height - (int)screenPoint.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_y_3();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_8), ((int32_t)((int32_t)L_4)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_7)))), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean Utilities::IsObjectInCameraView(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utilities_IsObjectInCameraView_m51C3B1FA01B29C3EA420C8D3F7B73FCDFE95E757 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sourceObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_1 = NULL;
	PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* G_B3_0 = NULL;
	PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* G_B2_0 = NULL;
	{
		// bool isObjectInView = false;
		V_0 = (bool)0;
		// if (sourceObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___sourceObject0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// Plane[] planes = GeometryUtility.CalculateFrustumPlanes(DepthSource.ARCamera);
		IL2CPP_RUNTIME_CLASS_INIT(DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = DepthSource_get_ARCamera_m001936E4456F0E11B48DEBF11A610F564FBBB1D9(/*hidden argument*/NULL);
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_3;
		L_3 = GeometryUtility_CalculateFrustumPlanes_mB4DD05307602B87B5279CD3D9B4EED69D4429663(L_2, /*hidden argument*/NULL);
		// Collider collider = sourceObject.GetComponent<Collider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___sourceObject0;
		NullCheck(L_4);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5;
		L_5 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_4, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		V_1 = L_5;
		// if (collider == null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		if (!L_7)
		{
			G_B3_0 = L_3;
			goto IL_0037;
		}
	}
	{
		// collider = sourceObject.transform.GetChild(0).GetComponent<Collider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ___sourceObject0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11;
		L_11 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(L_10, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		V_1 = L_11;
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		// isObjectInView = GeometryUtility.TestPlanesAABB(planes, collider.bounds);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12 = V_1;
		NullCheck(L_12);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_13;
		L_13 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = GeometryUtility_TestPlanesAABB_mC37D104FA9ACBC6A959A7CCD6C1EAD3A7A450491(G_B3_0, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0043:
	{
		// return isObjectInView;
		bool L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.RectInt Utilities::GetScreenBoundingRectInt(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  Utilities_GetScreenBoundingRectInt_m1B6EC3F5A7BEEBC6CE5DB3E77EFF7227F2E47B2F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sourceObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD5C5B63F114D47658E4F056ADB3DE06973E936B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3ABAEA49D99554AA05247944F5C4F0C02754C236_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m322C99C02EBFBAD56375A2103C6BD82D66B42CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_0 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * V_3 = NULL;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_11 = NULL;
	int32_t V_12 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var renderer = sourceObject.GetComponentInChildren<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___sourceObject0;
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		V_0 = L_1;
		// if (renderer == null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return new RectInt(0, 0, 0, 0);
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_4;
		memset((&L_4), 0, sizeof(L_4));
		RectInt__ctor_m53209E2851578015083B4DEF8354AB38EAD4C553((&L_4), 0, 0, 0, 0, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		// var bounds = renderer.bounds;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = V_0;
		NullCheck(L_5);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_6;
		L_6 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var origin = bounds.center;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		// var dimension = bounds.size;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		// var vertices = GetBoundingBoxVertices(origin, dimension);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10;
		L_10 = Utilities_GetBoundingBoxVertices_mE2EBA10E69F3A7ED3C99A119443ED92F12B7A6C6(L_7, L_9, /*hidden argument*/NULL);
		// var screenPoints = new List<Vector2Int>();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_11 = (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *)il2cpp_codegen_object_new(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var);
		List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E(L_11, /*hidden argument*/List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var);
		V_3 = L_11;
		// foreach (var vertex in vertices)
		V_11 = L_10;
		V_12 = 0;
		goto IL_0061;
	}

IL_0043:
	{
		// foreach (var vertex in vertices)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = V_11;
		int32_t L_13 = V_12;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_13 = L_15;
		// screenPoints.Add(WorldPointToScreenPoint(vertex));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_16 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_13;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_18;
		L_18 = Utilities_WorldPointToScreenPoint_m89D63A8BDE5309AE08990680F8DD99B7B86245B8(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_16, L_18, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		int32_t L_19 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0061:
	{
		// foreach (var vertex in vertices)
		int32_t L_20 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = V_11;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		// var rectMin = screenPoints[0];
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_22 = V_3;
		NullCheck(L_22);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_23;
		L_23 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_22, 0, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_4 = L_23;
		// var rectMax = screenPoints[0];
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_24 = V_3;
		NullCheck(L_24);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_25;
		L_25 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_24, 0, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_5 = L_25;
		// foreach (var point in screenPoints)
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_26 = V_3;
		NullCheck(L_26);
		Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A  L_27;
		L_27 = List_1_GetEnumerator_m322C99C02EBFBAD56375A2103C6BD82D66B42CEF(L_26, /*hidden argument*/List_1_GetEnumerator_m322C99C02EBFBAD56375A2103C6BD82D66B42CEF_RuntimeMethod_var);
		V_14 = L_27;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a4;
		}

IL_0085:
		{
			// foreach (var point in screenPoints)
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_28;
			L_28 = Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_inline((Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A *)(&V_14), /*hidden argument*/Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_RuntimeMethod_var);
			V_15 = L_28;
			// rectMin = Vector2Int.Min(rectMin, point);
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_29 = V_4;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_30 = V_15;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_31;
			L_31 = Vector2Int_Min_m1D63F92E4FD8B89FCFA2BAAA574194F29BF538BE_inline(L_29, L_30, /*hidden argument*/NULL);
			V_4 = L_31;
			// rectMax = Vector2Int.Max(rectMax, point);
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_32 = V_5;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_33 = V_15;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_34;
			L_34 = Vector2Int_Max_mE31DD0B63B01E585B3EA8C876DB7AB2AB72E61B0_inline(L_32, L_33, /*hidden argument*/NULL);
			V_5 = L_34;
		}

IL_00a4:
		{
			// foreach (var point in screenPoints)
			bool L_35;
			L_35 = Enumerator_MoveNext_m3ABAEA49D99554AA05247944F5C4F0C02754C236((Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A *)(&V_14), /*hidden argument*/Enumerator_MoveNext_m3ABAEA49D99554AA05247944F5C4F0C02754C236_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_0085;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD5C5B63F114D47658E4F056ADB3DE06973E936B2((Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A *)(&V_14), /*hidden argument*/Enumerator_Dispose_mD5C5B63F114D47658E4F056ADB3DE06973E936B2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(175)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
	}

IL_00bd:
	{
		// var xMin = Math.Max(Math.Min(rectMin.x, Screen.width), 0);
		int32_t L_36;
		L_36 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_4), /*hidden argument*/NULL);
		int32_t L_37;
		L_37 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_36, L_37, /*hidden argument*/NULL);
		int32_t L_39;
		L_39 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_38, 0, /*hidden argument*/NULL);
		V_6 = L_39;
		// var yMin = Math.Max(Math.Min(rectMin.y, Screen.height), 0);
		int32_t L_40;
		L_40 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_4), /*hidden argument*/NULL);
		int32_t L_41;
		L_41 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_42;
		L_42 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_40, L_41, /*hidden argument*/NULL);
		int32_t L_43;
		L_43 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_42, 0, /*hidden argument*/NULL);
		V_7 = L_43;
		// var xMax = Math.Max(Math.Min(rectMax.x, Screen.width), 0);
		int32_t L_44;
		L_44 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_5), /*hidden argument*/NULL);
		int32_t L_45;
		L_45 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_46;
		L_46 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_44, L_45, /*hidden argument*/NULL);
		int32_t L_47;
		L_47 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_46, 0, /*hidden argument*/NULL);
		V_8 = L_47;
		// var yMax = Math.Max(Math.Min(rectMax.y, Screen.height), 0);
		int32_t L_48;
		L_48 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_5), /*hidden argument*/NULL);
		int32_t L_49;
		L_49 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_50;
		L_50 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_48, L_49, /*hidden argument*/NULL);
		int32_t L_51;
		L_51 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_50, 0, /*hidden argument*/NULL);
		// var width = xMax - xMin;
		int32_t L_52 = V_8;
		int32_t L_53 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_53));
		// var height = yMax - yMin;
		int32_t L_54 = V_7;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_54));
		// return new RectInt(xMin, yMin, width, height);
		int32_t L_55 = V_6;
		int32_t L_56 = V_7;
		int32_t L_57 = V_9;
		int32_t L_58 = V_10;
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_59;
		memset((&L_59), 0, sizeof(L_59));
		RectInt__ctor_m53209E2851578015083B4DEF8354AB38EAD4C553((&L_59), L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		return L_59;
	}
}
// UnityEngine.Vector3 Utilities::Round(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Utilities_Round_mF770DB215E623F02BFD80B9EB578BAFAF5FA208A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, int32_t ___numDecimals1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float multiplier = Mathf.Pow(10f, (float)numDecimals);
		int32_t L_0 = ___numDecimals1;
		float L_1;
		L_1 = powf((10.0f), ((float)((float)L_0)));
		V_0 = L_1;
		// return new Vector3(
		//     Mathf.Round(vector.x * multiplier) / multiplier,
		//     Mathf.Round(vector.y * multiplier) / multiplier,
		//     Mathf.Round(vector.z * multiplier) / multiplier);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		float L_4 = V_0;
		float L_5;
		L_5 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)));
		float L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___vector0;
		float L_8 = L_7.get_y_3();
		float L_9 = V_0;
		float L_10;
		L_10 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		float L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___vector0;
		float L_13 = L_12.get_z_4();
		float L_14 = V_0;
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)));
		float L_16 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), ((float)((float)L_5/(float)L_6)), ((float)((float)L_10/(float)L_11)), ((float)((float)L_15/(float)L_16)), /*hidden argument*/NULL);
		return L_17;
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
// System.Void Whirlwind::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlwind_Start_mBD2AC740F098DAF62E5889ECEB955024BE3244B3 (Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * __this, const RuntimeMethod* method)
{
	{
		// scaleUp = new Vector3(3f, 3f, 3f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (3.0f), (3.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_scaleUp_4(L_0);
		// StartCoroutine(Ded());
		RuntimeObject* L_1;
		L_1 = Whirlwind_Ded_m266D17E0C633CDD774770CD0FD060026E0B5832F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Whirlwind::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlwind_Update_m80E278D78AF65481D497CFAF8A3B02BC8DD0D4CB (Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.transform.localScale += scaleUp * Time.deltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_scaleUp_4();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_2, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Whirlwind::Ded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Whirlwind_Ded_m266D17E0C633CDD774770CD0FD060026E0B5832F (Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * L_0 = (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 *)il2cpp_codegen_object_new(U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700_il2cpp_TypeInfo_var);
		U3CDedU3Ed__3__ctor_mA18D38945839978CAD7379C830896D4F8EA290BA(L_0, 0, /*hidden argument*/NULL);
		U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Whirlwind::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whirlwind__ctor_m74F54ED8FF317E6A7BF9BF06F444363C5E00B822 (Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * __this, const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AvatarController/<LookAtCameraCoroutine>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLookAtCameraCoroutineU3Ed__19__ctor_m142FD416FBE4C9CCA2B2AD465BEA9F49AE1DBB2F (U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AvatarController/<LookAtCameraCoroutine>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLookAtCameraCoroutineU3Ed__19_System_IDisposable_Dispose_m92E7DB23F823027BA67D65C6C301FFA3B6705911 (U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AvatarController/<LookAtCameraCoroutine>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLookAtCameraCoroutineU3Ed__19_MoveNext_m0A264DA440C56E3C77700D9A38F621E6D28F2FB8 (U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * V_1 = NULL;
	float V_2 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_00fb;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float elapsedTime = 0f;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		// Vector3 LookAtPos = DepthSource.ARCamera.transform.position - transform.position;
		IL2CPP_RUNTIME_CLASS_INIT(DepthSource_t900BBA043E190F52D8FF2163CAEF83166366FCAD_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = DepthSource_get_ARCamera_m001936E4456F0E11B48DEBF11A610F564FBBB1D9(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * L_6 = V_1;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_8, /*hidden argument*/NULL);
		__this->set_U3CLookAtPosU3E5__3_4(L_9);
		// LookAtPos.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_U3CLookAtPosU3E5__3_4();
		L_10->set_y_3((0.0f));
		// Quaternion sourceRotation = transform.rotation;
		AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * L_11 = V_1;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		__this->set_U3CsourceRotationU3E5__4_5(L_13);
		goto IL_00da;
	}

IL_007c:
	{
		// float progress = elapsedTime / _lookAtCameraRotationDuration;
		float L_14 = __this->get_U3CelapsedTimeU3E5__2_3();
		V_2 = ((float)((float)L_14/(float)(0.5f)));
		// var destRotation = Quaternion.LookRotation(LookAtPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_U3CLookAtPosU3E5__3_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// transform.rotation = Quaternion.Lerp(sourceRotation, destRotation, progress);
		AvatarController_t0E41977029573C5B4DE524A996DE4295778EC77E * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = __this->get_U3CsourceRotationU3E5__4_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = V_3;
		float L_21 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_19, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_18, L_22, /*hidden argument*/NULL);
		// elapsedTime += Time.deltaTime;
		float L_23 = __this->get_U3CelapsedTimeU3E5__2_3();
		float L_24;
		L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_25 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_25, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d3:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00da:
	{
		// while (elapsedTime < _lookAtCameraRotationDuration)
		float L_26 = __this->get_U3CelapsedTimeU3E5__2_3();
		if ((((float)L_26) < ((float)(0.5f))))
		{
			goto IL_007c;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_27 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_27, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00fb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object AvatarController/<LookAtCameraCoroutine>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLookAtCameraCoroutineU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m41BBC88D36C1EEB3133F802221667F48F536503E (U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AvatarController/<LookAtCameraCoroutine>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLookAtCameraCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mE3744A0D67651A36ED652D7F09855A9952BF20D0 (U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLookAtCameraCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mE3744A0D67651A36ED652D7F09855A9952BF20D0_RuntimeMethod_var)));
	}
}
// System.Object AvatarController/<LookAtCameraCoroutine>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLookAtCameraCoroutineU3Ed__19_System_Collections_IEnumerator_get_Current_mBCE6562581D190CC33C0796750B725F61D29C746 (U3CLookAtCameraCoroutineU3Ed__19_tD394F3E5A77C424EB310F0A5B6CF97C48F111D37 * __this, const RuntimeMethod* method)
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
// System.Void BackgroundToDepthMapEffectController/<AnimateTransition>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTransitionU3Ed__37__ctor_m53105AEE668308A9090120F9D233628B0865D76B (U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BackgroundToDepthMapEffectController/<AnimateTransition>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTransitionU3Ed__37_System_IDisposable_Dispose_mA19180D28D5918ABB946A05AA49F7028CBF535FE (U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BackgroundToDepthMapEffectController/<AnimateTransition>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateTransitionU3Ed__37_MoveNext_m1A76183F2560D1C2F8EC71FF2507D39F0D419A0B (U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_00fe;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_enableOcclusionTransition && OcclusionChangedEvent != null)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get__enableOcclusionTransition_20();
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_6 = V_1;
		NullCheck(L_6);
		OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * L_7 = L_6->get_OcclusionChangedEvent_29();
		if (!L_7)
		{
			goto IL_008a;
		}
	}
	{
		// if (_shadowReceiverMaterial != null)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_8 = V_1;
		NullCheck(L_8);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = L_8->get__shadowReceiverMaterial_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// _shadowReceiverMaterial.SetInt("_ZWrite", 1);
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_11 = V_1;
		NullCheck(L_11);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = L_11->get__shadowReceiverMaterial_28();
		NullCheck(L_12);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_12, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// if (!_occlusionOn)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = L_13->get__occlusionOn_21();
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		// OcclusionChangedEvent(_occlusionOn);
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_15 = V_1;
		NullCheck(L_15);
		OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * L_16 = L_15->get_OcclusionChangedEvent_29();
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->get__occlusionOn_21();
		NullCheck(L_16);
		OcclusionChanged_Invoke_mBE4D861E18D4EDB7B0433ED7DADE9CA32068F302(L_16, L_18, /*hidden argument*/NULL);
		// }
		goto IL_008a;
	}

IL_006b:
	{
		// if (ShadowReceiver != null)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_19 = V_1;
		NullCheck(L_19);
		ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * L_20 = L_19->get_ShadowReceiver_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		// ShadowReceiver.GetComponent<MeshRenderer>().enabled = true;
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_22 = V_1;
		NullCheck(L_22);
		ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * L_23 = L_22->get_ShadowReceiver_4();
		NullCheck(L_23);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_24;
		L_24 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_23, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_24);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_24, (bool)1, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// float originalTransition = Transition;
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->get_Transition_5();
		__this->set_U3CoriginalTransitionU3E5__2_5(L_26);
		// for (float t = 0.0f; t < 1.0f; t += Time.deltaTime / animationTime)
		__this->set_U3CtU3E5__3_6((0.0f));
		goto IL_011e;
	}

IL_00a3:
	{
		// Transition = Mathf.Lerp(originalTransition, targetValue, t);
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_27 = V_1;
		float L_28 = __this->get_U3CoriginalTransitionU3E5__2_5();
		float L_29 = __this->get_targetValue_3();
		float L_30 = __this->get_U3CtU3E5__3_6();
		float L_31;
		L_31 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_28, L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_Transition_5(L_31);
		// if (_enableOcclusionTransition && ShadowReceiver != null)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_32 = V_1;
		NullCheck(L_32);
		bool L_33 = L_32->get__enableOcclusionTransition_20();
		if (!L_33)
		{
			goto IL_00ee;
		}
	}
	{
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_34 = V_1;
		NullCheck(L_34);
		ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * L_35 = L_34->get_ShadowReceiver_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00ee;
		}
	}
	{
		// ShadowReceiver.MaximumMeshDistance = Transition * _maxVisualizationDistanceM;
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_37 = V_1;
		NullCheck(L_37);
		ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * L_38 = L_37->get_ShadowReceiver_4();
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_39 = V_1;
		NullCheck(L_39);
		float L_40 = L_39->get_Transition_5();
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_41 = V_1;
		NullCheck(L_41);
		float L_42 = L_41->get__maxVisualizationDistanceM_23();
		NullCheck(L_38);
		L_38->set_MaximumMeshDistance_5(((float)il2cpp_codegen_multiply((float)L_40, (float)L_42)));
	}

IL_00ee:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00fe:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float t = 0.0f; t < 1.0f; t += Time.deltaTime / animationTime)
		float L_43 = __this->get_U3CtU3E5__3_6();
		float L_44;
		L_44 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_45 = __this->get_animationTime_4();
		__this->set_U3CtU3E5__3_6(((float)il2cpp_codegen_add((float)L_43, (float)((float)((float)L_44/(float)L_45)))));
	}

IL_011e:
	{
		// for (float t = 0.0f; t < 1.0f; t += Time.deltaTime / animationTime)
		float L_46 = __this->get_U3CtU3E5__3_6();
		if ((((float)L_46) < ((float)(1.0f))))
		{
			goto IL_00a3;
		}
	}
	{
		// Transition = targetValue;
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_47 = V_1;
		float L_48 = __this->get_targetValue_3();
		NullCheck(L_47);
		L_47->set_Transition_5(L_48);
		// if (_enableOcclusionTransition && OcclusionChangedEvent != null)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_49 = V_1;
		NullCheck(L_49);
		bool L_50 = L_49->get__enableOcclusionTransition_20();
		if (!L_50)
		{
			goto IL_01a3;
		}
	}
	{
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_51 = V_1;
		NullCheck(L_51);
		OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * L_52 = L_51->get_OcclusionChangedEvent_29();
		if (!L_52)
		{
			goto IL_01a3;
		}
	}
	{
		// if (_shadowReceiverMaterial != null)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_53 = V_1;
		NullCheck(L_53);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_54 = L_53->get__shadowReceiverMaterial_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_54, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0169;
		}
	}
	{
		// _shadowReceiverMaterial.SetInt("_ZWrite", 0);
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_56 = V_1;
		NullCheck(L_56);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_57 = L_56->get__shadowReceiverMaterial_28();
		NullCheck(L_57);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_57, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, /*hidden argument*/NULL);
	}

IL_0169:
	{
		// if (_occlusionOn)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_58 = V_1;
		NullCheck(L_58);
		bool L_59 = L_58->get__occlusionOn_21();
		if (!L_59)
		{
			goto IL_0184;
		}
	}
	{
		// OcclusionChangedEvent(_occlusionOn);
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_60 = V_1;
		NullCheck(L_60);
		OcclusionChanged_t65FE68936B49DA390B40A377AEE34C4A7B015C68 * L_61 = L_60->get_OcclusionChangedEvent_29();
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_62 = V_1;
		NullCheck(L_62);
		bool L_63 = L_62->get__occlusionOn_21();
		NullCheck(L_61);
		OcclusionChanged_Invoke_mBE4D861E18D4EDB7B0433ED7DADE9CA32068F302(L_61, L_63, /*hidden argument*/NULL);
		// }
		goto IL_01a3;
	}

IL_0184:
	{
		// if (ShadowReceiver != null)
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_64 = V_1;
		NullCheck(L_64);
		ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * L_65 = L_64->get_ShadowReceiver_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_65, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01a3;
		}
	}
	{
		// ShadowReceiver.GetComponent<MeshRenderer>().enabled = false;
		BackgroundToDepthMapEffectController_t4DFBD67C510DB0AB4D81A066A4A324771EC7BCCF * L_67 = V_1;
		NullCheck(L_67);
		ShadowReceiverMesh_tE011CA210BC827822DEEF90268A029F8F7B74BBA * L_68 = L_67->get_ShadowReceiver_4();
		NullCheck(L_68);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_69;
		L_69 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_68, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_69);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_69, (bool)0, /*hidden argument*/NULL);
	}

IL_01a3:
	{
		// }
		return (bool)0;
	}
}
// System.Object BackgroundToDepthMapEffectController/<AnimateTransition>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateTransitionU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE6609F9659EA02678CD250D0D544BCE1E6B37AA8 (U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BackgroundToDepthMapEffectController/<AnimateTransition>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTransitionU3Ed__37_System_Collections_IEnumerator_Reset_mF9B5BCA0BD78723F3EA2E6E35D122612A1B11372 (U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateTransitionU3Ed__37_System_Collections_IEnumerator_Reset_mF9B5BCA0BD78723F3EA2E6E35D122612A1B11372_RuntimeMethod_var)));
	}
}
// System.Object BackgroundToDepthMapEffectController/<AnimateTransition>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateTransitionU3Ed__37_System_Collections_IEnumerator_get_Current_m2475BD02EFB2A1FA6FE7B7FAEBBF49DD6658C356 (U3CAnimateTransitionU3Ed__37_t9CF861909A5C0138FDA890ADF725FFCDB6F6275C * __this, const RuntimeMethod* method)
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
// System.Void BulletBarrage/<Cooldown>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownU3Ed__7__ctor_m6F1A4E6856C44F9445D5CEB23F655F358BB8CC25 (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BulletBarrage/<Cooldown>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownU3Ed__7_System_IDisposable_Dispose_m1F20D5F8D0D34515DA1150B332310A4C1A5C464C (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BulletBarrage/<Cooldown>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCooldownU3Ed__7_MoveNext_mB38CCF84E3F95B37C570B775146856443029DAB5 (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// projectileCooldown = false;
		BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_projectileCooldown_4((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object BulletBarrage/<Cooldown>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCooldownU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0613922465498DE028FE36C8C221FC05020E1C66 (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BulletBarrage/<Cooldown>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownU3Ed__7_System_Collections_IEnumerator_Reset_m9BB62D463144669A414D2A8520C6EDBC5C7B315B (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCooldownU3Ed__7_System_Collections_IEnumerator_Reset_m9BB62D463144669A414D2A8520C6EDBC5C7B315B_RuntimeMethod_var)));
	}
}
// System.Object BulletBarrage/<Cooldown>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCooldownU3Ed__7_System_Collections_IEnumerator_get_Current_m89B4BF7D8F6CC52A48BB62E4EF0C96988653D4AE (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * __this, const RuntimeMethod* method)
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
// System.Void CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValidDeviceOrientationU3Ed__6__ctor_mF86F15C7C31F06581A8A3C08612DBF1A7B3B55C7 (U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValidDeviceOrientationU3Ed__6_System_IDisposable_Dispose_m0C01D80AC5E60974E0BDF0B695BBD28D95EF7FFD (U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetValidDeviceOrientationU3Ed__6_MoveNext_m53B5E46907820D6303DA2B73FD5A38D07E1C3808 (U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Input.deviceOrientation == DeviceOrientation.Unknown)
		int32_t L_4;
		L_4 = Input_get_deviceOrientation_m2620E06825B2772FF5FFCF7FE4D814FAB9365224(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		// yield return 0;
		int32_t L_5 = 0;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_005e;
	}

IL_0043:
	{
		// DeviceOrientationInit.DeviceOrientationInstance = Input.deviceOrientation;
		int32_t L_7;
		L_7 = Input_get_deviceOrientation_m2620E06825B2772FF5FFCF7FE4D814FAB9365224(/*hidden argument*/NULL);
		((DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_StaticFields*)il2cpp_codegen_static_fields_for(DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_il2cpp_TypeInfo_var))->set_DeviceOrientationInstance_4(L_7);
		// _deviceOrientationInit = DeviceOrientationInit.DeviceOrientationInstance;
		CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * L_8 = V_1;
		int32_t L_9 = ((DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_StaticFields*)il2cpp_codegen_static_fields_for(DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_il2cpp_TypeInfo_var))->get_DeviceOrientationInstance_4();
		NullCheck(L_8);
		L_8->set__deviceOrientationInit_8(L_9);
		// RotateCarouselLabel();
		CarouselLabelOrientation_t81DB33783D0857F5915206F39B0F93F86D87B1F8 * L_10 = V_1;
		NullCheck(L_10);
		CarouselLabelOrientation_RotateCarouselLabel_m6B66FE65C71874188F03B70421C3892BF193EF60(L_10, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return (bool)0;
	}
}
// System.Object CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetValidDeviceOrientationU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m94E5437AB0483AA4F2591B2B48ADB808A222330D (U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValidDeviceOrientationU3Ed__6_System_Collections_IEnumerator_Reset_mA4EB49EE309886149C7D75932B627D408259EB19 (U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetValidDeviceOrientationU3Ed__6_System_Collections_IEnumerator_Reset_mA4EB49EE309886149C7D75932B627D408259EB19_RuntimeMethod_var)));
	}
}
// System.Object CarouselLabelOrientation/<GetValidDeviceOrientation>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetValidDeviceOrientationU3Ed__6_System_Collections_IEnumerator_get_Current_m496BF0D4C32757AF0642B5E0A28E8FB7C9083044 (U3CGetValidDeviceOrientationU3Ed__6_t080BF115724875AC2D0E906A1A597FD8FB4CAC21 * __this, const RuntimeMethod* method)
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
// System.Void DepthMeshCollider/<BulletCool>d__61::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__61__ctor_m7144B84B431487B1A1DC0678F877C2CA0B7ED5E3 (U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DepthMeshCollider/<BulletCool>d__61::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__61_System_IDisposable_Dispose_mE60909E0984D608D5180FB87E8C22DB1A8EBF6B9 (U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DepthMeshCollider/<BulletCool>d__61::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBulletCoolU3Ed__61_MoveNext_m1DFE9B24F72BE19F4D8B8191E6619C58902F7813 (U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1/3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// coolDown = false;
		DepthMeshCollider_tAC5864D7E6FBC78EC36A6DF6FEA7A126969E38C9 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_coolDown_48((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object DepthMeshCollider/<BulletCool>d__61::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBulletCoolU3Ed__61_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE0A0610CD3C92A7FC927A4C6D5917C2F6E77C3D (U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DepthMeshCollider/<BulletCool>d__61::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__61_System_Collections_IEnumerator_Reset_mF3885BA959D3EEAACE72DB16D73D2D93D3A53CCC (U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBulletCoolU3Ed__61_System_Collections_IEnumerator_Reset_mF3885BA959D3EEAACE72DB16D73D2D93D3A53CCC_RuntimeMethod_var)));
	}
}
// System.Object DepthMeshCollider/<BulletCool>d__61::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBulletCoolU3Ed__61_System_Collections_IEnumerator_get_Current_mC6EEDD2997B69BA4BCB1EEFF23D87BEC12757355 (U3CBulletCoolU3Ed__61_tABBF09393C55C1E490A66E27E8E85FC2B24C41C9 * __this, const RuntimeMethod* method)
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
// System.Void HapticManager/HapticFeedbackManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticFeedbackManager__ctor_mB7CE329A911E38FB7CFD7BD285689C8BC4DA18BD (HapticFeedbackManager_t4D5267FFFEECD4E2D605DF0E1A41C79ACF5C0BB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A382760914966180DF3E22D7CD123E40B3CDF25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44477E6A7F5C8FD463864D42D42CE936E483322);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HapticFeedbackManager()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// HapticFeedbackConstantsKey=new AndroidJavaClass(
		// "android.view.HapticFeedbackConstants").GetStatic<int>("VIRTUAL_KEY");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral6A382760914966180DF3E22D7CD123E40B3CDF25, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_0, _stringLiteralD44477E6A7F5C8FD463864D42D42CE936E483322, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		__this->set_HapticFeedbackConstantsKey_0(L_1);
		// UnityPlayer=new AndroidJavaClass (
		// "com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>(
		// "currentActivity").Get<AndroidJavaObject>("mUnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12(L_3, _stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB, /*hidden argument*/AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var);
		__this->set_UnityPlayer_1(L_4);
		// }
		return;
	}
}
// System.Boolean HapticManager/HapticFeedbackManager::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticFeedbackManager_Execute_m5358B73DFAE7FBBC2D2BF40880AC764ACBBFF09F (HapticFeedbackManager_t4D5267FFFEECD4E2D605DF0E1A41C79ACF5C0BB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CA0263DA4286CB6AEE0317E58BAFACBB241D5B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityPlayer.Call<bool> ("performHapticFeedback",HapticFeedbackConstantsKey);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_UnityPlayer_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = __this->get_HapticFeedbackConstantsKey_0();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		bool L_6;
		L_6 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_0, _stringLiteral4CA0263DA4286CB6AEE0317E58BAFACBB241D5B1, L_2, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
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
// System.Void HelpBalloonController/<ShowHide>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideU3Ed__9__ctor_mF6E7BD59F948738294CA6B5991F50635C4DE7973 (U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HelpBalloonController/<ShowHide>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideU3Ed__9_System_IDisposable_Dispose_m3AFB42E0B7FED5AC3409D1E659B53487EA7AAB73 (U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HelpBalloonController/<ShowHide>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowHideU3Ed__9_MoveNext_m51882EC8C85CD88EC8BAE137A9E13C80F1D05E29 (U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_00c2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!Show)
		bool L_3 = __this->get_Show_2();
		if (L_3)
		{
			goto IL_00c9;
		}
	}
	{
		// _helpBalloonShowing = false;
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set__helpBalloonShowing_8((bool)0);
		goto IL_0071;
	}

IL_003d:
	{
		// GetComponent<CanvasGroup>().alpha -= Time.deltaTime * 2;
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_5 = V_1;
		NullCheck(L_5);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_6;
		L_6 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(L_5, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_7 = L_6;
		NullCheck(L_7);
		float L_8;
		L_8 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_7);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_7, ((float)il2cpp_codegen_subtract((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)(2.0f))))), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0071:
	{
		// while (GetComponent<CanvasGroup>().alpha > 0.02f)
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_10 = V_1;
		NullCheck(L_10);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_11;
		L_11 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(L_10, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		NullCheck(L_11);
		float L_12;
		L_12 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_11, /*hidden argument*/NULL);
		if ((((float)L_12) > ((float)(0.0199999996f))))
		{
			goto IL_003d;
		}
	}
	{
		// GetComponent<CanvasGroup>().alpha = 0;
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_13 = V_1;
		NullCheck(L_13);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_14;
		L_14 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(L_13, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		NullCheck(L_14);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_14, (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_00f2;
	}

IL_0095:
	{
		// GetComponent<CanvasGroup>().alpha += Time.deltaTime * 2;
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_15 = V_1;
		NullCheck(L_15);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_16;
		L_16 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(L_15, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_17 = L_16;
		NullCheck(L_17);
		float L_18;
		L_18 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_17, /*hidden argument*/NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_17);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_17, ((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)(2.0f))))), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00c2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00c9:
	{
		// while (GetComponent<CanvasGroup>().alpha <= .98f)
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_20 = V_1;
		NullCheck(L_20);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_21;
		L_21 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(L_20, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		NullCheck(L_21);
		float L_22;
		L_22 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_21, /*hidden argument*/NULL);
		if ((((float)L_22) <= ((float)(0.980000019f))))
		{
			goto IL_0095;
		}
	}
	{
		// GetComponent<CanvasGroup>().alpha = 1;
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_23 = V_1;
		NullCheck(L_23);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_24;
		L_24 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(L_23, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		NullCheck(L_24);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_24, (1.0f), /*hidden argument*/NULL);
		// _helpBalloonShowing = true;
		HelpBalloonController_t8530E2179B85CBDC04A536778F1B4BA498F3F031 * L_25 = V_1;
		NullCheck(L_25);
		L_25->set__helpBalloonShowing_8((bool)1);
	}

IL_00f2:
	{
		// }
		return (bool)0;
	}
}
// System.Object HelpBalloonController/<ShowHide>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowHideU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3E3A9840DE24036BA014E40FE6F9E5BABF0BEEE9 (U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HelpBalloonController/<ShowHide>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideU3Ed__9_System_Collections_IEnumerator_Reset_m0F2461655369A39303A0E36E24E39EB4A716251E (U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowHideU3Ed__9_System_Collections_IEnumerator_Reset_m0F2461655369A39303A0E36E24E39EB4A716251E_RuntimeMethod_var)));
	}
}
// System.Object HelpBalloonController/<ShowHide>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowHideU3Ed__9_System_Collections_IEnumerator_get_Current_m109B547CA3FFD0233D5E02A3646AB6D7186EB4DC (U3CShowHideU3Ed__9_tF94744DE51F395F80E45CB4647FB2F1E580943BC * __this, const RuntimeMethod* method)
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
// System.Void LoadingSpinner/<FadeSpinner>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSpinnerU3Ed__12__ctor_m17A684BE6F9FA21CAC05BBC98A7D706F06A83586 (U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadingSpinner/<FadeSpinner>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSpinnerU3Ed__12_System_IDisposable_Dispose_m01ECC19D8FD261A2E5E74EBDEE32FA315411EF35 (U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LoadingSpinner/<FadeSpinner>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeSpinnerU3Ed__12_MoveNext_mD00474EE3E779A1CEB8098519F0A76804868E86D (U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * L_1 = __this->get_U3CU3E4__this_6();
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
			goto IL_00a2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float timeStartedLerping = Time.time;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CtimeStartedLerpingU3E5__2_7(L_4);
		// float timeSinceStarted = Time.time - timeStartedLerping;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_U3CtimeStartedLerpingU3E5__2_7();
		// float percentageComplete = timeSinceStarted / lerpTime;
		float L_7 = __this->get_lerpTime_2();
		V_2 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6))/(float)L_7));
	}

IL_0040:
	{
		// timeSinceStarted = Time.time - timeStartedLerping;
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get_U3CtimeStartedLerpingU3E5__2_7();
		// percentageComplete = timeSinceStarted / lerpTime;
		float L_10 = __this->get_lerpTime_2();
		V_2 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9))/(float)L_10));
		// float currentAlphaValue = Mathf.Lerp(start, end, percentageComplete);
		float L_11 = __this->get_start_3();
		float L_12 = __this->get_end_4();
		float L_13 = V_2;
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// canvasGroup.alpha = currentAlphaValue;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_15 = __this->get_canvasGroup_5();
		float L_16 = V_3;
		NullCheck(L_15);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_15, L_16, /*hidden argument*/NULL);
		// if (percentageComplete >= 1)
		float L_17 = V_2;
		if ((!(((float)L_17) >= ((float)(1.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// canvasGroup.alpha = end;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_18 = __this->get_canvasGroup_5();
		float L_19 = __this->get_end_4();
		NullCheck(L_18);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_18, L_19, /*hidden argument*/NULL);
		// break;
		goto IL_00ab;
	}

IL_008e:
	{
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_20 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_20, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0040;
	}

IL_00ab:
	{
		// if (end == 0)
		float L_21 = __this->get_end_4();
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_00c4;
		}
	}
	{
		// gameObject.SetActive(false);
		LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)0, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadingSpinner/<FadeSpinner>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeSpinnerU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mECCCB5EBACA4CBA1DB2981557817693CD9D6C66D (U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadingSpinner/<FadeSpinner>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeSpinnerU3Ed__12_System_Collections_IEnumerator_Reset_mBF5E2704EC878E4572E1D43344E0020994F4F7CA (U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeSpinnerU3Ed__12_System_Collections_IEnumerator_Reset_mBF5E2704EC878E4572E1D43344E0020994F4F7CA_RuntimeMethod_var)));
	}
}
// System.Object LoadingSpinner/<FadeSpinner>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeSpinnerU3Ed__12_System_Collections_IEnumerator_get_Current_m7CA0AEAF7C2F3E62EAE69CF30C1E21DCF7825FCD (U3CFadeSpinnerU3Ed__12_t279E1ACFB42AAE66520C567AB80BC588CC48C05A * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480 (AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480 * __this, intptr_t ___sessionHandle0, intptr_t ___frameHandle1, intptr_t* ___depthImageHandle2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___sessionHandle0, ___frameHandle1, ___depthImageHandle2);

	return static_cast<bool>(returnValue);
}
// System.Void MotionStereoDepthDataSource/AcquireDepthImageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AcquireDepthImageDelegate__ctor_m56279A822E1FCD4825855943480886E6A23B0754 (AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean MotionStereoDepthDataSource/AcquireDepthImageDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AcquireDepthImageDelegate_Invoke_m0EB69F1471827D3886BCA1BC51DCC593F1AE8B87 (AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480 * __this, intptr_t ___sessionHandle0, intptr_t ___frameHandle1, intptr_t* ___depthImageHandle2, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef bool (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___sessionHandle0, ___frameHandle1, ___depthImageHandle2, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionHandle0, ___frameHandle1, ___depthImageHandle2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< bool, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___sessionHandle0, ___frameHandle1, ___depthImageHandle2);
					else
						result = GenericVirtFuncInvoker3< bool, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___sessionHandle0, ___frameHandle1, ___depthImageHandle2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< bool, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sessionHandle0, ___frameHandle1, ___depthImageHandle2);
					else
						result = VirtFuncInvoker3< bool, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sessionHandle0, ___frameHandle1, ___depthImageHandle2);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionHandle0, ___frameHandle1, ___depthImageHandle2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult MotionStereoDepthDataSource/AcquireDepthImageDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AcquireDepthImageDelegate_BeginInvoke_m97AEA9DBE9615326A0A3C5D6F887B6AA9C46B6C3 (AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480 * __this, intptr_t ___sessionHandle0, intptr_t ___frameHandle1, intptr_t* ___depthImageHandle2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___sessionHandle0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___frameHandle1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___depthImageHandle2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Boolean MotionStereoDepthDataSource/AcquireDepthImageDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AcquireDepthImageDelegate_EndInvoke_m3A398C9149AA212683AC9F028F67242FBE9D70FE (AcquireDepthImageDelegate_t29521076D54F9634E58A99CB1D64CA9416FEE480 * __this, intptr_t* ___depthImageHandle0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___depthImageHandle0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NoticeHelper/<CheckDepthCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckDepthCoroutineU3Ed__10__ctor_m0252D8B185EF02D9C4D2509E21D55FE40300723D (U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void NoticeHelper/<CheckDepthCoroutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckDepthCoroutineU3Ed__10_System_IDisposable_Dispose_mFA514CBA2D24B3A9724865E2FC428F7B954D621D (U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NoticeHelper/<CheckDepthCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckDepthCoroutineU3Ed__10_MoveNext_mBCC293B77B33B1934CF94E3ED1A45D2F159D7AA7 (U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object NoticeHelper/<CheckDepthCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckDepthCoroutineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3612228B109929B79EA8FEF3DFD698333ECE8898 (U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NoticeHelper/<CheckDepthCoroutine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckDepthCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_mE7164065561812E5CAFC69136BEAEB70466039FB (U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckDepthCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_mE7164065561812E5CAFC69136BEAEB70466039FB_RuntimeMethod_var)));
	}
}
// System.Object NoticeHelper/<CheckDepthCoroutine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckDepthCoroutineU3Ed__10_System_Collections_IEnumerator_get_Current_mA4FD9A573C6629826566C1FA68DCEDFBF9332A58 (U3CCheckDepthCoroutineU3Ed__10_t0694CE646114E6379191B440E52C3A56DD9C17AD * __this, const RuntimeMethod* method)
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
// System.Void PlayerScript/<BulletCool>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__8__ctor_m3EFF6C75513C7D4EECE5648E71CB6571B194F6AF (U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerScript/<BulletCool>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__8_System_IDisposable_Dispose_m5D6256AA9FB15D5E88D6D71BED7DC3334004FEE0 (U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerScript/<BulletCool>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBulletCoolU3Ed__8_MoveNext_mDE37183F2D8DBDE9F837812429DDB4C85E25BB3A (U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1/3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// coolDown = false;
		PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * L_5 = V_1;
		NullCheck(L_5);
		L_5->set_coolDown_9((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object PlayerScript/<BulletCool>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBulletCoolU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC4C1BB745A4466E801BDFFCCB8D7B6625AC51A6 (U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerScript/<BulletCool>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__8_System_Collections_IEnumerator_Reset_m1EC4AB08A9561650BF266347DF16EE5AC623A078 (U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBulletCoolU3Ed__8_System_Collections_IEnumerator_Reset_m1EC4AB08A9561650BF266347DF16EE5AC623A078_RuntimeMethod_var)));
	}
}
// System.Object PlayerScript/<BulletCool>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBulletCoolU3Ed__8_System_Collections_IEnumerator_get_Current_m0FD6148FDA09E6D415B81DD39BD66990166464C8 (U3CBulletCoolU3Ed__8_t1C04B2A84DF7F8F97503A4069396EB93B82E3EB4 * __this, const RuntimeMethod* method)
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
// System.Void ProjectileScript/<DestroyCount>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyCountU3Ed__12__ctor_mA8BFE6DD9E8C16F986B7642C2C3C280D199C4D5E (U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ProjectileScript/<DestroyCount>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyCountU3Ed__12_System_IDisposable_Dispose_m1ECEDD5494D8B260254DC63E1DDCA1D1652E74BC (U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ProjectileScript/<DestroyCount>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyCountU3Ed__12_MoveNext_m81C90A9B8B1F9612A01BC4C9EFE58C4331BA719E (U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(5);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object ProjectileScript/<DestroyCount>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyCountU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m580A309186C54CCB2CA192410C761B7EFC958A00 (U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ProjectileScript/<DestroyCount>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyCountU3Ed__12_System_Collections_IEnumerator_Reset_mD4F543A4B6A0C8F3A588DC13B20F9C15EF0B9001 (U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyCountU3Ed__12_System_Collections_IEnumerator_Reset_mD4F543A4B6A0C8F3A588DC13B20F9C15EF0B9001_RuntimeMethod_var)));
	}
}
// System.Object ProjectileScript/<DestroyCount>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyCountU3Ed__12_System_Collections_IEnumerator_get_Current_m91BD6718FDE9352EE4791CAF4677BF51477A4741 (U3CDestroyCountU3Ed__12_t5AA1D1B2D40B778C29C7B9B3111DE22DB64431E3 * __this, const RuntimeMethod* method)
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
// System.Void Recorder/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m548AAB70F75E402905A6B7ACD216019A82412555 (U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Recorder/<>c__DisplayClass21_0::<Record>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CRecordU3Eb__0_m99A28583FA82C024D23DE3443CDD432672FE56F4 (U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * __this, const RuntimeMethod* method)
{
	{
		// result = _recordingManager.StartRecording(_recordingConfig);
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		ARRecordingManager_t641954A89C503F51B54489F3F726D49D354BAFBF * L_1 = L_0->get__recordingManager_5();
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_2 = __this->get_U3CU3E4__this_1();
		NullCheck(L_2);
		ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * L_3 = L_2->get__recordingConfig_20();
		NullCheck(L_1);
		int32_t L_4;
		L_4 = ARRecordingManager_StartRecording_m963CB0B48D2774D5E9EAB1573F83EF4B74E6CCC6(L_1, L_3, /*hidden argument*/NULL);
		__this->set_result_0(L_4);
		// return result == RecordingResult.SessionNotReady;
		int32_t L_5 = __this->get_result_0();
		return (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
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
// System.Void Recorder/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mB929708087EA4F5A40B8FF8291C0063405E8464F (U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Recorder/<>c__DisplayClass22_0::<PlaybackDataset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass22_0_U3CPlaybackDatasetU3Eb__0_mC0C3340E8C138B8F59F53B82511FEAA83900C365 (U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * __this, const RuntimeMethod* method)
{
	{
		// result = _playbackManager.SetPlaybackDataset(datasetPath);
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		ARPlaybackManager_tA539AE08770DD3D648CE2422D0A1919C6A7089A2 * L_1 = L_0->get__playbackManager_6();
		String_t* L_2 = __this->get_datasetPath_2();
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ARPlaybackManager_SetPlaybackDataset_mF1B1B0FDB818AB3FF865A5AA784267E6C1D02265(L_1, L_2, /*hidden argument*/NULL);
		__this->set_result_0(L_3);
		// return result == PlaybackResult.SessionNotReady;
		int32_t L_4 = __this->get_result_0();
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
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
// System.Void Recorder/<PlaybackDataset>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaybackDatasetU3Ed__22__ctor_m8DE545C87B5356CDDA73B23E4A8195FDE8CC54E2 (U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Recorder/<PlaybackDataset>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaybackDatasetU3Ed__22_System_IDisposable_Dispose_m1617A604D9EF22A7F5CE764A4FA51BD8C680D374 (U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Recorder/<PlaybackDataset>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlaybackDatasetU3Ed__22_MoveNext_mCBBAE85BD8C8AC692D77914CB2B3131B2015EFCA (U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CPlaybackDatasetU3Eb__0_mC0C3340E8C138B8F59F53B82511FEAA83900C365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0098;
			}
			case 2:
			{
				goto IL_00be;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * L_3 = (U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass22_0__ctor_mB929708087EA4F5A40B8FF8291C0063405E8464F(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_4(L_3);
		U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * L_4 = __this->get_U3CU3E8__1_4();
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_1(L_5);
		U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * L_6 = __this->get_U3CU3E8__1_4();
		String_t* L_7 = __this->get_datasetPath_3();
		NullCheck(L_6);
		L_6->set_datasetPath_2(L_7);
		// Extensions.Session.enabled = false;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_8 = V_1;
		NullCheck(L_8);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_9 = L_8->get_Extensions_4();
		NullCheck(L_9);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_10 = L_9->get_Session_4();
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)0, /*hidden argument*/NULL);
		// PlaybackResult result = PlaybackResult.SessionNotReady;
		U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * L_11 = __this->get_U3CU3E8__1_4();
		NullCheck(L_11);
		L_11->set_result_0(1);
		// yield return new WaitWhile(() =>
		// {
		//     result = _playbackManager.SetPlaybackDataset(datasetPath);
		//     return result == PlaybackResult.SessionNotReady;
		// });
		U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * L_12 = __this->get_U3CU3E8__1_4();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_13 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_0_U3CPlaybackDatasetU3Eb__0_mC0C3340E8C138B8F59F53B82511FEAA83900C365_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * L_14 = (WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 *)il2cpp_codegen_object_new(WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var);
		WaitWhile__ctor_m5DA00ED9A37FBDE983CC8895B36AA8702F965375(L_14, L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0098:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (result != PlaybackResult.OK)
		U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * L_15 = __this->get_U3CU3E8__1_4();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_result_0();
		if (!L_16)
		{
			goto IL_00ae;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00ae:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00be:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Extensions.Session.enabled = true;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_17 = V_1;
		NullCheck(L_17);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_18 = L_17->get_Extensions_4();
		NullCheck(L_18);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_19 = L_18->get_Session_4();
		NullCheck(L_19);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_19, (bool)1, /*hidden argument*/NULL);
		// if (datasetPath == null)
		U3CU3Ec__DisplayClass22_0_t634EBF0761063CCFA748164E7B06EE591B5321AC * L_20 = __this->get_U3CU3E8__1_4();
		NullCheck(L_20);
		String_t* L_21 = L_20->get_datasetPath_2();
		if (L_21)
		{
			goto IL_00ec;
		}
	}
	{
		// _status = RecorderStatus.Stopped;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_22 = V_1;
		NullCheck(L_22);
		L_22->set__status_17(0);
		// }
		goto IL_00f3;
	}

IL_00ec:
	{
		// _status = RecorderStatus.Playingback;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_23 = V_1;
		NullCheck(L_23);
		L_23->set__status_17(5);
	}

IL_00f3:
	{
		// }
		return (bool)0;
	}
}
// System.Object Recorder/<PlaybackDataset>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlaybackDatasetU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8B1BA74B5BE5F1851E94CAF85614F1740020647E (U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Recorder/<PlaybackDataset>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaybackDatasetU3Ed__22_System_Collections_IEnumerator_Reset_m351E0E916542983C63DF5DDAF151A887D48F1B6A (U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlaybackDatasetU3Ed__22_System_Collections_IEnumerator_Reset_m351E0E916542983C63DF5DDAF151A887D48F1B6A_RuntimeMethod_var)));
	}
}
// System.Object Recorder/<PlaybackDataset>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlaybackDatasetU3Ed__22_System_Collections_IEnumerator_get_Current_mF6793A370BFD4BDE1B8ADC200EBC2B373EDCDB91 (U3CPlaybackDatasetU3Ed__22_tE858696750B742B2E7C834A66AC049F72AE90412 * __this, const RuntimeMethod* method)
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
// System.Void Recorder/<Record>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordU3Ed__21__ctor_mB5975301D610F60ACAAF3B1EC40B0673112306B9 (U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Recorder/<Record>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordU3Ed__21_System_IDisposable_Dispose_m35D32B66F4D4A378E6F4A557C4E8260F6B9333FC (U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Recorder/<Record>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRecordU3Ed__21_MoveNext_mB9A01751F0043C12042EDAA7C083CE676DA0D066 (U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CRecordU3Eb__0_m99A28583FA82C024D23DE3443CDD432672FE56F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0098;
			}
			case 2:
			{
				goto IL_00dc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * L_3 = (U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m548AAB70F75E402905A6B7ACD216019A82412555(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_3);
		U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * L_4 = __this->get_U3CU3E8__1_3();
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_1(L_5);
		// Extensions.Session.enabled = false;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_6 = V_1;
		NullCheck(L_6);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_7 = L_6->get_Extensions_4();
		NullCheck(L_7);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_8 = L_7->get_Session_4();
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// RecordingResult result = RecordingResult.SessionNotReady;
		U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * L_9 = __this->get_U3CU3E8__1_3();
		NullCheck(L_9);
		L_9->set_result_0(1);
		// _recordingConfig.Mp4DatasetFilepath = _filenameToSave;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_10 = V_1;
		NullCheck(L_10);
		ARCoreRecordingConfig_t72A0373D58A6C36492BC5434FB704F44B018AD46 * L_11 = L_10->get__recordingConfig_20();
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = L_12->get__filenameToSave_18();
		NullCheck(L_11);
		ARCoreRecordingConfig_set_Mp4DatasetFilepath_m6744288907AC0992BF71DC57119C595C329D1280(L_11, L_13, /*hidden argument*/NULL);
		// yield return new WaitWhile(() =>
		// {
		//     result = _recordingManager.StartRecording(_recordingConfig);
		//     return result == RecordingResult.SessionNotReady;
		// });
		U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * L_14 = __this->get_U3CU3E8__1_3();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_15 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3CRecordU3Eb__0_m99A28583FA82C024D23DE3443CDD432672FE56F4_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * L_16 = (WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 *)il2cpp_codegen_object_new(WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var);
		WaitWhile__ctor_m5DA00ED9A37FBDE983CC8895B36AA8702F965375(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0098:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (result != RecordingResult.OK)
		U3CU3Ec__DisplayClass21_0_t67ED236EE3D17FF5055E7B47CE4AF2A7F8FF1511 * L_17 = __this->get_U3CU3E8__1_3();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_result_0();
		if (!L_18)
		{
			goto IL_00c6;
		}
	}
	{
		// Extensions.Session.enabled = true;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_19 = V_1;
		NullCheck(L_19);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_20 = L_19->get_Extensions_4();
		NullCheck(L_20);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_21 = L_20->get_Session_4();
		NullCheck(L_21);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_21, (bool)1, /*hidden argument*/NULL);
		// _status = RecorderStatus.Stopped;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_22 = V_1;
		NullCheck(L_22);
		L_22->set__status_17(0);
		// yield break;
		return (bool)0;
	}

IL_00c6:
	{
		// ResetScenes();
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_23 = V_1;
		NullCheck(L_23);
		Recorder_ResetScenes_mB6B1019633C186C0CE566209F0ACA78B8F4095D9(L_23, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00dc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Extensions.Session.enabled = true;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_24 = V_1;
		NullCheck(L_24);
		ARCoreExtensions_t43C1A8F52DD0C26B1729FF679E7CD180794D74EB * L_25 = L_24->get_Extensions_4();
		NullCheck(L_25);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_26 = L_25->get_Session_4();
		NullCheck(L_26);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_26, (bool)1, /*hidden argument*/NULL);
		// _status = RecorderStatus.Recording;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_27 = V_1;
		NullCheck(L_27);
		L_27->set__status_17(2);
		// _timeWhenRecorderStarts = Time.time;
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_28 = V_1;
		float L_29;
		L_29 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set__timeWhenRecorderStarts_19(L_29);
		// RecordingTimerText.gameObject.SetActive(true);
		Recorder_tD7DE736D84D73FD318644640D1B5CBDE2D602759 * L_30 = V_1;
		NullCheck(L_30);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = L_30->get_RecordingTimerText_13();
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Recorder/<Record>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m505B1D36133849CE661372CDCA8BE9854C7A3E62 (U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Recorder/<Record>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordU3Ed__21_System_Collections_IEnumerator_Reset_m42EBD657EBDA9F86A68ABE48934AE5AFC63B6E50 (U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRecordU3Ed__21_System_Collections_IEnumerator_Reset_m42EBD657EBDA9F86A68ABE48934AE5AFC63B6E50_RuntimeMethod_var)));
	}
}
// System.Object Recorder/<Record>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordU3Ed__21_System_Collections_IEnumerator_get_Current_mDAD879D9F8ECA327743FB90D6B2A891C13B31C13 (U3CRecordU3Ed__21_t4E2116D17E21E733AD568BFBBE4F7617FFB9A5C0 * __this, const RuntimeMethod* method)
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
// System.Void RotateCarouselButton/<GetValidDeviceOrientation>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValidDeviceOrientationU3Ed__2__ctor_mFBD7A3A0BFCA97CED4E4E4BE6130FCC92E05D184 (U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RotateCarouselButton/<GetValidDeviceOrientation>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValidDeviceOrientationU3Ed__2_System_IDisposable_Dispose_m65E0A1FA44F2B77A95DD2DD371CC6F1993505FD9 (U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RotateCarouselButton/<GetValidDeviceOrientation>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetValidDeviceOrientationU3Ed__2_MoveNext_m40ACF0ABF4A75F6537C79795BAD3BE0B19320146 (U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Input.deviceOrientation == DeviceOrientation.Unknown)
		int32_t L_4;
		L_4 = Input_get_deviceOrientation_m2620E06825B2772FF5FFCF7FE4D814FAB9365224(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		// yield return 0;
		int32_t L_5 = 0;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_005e;
	}

IL_0043:
	{
		// DeviceOrientationInit.DeviceOrientationInstance = Input.deviceOrientation;
		int32_t L_7;
		L_7 = Input_get_deviceOrientation_m2620E06825B2772FF5FFCF7FE4D814FAB9365224(/*hidden argument*/NULL);
		((DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_StaticFields*)il2cpp_codegen_static_fields_for(DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_il2cpp_TypeInfo_var))->set_DeviceOrientationInstance_4(L_7);
		// _deviceOrientationInit = DeviceOrientationInit.DeviceOrientationInstance;
		RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * L_8 = V_1;
		int32_t L_9 = ((DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_StaticFields*)il2cpp_codegen_static_fields_for(DeviceOrientationInit_t81BDBFE4785A326019302F9228C075022AAA3C8A_il2cpp_TypeInfo_var))->get_DeviceOrientationInstance_4();
		NullCheck(L_8);
		L_8->set__deviceOrientationInit_4(L_9);
		// RotateCarouselItem();
		RotateCarouselButton_t8D9DF6335DC28526108A8D0FE6BE444EA5F36400 * L_10 = V_1;
		NullCheck(L_10);
		RotateCarouselButton_RotateCarouselItem_m034EE567BDBE3B414B3FA0BB6D94B0F30093F441(L_10, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return (bool)0;
	}
}
// System.Object RotateCarouselButton/<GetValidDeviceOrientation>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetValidDeviceOrientationU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D8B0249F93E41A82F5E85A108E10290D3E52849 (U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RotateCarouselButton/<GetValidDeviceOrientation>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetValidDeviceOrientationU3Ed__2_System_Collections_IEnumerator_Reset_m1D89E4473C76DF3F909D2D2CBB5007B4BC0963B5 (U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetValidDeviceOrientationU3Ed__2_System_Collections_IEnumerator_Reset_m1D89E4473C76DF3F909D2D2CBB5007B4BC0963B5_RuntimeMethod_var)));
	}
}
// System.Object RotateCarouselButton/<GetValidDeviceOrientation>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetValidDeviceOrientationU3Ed__2_System_Collections_IEnumerator_get_Current_mD5514E0B5CDE3119B23F754F197FB6969C3165EE (U3CGetValidDeviceOrientationU3Ed__2_tB4B0A3D94C0E3FB9201D70408AAD0B4F841B47DE * __this, const RuntimeMethod* method)
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
// System.Void SceneSwitcher/<InitSceneLoad>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitSceneLoadU3Ed__8__ctor_m4EA4D678FC63A705977BF6E2F8002C4A8DCFB4AC (U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SceneSwitcher/<InitSceneLoad>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitSceneLoadU3Ed__8_System_IDisposable_Dispose_m95E22F924228A675857C474E5C07C12E0DC3CE59 (U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SceneSwitcher/<InitSceneLoad>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitSceneLoadU3Ed__8_MoveNext_mE66EFD0237AA7663CDCDC01FF96B5042E80FB1D8 (U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_1 = __this->get_U3CU3E4__this_2();
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
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LoadScene(StartScene);
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_5 = V_1;
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_StartScene_7();
		NullCheck(L_5);
		SceneSwitcher_LoadScene_m29C1C82E7858E7800B69F4AF7245F99D20BEF8D1(L_5, L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object SceneSwitcher/<InitSceneLoad>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInitSceneLoadU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD2245B59B5B2AD8BE13E76FB651C6D0B81D31069 (U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SceneSwitcher/<InitSceneLoad>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitSceneLoadU3Ed__8_System_Collections_IEnumerator_Reset_m0ECBA2E9A6EB42A6E2665ED5CEB638CD9AAF48F5 (U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitSceneLoadU3Ed__8_System_Collections_IEnumerator_Reset_m0ECBA2E9A6EB42A6E2665ED5CEB638CD9AAF48F5_RuntimeMethod_var)));
	}
}
// System.Object SceneSwitcher/<InitSceneLoad>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInitSceneLoadU3Ed__8_System_Collections_IEnumerator_get_Current_m6082FD72615FE4BAD9F89932CA3BF925D68C9AF3 (U3CInitSceneLoadU3Ed__8_tBDD2BC8F1FC3AF6FBDE59F794CB032F7719E1FF3 * __this, const RuntimeMethod* method)
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
// System.Void SceneSwitcher/<LoadSceneAsync>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__11__ctor_m7E48F5BCAA240C0B74E2FE4DBDD31E7904384917 (U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SceneSwitcher/<LoadSceneAsync>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__11_System_IDisposable_Dispose_mBFDB6F865CD6ACAA61CD3F5EA4C4A59BA7AD96D9 (U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SceneSwitcher/<LoadSceneAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneAsyncU3Ed__11_MoveNext_mBA7871C04A03B6D342C6648838EC9A083892764A (U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A2924F9E9968F93C09684E73CE57FB52FB48C1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79A010C3168ABBA36B31C8771E1DAD4CC0206E4C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * V_1 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_012b;
			}
			case 2:
			{
				goto IL_0173;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (string.IsNullOrEmpty(sceneName))
		String_t* L_3 = __this->get_sceneName_2();
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0038:
	{
		// LoadingSpinner.Instance.Show();
		LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * L_5 = ((LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_StaticFields*)il2cpp_codegen_static_fields_for(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_5);
		LoadingSpinner_Show_m3F511B6A514F64545197873DF0F2185E5381AEDD(L_5, /*hidden argument*/NULL);
		// AsyncOperation _async = new AsyncOperation();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_6 = (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)il2cpp_codegen_object_new(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_il2cpp_TypeInfo_var);
		AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A(L_6, /*hidden argument*/NULL);
		__this->set_U3C_asyncU3E5__2_4(L_6);
		// Debug.Log("LoadSceneAsync: " + sceneName);
		String_t* L_7 = __this->get_sceneName_2();
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral79A010C3168ABBA36B31C8771E1DAD4CC0206E4C, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// if (sceneName != _currentScene && _sceneChangeComplete)
		String_t* L_9 = __this->get_sceneName_2();
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get__currentScene_10();
		bool L_12;
		L_12 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_01a6;
		}
	}
	{
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = L_13->get__sceneChangeComplete_9();
		if (!L_14)
		{
			goto IL_01a6;
		}
	}
	{
		// _sceneChangeComplete = false;
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_15 = V_1;
		NullCheck(L_15);
		L_15->set__sceneChangeComplete_9((bool)0);
		// if (!SceneManager.GetSceneByName(sceneName).isLoaded)
		String_t* L_16 = __this->get_sceneName_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_17;
		L_17 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		bool L_18;
		L_18 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_01b0;
		}
	}
	{
		// Scene currentScene = SceneManager.GetSceneByName(_currentScene);
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = L_19->get__currentScene_10();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_21;
		L_21 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9(L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// if (currentScene != null && currentScene.isLoaded)
		bool L_22;
		L_22 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_013f;
		}
	}
	{
		// if (ActiveObjectsToDestroy != null)
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = L_23->get_ActiveObjectsToDestroy_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_010d;
		}
	}
	{
		// foreach (Transform child in ActiveObjectsToDestroy)
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_26 = V_1;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = L_26->get_ActiveObjectsToDestroy_6();
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
	}

IL_00d5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ed;
		}

IL_00d7:
		{
			// foreach (Transform child in ActiveObjectsToDestroy)
			RuntimeObject* L_29 = V_4;
			NullCheck(L_29);
			RuntimeObject * L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			// Destroy(child.gameObject);
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_30, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
			L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_30, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_31, /*hidden argument*/NULL);
		}

IL_00ed:
		{
			// foreach (Transform child in ActiveObjectsToDestroy)
			RuntimeObject* L_32 = V_4;
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_00d7;
			}
		}

IL_00f6:
		{
			IL2CPP_LEAVE(0x10D, FINALLY_00f8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f8;
	}

FINALLY_00f8:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_5;
			if (!L_35)
			{
				goto IL_010c;
			}
		}

IL_0105:
		{
			RuntimeObject* L_36 = V_5;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
		}

IL_010c:
		{
			IL2CPP_END_FINALLY(248)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(248)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10D, IL_010d)
	}

IL_010d:
	{
		// _async = SceneManager.UnloadSceneAsync(currentScene);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_38;
		L_38 = SceneManager_UnloadSceneAsync_m94D080FDA6440916AA8F8F4FA13B1002C96BB589(L_37, /*hidden argument*/NULL);
		__this->set_U3C_asyncU3E5__2_4(L_38);
		goto IL_0132;
	}

IL_011b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_012b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0132:
	{
		// while (!_async.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_39 = __this->get_U3C_asyncU3E5__2_4();
		NullCheck(L_39);
		bool L_40;
		L_40 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_011b;
		}
	}

IL_013f:
	{
		// _async = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);
		String_t* L_41 = __this->get_sceneName_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_42;
		L_42 = SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748(L_41, 1, /*hidden argument*/NULL);
		__this->set_U3C_asyncU3E5__2_4(L_42);
		// LoadingSpinner.Instance.SetLoadingOperation(_async);
		LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * L_43 = ((LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_StaticFields*)il2cpp_codegen_static_fields_for(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_il2cpp_TypeInfo_var))->get_Instance_4();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_44 = __this->get_U3C_asyncU3E5__2_4();
		NullCheck(L_43);
		LoadingSpinner_SetLoadingOperation_m0CB6E600AA95DBE2FDE716FDF3043A921CEF67DB(L_43, L_44, /*hidden argument*/NULL);
		goto IL_017a;
	}

IL_0163:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0173:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_017a:
	{
		// while (!_async.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_45 = __this->get_U3C_asyncU3E5__2_4();
		NullCheck(L_45);
		bool L_46;
		L_46 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0163;
		}
	}
	{
		// _currentScene = sceneName;
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_47 = V_1;
		String_t* L_48 = __this->get_sceneName_2();
		NullCheck(L_47);
		L_47->set__currentScene_10(L_48);
		// _sceneChangeComplete = true;
		SceneSwitcher_t0D5299E748616A52E7E6B47BC61FEB51CE91192F * L_49 = V_1;
		NullCheck(L_49);
		L_49->set__sceneChangeComplete_9((bool)1);
		// Debug.Log("Loaded the scene.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5A2924F9E9968F93C09684E73CE57FB52FB48C1F, /*hidden argument*/NULL);
		// }
		goto IL_01b0;
	}

IL_01a6:
	{
		// LoadingSpinner.Instance.Hide();
		LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE * L_50 = ((LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_StaticFields*)il2cpp_codegen_static_fields_for(LoadingSpinner_t86BE9345919E10D46F40C29AB19684E5C56719BE_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_50);
		LoadingSpinner_Hide_m5D4AC460DDA88321EAC12F0A5219A054C5D9C911(L_50, /*hidden argument*/NULL);
	}

IL_01b0:
	{
		// }
		return (bool)0;
	}
}
// System.Object SceneSwitcher/<LoadSceneAsync>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneAsyncU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m372717D13A99B95B4D28C130910475475B77B59F (U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SceneSwitcher/<LoadSceneAsync>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_Reset_m16A9D51FBB92C0C07D22F40A401D370BB6AAC437 (U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_Reset_m16A9D51FBB92C0C07D22F40A401D370BB6AAC437_RuntimeMethod_var)));
	}
}
// System.Object SceneSwitcher/<LoadSceneAsync>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_get_Current_m684E3C8520FA80BEB14183F7A7D4C4879AA1D23C (U3CLoadSceneAsyncU3Ed__11_tA3B8078FD8E4F9D1FC79B0769A6AF2B55EE6BE23 * __this, const RuntimeMethod* method)
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
// System.Void Whirlwind/<Ded>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDedU3Ed__3__ctor_mA18D38945839978CAD7379C830896D4F8EA290BA (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Whirlwind/<Ded>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDedU3Ed__3_System_IDisposable_Dispose_m79A61FAC99F24B57089E5509A53316ADE13D7EC3 (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Whirlwind/<Ded>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDedU3Ed__3_MoveNext_m2B0C007018CD0209BE8F64724786E56C9A464344 (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(gameObject);
		Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Whirlwind/<Ded>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDedU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC880E830BE9BEC927A3BF8FD5897F4C73BB7CB0F (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Whirlwind/<Ded>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDedU3Ed__3_System_Collections_IEnumerator_Reset_m127103B7EA1ED4C77318A6599034688146791A60 (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDedU3Ed__3_System_Collections_IEnumerator_Reset_m127103B7EA1ED4C77318A6599034688146791A60_RuntimeMethod_var)));
	}
}
// System.Object Whirlwind/<Ded>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDedU3Ed__3_System_Collections_IEnumerator_get_Current_mBE37A11DB4F73A09F10B5450202D8CD3C63C1DB3 (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetBeta_mB913296198D3526439532AC9995E3094019FA43C_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _betaCutoffSlope = value;
		float L_0 = ___value0;
		__this->set__betaCutoffSlope_3(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetMinimumCutoff_m54190B98074E4A8FC47AA2F94667AFF335832737_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _minCutoff = value;
		float L_0 = ___value0;
		__this->set__minCutoff_2(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetDerivateCutoff_m9F5ADF15942F987690613623627898B9FB93DA89_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _derivateCutoffFrequency = value;
		float L_0 = ___value0;
		__this->set__derivateCutoffFrequency_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeedAdaptiveFilter_SetFrequency_mA1E67B35286F1737F5F1AB00F962CE6EB381FBCB_inline (SpeedAdaptiveFilter_t2826484D505D87A19682D6B43C99417647C91A6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// _sensorFrequency = value;
		float L_0 = ___value0;
		__this->set__sensorFrequency_1(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LowPassFilter_GetIsInitialized_mD0A957476003BCAFFF2A6BC008D5B5A10263184A_inline (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * __this, const RuntimeMethod* method)
{
	{
		// return _isInitialized;
		bool L_0 = __this->get__isInitialized_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LowPassFilter_GetRawInput_mE79CF2A3E4461A524580B840CD90F380CF1DF163_inline (LowPassFilter_t25124565D59BD1C5B6EAAC4F02771BE346D20DF2 * __this, const RuntimeMethod* method)
{
	{
		// return _inputData;
		float L_0 = __this->get__inputData_2();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientedReticle_get_Distance_m0543F1D45C48CFEA0C96447A98415B568522DBEB_inline (OrientedReticle_t5E85DB555E4389228F9199E3E5C982A33C658101 * __this, const RuntimeMethod* method)
{
	{
		// public float Distance => _distance;
		float L_0 = __this->get__distance_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_Min_m1D63F92E4FD8B89FCFA2BAAA574194F29BF538BE_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_3, L_4, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_Max_mE31DD0B63B01E585B3EA8C876DB7AB2AB72E61B0_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___lhs0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___rhs1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___rhs1), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_3, L_4, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * LinkedList_1_get_First_m60113671B7FFA2E250B7EB5C490DF4B5D5C10F52_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	{
		LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * L_0 = (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *)__this->get_head_0();
		return (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LinkedListNode_1_get_Value_m9BA93F2A1CA19916497B4D273C24114F10B694BD_gshared_inline (LinkedListNode_1_tCC1C22983000617ED3F8E16F9846FA8DFB25BDD3 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_item_3();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m3002AA56275E54B52256A83C262FCD1F1A39E9BC_gshared_inline (LinkedList_1_t918683DB486E2CE497E7DCBA078EBDAC50866B27 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_count_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_gshared_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_2 = (Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E*)L_2, (int32_t)L_3);
		return (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Enumerator_get_Current_mCC7A15BDAB727FCA27004C6714C1F3A196C2D011_gshared_inline (Enumerator_tE18D6965A9847907E2A3A6FA0E4B0E185636431A * __this, const RuntimeMethod* method)
{
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )__this->get_current_3();
		return (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )L_0;
	}
}
