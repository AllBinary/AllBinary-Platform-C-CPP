// Generated Code Do Not Modify
#include "org/allbinary/graphics/CustomGPoint.h"
#include "org/allbinary/graphics/GPoint.h"


CustomGPoint* CustomGPoint_NULL_CUSTOM_POINT;










void CustomGPoint_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CustomGPoint_NULL_CUSTOM_POINT = CustomGPoint_new(0, 0, 0);
}

void CustomGPoint_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomGPoint", "GPoint");
    java_register_method("CustomGPoint", "setX", (void*) CustomGPoint_setX);
    java_register_method("CustomGPoint", "getX", (void*) CustomGPoint_getX);
    java_register_method("CustomGPoint", "setY", (void*) CustomGPoint_setY);
    java_register_method("CustomGPoint", "getY", (void*) CustomGPoint_getY);
    java_register_method("CustomGPoint", "setZ", (void*) CustomGPoint_setZ);
    java_register_method("CustomGPoint", "getZ", (void*) CustomGPoint_getZ);
}

static void CustomGPoint_initFields(CustomGPoint* this) {
    this->cx = 0;
    this->cy = 0;
    this->cz = 0;
}


CustomGPoint* CustomGPoint_getInstance(GPoint* point) {
        return CustomGPoint_new(GPoint_getX(point), GPoint_getY(point), GPoint_getZ(point));
}


CustomGPoint* CustomGPoint_getInstance3(int32_t x, int32_t y) {
        return CustomGPoint_new(x, y, 3);
}


void CustomGPoint_init(CustomGPoint* this, int32_t x, int32_t y, int32_t z) {
    CustomGPoint_register();
        GPoint_init(&this->base, x, y, z);
        CustomGPoint_initFields(this);
}

CustomGPoint* CustomGPoint_new(int32_t x, int32_t y, int32_t z) {
    CustomGPoint* this = java_object_alloc(sizeof(CustomGPoint), "CustomGPoint");
    CustomGPoint_init(this, x, y, z);
    return this;
}


void CustomGPoint_setX(CustomGPoint* this, int32_t x) {
        this->cx = x;
}


int32_t CustomGPoint_getX(CustomGPoint* this) {
        return this->cx;
}


void CustomGPoint_setY(CustomGPoint* this, int32_t y) {
        this->cy = y;
}


int32_t CustomGPoint_getY(CustomGPoint* this) {
        return this->cy;
}


void CustomGPoint_setZ(CustomGPoint* this, int32_t z) {
        this->cz = z;
}


int32_t CustomGPoint_getZ(CustomGPoint* this) {
        return this->cz;
}

