// Generated Code Do Not Modify
#include "org/allbinary/game/GameMode.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


GameMode* GameMode_NONE;
GameMode* GameMode_SERVER;
GameMode* GameMode_CLIENT;


static void GameMode_setName(GameMode* this, const char* name);



void GameMode_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameMode_NONE = GameMode_new(StringUtil_getInstance()->NULL_STRING);
    GameMode_SERVER = GameMode_new("Server");
    GameMode_CLIENT = GameMode_new("Client");
}

void GameMode_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameMode", nullptr);
    java_register_method("GameMode", "setName", (void*) GameMode_setName);
    java_register_method("GameMode", "getName", (void*) GameMode_getName);
    java_register_method("GameMode", "toString", (void*) GameMode_toString);
}

static void GameMode_initFields(GameMode* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void GameMode_init(GameMode* this, const char* name) {
    GameMode_register();
    GameMode_initFields(this);
        GameMode_setName(this, name);
}

GameMode* GameMode_new(const char* name) {
    GameMode* this = java_object_alloc(sizeof(GameMode), "GameMode");
    GameMode_init(this, name);
    return this;
}


static void GameMode_setName(GameMode* this, const char* name) {
        this->name = name;
}


const char* GameMode_getName(GameMode* this) {
        return this->name;
}


const char* GameMode_toString(GameMode* this) {
        return GameMode_getName(this);
}

