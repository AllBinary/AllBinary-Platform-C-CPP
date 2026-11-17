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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct OpenGLESImageExclusionUtil OpenGLESImageExclusionUtil;
struct OpenGLESImageExclusionUtil {
    BasicArrayList* list;
};

static OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_instance;

OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_new(void);
OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_getInstance(void);
bool OpenGLESImageExclusionUtil_isCustomScaling(OpenGLESImageExclusionUtil* this, Image* image);

// Static fields with runtime initializers: call this once at startup
void OpenGLESImageExclusionUtil_staticInit(void) {
    OpenGLESImageExclusionUtil_instance = OpenGLESImageExclusionUtil_new();
}

static void OpenGLESImageExclusionUtil_initFields(OpenGLESImageExclusionUtil* this) {
    this->list = BasicArrayListD_new();
}

void OpenGLESImageExclusionUtil_init(OpenGLESImageExclusionUtil* this) {
    OpenGLESImageExclusionUtil_initFields(this);
}

OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_new(void) {
    OpenGLESImageExclusionUtil* this = calloc(1, sizeof(OpenGLESImageExclusionUtil));
    OpenGLESImageExclusionUtil_init(this);
    return this;
}


OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_getInstance(void) {
        return OpenGLESImageExclusionUtil_instance;
}


bool OpenGLESImageExclusionUtil_isCustomScaling(OpenGLESImageExclusionUtil* this, Image* image) {
        return false;
}

