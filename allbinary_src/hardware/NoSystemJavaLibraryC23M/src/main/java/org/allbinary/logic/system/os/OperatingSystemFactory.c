// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


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
    this->genericOperatingSystem = (NoOperatingSystem_staticInit(), NoOperatingSystem_NO_OPERATING_SYSTEM);
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
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            const char* osString = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "OperatingSystem Info: "), java_string_of(this->genericOperatingSystem)));
            puts(java_string_of(osString));
            LogUtil_putF(this->logUtil, osString, this, commonStrings->GET_INSTANCE);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
        return this->genericOperatingSystem;
}

