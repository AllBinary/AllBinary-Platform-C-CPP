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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OrthogonalLightingOpenGLProcessorFactory OrthogonalLightingOpenGLProcessorFactory;
struct OrthogonalLightingOpenGLProcessorFactory {
    OpenGLProcessor* sceneLightingOrthogonalModeOpenGLProcessor;
    OpenGLProcessor* sceneLightsOrthogonalModeOpenGLProcessor;
};

static OrthogonalLightingOpenGLProcessorFactory* OrthogonalLightingOpenGLProcessorFactory_instance;

OrthogonalLightingOpenGLProcessorFactory* OrthogonalLightingOpenGLProcessorFactory_new(void);
OrthogonalLightingOpenGLProcessorFactory* OrthogonalLightingOpenGLProcessorFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OrthogonalLightingOpenGLProcessorFactory_staticInit(void) {
    OrthogonalLightingOpenGLProcessorFactory_instance = OrthogonalLightingOpenGLProcessorFactory_new();
}

static void OrthogonalLightingOpenGLProcessorFactory_initFields(OrthogonalLightingOpenGLProcessorFactory* this) {
    this->sceneLightingOrthogonalModeOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->sceneLightsOrthogonalModeOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
}

void OrthogonalLightingOpenGLProcessorFactory_init(OrthogonalLightingOpenGLProcessorFactory* this) {
    OrthogonalLightingOpenGLProcessorFactory_initFields(this);
}

OrthogonalLightingOpenGLProcessorFactory* OrthogonalLightingOpenGLProcessorFactory_new(void) {
    OrthogonalLightingOpenGLProcessorFactory* this = calloc(1, sizeof(OrthogonalLightingOpenGLProcessorFactory));
    OrthogonalLightingOpenGLProcessorFactory_init(this);
    return this;
}


OrthogonalLightingOpenGLProcessorFactory* OrthogonalLightingOpenGLProcessorFactory_getInstance(void) {
        return OrthogonalLightingOpenGLProcessorFactory_instance;
}

