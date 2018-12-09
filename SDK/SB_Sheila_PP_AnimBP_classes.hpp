#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Sheila_PP_AnimBP_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Sheila_PP_AnimBP.Sheila_PP_AnimBP_C
// 0x4A88 (0x4E58 - 0x03D0)
class USheila_PP_AnimBP_C : public UGPostProcessAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3249125248E221CC4451ECA0087623CD;// 0x03D8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_ACBD0F2C424DED1D69CF4AB276E63BC5;    // 0x0420(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_29AF1D8D4532DA74B43CFB96DFDED52A;    // 0x05C0(0x01A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_091D167C49D29B2665800880E6D54DBC;// 0x0760(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_398F317D4437732BDAADEE85666C4533;// 0x07A8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A131BF9841CB30D3690CB2AA5994BBA7;// 0x0850(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2E418E0B484DE53B63E29A8F363295B6;// 0x08A0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_42AAEBF44A40DCFDCEEBF89B0E2295AE;// 0x08E8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C017A8484453702FBF121CAFA5F8757B;// 0x0990(0x00A8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A38(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_20DD4D264E96B825972E21945706D49B;    // 0x0A40(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_BC729CF64460BE61DEF3D6AC20BB3959;    // 0x0BE0(0x01A0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_28CECB194C904934BD901DA6B2FB7F42;// 0x0D80(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9899233D4FA758A8CE1AF98D500101F7;// 0x0E28(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_FCC8EFF94C746632066EFA9D1E061C04;// 0x0ED0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C7BE6E2445CEFAD81EBFA5AD78BCFF68;// 0x0F78(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_6BD768704FD32E4E22A927AEAA3CB002;// 0x1020(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_35D57EAC468A0EA25F64CFBFFBE26B0B;// 0x10C8(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5DF161BD45A62FAC470FC4B5009B36E3;// 0x1170(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BEDDD4C54B2F139C0DCAE3812CFBD23C;// 0x1240(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4C0FDC5448C42DB1E62984AF33A017D9;// 0x12B8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_990D33E34E515D818B7CAC8039BED3C2;// 0x1360(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_077EE3814067B05F6FA39BB4B8F86F9C;// 0x13B0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F1563411403A8DBE89CE2BA45E66C096;// 0x1400(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D18CADA04CA3130D13387EA58342722E;// 0x1528(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B661E261462C7CBBE3E8E181A35AF400;// 0x15D0(0x0128)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F1705FBF410B46AEA154DC9FE719D741;// 0x16F8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18F2478C4641679B5F8D8AABE369A512;// 0x1748(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D8A672194A3A1F2DF20E9E96EE80CF1F;// 0x1818(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_91669BBE4818C51794282A9B8A88218F;// 0x1868(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1AD616DE4C688BA74EE6BDB0E4A0FD26;// 0x18E0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3303EA134BFC4CA05FD923A466A0C3A9;// 0x1988(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1A26AC944D7B379660D0E2898A065316;// 0x19D8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3CC3CF84422EA4564BE301BA48AC9265;// 0x1AB8(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B6F3888B4A1FB6D385303CBB95F3B791;// 0x1B08(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5487879047BBE7E49572C093FA5CD7C0;// 0x1D88(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_58A3698249F53234E1FB2B89E65A53D1;// 0x2008(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72B0D21D46961C0E61DE7581219949E6;// 0x2288(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DD1C8B5A4CD9378107B45387B7667528;// 0x22D0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_191A895942FF7DC6104A8F867BF08889;// 0x2550(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B163BA254AD828C62EE396BB5863AF96;// 0x27D0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B75DD824432C4BB4A653AE9E5018E08D;// 0x2A50(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8F333275476BA75AF52F7A86AFF51C84;// 0x2CD0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_782A657C4DBA510FA9EA558C862CF8C5;// 0x2F50(0x0280)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode_46D86FDF42E5394AE01CFE8360813135;// 0x31D0(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_49EF031F4AD55CA602D77C87936A0F10;// 0x3298(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70BEAAB14692DC68FD5A6C9A671A3697;// 0x3340(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B1C07E414ABE5776522860B8DF2E7785;// 0x3390(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AE9A8E35469420B0FADC23A2DF2C11A4;// 0x3610(0x0280)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DFC98DC14120D1F91720F3A026B690D9;// 0x3890(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5113A36940981597782E96843BAE5FFF;// 0x3948(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DCDB0B0C45D50702E26A068EB076888C;// 0x3990(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2490F9B1458A24F7641F82885D8D8B86;// 0x39D8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_182D7F644EA3BF32E8B8C8BD9E754F42;// 0x3AA8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21AD132342F78C00C78F63AF792BDA26;// 0x3B78(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1AE470EC4748E2F27807F3A02184EE00;// 0x3BC8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C9A4ED8D4C40B68969B4EE89E43BF3FB;// 0x3C18(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C534EE824240FF248F0AD8A45759FA41;// 0x3CC0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1CDB57244FC0AD06BFDD16BB03356FBB;// 0x3D78(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9F7DB82B43F168548E9A31B1F38EEF89;// 0x3DC0(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E81AD5124DDEA83CA744918BBB4EEAA7;// 0x3E90(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8FB0F0AE46829ACB9D817A9976281502;// 0x3ED8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AA42D34C4EFAE74B4D4414B64D490ADB;// 0x3FA8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8DD1B6254D5DAEF938D92CA325EDB478;// 0x3FF8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8067C2FC419FF276AB91B4A9FC9CA910;// 0x4048(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A20D184344238C52ACD8FDBD11F0BB8B;// 0x40F0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B76314D24719ABFD488BECADC8F83EB1;// 0x4140(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FAAEE0384892AA8723656CA4504F592E;// 0x4190(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F075AE2B4B20F7211DB4A28ED1410B8C;// 0x41E0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FB4F88D04155009DA387C795E3F59DA0;// 0x4298(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0DECE944467AAD95D4FD3C848390BB9C;// 0x42E0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6D66E4A1404F34E57F3E439A78EA7CBF;// 0x4328(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F3CFC33446F5AFE08A0E26A781D7167C;// 0x4378(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_323C4D8F4202EF2031BEAD8FE72F596B;// 0x4448(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AB14242A4A0B2D42494D1BBEDF1322A4;// 0x4500(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0DA9DCD24109132B6C55D7847A7EAC62;// 0x4548(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5060EDD94B2BD6DE743751BCC3B7A4AB;// 0x4590(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E41B49664C1CA897683C5596599149A5;// 0x45E0(0x00D0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_254873B14B818E9CFB5B988B3997807E;  // 0x46B0(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_F24F24104A610358CD040FA4C7E3783E;      // 0x4718(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_1C7C20E24DA925BE4814C59F5CDA3959;// 0x4760(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_0B374778425CDE44EE0E97985C428FAF;// 0x4808(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_B22BB9754746032B73356B8110207FB8;// 0x48B0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_3B9C3E864EF835732290B6916E6898BC;// 0x4958(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_FE5E79A54349AB2E860E419BE7108DF5;// 0x4A00(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_4B601A364B2967B90B72F091D78A284B;// 0x4AA8(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A6910DF444954DF427C76BF9EAD8374;// 0x4B50(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_860C7FD8474A46EA3F7966A20E8AC855;// 0x4C20(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A871339941B417B8DE63F2A57903FA3D;// 0x4C70(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_293834764194448BCC539AB56973F52C;// 0x4D50(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_19CFB6D84453DA8FCBA749B75AE753CA;// 0x4DC0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0DA9E828447F094A11037C868029A11C;// 0x4E08(0x0048)
	float                                              VerticalDirection;                                        // 0x4E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharSpeed;                                                // 0x4E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sheila_PP_AnimBP.Sheila_PP_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_0A6910DF444954DF427C76BF9EAD8374();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_E41B49664C1CA897683C5596599149A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_F3CFC33446F5AFE08A0E26A781D7167C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_8FB0F0AE46829ACB9D817A9976281502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_9F7DB82B43F168548E9A31B1F38EEF89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_182D7F644EA3BF32E8B8C8BD9E754F42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_2490F9B1458A24F7641F82885D8D8B86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_18F2478C4641679B5F8D8AABE369A512();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sheila_PP_AnimBP_AnimGraphNode_BlendListByBool_5DF161BD45A62FAC470FC4B5009B36E3();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Sheila_PP_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
