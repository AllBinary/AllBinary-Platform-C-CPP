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
// package org.allbinary.media.image.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
// #include "javax/imageio/IIOImage.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

typedef struct IIOImageCacheable IIOImageCacheable;
struct IIOImageCacheable {
    CacheableInterface CacheableInterface_interface;
    const char* key;
    IIOImage* iioImage;
};


IIOImageCacheable* IIOImageCacheable_new(const char* key);

void IIOImageCacheable_init(IIOImageCacheable* this, const char* key);
Any* IIOImageCacheable_getKey(IIOImageCacheable* this);
void IIOImageCacheable_setBufferedImage(IIOImageCacheable* this, BufferedImage* bufferedImage);
IIOImage* IIOImageCacheable_getIioImage(IIOImageCacheable* this);
static void IIOImageCacheable_setIioImage(IIOImageCacheable* this, IIOImage* iioImage);
const char* IIOImageCacheable_toString(IIOImageCacheable* this);

static void IIOImageCacheable_initFields(IIOImageCacheable* this) {
    
    this->iioImage = nullptr;
}


void IIOImageCacheable_init(IIOImageCacheable* this, const char* key) {
    IIOImageCacheable_initFields(this);
        this->key = key;
}

IIOImageCacheable* IIOImageCacheable_new(const char* key) {
    IIOImageCacheable* this = calloc(1, sizeof(IIOImageCacheable));
    IIOImageCacheable_init(this, key);
    return this;
}


Any* IIOImageCacheable_getKey(IIOImageCacheable* this) {
        return this->key;
}


void IIOImageCacheable_setBufferedImage(IIOImageCacheable* this, BufferedImage* bufferedImage) {
        IIOImageCacheable_setIioImage(this, IIOImage_new(bufferedImage, nullptr, nullptr));
}


IIOImage* IIOImageCacheable_getIioImage(IIOImageCacheable* this) {
        return this->iioImage;
}


static void IIOImageCacheable_setIioImage(IIOImageCacheable* this, IIOImage* iioImage) {
        this->iioImage = iioImage;
}


const char* IIOImageCacheable_toString(IIOImageCacheable* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, " Reusable IIOImage");
        return StringMaker_toString(stringBuffer);
}

