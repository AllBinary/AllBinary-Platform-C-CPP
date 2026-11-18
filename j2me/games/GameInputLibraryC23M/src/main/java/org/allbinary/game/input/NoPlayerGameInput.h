#ifndef ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H
#define ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H
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
typedef struct PlayerGameInput PlayerGameInput;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/game/input/PlayerGameInput.h"

typedef struct NoPlayerGameInput NoPlayerGameInput;
struct NoPlayerGameInput {
    PlayerGameInput base;
};


NoPlayerGameInput* NoPlayerGameInput_new(void);

NoPlayerGameInput* NoPlayerGameInput_getInstance(void);

void NoPlayerGameInput_init(NoPlayerGameInput* this);

void NoPlayerGameInput_onDownGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent);

void NoPlayerGameInput_onUpGameKeyEvent(NoPlayerGameInput* this, GameKeyEvent* gameKeyEvent);
#define NoPlayerGameInput_new0 NoPlayerGameInput_new
#define NoPlayerGameInput_init0 NoPlayerGameInput_init
#ifndef NoPlayerGameInput_onPressGameKeyEvent
#define NoPlayerGameInput_onPressGameKeyEvent PlayerGameInput_onPressGameKeyEvent
#endif
#ifndef NoPlayerGameInput_onDownKeyEvent
#define NoPlayerGameInput_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef NoPlayerGameInput_onDownKey
#define NoPlayerGameInput_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef NoPlayerGameInput_onUpKeyEvent
#define NoPlayerGameInput_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef NoPlayerGameInput_onEvent
#define NoPlayerGameInput_onEvent PlayerGameInput_onEvent
#endif
#ifndef NoPlayerGameInput_getPlayerInputId
#define NoPlayerGameInput_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef NoPlayerGameInput_add
#define NoPlayerGameInput_add GameInput_add
#endif
#ifndef NoPlayerGameInput_addForRemoval
#define NoPlayerGameInput_addForRemoval GameInput_addForRemoval
#endif
#ifndef NoPlayerGameInput_isForRemoval
#define NoPlayerGameInput_isForRemoval GameInput_isForRemoval
#endif
#ifndef NoPlayerGameInput_clear
#define NoPlayerGameInput_clear GameInput_clear
#endif
#ifndef NoPlayerGameInput_removeNonAIInputGameKeyEvents
#define NoPlayerGameInput_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef NoPlayerGameInput_update
#define NoPlayerGameInput_update GameInput_update
#endif
#ifndef NoPlayerGameInput_getRemovalGameKeyEventList
#define NoPlayerGameInput_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef NoPlayerGameInput_getGameKeyEventList
#define NoPlayerGameInput_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoPlayerGameInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoPlayerGameInput_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_NOPLAYERGAMEINPUT_H
