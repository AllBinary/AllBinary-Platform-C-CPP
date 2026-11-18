// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialAnalogLeftTriggerGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialAnalogLeftTriggerGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialAnalogLeftTriggerGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialAnalogLeftTriggerGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialAnalogLeftTriggerGameInputProcessor", "processAnalog", (void*) SpecialAnalogLeftTriggerGameInputProcessor_processAnalog);
}


void SpecialAnalogLeftTriggerGameInputProcessor_init(SpecialAnalogLeftTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogLeftTriggerGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogLeftTriggerGameInputProcessor* SpecialAnalogLeftTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogLeftTriggerGameInputProcessor* this = java_object_alloc(sizeof(SpecialAnalogLeftTriggerGameInputProcessor), "SpecialAnalogLeftTriggerGameInputProcessor");
    SpecialAnalogLeftTriggerGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogLeftTriggerGameInputProcessor_processAnalog(SpecialAnalogLeftTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue) {
        CollidableDestroyableDamageableLayer_leftTrigger(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent, yAnalogValue);
}

