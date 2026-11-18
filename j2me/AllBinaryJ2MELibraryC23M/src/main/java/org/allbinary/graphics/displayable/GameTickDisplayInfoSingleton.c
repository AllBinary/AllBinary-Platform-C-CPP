// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"


static GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_instance;







void GameTickDisplayInfoSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameTickDisplayInfoSingleton_instance = GameTickDisplayInfoSingleton_new();
}

void GameTickDisplayInfoSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameTickDisplayInfoSingleton", nullptr);
    java_register_method("GameTickDisplayInfoSingleton", "update", (void*) GameTickDisplayInfoSingleton_update);
    java_register_method("GameTickDisplayInfoSingleton", "getLastWidth", (void*) GameTickDisplayInfoSingleton_getLastWidth);
    java_register_method("GameTickDisplayInfoSingleton", "getLastHeight", (void*) GameTickDisplayInfoSingleton_getLastHeight);
    java_register_method("GameTickDisplayInfoSingleton", "getLastHalfWidth", (void*) GameTickDisplayInfoSingleton_getLastHalfWidth);
    java_register_method("GameTickDisplayInfoSingleton", "getLastHalfHeight", (void*) GameTickDisplayInfoSingleton_getLastHalfHeight);
}

static void GameTickDisplayInfoSingleton_initFields(GameTickDisplayInfoSingleton* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->lastWidth = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
    this->lastHeight = DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton);
    this->lastHalfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton);
    this->lastHalfHeight = DisplayInfoSingleton_getLastHalfHeight(this->displayInfoSingleton);
}

void GameTickDisplayInfoSingleton_init(GameTickDisplayInfoSingleton* this) {
    GameTickDisplayInfoSingleton_register();
    GameTickDisplayInfoSingleton_initFields(this);
}

GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_new(void) {
    GameTickDisplayInfoSingleton* this = java_object_alloc(sizeof(GameTickDisplayInfoSingleton), "GameTickDisplayInfoSingleton");
    GameTickDisplayInfoSingleton_init(this);
    return this;
}


GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_getInstance(void) {
        return (GameTickDisplayInfoSingleton_staticInit(), GameTickDisplayInfoSingleton_instance);
}


void GameTickDisplayInfoSingleton_update(GameTickDisplayInfoSingleton* this) {
        this->lastWidth = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
        this->lastHeight = DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton);
        this->lastHalfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton);
        this->lastHalfHeight = DisplayInfoSingleton_getLastHalfHeight(this->displayInfoSingleton);
}


int32_t GameTickDisplayInfoSingleton_getLastWidth(GameTickDisplayInfoSingleton* this) {
        return this->lastWidth;
}


int32_t GameTickDisplayInfoSingleton_getLastHeight(GameTickDisplayInfoSingleton* this) {
        return this->lastHeight;
}


int32_t GameTickDisplayInfoSingleton_getLastHalfWidth(GameTickDisplayInfoSingleton* this) {
        return this->lastHalfWidth;
}


int32_t GameTickDisplayInfoSingleton_getLastHalfHeight(GameTickDisplayInfoSingleton* this) {
        return this->lastHalfHeight;
}

