#ifndef ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H
#define ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H
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
// package org.allbinary.platform.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GL10 GL10;
typedef struct Image Image;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct PlatformTextureBaseFactory PlatformTextureBaseFactory;
struct PlatformTextureBaseFactory {
    CommonStrings* commonStrings;
};

extern PlatformTextureBaseFactory* PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY;

PlatformTextureBaseFactory* PlatformTextureBaseFactory_new(void);
void PlatformTextureBaseFactory_init(PlatformTextureBaseFactory* this);

void PlatformTextureBaseFactory_load(PlatformTextureBaseFactory* this, GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformTextureBaseFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformTextureBaseFactory_register(void);


#endif // ORG_ALLBINARY_PLATFORM_OPENGLES_PLATFORMTEXTUREBASEFACTORY_H
