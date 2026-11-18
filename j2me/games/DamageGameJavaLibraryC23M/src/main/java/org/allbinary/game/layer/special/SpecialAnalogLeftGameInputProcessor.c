// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialAnalogLeftGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialAnalogLeftGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialAnalogLeftGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialAnalogLeftGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialAnalogLeftGameInputProcessor", "processAnalog", (void*) SpecialAnalogLeftGameInputProcessor_processAnalog);
}


void SpecialAnalogLeftGameInputProcessor_init(SpecialAnalogLeftGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogLeftGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogLeftGameInputProcessor* SpecialAnalogLeftGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogLeftGameInputProcessor* this = java_object_alloc(sizeof(SpecialAnalogLeftGameInputProcessor), "SpecialAnalogLeftGameInputProcessor");
    SpecialAnalogLeftGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogLeftGameInputProcessor_processAnalog(SpecialAnalogLeftGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) {
        CollidableDestroyableDamageableLayer_leftAnalog(this->base.collidableDestroyableDamageableLayer, xAnalogValue);
}

