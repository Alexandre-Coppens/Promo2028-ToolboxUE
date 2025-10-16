// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Structs/FDeviceContext.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFDeviceContext() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceContext();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDeviceContext ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDeviceContext;
class UScriptStruct* FDeviceContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDeviceContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDeviceContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceContext, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("DeviceContext"));
	}
	return Z_Registration_Info_UScriptStruct_FDeviceContext.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDeviceContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Represents the context and state of a connected device.\n *\n * This class is primarily used for managing the connection, data buffer, and\n * attributes of devices in the DualSense HID management system. Each device context\n * contains handles, connection details, and configuration needed for proper functionality.\n *\n * It is a crucial component for detecting, initializing, and managing devices\n * using related library systems.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDeviceContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Represents the context and state of a connected device.\n\nThis class is primarily used for managing the connection, data buffer, and\nattributes of devices in the DualSense HID management system. Each device context\ncontains handles, connection details, and configuration needed for proper functionality.\n\nIt is a crucial component for detecting, initializing, and managing devices\nusing related library systems." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"DeviceContext",
	nullptr,
	0,
	sizeof(FDeviceContext),
	alignof(FDeviceContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeviceContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeviceContext()
{
	if (!Z_Registration_Info_UScriptStruct_FDeviceContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDeviceContext.InnerSingleton, Z_Construct_UScriptStruct_FDeviceContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDeviceContext.InnerSingleton;
}
// ********** End ScriptStruct FDeviceContext ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDeviceContext_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDeviceContext::StaticStruct, Z_Construct_UScriptStruct_FDeviceContext_Statics::NewStructOps, TEXT("DeviceContext"), &Z_Registration_Info_UScriptStruct_FDeviceContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceContext), 2434318066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDeviceContext_h__Script_WindowsDualsense_ds5w_4147957372(TEXT("/Script/WindowsDualsense_ds5w"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDeviceContext_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDeviceContext_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
