// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/SystemHardwareFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/hardware/NoHardware.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#include "org/allbinary/logic/system/hardware/HardwareFactory.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static SystemHardwareFactory* SystemHardwareFactory_instance;





void SystemHardwareFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SystemHardwareFactory_instance = SystemHardwareFactory_new();
}

void SystemHardwareFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SystemHardwareFactory", nullptr);
    java_register_method("SystemHardwareFactory", "getInstance@2", (void*) SystemHardwareFactory_getInstance2);
}

static void SystemHardwareFactory_initFields(SystemHardwareFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->hardwareInterface = NoHardware_getInstance();
}


SystemHardwareFactory* SystemHardwareFactory_getInstance0(void) {
        return (SystemHardwareFactory_staticInit(), SystemHardwareFactory_instance);
}


void SystemHardwareFactory_init(SystemHardwareFactory* this) {
    SystemHardwareFactory_register();
    SystemHardwareFactory_initFields(this);
}

SystemHardwareFactory* SystemHardwareFactory_new(void) {
    SystemHardwareFactory* this = java_object_alloc(sizeof(SystemHardwareFactory), "SystemHardwareFactory");
    SystemHardwareFactory_init(this);
    return this;
}


// Java overloaded method: C needs a different name
HardwareInterface* SystemHardwareFactory_getInstance2(SystemHardwareFactory* this, GenericOperatingSystem* operatingSystemInterface) {
        JAVA_TRY {
            if (this->hardwareInterface == NoHardware_getInstance()) {
                this->hardwareInterface = HardwareFactory_getInstance(HardwareFactory_getInstance(), operatingSystemInterface);
            }
            LogUtil_putF(this->logUtil, "Found Hardware", this, this->commonStrings->CONSTRUCTOR);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
        return this->hardwareInterface;
}


const char* SystemHardwareFactory_static_toString(void) {
        SystemHardwareFactory* systemHardwareFactory = SystemHardwareFactory_getInstance();
        StringMaker* osBuffer = StringMaker_new();
        StringMaker_append(osBuffer, "Hardware Info: \n");
        if (systemHardwareFactory->hardwareInterface != nullptr) {
            StringMaker_append(osBuffer, java_string_of(systemHardwareFactory->hardwareInterface));
        } else {
            StringMaker_append(osBuffer, StringUtil_getInstance()->NULL_STRING);
        }
        return java_string_of(osBuffer);
}

