// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialStrafeRightGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialStrafeRightGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialStrafeRightGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialStrafeRightGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialStrafeRightGameInputProcessor", "processEvent", (void*) SpecialStrafeRightGameInputProcessor_processEvent);
}


void SpecialStrafeRightGameInputProcessor_init(SpecialStrafeRightGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialStrafeRightGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialStrafeRightGameInputProcessor* SpecialStrafeRightGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialStrafeRightGameInputProcessor* this = java_object_alloc(sizeof(SpecialStrafeRightGameInputProcessor), "SpecialStrafeRightGameInputProcessor");
    SpecialStrafeRightGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialStrafeRightGameInputProcessor_processEvent(SpecialStrafeRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_strafeRight(this->base.collidableDestroyableDamageableLayer);
}

