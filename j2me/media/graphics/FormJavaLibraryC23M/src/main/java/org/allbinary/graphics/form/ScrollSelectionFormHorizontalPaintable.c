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

typedef struct ScrollSelectionFormHorizontalPaintable ScrollSelectionFormHorizontalPaintable;
struct ScrollSelectionFormHorizontalPaintable {
    ItemIndexPaintable base;
    ScrollSelectionForm* scrollSelectionForm;
};


ScrollSelectionFormHorizontalPaintable* ScrollSelectionFormHorizontalPaintable_new(ScrollSelectionForm* scrollSelectionForm);

void ScrollSelectionFormHorizontalPaintable_init(ScrollSelectionFormHorizontalPaintable* this, ScrollSelectionForm* scrollSelectionForm);
int32_t ScrollSelectionFormHorizontalPaintable_paint(ScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void ScrollSelectionFormHorizontalPaintable_initFields(ScrollSelectionFormHorizontalPaintable* this) {
    
}


void ScrollSelectionFormHorizontalPaintable_init(ScrollSelectionFormHorizontalPaintable* this, ScrollSelectionForm* scrollSelectionForm) {
    ItemIndexPaintable_init(&this->base);
    ScrollSelectionFormHorizontalPaintable_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormHorizontalPaintable* ScrollSelectionFormHorizontalPaintable_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormHorizontalPaintable* this = calloc(1, sizeof(ScrollSelectionFormHorizontalPaintable));
    ScrollSelectionFormHorizontalPaintable_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormHorizontalPaintable_paint(ScrollSelectionFormHorizontalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_paintItemHorizontal(this->scrollSelectionForm, graphics, index, item, dx, dy);
}

