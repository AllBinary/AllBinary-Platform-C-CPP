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

typedef struct BufferedImageFrameCacheable BufferedImageFrameCacheable;
struct BufferedImageFrameCacheable {
    CacheableInterface CacheableInterface_interface;
    int64_t frame;
    BufferedImage* bufferedImage;
};


BufferedImageFrameCacheable* BufferedImageFrameCacheable_new(BufferedImage* bufferedImage, int64_t frame);

void BufferedImageFrameCacheable_init(BufferedImageFrameCacheable* this, BufferedImage* bufferedImage, int64_t frame);
Any* BufferedImageFrameCacheable_getKey(BufferedImageFrameCacheable* this);
BufferedImage* BufferedImageFrameCacheable_getBufferedImage(BufferedImageFrameCacheable* this);
static void BufferedImageFrameCacheable_setBufferedImage(BufferedImageFrameCacheable* this, BufferedImage* bufferedImage);
int64_t BufferedImageFrameCacheable_getFrame(BufferedImageFrameCacheable* this);
void BufferedImageFrameCacheable_setFrame(BufferedImageFrameCacheable* this, int64_t frame);
const char* BufferedImageFrameCacheable_toString(BufferedImageFrameCacheable* this);

static void BufferedImageFrameCacheable_initFields(BufferedImageFrameCacheable* this) {
    
    this->bufferedImage = nullptr;
}


void BufferedImageFrameCacheable_init(BufferedImageFrameCacheable* this, BufferedImage* bufferedImage, int64_t frame) {
    BufferedImageFrameCacheable_initFields(this);
        this->frame = frame;
        BufferedImageFrameCacheable_setBufferedImage(this, bufferedImage);
}

BufferedImageFrameCacheable* BufferedImageFrameCacheable_new(BufferedImage* bufferedImage, int64_t frame) {
    BufferedImageFrameCacheable* this = calloc(1, sizeof(BufferedImageFrameCacheable));
    BufferedImageFrameCacheable_init(this, bufferedImage, frame);
    return this;
}


Any* BufferedImageFrameCacheable_getKey(BufferedImageFrameCacheable* this) {
        return this->frame;
}


BufferedImage* BufferedImageFrameCacheable_getBufferedImage(BufferedImageFrameCacheable* this) {
        return this->bufferedImage;
}


static void BufferedImageFrameCacheable_setBufferedImage(BufferedImageFrameCacheable* this, BufferedImage* bufferedImage) {
        this->bufferedImage = bufferedImage;
}


int64_t BufferedImageFrameCacheable_getFrame(BufferedImageFrameCacheable* this) {
        return this->frame;
}


void BufferedImageFrameCacheable_setFrame(BufferedImageFrameCacheable* this, int64_t frame) {
        this->frame = frame;
}


const char* BufferedImageFrameCacheable_toString(BufferedImageFrameCacheable* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, " Frame: ");
        StringMaker_appendlong(stringBuffer, BufferedImageFrameCacheable_getFrame(this));
        return StringMaker_toString(stringBuffer);
}

