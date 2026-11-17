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
#include "org/allbinary/graphics/form/ItemPaintable.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/PaintableForm.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"

typedef struct PreGameLockableFormPaintableFactory PreGameLockableFormPaintableFactory;
struct PreGameLockableFormPaintableFactory {
    ItemPaintableFactory base;
    int32_t lockedIndex;
};


PreGameLockableFormPaintableFactory* PreGameLockableFormPaintableFactory_new(int32_t lockedIndex);

void PreGameLockableFormPaintableFactory_init(PreGameLockableFormPaintableFactory* this, int32_t lockedIndex);
ItemPaintable* PreGameLockableFormPaintableFactory_getInstanceItemPaintable(PreGameLockableFormPaintableFactory* this, PaintableForm* paintableForm);

static void PreGameLockableFormPaintableFactory_initFields(PreGameLockableFormPaintableFactory* this) {
    
}


void PreGameLockableFormPaintableFactory_init(PreGameLockableFormPaintableFactory* this, int32_t lockedIndex) {
    ItemPaintableFactory_init(&this->base);
    PreGameLockableFormPaintableFactory_initFields(this);
        this->lockedIndex = lockedIndex;
}

PreGameLockableFormPaintableFactory* PreGameLockableFormPaintableFactory_new(int32_t lockedIndex) {
    PreGameLockableFormPaintableFactory* this = calloc(1, sizeof(PreGameLockableFormPaintableFactory));
    PreGameLockableFormPaintableFactory_init(this, lockedIndex);
    return this;
}


// throws Exception
ItemPaintable* PreGameLockableFormPaintableFactory_getInstanceItemPaintable(PreGameLockableFormPaintableFactory* this, PaintableForm* paintableForm) {
        return PreGameLockablePaintable_new(((ScrollCurrentSelectionForm*) paintableForm), this->lockedIndex);
}

