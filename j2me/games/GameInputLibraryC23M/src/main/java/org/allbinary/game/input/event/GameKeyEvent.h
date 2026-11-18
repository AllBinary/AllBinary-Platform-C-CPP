#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H
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
typedef struct NullUtil NullUtil;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
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

extern GameKeyEvent* GameKeyEvent_NONE;

GameKeyEvent* GameKeyEvent_new(void* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated);

GameKeyEvent* GameKeyEvent_createEvent(void* anyType, int32_t sourceId, int32_t key);

void GameKeyEvent_init(GameKeyEvent* this, void* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated);

void GameKeyEvent_initMethod(GameKeyEvent* this, void* anyType);


bool GameKeyEvent_hasRepeatEvents(GameKeyEvent* this);

int32_t GameKeyEvent_getKey(GameKeyEvent* this);

const char* GameKeyEvent_toString(GameKeyEvent* this);

int32_t GameKeyEvent_getOriginalKey(GameKeyEvent* this);

void GameKeyEvent_setOriginalKey(GameKeyEvent* this, int32_t originalKey);

int32_t GameKeyEvent_getGameActionKey(GameKeyEvent* this);

void GameKeyEvent_setGameActionKey(GameKeyEvent* this, int32_t gameActionKey);

int32_t GameKeyEvent_getSourceId(GameKeyEvent* this);
#define GameKeyEvent_new6 GameKeyEvent_new
#define GameKeyEvent_init6 GameKeyEvent_init
#ifndef GameKeyEvent_getSource
#define GameKeyEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef GameKeyEvent_setSource
#define GameKeyEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKeyEvent_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H
