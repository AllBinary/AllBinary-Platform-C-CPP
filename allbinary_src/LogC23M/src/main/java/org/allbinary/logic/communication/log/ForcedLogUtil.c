// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif




void ForcedLogUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ForcedLogUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ForcedLogUtil", nullptr);
}

void ForcedLogUtil_init(ForcedLogUtil* this) {
    ForcedLogUtil_register();
}

ForcedLogUtil* ForcedLogUtil_new(void) {
    ForcedLogUtil* this = java_object_alloc(sizeof(ForcedLogUtil), "ForcedLogUtil");
    ForcedLogUtil_init(this);
    return this;
}


void ForcedLogUtil_log(const char* message, void* anyType) {
        JAVA_TRY {
            java_throw(java_exception_new("Exception", message));
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE(CommonStrings_getInstance()->EXCEPTION, anyType, "log", e);
        } JAVA_END_TRY;
}

