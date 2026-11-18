// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialUpGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialUpGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialUpGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialUpGameInputProcessor", "processEvent", (void*) SpecialUpGameInputProcessor_processEvent);
}


void SpecialUpGameInputProcessor_init(SpecialUpGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialUpGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialUpGameInputProcessor* SpecialUpGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialUpGameInputProcessor* this = java_object_alloc(sizeof(SpecialUpGameInputProcessor), "SpecialUpGameInputProcessor");
    SpecialUpGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialUpGameInputProcessor_processEvent(SpecialUpGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_up(this->base.collidableDestroyableDamageableLayer);
}

