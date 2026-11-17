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
// #include "javax/microedition/lcdui/Image.h"

typedef struct ImageCompleteUtil ImageCompleteUtil;
struct ImageCompleteUtil {
    char unused;
};

static ImageCompleteUtil* ImageCompleteUtil_instance;

ImageCompleteUtil* ImageCompleteUtil_new(void);
ImageCompleteUtil* ImageCompleteUtil_getInstance(void);
void ImageCompleteUtil_waitForImage(ImageCompleteUtil* this, Image* image, const char* name);

// Static fields with runtime initializers: call this once at startup
void ImageCompleteUtil_staticInit(void) {
    ImageCompleteUtil_instance = ImageCompleteUtil_new();
}

void ImageCompleteUtil_init(ImageCompleteUtil* this) {
}

ImageCompleteUtil* ImageCompleteUtil_new(void) {
    ImageCompleteUtil* this = calloc(1, sizeof(ImageCompleteUtil));
    ImageCompleteUtil_init(this);
    return this;
}


ImageCompleteUtil* ImageCompleteUtil_getInstance(void) {
        return ImageCompleteUtil_instance;
}


// throws Exception
void ImageCompleteUtil_waitForImage(ImageCompleteUtil* this, Image* image, const char* name) {
}

