// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/EndGameInfo.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif








void EndGameInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void EndGameInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EndGameInfo", nullptr);
    java_register_method("EndGameInfo", "update", (void*) EndGameInfo_update);
    java_register_method("EndGameInfo", "getGameOverStr", (void*) EndGameInfo_getGameOverStr);
    java_register_method("EndGameInfo", "setGameOverStr", (void*) EndGameInfo_setGameOverStr);
    java_register_method("EndGameInfo", "getWinStr", (void*) EndGameInfo_getWinStr);
    java_register_method("EndGameInfo", "setWinStr", (void*) EndGameInfo_setWinStr);
}

static void EndGameInfo_initFields(EndGameInfo* this) {
    this->NORMAL_GAME_OVER_WIN = "You Won";
    this->TEASER_DEMO_GAME_END_LAST_LEVEL = "End of Demo.";
    this->TEASER_DEMO_GAME_END = "Demo Game Over.";
    this->gameOverStr = StringUtil_getInstance()->EMPTY_STRING;
    this->winStr = this->gameOverStr;
}

void EndGameInfo_init(EndGameInfo* this) {
    EndGameInfo_register();
    EndGameInfo_initFields(this);
}

EndGameInfo* EndGameInfo_new(void) {
    EndGameInfo* this = java_object_alloc(sizeof(EndGameInfo), "EndGameInfo");
    EndGameInfo_init(this);
    return this;
}


void EndGameInfo_update(EndGameInfo* this, GameInfo* gameInfo, MyCanvas* myCanvas) {
        if (GameInfo_isLastLevel(gameInfo)) {
            EndGameInfo_setWinStr(this, this->TEASER_DEMO_GAME_END_LAST_LEVEL);
            EndGameInfo_setGameOverStr(this, this->TEASER_DEMO_GAME_END_LAST_LEVEL);
        } else {
            EndGameInfo_setWinStr(this, this->NORMAL_GAME_OVER_WIN);
            EndGameInfo_setGameOverStr(this, this->TEASER_DEMO_GAME_END);
        }
}


const char* EndGameInfo_getGameOverStr(EndGameInfo* this) {
        return this->gameOverStr;
}


void EndGameInfo_setGameOverStr(EndGameInfo* this, const char* gameOverStr) {
        this->gameOverStr = gameOverStr;
}


const char* EndGameInfo_getWinStr(EndGameInfo* this) {
        return this->winStr;
}


void EndGameInfo_setWinStr(EndGameInfo* this, const char* winStr) {
        this->winStr = winStr;
}

