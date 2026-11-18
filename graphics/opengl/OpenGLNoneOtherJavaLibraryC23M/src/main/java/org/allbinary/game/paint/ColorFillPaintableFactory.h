#ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H
#define ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H
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
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ColorFillPaintable ColorFillPaintable;
typedef struct OverScanColorFillPaintable OverScanColorFillPaintable;
typedef struct ColorFillBasePaintable ColorFillBasePaintable;
typedef struct BasicColor BasicColor;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct OperatingSystemFactory OperatingSystemFactory;

typedef struct ColorFillPaintableFactory ColorFillPaintableFactory;
struct ColorFillPaintableFactory {
    char unused;
};


ColorFillPaintableFactory* ColorFillPaintableFactory_new(void);
void ColorFillPaintableFactory_init(ColorFillPaintableFactory* this);

ColorFillPaintableFactory* ColorFillPaintableFactory_getInstance0(void);

ColorFillBasePaintable* ColorFillPaintableFactory_getInstance3(ColorFillPaintableFactory* this, BasicColor* basicColor, bool forThreedCanvas);
#define ColorFillPaintableFactory_getInstance(...) JAVA_OVERLOADED(ColorFillPaintableFactory_getInstance, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ColorFillPaintableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ColorFillPaintableFactory_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLEFACTORY_H
