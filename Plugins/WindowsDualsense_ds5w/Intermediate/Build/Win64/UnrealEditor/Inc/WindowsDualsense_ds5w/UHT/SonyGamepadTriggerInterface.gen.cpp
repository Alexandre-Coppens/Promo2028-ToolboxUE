// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Interfaces/SonyGamepadTriggerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSonyGamepadTriggerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadTriggerInterface();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadTriggerInterface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface USonyGamepadTriggerInterface *****************************************
void USonyGamepadTriggerInterface::StaticRegisterNativesUSonyGamepadTriggerInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USonyGamepadTriggerInterface;
UClass* USonyGamepadTriggerInterface::GetPrivateStaticClass()
{
	using TClass = USonyGamepadTriggerInterface;
	if (!Z_Registration_Info_UClass_USonyGamepadTriggerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SonyGamepadTriggerInterface"),
			Z_Registration_Info_UClass_USonyGamepadTriggerInterface.InnerSingleton,
			StaticRegisterNativesUSonyGamepadTriggerInterface,
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
	return Z_Registration_Info_UClass_USonyGamepadTriggerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_USonyGamepadTriggerInterface_NoRegister()
{
	return USonyGamepadTriggerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USonyGamepadTriggerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Interfaces/SonyGamepadTriggerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISonyGamepadTriggerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USonyGamepadTriggerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USonyGamepadTriggerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USonyGamepadTriggerInterface_Statics::ClassParams = {
	&USonyGamepadTriggerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USonyGamepadTriggerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USonyGamepadTriggerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USonyGamepadTriggerInterface()
{
	if (!Z_Registration_Info_UClass_USonyGamepadTriggerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USonyGamepadTriggerInterface.OuterSingleton, Z_Construct_UClass_USonyGamepadTriggerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USonyGamepadTriggerInterface.OuterSingleton;
}
USonyGamepadTriggerInterface::USonyGamepadTriggerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USonyGamepadTriggerInterface);
// ********** End Interface USonyGamepadTriggerInterface *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USonyGamepadTriggerInterface, USonyGamepadTriggerInterface::StaticClass, TEXT("USonyGamepadTriggerInterface"), &Z_Registration_Info_UClass_USonyGamepadTriggerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USonyGamepadTriggerInterface), 1286954659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h__Script_WindowsDualsense_ds5w_2557440068(TEXT("/Script/WindowsDualsense_ds5w"),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Interfaces_SonyGamepadTriggerInterface_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
