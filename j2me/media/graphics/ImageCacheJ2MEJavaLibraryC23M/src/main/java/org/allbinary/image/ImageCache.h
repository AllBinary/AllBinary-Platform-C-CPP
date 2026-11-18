#ifndef ORG_ALLBINARY_IMAGE_IMAGECACHE_H
#define ORG_ALLBINARY_IMAGE_IMAGECACHE_H
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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ImageCacheBase ImageCacheBase;
typedef struct Image Image;
typedef struct NullImage NullImage;
typedef struct J2MEUtil J2MEUtil;
typedef struct TsUtil TsUtil;
typedef struct ResourceUtil ResourceUtil;
typedef struct GDResources GDResources;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
typedef struct Memory Memory;
#include "java/io/InputStream.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
// #include "org/allbinary/logic/ABSystemWrapper.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/Thread.h"
#include "org/allbinary/image/ImageCacheBase.h"

typedef struct ImageCache ImageCache;
struct ImageCache {
    ImageCacheBase base;
    CommonStrings* commonStrings;
    TsUtil* tsUtil;
};

extern ImageCache* ImageCache_NULL_IMAGE_CACHE;

ImageCache* ImageCache_new(void);

void ImageCache_init(ImageCache* this);

void ImageCache_addListener(ImageCache* this, void* renderer);

int32_t ImageCache_getIndex(ImageCache* this, void* key);

Image* ImageCache_get(ImageCache* this, const char* caller, int32_t width, int32_t height);

Image* ImageCache_getWithKey(ImageCache* this, void* key);

void ImageCache_loadImageForAnimation(ImageCache* this);

void ImageCache_progressEnded(ImageCache* this);

void ImageCache_runTask(ImageCache* this);

bool ImageCache_isLazy(ImageCache* this);
#define ImageCache_new0 ImageCache_new
#define ImageCache_init0 ImageCache_init
#ifndef ImageCache_getImage
#define ImageCache_getImage ImageCacheBase_getImage
#endif
#ifndef ImageCache_releaseAll
#define ImageCache_releaseAll ImageCacheBase_releaseAll
#endif
#ifndef ImageCache_getIndexWH
#define ImageCache_getIndexWH ImageCacheBase_getIndexWH
#endif
#ifndef ImageCache_getFromAvailable
#define ImageCache_getFromAvailable ImageCacheBase_getFromAvailable
#endif
#ifndef ImageCache_createImage
#define ImageCache_createImage ImageCacheBase_createImage
#endif
#ifndef ImageCache_createImageFromInputStream
#define ImageCache_createImageFromInputStream ImageCacheBase_createImageFromInputStream
#endif
#ifndef ImageCache_toString
#define ImageCache_toString ImageCacheBase_toString
#endif
#ifndef ImageCache_getHashtableP
#define ImageCache_getHashtableP ImageCacheBase_getHashtableP
#endif
#ifndef ImageCache_initProgress
#define ImageCache_initProgress ImageCacheBase_initProgress
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageCache_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageCache_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_IMAGECACHE_H
