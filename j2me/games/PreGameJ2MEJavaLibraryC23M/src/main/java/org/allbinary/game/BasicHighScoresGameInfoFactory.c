// Generated Code Do Not Modify
#include "org/allbinary/game/BasicHighScoresGameInfoFactory.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/GameMode.h"
#include "org/allbinary/game/PlayerTypesFactory.h"


static BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_SINGLETON;


void BasicHighScoresGameInfoFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicHighScoresGameInfoFactory_SINGLETON = BasicHighScoresGameInfoFactory_new();
}

void BasicHighScoresGameInfoFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicHighScoresGameInfoFactory", nullptr);
}

static void BasicHighScoresGameInfoFactory_initFields(BasicHighScoresGameInfoFactory* this) {
    this->MULTI_PLAYER_SERVER = GameInfo_new(GameTypeFactory_getInstance()->MULTI_PLAYER, (GameMode_staticInit(), GameMode_SERVER), PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 0, 0);
    this->SINGLE_PLAYER_SERVER = GameInfo_new(GameTypeFactory_getInstance()->SINGLE_PLAYER, (GameMode_staticInit(), GameMode_SERVER), PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 0, 0);
}

void BasicHighScoresGameInfoFactory_init(BasicHighScoresGameInfoFactory* this) {
    BasicHighScoresGameInfoFactory_register();
    BasicHighScoresGameInfoFactory_initFields(this);
}

BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_new(void) {
    BasicHighScoresGameInfoFactory* this = java_object_alloc(sizeof(BasicHighScoresGameInfoFactory), "BasicHighScoresGameInfoFactory");
    BasicHighScoresGameInfoFactory_init(this);
    return this;
}


BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_getInstance(void) {
        return (BasicHighScoresGameInfoFactory_staticInit(), BasicHighScoresGameInfoFactory_SINGLETON);
}

