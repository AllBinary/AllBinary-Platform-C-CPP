#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H
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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringUtil StringUtil;

typedef struct ImageCacheable ImageCacheable;
struct ImageCacheable {
    const char* name;
};


ImageCacheable* ImageCacheable_new(const char* name, void* anyType);

void ImageCacheable_init(ImageCacheable* this, const char* name, void* anyType);

void* ImageCacheable_getKey(ImageCacheable* this);

const char* ImageCacheable_toString(ImageCacheable* this);
#define ImageCacheable_new2 ImageCacheable_new
#define ImageCacheable_init2 ImageCacheable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageCacheable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageCacheable_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_IMAGECACHEABLE_H
