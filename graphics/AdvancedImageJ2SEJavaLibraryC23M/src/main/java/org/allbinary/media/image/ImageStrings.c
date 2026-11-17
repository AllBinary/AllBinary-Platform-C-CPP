/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct ImageStrings ImageStrings;
struct ImageStrings {
    const char* PNG;
    const char* PNG_EXTENSION;
};

static ImageStrings* ImageStrings_instance;

ImageStrings* ImageStrings_new(void);
ImageStrings* ImageStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ImageStrings_staticInit(void) {
    ImageStrings_instance = ImageStrings_new();
}

static void ImageStrings_initFields(ImageStrings* this) {
    this->PNG = "PNG";
    this->PNG_EXTENSION = ".png";
}

void ImageStrings_init(ImageStrings* this) {
    ImageStrings_initFields(this);
}

ImageStrings* ImageStrings_new(void) {
    ImageStrings* this = calloc(1, sizeof(ImageStrings));
    ImageStrings_init(this);
    return this;
}


ImageStrings* ImageStrings_getInstance(void) {
        return ImageStrings_instance;
}

