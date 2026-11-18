// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenType.h"


static TouchScreenTypesFactory* TouchScreenTypesFactory_instance;


void TouchScreenTypesFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchScreenTypesFactory_instance = TouchScreenTypesFactory_new();
}

void TouchScreenTypesFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchScreenTypesFactory", nullptr);
}

static void TouchScreenTypesFactory_initFields(TouchScreenTypesFactory* this) {
    this->FINGER = TouchScreenType_new("Finger");
    this->NOTOUCH = TouchScreenType_new("No Touch");
    this->STYLUS = TouchScreenType_new("Stylus");
    this->UNDEFINED = TouchScreenType_new("Undefined");
}

void TouchScreenTypesFactory_init(TouchScreenTypesFactory* this) {
    TouchScreenTypesFactory_register();
    TouchScreenTypesFactory_initFields(this);
}

TouchScreenTypesFactory* TouchScreenTypesFactory_new(void) {
    TouchScreenTypesFactory* this = java_object_alloc(sizeof(TouchScreenTypesFactory), "TouchScreenTypesFactory");
    TouchScreenTypesFactory_init(this);
    return this;
}


TouchScreenTypesFactory* TouchScreenTypesFactory_getInstance(void) {
        return (TouchScreenTypesFactory_staticInit(), TouchScreenTypesFactory_instance);
}

