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
// package org.allbinary.graphics.canvas.transition.progress

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

typedef struct ProgressPaintable ProgressPaintable;
struct ProgressPaintable {
    Paintable base;
    ProgressCanvas* progressCanvas;
};


ProgressPaintable* ProgressPaintable_new(ProgressCanvas* progressCanvas);

void ProgressPaintable_init(ProgressPaintable* this, ProgressCanvas* progressCanvas);
void ProgressPaintable_paint(ProgressPaintable* this, Graphics* graphics);

static void ProgressPaintable_initFields(ProgressPaintable* this) {
    
}


void ProgressPaintable_init(ProgressPaintable* this, ProgressCanvas* progressCanvas) {
    Paintable_init(&this->base);
    ProgressPaintable_initFields(this);
        this->progressCanvas = progressCanvas;
}

ProgressPaintable* ProgressPaintable_new(ProgressCanvas* progressCanvas) {
    ProgressPaintable* this = calloc(1, sizeof(ProgressPaintable));
    ProgressPaintable_init(this, progressCanvas);
    return this;
}


void ProgressPaintable_paint(ProgressPaintable* this, Graphics* graphics) {
        ProgressCanvas_paint2(this->progressCanvas, graphics);
}

