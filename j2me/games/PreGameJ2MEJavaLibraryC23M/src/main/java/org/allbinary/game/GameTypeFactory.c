// Generated Code Do Not Modify
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/GameType.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static GameTypeFactory* GameTypeFactory_instance;


void GameTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameTypeFactory_instance = GameTypeFactory_new();
}

void GameTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameTypeFactory", nullptr);
}

static void GameTypeFactory_initFields(GameTypeFactory* this) {
    this->NULL_GAME_TYPE_ARRAY = ((GameType**) java_array_new(sizeof(GameType*), 0));
    this->NONE = GameType_new(StringUtil_getInstance()->NULL_STRING);
    this->SINGLE_PLAYER = GameType_new("Single Player");
    this->MULTI_PLAYER = GameType_new("Multi Player");
    this->BOT = GameType_new("Artificial Player");
}

void GameTypeFactory_init(GameTypeFactory* this) {
    GameTypeFactory_register();
    GameTypeFactory_initFields(this);
}

GameTypeFactory* GameTypeFactory_new(void) {
    GameTypeFactory* this = java_object_alloc(sizeof(GameTypeFactory), "GameTypeFactory");
    GameTypeFactory_init(this);
    return this;
}


GameTypeFactory* GameTypeFactory_getInstance(void) {
        return (GameTypeFactory_staticInit(), GameTypeFactory_instance);
}

