// Generated Code Do Not Modify
#include "org/allbinary/game/input/MotionJ2MEGameInputMapping.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/J2MEGameInputMapping.h"
#include "org/allbinary/game/input/MotionJ2MEDefaultGameInputMapping.h"




void MotionJ2MEGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionJ2MEGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionJ2MEGameInputMapping", "J2MEGameInputMapping");
    java_register_method("MotionJ2MEGameInputMapping", "getDefault", (void*) MotionJ2MEGameInputMapping_getDefault);
}

void MotionJ2MEGameInputMapping_init(MotionJ2MEGameInputMapping* this) {
    MotionJ2MEGameInputMapping_register();
    J2MEGameInputMapping_init(&this->base);
}

MotionJ2MEGameInputMapping* MotionJ2MEGameInputMapping_new(void) {
    MotionJ2MEGameInputMapping* this = java_object_alloc(sizeof(MotionJ2MEGameInputMapping), "MotionJ2MEGameInputMapping");
    MotionJ2MEGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* MotionJ2MEGameInputMapping_getDefault(MotionJ2MEGameInputMapping* this) {
        return PersistentInputMapping_getInputMapping(MotionJ2MEDefaultGameInputMapping_new());
}

