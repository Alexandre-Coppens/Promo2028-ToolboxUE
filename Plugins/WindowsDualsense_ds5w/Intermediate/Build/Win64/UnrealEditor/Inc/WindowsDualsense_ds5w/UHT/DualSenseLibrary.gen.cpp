// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/DualSense/DualSenseLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDualSenseLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualSenseLibrary();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualSenseLibrary_NoRegister();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadInterface_NoRegister();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadTriggerInterface_NoRegister();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FSensorBounds();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSensorBounds *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSensorBounds;
class UScriptStruct* FSensorBounds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSensorBounds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSensorBounds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSensorBounds, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("SensorBounds"));
	}
	return Z_Registration_Info_UScriptStruct_FSensorBounds.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSensorBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gyro_X_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gyro_Y_Bounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X = Min, Y = Max\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X = Min, Y = Max" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gyro_Z_Bounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X = Min, Y = Max\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X = Min, Y = Max" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accel_X_Bounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X = Min, Y = Max\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X = Min, Y = Max" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accel_Y_Bounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X = Min, Y = Max\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X = Min, Y = Max" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accel_Z_Bounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X = Min, Y = Max\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X = Min, Y = Max" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gyro_X_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gyro_Y_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gyro_Z_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Accel_X_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Accel_Y_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Accel_Z_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSensorBounds>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Gyro_X_Bounds = { "Gyro_X_Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorBounds, Gyro_X_Bounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gyro_X_Bounds_MetaData), NewProp_Gyro_X_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Gyro_Y_Bounds = { "Gyro_Y_Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorBounds, Gyro_Y_Bounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gyro_Y_Bounds_MetaData), NewProp_Gyro_Y_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Gyro_Z_Bounds = { "Gyro_Z_Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorBounds, Gyro_Z_Bounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gyro_Z_Bounds_MetaData), NewProp_Gyro_Z_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Accel_X_Bounds = { "Accel_X_Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorBounds, Accel_X_Bounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accel_X_Bounds_MetaData), NewProp_Accel_X_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Accel_Y_Bounds = { "Accel_Y_Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorBounds, Accel_Y_Bounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accel_Y_Bounds_MetaData), NewProp_Accel_Y_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Accel_Z_Bounds = { "Accel_Z_Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSensorBounds, Accel_Z_Bounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accel_Z_Bounds_MetaData), NewProp_Accel_Z_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSensorBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Gyro_X_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Gyro_Y_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Gyro_Z_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Accel_X_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Accel_Y_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSensorBounds_Statics::NewProp_Accel_Z_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSensorBounds_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"SensorBounds",
	Z_Construct_UScriptStruct_FSensorBounds_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorBounds_Statics::PropPointers),
	sizeof(FSensorBounds),
	alignof(FSensorBounds),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSensorBounds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSensorBounds_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSensorBounds()
{
	if (!Z_Registration_Info_UScriptStruct_FSensorBounds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSensorBounds.InnerSingleton, Z_Construct_UScriptStruct_FSensorBounds_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSensorBounds.InnerSingleton;
}
// ********** End ScriptStruct FSensorBounds *******************************************************

// ********** Begin Class UDualSenseLibrary ********************************************************
void UDualSenseLibrary::StaticRegisterNativesUDualSenseLibrary()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDualSenseLibrary;
UClass* UDualSenseLibrary::GetPrivateStaticClass()
{
	using TClass = UDualSenseLibrary;
	if (!Z_Registration_Info_UClass_UDualSenseLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DualSenseLibrary"),
			Z_Registration_Info_UClass_UDualSenseLibrary.InnerSingleton,
			StaticRegisterNativesUDualSenseLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDualSenseLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UDualSenseLibrary_NoRegister()
{
	return UDualSenseLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDualSenseLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UDualSenseLibrary\n * @brief Utility class for interfacing with the PlayStation DualSense controller.\n *\n * This class provides a collection of static functions and utilities specific to\n * interacting with the PlayStation DualSense controller within a project. It facilitates\n * operations such as managing haptic feedback, adaptive triggers, and other special\n * features offered by the controller.\n *\n * The UDualSenseLibrary is typically used to control and respond to events from\n * a connected DualSense device, enabling advanced functionalities for an enhanced\n * user experience.\n *\n * Features supported may include:\n * - Triggering haptic feedback.\n * - Configuring adaptive trigger effects.\n * - Managing light bars and other controller-specific outputs.\n * - Retrieving connected-state and other metadata.\n *\n * The library is designed for developers seeking to leverage unique features of\n * the DualSense controller programmatically within an application.\n */" },
#endif
		{ "IncludePath", "Core/DualSense/DualSenseLibrary.h" },
		{ "ModuleRelativePath", "Public/Core/DualSense/DualSenseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UDualSenseLibrary\n@brief Utility class for interfacing with the PlayStation DualSense controller.\n\nThis class provides a collection of static functions and utilities specific to\ninteracting with the PlayStation DualSense controller within a project. It facilitates\noperations such as managing haptic feedback, adaptive triggers, and other special\nfeatures offered by the controller.\n\nThe UDualSenseLibrary is typically used to control and respond to events from\na connected DualSense device, enabling advanced functionalities for an enhanced\nuser experience.\n\nFeatures supported may include:\n- Triggering haptic feedback.\n- Configuring adaptive trigger effects.\n- Managing light bars and other controller-specific outputs.\n- Retrieving connected-state and other metadata.\n\nThe library is designed for developers seeking to leverage unique features of\nthe DualSense controller programmatically within an application." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDualSenseLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDualSenseLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDualSenseLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDualSenseLibrary_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USonyGamepadInterface_NoRegister, (int32)VTABLE_OFFSET(UDualSenseLibrary, ISonyGamepadInterface), false },  // 1988517544
	{ Z_Construct_UClass_USonyGamepadTriggerInterface_NoRegister, (int32)VTABLE_OFFSET(UDualSenseLibrary, ISonyGamepadTriggerInterface), false },  // 1286954659
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDualSenseLibrary_Statics::ClassParams = {
	&UDualSenseLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDualSenseLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDualSenseLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDualSenseLibrary()
{
	if (!Z_Registration_Info_UClass_UDualSenseLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDualSenseLibrary.OuterSingleton, Z_Construct_UClass_UDualSenseLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDualSenseLibrary.OuterSingleton;
}
UDualSenseLibrary::UDualSenseLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDualSenseLibrary);
UDualSenseLibrary::~UDualSenseLibrary() {}
// ********** End Class UDualSenseLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSensorBounds::StaticStruct, Z_Construct_UScriptStruct_FSensorBounds_Statics::NewStructOps, TEXT("SensorBounds"), &Z_Registration_Info_UScriptStruct_FSensorBounds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSensorBounds), 3801722324U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDualSenseLibrary, UDualSenseLibrary::StaticClass, TEXT("UDualSenseLibrary"), &Z_Registration_Info_UClass_UDualSenseLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDualSenseLibrary), 2874611713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h__Script_WindowsDualsense_ds5w_1452600664(TEXT("/Script/WindowsDualsense_ds5w"),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualSense_DualSenseLibrary_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
