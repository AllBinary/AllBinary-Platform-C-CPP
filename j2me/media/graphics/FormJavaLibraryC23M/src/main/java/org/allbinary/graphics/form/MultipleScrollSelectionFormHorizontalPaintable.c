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

typedef struct MultipleScrollSelectionFormHorizontalPaintable MultipleScrollSelectionFormHorizontalPaintable;
struct MultipleScrollSelectionFormHorizontalPaintable {
    ItemIndexPaintable base;
    MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm;
};


MultipleScrollSelectionFormHorizontalPaintable* MultipleScrollSelectionFormHorizontalPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

void MultipleScrollSelectionFormHorizontalPaintable_init(MultipleScrollSelectionFormHorizontalPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);
int32_t MultipleScrollSelectionFormHorizontalPaintable_paint(MultipleScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void MultipleScrollSelectionFormHorizontalPaintable_initFields(MultipleScrollSelectionFormHorizontalPaintable* this) {
    
}


void MultipleScrollSelectionFormHorizontalPaintable_init(MultipleScrollSelectionFormHorizontalPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    ItemIndexPaintable_init(&this->base);
    MultipleScrollSelectionFormHorizontalPaintable_initFields(this);
        this->multipleScrollSelectionForm = multipleScrollSelectionForm;
}

MultipleScrollSelectionFormHorizontalPaintable* MultipleScrollSelectionFormHorizontalPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormHorizontalPaintable* this = calloc(1, sizeof(MultipleScrollSelectionFormHorizontalPaintable));
    MultipleScrollSelectionFormHorizontalPaintable_init(this, multipleScrollSelectionForm);
    return this;
}


// throws Exception
int32_t MultipleScrollSelectionFormHorizontalPaintable_paint(MultipleScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return MultipleScrollSelectionHorizontalForm_paintHorizontal(this->multipleScrollSelectionForm, graphics, index, item, dx, dy);
}

