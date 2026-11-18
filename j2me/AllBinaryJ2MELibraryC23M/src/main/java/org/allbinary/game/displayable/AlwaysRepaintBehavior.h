#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H
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
typedef struct RepaintBehavior RepaintBehavior;
typedef struct RepaintRunnable RepaintRunnable;
typedef struct Canvas Canvas;
typedef struct Features Features;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
// #include "org/allbinary/logic/communication/log/LogUtil.h"
// #include "org/allbinary/string/CommonStrings.h"
// #include "org/allbinary/thread/NullRunnable.h"
#include "java/lang/Thread.h"
#include "org/allbinary/game/displayable/RepaintBehavior.h"

typedef struct AlwaysRepaintBehavior AlwaysRepaintBehavior;
struct AlwaysRepaintBehavior {
    RepaintBehavior base;
    const char* NAME;
};


AlwaysRepaintBehavior* AlwaysRepaintBehavior_new(void);
void AlwaysRepaintBehavior_init(AlwaysRepaintBehavior* this);

AlwaysRepaintBehavior* AlwaysRepaintBehavior_getInstance(void);

void AlwaysRepaintBehavior_repaint(AlwaysRepaintBehavior* this, Canvas* canvas);

void AlwaysRepaintBehavior_onChangeRepaint(AlwaysRepaintBehavior* this, Canvas* canvas);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AlwaysRepaintBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AlwaysRepaintBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_ALWAYSREPAINTBEHAVIOR_H
