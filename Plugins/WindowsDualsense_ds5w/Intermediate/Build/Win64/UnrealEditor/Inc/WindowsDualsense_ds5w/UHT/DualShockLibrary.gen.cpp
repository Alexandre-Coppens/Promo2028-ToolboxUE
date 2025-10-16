// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/DualShock/DualShockLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDualShockLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualShockLibrary();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_UDualShockLibrary_NoRegister();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadInterface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDualShockLibrary ********************************************************
void UDualShockLibrary::StaticRegisterNativesUDualShockLibrary()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDualShockLibrary;
UClass* UDualShockLibrary::GetPrivateStaticClass()
{
	using TClass = UDualShockLibrary;
	if (!Z_Registration_Info_UClass_UDualShockLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DualShockLibrary"),
			Z_Registration_Info_UClass_UDualShockLibrary.InnerSingleton,
			StaticRegisterNativesUDualShockLibrary,
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
	return Z_Registration_Info_UClass_UDualShockLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UDualShockLibrary_NoRegister()
{
	return UDualShockLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDualShockLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/DualShock/DualShockLibrary.h" },
		{ "ModuleRelativePath", "Public/Core/DualShock/DualShockLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDualShockLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDualShockLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDualShockLibrary_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USonyGamepadInterface_NoRegister, (int32)VTABLE_OFFSET(UDualShockLibrary, ISonyGamepadInterface), false },  // 1988517544
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDualShockLibrary_Statics::ClassParams = {
	&UDualShockLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDualShockLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDualShockLibrary()
{
	if (!Z_Registration_Info_UClass_UDualShockLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDualShockLibrary.OuterSingleton, Z_Construct_UClass_UDualShockLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDualShockLibrary.OuterSingleton;
}
UDualShockLibrary::UDualShockLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDualShockLibrary);
UDualShockLibrary::~UDualShockLibrary() {}
// ********** End Class UDualShockLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDualShockLibrary, UDualShockLibrary::StaticClass, TEXT("UDualShockLibrary"), &Z_Registration_Info_UClass_UDualShockLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDualShockLibrary), 460995551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h__Script_WindowsDualsense_ds5w_2518513554(TEXT("/Script/WindowsDualsense_ds5w"),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_DualShock_DualShockLibrary_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
