// Generated Code Do Not Modify
#include "org/allbinary/game/physics/acceleration/BasicAccelerationProperties.h"








void BasicAccelerationProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicAccelerationProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicAccelerationProperties", nullptr);
    java_register_method("BasicAccelerationProperties", "setReverse", (void*) BasicAccelerationProperties_setReverse);
    java_register_method("BasicAccelerationProperties", "getReverse", (void*) BasicAccelerationProperties_getReverse);
    java_register_method("BasicAccelerationProperties", "setForward", (void*) BasicAccelerationProperties_setForward);
    java_register_method("BasicAccelerationProperties", "getForward", (void*) BasicAccelerationProperties_getForward);
}

static void BasicAccelerationProperties_initFields(BasicAccelerationProperties* this) {
    this->forward = 0;
    this->reverse = 0;
}


void BasicAccelerationProperties_init(BasicAccelerationProperties* this, int32_t forward, int32_t reverse) {
    BasicAccelerationProperties_register();
    BasicAccelerationProperties_initFields(this);
        BasicAccelerationProperties_setForward(this, forward);
        BasicAccelerationProperties_setReverse(this, reverse);
}

BasicAccelerationProperties* BasicAccelerationProperties_new(int32_t forward, int32_t reverse) {
    BasicAccelerationProperties* this = java_object_alloc(sizeof(BasicAccelerationProperties), "BasicAccelerationProperties");
    BasicAccelerationProperties_init(this, forward, reverse);
    return this;
}


void BasicAccelerationProperties_setReverse(BasicAccelerationProperties* this, int32_t reverse) {
        this->reverse = reverse;
}


int32_t BasicAccelerationProperties_getReverse(BasicAccelerationProperties* this) {
        return this->reverse;
}


void BasicAccelerationProperties_setForward(BasicAccelerationProperties* this, int32_t forward) {
        this->forward = forward;
}


int32_t BasicAccelerationProperties_getForward(BasicAccelerationProperties* this) {
        return this->forward;
}

