// Generated Code Do Not Modify
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/GPoint.h"


static PointFactory* PointFactory_instance;






void PointFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PointFactory_instance = PointFactory_new();
}

void PointFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PointFactory", nullptr);
    java_register_method("PointFactory", "init", (void*) PointFactory_initMethod);
    java_register_method("PointFactory", "createXY", (void*) PointFactory_createXY);
    java_register_method("PointFactory", "createXYZ", (void*) PointFactory_createXYZ);
}

static void PointFactory_initFields(PointFactory* this) {
    this->ZERO_ZERO = PointFactory_createXYZ(this, 0, 0, 0);
}


PointFactory* PointFactory_getInstance(void) {
        return (PointFactory_staticInit(), PointFactory_instance);
}


void PointFactory_initMethod(PointFactory* this) {
}


void PointFactory_init(PointFactory* this) {
    PointFactory_register();
    PointFactory_initFields(this);
}

PointFactory* PointFactory_new(void) {
    PointFactory* this = java_object_alloc(sizeof(PointFactory), "PointFactory");
    PointFactory_init(this);
    return this;
}


GPoint* PointFactory_createXY(PointFactory* this, int32_t x, int32_t y) {
        return GPoint_new(x, y, 0);
}


GPoint* PointFactory_createXYZ(PointFactory* this, int32_t x, int32_t y, int32_t z) {
        return GPoint_new(x, y, z);
}

