#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SIMPLECOMPOSITESHADERUPDATER_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SIMPLECOMPOSITESHADERUPDATER_H
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
typedef struct CompositeShaderUpdater CompositeShaderUpdater;
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"

typedef struct SimpleCompositeShaderUpdater SimpleCompositeShaderUpdater;
struct SimpleCompositeShaderUpdater {
    CompositeShaderUpdater base;
};


SimpleCompositeShaderUpdater* SimpleCompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);

void SimpleCompositeShaderUpdater_init(SimpleCompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);
#define SimpleCompositeShaderUpdater_new4 SimpleCompositeShaderUpdater_new
#define SimpleCompositeShaderUpdater_init4 SimpleCompositeShaderUpdater_init
#ifndef SimpleCompositeShaderUpdater_getInstance
#define SimpleCompositeShaderUpdater_getInstance CompositeShaderUpdater_getInstance
#endif
#ifndef SimpleCompositeShaderUpdater_onSurfaceCreated
#define SimpleCompositeShaderUpdater_onSurfaceCreated CompositeShaderUpdater_onSurfaceCreated
#endif
#ifndef SimpleCompositeShaderUpdater_onSurfaceDestroyed
#define SimpleCompositeShaderUpdater_onSurfaceDestroyed CompositeShaderUpdater_onSurfaceDestroyed
#endif
#ifndef SimpleCompositeShaderUpdater_getInstance
#define SimpleCompositeShaderUpdater_getInstance ShaderUpdater_getInstance
#endif
#ifndef SimpleCompositeShaderUpdater_onSurfaceCreated
#define SimpleCompositeShaderUpdater_onSurfaceCreated ShaderUpdater_onSurfaceCreated
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimpleCompositeShaderUpdater_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimpleCompositeShaderUpdater_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SIMPLECOMPOSITESHADERUPDATER_H
