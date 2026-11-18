// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonsPaintableFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/input/motion/button/TouchButtonsPaintable.h"




void TouchButtonsPaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonsPaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonsPaintableFactory", nullptr);
}

void TouchButtonsPaintableFactory_init(TouchButtonsPaintableFactory* this) {
    TouchButtonsPaintableFactory_register();
}

TouchButtonsPaintableFactory* TouchButtonsPaintableFactory_new(void) {
    TouchButtonsPaintableFactory* this = java_object_alloc(sizeof(TouchButtonsPaintableFactory), "TouchButtonsPaintableFactory");
    TouchButtonsPaintableFactory_init(this);
    return this;
}


Paintable* TouchButtonsPaintableFactory_getInstance(BasicColor* basicColor) {
        return TouchButtonsPaintable_new(basicColor);
}

