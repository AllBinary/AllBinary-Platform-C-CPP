#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_STATEPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_STATEPAINTABLE_H
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
typedef struct StateControlledInterface StateControlledInterface;
#include "org/allbinary/graphics/displayable/StateControlledInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct StatePaintable StatePaintable;
struct StatePaintable {
    Paintable base;
    StateControlledInterface StateControlledInterface_interface;
};


StatePaintable* StatePaintable_new(void);

void StatePaintable_init(StatePaintable* this);

void StatePaintable_setState(StatePaintable* this, int32_t state);
#define StatePaintable_new0 StatePaintable_new
#define StatePaintable_init0 StatePaintable_init
#ifndef StatePaintable_setBasicColorP
#define StatePaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef StatePaintable_paint
#define StatePaintable_paint Paintable_paint
#endif
#ifndef StatePaintable_paintThreed
#define StatePaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StatePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StatePaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_STATEPAINTABLE_H
