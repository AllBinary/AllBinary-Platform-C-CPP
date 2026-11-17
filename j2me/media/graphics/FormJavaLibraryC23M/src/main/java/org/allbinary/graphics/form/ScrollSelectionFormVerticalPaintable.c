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

typedef struct ScrollSelectionFormVerticalPaintable ScrollSelectionFormVerticalPaintable;
struct ScrollSelectionFormVerticalPaintable {
    ItemIndexPaintable base;
    ScrollSelectionForm* scrollSelectionForm;
};


ScrollSelectionFormVerticalPaintable* ScrollSelectionFormVerticalPaintable_new(ScrollSelectionForm* scrollSelectionForm);

void ScrollSelectionFormVerticalPaintable_init(ScrollSelectionFormVerticalPaintable* this, ScrollSelectionForm* scrollSelectionForm);
int32_t ScrollSelectionFormVerticalPaintable_paint(ScrollSelectionFormVerticalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void ScrollSelectionFormVerticalPaintable_initFields(ScrollSelectionFormVerticalPaintable* this) {
    
}


void ScrollSelectionFormVerticalPaintable_init(ScrollSelectionFormVerticalPaintable* this, ScrollSelectionForm* scrollSelectionForm) {
    ItemIndexPaintable_init(&this->base);
    ScrollSelectionFormVerticalPaintable_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormVerticalPaintable* ScrollSelectionFormVerticalPaintable_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormVerticalPaintable* this = calloc(1, sizeof(ScrollSelectionFormVerticalPaintable));
    ScrollSelectionFormVerticalPaintable_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormVerticalPaintable_paint(ScrollSelectionFormVerticalPaintable* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_paintItemVertical(this->scrollSelectionForm, graphics, index, item, dx, dy);
}

