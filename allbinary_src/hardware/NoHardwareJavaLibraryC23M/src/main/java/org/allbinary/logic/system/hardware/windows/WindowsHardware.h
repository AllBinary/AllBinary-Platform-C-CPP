#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.system.hardware.windows

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StdUtil StdUtil;
typedef struct StringUtil StringUtil;
typedef struct HardwareInterface HardwareInterface;
typedef struct BridgeInterface BridgeInterface;
typedef struct CpuInterface CpuInterface;
typedef struct EthernetInterface EthernetInterface;
typedef struct FireWireInterface FireWireInterface;
typedef struct HardDriveControllerInterface HardDriveControllerInterface;
typedef struct HardDriveInterface HardDriveInterface;
typedef struct HardwareComponentInterface HardwareComponentInterface;
typedef struct MachineAccessControlAddressInterface MachineAccessControlAddressInterface;
typedef struct MediaInterface MediaInterface;
typedef struct MonitorInterface MonitorInterface;
typedef struct UsbInterface UsbInterface;
typedef struct VideoInterface VideoInterface;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"

typedef struct WindowsHardware WindowsHardware;
struct WindowsHardware {
    HardwareInterface HardwareInterface_interface;
};


WindowsHardware* WindowsHardware_new(void);

void WindowsHardware_init(WindowsHardware* this);

MediaInterface* WindowsHardware_getMultimedia(WindowsHardware* this, int32_t index);

BridgeInterface* WindowsHardware_getBridge(WindowsHardware* this, int32_t index);

CpuInterface* WindowsHardware_getCpu(WindowsHardware* this, int32_t index);

EthernetInterface* WindowsHardware_getEthernet(WindowsHardware* this, int32_t index);

FireWireInterface* WindowsHardware_getFireWire(WindowsHardware* this, int32_t index);

HardDriveControllerInterface* WindowsHardware_getHardDriveController(WindowsHardware* this, int32_t index);

HardDriveInterface* WindowsHardware_getHardDrive(WindowsHardware* this, int32_t index);

MachineAccessControlAddressInterface* WindowsHardware_getMachineAccessControlAddress(WindowsHardware* this, int32_t index);

MonitorInterface* WindowsHardware_getMonitor(WindowsHardware* this, int32_t index);

UsbInterface* WindowsHardware_getUsb(WindowsHardware* this, int32_t index);

VideoInterface* WindowsHardware_getVideo(WindowsHardware* this, int32_t index);

HardwareComponentInterface* WindowsHardware_getComponent(WindowsHardware* this, int32_t index);

const char* WindowsHardware_toString(WindowsHardware* this);

bool WindowsHardware_compareTo(WindowsHardware* this, HardwareInterface* hardwareInterface);

ABHashtable* WindowsHardware_difference(WindowsHardware* this, HardwareInterface* hardwareInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WindowsHardware_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WindowsHardware_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H
