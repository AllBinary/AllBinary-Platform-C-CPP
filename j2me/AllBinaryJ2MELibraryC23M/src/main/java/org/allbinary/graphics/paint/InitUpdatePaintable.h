#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLE_H
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
typedef struct InitUpdatePaintableInterface InitUpdatePaintableInterface;
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintableInterface.h"

typedef struct InitUpdatePaintable InitUpdatePaintable;
struct InitUpdatePaintable {
    Paintable base;
    InitUpdatePaintableInterface InitUpdatePaintableInterface_interface;
};


InitUpdatePaintable* InitUpdatePaintable_new(void);

void InitUpdatePaintable_init(InitUpdatePaintable* this);

void InitUpdatePaintable_initMethod(InitUpdatePaintable* this);

void InitUpdatePaintable_update(InitUpdatePaintable* this);
#define InitUpdatePaintable_new0 InitUpdatePaintable_new
#define InitUpdatePaintable_init0 InitUpdatePaintable_init
#ifndef InitUpdatePaintable_setBasicColorP
#define InitUpdatePaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef InitUpdatePaintable_paint
#define InitUpdatePaintable_paint Paintable_paint
#endif
#ifndef InitUpdatePaintable_paintThreed
#define InitUpdatePaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InitUpdatePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InitUpdatePaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_INITUPDATEPAINTABLE_H
