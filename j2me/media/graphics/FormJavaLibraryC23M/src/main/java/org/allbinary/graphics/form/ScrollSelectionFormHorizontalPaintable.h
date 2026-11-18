#ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORMHORIZONTALPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORMHORIZONTALPAINTABLE_H
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
typedef struct ItemIndexPaintable ItemIndexPaintable;
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct Graphics Graphics;
typedef struct ABCustomItem ABCustomItem;
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif

typedef struct ScrollSelectionFormHorizontalPaintable ScrollSelectionFormHorizontalPaintable;
struct ScrollSelectionFormHorizontalPaintable {
    ItemIndexPaintable base;
    ScrollSelectionForm* scrollSelectionForm;
};


ScrollSelectionFormHorizontalPaintable* ScrollSelectionFormHorizontalPaintable_new(ScrollSelectionForm* scrollSelectionForm);

void ScrollSelectionFormHorizontalPaintable_init(ScrollSelectionFormHorizontalPaintable* this, ScrollSelectionForm* scrollSelectionForm);

int32_t ScrollSelectionFormHorizontalPaintable_paint(ScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
#define ScrollSelectionFormHorizontalPaintable_new1 ScrollSelectionFormHorizontalPaintable_new
#define ScrollSelectionFormHorizontalPaintable_init1 ScrollSelectionFormHorizontalPaintable_init
#ifndef ScrollSelectionFormHorizontalPaintable_getInstance
#define ScrollSelectionFormHorizontalPaintable_getInstance ItemIndexPaintable_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollSelectionFormHorizontalPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollSelectionFormHorizontalPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORMHORIZONTALPAINTABLE_H
