#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H
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
typedef struct InitUpdatePaintable InitUpdatePaintable;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
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
#define AnimationCompositePaintable_new1 AnimationCompositePaintable_new
#define AnimationCompositePaintable_init1 AnimationCompositePaintable_init
#ifndef AnimationCompositePaintable_update
#define AnimationCompositePaintable_update InitUpdatePaintable_update
#endif
#ifndef AnimationCompositePaintable_setBasicColorP
#define AnimationCompositePaintable_setBasicColorP Paintable_setBasicColorP
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationCompositePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationCompositePaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H
