// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/SpinnerAIFactory.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/SpinnerAI.h"




void SpinnerAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpinnerAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpinnerAIFactory", nullptr);
    java_register_method("SpinnerAIFactory", "getInstance", (void*) SpinnerAIFactory_getInstance);
}

void SpinnerAIFactory_init(SpinnerAIFactory* this) {
    SpinnerAIFactory_register();
}

SpinnerAIFactory* SpinnerAIFactory_new(void) {
    SpinnerAIFactory* this = java_object_alloc(sizeof(SpinnerAIFactory), "SpinnerAIFactory");
    SpinnerAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* SpinnerAIFactory_getInstance(SpinnerAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        int32_t* direction = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ (Canvas_staticInit(), Canvas_LEFT) }) / sizeof(int32_t), (int32_t[]){ (Canvas_staticInit(), Canvas_LEFT) }));
        return SpinnerAI_new(direction, ownerLayerInterface, gameInput);
}

