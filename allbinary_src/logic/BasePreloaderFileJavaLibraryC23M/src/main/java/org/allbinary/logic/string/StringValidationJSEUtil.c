// Generated Code Do Not Modify
#include "org/allbinary/logic/string/StringValidationJSEUtil.h"





void StringValidationJSEUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StringValidationJSEUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StringValidationJSEUtil", nullptr);
}


void StringValidationJSEUtil_init(StringValidationJSEUtil* this) {
    StringValidationJSEUtil_register();
}

StringValidationJSEUtil* StringValidationJSEUtil_new(void) {
    StringValidationJSEUtil* this = java_object_alloc(sizeof(StringValidationJSEUtil), "StringValidationJSEUtil");
    StringValidationJSEUtil_init(this);
    return this;
}


bool StringValidationJSEUtil_isBlank(const char* string) {
        int32_t len = ((int32_t) strlen(string));
        for (int32_t i = 0; i < len; i++) {
            uint16_t c = ((uint16_t) string[i]);
            if (isspace(c) == false) {
                return false;
            }
        }
        return true;
}

