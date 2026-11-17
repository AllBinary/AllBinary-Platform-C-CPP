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
typedef struct PreLoadPlatformImage PreLoadPlatformImage;
struct PreLoadPlatformImage {
    PlatformImage base;
};

static PreLoadPlatformImage* PreLoadPlatformImage_instance;

PreLoadPlatformImage* PreLoadPlatformImage_new(void);
PreLoadPlatformImage* PreLoadPlatformImage_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PreLoadPlatformImage_staticInit(void) {
    PreLoadPlatformImage_instance = PreLoadPlatformImage_new();
}

void PreLoadPlatformImage_init(PreLoadPlatformImage* this) {
    PlatformImage_init(&this->base);
}

PreLoadPlatformImage* PreLoadPlatformImage_new(void) {
    PreLoadPlatformImage* this = calloc(1, sizeof(PreLoadPlatformImage));
    PreLoadPlatformImage_init(this);
    return this;
}


PreLoadPlatformImage* PreLoadPlatformImage_getInstance(void) {
        return PreLoadPlatformImage_instance;
}

