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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#include "org/allbinary/logic/system/hardware/components/ComponentFactory.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct WindowsHardware WindowsHardware;
struct WindowsHardware {
    HardwareInterface HardwareInterface_interface;
    BasicArrayList* componentInterfaceVector;
    BasicArrayList* videoInterfaceVector;
    BasicArrayList* hardDriveControllerInterfaceVector;
    BasicArrayList* cpuInterfaceVector;
    BasicArrayList* usbInterfaceVector;
    BasicArrayList* ethernetInterfaceVector;
    BasicArrayList* multimediaInterfaceVector;
    BasicArrayList* fireWireInterfaceVector;
    BasicArrayList* bridgeInterfaceVector;
    BasicArrayList* hardDriveInterfaceVector;
    BasicArrayList* macInterfaceVector;
    BasicArrayList* monitorInterfaceVector;
    const char* NAME;
    int32_t MINHARDWARE;
    ComponentFactory* componentFactory;
};


WindowsHardware* WindowsHardware_new(void);

void WindowsHardware_init(WindowsHardware* this);
static const char* WindowsHardware_getComponentType(WindowsHardware* this, const char* component);
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

static void WindowsHardware_initFields(WindowsHardware* this) {
    this->componentInterfaceVector = nullptr;
    this->videoInterfaceVector = nullptr;
    this->hardDriveControllerInterfaceVector = nullptr;
    this->cpuInterfaceVector = nullptr;
    this->usbInterfaceVector = nullptr;
    this->ethernetInterfaceVector = nullptr;
    this->multimediaInterfaceVector = nullptr;
    this->fireWireInterfaceVector = nullptr;
    this->bridgeInterfaceVector = nullptr;
    this->hardDriveInterfaceVector = nullptr;
    this->macInterfaceVector = nullptr;
    this->monitorInterfaceVector = nullptr;
    this->NAME = "Windows Hardware Profile";
    this->MINHARDWARE = 0;
    this->componentFactory = ComponentFactory_getInstance();
}


void WindowsHardware_init(WindowsHardware* this) {
    WindowsHardware_initFields(this);
        JAVA_TRY {
            this->componentInterfaceVector = BasicArrayListD_new();
            this->videoInterfaceVector = BasicArrayListD_new();
            this->hardDriveControllerInterfaceVector = BasicArrayListD_new();
            this->cpuInterfaceVector = BasicArrayListD_new();
            this->usbInterfaceVector = BasicArrayListD_new();
            this->ethernetInterfaceVector = BasicArrayListD_new();
            this->multimediaInterfaceVector = BasicArrayListD_new();
            this->fireWireInterfaceVector = BasicArrayListD_new();
            this->bridgeInterfaceVector = BasicArrayListD_new();
            this->hardDriveInterfaceVector = BasicArrayListD_new();
            this->macInterfaceVector = BasicArrayListD_new();
            this->monitorInterfaceVector = BasicArrayListD_new();
            if (BasicArrayList_size(this->componentInterfaceVector) < this->MINHARDWARE) {
                java_throw(java_exception_new("Exception", "Not Enough Data For A Valid License On Windows"));
            }
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

WindowsHardware* WindowsHardware_new(void) {
    WindowsHardware* this = calloc(1, sizeof(WindowsHardware));
    WindowsHardware_init(this);
    return this;
}


static const char* WindowsHardware_getComponentType(WindowsHardware* this, const char* component) {
        if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->ETHERNET, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->ETHERNET, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->BRIDGE, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->BRIDGE, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->IDE, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->IDE, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->MULTIMEDIA, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->MULTIMEDIA, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->SCSI, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->SCSI, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->USB, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->USB, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->VGA, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->VGA, toString);
        } else {
            return nullptr;
        }
}


MediaInterface* WindowsHardware_getMultimedia(WindowsHardware* this, int32_t index) {
        return ((MediaInterface*) BasicArrayList_get(this->multimediaInterfaceVector, index));
}


BridgeInterface* WindowsHardware_getBridge(WindowsHardware* this, int32_t index) {
        return ((BridgeInterface*) BasicArrayList_get(this->bridgeInterfaceVector, index));
}


CpuInterface* WindowsHardware_getCpu(WindowsHardware* this, int32_t index) {
        return ((CpuInterface*) BasicArrayList_get(this->cpuInterfaceVector, index));
}


EthernetInterface* WindowsHardware_getEthernet(WindowsHardware* this, int32_t index) {
        return ((EthernetInterface*) BasicArrayList_get(this->ethernetInterfaceVector, index));
}


FireWireInterface* WindowsHardware_getFireWire(WindowsHardware* this, int32_t index) {
        return ((FireWireInterface*) BasicArrayList_get(this->fireWireInterfaceVector, index));
}


HardDriveControllerInterface* WindowsHardware_getHardDriveController(WindowsHardware* this, int32_t index) {
        return ((HardDriveControllerInterface*) BasicArrayList_get(this->hardDriveControllerInterfaceVector, index));
}


HardDriveInterface* WindowsHardware_getHardDrive(WindowsHardware* this, int32_t index) {
        return ((HardDriveInterface*) BasicArrayList_get(this->hardDriveInterfaceVector, index));
}


MachineAccessControlAddressInterface* WindowsHardware_getMachineAccessControlAddress(WindowsHardware* this, int32_t index) {
        return ((MachineAccessControlAddressInterface*) BasicArrayList_get(this->macInterfaceVector, index));
}


MonitorInterface* WindowsHardware_getMonitor(WindowsHardware* this, int32_t index) {
        return ((MonitorInterface*) BasicArrayList_get(this->monitorInterfaceVector, index));
}


UsbInterface* WindowsHardware_getUsb(WindowsHardware* this, int32_t index) {
        return ((UsbInterface*) BasicArrayList_get(this->usbInterfaceVector, index));
}


VideoInterface* WindowsHardware_getVideo(WindowsHardware* this, int32_t index) {
        return ((VideoInterface*) BasicArrayList_get(this->videoInterfaceVector, index));
}


HardwareComponentInterface* WindowsHardware_getComponent(WindowsHardware* this, int32_t index) {
        return ((HardwareComponentInterface*) BasicArrayList_get(this->componentInterfaceVector, index));
}


const char* WindowsHardware_toString(WindowsHardware* this) {
        StringMaker* hardwareBuffer = StringMaker_new();
        int32_t size = BasicArrayList_size(this->componentInterfaceVector);
        for (int32_t index = 0; index < size; index++) {
            HardwareComponentInterface* componentInterface = ((HardwareComponentInterface*) BasicArrayList_get(this->componentInterfaceVector, index));
            StringMaker_append(hardwareBuffer, HardwareComponentInterface_toString(componentInterface));
            StringMaker_append(hardwareBuffer, CommonSeps_getInstance()->NEW_LINE);
        }
        return StringMaker_toString(hardwareBuffer);
}


bool WindowsHardware_compareTo(WindowsHardware* this, HardwareInterface* hardwareInterface) {
        return true;
}


ABHashtable* WindowsHardware_difference(WindowsHardware* this, HardwareInterface* hardwareInterface) {
        return StdUtil_getInstance()->NULL_TABLE;
}

