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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/DataOutputStream.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct HighScore HighScore;
struct HighScore {
    int32_t id;
    const char* name;
    GameInfo* gameInfo;
    int64_t score;
    const char* scoreString;
};


HighScore* HighScore_new(int32_t id, const char* name, GameInfo* gameInfo, int64_t score);

void HighScore_init(HighScore* this, int32_t id, const char* name, GameInfo* gameInfo, int64_t score);
int32_t HighScore_getId(HighScore* this);
const char* HighScore_getName(HighScore* this);
int64_t HighScore_getScore(HighScore* this);
int8_t* HighScore_getAsBytes(HighScore* this);
GameInfo* HighScore_getGameInfo(HighScore* this);
const char* HighScore_getScoreString(HighScore* this);
void HighScore_setName(HighScore* this, const char* name);
const char* HighScore_toString(HighScore* this);

static void HighScore_initFields(HighScore* this) {
    
    
    
    
    
}


void HighScore_init(HighScore* this, int32_t id, const char* name, GameInfo* gameInfo, int64_t score) {
    HighScore_initFields(this);
        this->id = id;
        this->name = name;
        this->gameInfo = gameInfo;
        this->score = score;
        this->scoreString = java_string_of(this->score);
}

HighScore* HighScore_new(int32_t id, const char* name, GameInfo* gameInfo, int64_t score) {
    HighScore* this = calloc(1, sizeof(HighScore));
    HighScore_init(this, id, name, gameInfo, score);
    return this;
}


int32_t HighScore_getId(HighScore* this) {
        return this->id;
}


const char* HighScore_getName(HighScore* this) {
        return this->name;
}


int64_t HighScore_getScore(HighScore* this) {
        return this->score;
}


// throws Exception
int8_t* HighScore_getAsBytes(HighScore* this) {
        ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
        DataOutputStream* outputStream = DataOutputStream_new(byteArrayOutputStream);
        DataOutputStream_writeUTF(outputStream, HighScore_getName(this));
        DataOutputStream_writeLong(outputStream, HighScore_getScore(this));
        return ByteArrayOutputStream_toByteArray(byteArrayOutputStream);
}


GameInfo* HighScore_getGameInfo(HighScore* this) {
        return this->gameInfo;
}


const char* HighScore_getScoreString(HighScore* this) {
        return this->scoreString;
}


void HighScore_setName(HighScore* this, const char* name) {
        this->name = name;
}


const char* HighScore_toString(HighScore* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->name), append, commonSeps->COLON), appendlong, this->score), append, commonSeps->FORWARD_SLASH), append, this->scoreString), toString);
}

