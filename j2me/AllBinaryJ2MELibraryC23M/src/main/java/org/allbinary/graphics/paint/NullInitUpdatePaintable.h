#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_NULLINITUPDATEPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_NULLINITUPDATEPAINTABLE_H
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
typedef struct InitUpdatePaintable InitUpdatePaintable;
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"

typedef struct NullInitUpdatePaintable NullInitUpdatePaintable;
struct NullInitUpdatePaintable {
    InitUpdatePaintable base;
};


NullInitUpdatePaintable* NullInitUpdatePaintable_new(void);

void NullInitUpdatePaintable_init(NullInitUpdatePaintable* this);

InitUpdatePaintable* NullInitUpdatePaintable_getInstance(void);
#define NullInitUpdatePaintable_new0 NullInitUpdatePaintable_new
#define NullInitUpdatePaintable_init0 NullInitUpdatePaintable_init
#ifndef NullInitUpdatePaintable_update
#define NullInitUpdatePaintable_update InitUpdatePaintable_update
#endif
#ifndef NullInitUpdatePaintable_setBasicColorP
#define NullInitUpdatePaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef NullInitUpdatePaintable_paint
#define NullInitUpdatePaintable_paint Paintable_paint
#endif
#ifndef NullInitUpdatePaintable_paintThreed
#define NullInitUpdatePaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullInitUpdatePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullInitUpdatePaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_NULLINITUPDATEPAINTABLE_H
