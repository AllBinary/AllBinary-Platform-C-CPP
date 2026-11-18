// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/linux/LinuxHardware.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
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
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif




















void LinuxHardware_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LinuxHardware_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LinuxHardware", nullptr);
    java_register_method("LinuxHardware", "getMultimedia", (void*) LinuxHardware_getMultimedia);
    java_register_method("LinuxHardware", "getBridge", (void*) LinuxHardware_getBridge);
    java_register_method("LinuxHardware", "getCpu", (void*) LinuxHardware_getCpu);
    java_register_method("LinuxHardware", "getEthernet", (void*) LinuxHardware_getEthernet);
    java_register_method("LinuxHardware", "getFireWire", (void*) LinuxHardware_getFireWire);
    java_register_method("LinuxHardware", "getHardDriveController", (void*) LinuxHardware_getHardDriveController);
    java_register_method("LinuxHardware", "getHardDrive", (void*) LinuxHardware_getHardDrive);
    java_register_method("LinuxHardware", "getMachineAccessControlAddress", (void*) LinuxHardware_getMachineAccessControlAddress);
    java_register_method("LinuxHardware", "getMonitor", (void*) LinuxHardware_getMonitor);
    java_register_method("LinuxHardware", "getUsb", (void*) LinuxHardware_getUsb);
    java_register_method("LinuxHardware", "getVideo", (void*) LinuxHardware_getVideo);
    java_register_method("LinuxHardware", "getComponent", (void*) LinuxHardware_getComponent);
    java_register_method("LinuxHardware", "toString", (void*) LinuxHardware_toString);
    java_register_method("LinuxHardware", "compareTo", (void*) LinuxHardware_compareTo);
    java_register_method("LinuxHardware", "difference", (void*) LinuxHardware_difference);
    java_register_method("LinuxHardware", "isNextHardware", (void*) LinuxHardware_isNextHardware);
}


void LinuxHardware_init(LinuxHardware* this) {
    LinuxHardware_register();
}

LinuxHardware* LinuxHardware_new(void) {
    LinuxHardware* this = java_object_alloc(sizeof(LinuxHardware), "LinuxHardware");
    LinuxHardware_init(this);
    return this;
}


MediaInterface* LinuxHardware_getMultimedia(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BridgeInterface* LinuxHardware_getBridge(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


CpuInterface* LinuxHardware_getCpu(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


EthernetInterface* LinuxHardware_getEthernet(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


FireWireInterface* LinuxHardware_getFireWire(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HardDriveControllerInterface* LinuxHardware_getHardDriveController(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HardDriveInterface* LinuxHardware_getHardDrive(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


MachineAccessControlAddressInterface* LinuxHardware_getMachineAccessControlAddress(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


MonitorInterface* LinuxHardware_getMonitor(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


UsbInterface* LinuxHardware_getUsb(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


VideoInterface* LinuxHardware_getVideo(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HardwareComponentInterface* LinuxHardware_getComponent(LinuxHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* LinuxHardware_toString(LinuxHardware* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool LinuxHardware_compareTo(LinuxHardware* this, HardwareInterface* hardwareInterface) {
        return true;
}


ABHashtable* LinuxHardware_difference(LinuxHardware* this, HardwareInterface* hardwareInterface) {
        return StdUtil_getInstance()->NULL_TABLE;
}


bool LinuxHardware_isNextHardware(LinuxHardware* this, const char* nextLine) {
        return false;
}

