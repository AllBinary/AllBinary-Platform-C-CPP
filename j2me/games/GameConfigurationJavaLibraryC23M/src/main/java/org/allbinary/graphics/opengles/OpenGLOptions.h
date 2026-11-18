#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLOPTIONS_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLOPTIONS_H
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
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct Features Features;
typedef struct GameFeatureChoiceGroups GameFeatureChoiceGroups;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;

typedef struct OpenGLOptions OpenGLOptions;
struct OpenGLOptions {
    char unused;
};


OpenGLOptions* OpenGLOptions_new(void);
void OpenGLOptions_init(OpenGLOptions* this);

void OpenGLOptions_initMethod(OpenGLOptions* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLOptions_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLOptions_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLOPTIONS_H
