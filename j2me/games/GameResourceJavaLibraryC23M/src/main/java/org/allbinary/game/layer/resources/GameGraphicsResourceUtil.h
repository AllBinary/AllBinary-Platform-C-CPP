#ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H
#define ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H
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
// package org.allbinary.game.layer.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Features Features;
typedef struct GraphicsFeature GraphicsFeature;
typedef struct GraphicsFeatureFactory GraphicsFeatureFactory;
typedef struct CanvasStrings CanvasStrings;
typedef struct OpenGLFeatureUtil OpenGLFeatureUtil;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct GameGraphicsResourceUtil GameGraphicsResourceUtil;
struct GameGraphicsResourceUtil {
    LogUtil* logUtil;
    const char* SPRITE;
    const char* QUARTER;
    const char* name;
};


GameGraphicsResourceUtil* GameGraphicsResourceUtil_new(void);

GameGraphicsResourceUtil* GameGraphicsResourceUtil_getInstance(void);

void GameGraphicsResourceUtil_init(GameGraphicsResourceUtil* this);


const char* GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil* this, GraphicsFeature* graphicsFeature);

const char* GameGraphicsResourceUtil_getName(GameGraphicsResourceUtil* this);
#define GameGraphicsResourceUtil_new0 GameGraphicsResourceUtil_new
#define GameGraphicsResourceUtil_init0 GameGraphicsResourceUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameGraphicsResourceUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameGraphicsResourceUtil_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H
