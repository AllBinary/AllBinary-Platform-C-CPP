// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/solaris/SolarisOperatingSystemFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/os/solaris/SolarisOS.h"
#if __has_include("org/allbinary/logic/system/os/SystemProperties.h")
#include "org/allbinary/logic/system/os/SystemProperties.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#endif


static SolarisOperatingSystemFactory* SolarisOperatingSystemFactory_instance;




void SolarisOperatingSystemFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SolarisOperatingSystemFactory_instance = SolarisOperatingSystemFactory_new();
}

void SolarisOperatingSystemFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SolarisOperatingSystemFactory", nullptr);
    java_register_method("SolarisOperatingSystemFactory", "getOperatingSystemInstance", (void*) SolarisOperatingSystemFactory_getOperatingSystemInstance);
}

static void SolarisOperatingSystemFactory_initFields(SolarisOperatingSystemFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


SolarisOperatingSystemFactory* SolarisOperatingSystemFactory_getInstance(void) {
        return (SolarisOperatingSystemFactory_staticInit(), SolarisOperatingSystemFactory_instance);
}


void SolarisOperatingSystemFactory_init(SolarisOperatingSystemFactory* this) {
    SolarisOperatingSystemFactory_register();
    SolarisOperatingSystemFactory_initFields(this);
}

SolarisOperatingSystemFactory* SolarisOperatingSystemFactory_new(void) {
    SolarisOperatingSystemFactory* this = java_object_alloc(sizeof(SolarisOperatingSystemFactory), "SolarisOperatingSystemFactory");
    SolarisOperatingSystemFactory_init(this);
    return this;
}


GenericOperatingSystem* SolarisOperatingSystemFactory_getOperatingSystemInstance(SolarisOperatingSystemFactory* this) {
        JAVA_TRY {
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            const char* osName = SystemProperties_getName(SystemProperties_getInstance());
            GenericOperatingSystem* operatingSystemInterface = nullptr;
            if (strcmp(osName, operatingSystems->SOLARIS) == 0) {
                operatingSystemInterface = SolarisOS_new();
            } else {
                if (OperatingSystems_isUnknownSpecificOSAllowed(operatingSystems)) {
                    operatingSystemInterface = SolarisOS_new();
                } else {
                    java_throw(java_exception_new("Exception", java_concat("Specific Solaris OS Not Supported: ", osName)));
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

