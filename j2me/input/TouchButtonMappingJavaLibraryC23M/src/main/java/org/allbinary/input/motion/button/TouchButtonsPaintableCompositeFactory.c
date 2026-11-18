// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonsPaintableCompositeFactory.h"
#include "org/allbinary/game/input/mapping/InputMappingInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#include "org/allbinary/input/motion/button/TouchButtonsPaintableComposite.h"




void TouchButtonsPaintableCompositeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonsPaintableCompositeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonsPaintableCompositeFactory", nullptr);
}

void TouchButtonsPaintableCompositeFactory_init(TouchButtonsPaintableCompositeFactory* this) {
    TouchButtonsPaintableCompositeFactory_register();
}

TouchButtonsPaintableCompositeFactory* TouchButtonsPaintableCompositeFactory_new(void) {
    TouchButtonsPaintableCompositeFactory* this = java_object_alloc(sizeof(TouchButtonsPaintableCompositeFactory), "TouchButtonsPaintableCompositeFactory");
    TouchButtonsPaintableCompositeFactory_init(this);
    return this;
}


ProcessPaintable* TouchButtonsPaintableCompositeFactory_getInstance(InputMappingInterface* inputMappingInterface, BasicColor* basicColor) {
        return TouchButtonsPaintableComposite_new(inputMappingInterface, basicColor);
}

