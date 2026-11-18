// Generated Code Do Not Modify
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif






void PrimitiveIntUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PrimitiveIntUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PrimitiveIntUtil", nullptr);
}


void PrimitiveIntUtil_init(PrimitiveIntUtil* this) {
    PrimitiveIntUtil_register();
}

PrimitiveIntUtil* PrimitiveIntUtil_new(void) {
    PrimitiveIntUtil* this = java_object_alloc(sizeof(PrimitiveIntUtil), "PrimitiveIntUtil");
    PrimitiveIntUtil_init(this);
    return this;
}


int32_t* PrimitiveIntUtil_getArrayInstance(void) {
        return NullUtil_getInstance()->NULL_INT_ARRAY;
}


int32_t** PrimitiveIntUtil_getTwoDimensionalArrayInstance(void) {
        return NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
}

