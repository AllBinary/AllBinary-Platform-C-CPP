// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialAnalogRightGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialAnalogRightGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialAnalogRightGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialAnalogRightGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialAnalogRightGameInputProcessor", "processAnalog", (void*) SpecialAnalogRightGameInputProcessor_processAnalog);
}


void SpecialAnalogRightGameInputProcessor_init(SpecialAnalogRightGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogRightGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogRightGameInputProcessor* SpecialAnalogRightGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogRightGameInputProcessor* this = java_object_alloc(sizeof(SpecialAnalogRightGameInputProcessor), "SpecialAnalogRightGameInputProcessor");
    SpecialAnalogRightGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogRightGameInputProcessor_processAnalog(SpecialAnalogRightGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) {
        CollidableDestroyableDamageableLayer_rightAnalog(this->base.collidableDestroyableDamageableLayer, xAnalogValue);
}

