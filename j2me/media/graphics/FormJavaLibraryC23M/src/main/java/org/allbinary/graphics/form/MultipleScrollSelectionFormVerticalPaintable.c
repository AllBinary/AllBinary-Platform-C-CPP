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
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"

typedef struct MultipleScrollSelectionFormVerticalPaintable MultipleScrollSelectionFormVerticalPaintable;
struct MultipleScrollSelectionFormVerticalPaintable {
    ItemIndexPaintable base;
    MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm;
};


MultipleScrollSelectionFormVerticalPaintable* MultipleScrollSelectionFormVerticalPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

void MultipleScrollSelectionFormVerticalPaintable_init(MultipleScrollSelectionFormVerticalPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);
int32_t MultipleScrollSelectionFormVerticalPaintable_paint(MultipleScrollSelectionFormVerticalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void MultipleScrollSelectionFormVerticalPaintable_initFields(MultipleScrollSelectionFormVerticalPaintable* this) {
    
}


void MultipleScrollSelectionFormVerticalPaintable_init(MultipleScrollSelectionFormVerticalPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    ItemIndexPaintable_init(&this->base);
    MultipleScrollSelectionFormVerticalPaintable_initFields(this);
        this->multipleScrollSelectionForm = multipleScrollSelectionForm;
}

MultipleScrollSelectionFormVerticalPaintable* MultipleScrollSelectionFormVerticalPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormVerticalPaintable* this = calloc(1, sizeof(MultipleScrollSelectionFormVerticalPaintable));
    MultipleScrollSelectionFormVerticalPaintable_init(this, multipleScrollSelectionForm);
    return this;
}


// throws Exception
int32_t MultipleScrollSelectionFormVerticalPaintable_paint(MultipleScrollSelectionFormVerticalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return MultipleScrollSelectionHorizontalForm_paintVertical(this->multipleScrollSelectionForm, graphics, index, item, dx, dy);
}

