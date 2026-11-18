#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_H
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
typedef struct AboutPaintable AboutPaintable;
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif

typedef struct AboutPaintableFactory AboutPaintableFactory;
struct AboutPaintableFactory {
    Paintable** paintableArray;
};


AboutPaintableFactory* AboutPaintableFactory_new(void);

AboutPaintableFactory* AboutPaintableFactory_getInstance(void);

void AboutPaintableFactory_init(AboutPaintableFactory* this);
#define AboutPaintableFactory_new0 AboutPaintableFactory_new
#define AboutPaintableFactory_init0 AboutPaintableFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AboutPaintableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AboutPaintableFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTPAINTABLEFACTORY_H
