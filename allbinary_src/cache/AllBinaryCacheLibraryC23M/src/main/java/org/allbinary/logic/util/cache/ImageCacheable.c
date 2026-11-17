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
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct ImageCacheable ImageCacheable;
struct ImageCacheable {
    const char* name;
};


ImageCacheable* ImageCacheable_new(const char* name, Any* anyType);

void ImageCacheable_init(ImageCacheable* this, const char* name, Any* anyType);
Any* ImageCacheable_getKey(ImageCacheable* this);
const char* ImageCacheable_toString(ImageCacheable* this);

static void ImageCacheable_initFields(ImageCacheable* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void ImageCacheable_init(ImageCacheable* this, const char* name, Any* anyType) {
    ImageCacheable_initFields(this);
}

ImageCacheable* ImageCacheable_new(const char* name, Any* anyType) {
    ImageCacheable* this = calloc(1, sizeof(ImageCacheable));
    ImageCacheable_init(this, name, anyType);
    return this;
}


Any* ImageCacheable_getKey(ImageCacheable* this) {
        return this->name;
}


const char* ImageCacheable_toString(ImageCacheable* this) {
        return this->name;
}

