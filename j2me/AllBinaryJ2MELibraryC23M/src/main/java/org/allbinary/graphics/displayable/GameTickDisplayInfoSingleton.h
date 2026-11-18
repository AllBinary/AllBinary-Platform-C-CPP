#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif

typedef struct GameTickDisplayInfoSingleton GameTickDisplayInfoSingleton;
struct GameTickDisplayInfoSingleton {
    DisplayInfoSingleton* displayInfoSingleton;
    int32_t lastWidth;
    int32_t lastHeight;
    int32_t lastHalfWidth;
    int32_t lastHalfHeight;
};


GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_new(void);
void GameTickDisplayInfoSingleton_init(GameTickDisplayInfoSingleton* this);

GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_getInstance(void);

void GameTickDisplayInfoSingleton_update(GameTickDisplayInfoSingleton* this);

int32_t GameTickDisplayInfoSingleton_getLastWidth(GameTickDisplayInfoSingleton* this);

int32_t GameTickDisplayInfoSingleton_getLastHeight(GameTickDisplayInfoSingleton* this);

int32_t GameTickDisplayInfoSingleton_getLastHalfWidth(GameTickDisplayInfoSingleton* this);

int32_t GameTickDisplayInfoSingleton_getLastHalfHeight(GameTickDisplayInfoSingleton* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameTickDisplayInfoSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameTickDisplayInfoSingleton_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
