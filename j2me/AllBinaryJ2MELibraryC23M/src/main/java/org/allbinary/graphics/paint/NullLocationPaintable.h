#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_NULLLOCATIONPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_NULLLOCATIONPAINTABLE_H
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
typedef struct LocationPaintable LocationPaintable;
#include "org/allbinary/graphics/paint/LocationPaintable.h"

typedef struct NullLocationPaintable NullLocationPaintable;
struct NullLocationPaintable {
    LocationPaintable base;
};


NullLocationPaintable* NullLocationPaintable_new(void);
void NullLocationPaintable_init(NullLocationPaintable* this);

NullLocationPaintable* NullLocationPaintable_getInstance(void);
#ifndef NullLocationPaintable_paintXY
#define NullLocationPaintable_paintXY LocationPaintable_paintXY
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullLocationPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullLocationPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_NULLLOCATIONPAINTABLE_H
