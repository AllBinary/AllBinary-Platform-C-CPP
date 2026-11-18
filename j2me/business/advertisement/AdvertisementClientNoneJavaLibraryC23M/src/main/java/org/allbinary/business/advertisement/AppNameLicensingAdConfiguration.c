// Generated Code Do Not Modify
#include "org/allbinary/business/advertisement/AppNameLicensingAdConfiguration.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/business/advertisement/AdConfiguration.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif




void AppNameLicensingAdConfiguration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AppNameLicensingAdConfiguration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AppNameLicensingAdConfiguration", "AdConfiguration");
}


void AppNameLicensingAdConfiguration_init(AppNameLicensingAdConfiguration* this) {
    AppNameLicensingAdConfiguration_register();
        AdConfiguration_init(&this->base, ((void**) java_array_from(sizeof(void*), sizeof((void*[]){ StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING }) / sizeof(void*), (void*[]){ StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING })));
}

AppNameLicensingAdConfiguration* AppNameLicensingAdConfiguration_new(void) {
    AppNameLicensingAdConfiguration* this = java_object_alloc(sizeof(AppNameLicensingAdConfiguration), "AppNameLicensingAdConfiguration");
    AppNameLicensingAdConfiguration_init(this);
    return this;
}

