#ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H
#define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H
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
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct OpenGLESGraphicsFactory OpenGLESGraphicsFactory;
#if __has_include("org/allbinary/device/OpenGLESGraphicsFactory.h")
#include "org/allbinary/device/OpenGLESGraphicsFactory.h"
#endif

typedef struct OpenGLESGraphicsCompositeFactory OpenGLESGraphicsCompositeFactory;
struct OpenGLESGraphicsCompositeFactory {
    OpenGLESGraphicsFactory* openGLESGraphicsFactory;
};


OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_new(void);
void OpenGLESGraphicsCompositeFactory_init(OpenGLESGraphicsCompositeFactory* this);

OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_getInstance(void);

void OpenGLESGraphicsCompositeFactory_set(OpenGLESGraphicsCompositeFactory* this, OpenGLESGraphicsFactory* openGLESGraphicsFactory);

OpenGLESGraphicsFactory* OpenGLESGraphicsCompositeFactory_get(OpenGLESGraphicsCompositeFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESGraphicsCompositeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESGraphicsCompositeFactory_register(void);


#endif // ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H
