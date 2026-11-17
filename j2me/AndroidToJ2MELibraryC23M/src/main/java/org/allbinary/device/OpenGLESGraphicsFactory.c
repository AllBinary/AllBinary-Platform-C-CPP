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
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OpenGLESGraphicsFactory OpenGLESGraphicsFactory;
struct OpenGLESGraphicsFactory {
    char unused;
};


OpenGLESGraphicsFactory* OpenGLESGraphicsFactory_new(void);
OpenGLESGraphics* OpenGLESGraphicsFactory_getOpenGLESGraphicsInstance(OpenGLESGraphicsFactory* this);

void OpenGLESGraphicsFactory_init(OpenGLESGraphicsFactory* this) {
}

OpenGLESGraphicsFactory* OpenGLESGraphicsFactory_new(void) {
    OpenGLESGraphicsFactory* this = calloc(1, sizeof(OpenGLESGraphicsFactory));
    OpenGLESGraphicsFactory_init(this);
    return this;
}


OpenGLESGraphics* OpenGLESGraphicsFactory_getOpenGLESGraphicsInstance(OpenGLESGraphicsFactory* this) {
        return OpenGLESNullGraphicsFactory_getInstance();
}

