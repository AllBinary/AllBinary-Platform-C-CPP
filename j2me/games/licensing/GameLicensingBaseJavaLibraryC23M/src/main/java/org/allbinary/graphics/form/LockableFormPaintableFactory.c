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
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"

typedef struct LockableFormPaintableFactory LockableFormPaintableFactory;
struct LockableFormPaintableFactory {
    ItemPaintableFactory base;
    int32_t lockedIndex;
};


LockableFormPaintableFactory* LockableFormPaintableFactory_new(int32_t lockedIndex);

void LockableFormPaintableFactory_init(LockableFormPaintableFactory* this, int32_t lockedIndex);
ItemPaintable* LockableFormPaintableFactory_getInstanceItemPaintable(LockableFormPaintableFactory* this, PaintableForm* paintableForm);

static void LockableFormPaintableFactory_initFields(LockableFormPaintableFactory* this) {
    
}


void LockableFormPaintableFactory_init(LockableFormPaintableFactory* this, int32_t lockedIndex) {
    ItemPaintableFactory_init(&this->base);
    LockableFormPaintableFactory_initFields(this);
        this->lockedIndex = lockedIndex;
}

LockableFormPaintableFactory* LockableFormPaintableFactory_new(int32_t lockedIndex) {
    LockableFormPaintableFactory* this = calloc(1, sizeof(LockableFormPaintableFactory));
    LockableFormPaintableFactory_init(this, lockedIndex);
    return this;
}


// throws Exception
ItemPaintable* LockableFormPaintableFactory_getInstanceItemPaintable(LockableFormPaintableFactory* this, PaintableForm* paintableForm) {
        return LockablePaintable_new(this->lockedIndex);
}

