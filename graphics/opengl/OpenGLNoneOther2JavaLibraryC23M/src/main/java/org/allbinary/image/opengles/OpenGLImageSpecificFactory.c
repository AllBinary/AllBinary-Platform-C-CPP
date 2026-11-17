/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct OpenGLImageSpecificFactory OpenGLImageSpecificFactory;
struct OpenGLImageSpecificFactory {
    bool updating;
};

static OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_instance;

OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_new(void);
OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OpenGLImageSpecificFactory_staticInit(void) {
    OpenGLImageSpecificFactory_instance = OpenGLImageSpecificFactory_new();
}

static void OpenGLImageSpecificFactory_initFields(OpenGLImageSpecificFactory* this) {
    this->updating = false;
}

void OpenGLImageSpecificFactory_init(OpenGLImageSpecificFactory* this) {
    OpenGLImageSpecificFactory_initFields(this);
}

OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_new(void) {
    OpenGLImageSpecificFactory* this = calloc(1, sizeof(OpenGLImageSpecificFactory));
    OpenGLImageSpecificFactory_init(this);
    return this;
}


OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_getInstance(void) {
        return OpenGLImageSpecificFactory_instance;
}

