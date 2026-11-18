// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialLeftGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialLeftGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialLeftGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialLeftGameInputProcessor", "processEvent", (void*) SpecialLeftGameInputProcessor_processEvent);
}


void SpecialLeftGameInputProcessor_init(SpecialLeftGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialLeftGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialLeftGameInputProcessor* SpecialLeftGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialLeftGameInputProcessor* this = java_object_alloc(sizeof(SpecialLeftGameInputProcessor), "SpecialLeftGameInputProcessor");
    SpecialLeftGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialLeftGameInputProcessor_processEvent(SpecialLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_left(this->base.collidableDestroyableDamageableLayer);
}

