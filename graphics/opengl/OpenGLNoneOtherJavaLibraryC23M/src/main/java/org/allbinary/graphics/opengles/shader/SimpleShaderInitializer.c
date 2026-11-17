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
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"

typedef struct SimpleShaderInitializer SimpleShaderInitializer;
struct SimpleShaderInitializer {
    ShaderInitializer base;
};

static SimpleShaderInitializer* SimpleShaderInitializer_instanceC;

SimpleShaderInitializer* SimpleShaderInitializer_new(void);
SimpleShaderInitializer* SimpleShaderInitializer_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SimpleShaderInitializer_staticInit(void) {
    SimpleShaderInitializer_instanceC = SimpleShaderInitializer_new();
}

void SimpleShaderInitializer_init(SimpleShaderInitializer* this) {
    ShaderInitializer_init(&this->base);
}

SimpleShaderInitializer* SimpleShaderInitializer_new(void) {
    SimpleShaderInitializer* this = calloc(1, sizeof(SimpleShaderInitializer));
    SimpleShaderInitializer_init(this);
    return this;
}


SimpleShaderInitializer* SimpleShaderInitializer_getInstance(void) {
        return SimpleShaderInitializer_instanceC;
}

