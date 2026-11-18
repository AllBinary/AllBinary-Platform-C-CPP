// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameKeyUtil.h"
#include "javax/microedition/lcdui/Canvas.h"


static GameKeyUtil* GameKeyUtil_instance;



void GameKeyUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKeyUtil_instance = GameKeyUtil_new();
}

void GameKeyUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyUtil", nullptr);
    java_register_method("GameKeyUtil", "isDirectionKey", (void*) GameKeyUtil_isDirectionKey);
}

void GameKeyUtil_init(GameKeyUtil* this) {
    GameKeyUtil_register();
}

GameKeyUtil* GameKeyUtil_new(void) {
    GameKeyUtil* this = java_object_alloc(sizeof(GameKeyUtil), "GameKeyUtil");
    GameKeyUtil_init(this);
    return this;
}


bool GameKeyUtil_isDirectionKey(GameKeyUtil* this, int32_t key) {
        if (key == (Canvas_staticInit(), Canvas_UP) || key == (Canvas_staticInit(), Canvas_DOWN) || key == (Canvas_staticInit(), Canvas_LEFT) || key == (Canvas_staticInit(), Canvas_RIGHT)) {
            return true;
        } else {
            return false;
        }
}


GameKeyUtil* GameKeyUtil_getInstance(void) {
        return (GameKeyUtil_staticInit(), GameKeyUtil_instance);
}

