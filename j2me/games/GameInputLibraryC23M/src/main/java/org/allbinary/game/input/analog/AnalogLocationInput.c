// Generated Code Do Not Modify
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#include "org/allbinary/graphics/CustomGPoint.h"


AnalogLocationInput* AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT;










void AnalogLocationInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT = AnalogLocationInput_new(-1);
}

void AnalogLocationInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogLocationInput", nullptr);
    java_register_method("AnalogLocationInput", "getPlayerId", (void*) AnalogLocationInput_getPlayerId);
    java_register_method("AnalogLocationInput", "getCustomGPoint", (void*) AnalogLocationInput_getCustomGPoint);
    java_register_method("AnalogLocationInput", "getRz", (void*) AnalogLocationInput_getRz);
    java_register_method("AnalogLocationInput", "setRz", (void*) AnalogLocationInput_setRz);
    java_register_method("AnalogLocationInput", "getRightTrigger", (void*) AnalogLocationInput_getRightTrigger);
    java_register_method("AnalogLocationInput", "setRightTrigger", (void*) AnalogLocationInput_setRightTrigger);
    java_register_method("AnalogLocationInput", "getLeftTrigger", (void*) AnalogLocationInput_getLeftTrigger);
    java_register_method("AnalogLocationInput", "setLeftTrigger", (void*) AnalogLocationInput_setLeftTrigger);
}

static void AnalogLocationInput_initFields(AnalogLocationInput* this) {
    
    
    this->rz = 0;
    this->rightTrigger = 0;
    this->leftTrigger = 0;
}


void AnalogLocationInput_init(AnalogLocationInput* this, int32_t playerId) {
    AnalogLocationInput_register();
    AnalogLocationInput_initFields(this);
        this->playerId = playerId;
        this->customGPoint = CustomGPoint_new(0, 0, 0);
}

AnalogLocationInput* AnalogLocationInput_new(int32_t playerId) {
    AnalogLocationInput* this = java_object_alloc(sizeof(AnalogLocationInput), "AnalogLocationInput");
    AnalogLocationInput_init(this, playerId);
    return this;
}


int32_t AnalogLocationInput_getPlayerId(AnalogLocationInput* this) {
        return this->playerId;
}


CustomGPoint* AnalogLocationInput_getCustomGPoint(AnalogLocationInput* this) {
        return this->customGPoint;
}


int32_t AnalogLocationInput_getRz(AnalogLocationInput* this) {
        return this->rz;
}


void AnalogLocationInput_setRz(AnalogLocationInput* this, int32_t rz) {
        this->rz = rz;
}


int32_t AnalogLocationInput_getRightTrigger(AnalogLocationInput* this) {
        return this->rightTrigger;
}


void AnalogLocationInput_setRightTrigger(AnalogLocationInput* this, int32_t rightTrigger) {
        this->rightTrigger = rightTrigger;
}


int32_t AnalogLocationInput_getLeftTrigger(AnalogLocationInput* this) {
        return this->leftTrigger;
}


void AnalogLocationInput_setLeftTrigger(AnalogLocationInput* this, int32_t leftTrigger) {
        this->leftTrigger = leftTrigger;
}

