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

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t69444E6E06FA6776283024710ADC0302F2700BFD;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.String[][][]
struct StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354;
// System.String[][]
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BulletBarrage
struct BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CloseAttack
struct CloseAttack_t05EAC9E288E686E2BBBF02C9A32B1B177A24F6A1;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Cooldown
struct Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DataHolder
struct DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD;
// DataReader
struct DataReader_t1192A7508692CF172B3561A6BC03611A1B418C47;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Hurricane
struct Hurricane_t5928CC1C1F6394E6803065F16F3AF6EB92A7A64F;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// LightEstimation
struct LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// MapRegenerator
struct MapRegenerator_t94694D9787D0B7337A47D507A0800DC9B9B38ECE;
// MapScript
struct MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MoveScenes
struct MoveScenes_t757DBF243D1177806463417C842AF5884F8C7C17;
// NestNavigator
struct NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A;
// NestScript
struct NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435;
// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerScript
struct PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805;
// ProjectileBarrage
struct ProjectileBarrage_t56E930F83EE69ACB84D41B2F78C2921FAFE6C61F;
// ProjectileScript
struct ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38;
// RapidFire
struct RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// Rock
struct Rock_t74BB0992120DB1069FB77BB5EA72A62929E24F2E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SliderValueToText
struct SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StateMachine
struct StateMachine_t823E5CFDC9E27E10A2C57DB9303909CA2D8BC49A;
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
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TutorialTesting
struct TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Whirlwind
struct Whirlwind_tA828026CF25F25325B4B2392543DE60675579401;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// BulletBarrage/<Cooldown>d__7
struct U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerScript/<BulletCool>d__9
struct U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A;
// ProjectileScript/<DestroyCount>d__9
struct U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// Whirlwind/<Ded>d__3
struct U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0292B692298E2B309843B268FF46F9F4BE940517;
IL2CPP_EXTERN_C String_t* _stringLiteral0CBD3894B450BE276B9FBFCAC62F32B1335D223E;
IL2CPP_EXTERN_C String_t* _stringLiteral195316B10CE51FD93C88FE09A289E12C3249577F;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5ACB239701A5559D92C95711D149583E0934E1;
IL2CPP_EXTERN_C String_t* _stringLiteral22D70741408FE588C0AE79FABB5468EB2052126F;
IL2CPP_EXTERN_C String_t* _stringLiteral28BEC8DE1AAB9286ECCEF19043BF8763ADC775B8;
IL2CPP_EXTERN_C String_t* _stringLiteral298EFC43BA9173544EF93974B77A64243333390F;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF1D6714B3851F270D2EF84D80765A18F9F48C2;
IL2CPP_EXTERN_C String_t* _stringLiteral32770A51245E05C2249F8C4EB480658D6ED5BC27;
IL2CPP_EXTERN_C String_t* _stringLiteral328701A8B5A34FB84BB1AEB3909463B5AD479976;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral3A30595A8020834BAAFA6CA95E4B52B49CF47CAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3BD68B6E4DA1A9152CE5CFA2698F6388C47791EE;
IL2CPP_EXTERN_C String_t* _stringLiteral3FEA076C6150CCD48E549D93671DB681EE9A10E0;
IL2CPP_EXTERN_C String_t* _stringLiteral435C44B0296C3E747851364F950B8F993B1DD16F;
IL2CPP_EXTERN_C String_t* _stringLiteral4BC8F3D9F3070D271043F1D3CE5C0BE8DE4DFA7E;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCDA4F5A42A8195737B7B57DE13ADC1D975B624;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD07C6C99BE1F00459F6FF3B27CD9232B25D7BA;
IL2CPP_EXTERN_C String_t* _stringLiteral4D6DDECA8E0C07CD99D444D353C77C8D7C41D692;
IL2CPP_EXTERN_C String_t* _stringLiteral52C843FEEEB31C99290325044DB8E237C1F7C7D2;
IL2CPP_EXTERN_C String_t* _stringLiteral5ADABBADA3334613050AEFA89248778527EC838F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA;
IL2CPP_EXTERN_C String_t* _stringLiteral69632BA9263DBDA0AB804800C6D7A7D2B8DF0EB4;
IL2CPP_EXTERN_C String_t* _stringLiteral6D9AE754712B71409DF769162025D0390FB04D21;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB682445EC2B55A6208C429191DF2B9152A8FBD;
IL2CPP_EXTERN_C String_t* _stringLiteral77EB910D2929E258F837FF44A077B9FCD2F9FB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B58BF9C18E46D86D31F4AEC7006608419E3DF93;
IL2CPP_EXTERN_C String_t* _stringLiteral820A4D64A86991DFFCED863D04F9A60F7CF2647A;
IL2CPP_EXTERN_C String_t* _stringLiteral88650D8B8764C11D0D7823B770009E56E23F26D2;
IL2CPP_EXTERN_C String_t* _stringLiteral8D433D59FC83B792827B9C3DD5736374FC805E00;
IL2CPP_EXTERN_C String_t* _stringLiteral8F99866DBA2A71261CA704F7B093E2EF8A7D2CB8;
IL2CPP_EXTERN_C String_t* _stringLiteral955C4D0A2DD6B1FD4627C4881C5F9F36571FA8D4;
IL2CPP_EXTERN_C String_t* _stringLiteral989764E0DF7ADE7FED47DDCAC0D342041E67434E;
IL2CPP_EXTERN_C String_t* _stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D;
IL2CPP_EXTERN_C String_t* _stringLiteralA7E0AC491836F59DFBF3B861855104C72E139678;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E8C078DC2A9E8083F35C22D1D6FEBC02F893AE;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0D80798A36B9BB47C2A254579A366D3D9B4445;
IL2CPP_EXTERN_C String_t* _stringLiteralB070B5A86C5A7E2005BA61C6AC7082C78AE040C8;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA4D74D40CC3AE370D0008F34B380F1F9CF8401;
IL2CPP_EXTERN_C String_t* _stringLiteralE27087E381F4490E87AB17C2386B6515AB9CDB87;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201;
IL2CPP_EXTERN_C String_t* _stringLiteralEF87D62C674AA959B933969E16A43C950450CB77;
IL2CPP_EXTERN_C String_t* _stringLiteralFE9CF4F5F1568CDA638D37DDEBDFBB20FAAAF055;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A_m1C64A33AA05AD353AFADC08958463AC84FBBD282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805_m05BCDC531AA2C8218E6062A4D7A23A0977EA2397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LightEstimation_FrameUpdated_m0A02A97CD63F7957B28ECD371F81DA4D35B421FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBulletCoolU3Ed__9_System_Collections_IEnumerator_Reset_m1C62CE9D88F7F8CB8C763F55A6196E6F1D79682E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCooldownU3Ed__7_System_Collections_IEnumerator_Reset_m9BB62D463144669A414D2A8520C6EDBC5C7B315B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDedU3Ed__3_System_Collections_IEnumerator_Reset_m127103B7EA1ED4C77318A6599034688146791A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyCountU3Ed__9_System_Collections_IEnumerator_Reset_mB27FD505CBB0701F2A27FCE6C1CCDC9ADA2BE6F8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354;
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// BulletBarrage/<Cooldown>d__7
struct  U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF  : public RuntimeObject
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


// PlayerScript/<BulletCool>d__9
struct  U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A  : public RuntimeObject
{
public:
	// System.Int32 PlayerScript/<BulletCool>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerScript/<BulletCool>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerScript PlayerScript/<BulletCool>d__9::<>4__this
	PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A, ___U3CU3E4__this_2)); }
	inline PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ProjectileScript/<DestroyCount>d__9
struct  U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0  : public RuntimeObject
{
public:
	// System.Int32 ProjectileScript/<DestroyCount>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ProjectileScript/<DestroyCount>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ProjectileScript ProjectileScript/<DestroyCount>d__9::<>4__this
	ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0, ___U3CU3E4__this_2)); }
	inline ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Whirlwind/<Ded>d__3
struct  U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700  : public RuntimeObject
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


// System.Nullable`1<System.Double>
struct  Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct  Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
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
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Rendering.SphericalHarmonicsL2
struct  SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 
{
public:
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;

public:
	inline static int32_t get_offset_of_shr0_0() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr0_0)); }
	inline float get_shr0_0() const { return ___shr0_0; }
	inline float* get_address_of_shr0_0() { return &___shr0_0; }
	inline void set_shr0_0(float value)
	{
		___shr0_0 = value;
	}

	inline static int32_t get_offset_of_shr1_1() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr1_1)); }
	inline float get_shr1_1() const { return ___shr1_1; }
	inline float* get_address_of_shr1_1() { return &___shr1_1; }
	inline void set_shr1_1(float value)
	{
		___shr1_1 = value;
	}

	inline static int32_t get_offset_of_shr2_2() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr2_2)); }
	inline float get_shr2_2() const { return ___shr2_2; }
	inline float* get_address_of_shr2_2() { return &___shr2_2; }
	inline void set_shr2_2(float value)
	{
		___shr2_2 = value;
	}

	inline static int32_t get_offset_of_shr3_3() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr3_3)); }
	inline float get_shr3_3() const { return ___shr3_3; }
	inline float* get_address_of_shr3_3() { return &___shr3_3; }
	inline void set_shr3_3(float value)
	{
		___shr3_3 = value;
	}

	inline static int32_t get_offset_of_shr4_4() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr4_4)); }
	inline float get_shr4_4() const { return ___shr4_4; }
	inline float* get_address_of_shr4_4() { return &___shr4_4; }
	inline void set_shr4_4(float value)
	{
		___shr4_4 = value;
	}

	inline static int32_t get_offset_of_shr5_5() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr5_5)); }
	inline float get_shr5_5() const { return ___shr5_5; }
	inline float* get_address_of_shr5_5() { return &___shr5_5; }
	inline void set_shr5_5(float value)
	{
		___shr5_5 = value;
	}

	inline static int32_t get_offset_of_shr6_6() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr6_6)); }
	inline float get_shr6_6() const { return ___shr6_6; }
	inline float* get_address_of_shr6_6() { return &___shr6_6; }
	inline void set_shr6_6(float value)
	{
		___shr6_6 = value;
	}

	inline static int32_t get_offset_of_shr7_7() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr7_7)); }
	inline float get_shr7_7() const { return ___shr7_7; }
	inline float* get_address_of_shr7_7() { return &___shr7_7; }
	inline void set_shr7_7(float value)
	{
		___shr7_7 = value;
	}

	inline static int32_t get_offset_of_shr8_8() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr8_8)); }
	inline float get_shr8_8() const { return ___shr8_8; }
	inline float* get_address_of_shr8_8() { return &___shr8_8; }
	inline void set_shr8_8(float value)
	{
		___shr8_8 = value;
	}

	inline static int32_t get_offset_of_shg0_9() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg0_9)); }
	inline float get_shg0_9() const { return ___shg0_9; }
	inline float* get_address_of_shg0_9() { return &___shg0_9; }
	inline void set_shg0_9(float value)
	{
		___shg0_9 = value;
	}

	inline static int32_t get_offset_of_shg1_10() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg1_10)); }
	inline float get_shg1_10() const { return ___shg1_10; }
	inline float* get_address_of_shg1_10() { return &___shg1_10; }
	inline void set_shg1_10(float value)
	{
		___shg1_10 = value;
	}

	inline static int32_t get_offset_of_shg2_11() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg2_11)); }
	inline float get_shg2_11() const { return ___shg2_11; }
	inline float* get_address_of_shg2_11() { return &___shg2_11; }
	inline void set_shg2_11(float value)
	{
		___shg2_11 = value;
	}

	inline static int32_t get_offset_of_shg3_12() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg3_12)); }
	inline float get_shg3_12() const { return ___shg3_12; }
	inline float* get_address_of_shg3_12() { return &___shg3_12; }
	inline void set_shg3_12(float value)
	{
		___shg3_12 = value;
	}

	inline static int32_t get_offset_of_shg4_13() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg4_13)); }
	inline float get_shg4_13() const { return ___shg4_13; }
	inline float* get_address_of_shg4_13() { return &___shg4_13; }
	inline void set_shg4_13(float value)
	{
		___shg4_13 = value;
	}

	inline static int32_t get_offset_of_shg5_14() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg5_14)); }
	inline float get_shg5_14() const { return ___shg5_14; }
	inline float* get_address_of_shg5_14() { return &___shg5_14; }
	inline void set_shg5_14(float value)
	{
		___shg5_14 = value;
	}

	inline static int32_t get_offset_of_shg6_15() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg6_15)); }
	inline float get_shg6_15() const { return ___shg6_15; }
	inline float* get_address_of_shg6_15() { return &___shg6_15; }
	inline void set_shg6_15(float value)
	{
		___shg6_15 = value;
	}

	inline static int32_t get_offset_of_shg7_16() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg7_16)); }
	inline float get_shg7_16() const { return ___shg7_16; }
	inline float* get_address_of_shg7_16() { return &___shg7_16; }
	inline void set_shg7_16(float value)
	{
		___shg7_16 = value;
	}

	inline static int32_t get_offset_of_shg8_17() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg8_17)); }
	inline float get_shg8_17() const { return ___shg8_17; }
	inline float* get_address_of_shg8_17() { return &___shg8_17; }
	inline void set_shg8_17(float value)
	{
		___shg8_17 = value;
	}

	inline static int32_t get_offset_of_shb0_18() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb0_18)); }
	inline float get_shb0_18() const { return ___shb0_18; }
	inline float* get_address_of_shb0_18() { return &___shb0_18; }
	inline void set_shb0_18(float value)
	{
		___shb0_18 = value;
	}

	inline static int32_t get_offset_of_shb1_19() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb1_19)); }
	inline float get_shb1_19() const { return ___shb1_19; }
	inline float* get_address_of_shb1_19() { return &___shb1_19; }
	inline void set_shb1_19(float value)
	{
		___shb1_19 = value;
	}

	inline static int32_t get_offset_of_shb2_20() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb2_20)); }
	inline float get_shb2_20() const { return ___shb2_20; }
	inline float* get_address_of_shb2_20() { return &___shb2_20; }
	inline void set_shb2_20(float value)
	{
		___shb2_20 = value;
	}

	inline static int32_t get_offset_of_shb3_21() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb3_21)); }
	inline float get_shb3_21() const { return ___shb3_21; }
	inline float* get_address_of_shb3_21() { return &___shb3_21; }
	inline void set_shb3_21(float value)
	{
		___shb3_21 = value;
	}

	inline static int32_t get_offset_of_shb4_22() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb4_22)); }
	inline float get_shb4_22() const { return ___shb4_22; }
	inline float* get_address_of_shb4_22() { return &___shb4_22; }
	inline void set_shb4_22(float value)
	{
		___shb4_22 = value;
	}

	inline static int32_t get_offset_of_shb5_23() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb5_23)); }
	inline float get_shb5_23() const { return ___shb5_23; }
	inline float* get_address_of_shb5_23() { return &___shb5_23; }
	inline void set_shb5_23(float value)
	{
		___shb5_23 = value;
	}

	inline static int32_t get_offset_of_shb6_24() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb6_24)); }
	inline float get_shb6_24() const { return ___shb6_24; }
	inline float* get_address_of_shb6_24() { return &___shb6_24; }
	inline void set_shb6_24(float value)
	{
		___shb6_24 = value;
	}

	inline static int32_t get_offset_of_shb7_25() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb7_25)); }
	inline float get_shb7_25() const { return ___shb7_25; }
	inline float* get_address_of_shb7_25() { return &___shb7_25; }
	inline void set_shb7_25(float value)
	{
		___shb7_25 = value;
	}

	inline static int32_t get_offset_of_shb8_26() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb8_26)); }
	inline float get_shb8_26() const { return ___shb8_26; }
	inline float* get_address_of_shb8_26() { return &___shb8_26; }
	inline void set_shb8_26(float value)
	{
		___shb8_26 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
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
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F 
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


// System.Nullable`1<UnityEngine.Color>
struct  Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Matrix4x4>
struct  Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___value_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_value_0() const { return ___value_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct  Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E 
{
public:
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___value_0)); }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  get_value_0() const { return ___value_0; }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D32 <PrivateImplementationDetails>::01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E
	__StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  ___01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0;

public:
	inline static int32_t get_offset_of_U301F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  get_U301F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0() const { return ___01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0; }
	inline __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F * get_address_of_U301F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0() { return &___01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0; }
	inline void set_U301F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0(__StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  value)
	{
		___01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0 = value;
	}
};


// UnityEngine.XR.ARFoundation.CameraFacingDirection
struct  CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.CameraFacingDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct  CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
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
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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
struct  Delegate_t  : public RuntimeObject
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

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.LightEstimation
struct  LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.LightEstimation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct  LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
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


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
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


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
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
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
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


// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct  ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 
{
public:
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;

public:
	inline static int32_t get_offset_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CaverageColorTemperatureU3Ek__BackingField_0)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CaverageColorTemperatureU3Ek__BackingField_0() const { return ___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return &___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline void set_U3CaverageColorTemperatureU3Ek__BackingField_0(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CaverageColorTemperatureU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CcolorCorrectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CcolorCorrectionU3Ek__BackingField_1)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CcolorCorrectionU3Ek__BackingField_1() const { return ___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CcolorCorrectionU3Ek__BackingField_1() { return &___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline void set_U3CcolorCorrectionU3Ek__BackingField_1(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CcolorCorrectionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightIntensityLumensU3Ek__BackingField_2)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CmainLightIntensityLumensU3Ek__BackingField_2() const { return ___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return &___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline void set_U3CmainLightIntensityLumensU3Ek__BackingField_2(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CmainLightIntensityLumensU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightColorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightColorU3Ek__BackingField_3)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CmainLightColorU3Ek__BackingField_3() const { return ___U3CmainLightColorU3Ek__BackingField_3; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CmainLightColorU3Ek__BackingField_3() { return &___U3CmainLightColorU3Ek__BackingField_3; }
	inline void set_U3CmainLightColorU3Ek__BackingField_3(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CmainLightColorU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightDirectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightDirectionU3Ek__BackingField_4)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CmainLightDirectionU3Ek__BackingField_4() const { return ___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CmainLightDirectionU3Ek__BackingField_4() { return &___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline void set_U3CmainLightDirectionU3Ek__BackingField_4(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CmainLightDirectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CambientSphericalHarmonicsU3Ek__BackingField_5)); }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  get_U3CambientSphericalHarmonicsU3Ek__BackingField_5() const { return ___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * get_address_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return &___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline void set_U3CambientSphericalHarmonicsU3Ek__BackingField_5(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  value)
	{
		___U3CambientSphericalHarmonicsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_6() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageBrightness_6)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageBrightness_6() const { return ___m_AverageBrightness_6; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageBrightness_6() { return &___m_AverageBrightness_6; }
	inline void set_m_AverageBrightness_6(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageBrightness_6 = value;
	}

	inline static int32_t get_offset_of_m_AverageIntensityInLumens_7() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageIntensityInLumens_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageIntensityInLumens_7() const { return ___m_AverageIntensityInLumens_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageIntensityInLumens_7() { return &___m_AverageIntensityInLumens_7; }
	inline void set_m_AverageIntensityInLumens_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageIntensityInLumens_7 = value;
	}

	inline static int32_t get_offset_of_m_MainLightBrightness_8() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_MainLightBrightness_8)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_MainLightBrightness_8() const { return ___m_MainLightBrightness_8; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_MainLightBrightness_8() { return &___m_MainLightBrightness_8; }
	inline void set_m_MainLightBrightness_8(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_MainLightBrightness_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};

// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
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
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct  ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 
{
public:
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3ClightEstimationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3ClightEstimationU3Ek__BackingField_0)); }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  get_U3ClightEstimationU3Ek__BackingField_0() const { return ___U3ClightEstimationU3Ek__BackingField_0; }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * get_address_of_U3ClightEstimationU3Ek__BackingField_0() { return &___U3ClightEstimationU3Ek__BackingField_0; }
	inline void set_U3ClightEstimationU3Ek__BackingField_0(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  value)
	{
		___U3ClightEstimationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampNsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtimestampNsU3Ek__BackingField_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CtimestampNsU3Ek__BackingField_1() const { return ___U3CtimestampNsU3Ek__BackingField_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CtimestampNsU3Ek__BackingField_1() { return &___U3CtimestampNsU3Ek__BackingField_1; }
	inline void set_U3CtimestampNsU3Ek__BackingField_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CtimestampNsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CprojectionMatrixU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CprojectionMatrixU3Ek__BackingField_2)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CprojectionMatrixU3Ek__BackingField_2() const { return ___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CprojectionMatrixU3Ek__BackingField_2() { return &___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline void set_U3CprojectionMatrixU3Ek__BackingField_2(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CprojectionMatrixU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayMatrixU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisplayMatrixU3Ek__BackingField_3)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CdisplayMatrixU3Ek__BackingField_3() const { return ___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CdisplayMatrixU3Ek__BackingField_3() { return &___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline void set_U3CdisplayMatrixU3Ek__BackingField_3(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CdisplayMatrixU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtexturesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtexturesU3Ek__BackingField_4)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_U3CtexturesU3Ek__BackingField_4() const { return ___U3CtexturesU3Ek__BackingField_4; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_U3CtexturesU3Ek__BackingField_4() { return &___U3CtexturesU3Ek__BackingField_4; }
	inline void set_U3CtexturesU3Ek__BackingField_4(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___U3CtexturesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtexturesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CpropertyNameIdsU3Ek__BackingField_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CpropertyNameIdsU3Ek__BackingField_5() const { return ___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return &___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline void set_U3CpropertyNameIdsU3Ek__BackingField_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CpropertyNameIdsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyNameIdsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexposureDurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureDurationU3Ek__BackingField_6)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CexposureDurationU3Ek__BackingField_6() const { return ___U3CexposureDurationU3Ek__BackingField_6; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CexposureDurationU3Ek__BackingField_6() { return &___U3CexposureDurationU3Ek__BackingField_6; }
	inline void set_U3CexposureDurationU3Ek__BackingField_6(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CexposureDurationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CexposureOffsetU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureOffsetU3Ek__BackingField_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CexposureOffsetU3Ek__BackingField_7() const { return ___U3CexposureOffsetU3Ek__BackingField_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CexposureOffsetU3Ek__BackingField_7() { return &___U3CexposureOffsetU3Ek__BackingField_7; }
	inline void set_U3CexposureOffsetU3Ek__BackingField_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CexposureOffsetU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CenabledMaterialKeywordsU3Ek__BackingField_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CenabledMaterialKeywordsU3Ek__BackingField_8() const { return ___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return &___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline void set_U3CenabledMaterialKeywordsU3Ek__BackingField_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CenabledMaterialKeywordsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenabledMaterialKeywordsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() const { return ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return &___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline void set_U3CdisabledMaterialKeywordsU3Ek__BackingField_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CdisabledMaterialKeywordsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisabledMaterialKeywordsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CcameraGrainTextureU3Ek__BackingField_10)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_U3CcameraGrainTextureU3Ek__BackingField_10() const { return ___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return &___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline void set_U3CcameraGrainTextureU3Ek__BackingField_10(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___U3CcameraGrainTextureU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcameraGrainTextureU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoiseIntensityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CnoiseIntensityU3Ek__BackingField_11)); }
	inline float get_U3CnoiseIntensityU3Ek__BackingField_11() const { return ___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline float* get_address_of_U3CnoiseIntensityU3Ek__BackingField_11() { return &___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline void set_U3CnoiseIntensityU3Ek__BackingField_11(float value)
	{
		___U3CnoiseIntensityU3Ek__BackingField_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_pinvoke
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_com
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct  ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};

// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct  Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// CloseAttack
struct  CloseAttack_t05EAC9E288E686E2BBBF02C9A32B1B177A24F6A1  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// UnityEngine.GameObject CloseAttack::whirlwind
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___whirlwind_4;

public:
	inline static int32_t get_offset_of_whirlwind_4() { return static_cast<int32_t>(offsetof(CloseAttack_t05EAC9E288E686E2BBBF02C9A32B1B177A24F6A1, ___whirlwind_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_whirlwind_4() const { return ___whirlwind_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_whirlwind_4() { return &___whirlwind_4; }
	inline void set_whirlwind_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___whirlwind_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___whirlwind_4), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Cooldown
struct  Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Single Cooldown::distance
	float ___distance_4;

public:
	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}
};


// UnityEngine.Light
struct  Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.LineRenderer
struct  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// RapidFire
struct  RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// System.Int32 RapidFire::projectileCounter
	int32_t ___projectileCounter_4;
	// UnityEngine.GameObject RapidFire::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_5;
	// UnityEngine.GameObject RapidFire::localProjectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___localProjectile_6;
	// UnityEngine.Vector3 RapidFire::leftToRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftToRight_7;

public:
	inline static int32_t get_offset_of_projectileCounter_4() { return static_cast<int32_t>(offsetof(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E, ___projectileCounter_4)); }
	inline int32_t get_projectileCounter_4() const { return ___projectileCounter_4; }
	inline int32_t* get_address_of_projectileCounter_4() { return &___projectileCounter_4; }
	inline void set_projectileCounter_4(int32_t value)
	{
		___projectileCounter_4 = value;
	}

	inline static int32_t get_offset_of_projectile_5() { return static_cast<int32_t>(offsetof(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E, ___projectile_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_5() const { return ___projectile_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_5() { return &___projectile_5; }
	inline void set_projectile_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_5), (void*)value);
	}

	inline static int32_t get_offset_of_localProjectile_6() { return static_cast<int32_t>(offsetof(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E, ___localProjectile_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_localProjectile_6() const { return ___localProjectile_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_localProjectile_6() { return &___localProjectile_6; }
	inline void set_localProjectile_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___localProjectile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localProjectile_6), (void*)value);
	}

	inline static int32_t get_offset_of_leftToRight_7() { return static_cast<int32_t>(offsetof(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E, ___leftToRight_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftToRight_7() const { return ___leftToRight_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftToRight_7() { return &___leftToRight_7; }
	inline void set_leftToRight_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftToRight_7 = value;
	}
};

struct RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_StaticFields
{
public:
	// System.Single RapidFire::t
	float ___t_8;

public:
	inline static int32_t get_offset_of_t_8() { return static_cast<int32_t>(offsetof(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_StaticFields, ___t_8)); }
	inline float get_t_8() const { return ___t_8; }
	inline float* get_address_of_t_8() { return &___t_8; }
	inline void set_t_8(float value)
	{
		___t_8 = value;
	}
};


// Rock
struct  Rock_t74BB0992120DB1069FB77BB5EA72A62929E24F2E  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
{
public:
	// UnityEngine.GameObject Rock::midRange
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___midRange_4;
	// System.Int32 Rock::rockCounter
	int32_t ___rockCounter_5;

public:
	inline static int32_t get_offset_of_midRange_4() { return static_cast<int32_t>(offsetof(Rock_t74BB0992120DB1069FB77BB5EA72A62929E24F2E, ___midRange_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_midRange_4() const { return ___midRange_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_midRange_4() { return &___midRange_4; }
	inline void set_midRange_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___midRange_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___midRange_4), (void*)value);
	}

	inline static int32_t get_offset_of_rockCounter_5() { return static_cast<int32_t>(offsetof(Rock_t74BB0992120DB1069FB77BB5EA72A62929E24F2E, ___rockCounter_5)); }
	inline int32_t get_rockCounter_5() const { return ___rockCounter_5; }
	inline int32_t* get_address_of_rockCounter_5() { return &___rockCounter_5; }
	inline void set_rockCounter_5(int32_t value)
	{
		___rockCounter_5 = value;
	}
};


// Testing
struct  Testing_t3B50D371AFDA44C8E9A3C7E2A891154AA6D8D784  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
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
struct  TutorialTesting_tE911681A1405860B40953E2A9DA84F2F269AEC42  : public StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F
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


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct  SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// BulletBarrage
struct  BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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


// DataHolder
struct  DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String DataHolder::monster
	String_t* ___monster_4;
	// System.String DataHolder::environment
	String_t* ___environment_5;
	// System.String[] DataHolder::items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___items_6;
	// UnityEngine.GameObject DataHolder::map
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___map_7;

public:
	inline static int32_t get_offset_of_monster_4() { return static_cast<int32_t>(offsetof(DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD, ___monster_4)); }
	inline String_t* get_monster_4() const { return ___monster_4; }
	inline String_t** get_address_of_monster_4() { return &___monster_4; }
	inline void set_monster_4(String_t* value)
	{
		___monster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monster_4), (void*)value);
	}

	inline static int32_t get_offset_of_environment_5() { return static_cast<int32_t>(offsetof(DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD, ___environment_5)); }
	inline String_t* get_environment_5() const { return ___environment_5; }
	inline String_t** get_address_of_environment_5() { return &___environment_5; }
	inline void set_environment_5(String_t* value)
	{
		___environment_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environment_5), (void*)value);
	}

	inline static int32_t get_offset_of_items_6() { return static_cast<int32_t>(offsetof(DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD, ___items_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_items_6() const { return ___items_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_items_6() { return &___items_6; }
	inline void set_items_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___items_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_6), (void*)value);
	}

	inline static int32_t get_offset_of_map_7() { return static_cast<int32_t>(offsetof(DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD, ___map_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_map_7() const { return ___map_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_map_7() { return &___map_7; }
	inline void set_map_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___map_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_7), (void*)value);
	}
};


// DataReader
struct  DataReader_t1192A7508692CF172B3561A6BC03611A1B418C47  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EdgeCollider2D
struct  EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Enemy
struct  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Enemy::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_4;
	// UnityEngine.Transform Enemy::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_5;
	// UnityEngine.GameObject Enemy::midRange
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___midRange_6;
	// UnityEngine.GameObject Enemy::CloseRange
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CloseRange_7;
	// System.Single Enemy::speed
	float ___speed_8;
	// System.Int32 Enemy::health
	int32_t ___health_9;
	// UnityEngine.UI.Slider Enemy::mSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___mSlider_10;
	// UnityEngine.GameObject Enemy::localProjectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___localProjectile_11;
	// System.Int32 Enemy::attackStat
	int32_t ___attackStat_12;
	// System.Int32 Enemy::defenceStat
	int32_t ___defenceStat_13;
	// System.Boolean Enemy::projectileCooldown
	bool ___projectileCooldown_14;
	// System.Boolean Enemy::midCooldown
	bool ___midCooldown_15;
	// System.Boolean Enemy::closeCooldown
	bool ___closeCooldown_16;
	// System.Single Enemy::distance
	float ___distance_17;

public:
	inline static int32_t get_offset_of_projectile_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___projectile_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_4() const { return ___projectile_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_4() { return &___projectile_4; }
	inline void set_projectile_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___player_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_5() const { return ___player_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_midRange_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___midRange_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_midRange_6() const { return ___midRange_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_midRange_6() { return &___midRange_6; }
	inline void set_midRange_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___midRange_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___midRange_6), (void*)value);
	}

	inline static int32_t get_offset_of_CloseRange_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___CloseRange_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CloseRange_7() const { return ___CloseRange_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CloseRange_7() { return &___CloseRange_7; }
	inline void set_CloseRange_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CloseRange_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CloseRange_7), (void*)value);
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_health_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___health_9)); }
	inline int32_t get_health_9() const { return ___health_9; }
	inline int32_t* get_address_of_health_9() { return &___health_9; }
	inline void set_health_9(int32_t value)
	{
		___health_9 = value;
	}

	inline static int32_t get_offset_of_mSlider_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___mSlider_10)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_mSlider_10() const { return ___mSlider_10; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_mSlider_10() { return &___mSlider_10; }
	inline void set_mSlider_10(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___mSlider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSlider_10), (void*)value);
	}

	inline static int32_t get_offset_of_localProjectile_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___localProjectile_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_localProjectile_11() const { return ___localProjectile_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_localProjectile_11() { return &___localProjectile_11; }
	inline void set_localProjectile_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___localProjectile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localProjectile_11), (void*)value);
	}

	inline static int32_t get_offset_of_attackStat_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___attackStat_12)); }
	inline int32_t get_attackStat_12() const { return ___attackStat_12; }
	inline int32_t* get_address_of_attackStat_12() { return &___attackStat_12; }
	inline void set_attackStat_12(int32_t value)
	{
		___attackStat_12 = value;
	}

	inline static int32_t get_offset_of_defenceStat_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___defenceStat_13)); }
	inline int32_t get_defenceStat_13() const { return ___defenceStat_13; }
	inline int32_t* get_address_of_defenceStat_13() { return &___defenceStat_13; }
	inline void set_defenceStat_13(int32_t value)
	{
		___defenceStat_13 = value;
	}

	inline static int32_t get_offset_of_projectileCooldown_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___projectileCooldown_14)); }
	inline bool get_projectileCooldown_14() const { return ___projectileCooldown_14; }
	inline bool* get_address_of_projectileCooldown_14() { return &___projectileCooldown_14; }
	inline void set_projectileCooldown_14(bool value)
	{
		___projectileCooldown_14 = value;
	}

	inline static int32_t get_offset_of_midCooldown_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___midCooldown_15)); }
	inline bool get_midCooldown_15() const { return ___midCooldown_15; }
	inline bool* get_address_of_midCooldown_15() { return &___midCooldown_15; }
	inline void set_midCooldown_15(bool value)
	{
		___midCooldown_15 = value;
	}

	inline static int32_t get_offset_of_closeCooldown_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___closeCooldown_16)); }
	inline bool get_closeCooldown_16() const { return ___closeCooldown_16; }
	inline bool* get_address_of_closeCooldown_16() { return &___closeCooldown_16; }
	inline void set_closeCooldown_16(bool value)
	{
		___closeCooldown_16 = value;
	}

	inline static int32_t get_offset_of_distance_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___distance_17)); }
	inline float get_distance_17() const { return ___distance_17; }
	inline float* get_address_of_distance_17() { return &___distance_17; }
	inline void set_distance_17(float value)
	{
		___distance_17 = value;
	}
};


// Hurricane
struct  Hurricane_t5928CC1C1F6394E6803065F16F3AF6EB92A7A64F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LightEstimation
struct  LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARCameraManager LightEstimation::arCameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___arCameraManager_4;
	// UnityEngine.UI.Text LightEstimation::brightnessValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___brightnessValue_5;
	// UnityEngine.UI.Text LightEstimation::tempValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___tempValue_6;
	// UnityEngine.UI.Text LightEstimation::colorCorrectionValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___colorCorrectionValue_7;
	// UnityEngine.Light LightEstimation::currentLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___currentLight_8;

public:
	inline static int32_t get_offset_of_arCameraManager_4() { return static_cast<int32_t>(offsetof(LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925, ___arCameraManager_4)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_arCameraManager_4() const { return ___arCameraManager_4; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_arCameraManager_4() { return &___arCameraManager_4; }
	inline void set_arCameraManager_4(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___arCameraManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arCameraManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_brightnessValue_5() { return static_cast<int32_t>(offsetof(LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925, ___brightnessValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_brightnessValue_5() const { return ___brightnessValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_brightnessValue_5() { return &___brightnessValue_5; }
	inline void set_brightnessValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___brightnessValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brightnessValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_tempValue_6() { return static_cast<int32_t>(offsetof(LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925, ___tempValue_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_tempValue_6() const { return ___tempValue_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_tempValue_6() { return &___tempValue_6; }
	inline void set_tempValue_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___tempValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_colorCorrectionValue_7() { return static_cast<int32_t>(offsetof(LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925, ___colorCorrectionValue_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_colorCorrectionValue_7() const { return ___colorCorrectionValue_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_colorCorrectionValue_7() { return &___colorCorrectionValue_7; }
	inline void set_colorCorrectionValue_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___colorCorrectionValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorCorrectionValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_currentLight_8() { return static_cast<int32_t>(offsetof(LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925, ___currentLight_8)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_currentLight_8() const { return ___currentLight_8; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_currentLight_8() { return &___currentLight_8; }
	inline void set_currentLight_8(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___currentLight_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLight_8), (void*)value);
	}
};


// MapRegenerator
struct  MapRegenerator_t94694D9787D0B7337A47D507A0800DC9B9B38ECE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MapScript
struct  MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MapScript::Nest
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Nest_4;
	// UnityEngine.GameObject MapScript::LocalNest
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LocalNest_5;
	// System.String[][][] MapScript::environments
	StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* ___environments_6;
	// System.Collections.Generic.List`1<System.Int32> MapScript::monsterOdds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___monsterOdds_7;
	// System.Int32 MapScript::selectedMonsterOdd
	int32_t ___selectedMonsterOdd_8;
	// System.Int32[] MapScript::environmentOdds
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___environmentOdds_9;
	// System.Int32 MapScript::selectedEnvironmentOdd
	int32_t ___selectedEnvironmentOdd_10;
	// System.Single MapScript::nestCount
	float ___nestCount_11;
	// System.Collections.Generic.List`1<System.String> MapScript::monsterList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___monsterList_12;
	// System.Collections.Generic.List`1<System.Int32> MapScript::usedMonsterOdds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___usedMonsterOdds_13;
	// System.Single MapScript::difficulty
	float ___difficulty_14;
	// System.Int32 MapScript::roundedNestCount
	int32_t ___roundedNestCount_15;
	// System.Single MapScript::notRoundedDistance
	float ___notRoundedDistance_16;
	// System.Collections.Generic.List`1<System.Int32> MapScript::distances
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___distances_17;
	// UnityEngine.Vector3 MapScript::oldDistance
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldDistance_18;
	// System.Int32 MapScript::counter
	int32_t ___counter_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapScript::nestList
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___nestList_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapScript::hasBranch
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hasBranch_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapScript::isBranch
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___isBranch_22;
	// UnityEngine.GameObject MapScript::randomNest
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___randomNest_23;
	// System.Int32 MapScript::branchCounter
	int32_t ___branchCounter_24;
	// System.Single MapScript::branchTotal
	float ___branchTotal_25;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MapScript::placedNests
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___placedNests_26;
	// UnityEngine.Vector3 MapScript::test
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___test_27;
	// System.Single MapScript::rangeMultiplyer
	float ___rangeMultiplyer_28;
	// System.Int32 MapScript::randomSide
	int32_t ___randomSide_29;
	// UnityEngine.GameObject MapScript::oldNest
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___oldNest_30;
	// UnityEngine.GameObject MapScript::tempOldNest
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tempOldNest_31;

public:
	inline static int32_t get_offset_of_Nest_4() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___Nest_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Nest_4() const { return ___Nest_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Nest_4() { return &___Nest_4; }
	inline void set_Nest_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Nest_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Nest_4), (void*)value);
	}

	inline static int32_t get_offset_of_LocalNest_5() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___LocalNest_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LocalNest_5() const { return ___LocalNest_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LocalNest_5() { return &___LocalNest_5; }
	inline void set_LocalNest_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LocalNest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalNest_5), (void*)value);
	}

	inline static int32_t get_offset_of_environments_6() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___environments_6)); }
	inline StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* get_environments_6() const { return ___environments_6; }
	inline StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354** get_address_of_environments_6() { return &___environments_6; }
	inline void set_environments_6(StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* value)
	{
		___environments_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environments_6), (void*)value);
	}

	inline static int32_t get_offset_of_monsterOdds_7() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___monsterOdds_7)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_monsterOdds_7() const { return ___monsterOdds_7; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_monsterOdds_7() { return &___monsterOdds_7; }
	inline void set_monsterOdds_7(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___monsterOdds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterOdds_7), (void*)value);
	}

	inline static int32_t get_offset_of_selectedMonsterOdd_8() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___selectedMonsterOdd_8)); }
	inline int32_t get_selectedMonsterOdd_8() const { return ___selectedMonsterOdd_8; }
	inline int32_t* get_address_of_selectedMonsterOdd_8() { return &___selectedMonsterOdd_8; }
	inline void set_selectedMonsterOdd_8(int32_t value)
	{
		___selectedMonsterOdd_8 = value;
	}

	inline static int32_t get_offset_of_environmentOdds_9() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___environmentOdds_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_environmentOdds_9() const { return ___environmentOdds_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_environmentOdds_9() { return &___environmentOdds_9; }
	inline void set_environmentOdds_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___environmentOdds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environmentOdds_9), (void*)value);
	}

	inline static int32_t get_offset_of_selectedEnvironmentOdd_10() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___selectedEnvironmentOdd_10)); }
	inline int32_t get_selectedEnvironmentOdd_10() const { return ___selectedEnvironmentOdd_10; }
	inline int32_t* get_address_of_selectedEnvironmentOdd_10() { return &___selectedEnvironmentOdd_10; }
	inline void set_selectedEnvironmentOdd_10(int32_t value)
	{
		___selectedEnvironmentOdd_10 = value;
	}

	inline static int32_t get_offset_of_nestCount_11() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___nestCount_11)); }
	inline float get_nestCount_11() const { return ___nestCount_11; }
	inline float* get_address_of_nestCount_11() { return &___nestCount_11; }
	inline void set_nestCount_11(float value)
	{
		___nestCount_11 = value;
	}

	inline static int32_t get_offset_of_monsterList_12() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___monsterList_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_monsterList_12() const { return ___monsterList_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_monsterList_12() { return &___monsterList_12; }
	inline void set_monsterList_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___monsterList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterList_12), (void*)value);
	}

	inline static int32_t get_offset_of_usedMonsterOdds_13() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___usedMonsterOdds_13)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_usedMonsterOdds_13() const { return ___usedMonsterOdds_13; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_usedMonsterOdds_13() { return &___usedMonsterOdds_13; }
	inline void set_usedMonsterOdds_13(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___usedMonsterOdds_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMonsterOdds_13), (void*)value);
	}

	inline static int32_t get_offset_of_difficulty_14() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___difficulty_14)); }
	inline float get_difficulty_14() const { return ___difficulty_14; }
	inline float* get_address_of_difficulty_14() { return &___difficulty_14; }
	inline void set_difficulty_14(float value)
	{
		___difficulty_14 = value;
	}

	inline static int32_t get_offset_of_roundedNestCount_15() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___roundedNestCount_15)); }
	inline int32_t get_roundedNestCount_15() const { return ___roundedNestCount_15; }
	inline int32_t* get_address_of_roundedNestCount_15() { return &___roundedNestCount_15; }
	inline void set_roundedNestCount_15(int32_t value)
	{
		___roundedNestCount_15 = value;
	}

	inline static int32_t get_offset_of_notRoundedDistance_16() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___notRoundedDistance_16)); }
	inline float get_notRoundedDistance_16() const { return ___notRoundedDistance_16; }
	inline float* get_address_of_notRoundedDistance_16() { return &___notRoundedDistance_16; }
	inline void set_notRoundedDistance_16(float value)
	{
		___notRoundedDistance_16 = value;
	}

	inline static int32_t get_offset_of_distances_17() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___distances_17)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_distances_17() const { return ___distances_17; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_distances_17() { return &___distances_17; }
	inline void set_distances_17(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___distances_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distances_17), (void*)value);
	}

	inline static int32_t get_offset_of_oldDistance_18() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___oldDistance_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldDistance_18() const { return ___oldDistance_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldDistance_18() { return &___oldDistance_18; }
	inline void set_oldDistance_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldDistance_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___counter_19)); }
	inline int32_t get_counter_19() const { return ___counter_19; }
	inline int32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(int32_t value)
	{
		___counter_19 = value;
	}

	inline static int32_t get_offset_of_nestList_20() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___nestList_20)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_nestList_20() const { return ___nestList_20; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_nestList_20() { return &___nestList_20; }
	inline void set_nestList_20(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___nestList_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nestList_20), (void*)value);
	}

	inline static int32_t get_offset_of_hasBranch_21() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___hasBranch_21)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hasBranch_21() const { return ___hasBranch_21; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hasBranch_21() { return &___hasBranch_21; }
	inline void set_hasBranch_21(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hasBranch_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hasBranch_21), (void*)value);
	}

	inline static int32_t get_offset_of_isBranch_22() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___isBranch_22)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_isBranch_22() const { return ___isBranch_22; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_isBranch_22() { return &___isBranch_22; }
	inline void set_isBranch_22(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___isBranch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isBranch_22), (void*)value);
	}

	inline static int32_t get_offset_of_randomNest_23() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___randomNest_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_randomNest_23() const { return ___randomNest_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_randomNest_23() { return &___randomNest_23; }
	inline void set_randomNest_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___randomNest_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___randomNest_23), (void*)value);
	}

	inline static int32_t get_offset_of_branchCounter_24() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___branchCounter_24)); }
	inline int32_t get_branchCounter_24() const { return ___branchCounter_24; }
	inline int32_t* get_address_of_branchCounter_24() { return &___branchCounter_24; }
	inline void set_branchCounter_24(int32_t value)
	{
		___branchCounter_24 = value;
	}

	inline static int32_t get_offset_of_branchTotal_25() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___branchTotal_25)); }
	inline float get_branchTotal_25() const { return ___branchTotal_25; }
	inline float* get_address_of_branchTotal_25() { return &___branchTotal_25; }
	inline void set_branchTotal_25(float value)
	{
		___branchTotal_25 = value;
	}

	inline static int32_t get_offset_of_placedNests_26() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___placedNests_26)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_placedNests_26() const { return ___placedNests_26; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_placedNests_26() { return &___placedNests_26; }
	inline void set_placedNests_26(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___placedNests_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placedNests_26), (void*)value);
	}

	inline static int32_t get_offset_of_test_27() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___test_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_test_27() const { return ___test_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_test_27() { return &___test_27; }
	inline void set_test_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___test_27 = value;
	}

	inline static int32_t get_offset_of_rangeMultiplyer_28() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___rangeMultiplyer_28)); }
	inline float get_rangeMultiplyer_28() const { return ___rangeMultiplyer_28; }
	inline float* get_address_of_rangeMultiplyer_28() { return &___rangeMultiplyer_28; }
	inline void set_rangeMultiplyer_28(float value)
	{
		___rangeMultiplyer_28 = value;
	}

	inline static int32_t get_offset_of_randomSide_29() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___randomSide_29)); }
	inline int32_t get_randomSide_29() const { return ___randomSide_29; }
	inline int32_t* get_address_of_randomSide_29() { return &___randomSide_29; }
	inline void set_randomSide_29(int32_t value)
	{
		___randomSide_29 = value;
	}

	inline static int32_t get_offset_of_oldNest_30() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___oldNest_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_oldNest_30() const { return ___oldNest_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_oldNest_30() { return &___oldNest_30; }
	inline void set_oldNest_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___oldNest_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldNest_30), (void*)value);
	}

	inline static int32_t get_offset_of_tempOldNest_31() { return static_cast<int32_t>(offsetof(MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD, ___tempOldNest_31)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tempOldNest_31() const { return ___tempOldNest_31; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tempOldNest_31() { return &___tempOldNest_31; }
	inline void set_tempOldNest_31(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tempOldNest_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempOldNest_31), (void*)value);
	}
};


// MoveScenes
struct  MoveScenes_t757DBF243D1177806463417C842AF5884F8C7C17  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// NestNavigator
struct  NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject NestNavigator::DataHolder
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DataHolder_4;
	// UnityEngine.GameObject NestNavigator::currentNest
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentNest_5;
	// UnityEngine.GameObject NestNavigator::nextNest
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nextNest_6;
	// System.Single NestNavigator::currentDistance
	float ___currentDistance_7;
	// System.Single NestNavigator::maxDistance
	float ___maxDistance_8;
	// UnityEngine.UI.Text NestNavigator::distanceText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___distanceText_9;
	// UnityEngine.UI.Text NestNavigator::goalText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___goalText_10;
	// DataHolder NestNavigator::localDataHolder
	DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * ___localDataHolder_11;
	// NestScript NestNavigator::localNestScript
	NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * ___localNestScript_12;
	// System.String NestNavigator::environment
	String_t* ___environment_13;

public:
	inline static int32_t get_offset_of_DataHolder_4() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___DataHolder_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DataHolder_4() const { return ___DataHolder_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DataHolder_4() { return &___DataHolder_4; }
	inline void set_DataHolder_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DataHolder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataHolder_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentNest_5() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___currentNest_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentNest_5() const { return ___currentNest_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentNest_5() { return &___currentNest_5; }
	inline void set_currentNest_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentNest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentNest_5), (void*)value);
	}

	inline static int32_t get_offset_of_nextNest_6() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___nextNest_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nextNest_6() const { return ___nextNest_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nextNest_6() { return &___nextNest_6; }
	inline void set_nextNest_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nextNest_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNest_6), (void*)value);
	}

	inline static int32_t get_offset_of_currentDistance_7() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___currentDistance_7)); }
	inline float get_currentDistance_7() const { return ___currentDistance_7; }
	inline float* get_address_of_currentDistance_7() { return &___currentDistance_7; }
	inline void set_currentDistance_7(float value)
	{
		___currentDistance_7 = value;
	}

	inline static int32_t get_offset_of_maxDistance_8() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___maxDistance_8)); }
	inline float get_maxDistance_8() const { return ___maxDistance_8; }
	inline float* get_address_of_maxDistance_8() { return &___maxDistance_8; }
	inline void set_maxDistance_8(float value)
	{
		___maxDistance_8 = value;
	}

	inline static int32_t get_offset_of_distanceText_9() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___distanceText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_distanceText_9() const { return ___distanceText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_distanceText_9() { return &___distanceText_9; }
	inline void set_distanceText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___distanceText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distanceText_9), (void*)value);
	}

	inline static int32_t get_offset_of_goalText_10() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___goalText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_goalText_10() const { return ___goalText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_goalText_10() { return &___goalText_10; }
	inline void set_goalText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___goalText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goalText_10), (void*)value);
	}

	inline static int32_t get_offset_of_localDataHolder_11() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___localDataHolder_11)); }
	inline DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * get_localDataHolder_11() const { return ___localDataHolder_11; }
	inline DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD ** get_address_of_localDataHolder_11() { return &___localDataHolder_11; }
	inline void set_localDataHolder_11(DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * value)
	{
		___localDataHolder_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localDataHolder_11), (void*)value);
	}

	inline static int32_t get_offset_of_localNestScript_12() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___localNestScript_12)); }
	inline NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * get_localNestScript_12() const { return ___localNestScript_12; }
	inline NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 ** get_address_of_localNestScript_12() { return &___localNestScript_12; }
	inline void set_localNestScript_12(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * value)
	{
		___localNestScript_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localNestScript_12), (void*)value);
	}

	inline static int32_t get_offset_of_environment_13() { return static_cast<int32_t>(offsetof(NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A, ___environment_13)); }
	inline String_t* get_environment_13() const { return ___environment_13; }
	inline String_t** get_address_of_environment_13() { return &___environment_13; }
	inline void set_environment_13(String_t* value)
	{
		___environment_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environment_13), (void*)value);
	}
};


// NestScript
struct  NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String NestScript::Monster
	String_t* ___Monster_4;
	// System.Int32 NestScript::maxDistance
	int32_t ___maxDistance_5;
	// UnityEngine.Vector3 NestScript::oldPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldPos_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> NestScript::linePoints
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___linePoints_7;
	// System.Int32 NestScript::order
	int32_t ___order_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NestScript::nextNest
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___nextNest_9;
	// System.Boolean NestScript::hasFought
	bool ___hasFought_10;

public:
	inline static int32_t get_offset_of_Monster_4() { return static_cast<int32_t>(offsetof(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435, ___Monster_4)); }
	inline String_t* get_Monster_4() const { return ___Monster_4; }
	inline String_t** get_address_of_Monster_4() { return &___Monster_4; }
	inline void set_Monster_4(String_t* value)
	{
		___Monster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Monster_4), (void*)value);
	}

	inline static int32_t get_offset_of_maxDistance_5() { return static_cast<int32_t>(offsetof(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435, ___maxDistance_5)); }
	inline int32_t get_maxDistance_5() const { return ___maxDistance_5; }
	inline int32_t* get_address_of_maxDistance_5() { return &___maxDistance_5; }
	inline void set_maxDistance_5(int32_t value)
	{
		___maxDistance_5 = value;
	}

	inline static int32_t get_offset_of_oldPos_6() { return static_cast<int32_t>(offsetof(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435, ___oldPos_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldPos_6() const { return ___oldPos_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldPos_6() { return &___oldPos_6; }
	inline void set_oldPos_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldPos_6 = value;
	}

	inline static int32_t get_offset_of_linePoints_7() { return static_cast<int32_t>(offsetof(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435, ___linePoints_7)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_linePoints_7() const { return ___linePoints_7; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_linePoints_7() { return &___linePoints_7; }
	inline void set_linePoints_7(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___linePoints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linePoints_7), (void*)value);
	}

	inline static int32_t get_offset_of_order_8() { return static_cast<int32_t>(offsetof(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435, ___order_8)); }
	inline int32_t get_order_8() const { return ___order_8; }
	inline int32_t* get_address_of_order_8() { return &___order_8; }
	inline void set_order_8(int32_t value)
	{
		___order_8 = value;
	}

	inline static int32_t get_offset_of_nextNest_9() { return static_cast<int32_t>(offsetof(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435, ___nextNest_9)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_nextNest_9() const { return ___nextNest_9; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_nextNest_9() { return &___nextNest_9; }
	inline void set_nextNest_9(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___nextNest_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextNest_9), (void*)value);
	}

	inline static int32_t get_offset_of_hasFought_10() { return static_cast<int32_t>(offsetof(NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435, ___hasFought_10)); }
	inline bool get_hasFought_10() const { return ___hasFought_10; }
	inline bool* get_address_of_hasFought_10() { return &___hasFought_10; }
	inline void set_hasFought_10(bool value)
	{
		___hasFought_10 = value;
	}
};


// NewBehaviourScript
struct  NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerScript
struct  PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PlayerScript::health
	int32_t ___health_4;
	// UnityEngine.UI.Slider PlayerScript::mSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___mSlider_5;
	// UnityEngine.GameObject PlayerScript::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_6;
	// System.Int32 PlayerScript::attackStat
	int32_t ___attackStat_7;
	// System.Int32 PlayerScript::defenceStat
	int32_t ___defenceStat_8;
	// UnityEngine.GameObject PlayerScript::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_9;
	// System.Boolean PlayerScript::coolDown
	bool ___coolDown_10;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_mSlider_5() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___mSlider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_mSlider_5() const { return ___mSlider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_mSlider_5() { return &___mSlider_5; }
	inline void set_mSlider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___mSlider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSlider_5), (void*)value);
	}

	inline static int32_t get_offset_of_projectile_6() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___projectile_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_6() const { return ___projectile_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_6() { return &___projectile_6; }
	inline void set_projectile_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_6), (void*)value);
	}

	inline static int32_t get_offset_of_attackStat_7() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___attackStat_7)); }
	inline int32_t get_attackStat_7() const { return ___attackStat_7; }
	inline int32_t* get_address_of_attackStat_7() { return &___attackStat_7; }
	inline void set_attackStat_7(int32_t value)
	{
		___attackStat_7 = value;
	}

	inline static int32_t get_offset_of_defenceStat_8() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___defenceStat_8)); }
	inline int32_t get_defenceStat_8() const { return ___defenceStat_8; }
	inline int32_t* get_address_of_defenceStat_8() { return &___defenceStat_8; }
	inline void set_defenceStat_8(int32_t value)
	{
		___defenceStat_8 = value;
	}

	inline static int32_t get_offset_of_bullet_9() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___bullet_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_9() const { return ___bullet_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_9() { return &___bullet_9; }
	inline void set_bullet_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_9), (void*)value);
	}

	inline static int32_t get_offset_of_coolDown_10() { return static_cast<int32_t>(offsetof(PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805, ___coolDown_10)); }
	inline bool get_coolDown_10() const { return ___coolDown_10; }
	inline bool* get_address_of_coolDown_10() { return &___coolDown_10; }
	inline void set_coolDown_10(bool value)
	{
		___coolDown_10 = value;
	}
};


// ProjectileBarrage
struct  ProjectileBarrage_t56E930F83EE69ACB84D41B2F78C2921FAFE6C61F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ProjectileScript
struct  ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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
};


// SliderValueToText
struct  SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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


// StateMachine
struct  StateMachine_t823E5CFDC9E27E10A2C57DB9303909CA2D8BC49A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Whirlwind
struct  Whirlwind_tA828026CF25F25325B4B2392543DE60675579401  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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


// UnityEngine.XR.ARFoundation.ARCameraManager
struct  ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874  : public SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C
{
public:
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_CameraGrainInfo_18;

public:
	inline static int32_t get_offset_of_m_FocusMode_7() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FocusMode_7)); }
	inline int32_t get_m_FocusMode_7() const { return ___m_FocusMode_7; }
	inline int32_t* get_address_of_m_FocusMode_7() { return &___m_FocusMode_7; }
	inline void set_m_FocusMode_7(int32_t value)
	{
		___m_FocusMode_7 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimationMode_8() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimationMode_8)); }
	inline int32_t get_m_LightEstimationMode_8() const { return ___m_LightEstimationMode_8; }
	inline int32_t* get_address_of_m_LightEstimationMode_8() { return &___m_LightEstimationMode_8; }
	inline void set_m_LightEstimationMode_8(int32_t value)
	{
		___m_LightEstimationMode_8 = value;
	}

	inline static int32_t get_offset_of_m_AutoFocus_9() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_AutoFocus_9)); }
	inline bool get_m_AutoFocus_9() const { return ___m_AutoFocus_9; }
	inline bool* get_address_of_m_AutoFocus_9() { return &___m_AutoFocus_9; }
	inline void set_m_AutoFocus_9(bool value)
	{
		___m_AutoFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimation_10() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimation_10)); }
	inline int32_t get_m_LightEstimation_10() const { return ___m_LightEstimation_10; }
	inline int32_t* get_address_of_m_LightEstimation_10() { return &___m_LightEstimation_10; }
	inline void set_m_LightEstimation_10(int32_t value)
	{
		___m_LightEstimation_10 = value;
	}

	inline static int32_t get_offset_of_m_FacingDirection_11() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FacingDirection_11)); }
	inline int32_t get_m_FacingDirection_11() const { return ___m_FacingDirection_11; }
	inline int32_t* get_address_of_m_FacingDirection_11() { return &___m_FacingDirection_11; }
	inline void set_m_FacingDirection_11(int32_t value)
	{
		___m_FacingDirection_11 = value;
	}

	inline static int32_t get_offset_of_frameReceived_12() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___frameReceived_12)); }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * get_frameReceived_12() const { return ___frameReceived_12; }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 ** get_address_of_frameReceived_12() { return &___frameReceived_12; }
	inline void set_frameReceived_12(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * value)
	{
		___frameReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextureInfos_15() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_TextureInfos_15)); }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * get_m_TextureInfos_15() const { return ___m_TextureInfos_15; }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A ** get_address_of_m_TextureInfos_15() { return &___m_TextureInfos_15; }
	inline void set_m_TextureInfos_15(List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * value)
	{
		___m_TextureInfos_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureInfos_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_16() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_Camera_16)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_16() const { return ___m_Camera_16; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_16() { return &___m_Camera_16; }
	inline void set_m_Camera_16(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreRenderInvertCullingValue_17() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_PreRenderInvertCullingValue_17)); }
	inline bool get_m_PreRenderInvertCullingValue_17() const { return ___m_PreRenderInvertCullingValue_17; }
	inline bool* get_address_of_m_PreRenderInvertCullingValue_17() { return &___m_PreRenderInvertCullingValue_17; }
	inline void set_m_PreRenderInvertCullingValue_17(bool value)
	{
		___m_PreRenderInvertCullingValue_17 = value;
	}

	inline static int32_t get_offset_of_m_CameraGrainInfo_18() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_CameraGrainInfo_18)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_CameraGrainInfo_18() const { return ___m_CameraGrainInfo_18; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_CameraGrainInfo_18() { return &___m_CameraGrainInfo_18; }
	inline void set_m_CameraGrainInfo_18(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_CameraGrainInfo_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CameraGrainInfo_18))->___m_Texture_2), (void*)NULL);
	}
};

struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___s_PropertyIds_14;

public:
	inline static int32_t get_offset_of_s_Textures_13() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_Textures_13)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_s_Textures_13() const { return ___s_Textures_13; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_s_Textures_13() { return &___s_Textures_13; }
	inline void set_s_Textures_13(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___s_Textures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Textures_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_PropertyIds_14() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_PropertyIds_14)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_s_PropertyIds_14() const { return ___s_PropertyIds_14; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_s_PropertyIds_14() { return &___s_PropertyIds_14; }
	inline void set_s_PropertyIds_14(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___s_PropertyIds_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PropertyIds_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
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


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.String[][]
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* m_Items[1];

public:
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[][][]
struct StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* m_Items[1];

public:
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_RotateTowards_mCE2B2820B2483A44056A74E9C2C22359ED7D1AD5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxRadiansDelta2, float ___maxMagnitudeDelta3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
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
// System.Collections.IEnumerator BulletBarrage::Cooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BulletBarrage_Cooldown_m141747D4E6DA5EC70B3D76D3688F22A51EE23BB5 (BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void BulletBarrage/<Cooldown>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownU3Ed__7__ctor_m6F1A4E6856C44F9445D5CEB23F655F358BB8CC25 (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0 (StateMachineBehaviour_tBEDE439261DEB4C7334646339BC6F1E7958F095F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DataHolder>()
inline DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ProjectileScript>()
inline ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16 (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::get_lightEstimation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline (ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageBrightness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ARLightEstimationData_get_averageBrightness_m7BCFDB0BE6EE1B92029CE7360F6D9FA4CC19591A (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageColorTemperature()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_colorTemperature(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_colorTemperature_m058BA7D83D5E42A95242137F23013E95EB13398B (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_colorCorrection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<NestScript>()
inline NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<NestNavigator>()
inline NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A * GameObject_GetComponent_TisNestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A_m1C64A33AA05AD353AFADC08958463AC84FBBD282 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void MapScript::GetUnusedNest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript_GetUnusedNest_mAF77824CDFBCE1B47F06D43908D1CEB000538E32 (MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(!0)
inline int32_t List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Void MapScript::GetUnnocupiedSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript_GetUnnocupiedSpace_mF46B64C7425440D2910DE8705D352E4094E7765C (MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(!0)
inline bool List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_m91A4627AE9C1216CE037B24175384B6345976625 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EdgeCollider2D>()
inline EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
inline void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.EdgeCollider2D::SetPoints(System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EdgeCollider2D_SetPoints_m37264300BDB15057DF2B47137E1D37B2D18B5888 (EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * __this, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___points0, const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerScript::BulletCool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerScript_BulletCool_m41E59D262C8A98E4EED112D7F0BBC393A79052E0 (PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * __this, const RuntimeMethod* method);
// System.Void PlayerScript/<BulletCool>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__9__ctor_m34BA04A5384F38BF4EA3336827239FFE77F75167 (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator ProjectileScript::DestroyCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectileScript_DestroyCount_m9D3A6F8B1E999D575CFC46377F903A339B784694 (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, const RuntimeMethod* method);
// System.Void ProjectileScript::DamageCalc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileScript_DamageCalc_m7524C277B145F29050F7A30AA25A51A5F1A59B0F (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void ProjectileScript/<DestroyCount>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyCountU3Ed__9__ctor_mE2BC5C56F6025A5DC471CF5421F69460B854B874 (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<PlayerScript>()
inline PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * GameObject_GetComponent_TisPlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805_m05BCDC531AA2C8218E6062A4D7A23A0977EA2397 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void SliderValueToText::ShowSliderValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValueToText_ShowSliderValue_mD42B3420B75F215F92859A4D57A9B08E9C554AE3 (SliderValueToText_t1A164AE106CD82B96D33CE81B2BC45BE561B9AEB * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Whirlwind::Ded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Whirlwind_Ded_m266D17E0C633CDD774770CD0FD060026E0B5832F (Whirlwind_tA828026CF25F25325B4B2392543DE60675579401 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Whirlwind/<Ded>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDedU3Ed__3__ctor_mA18D38945839978CAD7379C830896D4F8EA290BA (U3CDedU3Ed__3_t9117CE6E1BC07F537CCA5E94F6B8DD542D21D700 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void BulletBarrage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBarrage_Start_m4A8D9D9ED2BEE8C672F8281354EC1E8F0AA34677 (BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BulletBarrage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBarrage_Update_m13E93F7FEA6B46E98C5E8383294D83DA6A59B87D (BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 playerDirection = player.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_player_8();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// float singleStep = speed * Time.deltaTime;
		float L_5 = __this->get_speed_7();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		// Vector3 newDirection = Vector3.RotateTowards(this.transform.forward, playerDirection, singleStep, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_RotateTowards_mCE2B2820B2483A44056A74E9C2C22359ED7D1AD5(L_8, L_9, L_10, (0.0f), /*hidden argument*/NULL);
		V_2 = L_11;
		// Debug.DrawRay(transform.position, newDirection, Color.red);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_13, L_14, L_15, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.LookRotation(newDirection);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_18, /*hidden argument*/NULL);
		// if (projectileCooldown == false)
		bool L_19 = __this->get_projectileCooldown_4();
		if (L_19)
		{
			goto IL_00bc;
		}
	}
	{
		// localProjectile = Instantiate(projectile, this.transform.position, Quaternion.LookRotation(playerDirection));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_projectile_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_20, L_22, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_localProjectile_5(L_25);
		// localProjectile.GetComponent<ProjectileScript>().Origin = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_localProjectile_5();
		NullCheck(L_26);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_27;
		L_27 = GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08(L_26, /*hidden argument*/GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_Origin_8(L_28);
		// projectileCooldown = true;
		__this->set_projectileCooldown_4((bool)1);
		// StartCoroutine(Cooldown());
		RuntimeObject* L_29;
		L_29 = BulletBarrage_Cooldown_m141747D4E6DA5EC70B3D76D3688F22A51EE23BB5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_30;
		L_30 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_29, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BulletBarrage::Cooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BulletBarrage_Cooldown_m141747D4E6DA5EC70B3D76D3688F22A51EE23BB5 (BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * L_0 = (U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF *)il2cpp_codegen_object_new(U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF_il2cpp_TypeInfo_var);
		U3CCooldownU3Ed__7__ctor_m6F1A4E6856C44F9445D5CEB23F655F358BB8CC25(L_0, 0, /*hidden argument*/NULL);
		U3CCooldownU3Ed__7_t11F84D4352BF4A6FC76A2D206E45249C2CF51FEF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void BulletBarrage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBarrage__ctor_mA565A4745785F6DFF8C3311F37804B755BDC6DD4 (BulletBarrage_tDDFA57A04E91A7216CFB00BF0C290B879DBB1CA8 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1;
		__this->set_speed_7((1.0f));
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
// System.Void CloseAttack::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseAttack_OnStateEnter_mD9C1D7B6FAA5D963114041E18F989993FDDA4775 (CloseAttack_t05EAC9E288E686E2BBBF02C9A32B1B177A24F6A1 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(whirlwind, animator.transform, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_whirlwind_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___animator0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7(L_0, L_2, (bool)0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		// animator.SetInteger("SpecialMeter", animator.GetInteger("SpecialMeter") + 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = ___animator0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = ___animator0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A(L_5, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, /*hidden argument*/NULL);
		NullCheck(L_4);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_4, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CloseAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseAttack__ctor_m0AE427D253FBE78AEF74B26D217A1038155CDC90 (CloseAttack_t05EAC9E288E686E2BBBF02C9A32B1B177A24F6A1 * __this, const RuntimeMethod* method)
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
// System.Void Cooldown::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cooldown_OnStateEnter_m1F99D47944EC0D2AD5050F7211BDA6678342A33F (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BEC8DE1AAB9286ECCEF19043BF8763ADC775B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("CoolingDown", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___animator0;
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D, (bool)0, /*hidden argument*/NULL);
		// distance = (Vector3.Distance(animator.transform.position, GameObject.FindGameObjectWithTag("MainCamera").transform.position));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = ___animator0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_3, L_6, /*hidden argument*/NULL);
		__this->set_distance_4(L_7);
		// animator.SetFloat("PlayerDistance", distance);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = ___animator0;
		float L_9 = __this->get_distance_4();
		NullCheck(L_8);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_8, _stringLiteral28BEC8DE1AAB9286ECCEF19043BF8763ADC775B8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Cooldown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cooldown__ctor_m5CE9E394E0AB1F61F6EACFF8367E67782BF5AD93 (Cooldown_t8D1F0A9F88D10717C3E5C41C2B00F81E3DBB5E50 * __this, const RuntimeMethod* method)
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
// System.Void DataHolder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHolder_Start_m2F6A1410AEC0753A4150E7F8509D6740B2CBEC09 (DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// map = GameObject.FindGameObjectWithTag("Map");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, /*hidden argument*/NULL);
		__this->set_map_7(L_0);
		// DontDestroyOnLoad(transform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DataHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHolder__ctor_m23EB731F00EAC4C566B6ED9FE00D6CFAE5F483AA (DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * __this, const RuntimeMethod* method)
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
// System.Void DataReader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader_Start_m234782DE2EC9087D225A493AB2D8CB0370D60AB7 (DataReader_t1192A7508692CF172B3561A6BC03611A1B418C47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F99866DBA2A71261CA704F7B093E2EF8A7D2CB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA4D74D40CC3AE370D0008F34B380F1F9CF8401);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.FindGameObjectWithTag("DataHolder").GetComponent<DataHolder>().monster.Contains("e"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral8F99866DBA2A71261CA704F7B093E2EF8A7D2CB8, /*hidden argument*/NULL);
		NullCheck(L_0);
		DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * L_1;
		L_1 = GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6(L_0, /*hidden argument*/GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2 = L_1->get_monster_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Instantiate(Resources.Load("Foe"));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralDEA4D74D40CC3AE370D0008F34B380F1F9CF8401, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5;
		L_5 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0031:
	{
		// Instantiate(Resources.Load("Opponent"));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
		L_6 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7;
		L_7 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DataReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader__ctor_mE49759CBFCB70B40B7C4A7677C7E8AB766A06B0B (DataReader_t1192A7508692CF172B3561A6BC03611A1B418C47 * __this, const RuntimeMethod* method)
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("MainCamera").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_player_5(L_1);
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter_mC91FFDE471C63A39A97C086223C815D9085CA6D8 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22D70741408FE588C0AE79FABB5468EB2052126F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FEA076C6150CCD48E549D93671DB681EE9A10E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB682445EC2B55A6208C429191DF2B9152A8FBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "ProjectileB")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral22D70741408FE588C0AE79FABB5468EB2052126F, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// health -= Mathf.FloorToInt(collision.GetComponent<ProjectileScript>().totalDamage);
		int32_t L_3 = __this->get_health_9();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___collision0;
		NullCheck(L_4);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_5;
		L_5 = Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B(L_4, /*hidden argument*/Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6 = L_5->get_totalDamage_7();
		int32_t L_7;
		L_7 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_6, /*hidden argument*/NULL);
		__this->set_health_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_7)));
	}

IL_002f:
	{
		// if(health <= 0)
		int32_t L_8 = __this->get_health_9();
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// print("You Win!!");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral3FEA076C6150CCD48E549D93671DB681EE9A10E0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("NestMapless");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral6EB682445EC2B55A6208C429191DF2B9152A8FBD, /*hidden argument*/NULL);
		// GameObject.FindGameObjectWithTag("Map").SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// distance = (Vector3.Distance(gameObject.transform.position, GameObject.FindGameObjectWithTag("MainCamera").transform.position));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_5, /*hidden argument*/NULL);
		__this->set_distance_17(L_6);
		// mSlider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_7 = __this->get_mSlider_10();
		int32_t L_8 = __this->get_health_9();
		NullCheck(L_7);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_7, ((float)((float)L_8)));
		// Vector3 playerDirection = player.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_player_5();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// float singleStep = speed * Time.deltaTime;
		float L_14 = __this->get_speed_8();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15));
		// Vector3 newDirection = Vector3.RotateTowards(this.transform.forward, playerDirection, singleStep, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		float L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_RotateTowards_mCE2B2820B2483A44056A74E9C2C22359ED7D1AD5(L_17, L_18, L_19, (0.0f), /*hidden argument*/NULL);
		V_2 = L_20;
		// Debug.DrawRay(transform.position, newDirection, Color.red);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_22, L_23, L_24, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.LookRotation(newDirection);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_25, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1;
		__this->set_speed_8((1.0f));
		// public int health = 500;
		__this->set_health_9(((int32_t)500));
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
// System.Void Hurricane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hurricane_Start_m9AB5F6DE612FA1FA123CB8A6DE4E399582C6DE60 (Hurricane_t5928CC1C1F6394E6803065F16F3AF6EB92A7A64F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Hurricane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hurricane_Update_m2FDB4A94BE80FA6AD3DA997FF441923A72854926 (Hurricane_t5928CC1C1F6394E6803065F16F3AF6EB92A7A64F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Hurricane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hurricane__ctor_mE70DF02038A39B67D5423566A3E9F9472B27FB8B (Hurricane_t5928CC1C1F6394E6803065F16F3AF6EB92A7A64F * __this, const RuntimeMethod* method)
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
// System.Void LightEstimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_Awake_m235FD397AF66B30969C55A03662A0AF3C939CEAA (LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLight = GetComponent<Light>();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0;
		L_0 = Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA(__this, /*hidden argument*/Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		__this->set_currentLight_8(L_0);
		// }
		return;
	}
}
// System.Void LightEstimation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_OnEnable_mD46CAFE75E1103FE8AA34C6CE94C6DC88F0BC39E (LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightEstimation_FrameUpdated_m0A02A97CD63F7957B28ECD371F81DA4D35B421FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arCameraManager.frameReceived += FrameUpdated;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_0 = __this->get_arCameraManager_4();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_1 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_1, __this, (intptr_t)((intptr_t)LightEstimation_FrameUpdated_m0A02A97CD63F7957B28ECD371F81DA4D35B421FA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightEstimation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_OnDisable_mE6B9C5CD8516C5F09FCDA60AAC1E2FA6E58C9CEE (LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightEstimation_FrameUpdated_m0A02A97CD63F7957B28ECD371F81DA4D35B421FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arCameraManager.frameReceived -= FrameUpdated;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_0 = __this->get_arCameraManager_4();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_1 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_1, __this, (intptr_t)((intptr_t)LightEstimation_FrameUpdated_m0A02A97CD63F7957B28ECD371F81DA4D35B421FA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightEstimation::FrameUpdated(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_FrameUpdated_m0A02A97CD63F7957B28ECD371F81DA4D35B421FA (LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925 * __this, ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42  ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BD68B6E4DA1A9152CE5CFA2698F6388C47791EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BC8F3D9F3070D271043F1D3CE5C0BE8DE4DFA7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D6DDECA8E0C07CD99D444D353C77C8D7C41D692);
		s_Il2CppMethodInitialized = true;
	}
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (args.lightEstimation.averageBrightness.HasValue)
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_0;
		L_0 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_0;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_1;
		L_1 = ARLightEstimationData_get_averageBrightness_m7BCFDB0BE6EE1B92029CE7360F6D9FA4CC19591A((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		// brightnessValue.text = $"Brightness: {args.lightEstimation.averageBrightness.Value}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_brightnessValue_5();
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_4;
		L_4 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_4;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_5;
		L_5 = ARLightEstimationData_get_averageBrightness_m7BCFDB0BE6EE1B92029CE7360F6D9FA4CC19591A((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4BC8F3D9F3070D271043F1D3CE5C0BE8DE4DFA7E, L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_9);
		// currentLight.intensity = args.lightEstimation.averageBrightness.Value;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_10 = __this->get_currentLight_8();
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_11;
		L_11 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_11;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_12;
		L_12 = ARLightEstimationData_get_averageBrightness_m7BCFDB0BE6EE1B92029CE7360F6D9FA4CC19591A((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13;
		L_13 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		NullCheck(L_10);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_10, L_13, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (args.lightEstimation.averageColorTemperature.HasValue)
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_14;
		L_14 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_14;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_15;
		L_15 = ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_15;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00d8;
		}
	}
	{
		// tempValue.text = $"Color Temperature: {args.lightEstimation.averageColorTemperature.Value}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_tempValue_6();
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_18;
		L_18 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_18;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_19;
		L_19 = ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_19;
		float L_20;
		L_20 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		float L_21 = L_20;
		RuntimeObject * L_22 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4D6DDECA8E0C07CD99D444D353C77C8D7C41D692, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_23);
		// currentLight.colorTemperature = args.lightEstimation.averageColorTemperature.Value;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_24 = __this->get_currentLight_8();
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_25;
		L_25 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_25;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_26;
		L_26 = ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_26;
		float L_27;
		L_27 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_1), /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		NullCheck(L_24);
		Light_set_colorTemperature_m058BA7D83D5E42A95242137F23013E95EB13398B(L_24, L_27, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// if (args.lightEstimation.colorCorrection.HasValue)
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_28;
		L_28 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_28;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_29;
		L_29 = ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_29;
		bool L_30;
		L_30 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_0144;
		}
	}
	{
		// colorCorrectionValue.text = $"Color Correction: {args.lightEstimation.colorCorrection.Value}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = __this->get_colorCorrectionValue_7();
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_32;
		L_32 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_32;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_33;
		L_33 = ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_33;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		L_34 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35 = L_34;
		RuntimeObject * L_36 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3BD68B6E4DA1A9152CE5CFA2698F6388C47791EE, L_36, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_37);
		// currentLight.color = args.lightEstimation.colorCorrection.Value;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_38 = __this->get_currentLight_8();
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_39;
		L_39 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___args0), /*hidden argument*/NULL);
		V_0 = L_39;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_40;
		L_40 = ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_40;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		NullCheck(L_38);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_38, L_41, /*hidden argument*/NULL);
	}

IL_0144:
	{
		// }
		return;
	}
}
// System.Void LightEstimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation__ctor_m8383629073F32A42EA866DE00BBBD46F66296032 (LightEstimation_t9843B4C3725AE20D953D7D4AFA849B024DC06925 * __this, const RuntimeMethod* method)
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
// System.Void MapRegenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapRegenerator_Start_m566F294C1E86FB3F0DF4433C7DEBD961A4D1ABEC (MapRegenerator_t94694D9787D0B7337A47D507A0800DC9B9B38ECE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F99866DBA2A71261CA704F7B093E2EF8A7D2CB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(GameObject.FindGameObjectWithTag("DataHolder").GetComponent<DataHolder>().map);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral8F99866DBA2A71261CA704F7B093E2EF8A7D2CB8, /*hidden argument*/NULL);
		NullCheck(L_0);
		DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * L_1;
		L_1 = GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6(L_0, /*hidden argument*/GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_map_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MapRegenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapRegenerator__ctor_m7F2E81AED59251D99F299ACFA6C28FA2E2430444 (MapRegenerator_t94694D9787D0B7337A47D507A0800DC9B9B38ECE * __this, const RuntimeMethod* method)
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
// System.Void MapScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript_Start_m40E144A431BE07207DD024F50385C56C28C621BA (MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A_m1C64A33AA05AD353AFADC08958463AC84FBBD282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral195316B10CE51FD93C88FE09A289E12C3249577F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A30595A8020834BAAFA6CA95E4B52B49CF47CAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// selectedEnvironmentOdd = environmentOdds[Random.Range(0, environmentOdds.Length)]; 
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_environmentOdds_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_environmentOdds_9();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->set_selectedEnvironmentOdd_10(L_4);
		// difficulty = Random.Range(1f, 2f);
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (2.0f), /*hidden argument*/NULL);
		__this->set_difficulty_14(L_5);
		// nestCount = Random.Range(5f, 6.5f) * difficulty;
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((5.0f), (6.5f), /*hidden argument*/NULL);
		float L_7 = __this->get_difficulty_14();
		__this->set_nestCount_11(((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
		// roundedNestCount = (Mathf.RoundToInt(nestCount));
		float L_8 = __this->get_nestCount_11();
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_8, /*hidden argument*/NULL);
		__this->set_roundedNestCount_15(L_9);
		// branchTotal = Random.Range(4f, 5f) * difficulty;
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((4.0f), (5.0f), /*hidden argument*/NULL);
		float L_11 = __this->get_difficulty_14();
		__this->set_branchTotal_25(((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		// for (int i = 0; i < roundedNestCount; i++) 
		V_0 = 0;
		goto IL_0377;
	}

IL_0080:
	{
		// if (monsterOdds.Count != 0)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = __this->get_monsterOdds_7();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_12, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_00d4;
		}
	}
	{
		// selectedMonsterOdd = monsterOdds[Random.Range(0, monsterOdds.Count)]; 
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_14 = __this->get_monsterOdds_7();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_15 = __this->get_monsterOdds_7();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_15, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_17;
		L_17 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_18;
		L_18 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_14, L_17, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		__this->set_selectedMonsterOdd_8(L_18);
		// monsterOdds.Remove(selectedMonsterOdd);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_19 = __this->get_monsterOdds_7();
		int32_t L_20 = __this->get_selectedMonsterOdd_8();
		NullCheck(L_19);
		bool L_21;
		L_21 = List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_19, L_20, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		// usedMonsterOdds.Add(selectedMonsterOdd);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_22 = __this->get_usedMonsterOdds_13();
		int32_t L_23 = __this->get_selectedMonsterOdd_8();
		NullCheck(L_22);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_22, L_23, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		goto IL_00f6;
	}

IL_00d4:
	{
		// selectedMonsterOdd = usedMonsterOdds[Random.Range(0, usedMonsterOdds.Count)]; 
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_24 = __this->get_usedMonsterOdds_13();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_25 = __this->get_usedMonsterOdds_13();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_25, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_27;
		L_27 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_28;
		L_28 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_24, L_27, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		__this->set_selectedMonsterOdd_8(L_28);
	}

IL_00f6:
	{
		// notRoundedDistance = ((Random.Range(1.0f, 1.2f) * (selectedMonsterOdd + 1) / (Random.Range(2.0f, 2.2f)) * difficulty) * 2); 
		float L_29;
		L_29 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (1.20000005f), /*hidden argument*/NULL);
		int32_t L_30 = __this->get_selectedMonsterOdd_8();
		float L_31;
		L_31 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((2.0f), (2.20000005f), /*hidden argument*/NULL);
		float L_32 = __this->get_difficulty_14();
		__this->set_notRoundedDistance_16(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_29, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))))))/(float)L_31)), (float)L_32)), (float)(2.0f))));
		// LocalNest = Nest;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_Nest_4();
		__this->set_LocalNest_5(L_33);
		// LocalNest.GetComponent<NestScript>().Monster = environments[selectedEnvironmentOdd][0][selectedMonsterOdd];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_LocalNest_5();
		NullCheck(L_34);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_35;
		L_35 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_34, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* L_36 = __this->get_environments_6();
		int32_t L_37 = __this->get_selectedEnvironmentOdd_10();
		NullCheck(L_36);
		int32_t L_38 = L_37;
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_39 = (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)(L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		int32_t L_40 = 0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = __this->get_selectedMonsterOdd_8();
		NullCheck(L_41);
		int32_t L_43 = L_42;
		String_t* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_35);
		L_35->set_Monster_4(L_44);
		// LocalNest.GetComponent<NestScript>().maxDistance = Mathf.RoundToInt(notRoundedDistance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_LocalNest_5();
		NullCheck(L_45);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_46;
		L_46 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_45, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		float L_47 = __this->get_notRoundedDistance_16();
		int32_t L_48;
		L_48 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		L_46->set_maxDistance_5(L_48);
		// LocalNest.GetComponent<NestScript>().oldPos = oldDistance;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_LocalNest_5();
		NullCheck(L_49);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_50;
		L_50 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_49, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = __this->get_oldDistance_18();
		NullCheck(L_50);
		L_50->set_oldPos_6(L_51);
		// if (counter == 0)
		int32_t L_52 = __this->get_counter_19();
		if (L_52)
		{
			goto IL_0267;
		}
	}
	{
		// LocalNest.name = "Nest " + counter.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_LocalNest_5();
		int32_t* L_54 = __this->get_address_of_counter_19();
		String_t* L_55;
		L_55 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_54, /*hidden argument*/NULL);
		String_t* L_56;
		L_56 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3A30595A8020834BAAFA6CA95E4B52B49CF47CAB, L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_53, L_56, /*hidden argument*/NULL);
		// LocalNest.GetComponent<NestScript>().order = counter;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_LocalNest_5();
		NullCheck(L_57);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_58;
		L_58 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_57, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		int32_t L_59 = __this->get_counter_19();
		NullCheck(L_58);
		L_58->set_order_8(L_59);
		// oldNest = Instantiate(LocalNest, oldDistance = new Vector3(0, -210, 0), Quaternion.identity, this.gameObject.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_LocalNest_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_61), (0.0f), (-210.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = L_61;
		V_1 = L_62;
		__this->set_oldDistance_18(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64;
		L_64 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67;
		L_67 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_60, L_63, L_64, L_66, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		__this->set_oldNest_30(L_67);
		// placedNests.Add(oldDistance);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_68 = __this->get_placedNests_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = __this->get_oldDistance_18();
		NullCheck(L_68);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_68, L_69, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// GameObject.FindGameObjectWithTag("Player").GetComponent<NestNavigator>().currentNest = oldNest;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_70);
		NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A * L_71;
		L_71 = GameObject_GetComponent_TisNestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A_m1C64A33AA05AD353AFADC08958463AC84FBBD282(L_70, /*hidden argument*/GameObject_GetComponent_TisNestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A_m1C64A33AA05AD353AFADC08958463AC84FBBD282_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = __this->get_oldNest_30();
		NullCheck(L_71);
		L_71->set_currentNest_5(L_72);
		// GameObject.FindGameObjectWithTag("Player").GetComponent<NestNavigator>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73;
		L_73 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_73);
		NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A * L_74;
		L_74 = GameObject_GetComponent_TisNestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A_m1C64A33AA05AD353AFADC08958463AC84FBBD282(L_73, /*hidden argument*/GameObject_GetComponent_TisNestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A_m1C64A33AA05AD353AFADC08958463AC84FBBD282_RuntimeMethod_var);
		NullCheck(L_74);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_74, (bool)1, /*hidden argument*/NULL);
		// counter += 1;
		int32_t L_75 = __this->get_counter_19();
		__this->set_counter_19(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)));
		// }
		goto IL_0373;
	}

IL_0267:
	{
		// LocalNest.name = "Nest " + counter.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = __this->get_LocalNest_5();
		int32_t* L_77 = __this->get_address_of_counter_19();
		String_t* L_78;
		L_78 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_77, /*hidden argument*/NULL);
		String_t* L_79;
		L_79 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3A30595A8020834BAAFA6CA95E4B52B49CF47CAB, L_78, /*hidden argument*/NULL);
		NullCheck(L_76);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_76, L_79, /*hidden argument*/NULL);
		// LocalNest.GetComponent<NestScript>().order = counter;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = __this->get_LocalNest_5();
		NullCheck(L_80);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_81;
		L_81 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_80, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		int32_t L_82 = __this->get_counter_19();
		NullCheck(L_81);
		L_81->set_order_8(L_82);
		// nestList.Add(Instantiate(LocalNest, oldDistance = new Vector3(Random.Range(-25f, 25f), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0), Quaternion.identity, this.gameObject.transform));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_83 = __this->get_nestList_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = __this->get_LocalNest_5();
		float L_85;
		L_85 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-25.0f), (25.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_86 = __this->get_address_of_oldDistance_18();
		float L_87 = L_86->get_y_3();
		float L_88 = __this->get_notRoundedDistance_16();
		int32_t L_89;
		L_89 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_88, /*hidden argument*/NULL);
		float L_90 = __this->get_nestCount_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_91), L_85, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_87, (float)((float)((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_89, (int32_t)((int32_t)100)))))/(float)((float)il2cpp_codegen_multiply((float)L_90, (float)(6.0f))))))), (float)(20.0f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92 = L_91;
		V_1 = L_92;
		__this->set_oldDistance_18(L_92);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_94;
		L_94 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95;
		L_95 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_95);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96;
		L_96 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_95, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97;
		L_97 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_84, L_93, L_94, L_96, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		NullCheck(L_83);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_83, L_97, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// placedNests.Add(oldDistance);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_98 = __this->get_placedNests_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99 = __this->get_oldDistance_18();
		NullCheck(L_98);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_98, L_99, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// oldNest.GetComponent<NestScript>().nextNest.Add(nestList[counter - 1]);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = __this->get_oldNest_30();
		NullCheck(L_100);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_101;
		L_101 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_100, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		NullCheck(L_101);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_102 = L_101->get_nextNest_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_103 = __this->get_nestList_20();
		int32_t L_104 = __this->get_counter_19();
		NullCheck(L_103);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105;
		L_105 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_103, ((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_102);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_102, L_105, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// oldNest = nestList[counter - 1];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_106 = __this->get_nestList_20();
		int32_t L_107 = __this->get_counter_19();
		NullCheck(L_106);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_108;
		L_108 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_106, ((int32_t)il2cpp_codegen_subtract((int32_t)L_107, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		__this->set_oldNest_30(L_108);
		// counter += 1;
		int32_t L_109 = __this->get_counter_19();
		__this->set_counter_19(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1)));
	}

IL_0373:
	{
		// for (int i = 0; i < roundedNestCount; i++) 
		int32_t L_110 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_0377:
	{
		// for (int i = 0; i < roundedNestCount; i++) 
		int32_t L_111 = V_0;
		int32_t L_112 = __this->get_roundedNestCount_15();
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_0080;
		}
	}
	{
		// for (int k = 0; k < Mathf.RoundToInt(branchTotal); k++)
		V_2 = 0;
		goto IL_05c4;
	}

IL_038a:
	{
		// randomSide = Random.Range(0, 2);
		int32_t L_113;
		L_113 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		__this->set_randomSide_29(L_113);
		// GetUnusedNest();
		MapScript_GetUnusedNest_mAF77824CDFBCE1B47F06D43908D1CEB000538E32(__this, /*hidden argument*/NULL);
		// oldDistance = randomNest.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114 = __this->get_randomNest_23();
		NullCheck(L_114);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115;
		L_115 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		L_116 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_115, /*hidden argument*/NULL);
		__this->set_oldDistance_18(L_116);
		// oldNest = randomNest;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = __this->get_randomNest_23();
		__this->set_oldNest_30(L_117);
		// for (int i = 0; i < (nestList.Count - (nestList.IndexOf(randomNest))); i++)
		V_3 = 0;
		goto IL_057a;
	}

IL_03c6:
	{
		// if (monsterOdds.Count != 0)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_118 = __this->get_monsterOdds_7();
		NullCheck(L_118);
		int32_t L_119;
		L_119 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_118, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if (!L_119)
		{
			goto IL_041a;
		}
	}
	{
		// selectedMonsterOdd = monsterOdds[Random.Range(0, monsterOdds.Count)]; 
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_120 = __this->get_monsterOdds_7();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_121 = __this->get_monsterOdds_7();
		NullCheck(L_121);
		int32_t L_122;
		L_122 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_121, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_123;
		L_123 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_122, /*hidden argument*/NULL);
		NullCheck(L_120);
		int32_t L_124;
		L_124 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_120, L_123, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		__this->set_selectedMonsterOdd_8(L_124);
		// monsterOdds.Remove(selectedMonsterOdd);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_125 = __this->get_monsterOdds_7();
		int32_t L_126 = __this->get_selectedMonsterOdd_8();
		NullCheck(L_125);
		bool L_127;
		L_127 = List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_125, L_126, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		// usedMonsterOdds.Add(selectedMonsterOdd);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_128 = __this->get_usedMonsterOdds_13();
		int32_t L_129 = __this->get_selectedMonsterOdd_8();
		NullCheck(L_128);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_128, L_129, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		goto IL_043c;
	}

IL_041a:
	{
		// selectedMonsterOdd = usedMonsterOdds[Random.Range(0, usedMonsterOdds.Count)]; 
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_130 = __this->get_usedMonsterOdds_13();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_131 = __this->get_usedMonsterOdds_13();
		NullCheck(L_131);
		int32_t L_132;
		L_132 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_131, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_133;
		L_133 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_132, /*hidden argument*/NULL);
		NullCheck(L_130);
		int32_t L_134;
		L_134 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_130, L_133, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		__this->set_selectedMonsterOdd_8(L_134);
	}

IL_043c:
	{
		// notRoundedDistance = (Random.Range(1.0f, 2.0f) * (selectedMonsterOdd + 1) / (Random.Range(2.0f, 3.0f)) * difficulty); 
		float L_135;
		L_135 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (2.0f), /*hidden argument*/NULL);
		int32_t L_136 = __this->get_selectedMonsterOdd_8();
		float L_137;
		L_137 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((2.0f), (3.0f), /*hidden argument*/NULL);
		float L_138 = __this->get_difficulty_14();
		__this->set_notRoundedDistance_16(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_135, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1))))))/(float)L_137)), (float)L_138)));
		// LocalNest = Nest;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_139 = __this->get_Nest_4();
		__this->set_LocalNest_5(L_139);
		// LocalNest.GetComponent<NestScript>().Monster = environments[selectedEnvironmentOdd][0][selectedMonsterOdd];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140 = __this->get_LocalNest_5();
		NullCheck(L_140);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_141;
		L_141 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_140, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* L_142 = __this->get_environments_6();
		int32_t L_143 = __this->get_selectedEnvironmentOdd_10();
		NullCheck(L_142);
		int32_t L_144 = L_143;
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_145 = (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)(L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_145);
		int32_t L_146 = 0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_147 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		int32_t L_148 = __this->get_selectedMonsterOdd_8();
		NullCheck(L_147);
		int32_t L_149 = L_148;
		String_t* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_141);
		L_141->set_Monster_4(L_150);
		// LocalNest.GetComponent<NestScript>().maxDistance = Mathf.RoundToInt(notRoundedDistance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_151 = __this->get_LocalNest_5();
		NullCheck(L_151);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_152;
		L_152 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_151, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		float L_153 = __this->get_notRoundedDistance_16();
		int32_t L_154;
		L_154 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_153, /*hidden argument*/NULL);
		NullCheck(L_152);
		L_152->set_maxDistance_5(L_154);
		// LocalNest.GetComponent<NestScript>().oldPos = oldDistance;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155 = __this->get_LocalNest_5();
		NullCheck(L_155);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_156;
		L_156 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_155, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157 = __this->get_oldDistance_18();
		NullCheck(L_156);
		L_156->set_oldPos_6(L_157);
		// LocalNest.name = randomNest.name + " branch " + branchCounter;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_158 = __this->get_LocalNest_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_159 = __this->get_randomNest_23();
		NullCheck(L_159);
		String_t* L_160;
		L_160 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_159, /*hidden argument*/NULL);
		int32_t* L_161 = __this->get_address_of_branchCounter_24();
		String_t* L_162;
		L_162 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_161, /*hidden argument*/NULL);
		String_t* L_163;
		L_163 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_160, _stringLiteral195316B10CE51FD93C88FE09A289E12C3249577F, L_162, /*hidden argument*/NULL);
		NullCheck(L_158);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_158, L_163, /*hidden argument*/NULL);
		// LocalNest.name = LocalNest.name.Replace("(Clone)", "").Trim();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_164 = __this->get_LocalNest_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_165 = __this->get_LocalNest_5();
		NullCheck(L_165);
		String_t* L_166;
		L_166 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_165, /*hidden argument*/NULL);
		NullCheck(L_166);
		String_t* L_167;
		L_167 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_166, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_167);
		String_t* L_168;
		L_168 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_167, /*hidden argument*/NULL);
		NullCheck(L_164);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_164, L_168, /*hidden argument*/NULL);
		// LocalNest.GetComponent<NestScript>().order = nestList.IndexOf(randomNest) + branchCounter + 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_169 = __this->get_LocalNest_5();
		NullCheck(L_169);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_170;
		L_170 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_169, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_171 = __this->get_nestList_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_172 = __this->get_randomNest_23();
		NullCheck(L_171);
		int32_t L_173;
		L_173 = List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A(L_171, L_172, /*hidden argument*/List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		int32_t L_174 = __this->get_branchCounter_24();
		NullCheck(L_170);
		L_170->set_order_8(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)L_174)), (int32_t)2)));
		// GetUnnocupiedSpace();
		MapScript_GetUnnocupiedSpace_mF46B64C7425440D2910DE8705D352E4094E7765C(__this, /*hidden argument*/NULL);
		// counter += 1;
		int32_t L_175 = __this->get_counter_19();
		__this->set_counter_19(((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1)));
		// branchCounter += 1;
		int32_t L_176 = __this->get_branchCounter_24();
		__this->set_branchCounter_24(((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1)));
		// for (int i = 0; i < (nestList.Count - (nestList.IndexOf(randomNest))); i++)
		int32_t L_177 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1));
	}

IL_057a:
	{
		// for (int i = 0; i < (nestList.Count - (nestList.IndexOf(randomNest))); i++)
		int32_t L_178 = V_3;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_179 = __this->get_nestList_20();
		NullCheck(L_179);
		int32_t L_180;
		L_180 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_179, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_181 = __this->get_nestList_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_182 = __this->get_randomNest_23();
		NullCheck(L_181);
		int32_t L_183;
		L_183 = List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A(L_181, L_182, /*hidden argument*/List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		if ((((int32_t)L_178) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)L_183)))))
		{
			goto IL_03c6;
		}
	}
	{
		// isBranch.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_184 = __this->get_isBranch_22();
		NullCheck(L_184);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_184, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// hasBranch.Add(randomNest);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_185 = __this->get_hasBranch_21();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_186 = __this->get_randomNest_23();
		NullCheck(L_185);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_185, L_186, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// branchCounter = 0;
		__this->set_branchCounter_24(0);
		// for (int k = 0; k < Mathf.RoundToInt(branchTotal); k++)
		int32_t L_187 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)1));
	}

IL_05c4:
	{
		// for (int k = 0; k < Mathf.RoundToInt(branchTotal); k++)
		int32_t L_188 = V_2;
		float L_189 = __this->get_branchTotal_25();
		int32_t L_190;
		L_190 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_189, /*hidden argument*/NULL);
		if ((((int32_t)L_188) < ((int32_t)L_190)))
		{
			goto IL_038a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MapScript::GetUnusedNest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript_GetUnusedNest_mAF77824CDFBCE1B47F06D43908D1CEB000538E32 (MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hasBranch.Count + 1 == roundedNestCount)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_hasBranch_21();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_2 = __this->get_roundedNestCount_15();
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))) == ((uint32_t)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		// hasBranch.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_hasBranch_21();
		NullCheck(L_3);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_3, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
	}

IL_0020:
	{
		// randomNest = nestList[Random.Range(0, nestList.Count)];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_nestList_20();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_nestList_20();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_5, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_4, L_7, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		__this->set_randomNest_23(L_8);
		// if (hasBranch.Contains(randomNest))
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_hasBranch_21();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_randomNest_23();
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F(L_9, L_10, /*hidden argument*/List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// GetUnusedNest();
		MapScript_GetUnusedNest_mAF77824CDFBCE1B47F06D43908D1CEB000538E32(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void MapScript::GetUnnocupiedSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript_GetUnnocupiedSpace_mF46B64C7425440D2910DE8705D352E4094E7765C (MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E8C078DC2A9E8083F35C22D1D6FEBC02F893AE);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// print(randomSide);
		int32_t L_0 = __this->get_randomSide_29();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_2, /*hidden argument*/NULL);
		// if(randomSide == 0)
		int32_t L_3 = __this->get_randomSide_29();
		if (L_3)
		{
			goto IL_0073;
		}
	}
	{
		// test = new Vector3((Random.Range(-40f * rangeMultiplyer, -15f * rangeMultiplyer)), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0);
		float L_4 = __this->get_rangeMultiplyer_28();
		float L_5 = __this->get_rangeMultiplyer_28();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_multiply((float)(-40.0f), (float)L_4)), ((float)il2cpp_codegen_multiply((float)(-15.0f), (float)L_5)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_oldDistance_18();
		float L_8 = L_7->get_y_3();
		float L_9 = __this->get_notRoundedDistance_16();
		int32_t L_10;
		L_10 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_nestCount_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_6, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_8, (float)((float)((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)100)))))/(float)((float)il2cpp_codegen_multiply((float)L_11, (float)(6.0f))))))), (float)(20.0f))), (0.0f), /*hidden argument*/NULL);
		__this->set_test_27(L_12);
	}

IL_0073:
	{
		// if (randomSide == 1)
		int32_t L_13 = __this->get_randomSide_29();
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_00d7;
		}
	}
	{
		// test = new Vector3((Random.Range(15f * rangeMultiplyer, 40f * rangeMultiplyer)), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0);
		float L_14 = __this->get_rangeMultiplyer_28();
		float L_15 = __this->get_rangeMultiplyer_28();
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_multiply((float)(15.0f), (float)L_14)), ((float)il2cpp_codegen_multiply((float)(40.0f), (float)L_15)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_oldDistance_18();
		float L_18 = L_17->get_y_3();
		float L_19 = __this->get_notRoundedDistance_16();
		int32_t L_20;
		L_20 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_nestCount_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), L_16, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_18, (float)((float)((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)((int32_t)100)))))/(float)((float)il2cpp_codegen_multiply((float)L_21, (float)(6.0f))))))), (float)(20.0f))), (0.0f), /*hidden argument*/NULL);
		__this->set_test_27(L_22);
	}

IL_00d7:
	{
		// bool checkResult = Physics2D.OverlapCircle(test, 9f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_test_27();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25;
		L_25 = Physics2D_OverlapCircle_m91A4627AE9C1216CE037B24175384B6345976625(L_24, (9.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		// if (checkResult == false)
		if (L_26)
		{
			goto IL_0250;
		}
	}
	{
		// if(branchCounter == 0)
		int32_t L_27 = __this->get_branchCounter_24();
		if (L_27)
		{
			goto IL_0199;
		}
	}
	{
		// print("Functioning!");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralA9E8C078DC2A9E8083F35C22D1D6FEBC02F893AE, /*hidden argument*/NULL);
		// tempOldNest = Instantiate(LocalNest, oldDistance = new Vector3(test.x, test.y, 0), Quaternion.identity, randomNest.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_LocalNest_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_test_27();
		float L_30 = L_29->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = __this->get_address_of_test_27();
		float L_32 = L_31->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), L_30, L_32, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = L_33;
		V_0 = L_34;
		__this->set_oldDistance_18(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_randomNest_23();
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_28, L_35, L_36, L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		__this->set_tempOldNest_31(L_39);
		// placedNests.Add(oldDistance);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_40 = __this->get_placedNests_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = __this->get_oldDistance_18();
		NullCheck(L_40);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_40, L_41, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// rangeMultiplyer = 1;
		__this->set_rangeMultiplyer_28((1.0f));
		// oldNest.GetComponent<NestScript>().nextNest.Add(tempOldNest);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_oldNest_30();
		NullCheck(L_42);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_43;
		L_43 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_42, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		NullCheck(L_43);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_44 = L_43->get_nextNest_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_tempOldNest_31();
		NullCheck(L_44);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_44, L_45, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// oldNest = tempOldNest;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_tempOldNest_31();
		__this->set_oldNest_30(L_46);
		// }
		return;
	}

IL_0199:
	{
		// print("Functioning!");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralA9E8C078DC2A9E8083F35C22D1D6FEBC02F893AE, /*hidden argument*/NULL);
		// isBranch.Add(Instantiate(LocalNest, oldDistance = new Vector3(test.x, test.y, 0), Quaternion.identity, randomNest.transform));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_47 = __this->get_isBranch_22();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_LocalNest_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_49 = __this->get_address_of_test_27();
		float L_50 = L_49->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = __this->get_address_of_test_27();
		float L_52 = L_51->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_53), L_50, L_52, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = L_53;
		V_0 = L_54;
		__this->set_oldDistance_18(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_randomNest_23();
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_48, L_55, L_56, L_58, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		NullCheck(L_47);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_47, L_59, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// placedNests.Add(oldDistance);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_60 = __this->get_placedNests_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = __this->get_oldDistance_18();
		NullCheck(L_60);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_60, L_61, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// rangeMultiplyer = 1;
		__this->set_rangeMultiplyer_28((1.0f));
		// oldNest.GetComponent<NestScript>().nextNest.Add(isBranch[branchCounter - 1]);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_oldNest_30();
		NullCheck(L_62);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_63;
		L_63 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_62, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		NullCheck(L_63);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_64 = L_63->get_nextNest_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_65 = __this->get_isBranch_22();
		int32_t L_66 = __this->get_branchCounter_24();
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67;
		L_67 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_65, ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_64);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_64, L_67, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// oldNest = isBranch[branchCounter - 1];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_68 = __this->get_isBranch_22();
		int32_t L_69 = __this->get_branchCounter_24();
		NullCheck(L_68);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_68, ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		__this->set_oldNest_30(L_70);
		// }
		return;
	}

IL_0250:
	{
		// rangeMultiplyer *= 1.25f;
		float L_71 = __this->get_rangeMultiplyer_28();
		__this->set_rangeMultiplyer_28(((float)il2cpp_codegen_multiply((float)L_71, (float)(1.25f))));
		// GetUnnocupiedSpace();
		MapScript_GetUnnocupiedSpace_mF46B64C7425440D2910DE8705D352E4094E7765C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript__ctor_mD60CA67676EBEBFEF7CD9542E9493550478283BC (MapScript_tFC1482903915B5B58A9144B822E88300200D8EBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0292B692298E2B309843B268FF46F9F4BE940517);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CBD3894B450BE276B9FBFCAC62F32B1335D223E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5ACB239701A5559D92C95711D149583E0934E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral298EFC43BA9173544EF93974B77A64243333390F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF1D6714B3851F270D2EF84D80765A18F9F48C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32770A51245E05C2249F8C4EB480658D6ED5BC27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral328701A8B5A34FB84BB1AEB3909463B5AD479976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral435C44B0296C3E747851364F950B8F993B1DD16F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCDA4F5A42A8195737B7B57DE13ADC1D975B624);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD07C6C99BE1F00459F6FF3B27CD9232B25D7BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52C843FEEEB31C99290325044DB8E237C1F7C7D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ADABBADA3334613050AEFA89248778527EC838F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69632BA9263DBDA0AB804800C6D7A7D2B8DF0EB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D9AE754712B71409DF769162025D0390FB04D21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EB910D2929E258F837FF44A077B9FCD2F9FB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral820A4D64A86991DFFCED863D04F9A60F7CF2647A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88650D8B8764C11D0D7823B770009E56E23F26D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D433D59FC83B792827B9C3DD5736374FC805E00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral989764E0DF7ADE7FED47DDCAC0D342041E67434E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7E0AC491836F59DFBF3B861855104C72E139678);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB0D80798A36B9BB47C2A254579A366D3D9B4445);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE27087E381F4490E87AB17C2386B6515AB9CDB87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA004A438B484F9894101B1981EA22089542B0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE9CF4F5F1568CDA638D37DDEBDFBB20FAAAF055);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string[][][] environments = new string[][][] {
		// 
		// new string[][] { new string[] { "pidgeon", "Gull", "Eagle", "plane", "Hot Air Balloon", "Blimp" }, new string[] { "god", "Jesus" } }, 
		// new string[][] { new string[] { "Rock Man", "Lava Blob", "Fire Bat", "Burning Bug", "Diamond Dude", "Demon" }, new string[] { "Devil", "Satan" } }, 
		// new string[][] { new string[] { "fly", "spider", "dragonfly", "Leaf Bug", "Tarantula", "Ogre" }, new string[] { "Shrek", "Donkey" } } 
		// 
		// }; 
		StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* L_0 = (StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354*)(StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354*)SZArrayNew(StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* L_1 = L_0;
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_2 = (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)SZArrayNew(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_3 = L_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralAB0D80798A36B9BB47C2A254579A366D3D9B4445);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAB0D80798A36B9BB47C2A254579A366D3D9B4445);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral820A4D64A86991DFFCED863D04F9A60F7CF2647A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral820A4D64A86991DFFCED863D04F9A60F7CF2647A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralFE9CF4F5F1568CDA638D37DDEBDFBB20FAAAF055);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFE9CF4F5F1568CDA638D37DDEBDFBB20FAAAF055);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral8D433D59FC83B792827B9C3DD5736374FC805E00);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral8D433D59FC83B792827B9C3DD5736374FC805E00);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral77EB910D2929E258F837FF44A077B9FCD2F9FB4A);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral77EB910D2929E258F837FF44A077B9FCD2F9FB4A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral52C843FEEEB31C99290325044DB8E237C1F7C7D2);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral52C843FEEEB31C99290325044DB8E237C1F7C7D2);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_10);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_10);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_11 = L_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral0292B692298E2B309843B268FF46F9F4BE940517);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0292B692298E2B309843B268FF46F9F4BE940517);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral69632BA9263DBDA0AB804800C6D7A7D2B8DF0EB4);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral69632BA9263DBDA0AB804800C6D7A7D2B8DF0EB4);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_14);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_11);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)L_11);
		StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* L_15 = L_1;
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_16 = (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)SZArrayNew(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_17 = L_16;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral0CBD3894B450BE276B9FBFCAC62F32B1335D223E);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0CBD3894B450BE276B9FBFCAC62F32B1335D223E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral435C44B0296C3E747851364F950B8F993B1DD16F);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral435C44B0296C3E747851364F950B8F993B1DD16F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralE27087E381F4490E87AB17C2386B6515AB9CDB87);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE27087E381F4490E87AB17C2386B6515AB9CDB87);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral4BD07C6C99BE1F00459F6FF3B27CD9232B25D7BA);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4BD07C6C99BE1F00459F6FF3B27CD9232B25D7BA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral2FF1D6714B3851F270D2EF84D80765A18F9F48C2);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2FF1D6714B3851F270D2EF84D80765A18F9F48C2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral4BCDA4F5A42A8195737B7B57DE13ADC1D975B624);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral4BCDA4F5A42A8195737B7B57DE13ADC1D975B624);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_24);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_24);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_25 = L_17;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral32770A51245E05C2249F8C4EB480658D6ED5BC27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral32770A51245E05C2249F8C4EB480658D6ED5BC27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral88650D8B8764C11D0D7823B770009E56E23F26D2);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral88650D8B8764C11D0D7823B770009E56E23F26D2);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_28);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_25);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)L_25);
		StringU5BU5DU5BU5DU5BU5D_t0570B8B19EBBA28F9A92A85622F58C400C79C354* L_29 = L_15;
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_30 = (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)SZArrayNew(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_31 = L_30;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral298EFC43BA9173544EF93974B77A64243333390F);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral298EFC43BA9173544EF93974B77A64243333390F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral328701A8B5A34FB84BB1AEB3909463B5AD479976);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral328701A8B5A34FB84BB1AEB3909463B5AD479976);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral989764E0DF7ADE7FED47DDCAC0D342041E67434E);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral989764E0DF7ADE7FED47DDCAC0D342041E67434E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral1A5ACB239701A5559D92C95711D149583E0934E1);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1A5ACB239701A5559D92C95711D149583E0934E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral5ADABBADA3334613050AEFA89248778527EC838F);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5ADABBADA3334613050AEFA89248778527EC838F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralEA004A438B484F9894101B1981EA22089542B0C9);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_38);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_38);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_39 = L_31;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralA7E0AC491836F59DFBF3B861855104C72E139678);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA7E0AC491836F59DFBF3B861855104C72E139678);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral6D9AE754712B71409DF769162025D0390FB04D21);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral6D9AE754712B71409DF769162025D0390FB04D21);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_42);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_39);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)L_39);
		__this->set_environments_6(L_29);
		// private List<int> monsterOdds = new List<int>() { 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5 }; 
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_43 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_43, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_44 = L_43;
		NullCheck(L_44);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_44, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_45 = L_44;
		NullCheck(L_45);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_45, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_46 = L_45;
		NullCheck(L_46);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_46, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_47 = L_46;
		NullCheck(L_47);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_47, 1, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_48 = L_47;
		NullCheck(L_48);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_48, 1, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_49 = L_48;
		NullCheck(L_49);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_49, 1, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_50 = L_49;
		NullCheck(L_50);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_50, 2, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_51 = L_50;
		NullCheck(L_51);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_51, 2, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_52 = L_51;
		NullCheck(L_52);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_52, 3, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_53 = L_52;
		NullCheck(L_53);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_53, 3, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_54 = L_53;
		NullCheck(L_54);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_54, 4, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_55 = L_54;
		NullCheck(L_55);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_55, 4, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_56 = L_55;
		NullCheck(L_56);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_56, 5, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		__this->set_monsterOdds_7(L_56);
		// private int[] environmentOdds = new int[] { 0, 0, 0, 1, 1, 1, 2, 2 }; 
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = L_57;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_59 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____01F3E0A52FC7391A60ABA7B1915FFEF291B4A2847EF6AADD2A94E51C2D23456E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_58, L_59, /*hidden argument*/NULL);
		__this->set_environmentOdds_9(L_58);
		// public List<string> monsterList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_60 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_60, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_monsterList_12(L_60);
		// private List<int> usedMonsterOdds = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_61 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_61, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_usedMonsterOdds_13(L_61);
		// public List<int> distances = new List<int>(); 
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_62 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_62, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_distances_17(L_62);
		// private List<GameObject> nestList = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_63 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_63, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_nestList_20(L_63);
		// private List<GameObject> hasBranch = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_64 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_64, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_hasBranch_21(L_64);
		// private List<GameObject> isBranch = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_65 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_65, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_isBranch_22(L_65);
		// private List<Vector3> placedNests = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_66 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_66, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_placedNests_26(L_66);
		// private float rangeMultiplyer = 1;
		__this->set_rangeMultiplyer_28((1.0f));
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
// System.Void MoveScenes::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScenes_NextScene_m0A0DA1144BBA546793545F715DF7A3BD445BD8E8 (MoveScenes_t757DBF243D1177806463417C842AF5884F8C7C17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene("SampleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveScenes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScenes__ctor_m7FF737B394D13C1AF24F3DA8145F6C987E554168 (MoveScenes_t757DBF243D1177806463417C842AF5884F8C7C17 * __this, const RuntimeMethod* method)
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
// System.Void NestNavigator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestNavigator_Start_m6F7F23F114403CAD2AB1E2BF156BF019F0D5566D (NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B58BF9C18E46D86D31F4AEC7006608419E3DF93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF87D62C674AA959B933969E16A43C950450CB77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.transform.position = currentNest.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_currentNest_5();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_4, /*hidden argument*/NULL);
		// distanceText = GameObject.Find("Distance").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral7B58BF9C18E46D86D31F4AEC7006608419E3DF93, /*hidden argument*/NULL);
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6;
		L_6 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_5, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_distanceText_9(L_6);
		// goalText = GameObject.Find("DistanceGoal").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralEF87D62C674AA959B933969E16A43C950450CB77, /*hidden argument*/NULL);
		NullCheck(L_7);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_7, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_goalText_10(L_8);
		// localNestScript = currentNest.GetComponent<NestScript>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_currentNest_5();
		NullCheck(L_9);
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_10;
		L_10 = GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE(L_9, /*hidden argument*/GameObject_GetComponent_TisNestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435_mC82DAB8849254659201174D976A30C647E0065AE_RuntimeMethod_var);
		__this->set_localNestScript_12(L_10);
		// localDataHolder = DataHolder.GetComponent<DataHolder>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_DataHolder_4();
		NullCheck(L_11);
		DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * L_12;
		L_12 = GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6(L_11, /*hidden argument*/GameObject_GetComponent_TisDataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD_m5927FAB5AD86CA6D8C1C6357D4A0AE70407B73B6_RuntimeMethod_var);
		__this->set_localDataHolder_11(L_12);
		// maxDistance = localNestScript.maxDistance;
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_13 = __this->get_localNestScript_12();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_maxDistance_5();
		__this->set_maxDistance_8(((float)((float)L_14)));
		// }
		return;
	}
}
// System.Void NestNavigator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestNavigator_Update_mFC4C292B50F3795383E873EBE5FCF08ED0330122 (NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral955C4D0A2DD6B1FD4627C4881C5F9F36571FA8D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// distanceText.text = currentDistance.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_distanceText_9();
		float* L_1 = __this->get_address_of_currentDistance_7();
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// goalText.text = maxDistance.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_goalText_10();
		float* L_4 = __this->get_address_of_maxDistance_8();
		String_t* L_5;
		L_5 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// if (Input.touchCount > 0 || Input.GetKeyDown(KeyCode.E) == true)
		int32_t L_6;
		L_6 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)101), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}

IL_003d:
	{
		// currentDistance += 1;
		float L_8 = __this->get_currentDistance_7();
		__this->set_currentDistance_7(((float)il2cpp_codegen_add((float)L_8, (float)(1.0f))));
	}

IL_004f:
	{
		// if (currentDistance == maxDistance)
		float L_9 = __this->get_currentDistance_7();
		float L_10 = __this->get_maxDistance_8();
		if ((!(((float)L_9) == ((float)L_10))))
		{
			goto IL_00a3;
		}
	}
	{
		// currentDistance = 0;
		__this->set_currentDistance_7((0.0f));
		// localDataHolder.monster = localNestScript.Monster;
		DataHolder_t8ADDA1E54A01BD339AFA8C68C3A89E318CAAA6AD * L_11 = __this->get_localDataHolder_11();
		NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * L_12 = __this->get_localNestScript_12();
		NullCheck(L_12);
		String_t* L_13 = L_12->get_Monster_4();
		NullCheck(L_11);
		L_11->set_monster_4(L_13);
		// Instantiate(DataHolder);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_DataHolder_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// SceneManager.LoadScene("FIGHT");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral955C4D0A2DD6B1FD4627C4881C5F9F36571FA8D4, /*hidden argument*/NULL);
		// Destroy(GameObject.FindGameObjectWithTag("Map"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralB0B90E0A9445C85E0EE8EF6F7B299ABB78EDEE38, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void NestNavigator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestNavigator__ctor_m7E9790D57E18876AF6DC8EBF6B4D8D4EAE3FDFD4 (NestNavigator_t7756E757D036C85D8CB27C3452386DB3C87BFC6A * __this, const RuntimeMethod* method)
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
// System.Void NestScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestScript_Start_mCC7A562DE408C8A8D822216D2EFD3A91C8727651 (NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maxDistance = Random.Range(1, 5);   
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 5, /*hidden argument*/NULL);
		__this->set_maxDistance_5(L_0);
		// if(oldPos != new Vector3 (0,0,0))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_oldPos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// gameObject.GetComponent<LineRenderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5;
		L_5 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_4, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_5, (bool)1, /*hidden argument*/NULL);
		// gameObject.GetComponent<EdgeCollider2D>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * L_7;
		L_7 = GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B(L_6, /*hidden argument*/GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// gameObject.GetComponent<LineRenderer>().SetPosition(0, oldPos);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_9;
		L_9 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_8, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_oldPos_6();
		NullCheck(L_9);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_9, 0, L_10, /*hidden argument*/NULL);
		// gameObject.GetComponent<LineRenderer>().SetPosition(1, this.gameObject.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_12;
		L_12 = GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB(L_11, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m33F7C702EEC28E4353EC6C7CFBA8B7FB9DBB00AB_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_12, 1, L_15, /*hidden argument*/NULL);
		// linePoints = (new List<Vector2>() { (new Vector2 (oldPos.x - gameObject.transform.position.x, oldPos.y - gameObject.transform.position.y) ), new Vector2(gameObject.transform.position.x - gameObject.transform.position.x, gameObject.transform.position.y - gameObject.transform.position.y) });
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_16 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_16, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_17 = L_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_oldPos_6();
		float L_19 = L_18->get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_oldPos_6();
		float L_25 = L_24->get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), ((float)il2cpp_codegen_subtract((float)L_19, (float)L_23)), ((float)il2cpp_codegen_subtract((float)L_25, (float)L_29)), /*hidden argument*/NULL);
		NullCheck(L_17);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_17, L_30, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_31 = L_17;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_48), ((float)il2cpp_codegen_subtract((float)L_35, (float)L_39)), ((float)il2cpp_codegen_subtract((float)L_43, (float)L_47)), /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_31, L_48, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		__this->set_linePoints_7(L_31);
		// gameObject.GetComponent<EdgeCollider2D>().SetPoints(linePoints);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		EdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B * L_50;
		L_50 = GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B(L_49, /*hidden argument*/GameObject_GetComponent_TisEdgeCollider2D_t95C53E6DB7B534AD62A86D161BB0F5AB0C4E2A4B_m23A1184E073EE93F4D07EE3980036D32A577414B_RuntimeMethod_var);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_51 = __this->get_linePoints_7();
		NullCheck(L_50);
		bool L_52;
		L_52 = EdgeCollider2D_SetPoints_m37264300BDB15057DF2B47137E1D37B2D18B5888(L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NestScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestScript__ctor_mEBF5ED98F30808356F1BC73F3E86BD5D4848E7D7 (NestScript_tFB8659B4D89C14C2CC06549990ECBE25DF575435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Vector2> linePoints = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_0, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		__this->set_linePoints_7(L_0);
		// public List<GameObject> nextNest = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_nextNest_9(L_1);
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_m783F84A617DADC4574B0BF1524481E6B96C65661 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_m437970EA37D66BDF32972F4CC0F65B95E5961FAA (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
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
// System.Void PlayerScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_OnTriggerEnter_m11056E5D1D2E1D59F3A227C0E4B70B1656769FB7 (PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB070B5A86C5A7E2005BA61C6AC7082C78AE040C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "ProjectileA")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralB070B5A86C5A7E2005BA61C6AC7082C78AE040C8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// health -= Mathf.FloorToInt(collision.GetComponent<ProjectileScript>().totalDamage);
		int32_t L_3 = __this->get_health_4();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___collision0;
		NullCheck(L_4);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_5;
		L_5 = Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B(L_4, /*hidden argument*/Component_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m9304940CB590F62C1DE321BBEE869181420E5E6B_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6 = L_5->get_totalDamage_7();
		int32_t L_7;
		L_7 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_6, /*hidden argument*/NULL);
		__this->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_7)));
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PlayerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_Update_m4B7EDA0BE2C7C0C1ED25E80E6D341E17421FD3D2 (PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// mSlider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_mSlider_5();
		int32_t L_1 = __this->get_health_4();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_1)));
		// if (Input.touchCount > 0)
		int32_t L_2;
		L_2 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0102;
		}
	}
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Began && coolDown == false)
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_3;
		L_3 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0102;
		}
	}
	{
		bool L_5 = __this->get_coolDown_10();
		if (L_5)
		{
			goto IL_0102;
		}
	}
	{
		// Vector3 touchPos = Camera.main.ScreenToWorldPoint((Vector3)Input.GetTouch(0).position + new Vector3(0, 0, 0.1f));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_7;
		L_7 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_6, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// Debug.Log(touchPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13;
		RuntimeObject * L_15 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// Vector3 dir = touchPos - (new Vector3(transform.position.x, transform.position.y, transform.position.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), L_19, L_22, L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// dir.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		// bullet = Instantiate(projectile, touchPos, Quaternion.LookRotation(dir)) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_projectile_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31;
		L_31 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_28, L_29, L_31, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_bullet_9(L_32);
		// bullet.GetComponent<ProjectileScript>().Origin = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_bullet_9();
		NullCheck(L_33);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_34;
		L_34 = GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08(L_33, /*hidden argument*/GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		L_34->set_Origin_8(L_35);
		// coolDown = true;
		__this->set_coolDown_10((bool)1);
		// StartCoroutine(BulletCool());
		RuntimeObject* L_36;
		L_36 = PlayerScript_BulletCool_m41E59D262C8A98E4EED112D7F0BBC393A79052E0(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_37;
		L_37 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_36, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerScript::BulletCool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerScript_BulletCool_m41E59D262C8A98E4EED112D7F0BBC393A79052E0 (PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * L_0 = (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A *)il2cpp_codegen_object_new(U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A_il2cpp_TypeInfo_var);
		U3CBulletCoolU3Ed__9__ctor_m34BA04A5384F38BF4EA3336827239FFE77F75167(L_0, 0, /*hidden argument*/NULL);
		U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript__ctor_m8FC59B4E46D210A2C41D8B1F546C2603EC786E5D (PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * __this, const RuntimeMethod* method)
{
	{
		// public int health = 100;
		__this->set_health_4(((int32_t)100));
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
// System.Void ProjectileBarrage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileBarrage_Start_m47C76854B725D24CFAA74CDC6663599D4C9A49C7 (ProjectileBarrage_t56E930F83EE69ACB84D41B2F78C2921FAFE6C61F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ProjectileBarrage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileBarrage_Update_m9ABC857398A9A132F0CE7D7321A8061646EAED9D (ProjectileBarrage_t56E930F83EE69ACB84D41B2F78C2921FAFE6C61F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ProjectileBarrage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileBarrage__ctor_m001550086A6E2FC7B71ED5C6A4F8AAB39F5BB216 (ProjectileBarrage_t56E930F83EE69ACB84D41B2F78C2921FAFE6C61F * __this, const RuntimeMethod* method)
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
// System.Void ProjectileScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileScript_Start_mE121120343AB1B139120B5CFA962B3357E5211F0 (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(DestroyCount());
		RuntimeObject* L_0;
		L_0 = ProjectileScript_DestroyCount_m9D3A6F8B1E999D575CFC46377F903A339B784694(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// distanceDivider = (Vector3.Distance(gameObject.transform.position, GameObject.FindGameObjectWithTag("Opponent").transform.position));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8;
		L_8 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_4, L_7, /*hidden argument*/NULL);
		__this->set_distanceDivider_6(L_8);
		// DamageCalc();
		ProjectileScript_DamageCalc_m7524C277B145F29050F7A30AA25A51A5F1A59B0F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProjectileScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileScript_Update_m74579A208B5F7A4B8E9DB21ECABF7A4F590BEB74 (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector3.forward * Time.deltaTime * attackSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_attackSpeed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, ((float)((float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ProjectileScript::DestroyCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectileScript_DestroyCount_m9D3A6F8B1E999D575CFC46377F903A339B784694 (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * L_0 = (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 *)il2cpp_codegen_object_new(U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0_il2cpp_TypeInfo_var);
		U3CDestroyCountU3Ed__9__ctor_mE2BC5C56F6025A5DC471CF5421F69460B854B874(L_0, 0, /*hidden argument*/NULL);
		U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ProjectileScript::DamageCalc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileScript_DamageCalc_m7524C277B145F29050F7A30AA25A51A5F1A59B0F (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805_m05BCDC531AA2C8218E6062A4D7A23A0977EA2397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Origin.gameObject.tag == ("Opponent"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Origin_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// totalDamage = (attackPower * Origin.GetComponent<Enemy>().attackStat / GameObject.FindGameObjectWithTag("MainCamera").GetComponent<PlayerScript>().defenceStat);
		int32_t L_4 = __this->get_attackPower_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_Origin_8();
		NullCheck(L_5);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_6;
		L_6 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_5, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = L_6->get_attackStat_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_8);
		PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * L_9;
		L_9 = GameObject_GetComponent_TisPlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805_m05BCDC531AA2C8218E6062A4D7A23A0977EA2397(L_8, /*hidden argument*/GameObject_GetComponent_TisPlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805_m05BCDC531AA2C8218E6062A4D7A23A0977EA2397_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10 = L_9->get_defenceStat_8();
		__this->set_totalDamage_7(((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_7))/(int32_t)L_10)))));
	}

IL_004f:
	{
		// if (Origin.gameObject.tag == ("MainCamera"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Origin_8();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b5;
		}
	}
	{
		// totalDamage = ((attackPower * Origin.GetComponent<PlayerScript>().attackStat / GameObject.FindGameObjectWithTag("Opponent").GetComponent<Enemy>().defenceStat) / ((distanceDivider)));
		int32_t L_15 = __this->get_attackPower_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_Origin_8();
		NullCheck(L_16);
		PlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805 * L_17;
		L_17 = GameObject_GetComponent_TisPlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805_m05BCDC531AA2C8218E6062A4D7A23A0977EA2397(L_16, /*hidden argument*/GameObject_GetComponent_TisPlayerScript_t17CE78E87B42618DBFBECC97B568BDD319AEE805_m05BCDC531AA2C8218E6062A4D7A23A0977EA2397_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->get_attackStat_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA, /*hidden argument*/NULL);
		NullCheck(L_19);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_20;
		L_20 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_19, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		NullCheck(L_20);
		int32_t L_21 = L_20->get_defenceStat_13();
		float L_22 = __this->get_distanceDivider_6();
		__this->set_totalDamage_7(((float)((float)((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)L_18))/(int32_t)L_21))))/(float)L_22)));
		// Debug.Log(totalDamage);
		float L_23 = __this->get_totalDamage_7();
		float L_24 = L_23;
		RuntimeObject * L_25 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_25, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void ProjectileScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileScript_OnTriggerEnter_m12B98279956A46CA09700F7CB2FFD0AD07840D40 (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Origin.gameObject.tag == ("Opponent"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Origin_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// if (collision.gameObject.tag == ("MainCamera"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// Instantiate(redConfetti, this.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_redConfetti_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// if (Origin.gameObject.tag == ("MainCamera"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Origin_8();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		// if (collision.gameObject.tag == ("Opponent"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_16 = ___collision0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral5C0CC2A338A942D754677EA25066430D42DFDCAA, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		// Instantiate(blueConfetti, this.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_blueConfetti_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_20, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_23, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void ProjectileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileScript__ctor_m776FC67982BF4A84278E5DE54DC67985913C1D07 (ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * __this, const RuntimeMethod* method)
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
// System.Void RapidFire::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RapidFire_OnStateEnter_mE0DE39FCC37D7BC5FD73ED6565ACB3C1E0C9F1A9 (RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		// projectileCounter = 0;
		__this->set_projectileCounter_4(0);
		// }
		return;
	}
}
// System.Void RapidFire::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RapidFire_OnStateUpdate_m44E3AEF13B8FD659A807A475DA1079CA9E095DB4 (RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(projectileCounter < 30)
		int32_t L_0 = __this->get_projectileCounter_4();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)30))))
		{
			goto IL_00c9;
		}
	}
	{
		// leftToRight = new Vector3(Mathf.Lerp(-5, 15, t), 0, 0);
		IL2CPP_RUNTIME_CLASS_INIT(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_il2cpp_TypeInfo_var);
		float L_1 = ((RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_StaticFields*)il2cpp_codegen_static_fields_for(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_il2cpp_TypeInfo_var))->get_t_8();
		float L_2;
		L_2 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((-5.0f), (15.0f), L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_2, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_leftToRight_7(L_3);
		// t += 0.5f * (Time.deltaTime / 2);
		float L_4 = ((RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_StaticFields*)il2cpp_codegen_static_fields_for(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_il2cpp_TypeInfo_var))->get_t_8();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		((RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_StaticFields*)il2cpp_codegen_static_fields_for(RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E_il2cpp_TypeInfo_var))->set_t_8(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)((float)L_5/(float)(2.0f))))))));
		// Vector3 playerDirection = GameObject.FindGameObjectWithTag("MainCamera").transform.position - animator.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = ___animator0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// localProjectile = Instantiate(projectile, animator.transform.position, Quaternion.LookRotation(playerDirection +(leftToRight)));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_projectile_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = ___animator0;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_leftToRight_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_13, L_16, L_20, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_localProjectile_6(L_21);
		// localProjectile.GetComponent<ProjectileScript>().Origin = animator.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_localProjectile_6();
		NullCheck(L_22);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_23;
		L_23 = GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08(L_22, /*hidden argument*/GameObject_GetComponent_TisProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38_m5AE71387ECB337423456E451B3C9423D954B9A08_RuntimeMethod_var);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_24 = ___animator0;
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		L_23->set_Origin_8(L_25);
		// projectileCounter += 1;
		int32_t L_26 = __this->get_projectileCounter_4();
		__this->set_projectileCounter_4(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		// }
		return;
	}

IL_00c9:
	{
		// animator.SetInteger("SpecialMeter", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_27 = ___animator0;
		NullCheck(L_27);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_27, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, 0, /*hidden argument*/NULL);
		// animator.SetBool("CoolingDown", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_28 = ___animator0;
		NullCheck(L_28);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_28, _stringLiteral98E8B0D573CAB3A8A30BC7D1630C1A443E0BF07D, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RapidFire::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RapidFire_OnStateExit_mF1AEBBB719903BC749BA6D7BBD5B9741C612ABD3 (RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		// projectileCounter = 0;
		__this->set_projectileCounter_4(0);
		// }
		return;
	}
}
// System.Void RapidFire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RapidFire__ctor_mC3B6A2869DBD2BF5699794A115F60BDEF26F2A15 (RapidFire_tFEB8CAC788D894E4F8F47627543E802EE6B6BC2E * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_mDB0650FD738799E5880150E656D4A88524D0EBE0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RapidFire::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RapidFire__cctor_mEF32B2CC78F871BA8D3938474CEE9B23A3B3DEE7 (const RuntimeMethod* method)
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
// System.Void Rock::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rock_OnStateEnter_m7E879D9B88B26038865AA9BC5B407EF72096B256 (Rock_t74BB0992120DB1069FB77BB5EA72A62929E24F2E * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(rockCounter < 3)
		int32_t L_0 = __this->get_rockCounter_5();
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_009f;
		}
	}
	{
		// Vector3 wario = GameObject.FindGameObjectWithTag("MainCamera").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// GameObject spike = Instantiate(midRange, (new Vector3(wario.x + Random.Range(-0.5f, 1.5f), wario.y, wario.z + Random.Range(1f, 2f))), Quaternion.Euler(0, 0, 0), null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_midRange_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_x_2();
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.5f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_z_4();
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), L_9, ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_4, L_13, L_14, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// rockCounter += 1;
		int32_t L_16 = __this->get_rockCounter_5();
		__this->set_rockCounter_5(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		// animator.SetInteger("SpecialMeter", animator.GetInteger("SpecialMeter") + 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = ___animator0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = ___animator0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A(L_18, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, /*hidden argument*/NULL);
		NullCheck(L_17);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_17, _stringLiteralEB46CB8E162EB181CECEC92A2FB83898BEDF5201, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void Rock::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rock_OnStateUpdate_m0F9D999493F09B2D16E91FB730F53814BA797F25 (Rock_t74BB0992120DB1069FB77BB5EA72A62929E24F2E * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator0, AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Rock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rock__ctor_m484283FEC315BD762305DF627B6E46FE2915020A (Rock_t74BB0992120DB1069FB77BB5EA72A62929E24F2E * __this, const RuntimeMethod* method)
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
// System.Void StateMachine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Start_m871698AFB6B963C6C2FD699A3AE8F77E1DE942C6 (StateMachine_t823E5CFDC9E27E10A2C57DB9303909CA2D8BC49A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StateMachine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Update_mA354B9A7C6F6B28AB5824F0647015C0669349683 (StateMachine_t823E5CFDC9E27E10A2C57DB9303909CA2D8BC49A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_m386AC4CE9F753E4EF79C5C6AEDD6A01F8E696F86 (StateMachine_t823E5CFDC9E27E10A2C57DB9303909CA2D8BC49A * __this, const RuntimeMethod* method)
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
// System.Void PlayerScript/<BulletCool>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__9__ctor_m34BA04A5384F38BF4EA3336827239FFE77F75167 (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerScript/<BulletCool>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__9_System_IDisposable_Dispose_m1F68BC8400E41CE6011F2C88A862260380A9F81A (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerScript/<BulletCool>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBulletCoolU3Ed__9_MoveNext_m9362EE83D2A0E1E7F583B520921CDD075802025C (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * __this, const RuntimeMethod* method)
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
		L_5->set_coolDown_10((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object PlayerScript/<BulletCool>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBulletCoolU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3D2CAADD698607D2F5C8EF1DD431B580E690C8F0 (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerScript/<BulletCool>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBulletCoolU3Ed__9_System_Collections_IEnumerator_Reset_m1C62CE9D88F7F8CB8C763F55A6196E6F1D79682E (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBulletCoolU3Ed__9_System_Collections_IEnumerator_Reset_m1C62CE9D88F7F8CB8C763F55A6196E6F1D79682E_RuntimeMethod_var)));
	}
}
// System.Object PlayerScript/<BulletCool>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBulletCoolU3Ed__9_System_Collections_IEnumerator_get_Current_m32F7F0FB443FA0D3C5AB36F6D57D006D2F47DA43 (U3CBulletCoolU3Ed__9_tDDCA592F0137EBBBE910A46085E182E342D1772A * __this, const RuntimeMethod* method)
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
// System.Void ProjectileScript/<DestroyCount>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyCountU3Ed__9__ctor_mE2BC5C56F6025A5DC471CF5421F69460B854B874 (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ProjectileScript/<DestroyCount>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyCountU3Ed__9_System_IDisposable_Dispose_m7EF5536F5C35DC5BB354B5DE5FA88573560CB11C (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ProjectileScript/<DestroyCount>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyCountU3Ed__9_MoveNext_mA7FFFE5FF6F830309CAFBADEE22EC9F459F9E8EF (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_1 = __this->get_U3CU3E4__this_2();
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
		// yield return new WaitForSeconds(5);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(gameObject);
		ProjectileScript_t4BC2CDC18C79F0ED86F774FC8AC672EA64868F38 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ProjectileScript/<DestroyCount>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyCountU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m08098541E26B5F48C3CA3180BDA78A09FA373EAF (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ProjectileScript/<DestroyCount>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyCountU3Ed__9_System_Collections_IEnumerator_Reset_mB27FD505CBB0701F2A27FCE6C1CCDC9ADA2BE6F8 (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyCountU3Ed__9_System_Collections_IEnumerator_Reset_mB27FD505CBB0701F2A27FCE6C1CCDC9ADA2BE6F8_RuntimeMethod_var)));
	}
}
// System.Object ProjectileScript/<DestroyCount>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyCountU3Ed__9_System_Collections_IEnumerator_get_Current_mEA83A3FB32C5425EE4C6E8798950F75F7FE49008 (U3CDestroyCountU3Ed__9_t11B84CCCF8FA784D5EFF2030F7174E1FA67663E0 * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline (ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 * __this, const RuntimeMethod* method)
{
	{
		// public ARLightEstimationData lightEstimation { get; set; }
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_0 = __this->get_U3ClightEstimationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method)
{
	{
		// public float? averageColorTemperature { get; set; }
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_0 = __this->get_U3CaverageColorTemperatureU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method)
{
	{
		// public Color? colorCorrection { get; set; }
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_0 = __this->get_U3CcolorCorrectionU3Ek__BackingField_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
