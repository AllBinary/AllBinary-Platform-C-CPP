// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special4GameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void Special4GameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special4GameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special4GameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("Special4GameInputProcessor", "processEvent", (void*) Special4GameInputProcessor_processEvent);
}


void Special4GameInputProcessor_init(Special4GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special4GameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special4GameInputProcessor* Special4GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special4GameInputProcessor* this = java_object_alloc(sizeof(Special4GameInputProcessor), "Special4GameInputProcessor");
    Special4GameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special4GameInputProcessor_processEvent(Special4GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_special4(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent);
}

