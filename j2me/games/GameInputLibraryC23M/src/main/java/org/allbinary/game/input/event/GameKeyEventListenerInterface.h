#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H
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
typedef struct DownGameKeyEventListenerInterface DownGameKeyEventListenerInterface;
typedef struct UpGameKeyEventListenerInterface UpGameKeyEventListenerInterface;
typedef struct PressGameKeyEventListenerInterface PressGameKeyEventListenerInterface;
#include "org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h"
#include "org/allbinary/game/input/event/UpGameKeyEventListenerInterface.h"
#include "org/allbinary/game/input/event/PressGameKeyEventListenerInterface.h"

typedef struct GameKeyEventListenerInterface GameKeyEventListenerInterface;
struct GameKeyEventListenerInterface {
    char unused;
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyEventListenerInterface_staticInit(void);
#define GameKeyEventListenerInterface_onDownGameKeyEvent DownGameKeyEventListenerInterface_onDownGameKeyEvent
#define GameKeyEventListenerInterface_onUpGameKeyEvent UpGameKeyEventListenerInterface_onUpGameKeyEvent
#define GameKeyEventListenerInterface_onPressGameKeyEvent PressGameKeyEventListenerInterface_onPressGameKeyEvent


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H
