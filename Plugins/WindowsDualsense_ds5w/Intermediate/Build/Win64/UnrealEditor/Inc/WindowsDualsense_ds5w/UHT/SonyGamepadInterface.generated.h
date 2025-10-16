// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Interfaces/SonyGamepadInterface.h"

#ifdef WINDOWSDUALSENSE_DS5W_SonyGamepadInterface_generated_h
#error "SonyGamepadInterface.generated.h already included, missing '#pragma once' in SonyGamepadInterface.h"
#endif
#define WINDOWSDUALSENSE_DS5W_SonyGamepadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFeatureReport ****************************************************
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeatureReport_Statics; \
	WINDOWSDUALSENSE_DS5W_API static class UScriptStruct* StaticStruct();


struct FFeatureReport;
// ********** End ScriptStruct FFeatureReport ******************************************************

// ********** Begin Interface USonyGamepadInterface ************************************************
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadInterface_NoRegister();

#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USonyGamepadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USonyGamepadInterface(USonyGamepadInterface&&) = delete; \
	USonyGamepadInterface(const USonyGamepadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USonyGamepadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USonyGamepadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USonyGamepadInterface) \
	virtual ~USonyGamepadInterface() = default;


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_30_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSonyGamepadInterface(); \
	friend struct Z_Construct_UClass_USonyGamepadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USonyGamepadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WindowsDualsense_ds5w"), Z_Construct_UClass_USonyGamepadInterface_NoRegister) \
	DECLARE_SERIALIZER(USonyGamepadInterface)


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_30_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_30_GENERATED_UINTERFACE_BODY() \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_30_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISonyGamepadInterface() {} \
public: \
	typedef USonyGamepadInterface UClassType; \
	typedef ISonyGamepadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_27_PROLOG
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USonyGamepadInterface;

// ********** End Interface USonyGamepadInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
