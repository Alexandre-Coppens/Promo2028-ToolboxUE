// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Enums/EDeviceCommons.h"

#ifdef WINDOWSDUALSENSE_DS5W_EDeviceCommons_generated_h
#error "EDeviceCommons.generated.h already included, missing '#pragma once' in EDeviceCommons.h"
#endif
#define WINDOWSDUALSENSE_DS5W_EDeviceCommons_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceCommons_h

// ********** Begin Enum ELedMicEnum ***************************************************************
#define FOREACH_ENUM_ELEDMICENUM(op) \
	op(ELedMicEnum::MicOff) \
	op(ELedMicEnum::MicOn) \
	op(ELedMicEnum::Pulse) 

enum class ELedMicEnum : uint8;
template<> struct TIsUEnumClass<ELedMicEnum> { enum { Value = true }; };
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<ELedMicEnum>();
// ********** End Enum ELedMicEnum *****************************************************************

// ********** Begin Enum ELedPlayerEnum ************************************************************
#define FOREACH_ENUM_ELEDPLAYERENUM(op) \
	op(ELedPlayerEnum::Off) \
	op(ELedPlayerEnum::One) \
	op(ELedPlayerEnum::Two) \
	op(ELedPlayerEnum::Three) \
	op(ELedPlayerEnum::All) 

enum class ELedPlayerEnum : uint8;
template<> struct TIsUEnumClass<ELedPlayerEnum> { enum { Value = true }; };
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<ELedPlayerEnum>();
// ********** End Enum ELedPlayerEnum **************************************************************

// ********** Begin Enum ELedBrightnessEnum ********************************************************
#define FOREACH_ENUM_ELEDBRIGHTNESSENUM(op) \
	op(ELedBrightnessEnum::Low) \
	op(ELedBrightnessEnum::Medium) \
	op(ELedBrightnessEnum::High) 

enum class ELedBrightnessEnum : uint8;
template<> struct TIsUEnumClass<ELedBrightnessEnum> { enum { Value = true }; };
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<ELedBrightnessEnum>();
// ********** End Enum ELedBrightnessEnum **********************************************************

// ********** Begin Enum EDualSenseAudioFeatureReport **********************************************
#define FOREACH_ENUM_EDUALSENSEAUDIOFEATUREREPORT(op) \
	op(EDualSenseAudioFeatureReport::On) \
	op(EDualSenseAudioFeatureReport::Off) 

enum class EDualSenseAudioFeatureReport : uint8;
template<> struct TIsUEnumClass<EDualSenseAudioFeatureReport> { enum { Value = true }; };
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDualSenseAudioFeatureReport>();
// ********** End Enum EDualSenseAudioFeatureReport ************************************************

// ********** Begin Enum EDualSenseDeviceFeatureReport *********************************************
#define FOREACH_ENUM_EDUALSENSEDEVICEFEATUREREPORT(op) \
	op(EDualSenseDeviceFeatureReport::Off) \
	op(EDualSenseDeviceFeatureReport::DefaultRumble) \
	op(EDualSenseDeviceFeatureReport::HapticSoftRumble) 

enum class EDualSenseDeviceFeatureReport : uint8;
template<> struct TIsUEnumClass<EDualSenseDeviceFeatureReport> { enum { Value = true }; };
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDualSenseDeviceFeatureReport>();
// ********** End Enum EDualSenseDeviceFeatureReport ***********************************************

// ********** Begin Enum EDualSenseTriggerSoftnessLevel ********************************************
#define FOREACH_ENUM_EDUALSENSETRIGGERSOFTNESSLEVEL(op) \
	op(EDualSenseTriggerSoftnessLevel::Off) \
	op(EDualSenseTriggerSoftnessLevel::VeryRigid) \
	op(EDualSenseTriggerSoftnessLevel::Rigid) \
	op(EDualSenseTriggerSoftnessLevel::Medium) \
	op(EDualSenseTriggerSoftnessLevel::Soft) \
	op(EDualSenseTriggerSoftnessLevel::VerySoft) 

enum class EDualSenseTriggerSoftnessLevel : uint8;
template<> struct TIsUEnumClass<EDualSenseTriggerSoftnessLevel> { enum { Value = true }; };
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDualSenseTriggerSoftnessLevel>();
// ********** End Enum EDualSenseTriggerSoftnessLevel **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
