#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Human_AnimBlueprint_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Human_AnimBlueprint.Human_AnimBlueprint_C
// 0x6238 (0x68D8 - 0x06A0)
class UHuman_AnimBlueprint_C : public UGCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DA9C0B3240D6E6EE5CDDC9B5247D86F6;      // 0x06A8(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D75DCE554BB720CE416B08920C3109BD;// 0x0710(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_798F33A3443AD07A8C94D0AFC9E560C0;// 0x07F0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5173312F4DFCFE979AD4B9B8FC371E78;// 0x0898(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED1CF4A846E42F144E65B19C6E6A21D6;// 0x08F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2A3CDE464ED868397DEB9E9F4DEB7D9F;// 0x0970(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95398C3041CF20E87636CEAC975EF7B3;// 0x09F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD3EAB644F9B92361DAAC08B8C90E7AE;// 0x0A70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CEEE39C4E64AE523C04E18CAB5C6368;// 0x0AF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A119E7664DD28E5EB8B9A4B6AFF153CB;// 0x0B70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C51F601D4C10AB594DD7DDB99F20D768;// 0x0BF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73E58AC745AA5729D31D59AF19F3A008;// 0x0C70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_051DA7A0498C2484CB4D79B89B06DEA3;// 0x0CE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F8105D540CBDC5B95BE3DBED0B09016;// 0x0D28(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9ADE78A7426148B348E99EBB4DB60FEA;// 0x0D98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F829E3AC4EDA7402FEF2939F4CE43843;// 0x0DE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_30885CA245C1B8E055F5D8A2FB562E12;// 0x0E50(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3A142E4B410048259912CC90AF420ACC;// 0x0E98(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C851C04D4154ADE2A753BEBF34CBEC50;// 0x0EE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E2A051564E3E9E977D7E17902A266647;// 0x0F30(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DBC4D1E54CC7530584F278960E728DA0;// 0x1008(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6111D0814DB4D0F9174018A94C9F954B;// 0x10B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5E6560DF4838B5FDE0BB20AF0D57269F;// 0x1100(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7D49E23F4B45312509C80E973F52987B;// 0x1150(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_55E881A64CD546D484DEA4A491FBD1BA;// 0x1220(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7B60DD2145564D88B1AEA99AF89E30D5;// 0x1298(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7BAA2CDF4628B56073B5FCBEE591C769;// 0x1340(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A9BC60FE4AE5493A05A6238914A61847;// 0x1390(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D736E7AF4592141A3F2B5BA4FE3C3AD4;// 0x1470(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C97BC57B4506C98C712C64BA5895ACA4;// 0x1598(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_38C6DA4548AF4A54BCC98795419AA180;// 0x1640(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7BA7F7874B1778DE4EC53D8CE34A35EF;// 0x1690(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B85F7E7746C5EA8A9141348EFFDA5159;// 0x16E0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32F152D94CC2197ECC3B20A1F61CDEE0;// 0x17C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B0D549794655AC95409062BB2A917520;// 0x1810(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_23B49B37419E7697DE62EBBE882E901D;// 0x1860(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4D73BC6D425ED51ECEB0C4A28A8AE728;// 0x1940(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2CFF96EB45F19DD590B86FAA42222A49;// 0x1990(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52C5BE9149DA924B32ED8FB290D555CA;// 0x19E0(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FFE923B24CE30451376A59B4AEAF298B;// 0x1B08(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E3BEC08F44BAF3A3BE1F4FA11EDC6A8F;// 0x1BD8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B32199B94CEC1FCCB28C8B9D97F54B7C;// 0x1CB8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65F3B95840F68E6CBF1B44ACE07C65F3;// 0x1D08(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4B0BCCDD41EF4F819473239A0940684E;// 0x1D58(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7167EAF94BBBCCAA19D21DBA27C976AA;// 0x1E38(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_458359174EBF75886FD517841E4B0A58;// 0x1EE0(0x0048)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_B7537E2C4736B72E5A3A61BA5ECF105B;     // 0x1F28(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5B33597D44E4B49461E58F8B6B52F125;// 0x1FC0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B6898594C4D7E370BC4269A87267598;// 0x2008(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F40DFB234FEE59A7F0AC67847B189FBF;      // 0x2058(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3071C7234E35BB297F819491868A598F;// 0x20C0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FC7800F24BA8ABF3EE74E2B7933193F5;// 0x2178(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8E6F180F43A4BBE795910EA83D99683E;// 0x2230(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A3669107406C9B946ED02D9DE0BB5E93;// 0x22E8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62887A724B5125402DDD509B8CF65379;// 0x2360(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CADC174E4F401F3E6A1EA591FFF12E9E;// 0x23D0(0x00D0)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_0029203141706619C44B34B9BA875D1C;// 0x24A0(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_76E16F484BADEEE218BE64B194981AC5;// 0x2568(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6BD7ED4242A9FF3D3D3725B4736ABEB5;// 0x2648(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9DC85E0A4DA48DC6205921B36E83CCD8;      // 0x2698(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3CF8B05042D27CD33980ABAC2F5080A5;// 0x2700(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EEDEAD9142B309AB25C90386BDB23057;// 0x27D0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C2D4700B45B0CE6A3E759D94DE502EF3;// 0x2878(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4BC776D5418C3D12813F339B8000F8B9;// 0x28C8(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x2918(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98B97D214E17428BCC98EE8D8A01138B;// 0x2920(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_026332F24D48A0D58F10FE99CC99001D;// 0x29A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11534C894C634CD806B69AB3467E466A;// 0x2A20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_077AA3B44FFD11997CDC2F998B7546D2;// 0x2AA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23C34E9A416249F16728AAA667C04401;// 0x2B20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B06A45A4B700B622E9E13A69C0828A0;// 0x2BA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_02B528FE4987E2ABDF000AB67A64CC37;// 0x2C20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B72792E641BF4794E7AE51B06AB38EAB;// 0x2CA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41209C754613EA6B044B23B221DF5A6F;// 0x2D20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C1B7CA274443F57A03DABB9CE477901D;// 0x2DA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75FF0D09420590E27D8D6F9F09161CAA;// 0x2E20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13AB156840C100867C57E0805605328E;// 0x2EA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_349B04AB4CB52E365F284FA439D74F48;// 0x2F20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8959637F43844823313906A7D855C4FB;// 0x2FA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E28DA7E48AFA8FEC9D016A746F4A6D9;// 0x3020(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49AF02D745B46B0D28310DA7A947871F;// 0x30A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17E5A45A4A53FEA6E19C3FB73892AA01;// 0x3120(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B4D5573440DFA1DF95EC6BE26ABD213;// 0x31A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_661EB84D4CB49838ED6F40B297273D24;// 0x3220(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38BD97BD45CB114B22315291060DC14F;// 0x32A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5F0728A4AECF0228CBE6FA1E249DF68;// 0x3310(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_331640FE437337A5DDE8A48ECB408E48;// 0x3358(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_23D37743404303BE79923A912F324955;// 0x33C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C9C95EF40D85B7FA8BF1AACBE0BBD3B;// 0x3410(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5D08B7F84456F2CD6E4A2F82E3AD50DF;// 0x3480(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F50173E4402F6A880373949D6051D608;// 0x34F8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B8EDCEB74C73257858FE7A87935F258E;// 0x3620(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7A4AA13E43AC5AFE1E6401B1E4A709DF;// 0x3668(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59B9CF414D3D2A73ABA5B7A63BC01C65;// 0x36D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2DE16024AA906A5BB9E1E824AA5867B;// 0x3720(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_EBB9404F4E281B7EEBC612B243802972;// 0x3790(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0E060570484A4D0E68D8A0900AE1307C;// 0x3808(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C43BE07D413E195B3758D4803DC036CE;// 0x3930(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_60519E5B4BECCDEBF3BA93875CEE308F;// 0x3978(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_97CBF25349D5925A64FFC2B985FAF044;// 0x39E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A36C7852419856830821138827583FFF;// 0x3A30(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A0ACD4074BAEB23F2E6A37A7AA038F7F;// 0x3AA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_661472E74C047C38978EECAD9EF0FB92;// 0x3AE8(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_583B58CF4F87D4F43EAE618942CA1AA3;// 0x3BC0(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x3C08(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DDBBDBA148EC3E2F03780AB4238167ED;// 0x3C10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BFC872B248073557550F678DE41F3654;// 0x3C90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26F4E56B4ABD14D86AB2FAA7E3B43DAC;// 0x3D10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2A036E9C4F5EBF6242B14DA9FA65E8E5;// 0x3D90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DFBA423E4779CFFF240A5C96321D0B79;// 0x3E10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A30D6184719A317839268AA1CC261D9;// 0x3E90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF25E8A9431A7F9F2B4189907F2C78F4;// 0x3F10(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8BAA4142401D921D082A168E5BBA55E1;// 0x3F90(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_105840DD41FE19DA45F3358656A1AEAD;// 0x4010(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C6F3D45846D1D7006906A49E1F1C872C;// 0x4090(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F01452CE43F8DE1428B7318180879268;// 0x4110(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FEF453044F7BB40E2557DCB658D47F21;// 0x4190(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B95A966948BD22077E1E8AB85E2668D2;// 0x4210(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99590B894C113941A987C69C54BDDE03;// 0x4290(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B7267D64BE86D01026E72849CAD7947;// 0x4310(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05E0F4164ED0B4272260C991B7E90370;// 0x4390(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CECA62D41235B16EE0CB582B44743ED;// 0x4410(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E52FFF149C595F7FA8ED9BA8AAE6856;// 0x4490(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A30BFD754BE81136B92AF4B0B518A06D;// 0x4510(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9BE14D474C4D347ABA9F7FBBB28EBE61;// 0x4580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F14AAD54B5E1D71B197FF91EA186CCB;// 0x45C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6A59D394402541B7AFB8BD8FC5B19272;// 0x4638(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB667B23433F5D5ABD4965ACEF362780;// 0x4680(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_20A37F174D702DDC1BCFEEA70E40E9BF;// 0x46F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4C366C9422A5F1BA15F6DBF6CC22B93;// 0x4738(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3E001A514EEDD5EE1F076593A34BEAD1;// 0x47A8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_99886B444875153C2C6763938DAFC72E;// 0x47F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C698C966407DCD878AFDBEAEADBFA1A2;// 0x4860(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D03B5B64856924885E87F9914EC9EB0;// 0x48A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A3C241F4158E026977995AD0CD01DC3;// 0x4918(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7C46CA6A4D60BD18BB760FAEC562739B;// 0x4960(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3A54532A486AB4193FAFC1A50AB0236C;// 0x49D0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E6376EE04338048ADD31268A475A8825;// 0x4A18(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_359A93694E9575B767A087B81EF0B800;// 0x4A88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F1DA7F9493A47017D4D75A0BC7D15B0;// 0x4AD0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A1B73818418A568DBD6E298DC94ADDC0;// 0x4B40(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2A6BF11043561E55AEA29D86E9909840;// 0x4B88(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_26DA94A8454B0B9F224901A2145E2FD9;// 0x4BF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_51A20CE4457938E65D34A28EE09D073A;// 0x4C40(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD8E4E3542BA0D0A5F3A97B10763A4B8;// 0x4D18(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_49D20B04492555375A5050A6AAC2014C;// 0x4D60(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B1AC03984400D68744BC3B98A3A98F9D;// 0x4DD8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00F7E14249649D5CDE84AA9883508F4F;// 0x4F00(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8506F5BD47B282F28157D6A7F4FED2FE;// 0x4FD0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6793776949107414BD53CC8592AE926B;// 0x5040(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD77B24847114417F937C2AD0EACF68E;// 0x50B8(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E4D7EAB64D49E799AFF335A94FDB4D92;// 0x51E0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_889CC1504AC8B02B4E23248F3D656337;// 0x5250(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88843CDA4540FC74F899F5A4A10B6C5F;// 0x5320(0x0070)
	struct FXAnimNode_SpeedWarp                        XAnimGraphNode_SpeedWarp_F3B3F0DE4E59339C4BCC8D9145D899C1;// 0x5390(0x00E8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C17D761E4C381E851B9D7FA6DEA5CA1E;// 0x5478(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D0B34FFB4FC1A4FAEF516B81F22C4FD8;// 0x54C0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E75C65E14BA9DD082CDFC29042CC78EE;// 0x5508(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D9DE5AAD4D236648E00EAEA8EC74B2A7;// 0x55D8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13DF2DA744CE0C27A18D5299961EAB64;// 0x5700(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FB8E77F24F7F706233FE60806120BA0F;// 0x57D0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A6A098D642F31D053879209581DAA2E2;// 0x58A0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85BF7A66496EEAA7A242D59043B23713;// 0x5970(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26F60FCB4D93BE682B06AF81C017C5FA;// 0x59E0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63E90FC142DF9713067D67893F29BD09;// 0x5A50(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5C7F499245B5A5C32FD65E813980BB77;// 0x5AC0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB7D48D540E2961F75EA34BEFE9B036F;// 0x5B90(0x0070)
	struct FAnimNode_OrientationWarp                   AnimGraphNode_OrientationWarp_8B9D4DBF4ED27C7903A0569CC7FF7787;// 0x5C00(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9FAF1FB04C0EDCB25AD8AF91F9C4858A;// 0x5C80(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_485BAFAB4B693F16DEA09694D644F3AC;// 0x5DA8(0x00D0)
	struct FAnimNode_OrientationWarp                   AnimGraphNode_OrientationWarp_CDB00C754C4F6F3A0B1F5381EC355CD6;// 0x5E78(0x0080)
	struct FAnimNode_OrientationWarp                   AnimGraphNode_OrientationWarp_076E921D436850AC40282D96F771DA39;// 0x5EF8(0x0080)
	struct FAnimNode_OrientationWarp                   AnimGraphNode_OrientationWarp_800B319B43CA841C351E21BCCCE60F0D;// 0x5F78(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8548B6D743926831C841C592AD8459BD;// 0x5FF8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C25B7C447A294A8E66EEB9C3E4EF9FA;// 0x6068(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C13C3A184613CDF0B872E6BA217B2778;// 0x60D8(0x0070)
	struct FAnimNode_OrientationWarp                   AnimGraphNode_OrientationWarp_1CC1B99D445D39BAC7A2D08D7D6B025A;// 0x6148(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C9C810A54E604CBFDE31708A66A1D186;// 0x61C8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19F7FB1A4C9DF7AD8C33D4A8DB123F1D;// 0x62A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C4ED4FB2495244133D2013A8AF2BDAD1;// 0x62F0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_93DA0E1845F370FF73344A9D35EF3CC3;// 0x6360(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB95F0C149C1895B39570E9D0161142B;// 0x6430(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F2C53C7540DB9500DFE916BC3831C09C;// 0x64A0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FDE3860944581296D3AFA7A322C1FBA6;// 0x6570(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_840A12894C287542F4CC17AF2D4F43CA;// 0x65E0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B69AEE5427BE5A4F9E9FABB0D72BFA8;// 0x6650(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2EB124D545FE55860C59AAB39731ED86;// 0x6720(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_04E5DF184183B03E5C4B3E85C6A717C4;// 0x6768(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_Root_647C70B04314BD094A4BE99FFADE96D4;      // 0x6840(0x0048)
	float                                              LocomotionDirectionBlendTime;                             // 0x6888(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JogSpeed;                                                 // 0x688C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintFootstepThreshold;                                  // 0x6890(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x6894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintThreshold;                                          // 0x6898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlaybackScale;                                         // 0x689C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlaybackScale;                                         // 0x68A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x68A4(0x0004) MISSED OFFSET
	class UAnimSequence*                               LandingUpperAnim;                                         // 0x68A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSidewaysLean;                                          // 0x68B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentLean;                                              // 0x68B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMainMenuCharacter;                                      // 0x68B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x68B9(0x0003) MISSED OFFSET
	float                                              LandingVFXMinSpeed;                                       // 0x68BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter_BP_C*                       CachedCharacter;                                          // 0x68C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               FullBodyOverride;                                         // 0x68C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimAllowsIK;                                             // 0x68C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AcceleratingOrInAir;                                      // 0x68CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlendIK;                                                  // 0x68CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MouthLocation;                                            // 0x68CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Human_AnimBlueprint.Human_AnimBlueprint_C");
		return ptr;
	}


	void UpdateHandIK();
	void ShouldDisplayVFX(bool* bShouldPlayVFX);
	void PlayLandingFX();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_75FF0D09420590E27D8D6F9F09161CAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_13AB156840C100867C57E0805605328E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_349B04AB4CB52E365F284FA439D74F48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_8959637F43844823313906A7D855C4FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_5E28DA7E48AFA8FEC9D016A746F4A6D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_B72792E641BF4794E7AE51B06AB38EAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_49AF02D745B46B0D28310DA7A947871F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_17E5A45A4A53FEA6E19C3FB73892AA01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_7B4D5573440DFA1DF95EC6BE26ABD213();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_661EB84D4CB49838ED6F40B297273D24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_02B528FE4987E2ABDF000AB67A64CC37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_F50173E4402F6A880373949D6051D608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequenceEvaluator_7A4AA13E43AC5AFE1E6401B1E4A709DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0E060570484A4D0E68D8A0900AE1307C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_0B06A45A4B700B622E9E13A69C0828A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequenceEvaluator_60519E5B4BECCDEBF3BA93875CEE308F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_DDBBDBA148EC3E2F03780AB4238167ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_23C34E9A416249F16728AAA667C04401();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_BFC872B248073557550F678DE41F3654();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_26F4E56B4ABD14D86AB2FAA7E3B43DAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_2A036E9C4F5EBF6242B14DA9FA65E8E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_8A30D6184719A317839268AA1CC261D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_AF25E8A9431A7F9F2B4189907F2C78F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_077AA3B44FFD11997CDC2F998B7546D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_105840DD41FE19DA45F3358656A1AEAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_C6F3D45846D1D7006906A49E1F1C872C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_F01452CE43F8DE1428B7318180879268();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_FEF453044F7BB40E2557DCB658D47F21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_B95A966948BD22077E1E8AB85E2668D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_6B7267D64BE86D01026E72849CAD7947();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_05E0F4164ED0B4272260C991B7E90370();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_5CECA62D41235B16EE0CB582B44743ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_4E52FFF149C595F7FA8ED9BA8AAE6856();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_A30BFD754BE81136B92AF4B0B518A06D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_3F14AAD54B5E1D71B197FF91EA186CCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_11534C894C634CD806B69AB3467E466A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_CB667B23433F5D5ABD4965ACEF362780();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_A4C366C9422A5F1BA15F6DBF6CC22B93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequenceEvaluator_99886B444875153C2C6763938DAFC72E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_5D03B5B64856924885E87F9914EC9EB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequenceEvaluator_7C46CA6A4D60BD18BB760FAEC562739B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequenceEvaluator_E6376EE04338048ADD31268A475A8825();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_026332F24D48A0D58F10FE99CC99001D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_9F1DA7F9493A47017D4D75A0BC7D15B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequenceEvaluator_2A6BF11043561E55AEA29D86E9909840();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_B1AC03984400D68744BC3B98A3A98F9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_00F7E14249649D5CDE84AA9883508F4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_FD77B24847114417F937C2AD0EACF68E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_E4D7EAB64D49E799AFF335A94FDB4D92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_889CC1504AC8B02B4E23248F3D656337();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_XAnimGraphNode_SpeedWarp_F3B3F0DE4E59339C4BCC8D9145D899C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_E75C65E14BA9DD082CDFC29042CC78EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D9DE5AAD4D236648E00EAEA8EC74B2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_13DF2DA744CE0C27A18D5299961EAB64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_FB8E77F24F7F706233FE60806120BA0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_A6A098D642F31D053879209581DAA2E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_5C7F499245B5A5C32FD65E813980BB77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_OrientationWarp_8B9D4DBF4ED27C7903A0569CC7FF7787();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_9FAF1FB04C0EDCB25AD8AF91F9C4858A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_485BAFAB4B693F16DEA09694D644F3AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_OrientationWarp_CDB00C754C4F6F3A0B1F5381EC355CD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_OrientationWarp_076E921D436850AC40282D96F771DA39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_OrientationWarp_800B319B43CA841C351E21BCCCE60F0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_C13C3A184613CDF0B872E6BA217B2778();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_OrientationWarp_1CC1B99D445D39BAC7A2D08D7D6B025A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByEnum_C9C810A54E604CBFDE31708A66A1D186();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_98B97D214E17428BCC98EE8D8A01138B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_3CF8B05042D27CD33980ABAC2F5080A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_CADC174E4F401F3E6A1EA591FFF12E9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_ModifyBone_8E6F180F43A4BBE795910EA83D99683E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_ModifyBone_FC7800F24BA8ABF3EE74E2B7933193F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_ModifyBone_3071C7234E35BB297F819491868A598F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByEnum_4B0BCCDD41EF4F819473239A0940684E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_FFE923B24CE30451376A59B4AEAF298B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_52C5BE9149DA924B32ED8FB290D555CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_D736E7AF4592141A3F2B5BA4FE3C3AD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_7D49E23F4B45312509C80E973F52987B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_93DA0E1845F370FF73344A9D35EF3CC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_F2C53C7540DB9500DFE916BC3831C09C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_BlendListByBool_1B69AEE5427BE5A4F9E9FABB0D72BFA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_F829E3AC4EDA7402FEF2939F4CE43843();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_C1B7CA274443F57A03DABB9CE477901D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_6F8105D540CBDC5B95BE3DBED0B09016();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_SequencePlayer_73E58AC745AA5729D31D59AF19F3A008();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_C51F601D4C10AB594DD7DDB99F20D768();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_A119E7664DD28E5EB8B9A4B6AFF153CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_9CEEE39C4E64AE523C04E18CAB5C6368();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_95398C3041CF20E87636CEAC975EF7B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_2A3CDE464ED868397DEB9E9F4DEB7D9F();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void OnLanded(float* SpeedDelta);
	void AnimNotify_Footstep();
	void AnimNotify_RecoveryStart();
	void BlueprintInitializeAnimation();
	void AnimNotify_Jumped();
	void AnimNotify_FinishedEnteringFlying();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_AnimBlueprint_AnimGraphNode_TransitionResult_41209C754613EA6B044B23B221DF5A6F();
	void ExecuteUbergraph_Human_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
