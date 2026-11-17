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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"

typedef struct OpenGLFeatureUtil OpenGLFeatureUtil;
struct OpenGLFeatureUtil {
    bool anyThreed;
};

static OpenGLFeatureUtil* OpenGLFeatureUtil_instance;

OpenGLFeatureUtil* OpenGLFeatureUtil_new(void);
OpenGLFeatureUtil* OpenGLFeatureUtil_getInstance(void);

void OpenGLFeatureUtil_init(OpenGLFeatureUtil* this);
bool OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLFeatureUtil_staticInit(void) {
    OpenGLFeatureUtil_instance = OpenGLFeatureUtil_new();
}

static void OpenGLFeatureUtil_initFields(OpenGLFeatureUtil* this) {
    
}


OpenGLFeatureUtil* OpenGLFeatureUtil_getInstance(void) {
        return OpenGLFeatureUtil_instance;
}


void OpenGLFeatureUtil_init(OpenGLFeatureUtil* this) {
    OpenGLFeatureUtil_initFields(this);
        OpenGLConfiguration* openGLConfiguration = OpenGLConfiguration_getInstance();
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        this->anyThreed = OpenGLConfiguration_isOpenGL(openGLConfiguration) && (Features_isFeature(features, openGLFeatureFactory->OPENGL_2D_AND_3D) || Features_isFeature(features, openGLFeatureFactory->OPENGL_3D));
}

OpenGLFeatureUtil* OpenGLFeatureUtil_new(void) {
    OpenGLFeatureUtil* this = calloc(1, sizeof(OpenGLFeatureUtil));
    OpenGLFeatureUtil_init(this);
    return this;
}


bool OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil* this) {
        return this->anyThreed;
}

