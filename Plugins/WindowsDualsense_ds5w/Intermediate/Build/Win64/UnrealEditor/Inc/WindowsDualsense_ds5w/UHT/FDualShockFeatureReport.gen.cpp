// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Structs/FDualShockFeatureReport.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFDualShockFeatureReport() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FDualShockFeatureReport();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureReport();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDualShockFeatureReport *******************************************
static_assert(std::is_polymorphic<FDualShockFeatureReport>() == std::is_polymorphic<FFeatureReport>(), "USTRUCT FDualShockFeatureReport cannot be polymorphic unless super FFeatureReport is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDualShockFeatureReport;
class UScriptStruct* FDualShockFeatureReport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDualShockFeatureReport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDualShockFeatureReport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDualShockFeatureReport, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("DualShockFeatureReport"));
	}
	return Z_Registration_Info_UScriptStruct_FDualShockFeatureReport.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDualShockFeatureReport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Represents the feature report for DualShock gamepad devices using the Sony gamepad interface.\n *\n * This structure is derived from the IFeatureReport interface and is designed to encapsulate\n * device-specific feature reports (input status, configurations, or other data) that can be\n * utilized in the context of DualShock controllers. The functionality is exposed for use\n * in both C++ and Blueprint contexts.\n *\n * @note The struct leverages the Unreal Engine macros and type system, providing seamless\n * integration with Blueprint scripting environments.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualShockFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Represents the feature report for DualShock gamepad devices using the Sony gamepad interface.\n\nThis structure is derived from the IFeatureReport interface and is designed to encapsulate\ndevice-specific feature reports (input status, configurations, or other data) that can be\nutilized in the context of DualShock controllers. The functionality is exposed for use\nin both C++ and Blueprint contexts.\n\n@note The struct leverages the Unreal Engine macros and type system, providing seamless\nintegration with Blueprint scripting environments." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDualShockFeatureReport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDualShockFeatureReport_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	Z_Construct_UScriptStruct_FFeatureReport,
	&NewStructOps,
	"DualShockFeatureReport",
	nullptr,
	0,
	sizeof(FDualShockFeatureReport),
	alignof(FDualShockFeatureReport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualShockFeatureReport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDualShockFeatureReport_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDualShockFeatureReport()
{
	if (!Z_Registration_Info_UScriptStruct_FDualShockFeatureReport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDualShockFeatureReport.InnerSingleton, Z_Construct_UScriptStruct_FDualShockFeatureReport_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDualShockFeatureReport.InnerSingleton;
}
// ********** End ScriptStruct FDualShockFeatureReport *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualShockFeatureReport_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDualShockFeatureReport::StaticStruct, Z_Construct_UScriptStruct_FDualShockFeatureReport_Statics::NewStructOps, TEXT("DualShockFeatureReport"), &Z_Registration_Info_UScriptStruct_FDualShockFeatureReport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDualShockFeatureReport), 3893525618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualShockFeatureReport_h__Script_WindowsDualsense_ds5w_1633735530(TEXT("/Script/WindowsDualsense_ds5w"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualShockFeatureReport_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualShockFeatureReport_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
