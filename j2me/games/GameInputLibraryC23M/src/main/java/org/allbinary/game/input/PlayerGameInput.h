#ifndef ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H
#define ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H
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
typedef struct GameInput GameInput;
typedef struct GameInputStrings GameInputStrings;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventListenerInterface GameKeyEventListenerInterface;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonLabels CommonLabels;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/game/input/event/GameKeyEventListenerInterface.h"
#include "java/lang/Integer.h"
#include "org/allbinary/game/input/GameInput.h"
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif

typedef struct PlayerGameInput PlayerGameInput;
struct PlayerGameInput {
    GameInput base;
    GameKeyEventListenerInterface GameKeyEventListenerInterface_interface;
    GameInputStrings* gameInputStrings;
    int32_t playerInputId;
};


PlayerGameInput* PlayerGameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId);

void PlayerGameInput_init(PlayerGameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId);

void PlayerGameInput_onPressGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);

void PlayerGameInput_onDownGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);

void PlayerGameInput_onDownKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);

void PlayerGameInput_onDownKey(PlayerGameInput* this, int32_t gameKeyEvent);

void PlayerGameInput_onUpGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);

void PlayerGameInput_onUpKeyEvent(PlayerGameInput* this, int32_t gameKeyEvent);

void PlayerGameInput_onEvent(PlayerGameInput* this, AllBinaryEventObject* eventObject);

int32_t PlayerGameInput_getPlayerInputId(PlayerGameInput* this);
#define PlayerGameInput_new3 PlayerGameInput_new
#define PlayerGameInput_init3 PlayerGameInput_init
#ifndef PlayerGameInput_add
#define PlayerGameInput_add GameInput_add
#endif
#ifndef PlayerGameInput_addForRemoval
#define PlayerGameInput_addForRemoval GameInput_addForRemoval
#endif
#ifndef PlayerGameInput_isForRemoval
#define PlayerGameInput_isForRemoval GameInput_isForRemoval
#endif
#ifndef PlayerGameInput_clear
#define PlayerGameInput_clear GameInput_clear
#endif
#ifndef PlayerGameInput_removeNonAIInputGameKeyEvents
#define PlayerGameInput_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef PlayerGameInput_update
#define PlayerGameInput_update GameInput_update
#endif
#ifndef PlayerGameInput_getRemovalGameKeyEventList
#define PlayerGameInput_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef PlayerGameInput_getGameKeyEventList
#define PlayerGameInput_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlayerGameInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlayerGameInput_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUT_H
