// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/Special2GameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void Special2GameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Special2GameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Special2GameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("Special2GameInputProcessor", "processEvent", (void*) Special2GameInputProcessor_processEvent);
}


void Special2GameInputProcessor_init(Special2GameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special2GameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

Special2GameInputProcessor* Special2GameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    Special2GameInputProcessor* this = java_object_alloc(sizeof(Special2GameInputProcessor), "Special2GameInputProcessor");
    Special2GameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void Special2GameInputProcessor_processEvent(Special2GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
        CollidableDestroyableDamageableLayer_special2(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent);
}

