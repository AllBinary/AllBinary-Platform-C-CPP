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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"

typedef struct AnimationCompositePaintable AnimationCompositePaintable;
struct AnimationCompositePaintable {
    InitUpdatePaintable base;
    Animation* animationInterface;
};


AnimationCompositePaintable* AnimationCompositePaintable_new(Animation* animationInterface);

void AnimationCompositePaintable_init(AnimationCompositePaintable* this, Animation* animationInterface);
void AnimationCompositePaintable_paint(AnimationCompositePaintable* this, Graphics* graphics);
void AnimationCompositePaintable_paintThreed(AnimationCompositePaintable* this, Graphics* graphics);

static void AnimationCompositePaintable_initFields(AnimationCompositePaintable* this) {
    
}


void AnimationCompositePaintable_init(AnimationCompositePaintable* this, Animation* animationInterface) {
    InitUpdatePaintable_init(&this->base);
    AnimationCompositePaintable_initFields(this);
        this->animationInterface = animationInterface;
}

AnimationCompositePaintable* AnimationCompositePaintable_new(Animation* animationInterface) {
    AnimationCompositePaintable* this = calloc(1, sizeof(AnimationCompositePaintable));
    AnimationCompositePaintable_init(this, animationInterface);
    return this;
}


void AnimationCompositePaintable_paint(AnimationCompositePaintable* this, Graphics* graphics) {
        Animation_paintXY(this->animationInterface, graphics, 0, 0);
}


void AnimationCompositePaintable_paintThreed(AnimationCompositePaintable* this, Graphics* graphics) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, 0, 0, 0);
}

