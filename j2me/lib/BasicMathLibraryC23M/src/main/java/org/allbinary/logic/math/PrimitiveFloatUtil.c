// Generated Code Do Not Modify
#include "org/allbinary/logic/math/PrimitiveFloatUtil.h"





void PrimitiveFloatUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PrimitiveFloatUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PrimitiveFloatUtil", nullptr);
}


void PrimitiveFloatUtil_init(PrimitiveFloatUtil* this) {
    PrimitiveFloatUtil_register();
}

PrimitiveFloatUtil* PrimitiveFloatUtil_new(void) {
    PrimitiveFloatUtil* this = java_object_alloc(sizeof(PrimitiveFloatUtil), "PrimitiveFloatUtil");
    PrimitiveFloatUtil_init(this);
    return this;
}


float* PrimitiveFloatUtil_getArrayInstance(void) {
        return ((float*) java_array_new(sizeof(float), 0));
}

