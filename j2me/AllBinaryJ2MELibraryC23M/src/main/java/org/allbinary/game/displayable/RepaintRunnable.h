#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTRUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTRUNNABLE_H
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
// package org.allbinary.game.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct ARunnable ARunnable;
#if __has_include("javax/microedition/lcdui/Canvas.h")
#include "javax/microedition/lcdui/Canvas.h"
#endif
#include "org/allbinary/thread/ARunnable.h"

typedef struct RepaintRunnable RepaintRunnable;
struct RepaintRunnable {
    ARunnable base;
    Canvas* canvas;
};


RepaintRunnable* RepaintRunnable_new(Canvas* canvas);

void RepaintRunnable_init(RepaintRunnable* this, Canvas* canvas);

void RepaintRunnable_run(RepaintRunnable* this);
#define RepaintRunnable_new1 RepaintRunnable_new
#define RepaintRunnable_init1 RepaintRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RepaintRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RepaintRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTRUNNABLE_H
