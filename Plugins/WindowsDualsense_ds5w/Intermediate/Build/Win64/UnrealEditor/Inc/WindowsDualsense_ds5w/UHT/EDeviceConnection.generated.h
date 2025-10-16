// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Enums/EDeviceConnection.h"

#ifdef WINDOWSDUALSENSE_DS5W_EDeviceConnection_generated_h
#error "EDeviceConnection.generated.h already included, missing '#pragma once' in EDeviceConnection.h"
#endif
#define WINDOWSDUALSENSE_DS5W_EDeviceConnection_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaSample_New_Plugins_WindowsDualsense_ds5w_Source_WindowsDualsense_ds5w_Public_Core_Enums_EDeviceConnection_h

// ********** Begin Enum EDeviceType ***************************************************************
#define FOREACH_ENUM_EDEVICETYPE(op) \
	op(DualSense) \
	op(DualSenseEdge) \
	op(DualShock4) \
	op(NotFound) 

enum EDeviceType : uint8;
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDeviceType>();
// ********** End Enum EDeviceType *****************************************************************

// ********** Begin Enum EDeviceConnection *********************************************************
#define FOREACH_ENUM_EDEVICECONNECTION(op) \
	op(Usb) \
	op(Bluetooth) \
	op(Unrecognized) 

enum EDeviceConnection : uint8;
template<> WINDOWSDUALSENSE_DS5W_API UEnum* StaticEnum<EDeviceConnection>();
// ********** End Enum EDeviceConnection ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
