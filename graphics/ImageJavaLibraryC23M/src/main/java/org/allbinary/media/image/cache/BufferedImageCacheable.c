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
// package org.allbinary.media.image.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

typedef struct BufferedImageCacheable BufferedImageCacheable;
struct BufferedImageCacheable {
    CacheableInterface CacheableInterface_interface;
    BufferedImageInfo* key;
    BufferedImage* bufferedImage;
};


BufferedImageCacheable* BufferedImageCacheable_new(BufferedImageInfo* key);

void BufferedImageCacheable_init(BufferedImageCacheable* this, BufferedImageInfo* key);
Any* BufferedImageCacheable_getKey(BufferedImageCacheable* this);
BufferedImage* BufferedImageCacheable_getBufferedImage(BufferedImageCacheable* this);
static void BufferedImageCacheable_setBufferedImage(BufferedImageCacheable* this, BufferedImage* bufferedImage);
const char* BufferedImageCacheable_toString(BufferedImageCacheable* this);

static void BufferedImageCacheable_initFields(BufferedImageCacheable* this) {
    
    this->bufferedImage = nullptr;
}


void BufferedImageCacheable_init(BufferedImageCacheable* this, BufferedImageInfo* key) {
    BufferedImageCacheable_initFields(this);
        this->key = key;
        BufferedImageCacheable_setBufferedImage(this, BufferedImage_new(BufferedImageInfo_getWidth(key), BufferedImageInfo_getHeight(key), BufferedImageInfo_getType(key)));
}

BufferedImageCacheable* BufferedImageCacheable_new(BufferedImageInfo* key) {
    BufferedImageCacheable* this = calloc(1, sizeof(BufferedImageCacheable));
    BufferedImageCacheable_init(this, key);
    return this;
}


Any* BufferedImageCacheable_getKey(BufferedImageCacheable* this) {
        return this->key;
}


BufferedImage* BufferedImageCacheable_getBufferedImage(BufferedImageCacheable* this) {
        return this->bufferedImage;
}


static void BufferedImageCacheable_setBufferedImage(BufferedImageCacheable* this, BufferedImage* bufferedImage) {
        this->bufferedImage = bufferedImage;
}


const char* BufferedImageCacheable_toString(BufferedImageCacheable* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, " ");
        StringMaker_append(stringBuffer, JAVA_CALL(BufferedImageCacheable_getKey(this), toString));
        return StringMaker_toString(stringBuffer);
}

