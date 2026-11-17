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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"

typedef struct AdjustedSpriteIndexedAnimation AdjustedSpriteIndexedAnimation;
struct AdjustedSpriteIndexedAnimation {
    SpriteIndexedAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedSpriteIndexedAnimation* AdjustedSpriteIndexedAnimation_new(Sprite* sprite, Image* image, BasicColor** basicColorArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedSpriteIndexedAnimation_init(AdjustedSpriteIndexedAnimation* this, Sprite* sprite, Image* image, BasicColor** basicColorArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedSpriteIndexedAnimation_paintFrame(AdjustedSpriteIndexedAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y);
void AdjustedSpriteIndexedAnimation_paintXY(AdjustedSpriteIndexedAnimation* this, Graphics* g, int32_t x, int32_t y);
void AdjustedSpriteIndexedAnimation_paint(AdjustedSpriteIndexedAnimation* this, Graphics* g);

static void AdjustedSpriteIndexedAnimation_initFields(AdjustedSpriteIndexedAnimation* this) {
    
    
}


void AdjustedSpriteIndexedAnimation_init(AdjustedSpriteIndexedAnimation* this, Sprite* sprite, Image* image, BasicColor** basicColorArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        SpriteIndexedAnimation_init(&this->base, sprite, image, basicColorArray, animationBehavior);
        AdjustedSpriteIndexedAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AdjustedSpriteIndexedAnimation* AdjustedSpriteIndexedAnimation_new(Sprite* sprite, Image* image, BasicColor** basicColorArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedSpriteIndexedAnimation* this = calloc(1, sizeof(AdjustedSpriteIndexedAnimation));
    AdjustedSpriteIndexedAnimation_init(this, sprite, image, basicColorArray, dx, dy, animationBehavior);
    return this;
}


void AdjustedSpriteIndexedAnimation_paintFrame(AdjustedSpriteIndexedAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y) {
        AdjustedSpriteIndexedAnimation_setFrame(this, frame);
        Sprite_setPosition(this->sprite, x + this->dx, y + this->dy);
        SpriteIndexedAnimation_paint((&this->base), graphics);
}


void AdjustedSpriteIndexedAnimation_paintXY(AdjustedSpriteIndexedAnimation* this, Graphics* g, int32_t x, int32_t y) {
        Sprite_setPosition(this->sprite, x + this->dx, y + this->dy);
        SpriteIndexedAnimation_paint((&this->base), g);
}


void AdjustedSpriteIndexedAnimation_paint(AdjustedSpriteIndexedAnimation* this, Graphics* g) {
        Sprite_setPosition(this->sprite, this->dx, this->dy);
        SpriteIndexedAnimation_paint((&this->base), g);
}

