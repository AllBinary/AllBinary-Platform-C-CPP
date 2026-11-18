// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special5GameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void Special5GameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special5GameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special5GameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("Special5GameInputProcessor", "processEvent", (void*) Special5GameInputProcessor_processEvent);
}


void Special5GameInputProcessor_init(Special5GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special5GameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special5GameInputProcessor* Special5GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special5GameInputProcessor* this = java_object_alloc(sizeof(Special5GameInputProcessor), "Special5GameInputProcessor");
    Special5GameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special5GameInputProcessor_processEvent(Special5GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_special5(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent);
}

