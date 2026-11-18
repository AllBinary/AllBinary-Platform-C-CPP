#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventUtil GameKeyEventUtil;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct SpecialGameInputFactory SpecialGameInputFactory;
typedef struct SpecialGameInputInterface SpecialGameInputInterface;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#include "org/allbinary/game/input/PlayerGameInput.h"
#if __has_include("org/allbinary/game/layer/special/SpecialGameInputInterface.h")
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"
#endif
// #include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct CheatGameInputProcessor CheatGameInputProcessor;
struct CheatGameInputProcessor {
    PlayerGameInput base;
    const char* PROCESS_GAME;
    AllBinaryGameCanvas* gameCanvas;
    GameKeyFactory* gameKeyFactory;
};

extern SpecialGameInputInterface* CheatGameInputProcessor_inputProcessor;

CheatGameInputProcessor* CheatGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas);

void CheatGameInputProcessor_init(CheatGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas);

void CheatGameInputProcessor_update(CheatGameInputProcessor* this);
#define CheatGameInputProcessor_new1 CheatGameInputProcessor_new
#define CheatGameInputProcessor_init1 CheatGameInputProcessor_init
#ifndef CheatGameInputProcessor_onPressGameKeyEvent
#define CheatGameInputProcessor_onPressGameKeyEvent PlayerGameInput_onPressGameKeyEvent
#endif
#ifndef CheatGameInputProcessor_onDownGameKeyEvent
#define CheatGameInputProcessor_onDownGameKeyEvent PlayerGameInput_onDownGameKeyEvent
#endif
#ifndef CheatGameInputProcessor_onDownKeyEvent
#define CheatGameInputProcessor_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef CheatGameInputProcessor_onDownKey
#define CheatGameInputProcessor_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef CheatGameInputProcessor_onUpGameKeyEvent
#define CheatGameInputProcessor_onUpGameKeyEvent PlayerGameInput_onUpGameKeyEvent
#endif
#ifndef CheatGameInputProcessor_onUpKeyEvent
#define CheatGameInputProcessor_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef CheatGameInputProcessor_onEvent
#define CheatGameInputProcessor_onEvent PlayerGameInput_onEvent
#endif
#ifndef CheatGameInputProcessor_getPlayerInputId
#define CheatGameInputProcessor_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef CheatGameInputProcessor_add
#define CheatGameInputProcessor_add GameInput_add
#endif
#ifndef CheatGameInputProcessor_addForRemoval
#define CheatGameInputProcessor_addForRemoval GameInput_addForRemoval
#endif
#ifndef CheatGameInputProcessor_isForRemoval
#define CheatGameInputProcessor_isForRemoval GameInput_isForRemoval
#endif
#ifndef CheatGameInputProcessor_clear
#define CheatGameInputProcessor_clear GameInput_clear
#endif
#ifndef CheatGameInputProcessor_removeNonAIInputGameKeyEvents
#define CheatGameInputProcessor_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef CheatGameInputProcessor_getRemovalGameKeyEventList
#define CheatGameInputProcessor_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef CheatGameInputProcessor_getGameKeyEventList
#define CheatGameInputProcessor_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CheatGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CheatGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_H
