// Generated Code Do Not Modify
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/GameMode.h"
#include "org/allbinary/game/PlayerTypesFactory.h"
#include "org/allbinary/game/GameInfoData.h"
#include "org/allbinary/game/GameType.h"
#include "org/allbinary/game/PlayerType.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


GameInfo* GameInfo_NONE;
const char* GameInfo_LEVEL_NAME = "LEVEL";














void GameInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameInfo_NONE = GameInfo_new(GameTypeFactory_getInstance()->NONE, (GameMode_staticInit(), GameMode_NONE), PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, -1, -1);
}

void GameInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameInfo", nullptr);
    java_register_method("GameInfo", "getGameType", (void*) GameInfo_getGameType);
    java_register_method("GameInfo", "getGameMode", (void*) GameInfo_getGameMode);
    java_register_method("GameInfo", "getPlayerType", (void*) GameInfo_getPlayerType);
    java_register_method("GameInfo", "getHighestLevel", (void*) GameInfo_getHighestLevel);
    java_register_method("GameInfo", "setHighestLevel", (void*) GameInfo_setHighestLevel);
    java_register_method("GameInfo", "getCurrentLevel", (void*) GameInfo_getCurrentLevel);
    java_register_method("GameInfo", "setCurrentLevel", (void*) GameInfo_setCurrentLevel);
    java_register_method("GameInfo", "nextGameLevel", (void*) GameInfo_nextGameLevel);
    java_register_method("GameInfo", "previousGameLevel", (void*) GameInfo_previousGameLevel);
    java_register_method("GameInfo", "isLastLevel", (void*) GameInfo_isLastLevel);
    java_register_method("GameInfo", "toHashtable", (void*) GameInfo_toHashtable);
    java_register_method("GameInfo", "toString", (void*) GameInfo_toString);
}

static void GameInfo_initFields(GameInfo* this) {
    this->logUtil = LogUtil_getInstance();
    this->gameInfoData = GameInfoData_getInstance();
    
    
    
    this->highestLevel = 0;
    
    this->NEW_LEVEL = "New Level: ";
    this->SET_CURRENT_LEVEL = "setCurrentLevel";
    this->NEXT_GAME_LEVEL = "nextGameLevel";
}


void GameInfo_init(GameInfo* this, GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel) {
    GameInfo_register();
    GameInfo_initFields(this);
        this->gameType = gameType;
        this->gameMode = gameMode;
        GameInfo_setHighestLevel(this, highestLevel);
        this->currentLevel = currentLevel;
        this->playerType = playerType;
}

GameInfo* GameInfo_new(GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel) {
    GameInfo* this = java_object_alloc(sizeof(GameInfo), "GameInfo");
    GameInfo_init(this, gameType, gameMode, playerType, highestLevel, currentLevel);
    return this;
}


GameType* GameInfo_getGameType(GameInfo* this) {
        return this->gameType;
}


GameMode* GameInfo_getGameMode(GameInfo* this) {
        return this->gameMode;
}


PlayerType* GameInfo_getPlayerType(GameInfo* this) {
        return this->playerType;
}


int32_t GameInfo_getHighestLevel(GameInfo* this) {
        return this->highestLevel;
}


void GameInfo_setHighestLevel(GameInfo* this, int32_t highestLevel) {
        this->highestLevel = highestLevel;
}


int32_t GameInfo_getCurrentLevel(GameInfo* this) {
        return this->currentLevel;
}


void GameInfo_setCurrentLevel(GameInfo* this, int32_t currentLevel) {
        this->currentLevel = currentLevel;
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->NEW_LEVEL), GameInfo_getCurrentLevel(this))), this, this->SET_CURRENT_LEVEL);
}


void GameInfo_nextGameLevel(GameInfo* this) {
        if (GameInfo_getCurrentLevel(this) < GameInfo_getHighestLevel(this)) {
            this->currentLevel++;
        }
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->NEXT), CommonSeps_getInstance()->SPACE), this->NEW_LEVEL), GameInfo_getCurrentLevel(this))), this, this->NEXT_GAME_LEVEL);
}


void GameInfo_previousGameLevel(GameInfo* this) {
        if (GameInfo_getCurrentLevel(this) > 1) {
            this->currentLevel--;
        }
}


bool GameInfo_isLastLevel(GameInfo* this) {
        if (GameInfo_getCurrentLevel(this) >= GameInfo_getHighestLevel(this)) {
            return true;
        } else {
            return false;
        }
}


ABHashtable* GameInfo_toHashtable(GameInfo* this) {
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        Hashtable_put(hashtable, this->gameInfoData->GAME_TYPE, java_string_of(GameInfo_getGameType(this)));
        Hashtable_put(hashtable, this->gameInfoData->GAME_MODE, java_string_of(this->gameMode));
        Hashtable_put(hashtable, this->gameInfoData->PLAYER_TYPE, java_string_of(this->playerType));
        Hashtable_put(hashtable, this->gameInfoData->HIGHEST_LEVEL, java_string_of(GameInfo_getHighestLevel(this)));
        Hashtable_put(hashtable, this->gameInfoData->CURRENT_LEVEL, java_string_of(this->currentLevel));
        return hashtable;
}


const char* GameInfo_toString(GameInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, this->gameInfoData->GAME_TYPE);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_append(stringBuffer, java_string_of(GameInfo_getGameType(this)));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->GAME_MODE);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_append(stringBuffer, java_string_of(this->gameMode));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->PLAYER_TYPE);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), this->playerType));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->HIGHEST_LEVEL);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_appendint(stringBuffer, GameInfo_getHighestLevel(this));
        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        StringMaker_append(stringBuffer, this->gameInfoData->CURRENT_LEVEL);
        StringMaker_append(stringBuffer, commonSeps->EQUALS);
        StringMaker_appendint(stringBuffer, this->currentLevel);
        return java_string_of(stringBuffer);
}

