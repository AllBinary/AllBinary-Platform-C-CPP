// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/communication/log/Log.h"
#include "org/allbinary/logic/communication/log/LogFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/os/linux/LinuxOperatingSystemFactory.h"
#include "org/allbinary/logic/system/os/solaris/SolarisOperatingSystemFactory.h"
#include "org/allbinary/logic/system/os/windows/WindowsOperatingSystemFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"


static OperatingSystemFactory* OperatingSystemFactory_instance;




void OperatingSystemFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OperatingSystemFactory_instance = OperatingSystemFactory_new();
}

void OperatingSystemFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OperatingSystemFactory", nullptr);
    java_register_method("OperatingSystemFactory", "getOperatingSystemInstance", (void*) OperatingSystemFactory_getOperatingSystemInstance);
}

static void OperatingSystemFactory_initFields(OperatingSystemFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->genericOperatingSystem = (NoOperatingSystem_staticInit(), NoOperatingSystem_NO_OPERATING_SYSTEM);
    this->hasDetected = false;
}


OperatingSystemFactory* OperatingSystemFactory_getInstance(void) {
        return (OperatingSystemFactory_staticInit(), OperatingSystemFactory_instance);
}


void OperatingSystemFactory_init(OperatingSystemFactory* this) {
    OperatingSystemFactory_register();
    OperatingSystemFactory_initFields(this);
}

OperatingSystemFactory* OperatingSystemFactory_new(void) {
    OperatingSystemFactory* this = java_object_alloc(sizeof(OperatingSystemFactory), "OperatingSystemFactory");
    OperatingSystemFactory_init(this);
    return this;
}


// synchronized
GenericOperatingSystem* OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory* this) {
        JAVA_TRY {
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            SystemProperties* systemProperties = SystemProperties_getInstance();
            const char* osName = SystemProperties_getName(systemProperties);
            const char* osArch = SystemProperties_getArch(systemProperties);
            const char* osVersion = SystemProperties_getVersion(systemProperties);
            if (!this->hasDetected) {
                LogUtil_putF(this->logUtil, java_concat("osName: ", osName), this, this->commonStrings->GET_INSTANCE);
                this->hasDetected = true;
                if (java_string_indexOf(osName, operatingSystems->LINUX) >= 0) {
                    if (JAVA_CALL((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), contains, LogConfigTypeFactory_getInstance()->FACTORYERROR)) {
                        LogUtil_putF(this->logUtil, "Found a Linux OS", this, this->commonStrings->GET_INSTANCE);
                    }
                    this->genericOperatingSystem = LinuxOperatingSystemFactory_getOperatingSystemInstance(LinuxOperatingSystemFactory_getInstance());
                } else if (java_string_indexOf(osName, operatingSystems->WINDOWS) >= 0) {
                    if (JAVA_CALL((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), contains, LogConfigTypeFactory_getInstance()->FACTORYERROR)) {
                        LogUtil_putF(this->logUtil, "Found a Windows OS", this, this->commonStrings->GET_INSTANCE);
                    }
                    this->genericOperatingSystem = WindowsOperatingSystemFactory_getOperatingSystemInstance(WindowsOperatingSystemFactory_getInstance());
                } else if (java_string_indexOf(osName, operatingSystems->SOLARIS) >= 0) {
                    if (JAVA_CALL((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), contains, LogConfigTypeFactory_getInstance()->FACTORYERROR)) {
                        LogUtil_putF(this->logUtil, "Found a Solaris OS", this, this->commonStrings->GET_INSTANCE);
                    }
                    this->genericOperatingSystem = SolarisOperatingSystemFactory_getOperatingSystemInstance(SolarisOperatingSystemFactory_getInstance());
                } else {
                    java_throw(java_exception_new("Exception", java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "OS Not Supported: "), osName))));
                }
                Log* log = LogFactory_getInstanceF(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "OperatingSystem Info: "), StringUtil_toString(StringUtil_getInstance(), this->genericOperatingSystem))), this, this->commonStrings->GET_INSTANCE);
                puts(java_string_of(java_string_of(log)));
                LogUtil_putL(this->logUtil, log);
            }
            return this->genericOperatingSystem;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), contains, LogConfigTypeFactory_getInstance()->FACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return (NoOperatingSystem_staticInit(), NoOperatingSystem_NO_OPERATING_SYSTEM);
        } JAVA_END_TRY;
}

