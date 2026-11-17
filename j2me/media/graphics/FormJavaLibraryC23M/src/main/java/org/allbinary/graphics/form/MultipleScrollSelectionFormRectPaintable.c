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
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct MultipleScrollSelectionFormRectPaintable MultipleScrollSelectionFormRectPaintable;
struct MultipleScrollSelectionFormRectPaintable {
    Paintable base;
    MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm;
};


MultipleScrollSelectionFormRectPaintable* MultipleScrollSelectionFormRectPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);

void MultipleScrollSelectionFormRectPaintable_init(MultipleScrollSelectionFormRectPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm);
void MultipleScrollSelectionFormRectPaintable_paint(MultipleScrollSelectionFormRectPaintable* this, Graphics* graphics);

static void MultipleScrollSelectionFormRectPaintable_initFields(MultipleScrollSelectionFormRectPaintable* this) {
    
}


void MultipleScrollSelectionFormRectPaintable_init(MultipleScrollSelectionFormRectPaintable* this, MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    Paintable_init(&this->base);
    MultipleScrollSelectionFormRectPaintable_initFields(this);
        this->multipleScrollSelectionForm = multipleScrollSelectionForm;
}

MultipleScrollSelectionFormRectPaintable* MultipleScrollSelectionFormRectPaintable_new(MultipleScrollSelectionHorizontalForm* multipleScrollSelectionForm) {
    MultipleScrollSelectionFormRectPaintable* this = calloc(1, sizeof(MultipleScrollSelectionFormRectPaintable));
    MultipleScrollSelectionFormRectPaintable_init(this, multipleScrollSelectionForm);
    return this;
}


void MultipleScrollSelectionFormRectPaintable_paint(MultipleScrollSelectionFormRectPaintable* this, Graphics* graphics) {
        MultipleScrollSelectionHorizontalForm_fillRect(this->multipleScrollSelectionForm, graphics);
}

