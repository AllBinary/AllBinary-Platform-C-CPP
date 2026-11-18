#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_H
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
typedef struct OpenGLImageFactory OpenGLImageFactory;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/image/opengles/OpenGLImageFactory.h")
#include "org/allbinary/image/opengles/OpenGLImageFactory.h"
#endif

typedef struct OpenGLImageSpecificFactory OpenGLImageSpecificFactory;
struct OpenGLImageSpecificFactory {
    OpenGLImageFactory* imageFactory;
    bool updating;
};


OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_new(void);
void OpenGLImageSpecificFactory_init(OpenGLImageSpecificFactory* this);

OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_getInstance(void);

void OpenGLImageSpecificFactory_setImageFactory(OpenGLImageSpecificFactory* this, OpenGLImageFactory* imageFactory);

OpenGLImageFactory* OpenGLImageSpecificFactory_getImageFactory(OpenGLImageSpecificFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLImageSpecificFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLImageSpecificFactory_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGESPECIFICFACTORY_H
