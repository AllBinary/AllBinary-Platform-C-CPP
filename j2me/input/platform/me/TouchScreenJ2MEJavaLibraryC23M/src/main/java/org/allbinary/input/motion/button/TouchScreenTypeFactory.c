// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchScreenTypeFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"


static TouchScreenTypeFactory* TouchScreenTypeFactory_instance;



void TouchScreenTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchScreenTypeFactory_instance = TouchScreenTypeFactory_new();
}

void TouchScreenTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchScreenTypeFactory", nullptr);
    java_register_method("TouchScreenTypeFactory", "TouchScreenTypeFactory", (void*) TouchScreenTypeFactory_TouchScreenTypeFactory);
}

void TouchScreenTypeFactory_init(TouchScreenTypeFactory* this) {
    TouchScreenTypeFactory_register();
}

TouchScreenTypeFactory* TouchScreenTypeFactory_new(void) {
    TouchScreenTypeFactory* this = java_object_alloc(sizeof(TouchScreenTypeFactory), "TouchScreenTypeFactory");
    TouchScreenTypeFactory_init(this);
    return this;
}


TouchScreenTypeFactory* TouchScreenTypeFactory_getInstance(void) {
        return (TouchScreenTypeFactory_staticInit(), TouchScreenTypeFactory_instance);
}


void TouchScreenTypeFactory_TouchScreenTypeFactory(TouchScreenTypeFactory* this) {
        TouchScreenFactory* touchScreenFactory = TouchScreenFactory_getInstance();
        TouchScreenFactory_setTouch(touchScreenFactory, true);
}

