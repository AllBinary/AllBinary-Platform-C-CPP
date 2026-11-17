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

typedef struct ShaderStrings ShaderStrings;
struct ShaderStrings {
    const char* NO_PROGRAM_HANDLE;
    const char* UNIFORM_BLOCK_HANDLE;
    const char* UNIFORM_HANDLE;
    const char* UNIFORM_ATTRIBUTE_HANDLE;
};

static ShaderStrings* ShaderStrings_instance;

ShaderStrings* ShaderStrings_new(void);
ShaderStrings* ShaderStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ShaderStrings_staticInit(void) {
    ShaderStrings_instance = ShaderStrings_new();
}

static void ShaderStrings_initFields(ShaderStrings* this) {
    this->NO_PROGRAM_HANDLE = "No program handle";
    this->UNIFORM_BLOCK_HANDLE = "Uniform Block Handle: ";
    this->UNIFORM_HANDLE = "Uniform Handle: ";
    this->UNIFORM_ATTRIBUTE_HANDLE = "Uniform Attribute Handle: ";
}

void ShaderStrings_init(ShaderStrings* this) {
    ShaderStrings_initFields(this);
}

ShaderStrings* ShaderStrings_new(void) {
    ShaderStrings* this = calloc(1, sizeof(ShaderStrings));
    ShaderStrings_init(this);
    return this;
}


ShaderStrings* ShaderStrings_getInstance(void) {
        return ShaderStrings_instance;
}

