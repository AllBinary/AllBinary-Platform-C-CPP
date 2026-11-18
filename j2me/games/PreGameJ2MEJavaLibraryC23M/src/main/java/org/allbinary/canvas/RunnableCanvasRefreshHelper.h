#ifndef ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H
#define ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H
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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Processor Processor;
typedef struct MyCanvas MyCanvas;
#if __has_include("org/allbinary/graphics/displayable/MyCanvas.h")
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#endif
#include "org/allbinary/canvas/Processor.h"

typedef struct RunnableCanvasRefreshHelper RunnableCanvasRefreshHelper;
struct RunnableCanvasRefreshHelper {
    Processor base;
    MyCanvas* runnableCanvas;
};


RunnableCanvasRefreshHelper* RunnableCanvasRefreshHelper_new(MyCanvas* runnableCanvas);

void RunnableCanvasRefreshHelper_init(RunnableCanvasRefreshHelper* this, MyCanvas* runnableCanvas);

void RunnableCanvasRefreshHelper_process(RunnableCanvasRefreshHelper* this);
#define RunnableCanvasRefreshHelper_new1 RunnableCanvasRefreshHelper_new
#define RunnableCanvasRefreshHelper_init1 RunnableCanvasRefreshHelper_init
#ifndef RunnableCanvasRefreshHelper_getInstance
#define RunnableCanvasRefreshHelper_getInstance Processor_getInstance
#endif
#ifndef RunnableCanvasRefreshHelper_processt
#define RunnableCanvasRefreshHelper_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RunnableCanvasRefreshHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RunnableCanvasRefreshHelper_register(void);


#endif // ORG_ALLBINARY_CANVAS_RUNNABLECANVASREFRESHHELPER_H
