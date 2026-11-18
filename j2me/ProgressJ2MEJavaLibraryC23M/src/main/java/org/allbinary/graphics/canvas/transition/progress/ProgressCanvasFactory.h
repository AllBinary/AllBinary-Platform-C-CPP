#ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_H
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
// package org.allbinary.graphics.canvas.transition.progress

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ProgressCanvas ProgressCanvas;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct NullPaintable NullPaintable;
typedef struct PaintableInterface PaintableInterface;
typedef struct NullUtil NullUtil;
typedef struct StringUtil StringUtil;

typedef struct ProgressCanvasFactory ProgressCanvasFactory;
struct ProgressCanvasFactory {
    char unused;
};


ProgressCanvasFactory* ProgressCanvasFactory_new(void);
void ProgressCanvasFactory_init(ProgressCanvasFactory* this);

ProgressCanvas* ProgressCanvasFactory_getInstance(void);

PaintableInterface* ProgressCanvasFactory_getLazyInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ProgressCanvasFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ProgressCanvasFactory_register(void);

#if __has_include("org/allbinary/graphics/paint/PaintableInterface.h")
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVASFACTORY_H
