// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialAnalogDownGameInputProcessor.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"





void SpecialAnalogDownGameInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialAnalogDownGameInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialAnalogDownGameInputProcessor", "SpecialGameInputProcessor");
    java_register_method("SpecialAnalogDownGameInputProcessor", "processAnalog", (void*) SpecialAnalogDownGameInputProcessor_processAnalog);
}


void SpecialAnalogDownGameInputProcessor_init(SpecialAnalogDownGameInputProcessor* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogDownGameInputProcessor_register();
        SpecialGameInputProcessor_init(&this->base, collidableDestroyableDamageableLayer);
}

SpecialAnalogDownGameInputProcessor* SpecialAnalogDownGameInputProcessor_new(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
    SpecialAnalogDownGameInputProcessor* this = java_object_alloc(sizeof(SpecialAnalogDownGameInputProcessor), "SpecialAnalogDownGameInputProcessor");
    SpecialAnalogDownGameInputProcessor_init(this, collidableDestroyableDamageableLayer);
    return this;
}


// throws Exception
void SpecialAnalogDownGameInputProcessor_processAnalog(SpecialAnalogDownGameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t yAnalogValue) {
        CollidableDestroyableDamageableLayer_downAnalog(this->base.collidableDestroyableDamageableLayer, yAnalogValue);
}

