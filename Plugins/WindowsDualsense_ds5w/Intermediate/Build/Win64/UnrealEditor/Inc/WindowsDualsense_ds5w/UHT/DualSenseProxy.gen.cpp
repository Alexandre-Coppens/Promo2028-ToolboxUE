// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DualSenseProxy.h"
#include "Core/Structs/FDualSenseFeatureReport.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDualSenseProxy() {}

// ********** Begin Cross Module References ********************************************************
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualSenseProxy();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualSenseProxy_NoRegister();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadProxy();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FDualSenseFeatureReport();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDualSenseProxy Function AutomaticGun ************************************
struct Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics
{
	struct DualSenseProxy_eventAutomaticGun_Parms
	{
		int32 ControllerId;
		int32 BeginStrength;
		int32 MiddleStrength;
		int32 EndStrength;
		EControllerHand Hand;
		bool KeepEffect;
		float Frequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Activates an automatic gun effect on a specified DualSense controller.\n\x09 *\n\x09 * Simulates the behavior of an automatic firearm by adjusting trigger tension\n\x09 * dynamically based on the provided strength parameters, hand specification,\n\x09 * and other effect controls.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to apply the effect on.\n\x09 * @param BeginStrength The initial strength of the trigger effect. Ranges from 0 to 8.\n\x09 * @param MiddleStrength The middle strength level of the trigger effect. Ranges from 0 to 8.\n\x09 * @param EndStrength The final strength of the trigger effect. Ranges from 0 to 8.\n\x09 * @param Hand The hand (left or right) to which the effect is applied.\n\x09 * @param KeepEffect If true, maintains the effect even after the input stops; otherwise, stops once input ceases.\n\x09 * @param Frequency The rate or frequency of the automatic gun effect.\n\x09 */" },
#endif
		{ "CPP_Default_Frequency", "0.050000" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Activates an automatic gun effect on a specified DualSense controller.\n\nSimulates the behavior of an automatic firearm by adjusting trigger tension\ndynamically based on the provided strength parameters, hand specification,\nand other effect controls.\n\n@param ControllerId The ID of the controller to apply the effect on.\n@param BeginStrength The initial strength of the trigger effect. Ranges from 0 to 8.\n@param MiddleStrength The middle strength level of the trigger effect. Ranges from 0 to 8.\n@param EndStrength The final strength of the trigger effect. Ranges from 0 to 8.\n@param Hand The hand (left or right) to which the effect is applied.\n@param KeepEffect If true, maintains the effect even after the input stops; otherwise, stops once input ceases.\n@param Frequency The rate or frequency of the automatic gun effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Begin Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiddleStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Middle Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "End Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MiddleStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static void NewProp_KeepEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventAutomaticGun_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_BeginStrength = { "BeginStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventAutomaticGun_Parms, BeginStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginStrength_MetaData), NewProp_BeginStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_MiddleStrength = { "MiddleStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventAutomaticGun_Parms, MiddleStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiddleStrength_MetaData), NewProp_MiddleStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventAutomaticGun_Parms, EndStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStrength_MetaData), NewProp_EndStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventAutomaticGun_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
void Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_KeepEffect_SetBit(void* Obj)
{
	((DualSenseProxy_eventAutomaticGun_Parms*)Obj)->KeepEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_KeepEffect = { "KeepEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DualSenseProxy_eventAutomaticGun_Parms), &Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_KeepEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventAutomaticGun_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_BeginStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_MiddleStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_EndStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_KeepEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "AutomaticGun", Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::DualSenseProxy_eventAutomaticGun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::DualSenseProxy_eventAutomaticGun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_AutomaticGun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_AutomaticGun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execAutomaticGun)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_BeginStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_MiddleStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndStrength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_UBOOL(Z_Param_KeepEffect);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::AutomaticGun(Z_Param_ControllerId,Z_Param_BeginStrength,Z_Param_MiddleStrength,Z_Param_EndStrength,EControllerHand(Z_Param_Hand),Z_Param_KeepEffect,Z_Param_Frequency);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function AutomaticGun **************************************

// ********** Begin Class UDualSenseProxy Function Bow *********************************************
struct Z_Construct_UFunction_UDualSenseProxy_Bow_Statics
{
	struct DualSenseProxy_eventBow_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 BeginStrength;
		int32 EndStrength;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Configures the bow effect on a DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to configure the effect on.\n\x09 * @param StartPosition The starting position of the trigger effect.\n\x09 * @param EndPosition The ending position of the trigger effect.\n\x09 * @param BeginStrength The strength of the trigger's resistance at the starting position.\n\x09 * @param EndStrength The strength of the trigger's resistance at the ending position.\n\x09 * @param Hand The hand (left or right) where the effect will be applied.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configures the bow effect on a DualSense controller.\n\n@param ControllerId The ID of the controller to configure the effect on.\n@param StartPosition The starting position of the trigger effect.\n@param EndPosition The ending position of the trigger effect.\n@param BeginStrength The strength of the trigger's resistance at the starting position.\n@param EndStrength The strength of the trigger's resistance at the ending position.\n@param Hand The hand (left or right) where the effect will be applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventBow_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventBow_Parms, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventBow_Parms, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_BeginStrength = { "BeginStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventBow_Parms, BeginStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginStrength_MetaData), NewProp_BeginStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventBow_Parms, EndStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStrength_MetaData), NewProp_EndStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventBow_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_BeginStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_EndStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "Bow", Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::DualSenseProxy_eventBow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::DualSenseProxy_eventBow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_Bow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_Bow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execBow)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_BeginStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndStrength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::Bow(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_BeginStrength,Z_Param_EndStrength,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function Bow ***********************************************

// ********** Begin Class UDualSenseProxy Function ContinuousResistance ****************************
struct Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics
{
	struct DualSenseProxy_eventContinuousResistance_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 Strength;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Applies a continuous resistance effect on the adaptive trigger of a DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to apply the effect to.\n\x09 * @param StartPosition The starting position of the resistance effect. Valid range determined by internal validation.\n\x09 * @param Strength The intensity of the resistance effect. Valid range determined by internal validation.\n\x09 * @param Hand The controller hand (e.g., left or right) to which the resistance effect applies.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a continuous resistance effect on the adaptive trigger of a DualSense controller.\n\n@param ControllerId The ID of the controller to apply the effect to.\n@param StartPosition The starting position of the resistance effect. Valid range determined by internal validation.\n@param Strength The intensity of the resistance effect. Valid range determined by internal validation.\n@param Hand The controller hand (e.g., left or right) to which the resistance effect applies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Start Position min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventContinuousResistance_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventContinuousResistance_Parms, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventContinuousResistance_Parms, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventContinuousResistance_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "ContinuousResistance", Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::DualSenseProxy_eventContinuousResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::DualSenseProxy_eventContinuousResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execContinuousResistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::ContinuousResistance(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_Strength,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function ContinuousResistance ******************************

// ********** Begin Class UDualSenseProxy Function DeviceSettings **********************************
struct Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics
{
	struct DualSenseProxy_eventDeviceSettings_Parms
	{
		int32 ControllerId;
		FDualSenseFeatureReport Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates the settings for a DualSense controller using its feature report.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to be updated.\n\x09 * @param Settings The settings to be applied to the controller, encapsulated in an FDualSenseFeatureReport structure.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the settings for a DualSense controller using its feature report.\n\n@param ControllerId The ID of the controller to be updated.\n@param Settings The settings to be applied to the controller, encapsulated in an FDualSenseFeatureReport structure." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventDeviceSettings_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventDeviceSettings_Parms, Settings), Z_Construct_UScriptStruct_FDualSenseFeatureReport, METADATA_PARAMS(0, nullptr) }; // 253130207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "DeviceSettings", Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::DualSenseProxy_eventDeviceSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::DualSenseProxy_eventDeviceSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_DeviceSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_DeviceSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execDeviceSettings)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_STRUCT(FDualSenseFeatureReport,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::DeviceSettings(Z_Param_ControllerId,Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function DeviceSettings ************************************

// ********** Begin Class UDualSenseProxy Function EffectBow ***************************************
struct Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics
{
	struct DualSenseProxy_eventEffectBow_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 BeginStrength;
		int32 EndStrength;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Bow" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectBow_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectBow_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectBow_Parms, EndPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_BeginStrength = { "BeginStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectBow_Parms, BeginStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectBow_Parms, EndStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectBow_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_BeginStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_EndStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EffectBow", Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::DualSenseProxy_eventEffectBow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::DualSenseProxy_eventEffectBow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EffectBow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EffectBow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEffectBow)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_BeginStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndStrength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EffectBow(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_BeginStrength,Z_Param_EndStrength,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EffectBow *****************************************

// ********** Begin Class UDualSenseProxy Function EffectContinuousResitance ***********************
struct Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics
{
	struct DualSenseProxy_eventEffectContinuousResitance_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 Strength;
		EControllerHand ContinuousHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ContinuousResistance" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContinuousHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContinuousHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectContinuousResitance_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectContinuousResitance_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectContinuousResitance_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_ContinuousHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_ContinuousHand = { "ContinuousHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectContinuousResitance_Parms, ContinuousHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_ContinuousHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::NewProp_ContinuousHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EffectContinuousResitance", Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::DualSenseProxy_eventEffectContinuousResitance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::DualSenseProxy_eventEffectContinuousResitance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEffectContinuousResitance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_ENUM(EControllerHand,Z_Param_ContinuousHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EffectContinuousResitance(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_Strength,EControllerHand(Z_Param_ContinuousHand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EffectContinuousResitance *************************

// ********** Begin Class UDualSenseProxy Function EffectGalloping *********************************
struct Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics
{
	struct DualSenseProxy_eventEffectGalloping_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 BeginStrength;
		int32 EndStrength;
		float Frequency;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Galloping" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectGalloping_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectGalloping_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectGalloping_Parms, EndPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_BeginStrength = { "BeginStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectGalloping_Parms, BeginStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectGalloping_Parms, EndStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectGalloping_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectGalloping_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_BeginStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_EndStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EffectGalloping", Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::DualSenseProxy_eventEffectGalloping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::DualSenseProxy_eventEffectGalloping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EffectGalloping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EffectGalloping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEffectGalloping)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_BeginStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndStrength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EffectGalloping(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_BeginStrength,Z_Param_EndStrength,Z_Param_Frequency,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EffectGalloping ***********************************

// ********** Begin Class UDualSenseProxy Function EffectMachine ***********************************
struct Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics
{
	struct DualSenseProxy_eventEffectMachine_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 FirstFoot;
		int32 LasFoot;
		float Frequency;
		float Period;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Machine" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstFoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LasFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, EndPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_FirstFoot = { "FirstFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, FirstFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_LasFoot = { "LasFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, LasFoot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, Period), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectMachine_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_FirstFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_LasFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EffectMachine", Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::DualSenseProxy_eventEffectMachine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::DualSenseProxy_eventEffectMachine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EffectMachine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EffectMachine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEffectMachine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_FirstFoot);
	P_GET_PROPERTY(FIntProperty,Z_Param_LasFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Period);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EffectMachine(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_FirstFoot,Z_Param_LasFoot,Z_Param_Frequency,Z_Param_Period,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EffectMachine *************************************

// ********** Begin Class UDualSenseProxy Function EffectNoResitance *******************************
struct Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics
{
	struct DualSenseProxy_eventEffectNoResitance_Parms
	{
		int32 ControllerId;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Reset Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use NoResistance" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectNoResitance_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectNoResitance_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EffectNoResitance", Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::DualSenseProxy_eventEffectNoResitance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::DualSenseProxy_eventEffectNoResitance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEffectNoResitance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EffectNoResitance(Z_Param_ControllerId,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EffectNoResitance *********************************

// ********** Begin Class UDualSenseProxy Function EffectSectionResitance **************************
struct Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics
{
	struct DualSenseProxy_eventEffectSectionResitance_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 Strength;
		EControllerHand ResistanceHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Resistance" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResistanceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResistanceHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectSectionResitance_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectSectionResitance_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectSectionResitance_Parms, EndPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectSectionResitance_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_ResistanceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_ResistanceHand = { "ResistanceHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectSectionResitance_Parms, ResistanceHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_ResistanceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::NewProp_ResistanceHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EffectSectionResitance", Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::DualSenseProxy_eventEffectSectionResitance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::DualSenseProxy_eventEffectSectionResitance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEffectSectionResitance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_ENUM(EControllerHand,Z_Param_ResistanceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EffectSectionResitance(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_Strength,EControllerHand(Z_Param_ResistanceHand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EffectSectionResitance ****************************

// ********** Begin Class UDualSenseProxy Function EffectWeapon ************************************
struct Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics
{
	struct DualSenseProxy_eventEffectWeapon_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 Strength;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Weapon" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectWeapon_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectWeapon_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectWeapon_Parms, EndPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectWeapon_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEffectWeapon_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EffectWeapon", Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::DualSenseProxy_eventEffectWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::DualSenseProxy_eventEffectWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EffectWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EffectWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEffectWeapon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EffectWeapon(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_Strength,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EffectWeapon **************************************

// ********** Begin Class UDualSenseProxy Function EnableTouch1 ************************************
struct Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics
{
	struct DualSenseProxy_eventEnableTouch1_Parms
	{
		int32 ControllerId;
		bool bEnableTouch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Touch Pad" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use EnableTouch" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_bEnableTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTouch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEnableTouch1_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::NewProp_bEnableTouch_SetBit(void* Obj)
{
	((DualSenseProxy_eventEnableTouch1_Parms*)Obj)->bEnableTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::NewProp_bEnableTouch = { "bEnableTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DualSenseProxy_eventEnableTouch1_Parms), &Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::NewProp_bEnableTouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::NewProp_bEnableTouch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EnableTouch1", Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::DualSenseProxy_eventEnableTouch1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::DualSenseProxy_eventEnableTouch1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EnableTouch1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EnableTouch1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEnableTouch1)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_UBOOL(Z_Param_bEnableTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EnableTouch1(Z_Param_ControllerId,Z_Param_bEnableTouch);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EnableTouch1 **************************************

// ********** Begin Class UDualSenseProxy Function EnableTouch2 ************************************
struct Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics
{
	struct DualSenseProxy_eventEnableTouch2_Parms
	{
		int32 ControllerId;
		bool bEnableTouch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Touch Pad" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use EnableTouch" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_bEnableTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTouch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventEnableTouch2_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::NewProp_bEnableTouch_SetBit(void* Obj)
{
	((DualSenseProxy_eventEnableTouch2_Parms*)Obj)->bEnableTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::NewProp_bEnableTouch = { "bEnableTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DualSenseProxy_eventEnableTouch2_Parms), &Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::NewProp_bEnableTouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::NewProp_bEnableTouch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "EnableTouch2", Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::DualSenseProxy_eventEnableTouch2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::DualSenseProxy_eventEnableTouch2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_EnableTouch2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_EnableTouch2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execEnableTouch2)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_UBOOL(Z_Param_bEnableTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::EnableTouch2(Z_Param_ControllerId,Z_Param_bEnableTouch);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function EnableTouch2 **************************************

// ********** Begin Class UDualSenseProxy Function Galloping ***************************************
struct Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics
{
	struct DualSenseProxy_eventGalloping_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 FirstFoot;
		int32 SecondFoot;
		float Frequency;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Triggers a galloping vibration effect on a DualSense controller.\n\x09 *\n\x09 * This function sets up and activates a galloping vibration pattern by defining\n\x09 * the movement positions, associated vibration intensity, frequency, and the hand\n\x09 * where the effect plays.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to apply the effect.\n\x09 * @param StartPosition The initial position of the galloping effect.\n\x09 * @param EndPosition The final position of the galloping effect.\n\x09 * @param FirstFoot The intensity for the first \"foot\" step in the galloping effect.\n\x09 * @param SecondFoot The intensity for the second \"foot\" step in the galloping effect.\n\x09 * @param Frequency The frequency at which the galloping effect repeats.\n\x09 * @param Hand Specifies whether the effect is applied to the left or right hand.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Triggers a galloping vibration effect on a DualSense controller.\n\nThis function sets up and activates a galloping vibration pattern by defining\nthe movement positions, associated vibration intensity, frequency, and the hand\nwhere the effect plays.\n\n@param ControllerId The ID of the controller to apply the effect.\n@param StartPosition The initial position of the galloping effect.\n@param EndPosition The final position of the galloping effect.\n@param FirstFoot The intensity for the first \"foot\" step in the galloping effect.\n@param SecondFoot The intensity for the second \"foot\" step in the galloping effect.\n@param Frequency The frequency at which the galloping effect repeats.\n@param Hand Specifies whether the effect is applied to the left or right hand." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstFoot_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "First Foot min: 2 max: 6" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondFoot_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Second Foot min: (Greater FirstFoot) max: 7" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.001" },
		{ "DisplayName", "Frequency Example: 0.015" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstFoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGalloping_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGalloping_Parms, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGalloping_Parms, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_FirstFoot = { "FirstFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGalloping_Parms, FirstFoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstFoot_MetaData), NewProp_FirstFoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_SecondFoot = { "SecondFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGalloping_Parms, SecondFoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondFoot_MetaData), NewProp_SecondFoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGalloping_Parms, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGalloping_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_FirstFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_SecondFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "Galloping", Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::DualSenseProxy_eventGalloping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::DualSenseProxy_eventGalloping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_Galloping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_Galloping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execGalloping)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_FirstFoot);
	P_GET_PROPERTY(FIntProperty,Z_Param_SecondFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::Galloping(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_FirstFoot,Z_Param_SecondFoot,Z_Param_Frequency,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function Galloping *****************************************

// ********** Begin Class UDualSenseProxy Function GetTriggerLeftStrengthFeedback ******************
struct Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics
{
	struct DualSenseProxy_eventGetTriggerLeftStrengthFeedback_Parms
	{
		int32 ControllerId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the strength of the left trigger feedback for the specified DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to retrieve the feedback strength for.\n\x09 * @return The strength of the left trigger feedback as an integer. Returns 0 if the controller instance is not found.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the strength of the left trigger feedback for the specified DualSense controller.\n\n@param ControllerId The ID of the controller to retrieve the feedback strength for.\n@return The strength of the left trigger feedback as an integer. Returns 0 if the controller instance is not found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGetTriggerLeftStrengthFeedback_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGetTriggerLeftStrengthFeedback_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "GetTriggerLeftStrengthFeedback", Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::DualSenseProxy_eventGetTriggerLeftStrengthFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::DualSenseProxy_eventGetTriggerLeftStrengthFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execGetTriggerLeftStrengthFeedback)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTriggerLeftStrengthFeedback(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function GetTriggerLeftStrengthFeedback ********************

// ********** Begin Class UDualSenseProxy Function GetTriggerRightStrengthFeedback *****************
struct Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics
{
	struct DualSenseProxy_eventGetTriggerRightStrengthFeedback_Parms
	{
		int32 ControllerId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the strength of the right trigger feedback for the specified controller.\n\x09 *\n\x09 * @param ControllerId The unique identifier for the controller whose right trigger feedback strength is to be retrieved.\n\x09 * @return The strength value of the right trigger feedback. Returns 0 if the controller instance is not found.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the strength of the right trigger feedback for the specified controller.\n\n@param ControllerId The unique identifier for the controller whose right trigger feedback strength is to be retrieved.\n@return The strength value of the right trigger feedback. Returns 0 if the controller instance is not found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGetTriggerRightStrengthFeedback_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventGetTriggerRightStrengthFeedback_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "GetTriggerRightStrengthFeedback", Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::DualSenseProxy_eventGetTriggerRightStrengthFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::DualSenseProxy_eventGetTriggerRightStrengthFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execGetTriggerRightStrengthFeedback)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDualSenseProxy::GetTriggerRightStrengthFeedback(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function GetTriggerRightStrengthFeedback *******************

// ********** Begin Class UDualSenseProxy Function LedPlayerEffects ********************************
struct Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics
{
	struct DualSenseProxy_eventLedPlayerEffects_Parms
	{
		int32 ControllerId;
		ELedPlayerEnum Value;
		ELedBrightnessEnum Brightness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Led Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Controls the LED player light effects on the DualSense controller.\n\x09 *\n\x09 * @param ControllerId The identifier for the target controller.\n\x09 * @param Value The LED pattern enum specifying the LED configuration for the player indicator (e.g., Off, Player One, Player Two, etc.).\n\x09 * @param Brightness The brightness level of the LED lights specified by an enum (e.g., Low, Medium, High).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the LED player light effects on the DualSense controller.\n\n@param ControllerId The identifier for the target controller.\n@param Value The LED pattern enum specifying the LED configuration for the player indicator (e.g., Off, Player One, Player Two, etc.).\n@param Brightness The brightness level of the LED lights specified by an enum (e.g., Low, Medium, High)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Brightness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventLedPlayerEffects_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventLedPlayerEffects_Parms, Value), Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum, METADATA_PARAMS(0, nullptr) }; // 2121359936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Brightness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventLedPlayerEffects_Parms, Brightness), Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum, METADATA_PARAMS(0, nullptr) }; // 2034464343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Brightness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::NewProp_Brightness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "LedPlayerEffects", Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::DualSenseProxy_eventLedPlayerEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::DualSenseProxy_eventLedPlayerEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execLedPlayerEffects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_ENUM(ELedPlayerEnum,Z_Param_Value);
	P_GET_ENUM(ELedBrightnessEnum,Z_Param_Brightness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::LedPlayerEffects(Z_Param_ControllerId,ELedPlayerEnum(Z_Param_Value),ELedBrightnessEnum(Z_Param_Brightness));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function LedPlayerEffects **********************************

// ********** Begin Class UDualSenseProxy Function Machine *****************************************
struct Z_Construct_UFunction_UDualSenseProxy_Machine_Statics
{
	struct DualSenseProxy_eventMachine_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 FirstFoot;
		int32 LasFoot;
		float Frequency;
		float Period;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Configures and applies machine-like haptic effects to the DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID representing the target controller to which effects will be applied.\n\x09 * @param StartPosition The starting position where the haptic effect begins on the controller.\n\x09 * @param EndPosition The ending position where the haptic effect finishes on the controller.\n\x09 * @param FirstFoot The position of the first foot in the haptic cycling effect.\n\x09 * @param LasFoot The position of the last foot in the haptic cycling effect.\n\x09 * @param Frequency The frequency at which the haptic effect oscillates.\n\x09 * @param Period The period of the haptic cycle in seconds.\n\x09 * @param Hand Specifies which hand the effect is directed towards (left or right).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configures and applies machine-like haptic effects to the DualSense controller.\n\n@param ControllerId The ID representing the target controller to which effects will be applied.\n@param StartPosition The starting position where the haptic effect begins on the controller.\n@param EndPosition The ending position where the haptic effect finishes on the controller.\n@param FirstFoot The position of the first foot in the haptic cycling effect.\n@param LasFoot The position of the last foot in the haptic cycling effect.\n@param Frequency The frequency at which the haptic effect oscillates.\n@param Period The period of the haptic cycle in seconds.\n@param Hand Specifies which hand the effect is directed towards (left or right)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstFoot_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LasFoot_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.015" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.015" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstFoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LasFoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_FirstFoot = { "FirstFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, FirstFoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstFoot_MetaData), NewProp_FirstFoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_LasFoot = { "LasFoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, LasFoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LasFoot_MetaData), NewProp_LasFoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventMachine_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_FirstFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_LasFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "Machine", Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::DualSenseProxy_eventMachine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::DualSenseProxy_eventMachine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_Machine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_Machine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execMachine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_FirstFoot);
	P_GET_PROPERTY(FIntProperty,Z_Param_LasFoot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Period);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::Machine(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_FirstFoot,Z_Param_LasFoot,Z_Param_Frequency,Z_Param_Period,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function Machine *******************************************

// ********** Begin Class UDualSenseProxy Function NoResistance ************************************
struct Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics
{
	struct DualSenseProxy_eventNoResistance_Parms
	{
		int32 ControllerId;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Reset Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Disables the resistance effect for the specified controller and hand.\n\x09 *\n\x09 * @param ControllerId The unique identifier for the DualSense controller.\n\x09 * @param Hand The hand (left or right) associated with the effect to disable resistance for.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disables the resistance effect for the specified controller and hand.\n\n@param ControllerId The unique identifier for the DualSense controller.\n@param Hand The hand (left or right) associated with the effect to disable resistance for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventNoResistance_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventNoResistance_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "NoResistance", Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::DualSenseProxy_eventNoResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::DualSenseProxy_eventNoResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_NoResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_NoResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execNoResistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::NoResistance(Z_Param_ControllerId,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function NoResistance **************************************

// ********** Begin Class UDualSenseProxy Function ResetEffects ************************************
struct Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics
{
	struct DualSenseProxy_eventResetEffects_Parms
	{
		int32 ControllerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Reset Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets all haptic feedback effects for the specified DualSense controller.\n\x09 *\n\x09 * This method stops all active effects currently running on the specified DualSense controller.\n\x09 *\n\x09 * @param ControllerId The identifier of the controller whose effects are to be reset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets all haptic feedback effects for the specified DualSense controller.\n\nThis method stops all active effects currently running on the specified DualSense controller.\n\n@param ControllerId The identifier of the controller whose effects are to be reset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventResetEffects_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::NewProp_ControllerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "ResetEffects", Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::DualSenseProxy_eventResetEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::DualSenseProxy_eventResetEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_ResetEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_ResetEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execResetEffects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::ResetEffects(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function ResetEffects **************************************

// ********** Begin Class UDualSenseProxy Function Resistance **************************************
struct Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics
{
	struct DualSenseProxy_eventResistance_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 Strength;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Applies a resistance effect to the trigger of a PlayStation DualSense controller.\n\x09 *\n\x09 * This method configures the specified trigger to provide resistance feedback based on\n\x09 * the given start position, end position, and strength parameters. The effect is applied\n\x09 * to the controller defined by the ControllerId and the trigger specified using the Hand parameter.\n\x09 *\n\x09 * @param ControllerId The identifier of the controller to apply the resistance effect.\n\x09 * @param StartPosition The starting position of the resistance zone within the trigger's range. Value must be between 0 and 8.\n\x09 * @param EndPosition The ending position of the resistance zone within the trigger's range. Value must be between 0 and 8.\n\x09 * @param Strength The strength of the resistance effect. Value must be between 0 and 8, with higher values indicating stronger resistance.\n\x09 * @param Hand The trigger to apply the effect to, specified as EControllerHand (e.g., Left or Right).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a resistance effect to the trigger of a PlayStation DualSense controller.\n\nThis method configures the specified trigger to provide resistance feedback based on\nthe given start position, end position, and strength parameters. The effect is applied\nto the controller defined by the ControllerId and the trigger specified using the Hand parameter.\n\n@param ControllerId The identifier of the controller to apply the resistance effect.\n@param StartPosition The starting position of the resistance zone within the trigger's range. Value must be between 0 and 8.\n@param EndPosition The ending position of the resistance zone within the trigger's range. Value must be between 0 and 8.\n@param Strength The strength of the resistance effect. Value must be between 0 and 8, with higher values indicating stronger resistance.\n@param Hand The trigger to apply the effect to, specified as EControllerHand (e.g., Left or Right)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Start Position min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "End Position min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventResistance_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventResistance_Parms, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventResistance_Parms, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventResistance_Parms, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventResistance_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "Resistance", Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::DualSenseProxy_eventResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::DualSenseProxy_eventResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_Resistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_Resistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execResistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::Resistance(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_Strength,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function Resistance ****************************************

// ********** Begin Class UDualSenseProxy Function SetFeedback *************************************
struct Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics
{
	struct DualSenseProxy_eventSetFeedback_Parms
	{
		int32 ControllerId;
		int32 BeginStrength;
		int32 MiddleStrength;
		int32 EndStrength;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets haptic feedback for a DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID of the controller for which feedback is to be set.\n\x09 * @param BeginStrength The strength of the feedback at the beginning.\n\x09 * @param MiddleStrength The strength of the feedback in the middle.\n\x09 * @param EndStrength The strength of the feedback at the end.\n\x09 * @param Hand The hand (left or right) associated with the controller.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets haptic feedback for a DualSense controller.\n\n@param ControllerId The ID of the controller for which feedback is to be set.\n@param BeginStrength The strength of the feedback at the beginning.\n@param MiddleStrength The strength of the feedback in the middle.\n@param EndStrength The strength of the feedback at the end.\n@param Hand The hand (left or right) associated with the controller." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Begin Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiddleStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Middle Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStrength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "End Strength min: 0 max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MiddleStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetFeedback_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_BeginStrength = { "BeginStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetFeedback_Parms, BeginStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginStrength_MetaData), NewProp_BeginStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_MiddleStrength = { "MiddleStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetFeedback_Parms, MiddleStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiddleStrength_MetaData), NewProp_MiddleStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetFeedback_Parms, EndStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStrength_MetaData), NewProp_EndStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetFeedback_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_BeginStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_MiddleStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_EndStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "SetFeedback", Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::DualSenseProxy_eventSetFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::DualSenseProxy_eventSetFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_SetFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_SetFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execSetFeedback)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_BeginStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_MiddleStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndStrength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::SetFeedback(Z_Param_ControllerId,Z_Param_BeginStrength,Z_Param_MiddleStrength,Z_Param_EndStrength,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function SetFeedback ***************************************

// ********** Begin Class UDualSenseProxy Function SetTriggerHapticFeedbackEffect ******************
struct Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics
{
	struct DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 BeginStrength;
		int32 MiddleStrength;
		int32 EndStrength;
		EControllerHand Hand;
		bool KeepEffect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AutomaticGun" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeginStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MiddleStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static void NewProp_KeepEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_BeginStrength = { "BeginStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms, BeginStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_MiddleStrength = { "MiddleStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms, MiddleStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_EndStrength = { "EndStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms, EndStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
void Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_KeepEffect_SetBit(void* Obj)
{
	((DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms*)Obj)->KeepEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_KeepEffect = { "KeepEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms), &Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_KeepEffect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_BeginStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_MiddleStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_EndStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::NewProp_KeepEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "SetTriggerHapticFeedbackEffect", Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::DualSenseProxy_eventSetTriggerHapticFeedbackEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execSetTriggerHapticFeedbackEffect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_BeginStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_MiddleStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndStrength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_UBOOL(Z_Param_KeepEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::SetTriggerHapticFeedbackEffect(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_BeginStrength,Z_Param_MiddleStrength,Z_Param_EndStrength,EControllerHand(Z_Param_Hand),Z_Param_KeepEffect);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function SetTriggerHapticFeedbackEffect ********************

// ********** Begin Class UDualSenseProxy Function SetVibrationFromAudio ***************************
struct Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics
{
	struct DualSenseProxy_eventSetVibrationFromAudio_Parms
	{
		int32 ControllerId;
		float AverageEnvelopeValue;
		float MaxEnvelopeValue;
		int32 NumWaveInstances;
		float EnvelopeToVibrationMultiplier;
		float PeakToVibrationMultiplier;
		float Threshold;
		float ExponentCurve;
		float BaseMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Audio Vibration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the vibration for a DualSense controller based on audio envelopes and other parameters.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to apply the vibration to.\n\x09 * @param AverageEnvelopeValue The average audio envelope value, used to calculate the left vibration intensity.\n\x09 * @param MaxEnvelopeValue The maximum audio envelope value, used to calculate the right vibration intensity.\n\x09 * @param NumWaveInstances The number of wave instances contributing to the audio signal, affecting the overall vibration strength.\n\x09 * @param EnvelopeToVibrationMultiplier Multiplier to scale the average envelope value to vibration intensity.\n\x09 * @param PeakToVibrationMultiplier Multiplier to scale the maximum envelope value to vibration intensity.\n\x09 * @param Threshold The minimum vibration level threshold for activation.\n\x09 * @param ExponentCurve The exponent curve used to shape the vibration scaling.\n\x09 * @param BaseMultiplier A base multiplier applied to vibration for additional scaling.\n\x09 */" },
#endif
		{ "CPP_Default_BaseMultiplier", "1.500000" },
		{ "CPP_Default_EnvelopeToVibrationMultiplier", "0.500000" },
		{ "CPP_Default_ExponentCurve", "2.000000" },
		{ "CPP_Default_PeakToVibrationMultiplier", "0.800000" },
		{ "CPP_Default_Threshold", "0.015000" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the vibration for a DualSense controller based on audio envelopes and other parameters.\n\n@param ControllerId The ID of the controller to apply the vibration to.\n@param AverageEnvelopeValue The average audio envelope value, used to calculate the left vibration intensity.\n@param MaxEnvelopeValue The maximum audio envelope value, used to calculate the right vibration intensity.\n@param NumWaveInstances The number of wave instances contributing to the audio signal, affecting the overall vibration strength.\n@param EnvelopeToVibrationMultiplier Multiplier to scale the average envelope value to vibration intensity.\n@param PeakToVibrationMultiplier Multiplier to scale the maximum envelope value to vibration intensity.\n@param Threshold The minimum vibration level threshold for activation.\n@param ExponentCurve The exponent curve used to shape the vibration scaling.\n@param BaseMultiplier A base multiplier applied to vibration for additional scaling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageEnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumWaveInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeToVibrationMultiplier_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "NativeConst", "" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakToVibrationMultiplier_MetaData[] = {
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.0" },
		{ "NativeConst", "" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.015" },
		{ "NativeConst", "" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.015" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExponentCurve_MetaData[] = {
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "NativeConst", "" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageEnvelopeValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEnvelopeValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumWaveInstances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeToVibrationMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakToVibrationMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExponentCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, ControllerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerId_MetaData), NewProp_ControllerId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_AverageEnvelopeValue = { "AverageEnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, AverageEnvelopeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageEnvelopeValue_MetaData), NewProp_AverageEnvelopeValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_MaxEnvelopeValue = { "MaxEnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, MaxEnvelopeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnvelopeValue_MetaData), NewProp_MaxEnvelopeValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_NumWaveInstances = { "NumWaveInstances", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, NumWaveInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumWaveInstances_MetaData), NewProp_NumWaveInstances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_EnvelopeToVibrationMultiplier = { "EnvelopeToVibrationMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, EnvelopeToVibrationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvelopeToVibrationMultiplier_MetaData), NewProp_EnvelopeToVibrationMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_PeakToVibrationMultiplier = { "PeakToVibrationMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, PeakToVibrationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakToVibrationMultiplier_MetaData), NewProp_PeakToVibrationMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_ExponentCurve = { "ExponentCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, ExponentCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExponentCurve_MetaData), NewProp_ExponentCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_BaseMultiplier = { "BaseMultiplier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventSetVibrationFromAudio_Parms, BaseMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMultiplier_MetaData), NewProp_BaseMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_AverageEnvelopeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_MaxEnvelopeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_NumWaveInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_EnvelopeToVibrationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_PeakToVibrationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_ExponentCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::NewProp_BaseMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "SetVibrationFromAudio", Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::DualSenseProxy_eventSetVibrationFromAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::DualSenseProxy_eventSetVibrationFromAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execSetVibrationFromAudio)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AverageEnvelopeValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxEnvelopeValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumWaveInstances);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EnvelopeToVibrationMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PeakToVibrationMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ExponentCurve);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::SetVibrationFromAudio(Z_Param_ControllerId,Z_Param_AverageEnvelopeValue,Z_Param_MaxEnvelopeValue,Z_Param_NumWaveInstances,Z_Param_EnvelopeToVibrationMultiplier,Z_Param_PeakToVibrationMultiplier,Z_Param_Threshold,Z_Param_ExponentCurve,Z_Param_BaseMultiplier);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function SetVibrationFromAudio *****************************

// ********** Begin Class UDualSenseProxy Function StopAllTriggersEffects **************************
struct Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics
{
	struct DualSenseProxy_eventStopAllTriggersEffects_Parms
	{
		int32 ControllerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Reset Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops all trigger effects currently active for the specified DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID of the DualSense controller for which to stop all trigger effects.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops all trigger effects currently active for the specified DualSense controller.\n\n@param ControllerId The ID of the DualSense controller for which to stop all trigger effects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventStopAllTriggersEffects_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::NewProp_ControllerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "StopAllTriggersEffects", Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::DualSenseProxy_eventStopAllTriggersEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::DualSenseProxy_eventStopAllTriggersEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execStopAllTriggersEffects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::StopAllTriggersEffects(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function StopAllTriggersEffects ****************************

// ********** Begin Class UDualSenseProxy Function StopTriggerEffect *******************************
struct Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics
{
	struct DualSenseProxy_eventStopTriggerEffect_Parms
	{
		int32 ControllerId;
		EControllerHand HandStop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Reset Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops the trigger effect on a specific controller for the specified hand.\n\x09 *\n\x09 * @param ControllerId The unique identifier of the controller for which the trigger effect should be stopped.\n\x09 * @param HandStop Specifies which hand's trigger effect (left or right) should be stopped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the trigger effect on a specific controller for the specified hand.\n\n@param ControllerId The unique identifier of the controller for which the trigger effect should be stopped.\n@param HandStop Specifies which hand's trigger effect (left or right) should be stopped." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandStop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandStop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventStopTriggerEffect_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::NewProp_HandStop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::NewProp_HandStop = { "HandStop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventStopTriggerEffect_Parms, HandStop), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::NewProp_HandStop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::NewProp_HandStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "StopTriggerEffect", Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::DualSenseProxy_eventStopTriggerEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::DualSenseProxy_eventStopTriggerEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execStopTriggerEffect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_ENUM(EControllerHand,Z_Param_HandStop);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::StopTriggerEffect(Z_Param_ControllerId,EControllerHand(Z_Param_HandStop));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function StopTriggerEffect *********************************

// ********** Begin Class UDualSenseProxy Function Weapon ******************************************
struct Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics
{
	struct DualSenseProxy_eventWeapon_Parms
	{
		int32 ControllerId;
		int32 StartPosition;
		int32 EndPosition;
		int32 Strength;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DualSense Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Configures a weapon effect on the DualSense controller using specified parameters.\n\x09 *\n\x09 * @param ControllerId The identifier for the target DualSense controller.\n\x09 * @param StartPosition The starting position of the effect in the trigger. The value should be validated and within the range of allowed positions.\n\x09 * @param EndPosition The ending position of the effect in the trigger. The value should be validated and within the range of allowed positions.\n\x09 * @param Strength The strength of the weapon effect. The value should be validated and within the range of allowed strengths.\n\x09 * @param Hand Specifies which controller hand (left or right) should be affected by the weapon effect.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configures a weapon effect on the DualSense controller using specified parameters.\n\n@param ControllerId The identifier for the target DualSense controller.\n@param StartPosition The starting position of the effect in the trigger. The value should be validated and within the range of allowed positions.\n@param EndPosition The ending position of the effect in the trigger. The value should be validated and within the range of allowed positions.\n@param Strength The strength of the weapon effect. The value should be validated and within the range of allowed strengths.\n@param Hand Specifies which controller hand (left or right) should be affected by the weapon effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Start Position min: 2" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "End Position max: 7" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Strength max: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventWeapon_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventWeapon_Parms, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventWeapon_Parms, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventWeapon_Parms, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DualSenseProxy_eventWeapon_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDualSenseProxy, nullptr, "Weapon", Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::DualSenseProxy_eventWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::DualSenseProxy_eventWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDualSenseProxy_Weapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDualSenseProxy_Weapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDualSenseProxy::execWeapon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Strength);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDualSenseProxy::Weapon(Z_Param_ControllerId,Z_Param_StartPosition,Z_Param_EndPosition,Z_Param_Strength,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class UDualSenseProxy Function Weapon ********************************************

// ********** Begin Class UDualSenseProxy **********************************************************
void UDualSenseProxy::StaticRegisterNativesUDualSenseProxy()
{
	UClass* Class = UDualSenseProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutomaticGun", &UDualSenseProxy::execAutomaticGun },
		{ "Bow", &UDualSenseProxy::execBow },
		{ "ContinuousResistance", &UDualSenseProxy::execContinuousResistance },
		{ "DeviceSettings", &UDualSenseProxy::execDeviceSettings },
		{ "EffectBow", &UDualSenseProxy::execEffectBow },
		{ "EffectContinuousResitance", &UDualSenseProxy::execEffectContinuousResitance },
		{ "EffectGalloping", &UDualSenseProxy::execEffectGalloping },
		{ "EffectMachine", &UDualSenseProxy::execEffectMachine },
		{ "EffectNoResitance", &UDualSenseProxy::execEffectNoResitance },
		{ "EffectSectionResitance", &UDualSenseProxy::execEffectSectionResitance },
		{ "EffectWeapon", &UDualSenseProxy::execEffectWeapon },
		{ "EnableTouch1", &UDualSenseProxy::execEnableTouch1 },
		{ "EnableTouch2", &UDualSenseProxy::execEnableTouch2 },
		{ "Galloping", &UDualSenseProxy::execGalloping },
		{ "GetTriggerLeftStrengthFeedback", &UDualSenseProxy::execGetTriggerLeftStrengthFeedback },
		{ "GetTriggerRightStrengthFeedback", &UDualSenseProxy::execGetTriggerRightStrengthFeedback },
		{ "LedPlayerEffects", &UDualSenseProxy::execLedPlayerEffects },
		{ "Machine", &UDualSenseProxy::execMachine },
		{ "NoResistance", &UDualSenseProxy::execNoResistance },
		{ "ResetEffects", &UDualSenseProxy::execResetEffects },
		{ "Resistance", &UDualSenseProxy::execResistance },
		{ "SetFeedback", &UDualSenseProxy::execSetFeedback },
		{ "SetTriggerHapticFeedbackEffect", &UDualSenseProxy::execSetTriggerHapticFeedbackEffect },
		{ "SetVibrationFromAudio", &UDualSenseProxy::execSetVibrationFromAudio },
		{ "StopAllTriggersEffects", &UDualSenseProxy::execStopAllTriggersEffects },
		{ "StopTriggerEffect", &UDualSenseProxy::execStopTriggerEffect },
		{ "Weapon", &UDualSenseProxy::execWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDualSenseProxy;
UClass* UDualSenseProxy::GetPrivateStaticClass()
{
	using TClass = UDualSenseProxy;
	if (!Z_Registration_Info_UClass_UDualSenseProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DualSenseProxy"),
			Z_Registration_Info_UClass_UDualSenseProxy.InnerSingleton,
			StaticRegisterNativesUDualSenseProxy,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDualSenseProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_UDualSenseProxy_NoRegister()
{
	return UDualSenseProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDualSenseProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Proxy class for PlayStation DualSense controller interactions and effects.\n *\n * Provides static functions to control various features and settings of a connected\n * PlayStation DualSense controller such as LED settings, vibration, trigger effects,\n * and connectivity status.\n */" },
#endif
		{ "IncludePath", "DualSenseProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DualSenseProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Proxy class for PlayStation DualSense controller interactions and effects.\n\nProvides static functions to control various features and settings of a connected\nPlayStation DualSense controller such as LED settings, vibration, trigger effects,\nand connectivity status." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDualSenseProxy_AutomaticGun, "AutomaticGun" }, // 3789233128
		{ &Z_Construct_UFunction_UDualSenseProxy_Bow, "Bow" }, // 3160067605
		{ &Z_Construct_UFunction_UDualSenseProxy_ContinuousResistance, "ContinuousResistance" }, // 1583838977
		{ &Z_Construct_UFunction_UDualSenseProxy_DeviceSettings, "DeviceSettings" }, // 2292240265
		{ &Z_Construct_UFunction_UDualSenseProxy_EffectBow, "EffectBow" }, // 2238106700
		{ &Z_Construct_UFunction_UDualSenseProxy_EffectContinuousResitance, "EffectContinuousResitance" }, // 1319309826
		{ &Z_Construct_UFunction_UDualSenseProxy_EffectGalloping, "EffectGalloping" }, // 3892896789
		{ &Z_Construct_UFunction_UDualSenseProxy_EffectMachine, "EffectMachine" }, // 808632572
		{ &Z_Construct_UFunction_UDualSenseProxy_EffectNoResitance, "EffectNoResitance" }, // 1940378812
		{ &Z_Construct_UFunction_UDualSenseProxy_EffectSectionResitance, "EffectSectionResitance" }, // 3731512918
		{ &Z_Construct_UFunction_UDualSenseProxy_EffectWeapon, "EffectWeapon" }, // 4176809765
		{ &Z_Construct_UFunction_UDualSenseProxy_EnableTouch1, "EnableTouch1" }, // 106850453
		{ &Z_Construct_UFunction_UDualSenseProxy_EnableTouch2, "EnableTouch2" }, // 4235426331
		{ &Z_Construct_UFunction_UDualSenseProxy_Galloping, "Galloping" }, // 2292682578
		{ &Z_Construct_UFunction_UDualSenseProxy_GetTriggerLeftStrengthFeedback, "GetTriggerLeftStrengthFeedback" }, // 1241670936
		{ &Z_Construct_UFunction_UDualSenseProxy_GetTriggerRightStrengthFeedback, "GetTriggerRightStrengthFeedback" }, // 1984153528
		{ &Z_Construct_UFunction_UDualSenseProxy_LedPlayerEffects, "LedPlayerEffects" }, // 3126666101
		{ &Z_Construct_UFunction_UDualSenseProxy_Machine, "Machine" }, // 3305920722
		{ &Z_Construct_UFunction_UDualSenseProxy_NoResistance, "NoResistance" }, // 4271186727
		{ &Z_Construct_UFunction_UDualSenseProxy_ResetEffects, "ResetEffects" }, // 101176463
		{ &Z_Construct_UFunction_UDualSenseProxy_Resistance, "Resistance" }, // 2240708335
		{ &Z_Construct_UFunction_UDualSenseProxy_SetFeedback, "SetFeedback" }, // 2638446657
		{ &Z_Construct_UFunction_UDualSenseProxy_SetTriggerHapticFeedbackEffect, "SetTriggerHapticFeedbackEffect" }, // 738589533
		{ &Z_Construct_UFunction_UDualSenseProxy_SetVibrationFromAudio, "SetVibrationFromAudio" }, // 315520875
		{ &Z_Construct_UFunction_UDualSenseProxy_StopAllTriggersEffects, "StopAllTriggersEffects" }, // 2061124703
		{ &Z_Construct_UFunction_UDualSenseProxy_StopTriggerEffect, "StopTriggerEffect" }, // 3162385985
		{ &Z_Construct_UFunction_UDualSenseProxy_Weapon, "Weapon" }, // 2945609130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDualSenseProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDualSenseProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USonyGamepadProxy,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDualSenseProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDualSenseProxy_Statics::ClassParams = {
	&UDualSenseProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDualSenseProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDualSenseProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDualSenseProxy()
{
	if (!Z_Registration_Info_UClass_UDualSenseProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDualSenseProxy.OuterSingleton, Z_Construct_UClass_UDualSenseProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDualSenseProxy.OuterSingleton;
}
UDualSenseProxy::UDualSenseProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDualSenseProxy);
UDualSenseProxy::~UDualSenseProxy() {}
// ********** End Class UDualSenseProxy ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_DualSenseProxy_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDualSenseProxy, UDualSenseProxy::StaticClass, TEXT("UDualSenseProxy"), &Z_Registration_Info_UClass_UDualSenseProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDualSenseProxy), 2253805436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_DualSenseProxy_h__Script_WindowsDualsense_ds5w_4029906025(TEXT("/Script/WindowsDualsense_ds5w"),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_DualSenseProxy_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_DualSenseProxy_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
