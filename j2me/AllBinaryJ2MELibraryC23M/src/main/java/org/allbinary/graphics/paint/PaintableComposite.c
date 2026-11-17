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
// package org.allbinary.graphics.paint

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

typedef struct PaintableComposite PaintableComposite;
struct PaintableComposite {
    Paintable base;
    PaintableInterface** paintableArray;
};


PaintableComposite* PaintableComposite_new(PaintableInterface** paintableArray);

void PaintableComposite_init(PaintableComposite* this, PaintableInterface** paintableArray);
void PaintableComposite_paint(PaintableComposite* this, Graphics* graphics);
void PaintableComposite_paintThreed(PaintableComposite* this, Graphics* graphics);

static void PaintableComposite_initFields(PaintableComposite* this) {
    
}


void PaintableComposite_init(PaintableComposite* this, PaintableInterface** paintableArray) {
    Paintable_init(&this->base);
    PaintableComposite_initFields(this);
        this->paintableArray = paintableArray;
}

PaintableComposite* PaintableComposite_new(PaintableInterface** paintableArray) {
    PaintableComposite* this = calloc(1, sizeof(PaintableComposite));
    PaintableComposite_init(this, paintableArray);
    return this;
}


void PaintableComposite_paint(PaintableComposite* this, Graphics* graphics) {
        for (int32_t index = java_array_length(this->paintableArray) - 1; index >= 0; index--) {
            JAVA_CALL(this->paintableArray[index], paint, graphics);
        }
}


void PaintableComposite_paintThreed(PaintableComposite* this, Graphics* graphics) {
        for (int32_t index = java_array_length(this->paintableArray) - 1; index >= 0; index--) {
            JAVA_CALL(this->paintableArray[index], paintThreed, graphics);
        }
}

