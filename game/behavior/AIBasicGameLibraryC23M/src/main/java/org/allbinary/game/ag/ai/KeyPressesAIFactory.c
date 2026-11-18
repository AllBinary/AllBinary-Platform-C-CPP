// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/KeyPressesAIFactory.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/MultiKeyPressesAI.h"
#include "org/allbinary/game/ag/ai/KeyPressesAI.h"
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif




void KeyPressesAIFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KeyPressesAIFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeyPressesAIFactory", nullptr);
    java_register_method("KeyPressesAIFactory", "getInstance", (void*) KeyPressesAIFactory_getInstance);
}

void KeyPressesAIFactory_init(KeyPressesAIFactory* this) {
    KeyPressesAIFactory_register();
}

KeyPressesAIFactory* KeyPressesAIFactory_new(void) {
    KeyPressesAIFactory* this = java_object_alloc(sizeof(KeyPressesAIFactory), "KeyPressesAIFactory");
    KeyPressesAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* KeyPressesAIFactory_getInstance(KeyPressesAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        bool isSingleKeyProcessing = InputFeatureFactory_isSingleKeyProcessing(InputFeatureFactory_getInstance());
        if (isSingleKeyProcessing) {
            return KeyPressesAI_new(hashtable, ownerLayerInterface, gameInput);
        } else {
            return MultiKeyPressesAI_new(hashtable, ownerLayerInterface, gameInput);
        }
}

