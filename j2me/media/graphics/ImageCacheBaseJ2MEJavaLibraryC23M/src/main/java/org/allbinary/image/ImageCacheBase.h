#ifndef ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H
#define ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H
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
typedef struct ImageFactory ImageFactory;
typedef struct Image Image;
typedef struct NullImage NullImage;
typedef struct StdUtil StdUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "java/io/InputStream.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/image/ImageFactory.h")
#include "org/allbinary/image/ImageFactory.h"
#endif

typedef struct ImageCacheBase ImageCacheBase;
struct ImageCacheBase {
    LogUtil* logUtil;
    ImageFactory* imageFactory;
    ABHashtable* hashtable;
    int32_t SIZE;
    int32_t* widths;
    int32_t* heights;
    BasicArrayList** listOfList;
    BasicArrayList** availableListOfList;
    int32_t volume;
    int32_t nextIndex;
};


ImageCacheBase* ImageCacheBase_new(void);

void ImageCacheBase_init(ImageCacheBase* this);

Image* ImageCacheBase_getImage(ImageCacheBase* this, void* resourceId);

void ImageCacheBase_releaseAll(ImageCacheBase* this);

int32_t ImageCacheBase_getIndexWH(ImageCacheBase* this, int32_t width, int32_t height);

Image* ImageCacheBase_getFromAvailable(ImageCacheBase* this, int32_t foundIndex, int32_t width, int32_t height);

Image* ImageCacheBase_get(ImageCacheBase* this, const char* caller, int32_t width, int32_t height);

Image* ImageCacheBase_getWithKey(ImageCacheBase* this, void* key);

Image* ImageCacheBase_createImage(ImageCacheBase* this, const char* caller, int32_t width, int32_t height);

Image* ImageCacheBase_createImageFromInputStream(ImageCacheBase* this, void* key, InputStream* inputStream);

const char* ImageCacheBase_toString(ImageCacheBase* this);

ABHashtable* ImageCacheBase_getHashtableP(ImageCacheBase* this);

void ImageCacheBase_initMethod(ImageCacheBase* this, Image* image);

void ImageCacheBase_initProgress(ImageCacheBase* this);
#define ImageCacheBase_new0 ImageCacheBase_new
#define ImageCacheBase_init0 ImageCacheBase_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageCacheBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageCacheBase_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H
