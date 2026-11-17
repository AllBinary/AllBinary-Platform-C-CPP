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

typedef struct ShaderManagerFactory ShaderManagerFactory;
struct ShaderManagerFactory {
    char unused;
};

static ShaderManagerFactory* ShaderManagerFactory_instance;

ShaderManagerFactory* ShaderManagerFactory_new(void);
ShaderManagerFactory* ShaderManagerFactory_getInstance(void);
ShaderManager* ShaderManagerFactory_create(ShaderManagerFactory* this);

// Static fields with runtime initializers: call this once at startup
void ShaderManagerFactory_staticInit(void) {
    ShaderManagerFactory_instance = ShaderManagerFactory_new();
}

void ShaderManagerFactory_init(ShaderManagerFactory* this) {
}

ShaderManagerFactory* ShaderManagerFactory_new(void) {
    ShaderManagerFactory* this = calloc(1, sizeof(ShaderManagerFactory));
    ShaderManagerFactory_init(this);
    return this;
}


ShaderManagerFactory* ShaderManagerFactory_getInstance(void) {
        return ShaderManagerFactory_instance;
}


ShaderManager* ShaderManagerFactory_create(ShaderManagerFactory* this) {
        return ShaderManager_getInstance();
}

