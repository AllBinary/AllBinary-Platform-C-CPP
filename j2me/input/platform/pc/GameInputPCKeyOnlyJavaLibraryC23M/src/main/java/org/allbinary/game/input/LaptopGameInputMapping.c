// Generated Code Do Not Modify
#include "org/allbinary/game/input/LaptopGameInputMapping.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/PCGameInputMapping.h"
#include "org/allbinary/game/input/LaptopDefaultGameInputMapping.h"




void LaptopGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LaptopGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LaptopGameInputMapping", "PCGameInputMapping");
    java_register_method("LaptopGameInputMapping", "getDefault", (void*) LaptopGameInputMapping_getDefault);
}

void LaptopGameInputMapping_init(LaptopGameInputMapping* this) {
    LaptopGameInputMapping_register();
    PCGameInputMapping_init(&this->base);
}

LaptopGameInputMapping* LaptopGameInputMapping_new(void) {
    LaptopGameInputMapping* this = java_object_alloc(sizeof(LaptopGameInputMapping), "LaptopGameInputMapping");
    LaptopGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* LaptopGameInputMapping_getDefault(LaptopGameInputMapping* this) {
        return PersistentInputMapping_getInputMapping(LaptopDefaultGameInputMapping_new());
}

