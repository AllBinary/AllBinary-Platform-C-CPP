#ifndef ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONFORMHORIZONTALPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONFORMHORIZONTALPAINTABLE_H
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
typedef struct MultipleScrollSelectionHorizontalForm MultipleScrollSelectionHorizontalForm;
typedef struct Graphics Graphics;
typedef struct ABCustomItem ABCustomItem;
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#if __has_include("org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h")
#include "org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h"
#endif

typedef struct MultipleScrollSelectionFormHorizontalPaintable MultipleScrollSelectionFormHorizontalPaintable;
struct MultipleScrollSelectionFormHorizontalPaintable {
    ItemIndexPaintable base;
    MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm;
};


MultipleScrollSelectionFormHorizontalPaintable* MultipleScrollSelectionFormHorizontalPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

void MultipleScrollSelectionFormHorizontalPaintable_init(MultipleScrollSelectionFormHorizontalPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

int32_t MultipleScrollSelectionFormHorizontalPaintable_paint(MultipleScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
#define MultipleScrollSelectionFormHorizontalPaintable_new1 MultipleScrollSelectionFormHorizontalPaintable_new
#define MultipleScrollSelectionFormHorizontalPaintable_init1 MultipleScrollSelectionFormHorizontalPaintable_init
#ifndef MultipleScrollSelectionFormHorizontalPaintable_getInstance
#define MultipleScrollSelectionFormHorizontalPaintable_getInstance ItemIndexPaintable_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MultipleScrollSelectionFormHorizontalPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MultipleScrollSelectionFormHorizontalPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_MULTIPLESCROLLSELECTIONFORMHORIZONTALPAINTABLE_H
