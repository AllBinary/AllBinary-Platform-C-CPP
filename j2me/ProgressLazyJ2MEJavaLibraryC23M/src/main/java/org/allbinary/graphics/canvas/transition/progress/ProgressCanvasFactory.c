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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct ProgressCanvasFactory ProgressCanvasFactory;
struct ProgressCanvasFactory {
    char unused;
};

static Any* ProgressCanvasFactory_PROGRESS_FORM_SCREEN;

ProgressCanvasFactory* ProgressCanvasFactory_new(void);
ProgressCanvas* ProgressCanvasFactory_getInstance(void);
PaintableInterface* ProgressCanvasFactory_getLazyInstance(void);

// Static fields with runtime initializers: call this once at startup
void ProgressCanvasFactory_staticInit(void) {
    ProgressCanvasFactory_PROGRESS_FORM_SCREEN = NullUtil_getInstance()->NULL_OBJECT;
}

void ProgressCanvasFactory_init(ProgressCanvasFactory* this) {
}

ProgressCanvasFactory* ProgressCanvasFactory_new(void) {
    ProgressCanvasFactory* this = calloc(1, sizeof(ProgressCanvasFactory));
    ProgressCanvasFactory_init(this);
    return this;
}


ProgressCanvas* ProgressCanvasFactory_getInstance(void) {
        if (ProgressCanvasFactory_PROGRESS_FORM_SCREEN == NullUtil_getInstance()->NULL_OBJECT) {
            ProgressCanvasFactory_PROGRESS_FORM_SCREEN = LazyProgressCanvas_new(StringUtil_getInstance()->EMPTY_STRING, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((ProgressCanvas*) ProgressCanvasFactory_PROGRESS_FORM_SCREEN);
}


PaintableInterface* ProgressCanvasFactory_getLazyInstance(void) {
        return ProgressCanvasFactory_getInstance();
}

