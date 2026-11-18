#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_MODIFIEROPENGLESIMAGEPROCESSOR_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_MODIFIEROPENGLESIMAGEPROCESSOR_H
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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct OpenGLESImageProcessor OpenGLESImageProcessor;
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"

typedef struct ModifierOpenGLESImageProcessor ModifierOpenGLESImageProcessor;
struct ModifierOpenGLESImageProcessor {
    OpenGLESImageProcessor base;
};


ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_new(void);
void ModifierOpenGLESImageProcessor_init(ModifierOpenGLESImageProcessor* this);

ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_getInstance(void);
#ifndef ModifierOpenGLESImageProcessor_translate
#define ModifierOpenGLESImageProcessor_translate OpenGLESImageProcessor_translate
#endif
#ifndef ModifierOpenGLESImageProcessor_rotate
#define ModifierOpenGLESImageProcessor_rotate OpenGLESImageProcessor_rotate
#endif
#ifndef ModifierOpenGLESImageProcessor_scale
#define ModifierOpenGLESImageProcessor_scale OpenGLESImageProcessor_scale
#endif
#ifndef ModifierOpenGLESImageProcessor_colorMask
#define ModifierOpenGLESImageProcessor_colorMask OpenGLESImageProcessor_colorMask
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ModifierOpenGLESImageProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ModifierOpenGLESImageProcessor_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_MODIFIEROPENGLESIMAGEPROCESSOR_H
