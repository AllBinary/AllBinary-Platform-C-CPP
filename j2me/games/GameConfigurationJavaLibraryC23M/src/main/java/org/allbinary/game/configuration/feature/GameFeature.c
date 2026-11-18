// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"




void GameFeature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameFeature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeature", "Feature");
}


void GameFeature_init(GameFeature* this, const char* name) {
    GameFeature_register();
        Feature_init(&this->base, name);
}

GameFeature* GameFeature_new(const char* name) {
    GameFeature* this = java_object_alloc(sizeof(GameFeature), "GameFeature");
    GameFeature_init(this, name);
    return this;
}

