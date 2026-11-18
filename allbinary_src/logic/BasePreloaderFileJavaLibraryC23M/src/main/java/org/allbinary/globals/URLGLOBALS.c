// Generated Code Do Not Modify
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/UrlGlobalsInterface.h"


static UrlGlobalsInterface* URLGLOBALS_urlGlobalsInterface;






void URLGLOBALS_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    URLGLOBALS_urlGlobalsInterface = (AppUrlGlobals_staticInit(), AppUrlGlobals_NULL_APP_URL_GLOBALS);
}

void URLGLOBALS_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("URLGLOBALS", nullptr);
}

void URLGLOBALS_init(URLGLOBALS* this) {
    URLGLOBALS_register();
}

URLGLOBALS* URLGLOBALS_new(void) {
    URLGLOBALS* this = java_object_alloc(sizeof(URLGLOBALS), "URLGLOBALS");
    URLGLOBALS_init(this);
    return this;
}


void URLGLOBALS_initMethod(UrlGlobalsInterface* urlGlobalsInterface) {
        URLGLOBALS_urlGlobalsInterface = urlGlobalsInterface;
}


bool URLGLOBALS_isTestingMode(void) {
        return JAVA_CALL((URLGLOBALS_staticInit(), URLGLOBALS_urlGlobalsInterface), isTestingMode);
}


const char* URLGLOBALS_getWebappPath(void) {
        return JAVA_CALL((URLGLOBALS_staticInit(), URLGLOBALS_urlGlobalsInterface), getWebappPath);
}


const char* URLGLOBALS_getTestHtmlPath(void) {
        return JAVA_CALL((URLGLOBALS_staticInit(), URLGLOBALS_urlGlobalsInterface), getTestHtmlPath);
}


// throws Exception
const char* URLGLOBALS_getMainPath(void) {
        return JAVA_CALL((URLGLOBALS_staticInit(), URLGLOBALS_urlGlobalsInterface), getMainPath);
}

