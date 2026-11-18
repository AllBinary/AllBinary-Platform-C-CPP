// Generated Code Do Not Modify
#include "org/allbinary/logic/java/PrimitiveArrayToString.h"
#include "org/allbinary/logic/string/StringMaker.h"




void PrimitiveArrayToString_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PrimitiveArrayToString_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PrimitiveArrayToString", nullptr);
}

void PrimitiveArrayToString_init(PrimitiveArrayToString* this) {
    PrimitiveArrayToString_register();
}

PrimitiveArrayToString* PrimitiveArrayToString_new(void) {
    PrimitiveArrayToString* this = java_object_alloc(sizeof(PrimitiveArrayToString), "PrimitiveArrayToString");
    PrimitiveArrayToString_init(this);
    return this;
}


const char* PrimitiveArrayToString_toString(float* floats) {
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = 0; index < java_array_length(floats); index++) {
            StringMaker_appendfloat(stringBuffer, floats[index]);
        }
        return java_string_of(stringBuffer);
}

