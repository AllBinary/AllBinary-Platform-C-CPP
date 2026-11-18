#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct AllBinaryGameCanvasInterface AllBinaryGameCanvasInterface;
typedef struct Command Command;
typedef struct CommandListener CommandListener;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"

typedef struct NullAllBinaryGameCanvas NullAllBinaryGameCanvas;
struct NullAllBinaryGameCanvas {
    AllBinaryGameCanvasInterface AllBinaryGameCanvasInterface_interface;
};

extern NullAllBinaryGameCanvas* NullAllBinaryGameCanvas_NULL_ALLBINARY_GAME_CANVAS;

NullAllBinaryGameCanvas* NullAllBinaryGameCanvas_new(void);
void NullAllBinaryGameCanvas_init(NullAllBinaryGameCanvas* this);

AllBinaryGameLayerManager* NullAllBinaryGameCanvas_getLayerManager(NullAllBinaryGameCanvas* this);

void NullAllBinaryGameCanvas_addCommand(NullAllBinaryGameCanvas* this, Command* cmd);

int32_t NullAllBinaryGameCanvas_getHeight(NullAllBinaryGameCanvas* this);

int32_t NullAllBinaryGameCanvas_getWidth(NullAllBinaryGameCanvas* this);

void NullAllBinaryGameCanvas_removeCommand(NullAllBinaryGameCanvas* this, Command* cmd);

void NullAllBinaryGameCanvas_setCommandListener(NullAllBinaryGameCanvas* this, CommandListener* l);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullAllBinaryGameCanvas_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullAllBinaryGameCanvas_register(void);

#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_H
