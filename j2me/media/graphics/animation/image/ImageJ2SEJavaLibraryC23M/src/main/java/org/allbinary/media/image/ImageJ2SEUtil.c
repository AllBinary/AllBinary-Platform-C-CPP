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
// #include "java/awt/Color.h"

typedef struct ImageJ2SEUtil ImageJ2SEUtil;
struct ImageJ2SEUtil {
    Color* TRANSPARENT_COLOR;
};

static ImageJ2SEUtil* ImageJ2SEUtil_instance;

ImageJ2SEUtil* ImageJ2SEUtil_new(void);
ImageJ2SEUtil* ImageJ2SEUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ImageJ2SEUtil_staticInit(void) {
    ImageJ2SEUtil_instance = ImageJ2SEUtil_new();
}

static void ImageJ2SEUtil_initFields(ImageJ2SEUtil* this) {
    this->TRANSPARENT_COLOR = Color_new(0, 0, 0, 0);
}

void ImageJ2SEUtil_init(ImageJ2SEUtil* this) {
    ImageJ2SEUtil_initFields(this);
}

ImageJ2SEUtil* ImageJ2SEUtil_new(void) {
    ImageJ2SEUtil* this = calloc(1, sizeof(ImageJ2SEUtil));
    ImageJ2SEUtil_init(this);
    return this;
}


ImageJ2SEUtil* ImageJ2SEUtil_getInstance(void) {
        return ImageJ2SEUtil_instance;
}

