// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Interfaces/SonyGamepadTriggerInterface.h"

#ifdef WINDOWSDUALSENSE_DS5W_SonyGamepadTriggerInterface_generated_h
#error "SonyGamepadTriggerInterface.generated.h already included, missing '#pragma once' in SonyGamepadTriggerInterface.h"
#endif
#define WINDOWSDUALSENSE_DS5W_SonyGamepadTriggerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USonyGamepadTriggerInterface *****************************************
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadTriggerInterface_NoRegister();

#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USonyGamepadTriggerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USonyGamepadTriggerInterface(USonyGamepadTriggerInterface&&) = delete; \
	USonyGamepadTriggerInterface(const USonyGamepadTriggerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USonyGamepadTriggerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USonyGamepadTriggerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USonyGamepadTriggerInterface) \
	virtual ~USonyGamepadTriggerInterface() = default;


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSonyGamepadTriggerInterface(); \
	friend struct Z_Construct_UClass_USonyGamepadTriggerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadTriggerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USonyGamepadTriggerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WindowsDualsense_ds5w"), Z_Construct_UClass_USonyGamepadTriggerInterface_NoRegister) \
	DECLARE_SERIALIZER(USonyGamepadTriggerInterface)


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISonyGamepadTriggerInterface() {} \
public: \
	typedef USonyGamepadTriggerInterface UClassType; \
	typedef ISonyGamepadTriggerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_13_PROLOG
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USonyGamepadTriggerInterface;

// ********** End Interface USonyGamepadTriggerInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
