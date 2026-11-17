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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OpenGLESImageProperties OpenGLESImageProperties;
struct OpenGLESImageProperties {
    int32_t textureID;
    float scaleX;
    float scaleY;
    float scaleX2;
    float scaleY2;
    int32_t angle;
    float redf;
    float greenf;
    float bluef;
    float alphaf;
};


OpenGLESImageProperties* OpenGLESImageProperties_new(void);

static void OpenGLESImageProperties_initFields(OpenGLESImageProperties* this) {
    this->textureID = -1;
    this->scaleX = 1.0f;
    this->scaleY = 1.0f;
    this->scaleX2 = 1.0f;
    this->scaleY2 = 1.0f;
    this->angle = 0;
    this->redf = 1.0f;
    this->greenf = 1.0f;
    this->bluef = 1.0f;
    this->alphaf = 1.0f;
}

void OpenGLESImageProperties_init(OpenGLESImageProperties* this) {
    OpenGLESImageProperties_initFields(this);
}

OpenGLESImageProperties* OpenGLESImageProperties_new(void) {
    OpenGLESImageProperties* this = calloc(1, sizeof(OpenGLESImageProperties));
    OpenGLESImageProperties_init(this);
    return this;
}

