// Generated Code Do Not Modify
#include "org/allbinary/game/input/NormalJ2MEGameInputMapping.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/J2MEGameInputMapping.h"
#include "org/allbinary/game/input/NormalJ2MEDefaultGameInputMapping.h"




void NormalJ2MEGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NormalJ2MEGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NormalJ2MEGameInputMapping", "J2MEGameInputMapping");
    java_register_method("NormalJ2MEGameInputMapping", "getDefault", (void*) NormalJ2MEGameInputMapping_getDefault);
}

void NormalJ2MEGameInputMapping_init(NormalJ2MEGameInputMapping* this) {
    NormalJ2MEGameInputMapping_register();
    J2MEGameInputMapping_init(&this->base);
}

NormalJ2MEGameInputMapping* NormalJ2MEGameInputMapping_new(void) {
    NormalJ2MEGameInputMapping* this = java_object_alloc(sizeof(NormalJ2MEGameInputMapping), "NormalJ2MEGameInputMapping");
    NormalJ2MEGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* NormalJ2MEGameInputMapping_getDefault(NormalJ2MEGameInputMapping* this) {
        return PersistentInputMapping_getInputMapping(NormalJ2MEDefaultGameInputMapping_new());
}

