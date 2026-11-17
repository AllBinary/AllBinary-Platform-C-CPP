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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct ImageTypeUtil ImageTypeUtil;
struct ImageTypeUtil {
    const char* PNG;
    const char* JPG;
    const char* GIF;
    BasicArrayList* list;
};

static ImageTypeUtil* ImageTypeUtil_SINGLETON;

ImageTypeUtil* ImageTypeUtil_new(void);

void ImageTypeUtil_init(ImageTypeUtil* this);
bool ImageTypeUtil_isSupported(ImageTypeUtil* this, const char* mediaFileType);
ImageTypeUtil* ImageTypeUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ImageTypeUtil_staticInit(void) {
    ImageTypeUtil_SINGLETON = ImageTypeUtil_new();
}

static void ImageTypeUtil_initFields(ImageTypeUtil* this) {
    this->PNG = "png";
    this->JPG = "jpg";
    this->GIF = "gif";
    this->list = BasicArrayListD_new();
}


void ImageTypeUtil_init(ImageTypeUtil* this) {
    ImageTypeUtil_initFields(this);
        BasicArrayList_add(this->list, this->JPG);
        BasicArrayList_add(this->list, this->GIF);
        BasicArrayList_add(this->list, this->PNG);
}

ImageTypeUtil* ImageTypeUtil_new(void) {
    ImageTypeUtil* this = calloc(1, sizeof(ImageTypeUtil));
    ImageTypeUtil_init(this);
    return this;
}


bool ImageTypeUtil_isSupported(ImageTypeUtil* this, const char* mediaFileType) {
        mediaFileType = java_string_toLowerCase(mediaFileType);
        for (int32_t index = BasicArrayList_size(this->list) - 1; index >= 0; index--) {
            const char* name = ((const char*) BasicArrayList_get(this->list, index));
            if (strcmp(mediaFileType, name) == 0) {
                return true;
            }
        }
        return false;
}


ImageTypeUtil* ImageTypeUtil_getInstance(void) {
        return ImageTypeUtil_SINGLETON;
}

