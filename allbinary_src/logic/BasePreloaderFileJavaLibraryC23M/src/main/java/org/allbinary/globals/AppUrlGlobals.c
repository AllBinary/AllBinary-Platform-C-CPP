// Generated Code Do Not Modify
#include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/globals/UrlGlobalsInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


AppUrlGlobals* AppUrlGlobals_NULL_APP_URL_GLOBALS;






void AppUrlGlobals_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AppUrlGlobals_NULL_APP_URL_GLOBALS = AppUrlGlobals_new();
}

void AppUrlGlobals_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AppUrlGlobals", "UrlGlobalsInterface");
    java_register_method("AppUrlGlobals", "isTestingMode", (void*) AppUrlGlobals_isTestingMode);
    java_register_method("AppUrlGlobals", "getWebappPath", (void*) AppUrlGlobals_getWebappPath);
    java_register_method("AppUrlGlobals", "setWebappPath", (void*) AppUrlGlobals_setWebappPath);
    java_register_method("AppUrlGlobals", "getTestHtmlPath", (void*) AppUrlGlobals_getTestHtmlPath);
    java_register_method("AppUrlGlobals", "getMainPath", (void*) AppUrlGlobals_getMainPath);
}

static void AppUrlGlobals_initFields(AppUrlGlobals* this) {
    this->path = StringUtil_getInstance()->EMPTY_STRING;
}

void AppUrlGlobals_init(AppUrlGlobals* this) {
    AppUrlGlobals_register();
    UrlGlobalsInterface_init(&this->base);
    AppUrlGlobals_initFields(this);
}

AppUrlGlobals* AppUrlGlobals_new(void) {
    AppUrlGlobals* this = java_object_alloc(sizeof(AppUrlGlobals), "AppUrlGlobals");
    AppUrlGlobals_init(this);
    return this;
}


bool AppUrlGlobals_isTestingMode(AppUrlGlobals* this) {
        return false;
}


const char* AppUrlGlobals_getWebappPath(AppUrlGlobals* this) {
        return this->path;
}


// synchronized
void AppUrlGlobals_setWebappPath(AppUrlGlobals* this, const char* path) {
        this->path = path;
        if (!(java_string_endsWith(this->path, "\\") || java_string_endsWith(this->path, "/"))) {
            this->path = java_concat(this->path, "\\");
        }
}


const char* AppUrlGlobals_getTestHtmlPath(AppUrlGlobals* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


// throws Exception
const char* AppUrlGlobals_getMainPath(AppUrlGlobals* this) {
        return this->path;
}

