// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/event/ChangedGameFeatureListener.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#include "org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h"


static ChangedGameFeatureListener* ChangedGameFeatureListener_gameFeatureListener;



void ChangedGameFeatureListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ChangedGameFeatureListener_gameFeatureListener = ChangedGameFeatureListener_new();
}

void ChangedGameFeatureListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ChangedGameFeatureListener", "BaseChangedGameFeatureListener");
    java_register_method("ChangedGameFeatureListener", "isChangedGameConfiguration", (void*) ChangedGameFeatureListener_isChangedGameConfiguration);
}

void ChangedGameFeatureListener_init(ChangedGameFeatureListener* this) {
    ChangedGameFeatureListener_register();
    BaseChangedGameFeatureListener_init(&this->base);
}

ChangedGameFeatureListener* ChangedGameFeatureListener_new(void) {
    ChangedGameFeatureListener* this = java_object_alloc(sizeof(ChangedGameFeatureListener), "ChangedGameFeatureListener");
    ChangedGameFeatureListener_init(this);
    return this;
}


ChangedGameFeatureListener* ChangedGameFeatureListener_getInstance(void) {
        return (ChangedGameFeatureListener_staticInit(), ChangedGameFeatureListener_gameFeatureListener);
}


bool ChangedGameFeatureListener_isChangedGameConfiguration(ChangedGameFeatureListener* this, GameConfiguration* gameConfiguration) {
        return BasicArrayList_contains(this->base.list, gameConfiguration);
}

