// Generated Code Do Not Modify
#include "org/allbinary/game/GameType.h"





void GameType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameType", nullptr);
    java_register_method("GameType", "toString", (void*) GameType_toString);
}

static void GameType_initFields(GameType* this) {
    
}


void GameType_init(GameType* this, const char* name) {
    GameType_register();
    GameType_initFields(this);
        this->name = name;
}

GameType* GameType_new(const char* name) {
    GameType* this = java_object_alloc(sizeof(GameType), "GameType");
    GameType_init(this, name);
    return this;
}


const char* GameType_toString(GameType* this) {
        return this->name;
}

