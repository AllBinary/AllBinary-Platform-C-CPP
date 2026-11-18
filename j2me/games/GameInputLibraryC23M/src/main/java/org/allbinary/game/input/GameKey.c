// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/Input.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


GameKey* GameKey_NULL_GAME_KEY;



void GameKey_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKey_NULL_GAME_KEY = GameKey_new(-1, StringUtil_getInstance()->NULL_STRING);
}

void GameKey_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKey", "Input");
    java_register_method("GameKey", "toString", (void*) GameKey_toString);
}


void GameKey_init(GameKey* this, int32_t key, const char* name) {
    GameKey_register();
        Input_init(&this->base, key, name);
}

GameKey* GameKey_new(int32_t key, const char* name) {
    GameKey* this = java_object_alloc(sizeof(GameKey), "GameKey");
    GameKey_init(this, key, name);
    return this;
}


const char* GameKey_toString(GameKey* this) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "GameKey "), Input_toString((&this->base))));
}

