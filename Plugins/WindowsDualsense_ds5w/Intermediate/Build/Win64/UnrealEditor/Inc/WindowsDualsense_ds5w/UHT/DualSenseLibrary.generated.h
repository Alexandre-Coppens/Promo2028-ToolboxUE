// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/DualSense/DualSenseLibrary.h"

#ifdef WINDOWSDUALSENSE_DS5W_DualSenseLibrary_generated_h
#error "DualSenseLibrary.generated.h already included, missing '#pragma once' in DualSenseLibrary.h"
#endif
#define WINDOWSDUALSENSE_DS5W_DualSenseLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSensorBounds *****************************************************
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h_250_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSensorBounds_Statics; \
	WINDOWSDUALSENSE_DS5W_API static class UScriptStruct* StaticStruct();


struct FSensorBounds;
// ********** End ScriptStruct FSensorBounds *******************************************************

// ********** Begin Class UDualSenseLibrary ********************************************************
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualSenseLibrary_NoRegister();

#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h_306_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDualSenseLibrary(); \
	friend struct Z_Construct_UClass_UDualSenseLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualSenseLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDualSenseLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsDualsense_ds5w"), Z_Construct_UClass_UDualSenseLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDualSenseLibrary) \
	virtual UObject* _getUObject() const override { return const_cast<UDualSenseLibrary*>(this); }


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h_306_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDualSenseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDualSenseLibrary(UDualSenseLibrary&&) = delete; \
	UDualSenseLibrary(const UDualSenseLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDualSenseLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDualSenseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDualSenseLibrary) \
	NO_API virtual ~UDualSenseLibrary();


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h_303_PROLOG
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h_306_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h_306_INCLASS_NO_PURE_DECLS \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h_306_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDualSenseLibrary;

// ********** End Class UDualSenseLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
