#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
typedef struct GameTypeFactory GameTypeFactory;
typedef struct NullPaintable NullPaintable;
typedef struct LogUtil LogUtil;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct DemoGameBehavior DemoGameBehavior;
struct DemoGameBehavior {
    LogUtil* logUtil;
};


DemoGameBehavior* DemoGameBehavior_new(void);
void DemoGameBehavior_init(DemoGameBehavior* this);

DemoGameBehavior* DemoGameBehavior_getInstance(void);

void DemoGameBehavior_initMethod(DemoGameBehavior* this);

void DemoGameBehavior_pause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_unPause(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_updateTouch(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_updateScreenButtonPaintable(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_setGameState(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_removeAllGameKeyInputListeners(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_updateEndGameProcessor(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_buildGame(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_run(DemoGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void DemoGameBehavior_setHighScore(DemoGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoGameBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H
