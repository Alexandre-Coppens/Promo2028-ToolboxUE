// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Interfaces/SonyGamepadInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSonyGamepadInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadInterface();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadInterface_NoRegister();
WINDOWSDUALSENSE_DS5W_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureReport();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFeatureReport ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFeatureReport;
class UScriptStruct* FFeatureReport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFeatureReport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFeatureReport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeatureReport, (UObject*)Z_Construct_UPackage__Script_WindowsDualsense_ds5w(), TEXT("FeatureReport"));
	}
	return Z_Registration_Info_UScriptStruct_FFeatureReport.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFeatureReport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Interfaces/SonyGamepadInterface.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeatureReport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeatureReport_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
	nullptr,
	&NewStructOps,
	"FeatureReport",
	nullptr,
	0,
	sizeof(FFeatureReport),
	alignof(FFeatureReport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureReport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFeatureReport_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFeatureReport()
{
	if (!Z_Registration_Info_UScriptStruct_FFeatureReport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFeatureReport.InnerSingleton, Z_Construct_UScriptStruct_FFeatureReport_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFeatureReport.InnerSingleton;
}
// ********** End ScriptStruct FFeatureReport ******************************************************

// ********** Begin Interface USonyGamepadInterface ************************************************
void USonyGamepadInterface::StaticRegisterNativesUSonyGamepadInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USonyGamepadInterface;
UClass* USonyGamepadInterface::GetPrivateStaticClass()
{
	using TClass = USonyGamepadInterface;
	if (!Z_Registration_Info_UClass_USonyGamepadInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SonyGamepadInterface"),
			Z_Registration_Info_UClass_USonyGamepadInterface.InnerSingleton,
			StaticRegisterNativesUSonyGamepadInterface,
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
	return Z_Registration_Info_UClass_USonyGamepadInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_USonyGamepadInterface_NoRegister()
{
	return USonyGamepadInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USonyGamepadInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Interfaces/SonyGamepadInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISonyGamepadInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USonyGamepadInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USonyGamepadInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USonyGamepadInterface_Statics::ClassParams = {
	&USonyGamepadInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USonyGamepadInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USonyGamepadInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USonyGamepadInterface()
{
	if (!Z_Registration_Info_UClass_USonyGamepadInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USonyGamepadInterface.OuterSingleton, Z_Construct_UClass_USonyGamepadInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USonyGamepadInterface.OuterSingleton;
}
USonyGamepadInterface::USonyGamepadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USonyGamepadInterface);
// ********** End Interface USonyGamepadInterface **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFeatureReport::StaticStruct, Z_Construct_UScriptStruct_FFeatureReport_Statics::NewStructOps, TEXT("FeatureReport"), &Z_Registration_Info_UScriptStruct_FFeatureReport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeatureReport), 657488982U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USonyGamepadInterface, USonyGamepadInterface::StaticClass, TEXT("USonyGamepadInterface"), &Z_Registration_Info_UClass_USonyGamepadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USonyGamepadInterface), 1988517544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h__Script_WindowsDualsense_ds5w_1317808004(TEXT("/Script/WindowsDualsense_ds5w"),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadInterface_h__Script_WindowsDualsense_ds5w_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
