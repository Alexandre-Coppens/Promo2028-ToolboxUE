// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Structs/FOutputContext.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFOutputContext() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FAudioConfig();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FDualShockFlashLigthbar();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureConfig();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FHapticTriggers();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FLightbar();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FMicLight();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FOutputContext();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLed();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FRumbles();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FStrengths();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAudioConfig ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAudioConfig;
class UScriptStruct* FAudioConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAudioConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAudioConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioConfig, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("AudioConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAudioConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAudioConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class FAudioConfig\n *\n * @brief Represents the configuration settings for the audio system.\n *\n * The FAudioConfig class encapsulates various configuration parameters and\n * settings related to an audio system. It provides an interface to manage\n * audio configurations such as sample rate, channel count, and other audio\n * processing properties.\n *\n * This class is intended to be used as part of the audio system to define\n * or modify how audio is processed and output. It acts as a central place\n * for configuring audio-specific parameters.\n *\n * @note Ensure proper initialization of the configuration before using it\n *       with the audio processing pipeline.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class FAudioConfig\n\n@brief Represents the configuration settings for the audio system.\n\nThe FAudioConfig class encapsulates various configuration parameters and\nsettings related to an audio system. It provides an interface to manage\naudio configurations such as sample rate, channel count, and other audio\nprocessing properties.\n\nThis class is intended to be used as part of the audio system to define\nor modify how audio is processed and output. It acts as a central place\nfor configuring audio-specific parameters.\n\n@note Ensure proper initialization of the configuration before using it\n      with the audio processing pipeline." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"AudioConfig",
	nullptr,
	0,
	sizeof(FAudioConfig),
	alignof(FAudioConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAudioConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAudioConfig.InnerSingleton, Z_Construct_UScriptStruct_FAudioConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAudioConfig.InnerSingleton;
}
// ********** End ScriptStruct FAudioConfig ********************************************************

// ********** Begin ScriptStruct FFeatureConfig ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFeatureConfig;
class UScriptStruct* FFeatureConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFeatureConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFeatureConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeatureConfig, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("FeatureConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FFeatureConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFeatureConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure representing the configuration of features for a device.\n * This struct contains various settings related to vibration, rumble, and trigger behavior.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure representing the configuration of features for a device.\nThis struct contains various settings related to vibration, rumble, and trigger behavior." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeatureConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeatureConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"FeatureConfig",
	nullptr,
	0,
	sizeof(FFeatureConfig),
	alignof(FFeatureConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFeatureConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFeatureConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FFeatureConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFeatureConfig.InnerSingleton, Z_Construct_UScriptStruct_FFeatureConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFeatureConfig.InnerSingleton;
}
// ********** End ScriptStruct FFeatureConfig ******************************************************

// ********** Begin ScriptStruct FLightbar *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLightbar;
class UScriptStruct* FLightbar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLightbar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLightbar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightbar, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("Lightbar"));
	}
	return Z_Registration_Info_UScriptStruct_FLightbar.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLightbar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class FLightbar\n * @brief Represents a light bar with various properties and methods to control its behavior.\n *\n * The FLightbar class provides an interface for managing and interacting with a programmable light bar.\n * It includes functionality to set and get light patterns, manage brightness, and control other visual effects.\n * This class is typically used in applications where dynamic light effects are required.\n *\n * This class assumes that the underlying hardware is capable of supporting the requested behaviors.\n *\n * Key features include:\n * - Control of brightness settings.\n * - Configuration and retrieval of light patterns.\n * - Management of power state for the light bar.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class FLightbar\n@brief Represents a light bar with various properties and methods to control its behavior.\n\nThe FLightbar class provides an interface for managing and interacting with a programmable light bar.\nIt includes functionality to set and get light patterns, manage brightness, and control other visual effects.\nThis class is typically used in applications where dynamic light effects are required.\n\nThis class assumes that the underlying hardware is capable of supporting the requested behaviors.\n\nKey features include:\n- Control of brightness settings.\n- Configuration and retrieval of light patterns.\n- Management of power state for the light bar." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightbar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightbar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"Lightbar",
	nullptr,
	0,
	sizeof(FLightbar),
	alignof(FLightbar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightbar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLightbar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLightbar()
{
	if (!Z_Registration_Info_UScriptStruct_FLightbar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLightbar.InnerSingleton, Z_Construct_UScriptStruct_FLightbar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLightbar.InnerSingleton;
}
// ********** End ScriptStruct FLightbar ***********************************************************

// ********** Begin ScriptStruct FDualShockFlashLigthbar *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar;
class UScriptStruct* FDualShockFlashLigthbar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDualShockFlashLigthbar, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("DualShockFlashLigthbar"));
	}
	return Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDualShockFlashLigthbar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents the player LED configuration for a device.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the player LED configuration for a device." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDualShockFlashLigthbar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDualShockFlashLigthbar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"DualShockFlashLigthbar",
	nullptr,
	0,
	sizeof(FDualShockFlashLigthbar),
	alignof(FDualShockFlashLigthbar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualShockFlashLigthbar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDualShockFlashLigthbar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDualShockFlashLigthbar()
{
	if (!Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar.InnerSingleton, Z_Construct_UScriptStruct_FDualShockFlashLigthbar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar.InnerSingleton;
}
// ********** End ScriptStruct FDualShockFlashLigthbar *********************************************

// ********** Begin ScriptStruct FPlayerLed ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerLed;
class UScriptStruct* FPlayerLed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerLed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerLed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLed, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("PlayerLed"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerLed.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlayerLed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents the player LED configuration for a device.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the player LED configuration for a device." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"PlayerLed",
	nullptr,
	0,
	sizeof(FPlayerLed),
	alignof(FPlayerLed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerLed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerLed()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerLed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerLed.InnerSingleton, Z_Construct_UScriptStruct_FPlayerLed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlayerLed.InnerSingleton;
}
// ********** End ScriptStruct FPlayerLed **********************************************************

// ********** Begin ScriptStruct FRumbles **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRumbles;
class UScriptStruct* FRumbles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRumbles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRumbles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRumbles, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("Rumbles"));
	}
	return Z_Registration_Info_UScriptStruct_FRumbles.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRumbles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class FRumbles\n *\n * @brief The FRumbles class is designed to manage and control rumble feedback for devices such as game controllers.\n *\n * This class provides functionalities to initialize, update, and manipulate rumble effects\n * as part of a feedback mechanism. It is intended to enhance user interaction by simulating\n * vibrations or force feedback based on specific events or triggers.\n *\n * The FRumbles class encapsulates all the necessary operations required to handle the lifecycle\n * of a rumble instance, providing methods for configuring rumble patterns, managing their intensity,\n * duration, and activation state.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class FRumbles\n\n@brief The FRumbles class is designed to manage and control rumble feedback for devices such as game controllers.\n\nThis class provides functionalities to initialize, update, and manipulate rumble effects\nas part of a feedback mechanism. It is intended to enhance user interaction by simulating\nvibrations or force feedback based on specific events or triggers.\n\nThe FRumbles class encapsulates all the necessary operations required to handle the lifecycle\nof a rumble instance, providing methods for configuring rumble patterns, managing their intensity,\nduration, and activation state." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRumbles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRumbles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"Rumbles",
	nullptr,
	0,
	sizeof(FRumbles),
	alignof(FRumbles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRumbles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRumbles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRumbles()
{
	if (!Z_Registration_Info_UScriptStruct_FRumbles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRumbles.InnerSingleton, Z_Construct_UScriptStruct_FRumbles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRumbles.InnerSingleton;
}
// ********** End ScriptStruct FRumbles ************************************************************

// ********** Begin ScriptStruct FStrengths ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStrengths;
class UScriptStruct* FStrengths::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStrengths.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStrengths.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrengths, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("Strengths"));
	}
	return Z_Registration_Info_UScriptStruct_FStrengths.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStrengths_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a collection of strength-related configurations and parameters for haptic feedback.\n * This struct is primarily used to define zones, timings, and adjustable parameters\n * for haptic effects on controller triggers.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a collection of strength-related configurations and parameters for haptic feedback.\nThis struct is primarily used to define zones, timings, and adjustable parameters\nfor haptic effects on controller triggers." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrengths>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrengths_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"Strengths",
	nullptr,
	0,
	sizeof(FStrengths),
	alignof(FStrengths),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrengths_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStrengths_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStrengths()
{
	if (!Z_Registration_Info_UScriptStruct_FStrengths.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStrengths.InnerSingleton, Z_Construct_UScriptStruct_FStrengths_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStrengths.InnerSingleton;
}
// ********** End ScriptStruct FStrengths **********************************************************

// ********** Begin ScriptStruct FHapticTriggers ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHapticTriggers;
class UScriptStruct* FHapticTriggers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHapticTriggers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHapticTriggers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHapticTriggers, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("HapticTriggers"));
	}
	return Z_Registration_Info_UScriptStruct_FHapticTriggers.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHapticTriggers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class FHapticTriggers\n * @brief Represents haptic feedback functionalities for triggers in a game context.\n *\n * The FHapticTriggers class is designed to control and simulate haptic feedback\n * for trigger inputs in supported devices. This allows developers to integrate\n * tactile sensations for enhanced user immersion and interactivity.\n *\n * This class provides a structure to define properties and features for haptic\n * trigger effects, such as intensity, vibration pattern, and other configuration\n * options that are specific to the haptic feedback mechanism.\n *\n * It is typically used in conjunction with input devices, such as game controllers\n * or other peripherals, to create a responsive and engaging user experience.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class FHapticTriggers\n@brief Represents haptic feedback functionalities for triggers in a game context.\n\nThe FHapticTriggers class is designed to control and simulate haptic feedback\nfor trigger inputs in supported devices. This allows developers to integrate\ntactile sensations for enhanced user immersion and interactivity.\n\nThis class provides a structure to define properties and features for haptic\ntrigger effects, such as intensity, vibration pattern, and other configuration\noptions that are specific to the haptic feedback mechanism.\n\nIt is typically used in conjunction with input devices, such as game controllers\nor other peripherals, to create a responsive and engaging user experience." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHapticTriggers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHapticTriggers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"HapticTriggers",
	nullptr,
	0,
	sizeof(FHapticTriggers),
	alignof(FHapticTriggers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticTriggers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHapticTriggers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHapticTriggers()
{
	if (!Z_Registration_Info_UScriptStruct_FHapticTriggers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHapticTriggers.InnerSingleton, Z_Construct_UScriptStruct_FHapticTriggers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHapticTriggers.InnerSingleton;
}
// ********** End ScriptStruct FHapticTriggers *****************************************************

// ********** Begin ScriptStruct FMicLight *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMicLight;
class UScriptStruct* FMicLight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMicLight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMicLight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMicLight, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("MicLight"));
	}
	return Z_Registration_Info_UScriptStruct_FMicLight.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMicLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class FMicLight\n * @brief Represents a lighting mechanism for use in various simulations or rendering systems.\n *\n * The FMicLight class encapsulates properties and behavior for lights, providing features\n * such as intensity, color, and position control. It is designed for use in graphical\n * or physical simulations where light modeling is crucial.\n *\n * This class supports various types of lights (e.g., point light, directional light,\n * spotlights) and includes methods to manipulate their attributes for rendering or visual effects.\n *\n * Key functionalities include:\n * - Controlling light intensity and color.\n * - Managing light position and orientation.\n * - Emulating different types of light sources.\n * - Integration into larger scene management systems.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class FMicLight\n@brief Represents a lighting mechanism for use in various simulations or rendering systems.\n\nThe FMicLight class encapsulates properties and behavior for lights, providing features\nsuch as intensity, color, and position control. It is designed for use in graphical\nor physical simulations where light modeling is crucial.\n\nThis class supports various types of lights (e.g., point light, directional light,\nspotlights) and includes methods to manipulate their attributes for rendering or visual effects.\n\nKey functionalities include:\n- Controlling light intensity and color.\n- Managing light position and orientation.\n- Emulating different types of light sources.\n- Integration into larger scene management systems." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMicLight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMicLight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"MicLight",
	nullptr,
	0,
	sizeof(FMicLight),
	alignof(FMicLight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicLight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMicLight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMicLight()
{
	if (!Z_Registration_Info_UScriptStruct_FMicLight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMicLight.InnerSingleton, Z_Construct_UScriptStruct_FMicLight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMicLight.InnerSingleton;
}
// ********** End ScriptStruct FMicLight ***********************************************************

// ********** Begin ScriptStruct FOutputContext ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOutputContext;
class UScriptStruct* FOutputContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOutputContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOutputContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputContext, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("OutputContext"));
	}
	return Z_Registration_Info_UScriptStruct_FOutputContext.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOutputContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class FOutput\n * @brief The FOutput class is responsible for managing and handling output functionalities.\n *\n * This class provides methods and attributes that enable output operations, such as\n * processing, formatting, or directing the output to different destinations.\n * It may include support for various data types, customization of output format,\n * and other related functionalities required for output handling.\n *\n * Responsibilities of the FOutput class:\n * - Enable efficient output of data to designated targets.\n * - Support customizable output formatting and styles.\n * - Provide mechanisms for error handling or logging during output operations.\n *\n * Design considerations:\n * - Ensure flexibility and extensibility to adapt to various output destinations.\n * - Maintain compatibility with different output data formats if applicable.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Structs/FOutputContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class FOutput\n@brief The FOutput class is responsible for managing and handling output functionalities.\n\nThis class provides methods and attributes that enable output operations, such as\nprocessing, formatting, or directing the output to different destinations.\nIt may include support for various data types, customization of output format,\nand other related functionalities required for output handling.\n\nResponsibilities of the FOutput class:\n- Enable efficient output of data to designated targets.\n- Support customizable output formatting and styles.\n- Provide mechanisms for error handling or logging during output operations.\n\nDesign considerations:\n- Ensure flexibility and extensibility to adapt to various output destinations.\n- Maintain compatibility with different output data formats if applicable." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"OutputContext",
	nullptr,
	0,
	sizeof(FOutputContext),
	alignof(FOutputContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutputContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOutputContext()
{
	if (!Z_Registration_Info_UScriptStruct_FOutputContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOutputContext.InnerSingleton, Z_Construct_UScriptStruct_FOutputContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOutputContext.InnerSingleton;
}
// ********** End ScriptStruct FOutputContext ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FOutputContext_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioConfig::StaticStruct, Z_Construct_UScriptStruct_FAudioConfig_Statics::NewStructOps, TEXT("AudioConfig"), &Z_Registration_Info_UScriptStruct_FAudioConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioConfig), 2498881641U) },
		{ FFeatureConfig::StaticStruct, Z_Construct_UScriptStruct_FFeatureConfig_Statics::NewStructOps, TEXT("FeatureConfig"), &Z_Registration_Info_UScriptStruct_FFeatureConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeatureConfig), 1528387327U) },
		{ FLightbar::StaticStruct, Z_Construct_UScriptStruct_FLightbar_Statics::NewStructOps, TEXT("Lightbar"), &Z_Registration_Info_UScriptStruct_FLightbar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightbar), 1898916082U) },
		{ FDualShockFlashLigthbar::StaticStruct, Z_Construct_UScriptStruct_FDualShockFlashLigthbar_Statics::NewStructOps, TEXT("DualShockFlashLigthbar"), &Z_Registration_Info_UScriptStruct_FDualShockFlashLigthbar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDualShockFlashLigthbar), 3539587957U) },
		{ FPlayerLed::StaticStruct, Z_Construct_UScriptStruct_FPlayerLed_Statics::NewStructOps, TEXT("PlayerLed"), &Z_Registration_Info_UScriptStruct_FPlayerLed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerLed), 1818090766U) },
		{ FRumbles::StaticStruct, Z_Construct_UScriptStruct_FRumbles_Statics::NewStructOps, TEXT("Rumbles"), &Z_Registration_Info_UScriptStruct_FRumbles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRumbles), 3142410569U) },
		{ FStrengths::StaticStruct, Z_Construct_UScriptStruct_FStrengths_Statics::NewStructOps, TEXT("Strengths"), &Z_Registration_Info_UScriptStruct_FStrengths, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStrengths), 816640757U) },
		{ FHapticTriggers::StaticStruct, Z_Construct_UScriptStruct_FHapticTriggers_Statics::NewStructOps, TEXT("HapticTriggers"), &Z_Registration_Info_UScriptStruct_FHapticTriggers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHapticTriggers), 3665735355U) },
		{ FMicLight::StaticStruct, Z_Construct_UScriptStruct_FMicLight_Statics::NewStructOps, TEXT("MicLight"), &Z_Registration_Info_UScriptStruct_FMicLight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMicLight), 2475918189U) },
		{ FOutputContext::StaticStruct, Z_Construct_UScriptStruct_FOutputContext_Statics::NewStructOps, TEXT("OutputContext"), &Z_Registration_Info_UScriptStruct_FOutputContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutputContext), 662612047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FOutputContext_h__Script_WindowsDualsense_ds5w_4114332920(TEXT("/Script/WindowsDualsense_ds5w"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FOutputContext_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Structs_FOutputContext_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
