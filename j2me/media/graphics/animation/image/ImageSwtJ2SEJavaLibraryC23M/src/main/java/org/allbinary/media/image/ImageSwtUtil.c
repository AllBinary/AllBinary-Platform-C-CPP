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
#include "org/eclipse/swt/graphics/Color.h"
#include "org/eclipse/swt/graphics/RGB.h"
#include "org/microemu/app/BareMain.h"

typedef struct ImageSwtUtil ImageSwtUtil;
struct ImageSwtUtil {
    char unused;
};

static ImageSwtUtil* ImageSwtUtil_instance;

ImageSwtUtil* ImageSwtUtil_new(void);
ImageSwtUtil* ImageSwtUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ImageSwtUtil_staticInit(void) {
    ImageSwtUtil_instance = ImageSwtUtil_new();
}

void ImageSwtUtil_init(ImageSwtUtil* this) {
}

ImageSwtUtil* ImageSwtUtil_new(void) {
    ImageSwtUtil* this = calloc(1, sizeof(ImageSwtUtil));
    ImageSwtUtil_init(this);
    return this;
}


ImageSwtUtil* ImageSwtUtil_getInstance(void) {
        return ImageSwtUtil_instance;
}

