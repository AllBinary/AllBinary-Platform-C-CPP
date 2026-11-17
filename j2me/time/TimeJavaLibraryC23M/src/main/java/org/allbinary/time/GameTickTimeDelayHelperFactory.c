// Generated Code Do Not Modify
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"


static GameTickTimeDelayHelper* GameTickTimeDelayHelperFactory_instance;



void GameTickTimeDelayHelperFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameTickTimeDelayHelperFactory_instance = GameTickTimeDelayHelper_new(-1);
}

void GameTickTimeDelayHelperFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameTickTimeDelayHelperFactory", nullptr);
}


GameTickTimeDelayHelper* GameTickTimeDelayHelperFactory_getInstance(void) {
        return (GameTickTimeDelayHelperFactory_staticInit(), GameTickTimeDelayHelperFactory_instance);
}


void GameTickTimeDelayHelperFactory_init(GameTickTimeDelayHelperFactory* this) {
    GameTickTimeDelayHelperFactory_register();
}

GameTickTimeDelayHelperFactory* GameTickTimeDelayHelperFactory_new(void) {
    GameTickTimeDelayHelperFactory* this = java_object_alloc(sizeof(GameTickTimeDelayHelperFactory), "GameTickTimeDelayHelperFactory");
    GameTickTimeDelayHelperFactory_init(this);
    return this;
}

