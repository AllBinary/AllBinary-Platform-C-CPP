// Generated Code Do Not Modify
#include "org/allbinary/game/input/DesktopGameInputMapping.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/PCGameInputMapping.h"
#include "org/allbinary/game/input/DesktopDefaultGameInputMapping.h"




void DesktopGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DesktopGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DesktopGameInputMapping", "PCGameInputMapping");
    java_register_method("DesktopGameInputMapping", "getDefault", (void*) DesktopGameInputMapping_getDefault);
}

void DesktopGameInputMapping_init(DesktopGameInputMapping* this) {
    DesktopGameInputMapping_register();
    PCGameInputMapping_init(&this->base);
}

DesktopGameInputMapping* DesktopGameInputMapping_new(void) {
    DesktopGameInputMapping* this = java_object_alloc(sizeof(DesktopGameInputMapping), "DesktopGameInputMapping");
    DesktopGameInputMapping_init(this);
    return this;
}


InputToGameKeyMapping* DesktopGameInputMapping_getDefault(DesktopGameInputMapping* this) {
        return PersistentInputMapping_getInputMapping(DesktopDefaultGameInputMapping_new());
}

