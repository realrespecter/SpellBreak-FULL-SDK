// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Human_MainMenu_AnimBlueprint_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.Shuffle
// ()
// Parameters:
// TArray<class UAnimSequence*>   inArray                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHuman_MainMenu_AnimBlueprint_C::Shuffle(TArray<class UAnimSequence*>* inArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.Shuffle");

	UHuman_MainMenu_AnimBlueprint_C_Shuffle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
}


// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.GetNextFidgetDelay
// ()
// Parameters:
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHuman_MainMenu_AnimBlueprint_C::GetNextFidgetDelay(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.GetNextFidgetDelay");

	UHuman_MainMenu_AnimBlueprint_C_GetNextFidgetDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_MainMenu_AnimBlueprint_AnimGraphNode_SequencePlayer_B48634974695ABC53A6369ADADAD7DCA
// ()

void UHuman_MainMenu_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Human_MainMenu_AnimBlueprint_AnimGraphNode_SequencePlayer_B48634974695ABC53A6369ADADAD7DCA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_MainMenu_AnimBlueprint_AnimGraphNode_SequencePlayer_B48634974695ABC53A6369ADADAD7DCA");

	UHuman_MainMenu_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Human_MainMenu_AnimBlueprint_AnimGraphNode_SequencePlayer_B48634974695ABC53A6369ADADAD7DCA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event)

void UHuman_MainMenu_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.BlueprintInitializeAnimation");

	UHuman_MainMenu_AnimBlueprint_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.PerformFidget
// ()

void UHuman_MainMenu_AnimBlueprint_C::PerformFidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.PerformFidget");

	UHuman_MainMenu_AnimBlueprint_C_PerformFidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.AnimNotify_FidgetFinished
// ()

void UHuman_MainMenu_AnimBlueprint_C::AnimNotify_FidgetFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.AnimNotify_FidgetFinished");

	UHuman_MainMenu_AnimBlueprint_C_AnimNotify_FidgetFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.AnimNotify_IdleFinished
// ()

void UHuman_MainMenu_AnimBlueprint_C::AnimNotify_IdleFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.AnimNotify_IdleFinished");

	UHuman_MainMenu_AnimBlueprint_C_AnimNotify_IdleFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.ExecuteUbergraph_Human_MainMenu_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHuman_MainMenu_AnimBlueprint_C::ExecuteUbergraph_Human_MainMenu_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C.ExecuteUbergraph_Human_MainMenu_AnimBlueprint");

	UHuman_MainMenu_AnimBlueprint_C_ExecuteUbergraph_Human_MainMenu_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
