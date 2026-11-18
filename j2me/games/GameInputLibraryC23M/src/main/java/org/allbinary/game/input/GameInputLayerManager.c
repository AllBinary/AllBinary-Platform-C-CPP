// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameInputLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void GameInputLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInputLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputLayerManager", "LayerManager");
}


void GameInputLayerManager_init(GameInputLayerManager* this) {
    GameInputLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

GameInputLayerManager* GameInputLayerManager_new(void) {
    GameInputLayerManager* this = java_object_alloc(sizeof(GameInputLayerManager), "GameInputLayerManager");
    GameInputLayerManager_init(this);
    return this;
}

