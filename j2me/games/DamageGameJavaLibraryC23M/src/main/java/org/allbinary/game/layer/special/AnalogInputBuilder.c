// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/AnalogInputBuilder.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h"
#include "org/allbinary/game/layer/special/Special1GameInputProcessor.h"
#include "org/allbinary/game/layer/special/Special3GameInputProcessor.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/special/SpecialAnalogUpGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogDownGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogRightGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogLeftGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogLeftTriggerGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialAnalogRightTriggerGameInputProcessor.h"


static AnalogInputBuilder* AnalogInputBuilder_instance;




void AnalogInputBuilder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnalogInputBuilder_instance = AnalogInputBuilder_new();
}

void AnalogInputBuilder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogInputBuilder", nullptr);
    java_register_method("AnalogInputBuilder", "disable", (void*) AnalogInputBuilder_disable);
    java_register_method("AnalogInputBuilder", "enable", (void*) AnalogInputBuilder_enable);
}

void AnalogInputBuilder_init(AnalogInputBuilder* this) {
    AnalogInputBuilder_register();
}

AnalogInputBuilder* AnalogInputBuilder_new(void) {
    AnalogInputBuilder* this = java_object_alloc(sizeof(AnalogInputBuilder), "AnalogInputBuilder");
    AnalogInputBuilder_init(this);
    return this;
}


AnalogInputBuilder* AnalogInputBuilder_getInstance(void) {
        return (AnalogInputBuilder_staticInit(), AnalogInputBuilder_instance);
}


void AnalogInputBuilder_disable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        inputProcessorArray[(Canvas_staticInit(), Canvas_UP)] = SpecialUpGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_DOWN)] = SpecialDownGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_RIGHT)] = SpecialRightGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_LEFT)] = SpecialLeftGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_KEY_NUM0)] = Special1GameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_KEY_NUM5)] = Special3GameInputProcessor_new(collidableDestroyableDamageableLayer);
}


void AnalogInputBuilder_enable(AnalogInputBuilder* this, GameInputProcessor** inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        inputProcessorArray[(Canvas_staticInit(), Canvas_UP)] = SpecialAnalogUpGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_DOWN)] = SpecialAnalogDownGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_RIGHT)] = SpecialAnalogRightGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_LEFT)] = SpecialAnalogLeftGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_KEY_NUM0)] = SpecialAnalogLeftTriggerGameInputProcessor_new(collidableDestroyableDamageableLayer);
        inputProcessorArray[(Canvas_staticInit(), Canvas_KEY_NUM5)] = SpecialAnalogRightTriggerGameInputProcessor_new(collidableDestroyableDamageableLayer);
}

