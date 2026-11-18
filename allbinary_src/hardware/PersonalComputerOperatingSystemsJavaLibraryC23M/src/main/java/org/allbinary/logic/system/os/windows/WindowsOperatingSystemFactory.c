// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/windows/WindowsOperatingSystemFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/os/windows/WindowsOS.h"
#if __has_include("org/allbinary/logic/system/os/SystemProperties.h")
#include "org/allbinary/logic/system/os/SystemProperties.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#endif


static WindowsOperatingSystemFactory* WindowsOperatingSystemFactory_instance;




void WindowsOperatingSystemFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    WindowsOperatingSystemFactory_instance = WindowsOperatingSystemFactory_new();
}

void WindowsOperatingSystemFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WindowsOperatingSystemFactory", nullptr);
    java_register_method("WindowsOperatingSystemFactory", "getOperatingSystemInstance", (void*) WindowsOperatingSystemFactory_getOperatingSystemInstance);
}

static void WindowsOperatingSystemFactory_initFields(WindowsOperatingSystemFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


WindowsOperatingSystemFactory* WindowsOperatingSystemFactory_getInstance(void) {
        return (WindowsOperatingSystemFactory_staticInit(), WindowsOperatingSystemFactory_instance);
}


void WindowsOperatingSystemFactory_init(WindowsOperatingSystemFactory* this) {
    WindowsOperatingSystemFactory_register();
    WindowsOperatingSystemFactory_initFields(this);
}

WindowsOperatingSystemFactory* WindowsOperatingSystemFactory_new(void) {
    WindowsOperatingSystemFactory* this = java_object_alloc(sizeof(WindowsOperatingSystemFactory), "WindowsOperatingSystemFactory");
    WindowsOperatingSystemFactory_init(this);
    return this;
}


GenericOperatingSystem* WindowsOperatingSystemFactory_getOperatingSystemInstance(WindowsOperatingSystemFactory* this) {
        JAVA_TRY {
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            const char* osName = SystemProperties_getName(SystemProperties_getInstance());
            GenericOperatingSystem* operatingSystemInterface = nullptr;
            if (strcmp(osName, operatingSystems->WINDOWS_NT) == 0) {
                operatingSystemInterface = WindowsOS_new();
            } else if (strcmp(osName, operatingSystems->WINDOWS_10) == 0) {
                operatingSystemInterface = WindowsOS_new();
            } else if (strcmp(osName, operatingSystems->WINDOWS_11) == 0) {
                operatingSystemInterface = WindowsOS_new();
            } else if (strcmp(osName, operatingSystems->WINDOWS2000) == 0) {
                operatingSystemInterface = WindowsOS_new();
            } else if (strcmp(osName, operatingSystems->WINDOWS_XP) == 0) {
                operatingSystemInterface = WindowsOS_new();
            } else if (strcmp(osName, operatingSystems->WINDOWS_VISTA) == 0) {
                operatingSystemInterface = WindowsOS_new();
            } else {
                if (OperatingSystems_isUnknownSpecificOSAllowed(operatingSystems)) {
                    operatingSystemInterface = WindowsOS_new();
                } else {
                    java_throw(java_exception_new("Exception", java_concat("Specific Windows OS Not Supported: ", osName)));
                }
            }
            return operatingSystemInterface;
        } JAVA_CATCH(Exception, e) {
            if (BasicArrayList_contains((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), LogConfigTypeFactory_getInstance()->FACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return (NoOperatingSystem_staticInit(), NoOperatingSystem_NO_OPERATING_SYSTEM);
        } JAVA_END_TRY;
}

