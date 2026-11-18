#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H
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
typedef struct OpenGLFeature OpenGLFeature;
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeature.h")
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"
#endif

typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
struct OpenGLFeatureFactory {
    OpenGLFeature* OPENGL_OPTIONS;
    OpenGLFeature* OPENGL;
    OpenGLFeature* OPENGL_SURFACE_VIEW;
    OpenGLFeature* OPENGL_2D;
    OpenGLFeature* OPENGL_3D;
    OpenGLFeature* OPENGL_2D_AND_3D;
    OpenGLFeature* OPENGL_AUTO_SELECT;
    OpenGLFeature* OPENGL_MINIMUM;
    OpenGLFeature* OPENGL_AS_GAME_THREAD;
    OpenGLFeature* OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS;
    OpenGLFeature* IMAGE_COLOR_DEPTH_4444;
    OpenGLFeature* IMAGE_COLOR_DEPTH_8888;
    OpenGLFeature* IMAGE_COLOR_DEPTH_565;
    OpenGLFeature* OPENGL_COLOR_DEPTH_4444;
    OpenGLFeature* OPENGL_COLOR_DEPTH_8888;
    OpenGLFeature* OPENGL_COLOR_DEPTH_565;
    OpenGLFeature* OPENGL_DRAW_TEXTURE;
    OpenGLFeature* OPENGL_VERTEX_BUFFER_OBJECT;
    OpenGLFeature* OPENGL_SIMPLE_OBJECT3D_PROCESSOR;
    OpenGLFeature* OPENGL_COMPLEX_OBJECT3D_PROCESSOR;
    OpenGLFeature* OPENGL_SIMPLE_TEXTURE_PROCESSOR;
    OpenGLFeature* OPENGL_COMPLEX_TEXTURE_PROCESSOR;
};


OpenGLFeatureFactory* OpenGLFeatureFactory_new(void);

OpenGLFeatureFactory* OpenGLFeatureFactory_getInstance(void);

void OpenGLFeatureFactory_init(OpenGLFeatureFactory* this);
#define OpenGLFeatureFactory_new0 OpenGLFeatureFactory_new
#define OpenGLFeatureFactory_init0 OpenGLFeatureFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLFeatureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLFeatureFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLFEATUREFACTORY_H
