#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H
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
typedef struct BaseMenuBehavior BaseMenuBehavior;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct GameCanvasNonBotPaintable GameCanvasNonBotPaintable;
typedef struct DisplayChangeEvent DisplayChangeEvent;
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"

typedef struct InGameMenuBehavior InGameMenuBehavior;
struct InGameMenuBehavior {
    BaseMenuBehavior base;
};


InGameMenuBehavior* InGameMenuBehavior_new(void);
void InGameMenuBehavior_init(InGameMenuBehavior* this);

InGameMenuBehavior* InGameMenuBehavior_getInstance(void);

void InGameMenuBehavior_onDisplayChangeEvent(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent);

void InGameMenuBehavior_initSpecialPaint(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void InGameMenuBehavior_initMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void InGameMenuBehavior_updateMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void InGameMenuBehavior_popupMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void InGameMenuBehavior_closeMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InGameMenuBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InGameMenuBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H
