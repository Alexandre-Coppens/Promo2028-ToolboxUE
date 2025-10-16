// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Structs/FDualSenseFeatureReport.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFDualSenseFeatureReport() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FDualSenseFeatureReport();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureReport();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDualSenseFeatureReport *******************************************
static_assert(std::is_polymorphic<FDualSenseFeatureReport>() == std::is_polymorphic<FFeatureReport>(), "USTRUCT FDualSenseFeatureReport cannot be polymorphic unless super FFeatureReport is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport;
class UScriptStruct* FDualSenseFeatureReport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDualSenseFeatureReport, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("DualSenseFeatureReport"));
	}
	return Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents the DualSense Feature Report struct, managing various\n * configurable settings and states for a DualSense controller.\n *\n * This struct provides properties to control the following features:\n * - Microphone status\n * - Headset audio\n * - Speaker settings\n * - Vibration mode\n * - Microphone and audio volume levels\n * - Soft rumble reduction intensity\n * - Adaptive trigger softness level\n *\n * Each property is categorized under \"DualSense Settings\" and is editable both in the editor\n * and readable/writable in Blueprints. The constructor initializes these properties\n * with default values for convenient usage.\n *\n * Category: DualSense Settings\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the DualSense Feature Report struct, managing various\nconfigurable settings and states for a DualSense controller.\n\nThis struct provides properties to control the following features:\n- Microphone status\n- Headset audio\n- Speaker settings\n- Vibration mode\n- Microphone and audio volume levels\n- Soft rumble reduction intensity\n- Adaptive trigger softness level\n\nEach property is categorized under \"DualSense Settings\" and is editable both in the editor\nand readable/writable in Blueprints. The constructor initializes these properties\nwith default values for convenient usage.\n\nCategory: DualSense Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MicStatus_MetaData[] = {
		{ "Category", "DualSense Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Represents the microphone status of the DualSense controller audio settings.\n\x09 * This variable utilizes the EDualSenseAudioFeatureReport enum to toggle the microphone feature.\n\x09 * The microphone can be toggled On or Off, influencing the device's audio configuration.\n\x09 *\n\x09 * Category: DualSense Settings\n\x09 * Blueprint Read/Write: Enabled\n\x09 * Possible Values:\n\x09 *   - EDualSenseAudioFeatureReport::On: Enables the microphone.\n\x09 *   - EDualSenseAudioFeatureReport::Off: Disables the microphone.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the microphone status of the DualSense controller audio settings.\nThis variable utilizes the EDualSenseAudioFeatureReport enum to toggle the microphone feature.\nThe microphone can be toggled On or Off, influencing the device's audio configuration.\n\nCategory: DualSense Settings\nBlueprint Read/Write: Enabled\nPossible Values:\n  - EDualSenseAudioFeatureReport::On: Enables the microphone.\n  - EDualSenseAudioFeatureReport::Off: Disables the microphone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioHeadset_MetaData[] = {
		{ "Category", "DualSense Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies the operational state of the audio headset on a DualSense controller.\n\x09 * The variable can be configured to enable or disable the headset audio functionality.\n\x09 *\n\x09 * Category:\n\x09 * - DualSense Settings\n\x09 *\n\x09 * Access:\n\x09 * - Editable anywhere in the editor.\n\x09 * - Readable and writable in Blueprints.\n\x09 *\n\x09 * Enum:\n\x09 * - EDualSenseAudioFeatureReport::On: Enables headset audio.\n\x09 * - EDualSenseAudioFeatureReport::Off: Disables headset audio.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the operational state of the audio headset on a DualSense controller.\nThe variable can be configured to enable or disable the headset audio functionality.\n\nCategory:\n- DualSense Settings\n\nAccess:\n- Editable anywhere in the editor.\n- Readable and writable in Blueprints.\n\nEnum:\n- EDualSenseAudioFeatureReport::On: Enables headset audio.\n- EDualSenseAudioFeatureReport::Off: Disables headset audio." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSpeaker_MetaData[] = {
		{ "Category", "DualSense Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Represents the audio speaker settings for a DualSense device.\n\x09 *\n\x09 * This variable allows enabling or disabling the speaker functionality\n\x09 * on the DualSense device. It uses the EDualSenseAudioFeatureReport\n\x09 * enum to specify the state of the speaker, either \"On\" or \"Off\".\n\x09 *\n\x09 * Category: DualSense Settings\n\x09 * Access: Readable and writable in Blueprints\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the audio speaker settings for a DualSense device.\n\nThis variable allows enabling or disabling the speaker functionality\non the DualSense device. It uses the EDualSenseAudioFeatureReport\nenum to specify the state of the speaker, either \"On\" or \"Off\".\n\nCategory: DualSense Settings\nAccess: Readable and writable in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationMode_MetaData[] = {
		{ "Category", "DualSense Settings" },
		{ "DisplayName", "Enables vibration mode" },
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advanced vibration that are directly generated from real-time audio analysis for a more immersive haptic experience. Note: This feature is only supported when the controller is connected via USB." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MicVolume_MetaData[] = {
		{ "Category", "DualSense Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The microphone volume level for the DualSense device.\n\x09 *\n\x09 * This variable determines the intensity of the microphone input, allowing users\n\x09 * to adjust the microphone sensitivity or volume output. The value is clamped between 0 and 100.\n\x09 *\n\x09 * - Category: DualSense Settings\n\x09 * - Range: 0 (minimum volume) to 100 (maximum volume)\n\x09 * - Metadata:\n\x09 *   - ClampMin: 0\n\x09 *   - ClampMax: 100\n\x09 *   - UIMin: 0\n\x09 *   - UIMax: 100\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The microphone volume level for the DualSense device.\n\nThis variable determines the intensity of the microphone input, allowing users\nto adjust the microphone sensitivity or volume output. The value is clamped between 0 and 100.\n\n- Category: DualSense Settings\n- Range: 0 (minimum volume) to 100 (maximum volume)\n- Metadata:\n  - ClampMin: 0\n  - ClampMax: 100\n  - UIMin: 0\n  - UIMax: 100" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioVolume_MetaData[] = {
		{ "Category", "DualSense Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Represents the audio volume setting for a DualSense device.\n\x09 * This value determines the volume level applied to the audio output, including the headset and speaker.\n\x09 *\n\x09 * - The valid range for this property is from 0 to 100, where:\n\x09 *   - 0 represents no audio output (muted).\n\x09 *   - 100 represents the maximum audio output volume.\n\x09 * - Values outside this range are clamped automatically.\n\x09 *\n\x09 * This property can be edited in the editor or accessed in Blueprints. It appears under the \"DualSense Settings\" category in the editor.\n\x09 *\n\x09 * Metadata:\n\x09 * - ClampMin: 0 (Minimum allowable value for automatic clamping)\n\x09 * - ClampMax: 100 (Maximum allowable value for automatic clamping)\n\x09 * - UIMin: 0 (Minimum value shown in UI sliders)\n\x09 * - UIMax: 100 (Maximum value shown in UI sliders)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the audio volume setting for a DualSense device.\nThis value determines the volume level applied to the audio output, including the headset and speaker.\n\n- The valid range for this property is from 0 to 100, where:\n  - 0 represents no audio output (muted).\n  - 100 represents the maximum audio output volume.\n- Values outside this range are clamped automatically.\n\nThis property can be edited in the editor or accessed in Blueprints. It appears under the \"DualSense Settings\" category in the editor.\n\nMetadata:\n- ClampMin: 0 (Minimum allowable value for automatic clamping)\n- ClampMax: 100 (Maximum allowable value for automatic clamping)\n- UIMin: 0 (Minimum value shown in UI sliders)\n- UIMax: 100 (Maximum value shown in UI sliders)" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftRumbleReduce_MetaData[] = {
		{ "Category", "DualSense Settings" },
		{ "ClampMax", "15" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines the reduction intensity of the soft rumble effect for a DualSense device.\n\x09 *\n\x09 * The value represents the level of adjustment applied to the soft haptic feedback vibration,\n\x09 * ranging from 0 (no reduction) to 15 (maximum reduction).\n\x09 *\n\x09 * The value is clamped and displayed in the UI with a minimum of 0 and a maximum of 15.\n\x09 *\n\x09 * Category:\n\x09 * - DualSense Settings\n\x09 *\n\x09 * Metadata:\n\x09 * - ClampMin: 0\n\x09 * - ClampMax: 15\n\x09 * - UIMin: 0\n\x09 * - UIMax: 15\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the reduction intensity of the soft rumble effect for a DualSense device.\n\nThe value represents the level of adjustment applied to the soft haptic feedback vibration,\nranging from 0 (no reduction) to 15 (maximum reduction).\n\nThe value is clamped and displayed in the UI with a minimum of 0 and a maximum of 15.\n\nCategory:\n- DualSense Settings\n\nMetadata:\n- ClampMin: 0\n- ClampMax: 15\n- UIMin: 0\n- UIMax: 15" },
#endif
		{ "UIMax", "15" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerSoftnessLevel_MetaData[] = {
		{ "Category", "DualSense Settings" },
		{ "ClampMax", "15" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specifies the softness level of the adaptive triggers on a DualSense controller.\n\x09 *\n\x09 * This property allows fine-tuning of the trigger pressure resistance, ranging from \"Off\" to \"Very Soft\".\n\x09 * Users can adjust the value in both the editor and at runtime via Blueprints.\n\x09 *\n\x09 * Valid range:\n\x09 * - Minimum: 0 (Off)\n\x09 * - Maximum: 15 (Very Soft)\n\x09 *\n\x09 * The property is clamped between 0 and 15, and the UI provides a slider ranging between these values\n\x09 * for easier configuration.\n\x09 *\n\x09 * Category: DualSense Settings\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FDualSenseFeatureReport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the softness level of the adaptive triggers on a DualSense controller.\n\nThis property allows fine-tuning of the trigger pressure resistance, ranging from \"Off\" to \"Very Soft\".\nUsers can adjust the value in both the editor and at runtime via Blueprints.\n\nValid range:\n- Minimum: 0 (Off)\n- Maximum: 15 (Very Soft)\n\nThe property is clamped between 0 and 15, and the UI provides a slider ranging between these values\nfor easier configuration.\n\nCategory: DualSense Settings" },
#endif
		{ "UIMax", "15" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MicStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MicStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioHeadset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioHeadset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioSpeaker_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSpeaker;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VibrationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VibrationMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MicVolume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioVolume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoftRumbleReduce;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerSoftnessLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerSoftnessLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDualSenseFeatureReport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_MicStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_MicStatus = { "MicStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, MicStatus), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MicStatus_MetaData), NewProp_MicStatus_MetaData) }; // 3125675898
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioHeadset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioHeadset = { "AudioHeadset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, AudioHeadset), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioHeadset_MetaData), NewProp_AudioHeadset_MetaData) }; // 3125675898
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioSpeaker_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioSpeaker = { "AudioSpeaker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, AudioSpeaker), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseAudioFeatureReport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSpeaker_MetaData), NewProp_AudioSpeaker_MetaData) }; // 3125675898
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_VibrationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_VibrationMode = { "VibrationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, VibrationMode), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseDeviceFeatureReport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationMode_MetaData), NewProp_VibrationMode_MetaData) }; // 2420845761
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_MicVolume = { "MicVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, MicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MicVolume_MetaData), NewProp_MicVolume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, AudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioVolume_MetaData), NewProp_AudioVolume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_SoftRumbleReduce = { "SoftRumbleReduce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, SoftRumbleReduce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftRumbleReduce_MetaData), NewProp_SoftRumbleReduce_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_TriggerSoftnessLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_TriggerSoftnessLevel = { "TriggerSoftnessLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSenseFeatureReport, TriggerSoftnessLevel), Z_Construct_UEnum_WindowsDualsense_ds5w_EDualSenseTriggerSoftnessLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerSoftnessLevel_MetaData), NewProp_TriggerSoftnessLevel_MetaData) }; // 1351512810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_MicStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_MicStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioHeadset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioHeadset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioSpeaker_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioSpeaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_VibrationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_VibrationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_MicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_AudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_SoftRumbleReduce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_TriggerSoftnessLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewProp_TriggerSoftnessLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	Z_Construct_UScriptStruct_FFeatureReport,
	&NewStructOps,
	"DualSenseFeatureReport",
	Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::PropPointers),
	sizeof(FDualSenseFeatureReport),
	alignof(FDualSenseFeatureReport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDualSenseFeatureReport()
{
	if (!Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport.InnerSingleton, Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport.InnerSingleton;
}
// ********** End ScriptStruct FDualSenseFeatureReport *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualSenseFeatureReport_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDualSenseFeatureReport::StaticStruct, Z_Construct_UScriptStruct_FDualSenseFeatureReport_Statics::NewStructOps, TEXT("DualSenseFeatureReport"), &Z_Registration_Info_UScriptStruct_FDualSenseFeatureReport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDualSenseFeatureReport), 253130207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualSenseFeatureReport_h__Script_WindowsDualsense_ds5w_2249492633(TEXT("/Script/WindowsDualsense_ds5w"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualSenseFeatureReport_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FDualSenseFeatureReport_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
