// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"




void SpecialGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialGameInputProcessor", "GameInputProcessor");
}

static void SpecialGameInputProcessor_initFields(SpecialGameInputProcessor* this) {
    
}


void SpecialGameInputProcessor_init(SpecialGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialGameInputProcessor_register();
    GameInputProcessor_init(&this->base);
    SpecialGameInputProcessor_initFields(this);
        this->collidableDestroyableDamageableLayer = collidableDestroyableDamageableLayer;
}

SpecialGameInputProcessor* SpecialGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialGameInputProcessor* this = java_object_alloc(sizeof(SpecialGameInputProcessor), "SpecialGameInputProcessor");
    SpecialGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}

