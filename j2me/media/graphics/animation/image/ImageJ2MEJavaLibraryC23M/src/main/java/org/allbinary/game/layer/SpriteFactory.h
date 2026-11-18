#ifndef ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SpriteFactoryInterface SpriteFactoryInterface;
typedef struct Image Image;
typedef struct Sprite Sprite;
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/game/layer/SpriteFactoryInterface.h"

typedef struct SpriteFactory SpriteFactory;
struct SpriteFactory {
    SpriteFactoryInterface SpriteFactoryInterface_interface;
    LogUtil* logUtil;
};


SpriteFactory* SpriteFactory_new(void);
void SpriteFactory_init(SpriteFactory* this);

SpriteFactory* SpriteFactory_getInstance(void);

Sprite* SpriteFactory_createSprite(SpriteFactory* this, Image* image, int32_t frameWidth, int32_t frameHeight);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpriteFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpriteFactory_register(void);

#if __has_include("javax/microedition/lcdui/game/Sprite.h")
#include "javax/microedition/lcdui/game/Sprite.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORY_H
