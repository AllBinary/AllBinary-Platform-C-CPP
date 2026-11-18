#ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSPAINTABLE_H
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
typedef struct Graphics Graphics;
typedef struct Paintable Paintable;
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif

typedef struct ProgressPaintable ProgressPaintable;
struct ProgressPaintable {
    Paintable base;
    ProgressCanvas* progressCanvas;
};


ProgressPaintable* ProgressPaintable_new(ProgressCanvas* progressCanvas);

void ProgressPaintable_init(ProgressPaintable* this, ProgressCanvas* progressCanvas);

void ProgressPaintable_paint(ProgressPaintable* this, Graphics* graphics);
#define ProgressPaintable_new1 ProgressPaintable_new
#define ProgressPaintable_init1 ProgressPaintable_init
#ifndef ProgressPaintable_setBasicColorP
#define ProgressPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef ProgressPaintable_paintThreed
#define ProgressPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ProgressPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ProgressPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSPAINTABLE_H
