// Generated Code Do Not Modify
#include "org/allbinary/globals/Globals.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#if __has_include("org/allbinary/globals/URLGLOBALS.h")
#include "org/allbinary/globals/URLGLOBALS.h"
#endif
#if __has_include("org/allbinary/globals/URLGLOBALS.h")
#include "org/allbinary/globals/URLGLOBALS.h"
#endif
#if __has_include("org/allbinary/globals/URLGLOBALS.h")
#include "org/allbinary/globals/URLGLOBALS.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif


static Globals* Globals_instance;




void Globals_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Globals_instance = Globals_new();
}

void Globals_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Globals", nullptr);
    java_register_method("Globals", "init", (void*) Globals_initMethod);
}

static void Globals_initFields(Globals* this) {
    this->logUtil = LogUtil_getInstance();
}


Globals* Globals_getInstance(void) {
        return (Globals_staticInit(), Globals_instance);
}


void Globals_init(Globals* this) {
    Globals_register();
    Globals_initFields(this);
}

Globals* Globals_new(void) {
    Globals* this = java_object_alloc(sizeof(Globals), "Globals");
    Globals_init(this);
    return this;
}


void Globals_initMethod(Globals* this, ClassLoader* classLoader, const char* pathString) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        AppUrlGlobals* appUrlGlobals = AppUrlGlobals_new();
        AppUrlGlobals_setWebappPath(appUrlGlobals, pathString);
        URLGLOBALS_initMethod(appUrlGlobals);
        WebappClassLoaderInfo_setLoader(classLoader);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Setting Up AllBinary System Configuration Args: ");
        StringMaker_append(stringBuffer, pathString);
        StringMaker_append(stringBuffer, " ClassLoader: ");
        StringMaker_append(stringBuffer, java_class_of(classLoader));
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, commonStrings->INIT);
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, pathString)) {
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "No Path Provided. Using Process Path: ");
            StringMaker_append(stringBuffer, pathString);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->EQUALS);
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            StringMaker_append(stringBuffer, URLGLOBALS_getWebappPath());
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, commonStrings->INIT);
        }
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, "Webapp Path Set To: ");
        StringMaker_append(stringBuffer, URLGLOBALS_getWebappPath());
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, commonStrings->INIT);
}

