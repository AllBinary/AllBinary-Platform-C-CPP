// Generated Code Do Not Modify
#include "org/allbinary/canvas/GameGlobalsFactory.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif


static GameGlobalsFactory* GameGlobalsFactory_instance;


void GameGlobalsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameGlobalsFactory_instance = GameGlobalsFactory_new();
}

void GameGlobalsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameGlobalsFactory", nullptr);
}

static void GameGlobalsFactory_initFields(GameGlobalsFactory* this) {
    this->newCanvas = true;
    this->newDisplaybleTime = ((int64_t) (Integer_staticInit(), Integer_MIN_VALUE));
    this->point = PointFactory_getInstance()->ZERO_ZERO;
}

void GameGlobalsFactory_init(GameGlobalsFactory* this) {
    GameGlobalsFactory_register();
    GameGlobalsFactory_initFields(this);
}

GameGlobalsFactory* GameGlobalsFactory_new(void) {
    GameGlobalsFactory* this = java_object_alloc(sizeof(GameGlobalsFactory), "GameGlobalsFactory");
    GameGlobalsFactory_init(this);
    return this;
}


GameGlobalsFactory* GameGlobalsFactory_getInstance(void) {
        return (GameGlobalsFactory_staticInit(), GameGlobalsFactory_instance);
}

