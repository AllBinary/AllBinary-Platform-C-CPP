// Generated Code Do Not Modify
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/view/ViewPositionBase.h"












void ViewPosition_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ViewPosition_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ViewPosition", "ViewPositionBase");
    java_register_method("ViewPosition", "getX", (void*) ViewPosition_getX);
    java_register_method("ViewPosition", "getY", (void*) ViewPosition_getY);
    java_register_method("ViewPosition", "getZ", (void*) ViewPosition_getZ);
    java_register_method("ViewPosition", "getX2", (void*) ViewPosition_getX2);
    java_register_method("ViewPosition", "getY2", (void*) ViewPosition_getY2);
    java_register_method("ViewPosition", "getZ2", (void*) ViewPosition_getZ2);
    java_register_method("ViewPosition", "setAllbinaryLayer", (void*) ViewPosition_setAllbinaryLayer);
}

static void ViewPosition_initFields(ViewPosition* this) {
    this->allbinaryLayer = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
}


ViewPosition* ViewPosition_getInstanceD(void) {
        return ViewPosition_new(0, 0, 0);
}


void ViewPosition_init(ViewPosition* this, int32_t x, int32_t y, int32_t z) {
    ViewPosition_register();
        ViewPositionBase_init(&this->base, x, y, z);
        ViewPosition_initFields(this);
}

ViewPosition* ViewPosition_new(int32_t x, int32_t y, int32_t z) {
    ViewPosition* this = java_object_alloc(sizeof(ViewPosition), "ViewPosition");
    ViewPosition_init(this, x, y, z);
    return this;
}


int32_t ViewPosition_getX(ViewPosition* this) {
        return AllBinaryLayer_getXP(this->allbinaryLayer);
}


int32_t ViewPosition_getY(ViewPosition* this) {
        return AllBinaryLayer_getYP(this->allbinaryLayer);
}


int32_t ViewPosition_getZ(ViewPosition* this) {
        return AllBinaryLayer_getZP(this->allbinaryLayer);
}


int32_t ViewPosition_getX2(ViewPosition* this) {
        return ViewPosition_getX(this) + AllBinaryLayer_getWidth(this->allbinaryLayer);
}


int32_t ViewPosition_getY2(ViewPosition* this) {
        return ViewPosition_getY(this) + AllBinaryLayer_getHeight(this->allbinaryLayer);
}


int32_t ViewPosition_getZ2(ViewPosition* this) {
        return ((int32_t) (((int64_t) ViewPosition_getZ(this)) + Layer_getDepth(this->allbinaryLayer)));
}


void ViewPosition_setAllbinaryLayer(ViewPosition* this, void* allbinaryLayer) {
        this->allbinaryLayer = ((AllBinaryLayer*) allbinaryLayer);
}

