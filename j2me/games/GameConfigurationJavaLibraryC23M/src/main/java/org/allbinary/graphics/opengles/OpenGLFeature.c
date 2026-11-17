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
#include "org/allbinary/game/configuration/feature/Feature.h"

typedef struct OpenGLFeature OpenGLFeature;
struct OpenGLFeature {
    Feature base;
};


OpenGLFeature* OpenGLFeature_new(const char* name);

void OpenGLFeature_init(OpenGLFeature* this, const char* name);


void OpenGLFeature_init(OpenGLFeature* this, const char* name) {
        Feature_init(&this->base, name);
}

OpenGLFeature* OpenGLFeature_new(const char* name) {
    OpenGLFeature* this = calloc(1, sizeof(OpenGLFeature));
    OpenGLFeature_init(this, name);
    return this;
}

