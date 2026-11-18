#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLECOMPOSITE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLECOMPOSITE_H
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
typedef struct Paintable Paintable;
typedef struct PaintableInterface PaintableInterface;
typedef struct Graphics Graphics;
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/graphics/paint/PaintableInterface.h")
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#endif

typedef struct PaintableComposite PaintableComposite;
struct PaintableComposite {
    Paintable base;
    PaintableInterface** paintableArray;
};


PaintableComposite* PaintableComposite_new(PaintableInterface** paintableArray);

void PaintableComposite_init(PaintableComposite* this, PaintableInterface** paintableArray);

void PaintableComposite_paint(PaintableComposite* this, Graphics* graphics);

void PaintableComposite_paintThreed(PaintableComposite* this, Graphics* graphics);
#define PaintableComposite_new1 PaintableComposite_new
#define PaintableComposite_init1 PaintableComposite_init
#ifndef PaintableComposite_setBasicColorP
#define PaintableComposite_setBasicColorP Paintable_setBasicColorP
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PaintableComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PaintableComposite_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLECOMPOSITE_H
