// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialFireGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialFireGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialFireGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialFireGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialFireGameInputProcessor", "processEvent", (void*) SpecialFireGameInputProcessor_processEvent);
}


void SpecialFireGameInputProcessor_init(SpecialFireGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialFireGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialFireGameInputProcessor* SpecialFireGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialFireGameInputProcessor* this = java_object_alloc(sizeof(SpecialFireGameInputProcessor), "SpecialFireGameInputProcessor");
    SpecialFireGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialFireGameInputProcessor_processEvent(SpecialFireGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_fire(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent);
}

