// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SonyGamepadProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSonyGamepadProxy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
UPackage* Z_Construct_UPackage__Script_WindowsDualsense_ds5w();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadProxy();
WINDOWSDUALSENSE_DS5W_API UClass* Z_Construct_UClass_USonyGamepadProxy_NoRegister();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType();
WINDOWSDUALSENSE_DS5W_API UEnum* Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USonyGamepadProxy Function DeviceDisconnect ******************************
struct Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics
{
	struct SonyGamepadProxy_eventDeviceDisconnect_Parms
	{
		int32 ControllerId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Status" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SonyGamepad: Dualsense or DualShock Status" },
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventDeviceDisconnect_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SonyGamepadProxy_eventDeviceDisconnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SonyGamepadProxy_eventDeviceDisconnect_Parms), &Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "DeviceDisconnect", Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::SonyGamepadProxy_eventDeviceDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::SonyGamepadProxy_eventDeviceDisconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execDeviceDisconnect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USonyGamepadProxy::DeviceDisconnect(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function DeviceDisconnect ********************************

// ********** Begin Class USonyGamepadProxy Function DeviceIsConnected *****************************
struct Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics
{
	struct SonyGamepadProxy_eventDeviceIsConnected_Parms
	{
		int32 ControllerId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the DualSense or DualShock device with the specified Controller ID is connected.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to check for connectivity.\n\x09 * @return True if the DualSense or DualShock  device is connected, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the DualSense or DualShock device with the specified Controller ID is connected.\n\n@param ControllerId The ID of the controller to check for connectivity.\n@return True if the DualSense or DualShock  device is connected, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventDeviceIsConnected_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SonyGamepadProxy_eventDeviceIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SonyGamepadProxy_eventDeviceIsConnected_Parms), &Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "DeviceIsConnected", Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::SonyGamepadProxy_eventDeviceIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::SonyGamepadProxy_eventDeviceIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execDeviceIsConnected)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USonyGamepadProxy::DeviceIsConnected(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function DeviceIsConnected *******************************

// ********** Begin Class USonyGamepadProxy Function DeviceReconnect *******************************
struct Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics
{
	struct SonyGamepadProxy_eventDeviceReconnect_Parms
	{
		int32 ControllerId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Status" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GamepadCoOp Plugin" },
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventDeviceReconnect_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SonyGamepadProxy_eventDeviceReconnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SonyGamepadProxy_eventDeviceReconnect_Parms), &Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "DeviceReconnect", Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::SonyGamepadProxy_eventDeviceReconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::SonyGamepadProxy_eventDeviceReconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execDeviceReconnect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USonyGamepadProxy::DeviceReconnect(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function DeviceReconnect *********************************

// ********** Begin Class USonyGamepadProxy Function EnableAccelerometerValues *********************
struct Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics
{
	struct SonyGamepadProxy_eventEnableAccelerometerValues_Parms
	{
		int32 ControllerId;
		bool bEnableAccelerometer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Touch, Use EnableGyroscopeValues" },
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_bEnableAccelerometer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAccelerometer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventEnableAccelerometerValues_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::NewProp_bEnableAccelerometer_SetBit(void* Obj)
{
	((SonyGamepadProxy_eventEnableAccelerometerValues_Parms*)Obj)->bEnableAccelerometer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::NewProp_bEnableAccelerometer = { "bEnableAccelerometer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SonyGamepadProxy_eventEnableAccelerometerValues_Parms), &Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::NewProp_bEnableAccelerometer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::NewProp_bEnableAccelerometer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "EnableAccelerometerValues", Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::SonyGamepadProxy_eventEnableAccelerometerValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::SonyGamepadProxy_eventEnableAccelerometerValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execEnableAccelerometerValues)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_UBOOL(Z_Param_bEnableAccelerometer);
	P_FINISH;
	P_NATIVE_BEGIN;
	USonyGamepadProxy::EnableAccelerometerValues(Z_Param_ControllerId,Z_Param_bEnableAccelerometer);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function EnableAccelerometerValues ***********************

// ********** Begin Class USonyGamepadProxy Function EnableGyroscopeValues *************************
struct Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics
{
	struct SonyGamepadProxy_eventEnableGyroscopeValues_Parms
	{
		int32 ControllerId;
		bool bEnableGyroscope;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad|Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables or disables the gyroscope functionality for a specified DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID of the controller for which the gyroscope functionality is to be modified.\n\x09 * @param bEnableGyroscope Set to true to enable the gyroscope, or false to disable it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables the gyroscope functionality for a specified DualSense controller.\n\n@param ControllerId The ID of the controller for which the gyroscope functionality is to be modified.\n@param bEnableGyroscope Set to true to enable the gyroscope, or false to disable it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_bEnableGyroscope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGyroscope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventEnableGyroscopeValues_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::NewProp_bEnableGyroscope_SetBit(void* Obj)
{
	((SonyGamepadProxy_eventEnableGyroscopeValues_Parms*)Obj)->bEnableGyroscope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::NewProp_bEnableGyroscope = { "bEnableGyroscope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SonyGamepadProxy_eventEnableGyroscopeValues_Parms), &Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::NewProp_bEnableGyroscope_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::NewProp_bEnableGyroscope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "EnableGyroscopeValues", Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::SonyGamepadProxy_eventEnableGyroscopeValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::SonyGamepadProxy_eventEnableGyroscopeValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execEnableGyroscopeValues)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_UBOOL(Z_Param_bEnableGyroscope);
	P_FINISH;
	P_NATIVE_BEGIN;
	USonyGamepadProxy::EnableGyroscopeValues(Z_Param_ControllerId,Z_Param_bEnableGyroscope);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function EnableGyroscopeValues ***************************

// ********** Begin Class USonyGamepadProxy Function EnableTouch ***********************************
struct Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics
{
	struct SonyGamepadProxy_eventEnableTouch_Parms
	{
		int32 ControllerId;
		bool bEnableTouch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Touch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables or disables the touch functionality on a specified DualSense controller.\n\x09 *\n\x09 * @param ControllerId The identifier of the controller for which the touch functionality should be enabled or disabled.\n\x09 * @param bEnableTouch A boolean indicating whether to enable (true) or disable (false) the touch functionality.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables the touch functionality on a specified DualSense controller.\n\n@param ControllerId The identifier of the controller for which the touch functionality should be enabled or disabled.\n@param bEnableTouch A boolean indicating whether to enable (true) or disable (false) the touch functionality." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static void NewProp_bEnableTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTouch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventEnableTouch_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::NewProp_bEnableTouch_SetBit(void* Obj)
{
	((SonyGamepadProxy_eventEnableTouch_Parms*)Obj)->bEnableTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::NewProp_bEnableTouch = { "bEnableTouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SonyGamepadProxy_eventEnableTouch_Parms), &Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::NewProp_bEnableTouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::NewProp_bEnableTouch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "EnableTouch", Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::SonyGamepadProxy_eventEnableTouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::SonyGamepadProxy_eventEnableTouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_EnableTouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_EnableTouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execEnableTouch)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_UBOOL(Z_Param_bEnableTouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	USonyGamepadProxy::EnableTouch(Z_Param_ControllerId,Z_Param_bEnableTouch);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function EnableTouch *************************************

// ********** Begin Class USonyGamepadProxy Function GetConnectionType *****************************
struct Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics
{
	struct SonyGamepadProxy_eventGetConnectionType_Parms
	{
		int32 ControllerId;
		TEnumAsByte<EDeviceConnection> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the connection type of the DualSense or DualShock device with the specified Controller ID.\n\x09 *\n\x09 * @param ControllerId The ID of the controller whose connection type is being queried.\n\x09 * @return The connection type of the device, which can be USB, Bluetooth, or Unrecognized.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the connection type of the DualSense or DualShock device with the specified Controller ID.\n\n@param ControllerId The ID of the controller whose connection type is being queried.\n@return The connection type of the device, which can be USB, Bluetooth, or Unrecognized." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetConnectionType_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetConnectionType_Parms, ReturnValue), Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceConnection, METADATA_PARAMS(0, nullptr) }; // 2053093638
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "GetConnectionType", Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::SonyGamepadProxy_eventGetConnectionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::SonyGamepadProxy_eventGetConnectionType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execGetConnectionType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EDeviceConnection>*)Z_Param__Result=USonyGamepadProxy::GetConnectionType(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function GetConnectionType *******************************

// ********** Begin Class USonyGamepadProxy Function GetDeviceType *********************************
struct Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics
{
	struct SonyGamepadProxy_eventGetDeviceType_Parms
	{
		int32 ControllerId;
		TEnumAsByte<EDeviceType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the type of the connected device (e.g., DualSense, DualSense Edge, or DualShock 4)\n\x09 * based on the specified Controller ID.\n\x09 *\n\x09 * @param ControllerId The ID of the connected controller whose type is to be determined.\n\x09 * @return The type of the device as an EDeviceType enum value. Possible values include:\n\x09 *         - DualSense\n\x09 *         - DualSenseEdge\n\x09 *         - DualShock4\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the type of the connected device (e.g., DualSense, DualSense Edge, or DualShock 4)\nbased on the specified Controller ID.\n\n@param ControllerId The ID of the connected controller whose type is to be determined.\n@return The type of the device as an EDeviceType enum value. Possible values include:\n        - DualSense\n        - DualSenseEdge\n        - DualShock4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetDeviceType_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetDeviceType_Parms, ReturnValue), Z_Construct_UEnum_WindowsDualsense_ds5w_EDeviceType, METADATA_PARAMS(0, nullptr) }; // 517712376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "GetDeviceType", Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::SonyGamepadProxy_eventGetDeviceType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::SonyGamepadProxy_eventGetDeviceType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execGetDeviceType)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EDeviceType>*)Z_Param__Result=USonyGamepadProxy::GetDeviceType(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function GetDeviceType ***********************************

// ********** Begin Class USonyGamepadProxy Function GetGamepadInterface ***************************
struct Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct SonyGamepadProxy_eventGetGamepadInterface_Parms
	{
		int32 ControllerId;
		FInputDeviceId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetGamepadInterface_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetGamepadInterface_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "GetGamepadInterface", Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::SonyGamepadProxy_eventGetGamepadInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::SonyGamepadProxy_eventGetGamepadInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execGetGamepadInterface)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDeviceId*)Z_Param__Result=USonyGamepadProxy::GetGamepadInterface(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function GetGamepadInterface *****************************

// ********** Begin Class USonyGamepadProxy Function GetMotionSensorCalibrationStatus **************
struct Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics
{
	struct SonyGamepadProxy_eventGetMotionSensorCalibrationStatus_Parms
	{
		int32 ControllerId;
		float Progress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad|Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the calibration status of the motion sensor for the specified controller.\n\x09 *\n\x09 * @param ControllerId The ID of the controller whose motion sensor calibration status is being queried.\n\x09 * @param Progress A reference to a variable where the calibration progress will be stored, expressed as a percentage.\n\x09 * @return True if the calibration process is in progress, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the calibration status of the motion sensor for the specified controller.\n\n@param ControllerId The ID of the controller whose motion sensor calibration status is being queried.\n@param Progress A reference to a variable where the calibration progress will be stored, expressed as a percentage.\n@return True if the calibration process is in progress, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetMotionSensorCalibrationStatus_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventGetMotionSensorCalibrationStatus_Parms, Progress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SonyGamepadProxy_eventGetMotionSensorCalibrationStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SonyGamepadProxy_eventGetMotionSensorCalibrationStatus_Parms), &Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "GetMotionSensorCalibrationStatus", Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::SonyGamepadProxy_eventGetMotionSensorCalibrationStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::SonyGamepadProxy_eventGetMotionSensorCalibrationStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execGetMotionSensorCalibrationStatus)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USonyGamepadProxy::GetMotionSensorCalibrationStatus(Z_Param_ControllerId,Z_Param_Out_Progress);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function GetMotionSensorCalibrationStatus ****************

// ********** Begin Class USonyGamepadProxy Function LedColorEffects *******************************
struct Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics
{
	struct SonyGamepadProxy_eventLedColorEffects_Parms
	{
		int32 ControllerId;
		FColor Color;
		float BrightnessTime;
		float ToogleTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Led Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates the LED color effects on a DualSense controller using the specified color.\n\x09 *\n\x09 * @param ControllerId The identifier of the controller whose LED color will be updated.\n\x09 * @param Color The color to set on the controller's LED.\n\x09 */" },
#endif
		{ "CPP_Default_BrightnessTime", "0.000000" },
		{ "CPP_Default_ToogleTime", "0.000000" },
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the LED color effects on a DualSense controller using the specified color.\n\n@param ControllerId The identifier of the controller whose LED color will be updated.\n@param Color The color to set on the controller's LED." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrightnessTime_MetaData[] = {
		{ "ClampMax", "2.5" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "(DualShock 4) LED brightness transition time min: 0.0f max: 2.5f" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(DualShock) LED brightness transition time, in seconds." },
#endif
		{ "UIMax", "2.5" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToogleTime_MetaData[] = {
		{ "ClampMax", "2.5" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "(DualShock 4) Toggle transition time min: 0.0f max: 2.5f" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(DualShock) Toggle transition time, in seconds." },
#endif
		{ "UIMax", "2.5" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrightnessTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToogleTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLedColorEffects_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLedColorEffects_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_BrightnessTime = { "BrightnessTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLedColorEffects_Parms, BrightnessTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrightnessTime_MetaData), NewProp_BrightnessTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_ToogleTime = { "ToogleTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLedColorEffects_Parms, ToogleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToogleTime_MetaData), NewProp_ToogleTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_BrightnessTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::NewProp_ToogleTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "LedColorEffects", Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::SonyGamepadProxy_eventLedColorEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::SonyGamepadProxy_eventLedColorEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execLedColorEffects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrightnessTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ToogleTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	USonyGamepadProxy::LedColorEffects(Z_Param_ControllerId,Z_Param_Color,Z_Param_BrightnessTime,Z_Param_ToogleTime);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function LedColorEffects *********************************

// ********** Begin Class USonyGamepadProxy Function LedMicEffects *********************************
struct Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics
{
	struct SonyGamepadProxy_eventLedMicEffects_Parms
	{
		int32 ControllerId;
		ELedMicEnum Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Led Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Controls the LED and microphone visual effects on a DualSense controller.\n\x09 *\n\x09 * @param ControllerId The ID of the DualSense controller to be affected.\n\x09 * @param Value The desired LED and microphone effect to apply, represented as an ELedMicEnum value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the LED and microphone visual effects on a DualSense controller.\n\n@param ControllerId The ID of the DualSense controller to be affected.\n@param Value The desired LED and microphone effect to apply, represented as an ELedMicEnum value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLedMicEffects_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLedMicEffects_Parms, Value), Z_Construct_UEnum_WindowsDualsense_ds5w_ELedMicEnum, METADATA_PARAMS(0, nullptr) }; // 1383410362
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "LedMicEffects", Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::SonyGamepadProxy_eventLedMicEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::SonyGamepadProxy_eventLedMicEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execLedMicEffects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_ENUM(ELedMicEnum,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	USonyGamepadProxy::LedMicEffects(Z_Param_ControllerId,ELedMicEnum(Z_Param_Value));
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function LedMicEffects ***********************************

// ********** Begin Class USonyGamepadProxy Function LevelBatteryDevice ****************************
struct Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics
{
	struct SonyGamepadProxy_eventLevelBatteryDevice_Parms
	{
		int32 ControllerId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Dualsense or DualShock Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the battery level of the DualSense or DualShock controller for the specified controller ID.\n\x09 *\n\x09 * This method uses the DualSense or DualShock library instance associated with the provided controller ID\n\x09 * to fetch the battery level. If the library instance is not found, the method returns 0.0f.\n\x09 *\n\x09 * @param ControllerId The ID of the DualSense or DualShock controller to query.\n\x09 * @return The battery level of the controller as a float. Returns 0.0f if the library instance cannot be retrieved.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the battery level of the DualSense or DualShock controller for the specified controller ID.\n\nThis method uses the DualSense or DualShock library instance associated with the provided controller ID\nto fetch the battery level. If the library instance is not found, the method returns 0.0f.\n\n@param ControllerId The ID of the DualSense or DualShock controller to query.\n@return The battery level of the controller as a float. Returns 0.0f if the library instance cannot be retrieved." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLevelBatteryDevice_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventLevelBatteryDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "LevelBatteryDevice", Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::SonyGamepadProxy_eventLevelBatteryDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::SonyGamepadProxy_eventLevelBatteryDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execLevelBatteryDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USonyGamepadProxy::LevelBatteryDevice(Z_Param_ControllerId);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function LevelBatteryDevice ******************************

// ********** Begin Class USonyGamepadProxy Function RemapControllerIdToUser ***********************
struct Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics
{
	struct SonyGamepadProxy_eventRemapControllerIdToUser_Parms
	{
		int32 GamepadId;
		int32 UserId;
		int32 OldUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad: Remap Device from User" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GamepadCoOp Plugin" },
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GamepadId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::NewProp_GamepadId = { "GamepadId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventRemapControllerIdToUser_Parms, GamepadId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventRemapControllerIdToUser_Parms, UserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::NewProp_OldUser = { "OldUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventRemapControllerIdToUser_Parms, OldUser), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::NewProp_GamepadId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::NewProp_OldUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "RemapControllerIdToUser", Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::SonyGamepadProxy_eventRemapControllerIdToUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::SonyGamepadProxy_eventRemapControllerIdToUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execRemapControllerIdToUser)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GamepadId);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	USonyGamepadProxy::RemapControllerIdToUser(Z_Param_GamepadId,Z_Param_UserId,Z_Param_OldUser);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function RemapControllerIdToUser *************************

// ********** Begin Class USonyGamepadProxy Function StartMotionSensorCalibration ******************
struct Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics
{
	struct SonyGamepadProxy_eventStartMotionSensorCalibration_Parms
	{
		int32 ControllerId;
		float Duration;
		float DeadZone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SonyGamepad|Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initiates the motion sensor calibration process for the specified controller.\n\x09 * The calibration adjusts the motion sensor sensitivity and dead zone settings.\n\x09 *\n\x09 * @param ControllerId The ID of the controller to be calibrated.\n\x09 * @param Duration The duration of the calibration process in seconds.\n\x09 * @param DeadZone The sensitivity threshold below which motion input will be ignored.\n\x09 */" },
#endif
		{ "CPP_Default_DeadZone", "0.500000" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiates the motion sensor calibration process for the specified controller.\nThe calibration adjusts the motion sensor sensitivity and dead zone settings.\n\n@param ControllerId The ID of the controller to be calibrated.\n@param Duration The duration of the calibration process in seconds.\n@param DeadZone The sensitivity threshold below which motion input will be ignored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "Calibration Duration (Seconds)" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time in seconds to collect sensor data for calculating the stable center (baseline). Longer durations can provide a more accurate baseline." },
#endif
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Noise Deadzone Percentage" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A percentage (0.0 to 1.0) of the sensor noise range to ignore after calibration. A higher value creates a larger deadzone, filtering out more residual noise but potentially ignoring very subtle movements." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventStartMotionSensorCalibration_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventStartMotionSensorCalibration_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SonyGamepadProxy_eventStartMotionSensorCalibration_Parms, DeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadZone_MetaData), NewProp_DeadZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::NewProp_ControllerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::NewProp_DeadZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USonyGamepadProxy, nullptr, "StartMotionSensorCalibration", Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::SonyGamepadProxy_eventStartMotionSensorCalibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::SonyGamepadProxy_eventStartMotionSensorCalibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USonyGamepadProxy::execStartMotionSensorCalibration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeadZone);
	P_FINISH;
	P_NATIVE_BEGIN;
	USonyGamepadProxy::StartMotionSensorCalibration(Z_Param_ControllerId,Z_Param_Duration,Z_Param_DeadZone);
	P_NATIVE_END;
}
// ********** End Class USonyGamepadProxy Function StartMotionSensorCalibration ********************

// ********** Begin Class USonyGamepadProxy ********************************************************
void USonyGamepadProxy::StaticRegisterNativesUSonyGamepadProxy()
{
	UClass* Class = USonyGamepadProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeviceDisconnect", &USonyGamepadProxy::execDeviceDisconnect },
		{ "DeviceIsConnected", &USonyGamepadProxy::execDeviceIsConnected },
		{ "DeviceReconnect", &USonyGamepadProxy::execDeviceReconnect },
		{ "EnableAccelerometerValues", &USonyGamepadProxy::execEnableAccelerometerValues },
		{ "EnableGyroscopeValues", &USonyGamepadProxy::execEnableGyroscopeValues },
		{ "EnableTouch", &USonyGamepadProxy::execEnableTouch },
		{ "GetConnectionType", &USonyGamepadProxy::execGetConnectionType },
		{ "GetDeviceType", &USonyGamepadProxy::execGetDeviceType },
		{ "GetGamepadInterface", &USonyGamepadProxy::execGetGamepadInterface },
		{ "GetMotionSensorCalibrationStatus", &USonyGamepadProxy::execGetMotionSensorCalibrationStatus },
		{ "LedColorEffects", &USonyGamepadProxy::execLedColorEffects },
		{ "LedMicEffects", &USonyGamepadProxy::execLedMicEffects },
		{ "LevelBatteryDevice", &USonyGamepadProxy::execLevelBatteryDevice },
		{ "RemapControllerIdToUser", &USonyGamepadProxy::execRemapControllerIdToUser },
		{ "StartMotionSensorCalibration", &USonyGamepadProxy::execStartMotionSensorCalibration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USonyGamepadProxy;
UClass* USonyGamepadProxy::GetPrivateStaticClass()
{
	using TClass = USonyGamepadProxy;
	if (!Z_Registration_Info_UClass_USonyGamepadProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SonyGamepadProxy"),
			Z_Registration_Info_UClass_USonyGamepadProxy.InnerSingleton,
			StaticRegisterNativesUSonyGamepadProxy,
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
	return Z_Registration_Info_UClass_USonyGamepadProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_USonyGamepadProxy_NoRegister()
{
	return USonyGamepadProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USonyGamepadProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Proxy class for interacting with Sony gamepad devices such as DualSense or DualShock controllers.\n * This class provides static methods to handle various functionalities, including device status,\n * connection type, battery levels, LED effects, motion sensor calibration, touch capabilities,\n * and deprecation of certain methods.\n */" },
#endif
		{ "IncludePath", "SonyGamepadProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SonyGamepadProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Proxy class for interacting with Sony gamepad devices such as DualSense or DualShock controllers.\nThis class provides static methods to handle various functionalities, including device status,\nconnection type, battery levels, LED effects, motion sensor calibration, touch capabilities,\nand deprecation of certain methods." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USonyGamepadProxy_DeviceDisconnect, "DeviceDisconnect" }, // 3846892343
		{ &Z_Construct_UFunction_USonyGamepadProxy_DeviceIsConnected, "DeviceIsConnected" }, // 2698796566
		{ &Z_Construct_UFunction_USonyGamepadProxy_DeviceReconnect, "DeviceReconnect" }, // 121164113
		{ &Z_Construct_UFunction_USonyGamepadProxy_EnableAccelerometerValues, "EnableAccelerometerValues" }, // 2127662328
		{ &Z_Construct_UFunction_USonyGamepadProxy_EnableGyroscopeValues, "EnableGyroscopeValues" }, // 2009499616
		{ &Z_Construct_UFunction_USonyGamepadProxy_EnableTouch, "EnableTouch" }, // 3034132171
		{ &Z_Construct_UFunction_USonyGamepadProxy_GetConnectionType, "GetConnectionType" }, // 2255710376
		{ &Z_Construct_UFunction_USonyGamepadProxy_GetDeviceType, "GetDeviceType" }, // 3839064687
		{ &Z_Construct_UFunction_USonyGamepadProxy_GetGamepadInterface, "GetGamepadInterface" }, // 280176224
		{ &Z_Construct_UFunction_USonyGamepadProxy_GetMotionSensorCalibrationStatus, "GetMotionSensorCalibrationStatus" }, // 49242860
		{ &Z_Construct_UFunction_USonyGamepadProxy_LedColorEffects, "LedColorEffects" }, // 4292797687
		{ &Z_Construct_UFunction_USonyGamepadProxy_LedMicEffects, "LedMicEffects" }, // 2174975174
		{ &Z_Construct_UFunction_USonyGamepadProxy_LevelBatteryDevice, "LevelBatteryDevice" }, // 1889344005
		{ &Z_Construct_UFunction_USonyGamepadProxy_RemapControllerIdToUser, "RemapControllerIdToUser" }, // 396406263
		{ &Z_Construct_UFunction_USonyGamepadProxy_StartMotionSensorCalibration, "StartMotionSensorCalibration" }, // 326070276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USonyGamepadProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USonyGamepadProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsDualsense_ds5w,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USonyGamepadProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USonyGamepadProxy_Statics::ClassParams = {
	&USonyGamepadProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USonyGamepadProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_USonyGamepadProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USonyGamepadProxy()
{
	if (!Z_Registration_Info_UClass_USonyGamepadProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USonyGamepadProxy.OuterSingleton, Z_Construct_UClass_USonyGamepadProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USonyGamepadProxy.OuterSingleton;
}
USonyGamepadProxy::USonyGamepadProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USonyGamepadProxy);
USonyGamepadProxy::~USonyGamepadProxy() {}
// ********** End Class USonyGamepadProxy **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h__Script_WindowsDualsense_ds5w_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USonyGamepadProxy, USonyGamepadProxy::StaticClass, TEXT("USonyGamepadProxy"), &Z_Registration_Info_UClass_USonyGamepadProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USonyGamepadProxy), 3753649289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h__Script_WindowsDualsense_ds5w_1598498523(TEXT("/Script/WindowsDualsense_ds5w"),
	Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_SonyGamepadProxy_h__Script_WindowsDualsense_ds5w_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
