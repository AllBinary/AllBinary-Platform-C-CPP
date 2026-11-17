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
// package org.allbinary.game.layer

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
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/Layer.h"

typedef struct PaintableLayerComposite PaintableLayerComposite;
struct PaintableLayerComposite {
    Paintable base;
    Layer** paintableArray;
};


PaintableLayerComposite* PaintableLayerComposite_new(Layer** paintableArray);

void PaintableLayerComposite_init(PaintableLayerComposite* this, Layer** paintableArray);
void PaintableLayerComposite_paint(PaintableLayerComposite* this, Graphics* graphics);
void PaintableLayerComposite_paintThreed(PaintableLayerComposite* this, Graphics* graphics);

static void PaintableLayerComposite_initFields(PaintableLayerComposite* this) {
    
}


void PaintableLayerComposite_init(PaintableLayerComposite* this, Layer** paintableArray) {
    Paintable_init(&this->base);
    PaintableLayerComposite_initFields(this);
        this->paintableArray = paintableArray;
}

PaintableLayerComposite* PaintableLayerComposite_new(Layer** paintableArray) {
    PaintableLayerComposite* this = calloc(1, sizeof(PaintableLayerComposite));
    PaintableLayerComposite_init(this, paintableArray);
    return this;
}


void PaintableLayerComposite_paint(PaintableLayerComposite* this, Graphics* graphics) {
        for (int32_t index = java_array_length(this->paintableArray); --index >= 0; ) {
            JAVA_CALL(this->paintableArray[index], paint, graphics);
        }
}


void PaintableLayerComposite_paintThreed(PaintableLayerComposite* this, Graphics* graphics) {
        PaintableInterface* paintableInterface = nullptr;
        for (int32_t index = java_array_length(this->paintableArray); --index >= 0; ) {
            paintableInterface = ((PaintableInterface*) this->paintableArray[index]);
            PaintableInterface_paintThreed(paintableInterface, graphics);
        }
}

