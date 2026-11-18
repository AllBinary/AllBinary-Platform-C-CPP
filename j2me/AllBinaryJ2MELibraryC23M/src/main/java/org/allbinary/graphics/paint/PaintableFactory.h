#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLEFACTORY_H
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
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;

typedef struct PaintableFactory PaintableFactory;
struct PaintableFactory {
    char unused;
};


PaintableFactory* PaintableFactory_new(void);
void PaintableFactory_init(PaintableFactory* this);

Paintable* PaintableFactory_getInstance(PaintableFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PaintableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PaintableFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_PAINTABLEFACTORY_H
