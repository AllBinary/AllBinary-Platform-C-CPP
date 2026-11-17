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
// package org.allbinary.thread

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
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/BaseImageLoadingProcessor.h"

typedef struct ConcurrentImageLoadingProcessor ConcurrentImageLoadingProcessor;
struct ConcurrentImageLoadingProcessor {
    BaseImageLoadingProcessor base;
    LogUtil* logUtil;
    ABRunnable* runnable;
};


ConcurrentImageLoadingProcessor* ConcurrentImageLoadingProcessor_new(ImageCache* imageCache);

void ConcurrentImageLoadingProcessor_init(ConcurrentImageLoadingProcessor* this, ImageCache* imageCache);
void ConcurrentImageLoadingProcessor_runTask(ConcurrentImageLoadingProcessor* this);

static void ConcurrentImageLoadingProcessor_initFields(ConcurrentImageLoadingProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void ConcurrentImageLoadingProcessor_init(ConcurrentImageLoadingProcessor* this, ImageCache* imageCache) {
    BaseImageLoadingProcessor_init(&this->base);
    ConcurrentImageLoadingProcessor_initFields(this);
        this->runnable = ImageCacheRunnable_new(imageCache);
}

ConcurrentImageLoadingProcessor* ConcurrentImageLoadingProcessor_new(ImageCache* imageCache) {
    ConcurrentImageLoadingProcessor* this = calloc(1, sizeof(ConcurrentImageLoadingProcessor));
    ConcurrentImageLoadingProcessor_init(this, imageCache);
    return this;
}


void ConcurrentImageLoadingProcessor_runTask(ConcurrentImageLoadingProcessor* this) {
        if (!ABRunnable_isRunning(this->runnable)) {
            ImageThreadPool_runTask(ImageThreadPool_getInstance(), this->runnable);
        }
}

typedef struct ImageCacheRunnable ImageCacheRunnable;
struct ImageCacheRunnable {
    ABRunnable base;
    ImageCache* imageCache;
};


ImageCacheRunnable* ImageCacheRunnable_new(ImageCache* imageCache);
    
    void ConcurrentImageLoadingProcessor_init(ConcurrentImageLoadingProcessor* this, ImageCache* imageCache);
    void ConcurrentImageLoadingProcessor_run(ConcurrentImageLoadingProcessor* this);

static void ImageCacheRunnable_initFields(ImageCacheRunnable* this) {
        
}
    

    void ConcurrentImageLoadingProcessor_init(ConcurrentImageLoadingProcessor* this, ImageCache* imageCache) {
    ABRunnable_init(&this->base);
        ConcurrentImageLoadingProcessor_initFields(this);
            this->imageCache = imageCache;
    }

    ConcurrentImageLoadingProcessor* ConcurrentImageLoadingProcessor_new(ImageCache* imageCache) {
        ConcurrentImageLoadingProcessor* this = calloc(1, sizeof(ConcurrentImageLoadingProcessor));
        ConcurrentImageLoadingProcessor_init(this, imageCache);
        return this;
    }
    

    void ConcurrentImageLoadingProcessor_run(ConcurrentImageLoadingProcessor* this) {
            LogUtil* logUtil = LogUtil_getInstance();
            JAVA_TRY {
                ConcurrentImageLoadingProcessor_setRunning(this, true);
                ImageCache_waitForLoadNow(this->imageCache);
                ImageCache_loadImages(this->imageCache);
                ImageCache_loadRemainingAnimations(this->imageCache);
                ConcurrentImageLoadingProcessor_setRunning(this, false);
                ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
                if (!progressCanvas->inProgress) {
                    ProgressCanvas_endFromInitialLazyLoadingComplete(progressCanvas);
                }
            } JAVA_CATCH(Exception, e) {
                ConcurrentImageLoadingProcessor_setRunning(this, false);
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            } JAVA_END_TRY;
    }

