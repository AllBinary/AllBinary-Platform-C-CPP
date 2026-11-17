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
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct SpriteIndexedAnimation SpriteIndexedAnimation;
struct SpriteIndexedAnimation {
    IndexedAnimation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    Sprite* sprite;
    Image* image;
    BasicColor** basicColorArray;
};


SpriteIndexedAnimation* SpriteIndexedAnimation_new(Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior);

void SpriteIndexedAnimation_init(SpriteIndexedAnimation* this, Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior);
int32_t SpriteIndexedAnimation_getAnimationSize(SpriteIndexedAnimation* this);
void SpriteIndexedAnimation_setBasicColorP(SpriteIndexedAnimation* this, BasicColor* basicColor);
BasicColor* SpriteIndexedAnimation_getBasicColorP(SpriteIndexedAnimation* this);
void SpriteIndexedAnimation_paintFrame(SpriteIndexedAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y);
void SpriteIndexedAnimation_paintXY(SpriteIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void SpriteIndexedAnimation_paint(SpriteIndexedAnimation* this, Graphics* graphics);
void SpriteIndexedAnimation_nextFrame(SpriteIndexedAnimation* this);
void SpriteIndexedAnimation_previousFrame(SpriteIndexedAnimation* this);
int32_t SpriteIndexedAnimation_getSize(SpriteIndexedAnimation* this);
void SpriteIndexedAnimation_setFrame(SpriteIndexedAnimation* this, int32_t frame);
int32_t SpriteIndexedAnimation_getFrame(SpriteIndexedAnimation* this);
bool SpriteIndexedAnimation_isLastFrame(SpriteIndexedAnimation* this);
int32_t SpriteIndexedAnimation_getLastFrame(SpriteIndexedAnimation* this);
void SpriteIndexedAnimation_setSequence(SpriteIndexedAnimation* this, int32_t* sequence);
int32_t* SpriteIndexedAnimation_getSequence(SpriteIndexedAnimation* this);
void SpriteIndexedAnimation_close(SpriteIndexedAnimation* this);
void SpriteIndexedAnimation_finalize(SpriteIndexedAnimation* this);

static void SpriteIndexedAnimation_initFields(SpriteIndexedAnimation* this) {
    
    
    
}


void SpriteIndexedAnimation_init(SpriteIndexedAnimation* this, Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        SpriteIndexedAnimation_initFields(this);
        this->sprite = sprite;
        this->image = image;
        this->basicColorArray = basicColorArray;
        if (java_array_length(this->basicColorArray) != 0 && SpriteIndexedAnimation_getSize(this) != java_array_length(this->basicColorArray)) {
            java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->TOTAL_LABEL), appendint, SpriteIndexedAnimation_getSize(this)), append, "!="), appendint, java_array_length(this->basicColorArray)), toString)));
        }
}

SpriteIndexedAnimation* SpriteIndexedAnimation_new(Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior) {
    SpriteIndexedAnimation* this = calloc(1, sizeof(SpriteIndexedAnimation));
    SpriteIndexedAnimation_init(this, sprite, image, basicColorArray, animationBehavior);
    return this;
}


// throws Exception
int32_t SpriteIndexedAnimation_getAnimationSize(SpriteIndexedAnimation* this) {
        return SpriteIndexedAnimation_getSize(this);
}


void SpriteIndexedAnimation_setBasicColorP(SpriteIndexedAnimation* this, BasicColor* basicColor) {
        for (int32_t index = 0; index < java_array_length(this->basicColorArray); index++) {
            if (basicColor == this->basicColorArray[index]) {
                SpriteIndexedAnimation_setFrame(this, index);
                break;
            }
        }
}


BasicColor* SpriteIndexedAnimation_getBasicColorP(SpriteIndexedAnimation* this) {
        if (java_array_length(this->basicColorArray) < SpriteIndexedAnimation_getFrame(this)) {
            return this->basicColorArray[SpriteIndexedAnimation_getFrame(this)];
        } else {
            return BasicColorFactory_getInstance()->WHITE;
        }
}


void SpriteIndexedAnimation_paintFrame(SpriteIndexedAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y) {
        SpriteIndexedAnimation_setFrame(this, frame);
        Sprite_setPosition(this->sprite, x, y);
        Sprite_paint(this->sprite, graphics);
}


void SpriteIndexedAnimation_paintXY(SpriteIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Sprite_setPosition(this->sprite, x, y);
        Sprite_paint(this->sprite, graphics);
}


void SpriteIndexedAnimation_paint(SpriteIndexedAnimation* this, Graphics* graphics) {
        Sprite_paint(this->sprite, graphics);
}


void SpriteIndexedAnimation_nextFrame(SpriteIndexedAnimation* this) {
        Sprite_nextFrame(this->sprite);
}


void SpriteIndexedAnimation_previousFrame(SpriteIndexedAnimation* this) {
        Sprite_prevFrame(this->sprite);
}


int32_t SpriteIndexedAnimation_getSize(SpriteIndexedAnimation* this) {
        return Sprite_getRawFrameCount(this->sprite);
}


void SpriteIndexedAnimation_setFrame(SpriteIndexedAnimation* this, int32_t frame) {
        Sprite_setFrame(this->sprite, frame);
}


int32_t SpriteIndexedAnimation_getFrame(SpriteIndexedAnimation* this) {
        return Sprite_getFrame(this->sprite);
}


bool SpriteIndexedAnimation_isLastFrame(SpriteIndexedAnimation* this) {
        if (Sprite_getFrame(this->sprite) == SpriteIndexedAnimation_getSize(this) - 1) {
            return true;
        } else {
            return false;
        }
}


int32_t SpriteIndexedAnimation_getLastFrame(SpriteIndexedAnimation* this) {
        return SpriteIndexedAnimation_getSize(this);
}


void SpriteIndexedAnimation_setSequence(SpriteIndexedAnimation* this, int32_t* sequence) {
}


int32_t* SpriteIndexedAnimation_getSequence(SpriteIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


// throws Exception
void SpriteIndexedAnimation_close(SpriteIndexedAnimation* this) {
}


// throws Throwable
void SpriteIndexedAnimation_finalize(SpriteIndexedAnimation* this) {
}

