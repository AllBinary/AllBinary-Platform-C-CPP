#ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETJS_H
#define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETJS_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;

typedef struct DemoGameMidletJs DemoGameMidletJs;
struct DemoGameMidletJs {
    GameCanvasRunnableInterface* (*createDemoGameCanvasRunnableInterface)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameMidletJs_staticInit(void);

static inline GameCanvasRunnableInterface* DemoGameMidletJs_createDemoGameCanvasRunnableInterface(void* this) {
    return ((__typeof__(((DemoGameMidletJs*) nullptr)->createDemoGameCanvasRunnableInterface)) java_method_of(this, "createDemoGameCanvasRunnableInterface"))(this);
}

#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETJS_H
