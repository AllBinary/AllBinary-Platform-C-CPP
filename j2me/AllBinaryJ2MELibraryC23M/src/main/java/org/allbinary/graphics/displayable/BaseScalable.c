// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/BaseScalable.h"
#include "org/allbinary/graphics/displayable/ScalableListener.h"







void BaseScalable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseScalable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseScalable", nullptr);
    java_register_method("BaseScalable", "getRatio", (void*) BaseScalable_getRatio);
    java_register_method("BaseScalable", "getLeft", (void*) BaseScalable_getLeft);
    java_register_method("BaseScalable", "getTop", (void*) BaseScalable_getTop);
    java_register_method("BaseScalable", "scale", (void*) BaseScalable_scale);
}

void BaseScalable_init(BaseScalable* this) {
    BaseScalable_register();
}

BaseScalable* BaseScalable_new(void) {
    BaseScalable* this = java_object_alloc(sizeof(BaseScalable), "BaseScalable");
    BaseScalable_init(this);
    return this;
}


float BaseScalable_getRatio(BaseScalable* this, float ratio) {
        return 1.0f;
}


int32_t BaseScalable_getLeft(BaseScalable* this, int32_t xOffset) {
        return -1;
}


int32_t BaseScalable_getTop(BaseScalable* this, int32_t yOffset) {
        return -1;
}


void BaseScalable_scale(BaseScalable* this, float ratio) {
}

