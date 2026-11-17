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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/device/NullGL10.h"
#include "org/allbinary/graphics/opengles/renderer/AllBinaryRendererBase3.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/image/PreResourceImageUtil.h"
#include "org/allbinary/thread/SynchObject.h"

//ImageCacheOpenGLESJavaLibrary
typedef struct OpenGLImageCache OpenGLImageCache;
struct OpenGLImageCache {
    ImageCache base;
    ImageCache* imageCache;
    PreResourceImageUtil* preResourceImageUtil;
    GL10* gl;
    SynchObject* lock;
    BasicArrayList* list;
    AllBinaryRendererBase3* renderer;
};


OpenGLImageCache* OpenGLImageCache_new(void);

void OpenGLImageCache_init(OpenGLImageCache* this);
void OpenGLImageCache_addListener(OpenGLImageCache* this, Any* renderer);
void OpenGLImageCache_update(OpenGLImageCache* this, GL10* gl);
Image* OpenGLImageCache_createImage(OpenGLImageCache* this, const char* caller, int32_t width, int32_t height);
Image* OpenGLImageCache_createImageFromInputStream(OpenGLImageCache* this, Any* key, InputStream* inputStream);
GL10* OpenGLImageCache_getGlP(OpenGLImageCache* this);
void OpenGLImageCache_init(OpenGLImageCache* this, Image* image);

static void OpenGLImageCache_initFields(OpenGLImageCache* this) {
    this->imageCache = ImageCacheFactory_getInstance();
    this->preResourceImageUtil = PreResourceImageUtil_getInstance();
    this->gl = NullGL10_NULL_GL10;
    this->lock = SynchObject_new();
    this->list = BasicArrayListD_new();
    this->renderer = AllBinaryRendererBase3_new();
}


void OpenGLImageCache_init(OpenGLImageCache* this) {
    ImageCache_init(&this->base);
    OpenGLImageCache_initFields(this);
}

OpenGLImageCache* OpenGLImageCache_new(void) {
    OpenGLImageCache* this = calloc(1, sizeof(OpenGLImageCache));
    OpenGLImageCache_init(this);
    return this;
}


void OpenGLImageCache_addListener(OpenGLImageCache* this, Any* renderer) {
        this->renderer = ((AllBinaryRendererBase3*) renderer);
}


// throws Exception
void OpenGLImageCache_update(OpenGLImageCache* this, GL10* gl) {
        this->gl = gl;
        java_monitor_enter(this->lock);
        {
            for (int32_t index = BasicArrayList_size(this->list) - 1; index >= 0; index--) {
                OpenGLESImage* openGLESImage = (((OpenGLESImage*) this->list->objectArray[index]));
                if (openGLESImage != OpenGLESImage_NULL_OPENGL_IMAGE) {
                    OpenGLESImage_set(openGLESImage, gl);
                }
            }
        }
        java_monitor_exit(this->lock);
}


// throws Exception
Image* OpenGLImageCache_createImage(OpenGLImageCache* this, const char* caller, int32_t width, int32_t height) {
        int32_t textureSize = width;
        if (height > width) {
            textureSize = height;
        }
        while ((textureSize % 4) != 0) {
            textureSize++;
        }
        width = textureSize;
        height = textureSize;
        Image* image2 = ImageCache_get(this->imageCache, caller, width, height);
        Image* image = PreResourceImageUtil_encapsulate(this->preResourceImageUtil, image2);
        java_monitor_enter(this->lock);
        {
            if (image != NullImage_NULL_IMAGE) {
                BasicArrayList_add(this->list, image);
            }
        }
        java_monitor_exit(this->lock);
        return image;
}


// throws Exception
Image* OpenGLImageCache_createImageFromInputStream(OpenGLImageCache* this, Any* key, InputStream* inputStream) {
        Image* cachedImage = ImageCache_getWithKey(this->imageCache, key);
        Image* image = PreResourceImageUtil_encapsulate(this->preResourceImageUtil, cachedImage);
        java_monitor_enter(this->lock);
        {
            if (image != NullImage_NULL_IMAGE) {
                BasicArrayList_add(this->list, image);
            }
        }
        java_monitor_exit(this->lock);
        return image;
}


GL10* OpenGLImageCache_getGlP(OpenGLImageCache* this) {
        return this->gl;
}


void OpenGLImageCache_init(OpenGLImageCache* this, Image* image) {
        JAVA_TRY {
            java_monitor_enter(this->lock);
            {
                if (BasicArrayList_contains(this->list, image)) {
                    java_throw(java_exception_new("RuntimeException", ""));
                }
                BasicArrayList_add(this->list, image);
            }
            java_monitor_exit(this->lock);
            AllBinaryRendererBase3_add(this->renderer, image);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
        } JAVA_END_TRY;
}

