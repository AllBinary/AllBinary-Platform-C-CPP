#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_PROCESSPAINTABLESINGLETONFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_PROCESSPAINTABLESINGLETONFACTORY_H
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
typedef struct ProcessPaintable ProcessPaintable;
#if __has_include("org/allbinary/graphics/paint/ProcessPaintable.h")
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#endif

typedef struct ProcessPaintableSingletonFactory ProcessPaintableSingletonFactory;
struct ProcessPaintableSingletonFactory {
    char unused;
};


ProcessPaintableSingletonFactory* ProcessPaintableSingletonFactory_new(void);

void ProcessPaintableSingletonFactory_init(ProcessPaintableSingletonFactory* this);

ProcessPaintable* ProcessPaintableSingletonFactory_getInstance(void);
#define ProcessPaintableSingletonFactory_new0 ProcessPaintableSingletonFactory_new
#define ProcessPaintableSingletonFactory_init0 ProcessPaintableSingletonFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ProcessPaintableSingletonFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ProcessPaintableSingletonFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_PROCESSPAINTABLESINGLETONFACTORY_H
