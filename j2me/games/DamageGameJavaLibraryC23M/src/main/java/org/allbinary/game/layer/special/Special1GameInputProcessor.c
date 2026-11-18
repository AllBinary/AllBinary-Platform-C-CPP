// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special1GameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void Special1GameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special1GameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special1GameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("Special1GameInputProcessor", "processEvent", (void*) Special1GameInputProcessor_processEvent);
}


void Special1GameInputProcessor_init(Special1GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special1GameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special1GameInputProcessor* Special1GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special1GameInputProcessor* this = java_object_alloc(sizeof(Special1GameInputProcessor), "Special1GameInputProcessor");
    Special1GameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special1GameInputProcessor_processEvent(Special1GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_special1(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent);
}

