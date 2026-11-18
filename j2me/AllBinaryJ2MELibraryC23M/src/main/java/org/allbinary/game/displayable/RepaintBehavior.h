#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTBEHAVIOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTBEHAVIOR_H
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
typedef struct RepaintRunnable RepaintRunnable;
typedef struct Canvas Canvas;
typedef struct Features Features;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
// #include "org/allbinary/string/CommonStrings.h"
// #include "org/allbinary/thread/NullRunnable.h"
#include "java/lang/Thread.h"

typedef struct RepaintBehavior RepaintBehavior;
struct RepaintBehavior {
    LogUtil* logUtil;
    const char* NAME;
};


RepaintBehavior* RepaintBehavior_new(void);
void RepaintBehavior_init(RepaintBehavior* this);

RepaintBehavior* RepaintBehavior_getInstance(void);

void RepaintBehavior_repaint(RepaintBehavior* this, Canvas* canvas);

void RepaintBehavior_onChangeRepaint(RepaintBehavior* this, Canvas* canvas);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RepaintBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RepaintBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTBEHAVIOR_H
