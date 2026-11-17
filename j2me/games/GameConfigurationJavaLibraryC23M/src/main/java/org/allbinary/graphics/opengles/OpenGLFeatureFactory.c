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

static OpenGLFeatureFactory* OpenGLFeatureFactory_instance;

OpenGLFeatureFactory* OpenGLFeatureFactory_new(void);
OpenGLFeatureFactory* OpenGLFeatureFactory_getInstance(void);

void OpenGLFeatureFactory_init(OpenGLFeatureFactory* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLFeatureFactory_staticInit(void) {
    OpenGLFeatureFactory_instance = OpenGLFeatureFactory_new();
}

static void OpenGLFeatureFactory_initFields(OpenGLFeatureFactory* this) {
    this->OPENGL_OPTIONS = OpenGLFeature_new("OpenGL Options");
    this->OPENGL = OpenGLFeature_new("OpenGL");
    this->OPENGL_SURFACE_VIEW = OpenGLFeature_new("GLSurfaceView");
    this->OPENGL_2D = OpenGLFeature_new("OpenGL 2D");
    this->OPENGL_3D = OpenGLFeature_new("OpenGL 3D");
    this->OPENGL_2D_AND_3D = OpenGLFeature_new("OpenGL 2D/3D");
    this->OPENGL_AUTO_SELECT = OpenGLFeature_new("Auto Select");
    this->OPENGL_MINIMUM = OpenGLFeature_new("Minimum");
    this->OPENGL_AS_GAME_THREAD = OpenGLFeature_new("As game thread");
    this->OPENGL_AND_GAME_HAVE_DIFFERENT_THREADS = OpenGLFeature_new("As different threads");
    this->IMAGE_COLOR_DEPTH_4444 = OpenGLFeature_new("4444");
    this->IMAGE_COLOR_DEPTH_8888 = OpenGLFeature_new("8888");
    this->IMAGE_COLOR_DEPTH_565 = OpenGLFeature_new("565");
    this->OPENGL_COLOR_DEPTH_4444 = OpenGLFeature_new("4444");
    this->OPENGL_COLOR_DEPTH_8888 = OpenGLFeature_new("8888");
    this->OPENGL_COLOR_DEPTH_565 = OpenGLFeature_new("565");
    this->OPENGL_DRAW_TEXTURE = OpenGLFeature_new("GL_OES_draw_texture");
    this->OPENGL_VERTEX_BUFFER_OBJECT = OpenGLFeature_new("vertex_buffer_object");
    this->OPENGL_SIMPLE_OBJECT3D_PROCESSOR = OpenGLFeature_new("Simple Object3d Processor");
    this->OPENGL_COMPLEX_OBJECT3D_PROCESSOR = OpenGLFeature_new("Complex Object3d Processor");
    this->OPENGL_SIMPLE_TEXTURE_PROCESSOR = OpenGLFeature_new("Simple Texture Processor");
    this->OPENGL_COMPLEX_TEXTURE_PROCESSOR = OpenGLFeature_new("Complex Texture Processor");
}


OpenGLFeatureFactory* OpenGLFeatureFactory_getInstance(void) {
        return OpenGLFeatureFactory_instance;
}


void OpenGLFeatureFactory_init(OpenGLFeatureFactory* this) {
    OpenGLFeatureFactory_initFields(this);
}

OpenGLFeatureFactory* OpenGLFeatureFactory_new(void) {
    OpenGLFeatureFactory* this = calloc(1, sizeof(OpenGLFeatureFactory));
    OpenGLFeatureFactory_init(this);
    return this;
}

