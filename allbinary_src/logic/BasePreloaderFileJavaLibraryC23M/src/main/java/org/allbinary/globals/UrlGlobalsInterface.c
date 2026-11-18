// Generated Code Do Not Modify
#include "org/allbinary/globals/UrlGlobalsInterface.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif







void UrlGlobalsInterface_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UrlGlobalsInterface_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UrlGlobalsInterface", nullptr);
    java_register_method("UrlGlobalsInterface", "getMainPath", (void*) UrlGlobalsInterface_getMainPath);
    java_register_method("UrlGlobalsInterface", "getTestHtmlPath", (void*) UrlGlobalsInterface_getTestHtmlPath);
    java_register_method("UrlGlobalsInterface", "getWebappPath", (void*) UrlGlobalsInterface_getWebappPath);
    java_register_method("UrlGlobalsInterface", "isTestingMode", (void*) UrlGlobalsInterface_isTestingMode);
}

void UrlGlobalsInterface_init(UrlGlobalsInterface* this) {
    UrlGlobalsInterface_register();
}

UrlGlobalsInterface* UrlGlobalsInterface_new(void) {
    UrlGlobalsInterface* this = java_object_alloc(sizeof(UrlGlobalsInterface), "UrlGlobalsInterface");
    UrlGlobalsInterface_init(this);
    return this;
}


// throws Exception
const char* UrlGlobalsInterface_getMainPath(UrlGlobalsInterface* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


const char* UrlGlobalsInterface_getTestHtmlPath(UrlGlobalsInterface* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


const char* UrlGlobalsInterface_getWebappPath(UrlGlobalsInterface* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool UrlGlobalsInterface_isTestingMode(UrlGlobalsInterface* this) {
        return false;
}

