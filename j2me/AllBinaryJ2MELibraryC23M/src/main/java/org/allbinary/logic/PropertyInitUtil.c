// Generated Code Do Not Modify
#include "org/allbinary/logic/PropertyInitUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static PropertyInitUtil* PropertyInitUtil_instance;


void PropertyInitUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PropertyInitUtil_instance = PropertyInitUtil_new();
}

void PropertyInitUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PropertyInitUtil", nullptr);
}

void PropertyInitUtil_init(PropertyInitUtil* this) {
    PropertyInitUtil_register();
}

PropertyInitUtil* PropertyInitUtil_new(void) {
    PropertyInitUtil* this = java_object_alloc(sizeof(PropertyInitUtil), "PropertyInitUtil");
    PropertyInitUtil_init(this);
    return this;
}


PropertyInitUtil* PropertyInitUtil_getInstance(int32_t value) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil* logUtil = LogUtil_getInstance();
        LogUtil_putF(logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "PropertyInitUtil: "), value)), logUtil, commonStrings->CONSTRUCTOR);
        return (PropertyInitUtil_staticInit(), PropertyInitUtil_instance);
}

