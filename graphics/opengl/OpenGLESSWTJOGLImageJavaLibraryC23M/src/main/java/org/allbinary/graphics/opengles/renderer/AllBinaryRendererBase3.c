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
// package org.allbinary.graphics.opengles.renderer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct AllBinaryRendererBase3 AllBinaryRendererBase3;
struct AllBinaryRendererBase3 {
    BasicArrayList* list;
};


AllBinaryRendererBase3* AllBinaryRendererBase3_new(void);
void AllBinaryRendererBase3_update(AllBinaryRendererBase3* this, GL10* gl);
void AllBinaryRendererBase3_add(AllBinaryRendererBase3* this, Image* image);

static void AllBinaryRendererBase3_initFields(AllBinaryRendererBase3* this) {
    this->list = BasicArrayListD_new();
}

void AllBinaryRendererBase3_init(AllBinaryRendererBase3* this) {
    AllBinaryRendererBase3_initFields(this);
}

AllBinaryRendererBase3* AllBinaryRendererBase3_new(void) {
    AllBinaryRendererBase3* this = calloc(1, sizeof(AllBinaryRendererBase3));
    AllBinaryRendererBase3_init(this);
    return this;
}


// throws Exception
void AllBinaryRendererBase3_update(AllBinaryRendererBase3* this, GL10* gl) {
        while (BasicArrayList_size(this->list) > 0) {
            OpenGLESImage* openGLESImage = ((OpenGLESImage*) BasicArrayList_removeAt(this->list, 0));
            if (openGLESImage != nullptr) {
                OpenGLESImage_set(openGLESImage, gl);
            }
        }
}


void AllBinaryRendererBase3_add(AllBinaryRendererBase3* this, Image* image) {
        BasicArrayList_add(this->list, image);
}

