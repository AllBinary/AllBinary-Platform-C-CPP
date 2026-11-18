// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/GameInputMapping.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif




static void GameInputMapping_setGameKey(GameInputMapping* this, GameKey* gameKey);


static void GameInputMapping_setName(GameInputMapping* this, const char* name);


void GameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInputMapping", nullptr);
    java_register_method("GameInputMapping", "setGameKey", (void*) GameInputMapping_setGameKey);
    java_register_method("GameInputMapping", "getGameKey", (void*) GameInputMapping_getGameKey);
    java_register_method("GameInputMapping", "setName", (void*) GameInputMapping_setName);
    java_register_method("GameInputMapping", "getName", (void*) GameInputMapping_getName);
}

static void GameInputMapping_initFields(GameInputMapping* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->gameKey = (GameKey_staticInit(), GameKey_NULL_GAME_KEY);
}


void GameInputMapping_init(GameInputMapping* this, const char* name, GameKey* gameKey) {
    GameInputMapping_register();
    GameInputMapping_initFields(this);
        GameInputMapping_setName(this, name);
        GameInputMapping_setGameKey(this, gameKey);
}

GameInputMapping* GameInputMapping_new(const char* name, GameKey* gameKey) {
    GameInputMapping* this = java_object_alloc(sizeof(GameInputMapping), "GameInputMapping");
    GameInputMapping_init(this, name, gameKey);
    return this;
}


static void GameInputMapping_setGameKey(GameInputMapping* this, GameKey* gameKey) {
        this->gameKey = gameKey;
}


GameKey* GameInputMapping_getGameKey(GameInputMapping* this) {
        return this->gameKey;
}


static void GameInputMapping_setName(GameInputMapping* this, const char* name) {
        this->name = name;
}


const char* GameInputMapping_getName(GameInputMapping* this) {
        return this->name;
}

