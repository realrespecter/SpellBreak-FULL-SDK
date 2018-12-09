#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Marla_PP_AnimBP_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Marla_PP_AnimBP.Marla_PP_AnimBP_C
// 0x5BE0 (0x5FB0 - 0x03D0)
class UMarla_PP_AnimBP_C : public UGPostProcessAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_3B005FF14AB0C44DF43EE7889693CDE9;    // 0x03E0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_6565FA1A4A0523B715717C9C3644BE36;    // 0x0580(0x01A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6E10A5C14F29507D24760C97DA391A43;// 0x0720(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_085B9FD248E342546FC1998385C302C0;// 0x0768(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A75B08CD45810E4A45895A92C76CF3A7;// 0x0810(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_855FD1874CBC9EF3CEDAC380C5BA9D7E;// 0x0860(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3D7850554131FAD82C8DE9B55D1BBD2C;// 0x08A8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_7448DF7B4DE32EEE7A76A78857FAB90A;// 0x0950(0x00A8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x09F8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0791E6D24542DECC97307CBF2F7F4A12;    // 0x0A00(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_6D1AC07D4D51B8231779E7A2AAE55E75;    // 0x0BA0(0x01A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_21F9BB5E47424098AC202C96B3BB6E5D;// 0x0D40(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_819D4AB949D5283125E810818A01A6CA;// 0x0D88(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_EBE55AE34A420644868E358EAA1F0345;// 0x0E30(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9A4ED7634F69AE7C3D82999D59E5079D;// 0x0ED8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_A2A8517146043AAAE308A6B9644A0B64;// 0x0F80(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9A873CA141096F4DC294FBA786E68902;// 0x1028(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D8B7066D4E9353550C1C6B8BE8774B8A;// 0x10D0(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_29CA83994F0E27602B2D788D6A360DAC;// 0x11A0(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4795F93545073AE063F41DA306C52CC3;// 0x1218(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85611F5F438CE7428ACB0788498D8AA9;// 0x12C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6CE8C5D54606715A96E13F9A84F1F7A8;// 0x1310(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6454748B4F5637A9761994BA590BE7E9;// 0x1360(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4CF427DE494A559412F779950744BD2C;// 0x1488(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2FB5FC7345526904A7766C8182EAC39C;// 0x1530(0x0128)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2CBD422548652A0955C39E9F366150D1;// 0x1658(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4F91013F44FA79E1F52C5EA1C2DD156F;// 0x16A8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F04A4B84FC03E4623C010955C304605;// 0x1778(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10F7B17045ACB03DCB4ED4AA505797F4;// 0x17C8(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0C6A020A4E1948DDCD23269CE1E7FE27;// 0x1840(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E7B386B14ABC42F02B59A5893701AA6F;// 0x18E8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E6A535004886C3EEE2963B851C0114EB;// 0x1938(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ABA121604450BDBA2DD7688012C20B3E;// 0x1A18(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7DC7614D4169A665FE4C218326BA34ED;// 0x1A68(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7C3EBDF040EDF2BC2F4DAEB64451AF95;// 0x1CE8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6CC4F48A4E8D8D1FF7E489ADAB265A1F;// 0x1F68(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_45BE0BF04DC1665F296E5F87E00B741B;// 0x21E8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_791C426346677F57CF21F8A521EB37E6;// 0x2230(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_677F90AA475A87421222EFA0C2330414;// 0x24B0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2808B33B4AB34DF5152114B46C24C8B4;// 0x2730(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9DD22A2647FC081D4EB49B92CEE957DC;// 0x29B0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B0AE50F44F5E3FFD9AF3FDB07BDC56A0;// 0x2C30(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6C6614E7445513DCF18206851B85830F;// 0x2EB0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D56584D040AA32BA054BF7996D929298;// 0x3130(0x0280)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode_F4989F1F4B749ED988D18788FD8E7FDD;// 0x33B0(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FB443FFE485046FE7FA6F69AC041043C;// 0x3478(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FF8C39E840EE65ADF9D15CA12D637355;// 0x3520(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4A815E3E479B2DB07C900A89C87F6458;// 0x3570(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1FAB636E4153C26FA913D2936D7447E4;// 0x37F0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_26CE89464A8574A0D4DD469930296D59;// 0x3A70(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A6F4418449CBCB871E56CD93179B4F54;// 0x3CF0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AC79DECB443D52AB0649F880F7FC49BD;// 0x3F70(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5A1052E54314716117DE0288C3C392DD;// 0x41F0(0x0280)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_A96B51BD459B7DF79DDB93A2A948E118;// 0x4470(0x00A8)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_964C33734ECBCF0166C63BAA182229D5;  // 0x4518(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DCB4B3514BC1C6A4E24D21A5ED9ECD6F;// 0x4580(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B8949AAE4662A988923303B7BE78AFDA;// 0x4638(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1EC5F89C4420D9273F61A59B923B7BCC;// 0x4680(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25AF4D404E33F428B521BDBA70505CC9;// 0x46C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B32EF1DB41B30E0B49616D9F867147DB;// 0x4798(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A4E563114BEFFA3C258B328DDE2985F1;// 0x4868(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85D0169E4D1201154A3958921C89D3D7;// 0x48B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FB2DCA894A5F76C59FB6AB8B3D7BDAF3;// 0x4908(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CF610404416AD7A1547231A729553AE7;// 0x4958(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6219F9E54B86D4FC07947E93BA2B32CC;// 0x4A00(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5D6326244C4137640BAB309893662ED8;// 0x4AB8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75C674E4443BA9CE3DED01A031457FD3;// 0x4B00(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4A9965A54E5358E615A7A5AE64DDBA58;// 0x4BD0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A76780A24869AF6A8822A9B7DBEB299E;// 0x4C18(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F9AE36A416CBA47E1C6BDB5C0EBDB78;// 0x4CE8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B309B3BD493AEBA8754E73BBC9DED6D9;// 0x4D38(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A00A6AF2499962E1D20C9D9B3F86E552;// 0x4D88(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D544258B40C8E739C357EE8098B1BD83;// 0x4DD8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E733BC714EA3FCD9B7227DBD7E13FB5D;// 0x4E80(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_Root_9138E1E848F864456A30BFAA5D5638F0;      // 0x4ED0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D6440C934003B325312385A33F0F556F;// 0x4F18(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8996EE2C49BC8D771B2643AE8CC6FE22;// 0x4FD0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_02E4508844BC1C3E2EFD66BB8C3EEB8C;// 0x5018(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EA389CE94EF8EFE2E23B94B2B70EF68C;// 0x5060(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38AB820E4E28FAB7853E47BE515F7C62;// 0x50B0(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7E222BF147801A89A0EEA1B5FD6EBD33;// 0x5168(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DEF8FC924B396D16E50CAEBA51DFC8D8;// 0x5238(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1ACF07EC457DD58E842935B1B8FE2A58;// 0x5280(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A56AA7554E0900F3E8AF6CAFFFEBB6BE;// 0x52C8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_722F619F4E234FEF47C8AD888058242E;// 0x5398(0x0050)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_958790A748741F1D2EBA16806EBAB6F6;// 0x53E8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_096200BE4EA8917F3A7E50B105F4AF74;// 0x5490(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_32823C664995E00E9DDC7ABEBEB1D5F4;// 0x5538(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_62BAEFFD4FBFB32D2C28FEA6081F7AB8;// 0x55E0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_A05E4FB44E53D95D7B25DCBE9509FA5A;// 0x5688(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_72C0E27848B90CB94436E5B0B2D16B82;// 0x5730(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3FE4BBDA4FE8AB5B9B500BB23AE74E58;// 0x57D8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E1FFB0A942E2BCF20F51F6A7E0E12AC0;// 0x58A8(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_47211CF442E383D513FC4D9A8F9ADC5B;// 0x58F8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C610C4F2439D23DB3CBEABB8CB064DCC;// 0x5940(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_325787374CDD59D52FA2BC8E21A989CA;// 0x5A20(0x0070)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_464BAB1C41B1CEEED2895C970404C4D3;// 0x5A90(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F0FCAD7248D472FE57AB21B0749BDF99;// 0x5AD8(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18DE1BD34F8DF5E23C0D378E4C362D46;// 0x5B28(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DAA2CBCA4ABA74204690639736167233;// 0x5BE0(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_92F5282343C1993EC747B0BDE2696590;// 0x5CB0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D3505FC34FDF3640A7F5DCAAB58FDB38;// 0x5CF8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5A671E424881001C89E2429EF5058059;// 0x5D40(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0861AB234ADFF861C7041EA771DADBDB;// 0x5DF8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_665F795C4613E877BF20F19DB5628928;// 0x5E40(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C01E3D2244F1E6A3B0D5D486FA9FE727;// 0x5E88(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1AFE339A44A5A364CFC8D3845925490E;// 0x5F58(0x0050)
	float                                              VerticalDirection;                                        // 0x5FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharSpeed;                                                // 0x5FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Marla_PP_AnimBP.Marla_PP_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_C01E3D2244F1E6A3B0D5D486FA9FE727();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_DAA2CBCA4ABA74204690639736167233();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_3FE4BBDA4FE8AB5B9B500BB23AE74E58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_A56AA7554E0900F3E8AF6CAFFFEBB6BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_7E222BF147801A89A0EEA1B5FD6EBD33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_A76780A24869AF6A8822A9B7DBEB299E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_75C674E4443BA9CE3DED01A031457FD3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_B32EF1DB41B30E0B49616D9F867147DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_25AF4D404E33F428B521BDBA70505CC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_4F91013F44FA79E1F52C5EA1C2DD156F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marla_PP_AnimBP_AnimGraphNode_BlendListByBool_D8B7066D4E9353550C1C6B8BE8774B8A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Marla_PP_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
