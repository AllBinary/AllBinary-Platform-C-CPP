#ifndef ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORYINTERFACE_H
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Image Image;
typedef struct Sprite Sprite;

typedef struct SpriteFactoryInterface SpriteFactoryInterface;
struct SpriteFactoryInterface {
    Sprite* (*createSprite)(void* this, Image* image, int32_t frameWidth, int32_t frameHeight);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpriteFactoryInterface_staticInit(void);

static inline Sprite* SpriteFactoryInterface_createSprite(void* this, Image* image, int32_t frameWidth, int32_t frameHeight) {
    return ((__typeof__(((SpriteFactoryInterface*) nullptr)->createSprite)) java_method_of(this, "createSprite"))(this, image, frameWidth, frameHeight);
}

#if __has_include("javax/microedition/lcdui/game/Sprite.h")
#include "javax/microedition/lcdui/game/Sprite.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_SPRITEFACTORYINTERFACE_H
