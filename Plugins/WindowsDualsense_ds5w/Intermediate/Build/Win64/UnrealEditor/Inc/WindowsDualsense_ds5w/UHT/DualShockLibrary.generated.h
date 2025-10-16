// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/DualShock/DualShockLibrary.h"

#ifdef WINDOWSDUALSENSE_DS5W_DualShockLibrary_generated_h
#error "DualShockLibrary.generated.h already included, missing '#pragma once' in DualShockLibrary.h"
#endif
#define WINDOWSDUALSENSE_DS5W_DualShockLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDualShockLibrary ********************************************************
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualShockLibrary_NoRegister();

#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDualShockLibrary(); \
	friend struct Z_Construct_UClass_UDualShockLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualShockLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDualShockLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsDualsense_ds5w"), Z_Construct_UClass_UDualShockLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDualShockLibrary) \
	virtual UObject* _getUObject() const override { return const_cast<UDualShockLibrary*>(this); }


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDualShockLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDualShockLibrary(UDualShockLibrary&&) = delete; \
	UDualShockLibrary(const UDualShockLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDualShockLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDualShockLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDualShockLibrary) \
	NO_API virtual ~UDualShockLibrary();


#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h_17_PROLOG
#define FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDualShockLibrary;

// ********** End Class UDualShockLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
