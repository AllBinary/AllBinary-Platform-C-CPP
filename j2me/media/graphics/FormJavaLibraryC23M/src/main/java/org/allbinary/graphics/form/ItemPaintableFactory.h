#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEMPAINTABLEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEMPAINTABLEFACTORY_H
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
typedef struct PaintableForm PaintableForm;
#include "org/allbinary/graphics/form/ItemPaintable.h"

typedef struct ItemPaintableFactory ItemPaintableFactory;
struct ItemPaintableFactory {
    ItemPaintable base;
};


ItemPaintableFactory* ItemPaintableFactory_new(void);
void ItemPaintableFactory_init(ItemPaintableFactory* this);

ItemPaintableFactory* ItemPaintableFactory_getInstance(void);

ItemPaintable* ItemPaintableFactory_getInstanceItemPaintable(ItemPaintableFactory* this, PaintableForm* paintableForm);
#ifndef ItemPaintableFactory_paint
#define ItemPaintableFactory_paint ItemPaintable_paint
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ItemPaintableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ItemPaintableFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEMPAINTABLEFACTORY_H
