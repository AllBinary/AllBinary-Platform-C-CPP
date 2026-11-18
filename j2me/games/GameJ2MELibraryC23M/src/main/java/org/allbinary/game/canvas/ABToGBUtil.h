#ifndef ORG_ALLBINARY_GAME_CANVAS_ABTOGBUTIL_H
#define ORG_ALLBINARY_GAME_CANVAS_ABTOGBUTIL_H
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
// package org.allbinary.game.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct NullCanvas NullCanvas;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
#if __has_include("javax/microedition/lcdui/Canvas.h")
#include "javax/microedition/lcdui/Canvas.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif

typedef struct ABToGBUtil ABToGBUtil;
struct ABToGBUtil {
    Canvas* abCanvas;
    AllBinaryGameLayerManager* allBinaryGameLayerManager;
};


ABToGBUtil* ABToGBUtil_new(void);
void ABToGBUtil_init(ABToGBUtil* this);

ABToGBUtil* ABToGBUtil_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABToGBUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABToGBUtil_register(void);


#endif // ORG_ALLBINARY_GAME_CANVAS_ABTOGBUTIL_H
