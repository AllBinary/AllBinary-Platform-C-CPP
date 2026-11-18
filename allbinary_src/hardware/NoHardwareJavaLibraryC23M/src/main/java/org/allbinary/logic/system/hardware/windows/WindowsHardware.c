// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/windows/WindowsHardware.h"
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



















void WindowsHardware_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void WindowsHardware_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WindowsHardware", nullptr);
    java_register_method("WindowsHardware", "getMultimedia", (void*) WindowsHardware_getMultimedia);
    java_register_method("WindowsHardware", "getBridge", (void*) WindowsHardware_getBridge);
    java_register_method("WindowsHardware", "getCpu", (void*) WindowsHardware_getCpu);
    java_register_method("WindowsHardware", "getEthernet", (void*) WindowsHardware_getEthernet);
    java_register_method("WindowsHardware", "getFireWire", (void*) WindowsHardware_getFireWire);
    java_register_method("WindowsHardware", "getHardDriveController", (void*) WindowsHardware_getHardDriveController);
    java_register_method("WindowsHardware", "getHardDrive", (void*) WindowsHardware_getHardDrive);
    java_register_method("WindowsHardware", "getMachineAccessControlAddress", (void*) WindowsHardware_getMachineAccessControlAddress);
    java_register_method("WindowsHardware", "getMonitor", (void*) WindowsHardware_getMonitor);
    java_register_method("WindowsHardware", "getUsb", (void*) WindowsHardware_getUsb);
    java_register_method("WindowsHardware", "getVideo", (void*) WindowsHardware_getVideo);
    java_register_method("WindowsHardware", "getComponent", (void*) WindowsHardware_getComponent);
    java_register_method("WindowsHardware", "toString", (void*) WindowsHardware_toString);
    java_register_method("WindowsHardware", "compareTo", (void*) WindowsHardware_compareTo);
    java_register_method("WindowsHardware", "difference", (void*) WindowsHardware_difference);
}


void WindowsHardware_init(WindowsHardware* this) {
    WindowsHardware_register();
}

WindowsHardware* WindowsHardware_new(void) {
    WindowsHardware* this = java_object_alloc(sizeof(WindowsHardware), "WindowsHardware");
    WindowsHardware_init(this);
    return this;
}


MediaInterface* WindowsHardware_getMultimedia(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BridgeInterface* WindowsHardware_getBridge(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


CpuInterface* WindowsHardware_getCpu(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


EthernetInterface* WindowsHardware_getEthernet(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


FireWireInterface* WindowsHardware_getFireWire(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HardDriveControllerInterface* WindowsHardware_getHardDriveController(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HardDriveInterface* WindowsHardware_getHardDrive(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


MachineAccessControlAddressInterface* WindowsHardware_getMachineAccessControlAddress(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


MonitorInterface* WindowsHardware_getMonitor(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


UsbInterface* WindowsHardware_getUsb(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


VideoInterface* WindowsHardware_getVideo(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


HardwareComponentInterface* WindowsHardware_getComponent(WindowsHardware* this, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* WindowsHardware_toString(WindowsHardware* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool WindowsHardware_compareTo(WindowsHardware* this, HardwareInterface* hardwareInterface) {
        return true;
}


ABHashtable* WindowsHardware_difference(WindowsHardware* this, HardwareInterface* hardwareInterface) {
        return StdUtil_getInstance()->NULL_TABLE;
}

