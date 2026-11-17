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
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct HackRotationSpriteIndexedAnimation HackRotationSpriteIndexedAnimation;
struct HackRotationSpriteIndexedAnimation {
    RotationAnimation base;
    Sprite* sprite;
    Image* image;
};


HackRotationSpriteIndexedAnimation* HackRotationSpriteIndexedAnimation_new(Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior);

void HackRotationSpriteIndexedAnimation_init(HackRotationSpriteIndexedAnimation* this, Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior);
int32_t HackRotationSpriteIndexedAnimation_getAnimationSize(HackRotationSpriteIndexedAnimation* this);
void HackRotationSpriteIndexedAnimation_paintFrame(HackRotationSpriteIndexedAnimation* this, Graphics* g, int32_t frame, int32_t x, int32_t y);
void HackRotationSpriteIndexedAnimation_paintXY(HackRotationSpriteIndexedAnimation* this, Graphics* g, int32_t x, int32_t y);
void HackRotationSpriteIndexedAnimation_paint(HackRotationSpriteIndexedAnimation* this, Graphics* g);
void HackRotationSpriteIndexedAnimation_nextRotation(HackRotationSpriteIndexedAnimation* this);
void HackRotationSpriteIndexedAnimation_previousRotation(HackRotationSpriteIndexedAnimation* this);
int32_t HackRotationSpriteIndexedAnimation_getSize(HackRotationSpriteIndexedAnimation* this);
void HackRotationSpriteIndexedAnimation_setFrame(HackRotationSpriteIndexedAnimation* this, int32_t frame);
int32_t HackRotationSpriteIndexedAnimation_getFrame(HackRotationSpriteIndexedAnimation* this);
void HackRotationSpriteIndexedAnimation_setSequence(HackRotationSpriteIndexedAnimation* this, int32_t* sequence);
int32_t* HackRotationSpriteIndexedAnimation_getSequence(HackRotationSpriteIndexedAnimation* this);

static void HackRotationSpriteIndexedAnimation_initFields(HackRotationSpriteIndexedAnimation* this) {
    
    
}


void HackRotationSpriteIndexedAnimation_init(HackRotationSpriteIndexedAnimation* this, Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(360 / JAVA_CALL(AngleInfo_getAngleIncrementInfo(angleInfo), getAngleIncrement)), animationBehavior);
        HackRotationSpriteIndexedAnimation_initFields(this);
        this->sprite = sprite;
        this->image = image;
}

HackRotationSpriteIndexedAnimation* HackRotationSpriteIndexedAnimation_new(Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
    HackRotationSpriteIndexedAnimation* this = calloc(1, sizeof(HackRotationSpriteIndexedAnimation));
    HackRotationSpriteIndexedAnimation_init(this, sprite, image, angleInfo, animationBehavior);
    return this;
}


// throws Exception
int32_t HackRotationSpriteIndexedAnimation_getAnimationSize(HackRotationSpriteIndexedAnimation* this) {
        return HackRotationSpriteIndexedAnimation_getSize(this);
}


void HackRotationSpriteIndexedAnimation_paintFrame(HackRotationSpriteIndexedAnimation* this, Graphics* g, int32_t frame, int32_t x, int32_t y) {
        HackRotationSpriteIndexedAnimation_setFrame(this, frame);
        HackRotationSpriteIndexedAnimation_paintXY(this, g, x, y);
}


void HackRotationSpriteIndexedAnimation_paintXY(HackRotationSpriteIndexedAnimation* this, Graphics* g, int32_t x, int32_t y) {
        Sprite_setPosition(this->sprite, x, y);
        HackRotationSpriteIndexedAnimation_paint(this, g);
}


void HackRotationSpriteIndexedAnimation_paint(HackRotationSpriteIndexedAnimation* this, Graphics* g) {
        Sprite_paint(this->sprite, g);
}


void HackRotationSpriteIndexedAnimation_nextRotation(HackRotationSpriteIndexedAnimation* this) {
        Sprite_nextFrame(this->sprite);
}


void HackRotationSpriteIndexedAnimation_previousRotation(HackRotationSpriteIndexedAnimation* this) {
        Sprite_prevFrame(this->sprite);
}


int32_t HackRotationSpriteIndexedAnimation_getSize(HackRotationSpriteIndexedAnimation* this) {
        return Sprite_getRawFrameCount(this->sprite);
}


void HackRotationSpriteIndexedAnimation_setFrame(HackRotationSpriteIndexedAnimation* this, int32_t frame) {
        Sprite_setFrame(this->sprite, frame);
}


int32_t HackRotationSpriteIndexedAnimation_getFrame(HackRotationSpriteIndexedAnimation* this) {
        return Sprite_getFrame(this->sprite);
}


void HackRotationSpriteIndexedAnimation_setSequence(HackRotationSpriteIndexedAnimation* this, int32_t* sequence) {
}


int32_t* HackRotationSpriteIndexedAnimation_getSequence(HackRotationSpriteIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}

