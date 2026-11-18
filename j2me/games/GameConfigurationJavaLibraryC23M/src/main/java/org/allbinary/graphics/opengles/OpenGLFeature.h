#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATURE_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATURE_H
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
typedef struct Feature Feature;
#include "org/allbinary/game/configuration/feature/Feature.h"

typedef struct OpenGLFeature OpenGLFeature;
struct OpenGLFeature {
    Feature base;
};


OpenGLFeature* OpenGLFeature_new(const char* name);

void OpenGLFeature_init(OpenGLFeature* this, const char* name);
#define OpenGLFeature_new1 OpenGLFeature_new
#define OpenGLFeature_init1 OpenGLFeature_init
#ifndef OpenGLFeature_getInstance
#define OpenGLFeature_getInstance Feature_getInstance
#endif
#ifndef OpenGLFeature_add
#define OpenGLFeature_add Feature_add
#endif
#ifndef OpenGLFeature_toString
#define OpenGLFeature_toString Feature_toString
#endif
#ifndef OpenGLFeature_getName
#define OpenGLFeature_getName Feature_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLFeature_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLFeature_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATURE_H
