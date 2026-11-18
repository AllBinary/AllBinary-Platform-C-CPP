// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialAnalogRightTriggerGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialAnalogRightTriggerGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialAnalogRightTriggerGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialAnalogRightTriggerGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialAnalogRightTriggerGameInputProcessor", "processAnalog", (void*) SpecialAnalogRightTriggerGameInputProcessor_processAnalog);
}


void SpecialAnalogRightTriggerGameInputProcessor_init(SpecialAnalogRightTriggerGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogRightTriggerGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogRightTriggerGameInputProcessor* SpecialAnalogRightTriggerGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogRightTriggerGameInputProcessor* this = java_object_alloc(sizeof(SpecialAnalogRightTriggerGameInputProcessor), "SpecialAnalogRightTriggerGameInputProcessor");
    SpecialAnalogRightTriggerGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogRightTriggerGameInputProcessor_processAnalog(SpecialAnalogRightTriggerGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue) {
        CollidableDestroyableDamageableLayer_rightTrigger(this->base.collidableDestroyableDamageableLayer, allbinaryLayerManager, gameKeyEvent, yAnalogValue);
}

