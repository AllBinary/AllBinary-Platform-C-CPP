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

typedef struct FormPaintable FormPaintable;
struct FormPaintable {
    Paintable base;
    PaintableForm* form;
};


FormPaintable* FormPaintable_new(PaintableForm* form);

void FormPaintable_init(FormPaintable* this, PaintableForm* form);
void FormPaintable_paint(FormPaintable* this, Graphics* graphics);
PaintableForm* FormPaintable_getForm(FormPaintable* this);

static void FormPaintable_initFields(FormPaintable* this) {
    
}


void FormPaintable_init(FormPaintable* this, PaintableForm* form) {
    Paintable_init(&this->base);
    FormPaintable_initFields(this);
        this->form = form;
}

FormPaintable* FormPaintable_new(PaintableForm* form) {
    FormPaintable* this = calloc(1, sizeof(FormPaintable));
    FormPaintable_init(this, form);
    return this;
}


void FormPaintable_paint(FormPaintable* this, Graphics* graphics) {
        PaintableForm_paint(this->form, graphics);
}


PaintableForm* FormPaintable_getForm(FormPaintable* this) {
        return this->form;
}

