// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h"
#include "org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"


TouchButtonsBuilderFactory* TouchButtonsBuilderFactory_NO_TOUCH_BUTTON_BUILDER_FACTORY;


void TouchButtonsBuilderFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonsBuilderFactory_NO_TOUCH_BUTTON_BUILDER_FACTORY = TouchButtonsBuilderFactory_new();
}

void TouchButtonsBuilderFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonsBuilderFactory", nullptr);
    java_register_method("TouchButtonsBuilderFactory", "getInstance", (void*) TouchButtonsBuilderFactory_getInstance);
}

void TouchButtonsBuilderFactory_init(TouchButtonsBuilderFactory* this) {
    TouchButtonsBuilderFactory_register();
}

TouchButtonsBuilderFactory* TouchButtonsBuilderFactory_new(void) {
    TouchButtonsBuilderFactory* this = java_object_alloc(sizeof(TouchButtonsBuilderFactory), "TouchButtonsBuilderFactory");
    TouchButtonsBuilderFactory_init(this);
    return this;
}


BaseTouchInput* TouchButtonsBuilderFactory_getInstance(TouchButtonsBuilderFactory* this) {
        return NoButtonsTouchInputFactory_getInstance();
}

