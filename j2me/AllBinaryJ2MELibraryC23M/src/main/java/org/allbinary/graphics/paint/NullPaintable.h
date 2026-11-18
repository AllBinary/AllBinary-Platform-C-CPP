#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_H
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
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct NullPaintable NullPaintable;
struct NullPaintable {
    Paintable base;
};


NullPaintable* NullPaintable_new(void);

void NullPaintable_init(NullPaintable* this);

Paintable* NullPaintable_getInstance(void);
#define NullPaintable_new0 NullPaintable_new
#define NullPaintable_init0 NullPaintable_init
#ifndef NullPaintable_setBasicColorP
#define NullPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef NullPaintable_paint
#define NullPaintable_paint Paintable_paint
#endif
#ifndef NullPaintable_paintThreed
#define NullPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_NULLPAINTABLE_H
