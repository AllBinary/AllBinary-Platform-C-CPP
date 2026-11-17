// Generated Code Do Not Modify
#include "org/allbinary/logic/VectorUtil.h"


static VectorUtil* VectorUtil_instance;




void VectorUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    VectorUtil_instance = VectorUtil_new();
}

void VectorUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorUtil", nullptr);
    java_register_method("VectorUtil", "getSize", (void*) VectorUtil_getSize);
    java_register_method("VectorUtil", "elementAt", (void*) VectorUtil_elementAt);
}

void VectorUtil_init(VectorUtil* this) {
    VectorUtil_register();
}

VectorUtil* VectorUtil_new(void) {
    VectorUtil* this = java_object_alloc(sizeof(VectorUtil), "VectorUtil");
    VectorUtil_init(this);
    return this;
}


VectorUtil* VectorUtil_getInstance(void) {
        return (VectorUtil_staticInit(), VectorUtil_instance);
}


int32_t VectorUtil_getSize(VectorUtil* this, void* anyType) {
        Vector* vector = ((Vector*) anyType);
        return Vector_size(vector);
}


void* VectorUtil_elementAt(VectorUtil* this, void* anyType, int32_t index) {
        Vector* vector = ((Vector*) anyType);
        return Vector_elementAt(vector, index);
}

