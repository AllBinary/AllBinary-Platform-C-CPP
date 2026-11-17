/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct NullImage NullImage;
struct NullImage {
    char unused;
};

Image** NullImage_NULL_IMAGE_ARRAY;
Image* NullImage_NULL_IMAGE;

NullImage* NullImage_new(void);

// Static fields with runtime initializers: call this once at startup
void NullImage_staticInit(void) {
    NullImage_NULL_IMAGE_ARRAY = ((Image**) java_array_new(sizeof(Image*), 0));
    NullImage_NULL_IMAGE = Image_new();
}

void NullImage_init(NullImage* this) {
}

NullImage* NullImage_new(void) {
    NullImage* this = calloc(1, sizeof(NullImage));
    NullImage_init(this);
    return this;
}

