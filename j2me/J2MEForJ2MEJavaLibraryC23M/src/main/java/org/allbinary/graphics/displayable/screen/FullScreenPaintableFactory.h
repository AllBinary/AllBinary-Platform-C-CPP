#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.graphics.displayable.screen

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
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif

typedef struct FullScreenPaintableFactory FullScreenPaintableFactory;
struct FullScreenPaintableFactory {
    Paintable* paintable;
};


FullScreenPaintableFactory* FullScreenPaintableFactory_new(void);
void FullScreenPaintableFactory_init(FullScreenPaintableFactory* this);

FullScreenPaintableFactory* FullScreenPaintableFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FullScreenPaintableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FullScreenPaintableFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_FULLSCREENPAINTABLEFACTORY_H
