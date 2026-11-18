#ifndef ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H
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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RendererStateFactory RendererStateFactory;
struct RendererStateFactory {
    bool loaded;
    bool surfaceChanged;
};


RendererStateFactory* RendererStateFactory_new(void);
void RendererStateFactory_init(RendererStateFactory* this);

RendererStateFactory* RendererStateFactory_getInstance(void);

void RendererStateFactory_setLoaded(RendererStateFactory* this, bool loaded);

bool RendererStateFactory_isLoaded(RendererStateFactory* this);

void RendererStateFactory_setSurfaceChanged(RendererStateFactory* this, bool initialized);

bool RendererStateFactory_isSurfaceChanged(RendererStateFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RendererStateFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RendererStateFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H
