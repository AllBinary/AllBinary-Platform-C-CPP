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
// package org.allbinary.graphics.canvas.transition.progress

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"

typedef struct LazyProgressCanvas LazyProgressCanvas;
struct LazyProgressCanvas {
    ProgressCanvas base;
};


LazyProgressCanvas* LazyProgressCanvas_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void LazyProgressCanvas_init(LazyProgressCanvas* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void LazyProgressCanvas_start(LazyProgressCanvas* this);
void LazyProgressCanvas_end(LazyProgressCanvas* this);
void LazyProgressCanvas_inGame(LazyProgressCanvas* this);
void LazyProgressCanvas_endFromInitialLazyLoadingComplete(LazyProgressCanvas* this);
void LazyProgressCanvas_endIfPaintedSinceStart(LazyProgressCanvas* this);


void LazyProgressCanvas_init(LazyProgressCanvas* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ProgressCanvas_init(&this->base, title, backgroundBasicColor, foregroundBasicColor);
}

LazyProgressCanvas* LazyProgressCanvas_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    LazyProgressCanvas* this = calloc(1, sizeof(LazyProgressCanvas));
    LazyProgressCanvas_init(this, title, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void LazyProgressCanvas_start(LazyProgressCanvas* this) {
        ProgressCanvas_start((&this->base));
        this->hasPainted = false;
}


void LazyProgressCanvas_end(LazyProgressCanvas* this) {
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->END_METHOD_NAME);
            LazyProgressCanvas_endActual(this);
            this->paintable = this->GAUGE_PAINTABLE;
            ImageCacheFactory_runTask(ImageCacheFactory_getInstance());
            ImageCacheFactory_progressEnded(ImageCacheFactory_getInstance());
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, putF, this->commonStrings->EXCEPTION, this, this->commonStrings->END_METHOD_NAME);
        } JAVA_END_TRY;
}


void LazyProgressCanvas_inGame(LazyProgressCanvas* this) {
        this->inGameProcessor = Processor_getInstance();
}


void LazyProgressCanvas_endFromInitialLazyLoadingComplete(LazyProgressCanvas* this) {
        ProgressCanvas_endFromInitialLazyLoadingComplete((&this->base));
        this->paintable = NullPaintable_getInstance();
}


void LazyProgressCanvas_endIfPaintedSinceStart(LazyProgressCanvas* this) {
        if (this->paintable == this->GAUGE_PAINTABLE && this->hasPainted) {
            LazyProgressCanvas_endFromInitialLazyLoadingComplete(this);
        }
}

