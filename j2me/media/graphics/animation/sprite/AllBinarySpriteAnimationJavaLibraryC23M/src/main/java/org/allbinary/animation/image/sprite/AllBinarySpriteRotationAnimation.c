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
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h"

typedef struct AllBinarySpriteRotationAnimation AllBinarySpriteRotationAnimation;
struct AllBinarySpriteRotationAnimation {
    HackRotationSpriteIndexedAnimation base;
};


AllBinarySpriteRotationAnimation* AllBinarySpriteRotationAnimation_new(Sprite* sprite, Image* image, AnimationBehavior* animationBehavior);

void AllBinarySpriteRotationAnimation_init(AllBinarySpriteRotationAnimation* this, Sprite* sprite, Image* image, AnimationBehavior* animationBehavior);
void AllBinarySpriteRotationAnimation_nextRotation(AllBinarySpriteRotationAnimation* this);
void AllBinarySpriteRotationAnimation_previousRotation(AllBinarySpriteRotationAnimation* this);
void AllBinarySpriteRotationAnimation_setFrameByDirection(AllBinarySpriteRotationAnimation* this, Direction* direction);
void AllBinarySpriteRotationAnimation_setFrameToAngle(AllBinarySpriteRotationAnimation* this, Angle* angle);
void AllBinarySpriteRotationAnimation_setFrame(AllBinarySpriteRotationAnimation* this, int32_t index);
void AllBinarySpriteRotationAnimation_adjustFrameToAngle(AllBinarySpriteRotationAnimation* this, Angle* angle);
void AllBinarySpriteRotationAnimation_adjustFrame(AllBinarySpriteRotationAnimation* this, int16_t angle);


void AllBinarySpriteRotationAnimation_init(AllBinarySpriteRotationAnimation* this, Sprite* sprite, Image* image, AnimationBehavior* animationBehavior) {
        HackRotationSpriteIndexedAnimation_init(&this->base, sprite, image, AngleInfo_getInstance(((int16_t) (AngleFactory_getInstance()->TOTAL_ANGLE / Sprite_getRawFrameCount(sprite)))), animationBehavior);
        JAVA_CALL(this->angleInfo, adjustAngle, Sprite_getFrame(this->sprite));
}

AllBinarySpriteRotationAnimation* AllBinarySpriteRotationAnimation_new(Sprite* sprite, Image* image, AnimationBehavior* animationBehavior) {
    AllBinarySpriteRotationAnimation* this = calloc(1, sizeof(AllBinarySpriteRotationAnimation));
    AllBinarySpriteRotationAnimation_init(this, sprite, image, animationBehavior);
    return this;
}


void AllBinarySpriteRotationAnimation_nextRotation(AllBinarySpriteRotationAnimation* this) {
        Sprite_nextFrame(this->sprite);
        JAVA_CALL(this->angleInfo, adjustAngle, Sprite_getFrame(this->sprite));
}


void AllBinarySpriteRotationAnimation_previousRotation(AllBinarySpriteRotationAnimation* this) {
        Sprite_prevFrame(this->sprite);
        JAVA_CALL(this->angleInfo, adjustAngle, Sprite_getFrame(this->sprite));
}


void AllBinarySpriteRotationAnimation_setFrameByDirection(AllBinarySpriteRotationAnimation* this, Direction* direction) {
        Angle* angle = JAVA_CALL(this->directionUtil, getFrameAngle, direction);
        AllBinarySpriteRotationAnimation_adjustFrameToAngle(this, angle);
}


void AllBinarySpriteRotationAnimation_setFrameToAngle(AllBinarySpriteRotationAnimation* this, Angle* angle) {
        AllBinarySpriteRotationAnimation_adjustFrameToAngle(this, angle);
}


void AllBinarySpriteRotationAnimation_setFrame(AllBinarySpriteRotationAnimation* this, int32_t index) {
        Sprite_setFrame(this->sprite, index);
        JAVA_CALL(this->angleInfo, adjustAngle, AllBinarySpriteRotationAnimation_getFrame(this));
}


void AllBinarySpriteRotationAnimation_adjustFrameToAngle(AllBinarySpriteRotationAnimation* this, Angle* angle) {
        AllBinarySpriteRotationAnimation_adjustFrame(this, Angle_getValue(angle));
}


void AllBinarySpriteRotationAnimation_adjustFrame(AllBinarySpriteRotationAnimation* this, int16_t angle) {
        AllBinarySpriteRotationAnimation_setFrame(this, JAVA_CALL(this->frameUtil, getFrameForAngle, angle, ((int32_t) JAVA_CALL(JAVA_CALL(this->angleInfo, getAngleIncrementInfo), getAngleIncrement))));
}

