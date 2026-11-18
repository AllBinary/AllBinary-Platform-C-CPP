// Generated Code Do Not Modify
#include "org/allbinary/view/ViewPositionBase.h"


ViewPositionBase* ViewPositionBase_NULL_VIEW_POSITION;






void ViewPositionBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ViewPositionBase_NULL_VIEW_POSITION = ViewPositionBase_new(0, 0, 0);
}

void ViewPositionBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ViewPositionBase", "GPoint");
    java_register_method("ViewPositionBase", "getX2", (void*) ViewPositionBase_getX2);
    java_register_method("ViewPositionBase", "getY2", (void*) ViewPositionBase_getY2);
    java_register_method("ViewPositionBase", "getZ2", (void*) ViewPositionBase_getZ2);
    java_register_method("ViewPositionBase", "setAllbinaryLayer", (void*) ViewPositionBase_setAllbinaryLayer);
}


void ViewPositionBase_init(ViewPositionBase* this, int32_t x, int32_t y, int32_t z) {
    ViewPositionBase_register();
        GPoint_init(&this->base, x, y, z);
}

ViewPositionBase* ViewPositionBase_new(int32_t x, int32_t y, int32_t z) {
    ViewPositionBase* this = java_object_alloc(sizeof(ViewPositionBase), "ViewPositionBase");
    ViewPositionBase_init(this, x, y, z);
    return this;
}


int32_t ViewPositionBase_getX2(ViewPositionBase* this) {
        return GPoint_getX(this);
}


int32_t ViewPositionBase_getY2(ViewPositionBase* this) {
        return GPoint_getY(this);
}


int32_t ViewPositionBase_getZ2(ViewPositionBase* this) {
        return GPoint_getZ(this);
}


void ViewPositionBase_setAllbinaryLayer(ViewPositionBase* this, void* allbinaryLayer) {
}

