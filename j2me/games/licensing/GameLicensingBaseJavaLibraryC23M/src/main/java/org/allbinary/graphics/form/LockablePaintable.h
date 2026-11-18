#ifndef ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEPAINTABLE_H
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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ItemPaintable ItemPaintable;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct LockedResources LockedResources;
typedef struct LockedUtil LockedUtil;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/graphics/form/ItemPaintable.h"

typedef struct LockablePaintable LockablePaintable;
struct LockablePaintable {
    ItemPaintable base;
    Animation* animation;
    int32_t lockedIndex;
};


LockablePaintable* LockablePaintable_new(int32_t lockedIndex);

void LockablePaintable_init(LockablePaintable* this, int32_t lockedIndex);

void LockablePaintable_paint(LockablePaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y);

int32_t LockablePaintable_getLockedIndex(LockablePaintable* this);

Animation* LockablePaintable_getAnimation(LockablePaintable* this);
#define LockablePaintable_new1 LockablePaintable_new
#define LockablePaintable_init1 LockablePaintable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LockablePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LockablePaintable_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEPAINTABLE_H
