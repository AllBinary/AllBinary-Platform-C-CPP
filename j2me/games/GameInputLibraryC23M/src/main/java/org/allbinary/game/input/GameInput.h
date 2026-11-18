#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUT_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUT_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Features Features;
typedef struct InputFeatureFactory InputFeatureFactory;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct GameInput GameInput;
struct GameInput {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* gameKeyEventList;
    BasicArrayList* removalGameKeyEventList;
    bool isRemoveDuplicateKeyPresses;
};


GameInput* GameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList);

void GameInput_init(GameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList);

void GameInput_add(GameInput* this, GameKeyEvent* gameKeyEvent);

void GameInput_addForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent);

bool GameInput_isForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent);

void GameInput_clear(GameInput* this);

void GameInput_removeNonAIInputGameKeyEvents(GameInput* this);

void GameInput_update(GameInput* this);

BasicArrayList* GameInput_getRemovalGameKeyEventList(GameInput* this);

BasicArrayList* GameInput_getGameKeyEventList(GameInput* this);
#define GameInput_new2 GameInput_new
#define GameInput_init2 GameInput_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInput_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUT_H
