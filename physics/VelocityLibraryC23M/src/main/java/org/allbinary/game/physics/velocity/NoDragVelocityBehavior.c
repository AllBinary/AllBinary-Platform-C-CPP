// Generated Code Do Not Modify
#include "org/allbinary/game/physics/velocity/NoDragVelocityBehavior.h"
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"


NoDragVelocityBehavior* NoDragVelocityBehavior_instance;

void NoDragVelocityBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoDragVelocityBehavior_instance = NoDragVelocityBehavior_new();
}

void NoDragVelocityBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoDragVelocityBehavior", "VelocityBehaviorBase");
}

void NoDragVelocityBehavior_init(NoDragVelocityBehavior* this) {
    NoDragVelocityBehavior_register();
    VelocityBehaviorBase_init(&this->base);
}

NoDragVelocityBehavior* NoDragVelocityBehavior_new(void) {
    NoDragVelocityBehavior* this = java_object_alloc(sizeof(NoDragVelocityBehavior), "NoDragVelocityBehavior");
    NoDragVelocityBehavior_init(this);
    return this;
}

