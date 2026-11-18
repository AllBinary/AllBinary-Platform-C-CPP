// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/game/input/InputFactory.h"




void MotionGestureInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionGestureInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionGestureInput", "Input");
}


void MotionGestureInput_init(MotionGestureInput* this, int32_t id, const char* name) {
    MotionGestureInput_register();
        Input_init(&this->base, id, name);
        InputFactory* inputFactory = InputFactory_getInstance();
        InputFactory_add(inputFactory, Input_getId(this), this);
}

MotionGestureInput* MotionGestureInput_new(int32_t id, const char* name) {
    MotionGestureInput* this = java_object_alloc(sizeof(MotionGestureInput), "MotionGestureInput");
    MotionGestureInput_init(this, id, name);
    return this;
}

