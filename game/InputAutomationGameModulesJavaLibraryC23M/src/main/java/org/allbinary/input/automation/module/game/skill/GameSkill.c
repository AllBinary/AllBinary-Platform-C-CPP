/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.automation.module.game.skill

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct GameSkill GameSkill;
struct GameSkill {
    GameSkillType* gameSkillType;
    const char* extra;
    int32_t time;
    BasicArrayList* vector;
    const char* GAME_SKILL_LABEL;
    const char* EXTRA_LABEL;
    const char* TIME_LABEL;
};

static HashMap* GameSkill_hashMap;

GameSkill* GameSkill_new(GameSkillType* gameSkillType, const char* extra, int32_t time);

void GameSkill_init(GameSkill* this, GameSkillType* gameSkillType, const char* extra, int32_t time);
GameSkillType* GameSkill_getGameSkillType(GameSkill* this);
void GameSkill_setGameSkillType(GameSkill* this, GameSkillType* gameSkillType);
const char* GameSkill_getExtra(GameSkill* this);
void GameSkill_setExtra(GameSkill* this, const char* extra);
int32_t GameSkill_getTime(GameSkill* this);
void GameSkill_setTime(GameSkill* this, int32_t time);
void GameSkill_addProperty(GameSkill* this, GameSkillPropertyInterface* gameSkillPropertyInterface);
BasicArrayList* GameSkill_getProperties(GameSkill* this);
GameSkill* GameSkill_getInstance(GameSkillType* gameSkillType, const char* extra);
const char* GameSkill_toString(GameSkill* this);

// Static fields with runtime initializers: call this once at startup
void GameSkill_staticInit(void) {
    GameSkill_hashMap = StdUtil_createHashMap(StdUtil_getInstance());
}

static void GameSkill_initFields(GameSkill* this) {
    this->gameSkillType = nullptr;
    this->extra = nullptr;
    this->time = 0;
    
    this->GAME_SKILL_LABEL = "GameSkill: ";
    this->EXTRA_LABEL = "Extra: ";
    this->TIME_LABEL = "Time: ";
}


void GameSkill_init(GameSkill* this, GameSkillType* gameSkillType, const char* extra, int32_t time) {
    GameSkill_initFields(this);
        GameSkill_setGameSkillType(this, gameSkillType);
        GameSkill_setExtra(this, extra);
        GameSkill_setTime(this, time);
        this->vector = BasicArrayListD_new();
        JAVA_CALL(GameSkill_hashMap, put, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), JAVA_CALL(GameSkill_getGameSkillType(this), getName)), append, CommonSeps_getInstance()->SPACE), append, extra), toString), this);
}

GameSkill* GameSkill_new(GameSkillType* gameSkillType, const char* extra, int32_t time) {
    GameSkill* this = calloc(1, sizeof(GameSkill));
    GameSkill_init(this, gameSkillType, extra, time);
    return this;
}


GameSkillType* GameSkill_getGameSkillType(GameSkill* this) {
        return this->gameSkillType;
}


void GameSkill_setGameSkillType(GameSkill* this, GameSkillType* gameSkillType) {
        this->gameSkillType = gameSkillType;
}


const char* GameSkill_getExtra(GameSkill* this) {
        return this->extra;
}


void GameSkill_setExtra(GameSkill* this, const char* extra) {
        this->extra = extra;
}


int32_t GameSkill_getTime(GameSkill* this) {
        return this->time;
}


void GameSkill_setTime(GameSkill* this, int32_t time) {
        this->time = time;
}


void GameSkill_addProperty(GameSkill* this, GameSkillPropertyInterface* gameSkillPropertyInterface) {
        BasicArrayList_add(this->vector, gameSkillPropertyInterface);
}


BasicArrayList* GameSkill_getProperties(GameSkill* this) {
        return this->vector;
}


GameSkill* GameSkill_getInstance(GameSkillType* gameSkillType, const char* extra) {
        return ((GameSkill*) JAVA_CALL(GameSkill_hashMap, get, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), GameSkillType_getName(gameSkillType)), append, CommonSeps_getInstance()->SPACE), append, extra), toString)));
}


const char* GameSkill_toString(GameSkill* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->GAME_SKILL_LABEL);
        StringMaker_append(stringBuffer, JAVA_CALL(GameSkill_getGameSkillType(this), toString));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->EXTRA_LABEL);
        StringMaker_append(stringBuffer, GameSkill_getExtra(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->TIME_LABEL);
        StringMaker_appendlong(stringBuffer, ((int64_t) GameSkill_getTime(this)));
        return StringMaker_toString(stringBuffer);
}

