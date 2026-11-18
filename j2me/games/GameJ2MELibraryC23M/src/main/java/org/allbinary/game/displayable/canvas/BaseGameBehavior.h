#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H
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
typedef struct DemoGameBehavior DemoGameBehavior;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct GameAdStateFactory GameAdStateFactory;
typedef struct GameAdState GameAdState;
typedef struct Features Features;
typedef struct CurrentDisplayableFactory CurrentDisplayableFactory;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"

typedef struct BaseGameBehavior BaseGameBehavior;
struct BaseGameBehavior {
    DemoGameBehavior base;
};


BaseGameBehavior* BaseGameBehavior_new(void);
void BaseGameBehavior_init(BaseGameBehavior* this);

DemoGameBehavior* BaseGameBehavior_getInstance(void);

void BaseGameBehavior_initMethod(BaseGameBehavior* this);

void BaseGameBehavior_pause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_unPause(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_updateTouch(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_updateScreenButtonPaintable(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_setGameState(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_removeAllGameKeyInputListeners(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_updateEndGameProcessor(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_buildGame(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_run(BaseGameBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void BaseGameBehavior_setHighScore(BaseGameBehavior* this, AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, const char* name, int64_t score, bool autoSubmit, bool isLast);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseGameBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseGameBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H
