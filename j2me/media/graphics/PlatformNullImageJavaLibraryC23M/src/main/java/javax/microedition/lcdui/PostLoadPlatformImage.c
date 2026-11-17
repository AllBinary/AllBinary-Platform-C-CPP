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
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "javax/microedition/lcdui/PlatformImage.h"

//PlatformNullImageJavaLibrary
typedef struct PostLoadPlatformImage PostLoadPlatformImage;
struct PostLoadPlatformImage {
    PlatformImage base;
};

static PostLoadPlatformImage* PostLoadPlatformImage_instance;

PostLoadPlatformImage* PostLoadPlatformImage_new(void);
PostLoadPlatformImage* PostLoadPlatformImage_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PostLoadPlatformImage_staticInit(void) {
    PostLoadPlatformImage_instance = PostLoadPlatformImage_new();
}

void PostLoadPlatformImage_init(PostLoadPlatformImage* this) {
    PlatformImage_init(&this->base);
}

PostLoadPlatformImage* PostLoadPlatformImage_new(void) {
    PostLoadPlatformImage* this = calloc(1, sizeof(PostLoadPlatformImage));
    PostLoadPlatformImage_init(this);
    return this;
}


PostLoadPlatformImage* PostLoadPlatformImage_getInstance(void) {
        return PostLoadPlatformImage_instance;
}

