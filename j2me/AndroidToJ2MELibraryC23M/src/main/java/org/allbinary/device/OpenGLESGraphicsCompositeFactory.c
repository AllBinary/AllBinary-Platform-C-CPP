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

typedef struct OpenGLESGraphicsCompositeFactory OpenGLESGraphicsCompositeFactory;
struct OpenGLESGraphicsCompositeFactory {
    OpenGLESGraphicsFactory* openGLESGraphicsFactory;
};

static OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_instance;

OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_new(void);
OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_getInstance(void);
void OpenGLESGraphicsCompositeFactory_set(OpenGLESGraphicsCompositeFactory* this, OpenGLESGraphicsFactory* openGLESGraphicsFactory);
OpenGLESGraphicsFactory* OpenGLESGraphicsCompositeFactory_get(OpenGLESGraphicsCompositeFactory* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLESGraphicsCompositeFactory_staticInit(void) {
    OpenGLESGraphicsCompositeFactory_instance = OpenGLESGraphicsCompositeFactory_new();
}

static void OpenGLESGraphicsCompositeFactory_initFields(OpenGLESGraphicsCompositeFactory* this) {
    this->openGLESGraphicsFactory = OpenGLESGraphicsFactory_new();
}

void OpenGLESGraphicsCompositeFactory_init(OpenGLESGraphicsCompositeFactory* this) {
    OpenGLESGraphicsCompositeFactory_initFields(this);
}

OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_new(void) {
    OpenGLESGraphicsCompositeFactory* this = calloc(1, sizeof(OpenGLESGraphicsCompositeFactory));
    OpenGLESGraphicsCompositeFactory_init(this);
    return this;
}


OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_getInstance(void) {
        return OpenGLESGraphicsCompositeFactory_instance;
}


void OpenGLESGraphicsCompositeFactory_set(OpenGLESGraphicsCompositeFactory* this, OpenGLESGraphicsFactory* openGLESGraphicsFactory) {
        this->openGLESGraphicsFactory = openGLESGraphicsFactory;
}


OpenGLESGraphicsFactory* OpenGLESGraphicsCompositeFactory_get(OpenGLESGraphicsCompositeFactory* this) {
        return this->openGLESGraphicsFactory;
}

