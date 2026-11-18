// Generated Code Do Not Modify
#include "org/allbinary/layer/event/ScrollMapEvent.h"









void ScrollMapEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollMapEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollMapEvent", "AllBinaryEventObject");
    java_register_method("ScrollMapEvent", "setDx", (void*) ScrollMapEvent_setDx);
    java_register_method("ScrollMapEvent", "getDx", (void*) ScrollMapEvent_getDx);
    java_register_method("ScrollMapEvent", "setDy", (void*) ScrollMapEvent_setDy);
    java_register_method("ScrollMapEvent", "getDy", (void*) ScrollMapEvent_getDy);
    java_register_method("ScrollMapEvent", "setDxDy", (void*) ScrollMapEvent_setDxDy);
}

static void ScrollMapEvent_initFields(ScrollMapEvent* this) {
    this->dx = 0;
    this->dy = 0;
}


void ScrollMapEvent_init(ScrollMapEvent* this, void* anyType) {
    ScrollMapEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        ScrollMapEvent_initFields(this);
}

ScrollMapEvent* ScrollMapEvent_new(void* anyType) {
    ScrollMapEvent* this = java_object_alloc(sizeof(ScrollMapEvent), "ScrollMapEvent");
    ScrollMapEvent_init(this, anyType);
    return this;
}


void ScrollMapEvent_setDx(ScrollMapEvent* this, int32_t dx) {
        this->dx = dx;
}


int32_t ScrollMapEvent_getDx(ScrollMapEvent* this) {
        return this->dx;
}


void ScrollMapEvent_setDy(ScrollMapEvent* this, int32_t dy) {
        this->dy = dy;
}


int32_t ScrollMapEvent_getDy(ScrollMapEvent* this) {
        return this->dy;
}


void ScrollMapEvent_setDxDy(ScrollMapEvent* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}

