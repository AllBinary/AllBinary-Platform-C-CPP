#ifndef ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H
#define ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct ViewPositionBase ViewPositionBase;

typedef struct GameLayerUtil GameLayerUtil;
struct GameLayerUtil {
    char unused;
};


GameLayerUtil* GameLayerUtil_new(void);

void GameLayerUtil_init(GameLayerUtil* this);

bool GameLayerUtil_isOnScreen(AllBinaryLayer* layer);

bool GameLayerUtil_isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2);
#define GameLayerUtil_new0 GameLayerUtil_new
#define GameLayerUtil_init0 GameLayerUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameLayerUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameLayerUtil_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_GAMELAYERUTIL_H
