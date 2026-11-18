// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameKeyMappingFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* GameKeyMappingFactory_instance;




static void GameKeyMappingFactory_setGameKey(GameKeyMappingFactory* this, GameKey* gameKey);

void GameKeyMappingFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKeyMappingFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void GameKeyMappingFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyMappingFactory", nullptr);
    java_register_method("GameKeyMappingFactory", "getGameKey", (void*) GameKeyMappingFactory_getGameKey);
    java_register_method("GameKeyMappingFactory", "setGameKey", (void*) GameKeyMappingFactory_setGameKey);
}

static void GameKeyMappingFactory_initFields(GameKeyMappingFactory* this) {
    this->intKeyToGameKey = ((GameKey**) java_array_new(sizeof(GameKey*), InputFactory_getInstance()->MAX));
}


GameKeyMappingFactory* GameKeyMappingFactory_getInstance(void) {
        if ((GameKeyMappingFactory_staticInit(), GameKeyMappingFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            GameKeyMappingFactory_instance = GameKeyMappingFactory_new();
        }
        return ((GameKeyMappingFactory*) (GameKeyMappingFactory_staticInit(), GameKeyMappingFactory_instance));
}


void GameKeyMappingFactory_init(GameKeyMappingFactory* this) {
    GameKeyMappingFactory_register();
    GameKeyMappingFactory_initFields(this);
        GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->NONE);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->UP);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->DOWN);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->LEFT);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->RIGHT);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_POUND);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_STAR);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM0);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM1);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM2);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM3);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM4);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM5);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM6);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM7);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM8);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM9);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_A);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_B);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_C);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_D);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->FIRE);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->LEVEL_DOWN);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->LEVEL_UP);
}

GameKeyMappingFactory* GameKeyMappingFactory_new(void) {
    GameKeyMappingFactory* this = java_object_alloc(sizeof(GameKeyMappingFactory), "GameKeyMappingFactory");
    GameKeyMappingFactory_init(this);
    return this;
}


GameKey* GameKeyMappingFactory_getGameKey(GameKeyMappingFactory* this, int32_t key) {
        return this->intKeyToGameKey[key];
}


static void GameKeyMappingFactory_setGameKey(GameKeyMappingFactory* this, GameKey* gameKey) {
        this->intKeyToGameKey[Input_getId(gameKey)] = gameKey;
}

