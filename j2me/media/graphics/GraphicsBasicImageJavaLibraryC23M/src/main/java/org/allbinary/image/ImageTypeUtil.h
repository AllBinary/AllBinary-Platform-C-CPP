#ifndef ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
#define ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
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
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct ImageTypeUtil ImageTypeUtil;
struct ImageTypeUtil {
    const char* PNG;
    const char* JPG;
    const char* GIF;
    BasicArrayList* list;
};


ImageTypeUtil* ImageTypeUtil_new(void);

void ImageTypeUtil_init(ImageTypeUtil* this);

bool ImageTypeUtil_isSupported(ImageTypeUtil* this, const char* mediaFileType);

ImageTypeUtil* ImageTypeUtil_getInstance(void);
#define ImageTypeUtil_new0 ImageTypeUtil_new
#define ImageTypeUtil_init0 ImageTypeUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageTypeUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageTypeUtil_register(void);


#endif // ORG_ALLBINARY_IMAGE_IMAGETYPEUTIL_H
