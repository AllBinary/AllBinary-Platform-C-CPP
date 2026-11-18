// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialAnalogUpGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialAnalogUpGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialAnalogUpGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialAnalogUpGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialAnalogUpGameInputProcessor", "processAnalog", (void*) SpecialAnalogUpGameInputProcessor_processAnalog);
}


void SpecialAnalogUpGameInputProcessor_init(SpecialAnalogUpGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogUpGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogUpGameInputProcessor* SpecialAnalogUpGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogUpGameInputProcessor* this = java_object_alloc(sizeof(SpecialAnalogUpGameInputProcessor), "SpecialAnalogUpGameInputProcessor");
    SpecialAnalogUpGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogUpGameInputProcessor_processAnalog(SpecialAnalogUpGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue) {
        CollidableDestroyableDamageableLayer_upAnalog(this->base.collidableDestroyableDamageableLayer, yAnalogValue);
}

