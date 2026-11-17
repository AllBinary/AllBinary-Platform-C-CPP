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
// #include "java/io/FileReader.h"
// #include "java/io/LineNumberReader.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/io/file/directory/SubDirectory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
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
#include "org/allbinary/logic/system/hardware/components/linux/Cpu.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct LinuxHardware LinuxHardware;
struct LinuxHardware {
    HardwareInterface HardwareInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
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
};

static const char* LinuxHardware_PCIFILE = "/proc/pci";

LinuxHardware* LinuxHardware_new(const char* path);

void LinuxHardware_init(LinuxHardware* this, const char* path);

LinuxHardware* LinuxHardware_new0();
void LinuxHardware_init0(LinuxHardware* this);
static void LinuxHardware_init(LinuxHardware* this, const char* filePath);
static void LinuxHardware_init(LinuxHardware* this, LineNumberReader* lineNumberReader, const char* filePath);
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

static void LinuxHardware_initFields(LinuxHardware* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
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
    this->NAME = "Linux Hardware Profile";
    this->MINHARDWARE = 5;
}


void LinuxHardware_init(LinuxHardware* this, const char* path) {
    LinuxHardware_initFields(this);
        LinuxHardware_init(this, path);
}

LinuxHardware* LinuxHardware_new(const char* path) {
    LinuxHardware* this = calloc(1, sizeof(LinuxHardware));
    LinuxHardware_init(this, path);
    return this;
}


void LinuxHardware_init0(LinuxHardware* this) {
    LinuxHardware_initFields(this);
        LinuxHardware_init(this, LinuxHardware_PCIFILE);
        if (BasicArrayList_size(this->componentInterfaceVector) < this->MINHARDWARE) {
            java_throw(java_exception_new("Exception", "Not Enough Data For A Valid License On Linux"));
        }
        Cpu* cpu = Cpu_new();
        if (cpu != nullptr) {
            BasicArrayList_add(this->cpuInterfaceVector, cpu);
            BasicArrayList_add(this->componentInterfaceVector, cpu);
        }
        if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->OS)) {
            LogUtil_putF(this->logUtil, java_concat("Hardware Data: ", LinuxHardware_toString(this)), this, this->commonStrings->CONSTRUCTOR);
        }
}

LinuxHardware* LinuxHardware_new0(void) {
    LinuxHardware* this = calloc(1, sizeof(LinuxHardware));
    LinuxHardware_init0(this);
    return this;
}


// throws Exception
static void LinuxHardware_init(LinuxHardware* this, const char* filePath) {
        LineNumberReader* lineNumberReader = nullptr;
        JAVA_TRY {
            LinuxHardware_init(this, lineNumberReader, filePath);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->OS)) {
                LogUtil_put(this->logUtil, java_concat("Hardware Data: ", LinuxHardware_toString(this)), this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
static void LinuxHardware_init(LinuxHardware* this, LineNumberReader* lineNumberReader, const char* filePath) {
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
            FileReader* pciFile = FileReader_new(filePath);
            lineNumberReader = LineNumberReader_new(pciFile);
            if (lineNumberReader == nullptr) {
                BasicArrayList* fileVector = SubDirectory_search(SubDirectory_getInstance(), filePath, AbFile_createAbFile(FilePathData_getInstance()->PATH_START));
                if (!BasicArrayList_isEmpty(fileVector)) {
                    AbFile* file = ((AbFile*) BasicArrayList_get(fileVector, 0));
                    lineNumberReader = LineNumberReader_new(FileReader_new(AbFile_getPath(file)));
                }
                if (lineNumberReader == nullptr) {
                    java_throw(java_exception_new("Exception", "No Linux File Data"));
                }
            }
            if (lineNumberReader != nullptr) {
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->OS)) {
                    LogUtil_putF(this->logUtil, "PCI File Found", this, this->commonStrings->CONSTRUCTOR);
                }
                const char* nextLine = LineNumberReader_readLine(lineNumberReader);
                while (nextLine != nullptr) {
                    if (LinuxHardware_isNextHardware(this, nextLine)) {
                        break;
                    }
                    nextLine = LineNumberReader_readLine(lineNumberReader);
                }
                while (LinuxHardware_isNextHardware(this, nextLine)) {
                    StringMaker* componentData = StringMaker_new();
                    if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->OS)) {
                        LogUtil_putF(this->logUtil, java_concat("Found Hardware Device: ", java_string_of(BasicArrayList_size(this->componentInterfaceVector))), this, this->commonStrings->CONSTRUCTOR);
                    }
                    StringMaker_append(componentData, nextLine);
                    StringMaker_append(componentData, CommonSeps_getInstance()->NEW_LINE);
                    nextLine = LineNumberReader_readLine(lineNumberReader);
                    const char* componentType = PCComponentFactory_getComponentType(PCComponentFactory_getInstance(), nextLine);
                    while (true) {
                        StringMaker_append(componentData, nextLine);
                        StringMaker_append(componentData, CommonSeps_getInstance()->NEW_LINE);
                        nextLine = LineNumberReader_readLine(lineNumberReader);
                        if (nextLine == nullptr || LinuxHardware_isNextHardware(this, nextLine)) {
                            break;
                        }
                    }
                    HardwareComponentInterface* componentInterface = PCComponentFactory_getInstance(PCComponentFactory_getInstance(), componentType, StringMaker_toString(componentData));
                    if (componentInterface != nullptr) {
                        BasicArrayList_add(this->componentInterfaceVector, componentInterface);
                    }
                }
            } else {
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->OS)) {
                    LogUtil_putF(this->logUtil, "Could not load PCI File", this, this->commonStrings->CONSTRUCTOR);
                }
            }
            LineNumberReader_close(lineNumberReader);
        } JAVA_FINALLY {
            if (lineNumberReader != nullptr) {
                LineNumberReader_close(lineNumberReader);
            }
        } JAVA_END_TRY;
}


MediaInterface* LinuxHardware_getMultimedia(LinuxHardware* this, int32_t index) {
        return ((MediaInterface*) BasicArrayList_get(this->multimediaInterfaceVector, index));
}


BridgeInterface* LinuxHardware_getBridge(LinuxHardware* this, int32_t index) {
        return ((BridgeInterface*) BasicArrayList_get(this->bridgeInterfaceVector, index));
}


CpuInterface* LinuxHardware_getCpu(LinuxHardware* this, int32_t index) {
        return ((CpuInterface*) BasicArrayList_get(this->cpuInterfaceVector, index));
}


EthernetInterface* LinuxHardware_getEthernet(LinuxHardware* this, int32_t index) {
        return ((EthernetInterface*) BasicArrayList_get(this->ethernetInterfaceVector, index));
}


FireWireInterface* LinuxHardware_getFireWire(LinuxHardware* this, int32_t index) {
        return ((FireWireInterface*) BasicArrayList_get(this->fireWireInterfaceVector, index));
}


HardDriveControllerInterface* LinuxHardware_getHardDriveController(LinuxHardware* this, int32_t index) {
        return ((HardDriveControllerInterface*) BasicArrayList_get(this->hardDriveControllerInterfaceVector, index));
}


HardDriveInterface* LinuxHardware_getHardDrive(LinuxHardware* this, int32_t index) {
        return ((HardDriveInterface*) BasicArrayList_get(this->hardDriveInterfaceVector, index));
}


MachineAccessControlAddressInterface* LinuxHardware_getMachineAccessControlAddress(LinuxHardware* this, int32_t index) {
        return ((MachineAccessControlAddressInterface*) BasicArrayList_get(this->macInterfaceVector, index));
}


MonitorInterface* LinuxHardware_getMonitor(LinuxHardware* this, int32_t index) {
        return ((MonitorInterface*) BasicArrayList_get(this->monitorInterfaceVector, index));
}


UsbInterface* LinuxHardware_getUsb(LinuxHardware* this, int32_t index) {
        return ((UsbInterface*) BasicArrayList_get(this->usbInterfaceVector, index));
}


VideoInterface* LinuxHardware_getVideo(LinuxHardware* this, int32_t index) {
        return ((VideoInterface*) BasicArrayList_get(this->videoInterfaceVector, index));
}


HardwareComponentInterface* LinuxHardware_getComponent(LinuxHardware* this, int32_t index) {
        return ((HardwareComponentInterface*) BasicArrayList_get(this->componentInterfaceVector, index));
}


const char* LinuxHardware_toString(LinuxHardware* this) {
        StringMaker* hardwareBuffer = StringMaker_new();
        int32_t size = BasicArrayList_size(this->componentInterfaceVector);
        for (int32_t index = 0; index < size; index++) {
            HardwareComponentInterface* componentInterface = ((HardwareComponentInterface*) BasicArrayList_get(this->componentInterfaceVector, index));
            StringMaker_append(hardwareBuffer, "Component ");
            StringMaker_appendint(hardwareBuffer, index);
            StringMaker_append(hardwareBuffer, ": \n");
            StringMaker_append(hardwareBuffer, HardwareComponentInterface_toString(componentInterface));
            StringMaker_append(hardwareBuffer, CommonSeps_getInstance()->NEW_LINE);
        }
        return StringMaker_toString(hardwareBuffer);
}


bool LinuxHardware_compareTo(LinuxHardware* this, HardwareInterface* hardwareInterface) {
        return true;
}


ABHashtable* LinuxHardware_difference(LinuxHardware* this, HardwareInterface* hardwareInterface) {
        return StdUtil_getInstance()->NULL_TABLE;
}


bool LinuxHardware_isNextHardware(LinuxHardware* this, const char* nextLine) {
        if (nextLine != nullptr) {
            int32_t index = java_string_indexOf(nextLine, "Bus");
            if (index >= 0 && index < 4) {
                return true;
            }
        }
        return false;
}

