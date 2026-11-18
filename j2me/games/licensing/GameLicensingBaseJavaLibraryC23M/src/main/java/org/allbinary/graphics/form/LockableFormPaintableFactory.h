#ifndef ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H
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
typedef struct ItemPaintableFactory ItemPaintableFactory;
typedef struct LockablePaintable LockablePaintable;
typedef struct ItemPaintable ItemPaintable;
typedef struct PaintableForm PaintableForm;
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"

typedef struct LockableFormPaintableFactory LockableFormPaintableFactory;
struct LockableFormPaintableFactory {
    ItemPaintableFactory base;
    int32_t lockedIndex;
};


LockableFormPaintableFactory* LockableFormPaintableFactory_new(int32_t lockedIndex);

void LockableFormPaintableFactory_init(LockableFormPaintableFactory* this, int32_t lockedIndex);

ItemPaintable* LockableFormPaintableFactory_getInstanceItemPaintable(LockableFormPaintableFactory* this, PaintableForm* paintableForm);
#define LockableFormPaintableFactory_new1 LockableFormPaintableFactory_new
#define LockableFormPaintableFactory_init1 LockableFormPaintableFactory_init
#ifndef LockableFormPaintableFactory_getInstance
#define LockableFormPaintableFactory_getInstance ItemPaintableFactory_getInstance
#endif
#ifndef LockableFormPaintableFactory_paint
#define LockableFormPaintableFactory_paint ItemPaintable_paint
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LockableFormPaintableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LockableFormPaintableFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_H
