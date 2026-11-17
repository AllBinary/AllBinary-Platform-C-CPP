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
// package org.allbinary.game.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct GameKeyEvent GameKeyEvent;
struct GameKeyEvent {
    AllBinaryEventObject base;
    int32_t sourceId;
    bool repeated;
    int32_t key;
    int32_t gameActionKey;
    int32_t originalKey;
};

GameKeyEvent* GameKeyEvent_NONE;

GameKeyEvent* GameKeyEvent_new(Any* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated);
GameKeyEvent* GameKeyEvent_createEvent(Any* anyType, int32_t sourceId, int32_t key);

void GameKeyEvent_init(GameKeyEvent* this, Any* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated);
void GameKeyEvent_init(GameKeyEvent* this, Any* anyType);
static void GameKeyEvent_setRepeatEvents(GameKeyEvent* this, bool repeated);
bool GameKeyEvent_hasRepeatEvents(GameKeyEvent* this);
int32_t GameKeyEvent_getKey(GameKeyEvent* this);
const char* GameKeyEvent_toString(GameKeyEvent* this);
int32_t GameKeyEvent_getOriginalKey(GameKeyEvent* this);
void GameKeyEvent_setOriginalKey(GameKeyEvent* this, int32_t originalKey);
int32_t GameKeyEvent_getGameActionKey(GameKeyEvent* this);
void GameKeyEvent_setGameActionKey(GameKeyEvent* this, int32_t gameActionKey);
int32_t GameKeyEvent_getSourceId(GameKeyEvent* this);

// Static fields with runtime initializers: call this once at startup
void GameKeyEvent_staticInit(void) {
    GameKeyEvent_NONE = GameKeyEvent_new(NullUtil_getInstance()->NULL_OBJECT, -1, -1, -1, -1, false);
}

static void GameKeyEvent_initFields(GameKeyEvent* this) {
    
    this->repeated = false;
    
    this->gameActionKey = 0;
    this->originalKey = 0;
}


GameKeyEvent* GameKeyEvent_createEvent(Any* anyType, int32_t sourceId, int32_t key) {
        return GameKeyEvent_new(anyType, sourceId, 0, 0, key, false);
}


void GameKeyEvent_init(GameKeyEvent* this, Any* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated) {
        AllBinaryEventObject_init(&this->base, anyType);
        GameKeyEvent_initFields(this);
        this->sourceId = sourceId;
        GameKeyEvent_setOriginalKey(this, originalKey);
        this->key = key;
        GameKeyEvent_setGameActionKey(this, gameActionKey);
        GameKeyEvent_setRepeatEvents(this, repeated);
}

GameKeyEvent* GameKeyEvent_new(Any* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated) {
    GameKeyEvent* this = calloc(1, sizeof(GameKeyEvent));
    GameKeyEvent_init(this, anyType, sourceId, originalKey, gameActionKey, key, repeated);
    return this;
}


void GameKeyEvent_init(GameKeyEvent* this, Any* anyType) {
        GameKeyEvent_setSource(this, anyType);
}


static void GameKeyEvent_setRepeatEvents(GameKeyEvent* this, bool repeated) {
        this->repeated = repeated;
}


bool GameKeyEvent_hasRepeatEvents(GameKeyEvent* this) {
        return this->repeated;
}


int32_t GameKeyEvent_getKey(GameKeyEvent* this) {
        return this->key;
}


const char* GameKeyEvent_toString(GameKeyEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "\nKey: ");
        StringMaker_appendint(stringBuffer, GameKeyEvent_getKey(this));
        return StringMaker_toString(stringBuffer);
}


int32_t GameKeyEvent_getOriginalKey(GameKeyEvent* this) {
        return this->originalKey;
}


void GameKeyEvent_setOriginalKey(GameKeyEvent* this, int32_t originalKey) {
        this->originalKey = originalKey;
}


int32_t GameKeyEvent_getGameActionKey(GameKeyEvent* this) {
        return this->gameActionKey;
}


void GameKeyEvent_setGameActionKey(GameKeyEvent* this, int32_t gameActionKey) {
        this->gameActionKey = gameActionKey;
}


int32_t GameKeyEvent_getSourceId(GameKeyEvent* this) {
        return this->sourceId;
}

