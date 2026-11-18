// Generated Code Do Not Modify
#include "org/allbinary/input/motion/CompleteMotionGestureInputToGameMotionGestureInput.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"


static CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_instance;



void CompleteMotionGestureInputToGameMotionGestureInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CompleteMotionGestureInputToGameMotionGestureInput_instance = CompleteMotionGestureInputToGameMotionGestureInput_new();
}

void CompleteMotionGestureInputToGameMotionGestureInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompleteMotionGestureInputToGameMotionGestureInput", nullptr);
    java_register_method("CompleteMotionGestureInputToGameMotionGestureInput", "init", (void*) CompleteMotionGestureInputToGameMotionGestureInput_initMethod);
}

static void CompleteMotionGestureInputToGameMotionGestureInput_initFields(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    CompleteMotionGestureInputToGameMotionGestureInput_register();
    CompleteMotionGestureInputToGameMotionGestureInput_initFields(this);
}

CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_new(void) {
    CompleteMotionGestureInputToGameMotionGestureInput* this = java_object_alloc(sizeof(CompleteMotionGestureInputToGameMotionGestureInput), "CompleteMotionGestureInputToGameMotionGestureInput");
    CompleteMotionGestureInputToGameMotionGestureInput_init(this);
    return this;
}


CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_getInstance(void) {
        return (CompleteMotionGestureInputToGameMotionGestureInput_staticInit(), CompleteMotionGestureInputToGameMotionGestureInput_instance);
}


void CompleteMotionGestureInputToGameMotionGestureInput_initMethod(CompleteMotionGestureInputToGameMotionGestureInput* this) {
        PreLogUtil_put("No Touch Button = No Compound Motion Gestures", this, this->commonStrings->INIT);
}

