#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Sam_PP_AnimBP_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Sam_PP_AnimBP.Sam_PP_AnimBP_C
// 0x7860 (0x7C30 - 0x03D0)
class USam_PP_AnimBP_C : public UGPostProcessAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4729EFF7442C040646E192A2C7DE41DB;// 0x03D8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_E4CAEB2D4D32E6E7503A169B4BCB412C;    // 0x0420(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_91D5F8FF4533A8DF555D9E9A750F4269;    // 0x05C0(0x01A0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_999E68444D3AD4D8B2B71FA91D5B38B8;// 0x0760(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_976EA70C47857A3B4F84778955751477;// 0x09E0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B5E175CA4DECB5BF14BF05A878B183A5;// 0x0C60(0x0280)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8C08CC8A4B013B4B984F9F87BDDE5374;// 0x0EE0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9C6F90D648F8095E7F527190527E4862;// 0x0F28(0x00A8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_80BBF3654239C2C6906F149FC8B77F54;// 0x0FD0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C792C12145489CDDB278648BD52F2225;// 0x1250(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_346C804B43C8D019BE7B5BBB727AD7A7;// 0x14D0(0x0280)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BD7A8D5F410978C2C4E4FCA68CDBB5DA;// 0x1750(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_38020B6940BA87B3A60D04A2C759AA0C;// 0x1798(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9B80F96449101E9800939F8B8E32B9C4;// 0x1840(0x00A8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x18E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5B671CE94791C45274569BBA8274C84A;    // 0x18F0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5056ECBA442B26D1BF81B9BA4F64BEF2;    // 0x1A90(0x01A0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_5EB3235C4702101FC65F8CB281B9B6C9;  // 0x1C30(0x0068)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C2016E3D4C2C376157356A8B6F80D56F;// 0x1C98(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_B58EDED64B5E88E4951DCE91FADEB323;// 0x1D40(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_Root_D7C17FB44D7DD4BA8D01868EC5588040;      // 0x1DE8(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_50DE1A1F460A468009ACD39141600694;// 0x1E30(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_207013384280B7971657EFB451E3C627;// 0x1ED8(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74D6E782446AAF72ABA2798BDD5EC091;// 0x1F80(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D666D15442EAD2BA5280F587FE6844E5;// 0x2050(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_013D61AA4E80B2DC2CD26CBEE453FFDF;// 0x20C8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_132635FC435D726308F1768F3F0597E8;// 0x2170(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0DB5EFF240FCA82BFF35E981687D3BE9;// 0x21C0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12CDB1A546B0FD0EAE8AE5BD68732296;// 0x2210(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_205B7BFC4D185AE8AC64B7A7538C630F;// 0x2338(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E4430AA6415E64A0863B1EBEA1F6B27B;// 0x23E0(0x0128)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B76987724F71C9F0484463B4FDD42A24;// 0x2508(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FA399B3B44CFBB77963E5A90801F7A2C;// 0x2558(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AE51F1DC4006CD08BC182B825E4F06C8;// 0x2628(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6C6ECBD0470672D4E4E603BDF0EA0FE4;// 0x2678(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B8EAE37E41E2650F1F60EDA93A989824;// 0x26F0(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E07826874F5EEB965587EFAFC36CBAC5;// 0x2798(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D8DE98F34E6C54517892DFA0B76E98C3;// 0x2878(0x0050)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9F12D2D84161F0F91155EB91CECFD062;// 0x28C8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_E74DB3FF4BFB56A0BFEC01A8E5C8A3A2;// 0x2970(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_745C98E1489D5BCE2817D29C340091C5;// 0x2A18(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_65978A36478E002CE112B390997A164D;// 0x2AC0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_7896C49E4FFA726D9E95B1B6F91D1FF2;// 0x2B68(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_CE59F7E24ECDE71C0D7D4B97605CC1AE;// 0x2C10(0x00A8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9634303E47154355EA7CD097A0CACB2C;// 0x2CB8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1FACFE584623EB0CECC34E9D0AE4E7B7;// 0x2F38(0x0280)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3F4F773242B2B0D12ED551BBAFFC0A99;// 0x31B8(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F5011CE54787C509F7876C9875CADC31;// 0x3230(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2E1A1E841DC4B76F65A48846C5F2E5D;// 0x3280(0x0070)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3ECBF2D9457D7EB6798613AB14E3687F;// 0x32F0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0DF7E73C4717F5FA6BA546B43B990737;// 0x3570(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D190CD514FD8F661DDB024A96495D4DF;// 0x37F0(0x0280)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_992141C746FBD7432646FBB236F8A107;// 0x3A70(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5B79FC85486AA5D9E168408F5E90FF19;// 0x3AC0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E83D9F654394A9AAE6528AB3F0502A30;// 0x3B08(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_44EAAE044290160F14577FAF751488F5;// 0x3D88(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2C1DA3E94982157348EDA28EBB633232;// 0x4008(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5B79CED2447D206C1F24F19C3F8DB844;// 0x4288(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_818807804F937667F80506A8262A3008;// 0x4508(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_85E25CFD4E038DA969B468ACA6456A0E;// 0x4788(0x0280)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode_191437A14A9DE1BC33C8758BB4DDD797;// 0x4A08(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B2074ED041AAB652326B63BE5853CA87;// 0x4AD0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EB1F0D644D816A0C800A849AF79D99D9;// 0x4B78(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2F9AE81E44C3643E8B44CBB7FBAC2FB0;// 0x4BC8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4AED54D04F19471947AD21A7E6C7AED1;// 0x4E48(0x0280)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_81BFB611456D3A6F0CECA7AA20CAF68A;// 0x50C8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D66276C540A1836DAC10D4868BABE031;// 0x5180(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_090D52834C08AB9B3CECE49B6E369AC5;// 0x51C8(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_40930F7E4DA87FCEF16128BEBC23B615;// 0x5298(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2B499AF14817A61C9D9595B5C8EB354F;// 0x52E0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5B63215C41BBD613A9456CBE497187B5;// 0x53B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E1F0440C4076CA88589CADB1634763BC;// 0x5400(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15F546D3483E46AD2478F2BB4803CB39;// 0x5450(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_809128EB40ECBF4C51223FAB6A624AB9;// 0x54A0(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9D8CD60C408F5960FD697C91FFFF2916;// 0x5548(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B51C488042E5DB1E4026388C48A18732;// 0x5600(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BBF244CB4200AF79C627909AB41242D7;// 0x5648(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3BA8035B4A555949C4F7AAABF40F5F4A;// 0x5718(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9B8D3FAF4EE6619D5BC36BA6F2FCB696;// 0x5760(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45B7F0844162A0CB1EA1CFB9EF549B3E;// 0x5830(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1374ADD94797996FC260219B2335D67C;// 0x5880(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9CCE51F74FD4FC3DDE25EB85CE383A8D;// 0x58D0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9FDA824A4B9D65A31BAC73A35AE2B74A;// 0x5920(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B3D45D224AE151A3F11F27884D9B2E89;// 0x59C8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8756083E47C6D89F6633EE9EB158EA16;// 0x5A18(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_52ED63B4474645F7519D4FAB9CD0592B;// 0x5AD0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1B14C7CC487C6033A41A4C9EC2D4E071;// 0x5B18(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53F3A02B4C7A9E4FC92573BFF31DC4A0;// 0x5B60(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50E08A85460777B0FEF18DA81AFD4AC7;// 0x5BB0(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_48B253424333B12C185317B0D1EB82C3;// 0x5C80(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CF0A65CE46BD75A9B044ED9ABBD4A56B;// 0x5D38(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9273128A4D34422B4E8BAE9B89053EFC;// 0x5D80(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E7F8EF3243349825FA41419E3245BCCF;// 0x5DC8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B95478EA4F778A2939422CB86907B436;// 0x5E98(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_61C2406340DCC7EE281D38AF6CBAE41F;// 0x5EE8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_09F609AF44ACADEF401310833639C066;// 0x6168(0x0280)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E03107944E0025661C9F1881F72E88C6;// 0x63E8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_496418C74E9B0D8D8CAD878F0CC0BA67;// 0x64A0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_426B94D246C9A56AC9FFCD970B84E943;// 0x64E8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4309DDEF47927F756410E98BB136EC29;// 0x6530(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00BDB0734E589C9A012F7ABA0E96A459;// 0x6580(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9546D3D946707CF1C024698AD70AD14A;// 0x6650(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_381E0B2D4FBD888229FE949E9C5267FB;// 0x6708(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8B942467432C5D2D3A02ECB959F85F1B;// 0x67C0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C68C061C4A1CFC8E3787E79BDB255050;// 0x6808(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D5BAEBA446CBB4E40B56DF91E6E60AFF;// 0x6850(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6D5D2F79473D0469AD4B88B7AA450ABE;// 0x68A0(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_62A4098D4BCCCB43E9D44AB1CE32ACD5;// 0x6970(0x00B8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_B955CD1644851918C6A66484E9A0E399;// 0x6A28(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_91B9D958428218F7EA9B95B39012ACDB;// 0x6AD0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_0C339DB64EDF358298A528AB992F1C86;// 0x6B78(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_2F193ECE4D83839CED1D3786338517F5;// 0x6C20(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_AFC084E8410C7B1B2CD4B096853689D6;// 0x6CC8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_6972FBC64D7C508454F621B89BAB3C94;// 0x6D70(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9208335B4AEF7E6C9C81E8AFF0540697;// 0x6E18(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_946DBAE644DDC3CA2388CFB050C92E37;// 0x6EE8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B31DF46641A3C64B3916DD8144AE4B07;// 0x6F38(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CD13ECF49C1873DDCFE44BD6C0140B3;// 0x7018(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3D9C77F143F6268A6E5D6E95E715C74E;// 0x7088(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BECCEC04494586CCEE220085368CF2F7;// 0x70D0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BAEA93BA41028BF28324AF9CA5C3982E;// 0x7118(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3855DAEF40C4325EBB3D85BCC1216CE8;// 0x71D0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2F7DC6CE444FCC588BFBE9AF3DD32987;// 0x7218(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C7DE60B64D592FE59CBFF5A5F059FBE0;// 0x7260(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D79C110499AE29197F847BE5A1E4CD5;// 0x7330(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E9ADC70F497802A056C475A52038ED55;// 0x7380(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_02CC94AC46844B88B4384CBFE955EE14;// 0x7438(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_80816F3445A84808AA69BAAB4C112284;// 0x7480(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CF88A0F54F5472B10E4691A9BE86125A;// 0x74C8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_478863DB48C36F62D19F478E1C0CB4F7;// 0x7598(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1FD3D0F54CAF4EBA5D20469063206727;// 0x75E8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4104F5C940780DF5421902AB3F94BDF5;// 0x76A0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1C97FF3E44740638945DDFBA0ED214E7;// 0x7758(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_497A894F4BA22FD06FCA97A23131F24D;// 0x77A0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_01B2E6C8478B61DD58BD55844537E72D;// 0x77E8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2D8CBBD74794D3B15706D4B7EF046D63;// 0x78B8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4AFF8832468594BCA0571A9A3AD9F743;// 0x7908(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1BDF4D1442882F84FEFB9D9A831FA338;// 0x79C0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_17F6AD5B4E99BD5FE0ECCB8970949F66;// 0x7A08(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D8F1D2B24722C7AA14A674A6C3DA9D42;// 0x7A50(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9D9AB2174A863AB9AFCB89ACAA2E124C;// 0x7B20(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_94D929B6473F0517D42CDB8A06D5F25F;// 0x7B70(0x00B8)
	float                                              VerticalDirection;                                        // 0x7C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharSpeed;                                                // 0x7C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sam_PP_AnimBP.Sam_PP_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_D8F1D2B24722C7AA14A674A6C3DA9D42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_01B2E6C8478B61DD58BD55844537E72D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_CF88A0F54F5472B10E4691A9BE86125A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_C7DE60B64D592FE59CBFF5A5F059FBE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_9208335B4AEF7E6C9C81E8AFF0540697();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_6D5D2F79473D0469AD4B88B7AA450ABE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_00BDB0734E589C9A012F7ABA0E96A459();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_E7F8EF3243349825FA41419E3245BCCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_50E08A85460777B0FEF18DA81AFD4AC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_9B8D3FAF4EE6619D5BC36BA6F2FCB696();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_BBF244CB4200AF79C627909AB41242D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_2B499AF14817A61C9D9595B5C8EB354F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_090D52834C08AB9B3CECE49B6E369AC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_FA399B3B44CFBB77963E5A90801F7A2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sam_PP_AnimBP_AnimGraphNode_BlendListByBool_74D6E782446AAF72ABA2798BDD5EC091();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Sam_PP_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
