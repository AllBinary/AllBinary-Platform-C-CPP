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
// #include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ShaderInitializer ShaderInitializer;
struct ShaderInitializer {
    CommonStrings* commonStrings;
};

static ShaderInitializer* ShaderInitializer_instance;

ShaderInitializer* ShaderInitializer_new(void);
ShaderInitializer* ShaderInitializer_getInstance(void);
int32_t ShaderInitializer_init(ShaderInitializer* this, GL10* gl, Shader** shader, const char** attributeArray);

// Static fields with runtime initializers: call this once at startup
void ShaderInitializer_staticInit(void) {
    ShaderInitializer_instance = ShaderInitializer_new();
}

static void ShaderInitializer_initFields(ShaderInitializer* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void ShaderInitializer_init(ShaderInitializer* this) {
    ShaderInitializer_initFields(this);
}

ShaderInitializer* ShaderInitializer_new(void) {
    ShaderInitializer* this = calloc(1, sizeof(ShaderInitializer));
    ShaderInitializer_init(this);
    return this;
}


ShaderInitializer* ShaderInitializer_getInstance(void) {
        return ShaderInitializer_instance;
}


int32_t ShaderInitializer_init(ShaderInitializer* this, GL10* gl, Shader** shader, const char** attributeArray) {
        return -1;
}

