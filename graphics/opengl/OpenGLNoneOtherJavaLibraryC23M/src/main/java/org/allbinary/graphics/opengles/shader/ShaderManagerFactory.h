#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGERFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGERFACTORY_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.graphics.opengles.shader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ShaderManager ShaderManager;

typedef struct ShaderManagerFactory ShaderManagerFactory;
struct ShaderManagerFactory {
    char unused;
};


ShaderManagerFactory* ShaderManagerFactory_new(void);
void ShaderManagerFactory_init(ShaderManagerFactory* this);

ShaderManagerFactory* ShaderManagerFactory_getInstance(void);

ShaderManager* ShaderManagerFactory_create(ShaderManagerFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShaderManagerFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShaderManagerFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGERFACTORY_H
