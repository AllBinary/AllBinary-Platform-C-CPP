// Generated Code Do Not Modify
#include "org/allbinary/game/input/MotionLaptopGameInputMapping.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/PCGameInputMapping.h"
#include "org/allbinary/game/input/MotionLaptopDefaultGameInputMapping.h"




void MotionLaptopGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionLaptopGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionLaptopGameInputMapping", "PCGameInputMapping");
    java_register_method("MotionLaptopGameInputMapping", "getDefault", (void*) MotionLaptopGameInputMapping_getDefault);
}

void MotionLaptopGameInputMapping_init(MotionLaptopGameInputMapping* this) {
    MotionLaptopGameInputMapping_register();
    PCGameInputMapping_init(&this->base);
}

MotionLaptopGameInputMapping* MotionLaptopGameInputMapping_new(void) {
    MotionLaptopGameInputMapping* this = java_object_alloc(sizeof(MotionLaptopGameInputMapping), "MotionLaptopGameInputMapping");
    MotionLaptopGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* MotionLaptopGameInputMapping_getDefault(MotionLaptopGameInputMapping* this) {
        return PersistentInputMapping_getInputMapping(MotionLaptopDefaultGameInputMapping_new());
}

