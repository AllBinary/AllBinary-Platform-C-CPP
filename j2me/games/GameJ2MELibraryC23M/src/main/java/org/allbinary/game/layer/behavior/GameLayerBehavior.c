// Generated Code Do Not Modify
#include "org/allbinary/game/layer/behavior/GameLayerBehavior.h"



void GameLayerBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameLayerBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameLayerBehavior", nullptr);
}

void GameLayerBehavior_init(GameLayerBehavior* this) {
    GameLayerBehavior_register();
}

GameLayerBehavior* GameLayerBehavior_new(void) {
    GameLayerBehavior* this = java_object_alloc(sizeof(GameLayerBehavior), "GameLayerBehavior");
    GameLayerBehavior_init(this);
    return this;
}

