// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Enums/EDeviceConnection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEDeviceConnection() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDeviceType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeviceType;
static UEnum* EDeviceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeviceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("EDeviceType"));
	}
	return Z_Registration_Info_UEnum_EDeviceType.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDeviceType>()
{
	return EDeviceType_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @enum EDeviceType\n * Enum representing different types of devices.\n *\n * @value Default Represents the default type of device.\n * @value Edge Represents the Edge device type.\n * @value DualShock Represents the DualShock device type.\n */" },
#endif
		{ "DualSense.DisplayName", "DualSense Default" },
		{ "DualSense.Name", "DualSense" },
		{ "DualSenseEdge.DisplayName", "DualSense Edge" },
		{ "DualSenseEdge.Name", "DualSenseEdge" },
		{ "DualShock4.DisplayName", "DualShock 4" },
		{ "DualShock4.Name", "DualShock4" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceConnection.h" },
		{ "NotFound.DisplayName", "Not Found Device" },
		{ "NotFound.Name", "NotFound" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@enum EDeviceType\nEnum representing different types of devices.\n\n@value Default Represents the default type of device.\n@value Edge Represents the Edge device type.\n@value DualShock Represents the DualShock device type." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DualSense", (int64)DualSense },
		{ "DualSenseEdge", (int64)DualSenseEdge },
		{ "DualShock4", (int64)DualShock4 },
		{ "NotFound", (int64)NotFound },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"EDeviceType",
	"EDeviceType",
	Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType()
{
	if (!Z_Registration_Info_UEnum_EDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeviceType.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeviceType.InnerSingleton;
}
// ********** End Enum EDeviceType *****************************************************************

// ********** Begin Enum EDeviceConnection *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeviceConnection;
static UEnum* EDeviceConnection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeviceConnection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeviceConnection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("EDeviceConnection"));
	}
	return Z_Registration_Info_UEnum_EDeviceConnection.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDeviceConnection>()
{
	return EDeviceConnection_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bluetooth.DisplayName", "Bluetooth" },
		{ "Bluetooth.Name", "Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @enum EDeviceConnection\n * Enum representing the types of connections for a device.\n *\n * @value Usb Represents a USB connection.\n * @value Bluetooth Represents a Bluetooth connection.\n * @value Unknown Represents an unknown or unrecognized connection type.\n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@enum EDeviceConnection\nEnum representing the types of connections for a device.\n\n@value Usb Represents a USB connection.\n@value Bluetooth Represents a Bluetooth connection.\n@value Unknown Represents an unknown or unrecognized connection type." },
#endif
		{ "Unrecognized.DisplayName", "Unknown" },
		{ "Unrecognized.Name", "Unrecognized" },
		{ "Usb.DisplayName", "USB" },
		{ "Usb.Name", "Usb" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Usb", (int64)Usb },
		{ "Bluetooth", (int64)Bluetooth },
		{ "Unrecognized", (int64)Unrecognized },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"EDeviceConnection",
	"EDeviceConnection",
	Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection()
{
	if (!Z_Registration_Info_UEnum_EDeviceConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeviceConnection.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeviceConnection.InnerSingleton;
}
// ********** End Enum EDeviceConnection ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceConnection_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDeviceType_StaticEnum, TEXT("EDeviceType"), &Z_Registration_Info_UEnum_EDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 517712376U) },
		{ EDeviceConnection_StaticEnum, TEXT("EDeviceConnection"), &Z_Registration_Info_UEnum_EDeviceConnection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2053093638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceConnection_h__Script_WindowsDualsense_ds5w_1767940213(TEXT("/Script/WindowsDualsense_ds5w"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceConnection_h__Script_WindowsDualsense_ds5w_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceConnection_h__Script_WindowsDualsense_ds5w_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
