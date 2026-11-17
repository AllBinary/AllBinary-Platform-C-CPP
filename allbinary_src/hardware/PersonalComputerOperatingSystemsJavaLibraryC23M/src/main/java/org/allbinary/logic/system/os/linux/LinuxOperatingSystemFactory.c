// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/linux/LinuxOperatingSystemFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/os/linux/LinuxOS.h"


static LinuxOperatingSystemFactory* LinuxOperatingSystemFactory_instance;




void LinuxOperatingSystemFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LinuxOperatingSystemFactory_instance = LinuxOperatingSystemFactory_new();
}

void LinuxOperatingSystemFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LinuxOperatingSystemFactory", nullptr);
    java_register_method("LinuxOperatingSystemFactory", "getOperatingSystemInstance", (void*) LinuxOperatingSystemFactory_getOperatingSystemInstance);
}

static void LinuxOperatingSystemFactory_initFields(LinuxOperatingSystemFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


LinuxOperatingSystemFactory* LinuxOperatingSystemFactory_getInstance(void) {
        return (LinuxOperatingSystemFactory_staticInit(), LinuxOperatingSystemFactory_instance);
}


void LinuxOperatingSystemFactory_init(LinuxOperatingSystemFactory* this) {
    LinuxOperatingSystemFactory_register();
    LinuxOperatingSystemFactory_initFields(this);
}

LinuxOperatingSystemFactory* LinuxOperatingSystemFactory_new(void) {
    LinuxOperatingSystemFactory* this = java_object_alloc(sizeof(LinuxOperatingSystemFactory), "LinuxOperatingSystemFactory");
    LinuxOperatingSystemFactory_init(this);
    return this;
}


GenericOperatingSystem* LinuxOperatingSystemFactory_getOperatingSystemInstance(LinuxOperatingSystemFactory* this) {
        JAVA_TRY {
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            const char* osName = SystemProperties_getName(SystemProperties_getInstance());
            GenericOperatingSystem* operatingSystemInterface = nullptr;
            if (strcmp(osName, operatingSystems->LINUX) == 0) {
                operatingSystemInterface = LinuxOS_new();
            } else {
                if (OperatingSystems_isUnknownSpecificOSAllowed(operatingSystems)) {
                    operatingSystemInterface = LinuxOS_new();
                } else {
                    java_throw(java_exception_new("Exception", java_concat("Specific Linux OS Not Supported: ", osName)));
                }
            }
            return operatingSystemInterface;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), contains, LogConfigTypeFactory_getInstance()->FACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return (NoOperatingSystem_staticInit(), NoOperatingSystem_NO_OPERATING_SYSTEM);
        } JAVA_END_TRY;
}

