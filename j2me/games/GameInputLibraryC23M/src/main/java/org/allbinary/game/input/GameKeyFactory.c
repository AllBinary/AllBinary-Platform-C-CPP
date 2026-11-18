// Generated Code Do Not Modify
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/InputFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif


static void* GameKeyFactory_instance;


void GameKeyFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameKeyFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void GameKeyFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameKeyFactory", nullptr);
}

static void GameKeyFactory_initFields(GameKeyFactory* this) {
    this->NONE = GameKey_new(InputFactory_getInstance()->MAX - 1, "None");
    this->UP = GameKey_new((Canvas_staticInit(), Canvas_UP), CommonPhoneStrings_getInstance()->UP);
    this->DOWN = GameKey_new((Canvas_staticInit(), Canvas_DOWN), CommonPhoneStrings_getInstance()->DOWN);
    this->LEFT = GameKey_new((Canvas_staticInit(), Canvas_LEFT), CommonPhoneStrings_getInstance()->LEFT);
    this->RIGHT = GameKey_new((Canvas_staticInit(), Canvas_RIGHT), CommonPhoneStrings_getInstance()->RIGHT);
    this->KEY_POUND = GameKey_new((Canvas_staticInit(), Canvas_KEY_POUND), "POUND");
    this->KEY_STAR = GameKey_new((Canvas_staticInit(), Canvas_KEY_STAR), "STAR");
    this->KEY_NUM0 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM0), CommonPhoneStrings_getInstance()->ZERO);
    this->KEY_NUM1 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM1), CommonPhoneStrings_getInstance()->ONE);
    this->KEY_NUM2 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM2), CommonPhoneStrings_getInstance()->TWO);
    this->KEY_NUM3 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM3), CommonPhoneStrings_getInstance()->THREE);
    this->KEY_NUM4 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM4), CommonPhoneStrings_getInstance()->FOUR);
    this->KEY_NUM5 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM5), CommonPhoneStrings_getInstance()->FIVE);
    this->KEY_NUM6 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM6), CommonPhoneStrings_getInstance()->SIX);
    this->KEY_NUM7 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM7), CommonPhoneStrings_getInstance()->SEVEN);
    this->KEY_NUM8 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM8), CommonPhoneStrings_getInstance()->EIGHT);
    this->KEY_NUM9 = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM9), CommonPhoneStrings_getInstance()->NINE);
    this->GAME_A = GameKey_new((Canvas_staticInit(), Canvas_GAME_A), "Game A");
    this->GAME_B = GameKey_new((Canvas_staticInit(), Canvas_GAME_B), "Game B");
    this->GAME_C = GameKey_new((Canvas_staticInit(), Canvas_GAME_C), "Game C");
    this->GAME_D = GameKey_new((Canvas_staticInit(), Canvas_GAME_D), "Game D");
    this->FIRE = GameKey_new((Canvas_staticInit(), Canvas_FIRE), CommonPhoneStrings_getInstance()->FIRE);
    this->LEVEL_DOWN = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM9) + 1, "Cheat Level Up");
    this->LEVEL_UP = GameKey_new((Canvas_staticInit(), Canvas_KEY_NUM9) + 2, "Cheat Level Down");
}

void GameKeyFactory_init(GameKeyFactory* this) {
    GameKeyFactory_register();
    GameKeyFactory_initFields(this);
}

GameKeyFactory* GameKeyFactory_new(void) {
    GameKeyFactory* this = java_object_alloc(sizeof(GameKeyFactory), "GameKeyFactory");
    GameKeyFactory_init(this);
    return this;
}


GameKeyFactory* GameKeyFactory_getInstance(void) {
        if ((GameKeyFactory_staticInit(), GameKeyFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            GameKeyFactory_instance = GameKeyFactory_new();
        }
        return ((GameKeyFactory*) (GameKeyFactory_staticInit(), GameKeyFactory_instance));
}

