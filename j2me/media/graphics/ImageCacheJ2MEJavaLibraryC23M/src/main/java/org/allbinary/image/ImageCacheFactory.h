#ifndef ORG_ALLBINARY_IMAGE_IMAGECACHEFACTORY_H
#define ORG_ALLBINARY_IMAGE_IMAGECACHEFACTORY_H
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
typedef struct ImageCache ImageCache;
#if __has_include("org/allbinary/image/ImageCache.h")
#include "org/allbinary/image/ImageCache.h"
#endif

typedef struct ImageCacheFactory ImageCacheFactory;
struct ImageCacheFactory {
    char unused;
};


ImageCacheFactory* ImageCacheFactory_new(void);
void ImageCacheFactory_init(ImageCacheFactory* this);

ImageCache* ImageCacheFactory_getInstance(void);

void ImageCacheFactory_initMethod(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageCacheFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageCacheFactory_register(void);


#endif // ORG_ALLBINARY_IMAGE_IMAGECACHEFACTORY_H
