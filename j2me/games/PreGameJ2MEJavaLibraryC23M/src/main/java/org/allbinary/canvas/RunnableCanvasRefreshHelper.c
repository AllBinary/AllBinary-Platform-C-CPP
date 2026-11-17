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
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/canvas/Processor.h"

typedef struct RunnableCanvasRefreshHelper RunnableCanvasRefreshHelper;
struct RunnableCanvasRefreshHelper {
    Processor base;
    MyCanvas* runnableCanvas;
};


RunnableCanvasRefreshHelper* RunnableCanvasRefreshHelper_new(MyCanvas* runnableCanvas);

void RunnableCanvasRefreshHelper_init(RunnableCanvasRefreshHelper* this, MyCanvas* runnableCanvas);
void RunnableCanvasRefreshHelper_process(RunnableCanvasRefreshHelper* this);

static void RunnableCanvasRefreshHelper_initFields(RunnableCanvasRefreshHelper* this) {
    
}


void RunnableCanvasRefreshHelper_init(RunnableCanvasRefreshHelper* this, MyCanvas* runnableCanvas) {
    Processor_init(&this->base);
    RunnableCanvasRefreshHelper_initFields(this);
        this->runnableCanvas = runnableCanvas;
}

RunnableCanvasRefreshHelper* RunnableCanvasRefreshHelper_new(MyCanvas* runnableCanvas) {
    RunnableCanvasRefreshHelper* this = calloc(1, sizeof(RunnableCanvasRefreshHelper));
    RunnableCanvasRefreshHelper_init(this, runnableCanvas);
    return this;
}


void RunnableCanvasRefreshHelper_process(RunnableCanvasRefreshHelper* this) {
        MyCanvas_repaint(this->runnableCanvas);
}

