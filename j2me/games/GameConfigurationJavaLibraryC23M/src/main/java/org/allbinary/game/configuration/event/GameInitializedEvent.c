// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/event/GameInitializedEvent.h"
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#if __has_include("org/allbinary/game/resource/ResourceLoadingLevelFactory.h")
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#endif
#if __has_include("org/allbinary/game/resource/ResourceLoadingLevelFactory.h")
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#endif








void GameInitializedEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInitializedEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInitializedEvent", "AllBinaryEventObject");
    java_register_method("GameInitializedEvent", "setLevel", (void*) GameInitializedEvent_setLevel);
    java_register_method("GameInitializedEvent", "getLevel", (void*) GameInitializedEvent_getLevel);
    java_register_method("GameInitializedEvent", "setResourceLoadingLevel", (void*) GameInitializedEvent_setResourceLoadingLevel);
    java_register_method("GameInitializedEvent", "getResourceLoadingLevel", (void*) GameInitializedEvent_getResourceLoadingLevel);
}

static void GameInitializedEvent_initFields(GameInitializedEvent* this) {
    this->resourceLoadingLevel = ResourceLoadingLevelFactory_getInstance()->LEVEL;
    this->level = 0;
}


void GameInitializedEvent_init(GameInitializedEvent* this, void* anyType) {
    GameInitializedEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        GameInitializedEvent_initFields(this);
}

GameInitializedEvent* GameInitializedEvent_new(void* anyType) {
    GameInitializedEvent* this = java_object_alloc(sizeof(GameInitializedEvent), "GameInitializedEvent");
    GameInitializedEvent_init(this, anyType);
    return this;
}


void GameInitializedEvent_setLevel(GameInitializedEvent* this, int32_t level) {
        this->level = level;
        this->resourceLoadingLevel = ResourceLoadingLevelFactory_getInstance()->LEVEL;
}


int32_t GameInitializedEvent_getLevel(GameInitializedEvent* this) {
        return this->level;
}


void GameInitializedEvent_setResourceLoadingLevel(GameInitializedEvent* this, ResourceLoadingLevel* resourceLoadingLevel) {
        this->resourceLoadingLevel = resourceLoadingLevel;
        this->level = ResourceLoadingLevel_getLevel(this->resourceLoadingLevel);
}


ResourceLoadingLevel* GameInitializedEvent_getResourceLoadingLevel(GameInitializedEvent* this) {
        return this->resourceLoadingLevel;
}

