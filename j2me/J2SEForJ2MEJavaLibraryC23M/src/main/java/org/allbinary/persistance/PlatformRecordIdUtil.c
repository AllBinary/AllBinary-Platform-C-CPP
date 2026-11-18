// Generated Code Do Not Modify
#include "org/allbinary/persistance/PlatformRecordIdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif


static PlatformRecordIdUtil* PlatformRecordIdUtil_instance;



void PlatformRecordIdUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformRecordIdUtil_instance = PlatformRecordIdUtil_new();
}

void PlatformRecordIdUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformRecordIdUtil", nullptr);
    java_register_method("PlatformRecordIdUtil", "getRecordId", (void*) PlatformRecordIdUtil_getRecordId);
}

static void PlatformRecordIdUtil_initFields(PlatformRecordIdUtil* this) {
    this->PLATFORM_SHORT_NAME = "JSE";
}

void PlatformRecordIdUtil_init(PlatformRecordIdUtil* this) {
    PlatformRecordIdUtil_register();
    PlatformRecordIdUtil_initFields(this);
}

PlatformRecordIdUtil* PlatformRecordIdUtil_new(void) {
    PlatformRecordIdUtil* this = java_object_alloc(sizeof(PlatformRecordIdUtil), "PlatformRecordIdUtil");
    PlatformRecordIdUtil_init(this);
    return this;
}


PlatformRecordIdUtil* PlatformRecordIdUtil_getInstance(void) {
        return (PlatformRecordIdUtil_staticInit(), PlatformRecordIdUtil_instance);
}


const char* PlatformRecordIdUtil_getRecordId(PlatformRecordIdUtil* this, AbeClientInformationInterface* abeClientInformation, const char* baseRecordId) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), AbeClientInformationInterface_toShortString(abeClientInformation)), CommonSeps_getInstance()->UNDERSCORE), this->PLATFORM_SHORT_NAME), baseRecordId));
}

