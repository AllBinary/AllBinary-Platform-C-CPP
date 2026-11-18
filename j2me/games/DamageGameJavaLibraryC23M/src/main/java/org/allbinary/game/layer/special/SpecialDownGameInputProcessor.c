// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialDownGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialDownGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialDownGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialDownGameInputProcessor", "processEvent", (void*) SpecialDownGameInputProcessor_processEvent);
}


void SpecialDownGameInputProcessor_init(SpecialDownGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialDownGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialDownGameInputProcessor* SpecialDownGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialDownGameInputProcessor* this = java_object_alloc(sizeof(SpecialDownGameInputProcessor), "SpecialDownGameInputProcessor");
    SpecialDownGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialDownGameInputProcessor_processEvent(SpecialDownGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_down(this->base.collidableDestroyableDamageableLayer);
}

