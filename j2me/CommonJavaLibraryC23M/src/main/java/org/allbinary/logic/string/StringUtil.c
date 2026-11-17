// Generated Code Do Not Modify
#include "org/allbinary/logic/string/StringUtil.h"


static StringUtil* StringUtil_instance;







void StringUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    StringUtil_instance = StringUtil_new();
}

void StringUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StringUtil", nullptr);
    java_register_method("StringUtil", "getNonNull", (void*) StringUtil_getNonNull);
    java_register_method("StringUtil", "getArrayInstance", (void*) StringUtil_getArrayInstance);
    java_register_method("StringUtil", "count", (void*) StringUtil_count);
    java_register_method("StringUtil", "toString", (void*) StringUtil_toString);
}

static void StringUtil_initFields(StringUtil* this) {
    this->INIT_STRING = java_string_new("");
    this->NULL_STRING = "null";
    this->EMPTY_STRING = "";
    this->ONE_EMPTY_STRING_ARRAY = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->EMPTY_STRING }) / sizeof(const char*), (const char*[]){ this->EMPTY_STRING }));
    this->ONE_EMPTY_STRING_ARRAY_OF_ARRAYS = ((const char***) java_array_new2(sizeof(const char*), 0, 0));
    this->stringArray = ((const char**) java_array_new(sizeof(const char*), 0));
}


StringUtil* StringUtil_getInstance(void) {
        return (StringUtil_staticInit(), StringUtil_instance);
}


void StringUtil_init(StringUtil* this) {
    StringUtil_register();
    StringUtil_initFields(this);
}

StringUtil* StringUtil_new(void) {
    StringUtil* this = java_object_alloc(sizeof(StringUtil), "StringUtil");
    StringUtil_init(this);
    return this;
}


const char* StringUtil_getNonNull(StringUtil* this, const char* string) {
        return string;
}


const char** StringUtil_getArrayInstance(StringUtil* this) {
        return this->stringArray;
}


int32_t StringUtil_count(StringUtil* this, const char* string, uint16_t aChar) {
        int32_t count = 0;
        int32_t size = ((int32_t) strlen(string));
        for (int32_t index = 0; index < size; index++) {
            if (((uint16_t) string[index]) == aChar) {
                count++;
            }
        }
        return count;
}


const char* StringUtil_toString(StringUtil* this, void* anyType) {
        if (anyType != nullptr) {
            return java_object_toString(anyType);
        } else {
            return this->NULL_STRING;
        }
}

