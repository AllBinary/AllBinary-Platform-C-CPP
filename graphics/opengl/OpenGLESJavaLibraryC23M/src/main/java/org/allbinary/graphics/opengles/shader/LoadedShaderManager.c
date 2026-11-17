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

typedef struct LoadedShaderManager LoadedShaderManager;
struct LoadedShaderManager {
    char unused;
};

static ShaderManager* LoadedShaderManager_instance;

LoadedShaderManager* LoadedShaderManager_new(void);
ShaderManager* LoadedShaderManager_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LoadedShaderManager_staticInit(void) {
    LoadedShaderManager_instance = ShaderManager_new(-1, -1);
}

void LoadedShaderManager_init(LoadedShaderManager* this) {
}

LoadedShaderManager* LoadedShaderManager_new(void) {
    LoadedShaderManager* this = calloc(1, sizeof(LoadedShaderManager));
    LoadedShaderManager_init(this);
    return this;
}


ShaderManager* LoadedShaderManager_getInstance(void) {
        return LoadedShaderManager_instance;
}

