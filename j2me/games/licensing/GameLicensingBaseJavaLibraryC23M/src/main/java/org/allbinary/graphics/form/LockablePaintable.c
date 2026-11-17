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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockedResources.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
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

static void LockablePaintable_initFields(LockablePaintable* this) {
    this->animation = JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), LockedResources_getInstance()->LOCKED_DEMO_GAME_FEATURE_RESOURCE), getInstance, 0);
    
}


void LockablePaintable_init(LockablePaintable* this, int32_t lockedIndex) {
    ItemPaintable_init(&this->base);
    LockablePaintable_initFields(this);
        this->lockedIndex = lockedIndex;
}

LockablePaintable* LockablePaintable_new(int32_t lockedIndex) {
    LockablePaintable* this = calloc(1, sizeof(LockablePaintable));
    LockablePaintable_init(this, lockedIndex);
    return this;
}


void LockablePaintable_paint(LockablePaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y) {
        if (LockedUtil_isLocked(LockedUtil_getInstance()) && currentIndex >= LockablePaintable_getLockedIndex(this)) {
            JAVA_CALL(LockablePaintable_getAnimation(this), paintXY, graphics, x, y);
        }
}


int32_t LockablePaintable_getLockedIndex(LockablePaintable* this) {
        return this->lockedIndex;
}


Animation* LockablePaintable_getAnimation(LockablePaintable* this) {
        return this->animation;
}

