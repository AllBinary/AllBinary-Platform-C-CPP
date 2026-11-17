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
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/layer/SpriteFactoryInterface.h"

typedef struct SpriteFactory SpriteFactory;
struct SpriteFactory {
    SpriteFactoryInterface SpriteFactoryInterface_interface;
    LogUtil* logUtil;
};

static SpriteFactory* SpriteFactory_instance;

SpriteFactory* SpriteFactory_new(void);
SpriteFactory* SpriteFactory_getInstance(void);
Sprite* SpriteFactory_createSprite(SpriteFactory* this, Image* image, int32_t frameWidth, int32_t frameHeight);

// Static fields with runtime initializers: call this once at startup
void SpriteFactory_staticInit(void) {
    SpriteFactory_instance = SpriteFactory_new();
}

static void SpriteFactory_initFields(SpriteFactory* this) {
    this->logUtil = LogUtil_getInstance();
}

void SpriteFactory_init(SpriteFactory* this) {
    SpriteFactory_initFields(this);
}

SpriteFactory* SpriteFactory_new(void) {
    SpriteFactory* this = calloc(1, sizeof(SpriteFactory));
    SpriteFactory_init(this);
    return this;
}


SpriteFactory* SpriteFactory_getInstance(void) {
        return SpriteFactory_instance;
}


Sprite* SpriteFactory_createSprite(SpriteFactory* this, Image* image, int32_t frameWidth, int32_t frameHeight) {
        return Sprite_new(image, frameWidth, frameHeight);
}

