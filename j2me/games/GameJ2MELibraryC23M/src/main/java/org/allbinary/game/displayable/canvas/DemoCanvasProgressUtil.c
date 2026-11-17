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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/paint/PaintableComposite.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct DemoCanvasProgressUtil DemoCanvasProgressUtil;
struct DemoCanvasProgressUtil {
    char unused;
};


DemoCanvasProgressUtil* DemoCanvasProgressUtil_new(void);
void DemoCanvasProgressUtil_showProgress(DemoCanvas* demoCanvas);
void DemoCanvasProgressUtil_showProgressOptionallyInTheBackground(DemoCanvas* demoCanvas, bool background);

void DemoCanvasProgressUtil_init(DemoCanvasProgressUtil* this) {
}

DemoCanvasProgressUtil* DemoCanvasProgressUtil_new(void) {
    DemoCanvasProgressUtil* this = calloc(1, sizeof(DemoCanvasProgressUtil));
    DemoCanvasProgressUtil_init(this);
    return this;
}


void DemoCanvasProgressUtil_showProgress(DemoCanvas* demoCanvas) {
        DemoCanvasProgressUtil_showProgressOptionallyInTheBackground(demoCanvas, false);
}


void DemoCanvasProgressUtil_showProgressOptionallyInTheBackground(DemoCanvas* demoCanvas, bool background) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_startBackground(progressCanvas, background);
        PaintableInterface** paintableArray = ((PaintableInterface**) java_array_new(sizeof(PaintableInterface*), 2));
        paintableArray[0] = progressCanvas;
        paintableArray[1] = DemoCanvas_getDefaultPaintableInterface(demoCanvas);
        DemoCanvas_setDefaultPaintableInterface(demoCanvas, PaintableComposite_new(paintableArray));
        DemoCanvas_setPaintableInterface(demoCanvas, DemoCanvas_getDefaultPaintableInterface(demoCanvas));
}

