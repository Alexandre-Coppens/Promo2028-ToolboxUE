// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Enums/EDeviceCommons.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEDeviceCommons() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELedMicEnum ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELedMicEnum;
static UEnum* ELedMicEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELedMicEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELedMicEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("ELedMicEnum"));
	}
	return Z_Registration_Info_UEnum_ELedMicEnum.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<ELedMicEnum>()
{
	return ELedMicEnum_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Enum class representing various LED microphone states.\n *\n * This enum class is used to define the states for LED microphone controls on a compatible device.\n *\n * Enum values:\n * - MicOff: Represents the \"Mic Off\" state.\n * - MicOn: Represents the \"Mic On\" state.\n * - Pulse: Represents the \"Pulse\" state.\n */" },
#endif
		{ "MicOff.DisplayName", "Mic Off" },
		{ "MicOff.Name", "ELedMicEnum::MicOff" },
		{ "MicOn.DisplayName", "Mic On" },
		{ "MicOn.Name", "ELedMicEnum::MicOn" },
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceCommons.h" },
		{ "Pulse.DisplayName", "Pulse" },
		{ "Pulse.Name", "ELedMicEnum::Pulse" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enum class representing various LED microphone states.\n\nThis enum class is used to define the states for LED microphone controls on a compatible device.\n\nEnum values:\n- MicOff: Represents the \"Mic Off\" state.\n- MicOn: Represents the \"Mic On\" state.\n- Pulse: Represents the \"Pulse\" state." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELedMicEnum::MicOff", (int64)ELedMicEnum::MicOff },
		{ "ELedMicEnum::MicOn", (int64)ELedMicEnum::MicOn },
		{ "ELedMicEnum::Pulse", (int64)ELedMicEnum::Pulse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"ELedMicEnum",
	"ELedMicEnum",
	Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum()
{
	if (!Z_Registration_Info_UEnum_ELedMicEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELedMicEnum.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELedMicEnum.InnerSingleton;
}
// ********** End Enum ELedMicEnum *****************************************************************

// ********** Begin Enum ELedPlayerEnum ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELedPlayerEnum;
static UEnum* ELedPlayerEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELedPlayerEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELedPlayerEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("ELedPlayerEnum"));
	}
	return Z_Registration_Info_UEnum_ELedPlayerEnum.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<ELedPlayerEnum>()
{
	return ELedPlayerEnum_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "Player all led" },
		{ "All.Name", "ELedPlayerEnum::All" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @enum ELedPlayerEnum\n * Enumeration for controlling DualSense LED light player effects.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceCommons.h" },
		{ "Off.DisplayName", "Led Player Off" },
		{ "Off.Name", "ELedPlayerEnum::Off" },
		{ "One.DisplayName", "Player One" },
		{ "One.Name", "ELedPlayerEnum::One" },
		{ "Three.DisplayName", "Player Three" },
		{ "Three.Name", "ELedPlayerEnum::Three" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@enum ELedPlayerEnum\nEnumeration for controlling DualSense LED light player effects." },
#endif
		{ "Two.DisplayName", "Player Two" },
		{ "Two.Name", "ELedPlayerEnum::Two" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELedPlayerEnum::Off", (int64)ELedPlayerEnum::Off },
		{ "ELedPlayerEnum::One", (int64)ELedPlayerEnum::One },
		{ "ELedPlayerEnum::Two", (int64)ELedPlayerEnum::Two },
		{ "ELedPlayerEnum::Three", (int64)ELedPlayerEnum::Three },
		{ "ELedPlayerEnum::All", (int64)ELedPlayerEnum::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"ELedPlayerEnum",
	"ELedPlayerEnum",
	Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum()
{
	if (!Z_Registration_Info_UEnum_ELedPlayerEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELedPlayerEnum.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_ELedPlayerEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELedPlayerEnum.InnerSingleton;
}
// ********** End Enum ELedPlayerEnum **************************************************************

// ********** Begin Enum ELedBrightnessEnum ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELedBrightnessEnum;
static UEnum* ELedBrightnessEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELedBrightnessEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELedBrightnessEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("ELedBrightnessEnum"));
	}
	return Z_Registration_Info_UEnum_ELedBrightnessEnum.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<ELedBrightnessEnum>()
{
	return ELedBrightnessEnum_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Enum defining brightness levels for LED effects on the DualSense controller.\n *\n * This enumeration specifies different brightness levels that can be assigned\n * to LED effects. It is designed to work with Blueprint environments.\n */" },
#endif
		{ "High.DisplayName", "Brightness High" },
		{ "High.Name", "ELedBrightnessEnum::High" },
		{ "Low.DisplayName", "Brightness Low" },
		{ "Low.Name", "ELedBrightnessEnum::Low" },
		{ "Medium.DisplayName", "Brightness Medium" },
		{ "Medium.Name", "ELedBrightnessEnum::Medium" },
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceCommons.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enum defining brightness levels for LED effects on the DualSense controller.\n\nThis enumeration specifies different brightness levels that can be assigned\nto LED effects. It is designed to work with Blueprint environments." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELedBrightnessEnum::Low", (int64)ELedBrightnessEnum::Low },
		{ "ELedBrightnessEnum::Medium", (int64)ELedBrightnessEnum::Medium },
		{ "ELedBrightnessEnum::High", (int64)ELedBrightnessEnum::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"ELedBrightnessEnum",
	"ELedBrightnessEnum",
	Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum()
{
	if (!Z_Registration_Info_UEnum_ELedBrightnessEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELedBrightnessEnum.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_ELedBrightnessEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELedBrightnessEnum.InnerSingleton;
}
// ********** End Enum ELedBrightnessEnum **********************************************************

// ********** Begin Enum EDualSenseAudioFeatureReport **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport;
static UEnum* EDualSenseAudioFeatureReport_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("EDualSenseAudioFeatureReport"));
	}
	return Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDualSenseAudioFeatureReport>()
{
	return EDualSenseAudioFeatureReport_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Enum class representing audio feature states for a DualSense controller.\n *\n * This enum class is utilized to manage the audio-related features of a DualSense controller,\n * such as enabling or disabling audio functionality.\n *\n * Enum values:\n * - On: Indicates that the audio is enabled.\n * - Off: Indicates that the audio is disabled.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceCommons.h" },
		{ "Off.DisplayName", "Audio Off" },
		{ "Off.Name", "EDualSenseAudioFeatureReport::Off" },
		{ "On.DisplayName", "Audio On" },
		{ "On.Name", "EDualSenseAudioFeatureReport::On" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enum class representing audio feature states for a DualSense controller.\n\nThis enum class is utilized to manage the audio-related features of a DualSense controller,\nsuch as enabling or disabling audio functionality.\n\nEnum values:\n- On: Indicates that the audio is enabled.\n- Off: Indicates that the audio is disabled." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDualSenseAudioFeatureReport::On", (int64)EDualSenseAudioFeatureReport::On },
		{ "EDualSenseAudioFeatureReport::Off", (int64)EDualSenseAudioFeatureReport::Off },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"EDualSenseAudioFeatureReport",
	"EDualSenseAudioFeatureReport",
	Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport()
{
	if (!Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport.InnerSingleton;
}
// ********** End Enum EDualSenseAudioFeatureReport ************************************************

// ********** Begin Enum EDualSenseDeviceFeatureReport *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport;
static UEnum* EDualSenseDeviceFeatureReport_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("EDualSenseDeviceFeatureReport"));
	}
	return Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDualSenseDeviceFeatureReport>()
{
	return EDualSenseDeviceFeatureReport_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Enum class representing the feature report options for a DualSense device.\n *\n * This enum class defines the various modes that can be used for configuring the DualSense device's\n * haptic feedback and vibration functionalities.\n *\n * Enum values:\n * - Off: Disables all vibration and haptic feedback.\n * - DefaultRumble: Activates the default vibration mode.\n * - HapticSoftRumble: Enables audio-based vibration for a softer haptic experience.\n */" },
#endif
		{ "DefaultRumble.DisplayName", "Default" },
		{ "DefaultRumble.Name", "EDualSenseDeviceFeatureReport::DefaultRumble" },
		{ "HapticSoftRumble.DisplayName", "Audio based vibration" },
		{ "HapticSoftRumble.Name", "EDualSenseDeviceFeatureReport::HapticSoftRumble" },
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceCommons.h" },
		{ "Off.Name", "EDualSenseDeviceFeatureReport::Off" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enum class representing the feature report options for a DualSense device.\n\nThis enum class defines the various modes that can be used for configuring the DualSense device's\nhaptic feedback and vibration functionalities.\n\nEnum values:\n- Off: Disables all vibration and haptic feedback.\n- DefaultRumble: Activates the default vibration mode.\n- HapticSoftRumble: Enables audio-based vibration for a softer haptic experience." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDualSenseDeviceFeatureReport::Off", (int64)EDualSenseDeviceFeatureReport::Off },
		{ "EDualSenseDeviceFeatureReport::DefaultRumble", (int64)EDualSenseDeviceFeatureReport::DefaultRumble },
		{ "EDualSenseDeviceFeatureReport::HapticSoftRumble", (int64)EDualSenseDeviceFeatureReport::HapticSoftRumble },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"EDualSenseDeviceFeatureReport",
	"EDualSenseDeviceFeatureReport",
	Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport()
{
	if (!Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport.InnerSingleton;
}
// ********** End Enum EDualSenseDeviceFeatureReport ***********************************************

// ********** Begin Enum EDualSenseTriggerSoftnessLevel ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel;
static UEnum* EDualSenseTriggerSoftnessLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("EDualSenseTriggerSoftnessLevel"));
	}
	return Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel.OuterSingleton;
}
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDualSenseTriggerSoftnessLevel>()
{
	return EDualSenseTriggerSoftnessLevel_StaticEnum();
}
struct Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Enum class defining the softness levels for DualSense controller triggers.\n *\n * This enum specifies different levels of trigger softness for DualSense controllers, which can\n * be used to adjust the tactile feedback of the triggers based on the desired gaming experience.\n *\n * Enum values:\n * - Off: Disables trigger softness entirely.\n * - VeryRigid: Represents a very rigid trigger feedback.\n * - Rigid: Represents rigid trigger feedback.\n * - Medium: Represents a medium level of softness for the trigger.\n * - Soft: Represents a soft trigger feedback.\n * - VerySoft: Represents a very soft trigger feedback.\n */" },
#endif
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EDualSenseTriggerSoftnessLevel::Medium" },
		{ "ModuleRelativePath", "Public/Core/Enums/EDeviceCommons.h" },
		{ "Off.Name", "EDualSenseTriggerSoftnessLevel::Off" },
		{ "Rigid.DisplayName", "Rigid" },
		{ "Rigid.Name", "EDualSenseTriggerSoftnessLevel::Rigid" },
		{ "Soft.DisplayName", "Soft" },
		{ "Soft.Name", "EDualSenseTriggerSoftnessLevel::Soft" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enum class defining the softness levels for DualSense controller triggers.\n\nThis enum specifies different levels of trigger softness for DualSense controllers, which can\nbe used to adjust the tactile feedback of the triggers based on the desired gaming experience.\n\nEnum values:\n- Off: Disables trigger softness entirely.\n- VeryRigid: Represents a very rigid trigger feedback.\n- Rigid: Represents rigid trigger feedback.\n- Medium: Represents a medium level of softness for the trigger.\n- Soft: Represents a soft trigger feedback.\n- VerySoft: Represents a very soft trigger feedback." },
#endif
		{ "VeryRigid.DisplayName", "Very Rigid" },
		{ "VeryRigid.Name", "EDualSenseTriggerSoftnessLevel::VeryRigid" },
		{ "VerySoft.DisplayName", "Very Soft" },
		{ "VerySoft.Name", "EDualSenseTriggerSoftnessLevel::VerySoft" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDualSenseTriggerSoftnessLevel::Off", (int64)EDualSenseTriggerSoftnessLevel::Off },
		{ "EDualSenseTriggerSoftnessLevel::VeryRigid", (int64)EDualSenseTriggerSoftnessLevel::VeryRigid },
		{ "EDualSenseTriggerSoftnessLevel::Rigid", (int64)EDualSenseTriggerSoftnessLevel::Rigid },
		{ "EDualSenseTriggerSoftnessLevel::Medium", (int64)EDualSenseTriggerSoftnessLevel::Medium },
		{ "EDualSenseTriggerSoftnessLevel::Soft", (int64)EDualSenseTriggerSoftnessLevel::Soft },
		{ "EDualSenseTriggerSoftnessLevel::VerySoft", (int64)EDualSenseTriggerSoftnessLevel::VerySoft },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	"EDualSenseTriggerSoftnessLevel",
	"EDualSenseTriggerSoftnessLevel",
	Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel()
{
	if (!Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel.InnerSingleton, Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel.InnerSingleton;
}
// ********** End Enum EDualSenseTriggerSoftnessLevel **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceCommons_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELedMicEnum_StaticEnum, TEXT("ELedMicEnum"), &Z_Registration_Info_UEnum_ELedMicEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1383410362U) },
		{ ELedPlayerEnum_StaticEnum, TEXT("ELedPlayerEnum"), &Z_Registration_Info_UEnum_ELedPlayerEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2121359936U) },
		{ ELedBrightnessEnum_StaticEnum, TEXT("ELedBrightnessEnum"), &Z_Registration_Info_UEnum_ELedBrightnessEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2034464343U) },
		{ EDualSenseAudioFeatureReport_StaticEnum, TEXT("EDualSenseAudioFeatureReport"), &Z_Registration_Info_UEnum_EDualSenseAudioFeatureReport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3125675898U) },
		{ EDualSenseDeviceFeatureReport_StaticEnum, TEXT("EDualSenseDeviceFeatureReport"), &Z_Registration_Info_UEnum_EDualSenseDeviceFeatureReport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2420845761U) },
		{ EDualSenseTriggerSoftnessLevel_StaticEnum, TEXT("EDualSenseTriggerSoftnessLevel"), &Z_Registration_Info_UEnum_EDualSenseTriggerSoftnessLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1351512810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceCommons_h__Script_WindowsDualsense_ds5w_317700968(TEXT("/Script/WindowsDualsense_ds5w"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceCommons_h__Script_WindowsDualsense_ds5w_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceCommons_h__Script_WindowsDualsense_ds5w_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
