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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockedResources.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#include "org/allbinary/graphics/form/LockablePaintable.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"

typedef struct PreGameLockablePaintable PreGameLockablePaintable;
struct PreGameLockablePaintable {
    LockablePaintable base;
    int32_t halfWidth;
    ScrollCurrentSelectionForm* paintableForm;
};


PreGameLockablePaintable* PreGameLockablePaintable_new(ScrollCurrentSelectionForm* paintableForm, int32_t lockedIndex);

void PreGameLockablePaintable_init(PreGameLockablePaintable* this, ScrollCurrentSelectionForm* paintableForm, int32_t lockedIndex);
void PreGameLockablePaintable_paint(PreGameLockablePaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y);
ScrollCurrentSelectionForm* PreGameLockablePaintable_getPaintableForm(PreGameLockablePaintable* this);

static void PreGameLockablePaintable_initFields(PreGameLockablePaintable* this) {
    
    
}


void PreGameLockablePaintable_init(PreGameLockablePaintable* this, ScrollCurrentSelectionForm* paintableForm, int32_t lockedIndex) {
        LockablePaintable_init(&this->base, lockedIndex);
        PreGameLockablePaintable_initFields(this);
        this->paintableForm = paintableForm;
        this->halfWidth = JAVA_CALL(GameFeatureImageCacheFactory_getWithKey(GameFeatureImageCacheFactory_getInstance(), LockedResources_getInstance()->LOCKED_DEMO_GAME_FEATURE_RESOURCE), getWidth) / 2;
}

PreGameLockablePaintable* PreGameLockablePaintable_new(ScrollCurrentSelectionForm* paintableForm, int32_t lockedIndex) {
    PreGameLockablePaintable* this = calloc(1, sizeof(PreGameLockablePaintable));
    PreGameLockablePaintable_init(this, paintableForm, lockedIndex);
    return this;
}


void PreGameLockablePaintable_paint(PreGameLockablePaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y) {
        if (LockedUtil_isLocked(LockedUtil_getInstance()) && JAVA_CALL(PreGameLockablePaintable_getPaintableForm(this), getSelectedIndex) >= PreGameLockablePaintable_getLockedIndex(this)) {
            JAVA_CALL(PreGameLockablePaintable_getAnimation(this), paintXY, graphics, JAVA_CALL(PreGameLockablePaintable_getPaintableForm(this), getDx) - this->halfWidth, JAVA_CALL(PreGameLockablePaintable_getPaintableForm(this), getDy) + 34);
        }
}


ScrollCurrentSelectionForm* PreGameLockablePaintable_getPaintableForm(PreGameLockablePaintable* this) {
        return this->paintableForm;
}

