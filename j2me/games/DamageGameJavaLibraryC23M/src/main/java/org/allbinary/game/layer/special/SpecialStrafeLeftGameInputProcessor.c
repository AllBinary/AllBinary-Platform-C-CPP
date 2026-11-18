// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialStrafeLeftGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialStrafeLeftGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialStrafeLeftGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialStrafeLeftGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialStrafeLeftGameInputProcessor", "processEvent", (void*) SpecialStrafeLeftGameInputProcessor_processEvent);
}


void SpecialStrafeLeftGameInputProcessor_init(SpecialStrafeLeftGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialStrafeLeftGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialStrafeLeftGameInputProcessor* SpecialStrafeLeftGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialStrafeLeftGameInputProcessor* this = java_object_alloc(sizeof(SpecialStrafeLeftGameInputProcessor), "SpecialStrafeLeftGameInputProcessor");
    SpecialStrafeLeftGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialStrafeLeftGameInputProcessor_processEvent(SpecialStrafeLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_strafeLeft(this->base.collidableDestroyableDamageableLayer);
}

