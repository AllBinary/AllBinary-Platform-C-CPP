#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H
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
typedef struct GameInputProcessorInterface GameInputProcessorInterface;
typedef struct StringMaker StringMaker;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
// #include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#if __has_include("org/allbinary/game/input/GameInputProcessorInterface.h")
#include "org/allbinary/game/input/GameInputProcessorInterface.h"
#endif

typedef struct GameInputProcessorComposite GameInputProcessorComposite;
struct GameInputProcessorComposite {
    PlayerGameInput base;
    const char* name;
    GameInputProcessorInterface* gameInputProcessorInterface;
    const char* NAME_LABEL;
};


GameInputProcessorComposite* GameInputProcessorComposite_new(const char* name, GameInputProcessorInterface* gameInputProcessorInterface);

void GameInputProcessorComposite_init(GameInputProcessorComposite* this, const char* name, GameInputProcessorInterface* gameInputProcessorInterface);

void GameInputProcessorComposite_update(GameInputProcessorComposite* this);

const char* GameInputProcessorComposite_toString(GameInputProcessorComposite* this);
#define GameInputProcessorComposite_new2 GameInputProcessorComposite_new
#define GameInputProcessorComposite_init2 GameInputProcessorComposite_init
#ifndef GameInputProcessorComposite_onPressGameKeyEvent
#define GameInputProcessorComposite_onPressGameKeyEvent PlayerGameInput_onPressGameKeyEvent
#endif
#ifndef GameInputProcessorComposite_onDownGameKeyEvent
#define GameInputProcessorComposite_onDownGameKeyEvent PlayerGameInput_onDownGameKeyEvent
#endif
#ifndef GameInputProcessorComposite_onDownKeyEvent
#define GameInputProcessorComposite_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef GameInputProcessorComposite_onDownKey
#define GameInputProcessorComposite_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef GameInputProcessorComposite_onUpGameKeyEvent
#define GameInputProcessorComposite_onUpGameKeyEvent PlayerGameInput_onUpGameKeyEvent
#endif
#ifndef GameInputProcessorComposite_onUpKeyEvent
#define GameInputProcessorComposite_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef GameInputProcessorComposite_onEvent
#define GameInputProcessorComposite_onEvent PlayerGameInput_onEvent
#endif
#ifndef GameInputProcessorComposite_getPlayerInputId
#define GameInputProcessorComposite_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef GameInputProcessorComposite_add
#define GameInputProcessorComposite_add GameInput_add
#endif
#ifndef GameInputProcessorComposite_addForRemoval
#define GameInputProcessorComposite_addForRemoval GameInput_addForRemoval
#endif
#ifndef GameInputProcessorComposite_isForRemoval
#define GameInputProcessorComposite_isForRemoval GameInput_isForRemoval
#endif
#ifndef GameInputProcessorComposite_clear
#define GameInputProcessorComposite_clear GameInput_clear
#endif
#ifndef GameInputProcessorComposite_removeNonAIInputGameKeyEvents
#define GameInputProcessorComposite_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef GameInputProcessorComposite_getRemovalGameKeyEventList
#define GameInputProcessorComposite_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef GameInputProcessorComposite_getGameKeyEventList
#define GameInputProcessorComposite_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputProcessorComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInputProcessorComposite_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H
