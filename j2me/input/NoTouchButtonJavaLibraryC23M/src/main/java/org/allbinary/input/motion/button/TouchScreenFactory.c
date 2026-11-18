// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenType.h"


static TouchScreenFactory* TouchScreenFactory_SINGLETON;







void TouchScreenFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchScreenFactory_SINGLETON = TouchScreenFactory_new();
}

void TouchScreenFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchScreenFactory", nullptr);
    java_register_method("TouchScreenFactory", "isMultiTouch", (void*) TouchScreenFactory_isMultiTouch);
    java_register_method("TouchScreenFactory", "setTouch", (void*) TouchScreenFactory_setTouch);
    java_register_method("TouchScreenFactory", "isTouch", (void*) TouchScreenFactory_isTouch);
    java_register_method("TouchScreenFactory", "getTouchScreenType", (void*) TouchScreenFactory_getTouchScreenType);
}

static void TouchScreenFactory_initFields(TouchScreenFactory* this) {
    this->multiTouch = false;
    this->touch = false;
    this->touchScreenType = TouchScreenTypesFactory_getInstance()->NOTOUCH;
}


void TouchScreenFactory_init(TouchScreenFactory* this) {
    TouchScreenFactory_register();
    TouchScreenFactory_initFields(this);
}

TouchScreenFactory* TouchScreenFactory_new(void) {
    TouchScreenFactory* this = java_object_alloc(sizeof(TouchScreenFactory), "TouchScreenFactory");
    TouchScreenFactory_init(this);
    return this;
}


TouchScreenFactory* TouchScreenFactory_getInstance(void) {
        return (TouchScreenFactory_staticInit(), TouchScreenFactory_SINGLETON);
}


bool TouchScreenFactory_isMultiTouch(TouchScreenFactory* this) {
        return this->multiTouch;
}


void TouchScreenFactory_setTouch(TouchScreenFactory* this, bool touch) {
}


bool TouchScreenFactory_isTouch(TouchScreenFactory* this) {
        return this->touch;
}


TouchScreenType* TouchScreenFactory_getTouchScreenType(TouchScreenFactory* this) {
        return this->touchScreenType;
}

