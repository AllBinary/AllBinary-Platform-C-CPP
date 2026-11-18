// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special3GameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void Special3GameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special3GameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special3GameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("Special3GameInputProcessor", "processEvent", (void*) Special3GameInputProcessor_processEvent);
}


void Special3GameInputProcessor_init(Special3GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special3GameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special3GameInputProcessor* Special3GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special3GameInputProcessor* this = java_object_alloc(sizeof(Special3GameInputProcessor), "Special3GameInputProcessor");
    Special3GameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special3GameInputProcessor_processEvent(Special3GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_special3(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent);
}

