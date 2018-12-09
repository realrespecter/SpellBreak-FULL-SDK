#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Marcus_PP_AnimBP_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Marcus_PP_AnimBP.Marcus_PP_AnimBP_C
// 0x60D0 (0x64A0 - 0x03D0)
class UMarcus_PP_AnimBP_C : public UGPostProcessAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B93319004C16B2AEAA64FC82E9A8B320;// 0x03D8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A56FC3964ED21AA3F4E7A1943FC3574A;    // 0x0420(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5C1E246F44F4B3A203D6178D4876D5D7;    // 0x05C0(0x01A0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9005F86A442D207CE40F3CA0747873EF;// 0x0760(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A0F3BA1047711CD854EDB1BF3C5EDD78;// 0x09E0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_464F2BB54A6DC91F2176E79D512FE0FA;// 0x0C60(0x0280)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7E04D11F44E82F1663A9FF8BCC85F0E0;// 0x0EE0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FA7EE94A4736F78CFDEED0BA8BDF34FF;// 0x0F28(0x00A8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CBEE2C9C41EDEBE8346780B025C93420;// 0x0FD0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BECFBD724DC12620F3D456855F48A59C;// 0x1250(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4C3F975342678E4335915FB336BA6B12;// 0x14D0(0x0280)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D075F2B14E594E71324E0B8AD6C16AA0;// 0x1750(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FC0F59F0485F411A08E9B4B927043C38;// 0x1798(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_E5D97EC643673EF153B6BD8E48A00DC9;// 0x1840(0x00A8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x18E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F61C36B74F4F6DC326E2F880AA7C6349;    // 0x18F0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A828E15E4F6DEBC065BE6FB0E5D8D405;    // 0x1A90(0x01A0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_8493DF6C4111B1718B80249DB3965086;  // 0x1C30(0x0068)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_BA81617B4220AF7AF013C284DEA8F36E;// 0x1C98(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_04AA917A4442347D34552FB331921536;// 0x1D40(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_Root_6139A67E41A7FF49198B0A82ADE6AAF3;      // 0x1DE8(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_95427DD646DC1B210A23F29086D46895;// 0x1E30(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_25A0F2C142AC1A95C225C8AF51361690;// 0x1ED8(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C4A6FB0C4887FFF050BAFABC0E355FB1;// 0x1F80(0x00D0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C2BACF51485DA1EFE01D3DA396B01AE2;// 0x2050(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A52C9146460B8150B050FC9184069DD5;// 0x20C8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8A3874A54297EA2C3C0A4AB6ED77C9E2;// 0x2170(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4E8274C64B8A85B8154532B8DF1F8871;// 0x21C0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4D0A968C44DBE7DFE8A3A1B75EEFF30B;// 0x2210(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_564E740C4C2B7E656E3F6684BFB67844;// 0x2338(0x00A8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AD4DE1A547C9B1B694A6CBA2BB901023;// 0x23E0(0x0128)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_665FFCD64628ADBCC9F160A024D8CF8A;// 0x2508(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD8A9CE14AE822C1B146DC87D28F5759;// 0x2558(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1EBFCAA043012CE299F5A39EC27420F1;// 0x2628(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6B18391D4B72D685241E588B455009E3;// 0x2678(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_61722B0F485DE9DA6B4C3381D42A729C;// 0x26F0(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3E1A0B6D437A859783CED6985A0E5B58;// 0x2798(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D371107E40D0414808A273BB56FDF860;// 0x2878(0x0050)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_B986D6E7435013DF490598899CE0E43B;// 0x28C8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_44ABFF9348C914B4962DCE9D411B56F0;// 0x2970(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_4562F6734BD6A737CA5BFBB512752C00;// 0x2A18(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9916524747A821A4309A7BA8BFCE67D6;// 0x2AC0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_7775EE5143CEC3547C3ADA960D4D1784;// 0x2B68(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_3E1007F346CFEEB0B02FF289B9B0B130;// 0x2C10(0x00A8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8C119DAC4A267C3BF32BDEB856DC7627;// 0x2CB8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_341CC89C4BA414065CF27D8933BDB81C;// 0x2F38(0x0280)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8D4AA7E1485CDCA71EF874B0DFC0C3C9;// 0x31B8(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CBF1E3164A5A305104658FA8FB2EAE77;// 0x3230(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6460583744BD092DC1EB1CAB7829547F;// 0x3280(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E8026A7149317C684B1D35A0726D3A73;// 0x32F0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F9DE93D64C0011D8A4225C90D485A2E7;// 0x3340(0x0048)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode_13CF16F048B73800F9A2F8BF1ABFB0BE;// 0x3388(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1BA6D4C94F1B22416DABB4B918275AB6;// 0x3450(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48BF31A74C2E48D48E586F98E397E082;// 0x34F8(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9DEF7615400B365054462488BC230622;// 0x3548(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ACC548FF489006328B9F788F64D09B78;// 0x37C8(0x0280)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EF1D29A64FB66FF8B2C2AB8E259C5F9E;// 0x3A48(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_40B6823A447D081D40CDB1936FB71AE6;// 0x3B00(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2BAE124F42E0B5F5722D688EAF0D68D3;// 0x3B48(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_076BBFA6480F1BAD562C97B04211BF22;// 0x3C18(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C6D75AB24B98D2A5B95BA09A90C8CA6F;// 0x3C60(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E5BE103447FBC0C5A055D2BA23ADFD9B;// 0x3D30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DBBC9E7C4946378520D3A0BA7490414D;// 0x3D80(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2D7DDFB54F9E883D6E9238B40DA1316F;// 0x3DD0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DD7927B847B35F18CECF619F978B1701;// 0x3E78(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C564E49B4C7073AA5511138A46957515;// 0x3EC8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2932E8A64AFC0211D15E3B810DA9C57F;// 0x3F80(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F605247F47BD9B2D70F910829509D23C;// 0x3FC8(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7533D48D419808EC9A9838972358A0DD;// 0x4098(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8932862B457D01F6BF4DCE818FB1268B;// 0x40E0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FEC3E2F74A8665E5E78EB4AB9287846F;// 0x41B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C82B151341C2C48EB569E8A5BFC68A8C;// 0x4200(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B9B885554E6B0E28304394A21D604054;// 0x4250(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AA89321B411AD2B10934FE95A1E6979D;// 0x42A0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3AAC8BB149CAB8A278C27E82F3AF62B4;// 0x4348(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B10EB45F45BF28A6CC6735AA013FC39D;// 0x4398(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7EBEF6B146FCDFEEF4842FB5F2A0AA61;// 0x4618(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_413E945F400E633055B8528A6EF7AF5D;// 0x4898(0x0280)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_61EF8A2041A11D9C9152639F67C44AB0;// 0x4B18(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_341A18A84174604A3CF33897DEE284D0;// 0x4BC0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_53E3142841BBFC72EF62AD9E397DB487;// 0x4C68(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_9406FF6A4950A0006DA9E6B42BAE0CCE;// 0x4D10(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_F4CBB7AA4407B062FF4B74BF9E1CF3E9;// 0x4DB8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_7A76EE754CC3B50D8F6AAA904A2ACA48;// 0x4E60(0x00A8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B20C835C427E2527E9CFBE952D3774B1;// 0x4F08(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_555DA0A84B18FC1204857FB8F476A8CB;// 0x5188(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3A0864DE48CD2B5F0BF8B79CD2AC9D1C;// 0x5408(0x0280)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2BFE2CA247A8FD0B79AEEE93F35771E3;// 0x5688(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2CA5444F4DBC36B7073AEFACB28ED458;// 0x5758(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DF502CD243FF219FBC8A3382AEBCCF5F;// 0x57A8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7529F2E41B40AACAE2F4D92A9BAE888;// 0x5888(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3074896C462C3BC05B2A979A9657414D;// 0x58F8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F6B2658C42AC6A0FB8D16283D972AF15;// 0x5940(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5425CC21403690097D17EB8DEFFE251D;// 0x5988(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_12569A5C4C96C3C4311CF9B0830F0B7C;// 0x5A40(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BC1D4BA446D1999D149EE387553E39DF;// 0x5A88(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_799B459746B8F20372722BB0CA6B8FE1;// 0x5AD0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5CBF3CEE44CFF747DDDC71A48F7C5D47;// 0x5BA0(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6477C47145A1829D7BD14E9F7E25D34F;// 0x5BF0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_50177A0A4A6C88BE1CF366A956BA39E0;// 0x5CA8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D1B9594B4833E2AFA89237A9637D5F5E;// 0x5CF0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56ECA2314B77D9AF3ED0F99C1356A1EE;// 0x5D38(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BA04696A4324E7FE3D735582801CC331;// 0x5E08(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EC2B738D4339266F93E10F818F1ECCCA;// 0x5E58(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A0183E3E4432480E7E819CA976900A46;// 0x5F10(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C3D1FCE84E03BF651FE4E18E79648B4E;// 0x5FC8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_43EF1A534D50CF646932E39DEF98A502;// 0x6010(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B9544D174E0AE189646CC9A25CBBE709;// 0x6058(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D8E3F06443B01D788EFFBCBB8971DA08;// 0x6128(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_960863EE4119F946B18E5082E0FDFFC6;// 0x6178(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_885AD03B4E84C79C6F923D974DAFC2FD;// 0x6230(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9BA2DBA141F99140A7F192BC18583693;// 0x6278(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AC851ED84DDADD28E07B3FB590723A63;// 0x62C0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_421B517240B80F7D24CE31BC03ABE5DA;// 0x6390(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_73C367134B00886FFD97869C39B13DA5;// 0x63E0(0x00B8)
	float                                              VerticalDirection;                                        // 0x6498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharSpeed;                                                // 0x649C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Marcus_PP_AnimBP.Marcus_PP_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_AC851ED84DDADD28E07B3FB590723A63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_B9544D174E0AE189646CC9A25CBBE709();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_56ECA2314B77D9AF3ED0F99C1356A1EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_799B459746B8F20372722BB0CA6B8FE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_2BFE2CA247A8FD0B79AEEE93F35771E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_8932862B457D01F6BF4DCE818FB1268B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_F605247F47BD9B2D70F910829509D23C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_C6D75AB24B98D2A5B95BA09A90C8CA6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_2BAE124F42E0B5F5722D688EAF0D68D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_FD8A9CE14AE822C1B146DC87D28F5759();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Marcus_PP_AnimBP_AnimGraphNode_BlendListByBool_C4A6FB0C4887FFF050BAFABC0E355FB1();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Marcus_PP_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
