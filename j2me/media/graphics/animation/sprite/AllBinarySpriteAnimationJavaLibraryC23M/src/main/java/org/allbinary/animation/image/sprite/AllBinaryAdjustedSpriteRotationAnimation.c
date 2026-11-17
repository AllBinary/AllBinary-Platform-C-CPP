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
// package org.allbinary.animation.image.sprite

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"

typedef struct AllBinaryAdjustedSpriteRotationAnimation AllBinaryAdjustedSpriteRotationAnimation;
struct AllBinaryAdjustedSpriteRotationAnimation {
    AllBinarySpriteRotationAnimation base;
    int32_t dx;
    int32_t dy;
};


AllBinaryAdjustedSpriteRotationAnimation* AllBinaryAdjustedSpriteRotationAnimation_new(Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AllBinaryAdjustedSpriteRotationAnimation_init(AllBinaryAdjustedSpriteRotationAnimation* this, Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AllBinaryAdjustedSpriteRotationAnimation_paintXY(AllBinaryAdjustedSpriteRotationAnimation* this, Graphics* g, int32_t x, int32_t y);

static void AllBinaryAdjustedSpriteRotationAnimation_initFields(AllBinaryAdjustedSpriteRotationAnimation* this) {
    
    
}


void AllBinaryAdjustedSpriteRotationAnimation_init(AllBinaryAdjustedSpriteRotationAnimation* this, Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        AllBinarySpriteRotationAnimation_init(&this->base, sprite, image, animationBehavior);
        AllBinaryAdjustedSpriteRotationAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AllBinaryAdjustedSpriteRotationAnimation* AllBinaryAdjustedSpriteRotationAnimation_new(Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AllBinaryAdjustedSpriteRotationAnimation* this = calloc(1, sizeof(AllBinaryAdjustedSpriteRotationAnimation));
    AllBinaryAdjustedSpriteRotationAnimation_init(this, sprite, image, dx, dy, animationBehavior);
    return this;
}


void AllBinaryAdjustedSpriteRotationAnimation_paintXY(AllBinaryAdjustedSpriteRotationAnimation* this, Graphics* g, int32_t x, int32_t y) {
        Sprite_setPosition(this->sprite, x + this->dx, y + this->dy);
        AllBinaryAdjustedSpriteRotationAnimation_paint(this, g);
}

