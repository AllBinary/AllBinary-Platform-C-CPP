#ifndef ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_H
#define ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_H
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
typedef struct Graphics Graphics;
typedef struct Paintable Paintable;
typedef struct PaintableInterface PaintableInterface;
typedef struct Layer Layer;
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/layer/Layer.h")
#include "org/allbinary/layer/Layer.h"
#endif

typedef struct PaintableLayerComposite PaintableLayerComposite;
struct PaintableLayerComposite {
    Paintable base;
    Layer** paintableArray;
};


PaintableLayerComposite* PaintableLayerComposite_new(Layer** paintableArray);

void PaintableLayerComposite_init(PaintableLayerComposite* this, Layer** paintableArray);

void PaintableLayerComposite_paint(PaintableLayerComposite* this, Graphics* graphics);

void PaintableLayerComposite_paintThreed(PaintableLayerComposite* this, Graphics* graphics);
#define PaintableLayerComposite_new1 PaintableLayerComposite_new
#define PaintableLayerComposite_init1 PaintableLayerComposite_init
#ifndef PaintableLayerComposite_setBasicColorP
#define PaintableLayerComposite_setBasicColorP Paintable_setBasicColorP
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PaintableLayerComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PaintableLayerComposite_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_H
