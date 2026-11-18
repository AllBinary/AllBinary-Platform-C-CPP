// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"




void SpecialGameInputInterfaceProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialGameInputInterfaceProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialGameInputInterfaceProcessor", "GameInputProcessor");
}

static void SpecialGameInputInterfaceProcessor_initFields(SpecialGameInputInterfaceProcessor* this) {
    
}


void SpecialGameInputInterfaceProcessor_init(SpecialGameInputInterfaceProcessor* this, SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialGameInputInterfaceProcessor_register();
    GameInputProcessor_init(&this->base);
    SpecialGameInputInterfaceProcessor_initFields(this);
        this->specialGameInputInterface = collidableDestroyableDamageableLayer;
}

SpecialGameInputInterfaceProcessor* SpecialGameInputInterfaceProcessor_new(SpecialGameInputInterface* collidableDestroyableDamageableLayer) {
    SpecialGameInputInterfaceProcessor* this = java_object_alloc(sizeof(SpecialGameInputInterfaceProcessor), "SpecialGameInputInterfaceProcessor");
    SpecialGameInputInterfaceProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}

