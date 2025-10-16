// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SonyGamepadProxy.h"

#ifdef WINDOWSDUALSENSE_DS5W_SonyGamepadProxy_generated_h
#error "SonyGamepadProxy.generated.h already included, missing '#pragma once' in SonyGamepadProxy.h"
#endif
#define WINDOWSDUALSENSE_DS5W_SonyGamepadProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ELedMicEnum : uint8;
struct FColor;
struct FInputDeviceId;

// ********** Begin Class USonyGamepadProxy ********************************************************
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGamepadInterface); \
	DECLARE_FUNCTION(execEnableAccelerometerValues); \
	DECLARE_FUNCTION(execDeviceDisconnect); \
	DECLARE_FUNCTION(execDeviceReconnect); \
	DECLARE_FUNCTION(execRemapControllerIdToUser); \
	DECLARE_FUNCTION(execEnableGyroscopeValues); \
	DECLARE_FUNCTION(execEnableTouch); \
	DECLARE_FUNCTION(execGetMotionSensorCalibrationStatus); \
	DECLARE_FUNCTION(execStartMotionSensorCalibration); \
	DECLARE_FUNCTION(execLedMicEffects); \
	DECLARE_FUNCTION(execLedColorEffects); \
	DECLARE_FUNCTION(execLevelBatteryDevice); \
	DECLARE_FUNCTION(execGetConnectionType); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execDeviceIsConnected);


WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadProxy_NoRegister();

#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSonyGamepadProxy(); \
	friend struct Z_Construct_UClass_USonyGamepadProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(USonyGamepadProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsDualsense_ds5w"), Z_Construct_UClass_USonyGamepadProxy_NoRegister) \
	DECLARE_SERIALIZER(USonyGamepadProxy)


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USonyGamepadProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USonyGamepadProxy(USonyGamepadProxy&&) = delete; \
	USonyGamepadProxy(const USonyGamepadProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USonyGamepadProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USonyGamepadProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USonyGamepadProxy) \
	NO_API virtual ~USonyGamepadProxy();


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_23_PROLOG
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_26_INCLASS_NO_PURE_DECLS \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USonyGamepadProxy;

// ********** End Class USonyGamepadProxy **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
