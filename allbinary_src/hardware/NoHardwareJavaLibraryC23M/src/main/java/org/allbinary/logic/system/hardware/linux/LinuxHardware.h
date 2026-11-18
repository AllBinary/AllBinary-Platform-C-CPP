#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_H
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
// package org.allbinary.logic.system.hardware.linux

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

typedef struct LinuxHardware LinuxHardware;
struct LinuxHardware {
    HardwareInterface HardwareInterface_interface;
};


LinuxHardware* LinuxHardware_new(void);

void LinuxHardware_init(LinuxHardware* this);

MediaInterface* LinuxHardware_getMultimedia(LinuxHardware* this, int32_t index);

BridgeInterface* LinuxHardware_getBridge(LinuxHardware* this, int32_t index);

CpuInterface* LinuxHardware_getCpu(LinuxHardware* this, int32_t index);

EthernetInterface* LinuxHardware_getEthernet(LinuxHardware* this, int32_t index);

FireWireInterface* LinuxHardware_getFireWire(LinuxHardware* this, int32_t index);

HardDriveControllerInterface* LinuxHardware_getHardDriveController(LinuxHardware* this, int32_t index);

HardDriveInterface* LinuxHardware_getHardDrive(LinuxHardware* this, int32_t index);

MachineAccessControlAddressInterface* LinuxHardware_getMachineAccessControlAddress(LinuxHardware* this, int32_t index);

MonitorInterface* LinuxHardware_getMonitor(LinuxHardware* this, int32_t index);

UsbInterface* LinuxHardware_getUsb(LinuxHardware* this, int32_t index);

VideoInterface* LinuxHardware_getVideo(LinuxHardware* this, int32_t index);

HardwareComponentInterface* LinuxHardware_getComponent(LinuxHardware* this, int32_t index);

const char* LinuxHardware_toString(LinuxHardware* this);

bool LinuxHardware_compareTo(LinuxHardware* this, HardwareInterface* hardwareInterface);

ABHashtable* LinuxHardware_difference(LinuxHardware* this, HardwareInterface* hardwareInterface);

bool LinuxHardware_isNextHardware(LinuxHardware* this, const char* nextLine);
#define LinuxHardware_new0 LinuxHardware_new
#define LinuxHardware_init0 LinuxHardware_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LinuxHardware_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LinuxHardware_register(void);

#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h")
#include "org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_H
