#ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H
#define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H
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
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Image Image;

typedef struct ImageCompleteUtil ImageCompleteUtil;
struct ImageCompleteUtil {
    char unused;
};


ImageCompleteUtil* ImageCompleteUtil_new(void);
void ImageCompleteUtil_init(ImageCompleteUtil* this);

ImageCompleteUtil* ImageCompleteUtil_getInstance(void);

void ImageCompleteUtil_waitForImage(ImageCompleteUtil* this, Image* image, const char* name);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageCompleteUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageCompleteUtil_register(void);


#endif // ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOMPLETEUTIL_H
