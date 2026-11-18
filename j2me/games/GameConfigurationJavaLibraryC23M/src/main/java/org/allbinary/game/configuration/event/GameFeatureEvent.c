// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"






void GameFeatureEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameFeatureEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureEvent", "AllBinaryEventObject");
    java_register_method("GameFeatureEvent", "getWhatChanged", (void*) GameFeatureEvent_getWhatChanged);
    java_register_method("GameFeatureEvent", "getGameOption", (void*) GameFeatureEvent_getGameOption);
}

static void GameFeatureEvent_initFields(GameFeatureEvent* this) {
    
}


void GameFeatureEvent_init(GameFeatureEvent* this, void* anyType, const char* whatChanged) {
    GameFeatureEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        GameFeatureEvent_initFields(this);
        this->whatChanged = whatChanged;
}

GameFeatureEvent* GameFeatureEvent_new(void* anyType, const char* whatChanged) {
    GameFeatureEvent* this = java_object_alloc(sizeof(GameFeatureEvent), "GameFeatureEvent");
    GameFeatureEvent_init(this, anyType, whatChanged);
    return this;
}


const char* GameFeatureEvent_getWhatChanged(GameFeatureEvent* this) {
        return this->whatChanged;
}


void* GameFeatureEvent_getGameOption(GameFeatureEvent* this) {
        return AllBinaryEventObject_getSource(this);
}

