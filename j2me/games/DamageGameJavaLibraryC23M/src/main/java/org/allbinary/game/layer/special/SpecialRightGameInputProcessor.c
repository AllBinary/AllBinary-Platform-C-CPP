// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialRightGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialRightGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialRightGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialRightGameInputProcessor", "processEvent", (void*) SpecialRightGameInputProcessor_processEvent);
}


void SpecialRightGameInputProcessor_init(SpecialRightGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialRightGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialRightGameInputProcessor* SpecialRightGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialRightGameInputProcessor* this = java_object_alloc(sizeof(SpecialRightGameInputProcessor), "SpecialRightGameInputProcessor");
    SpecialRightGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialRightGameInputProcessor_processEvent(SpecialRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_right(this->base.collidableDestroyableDamageableLayer);
}

