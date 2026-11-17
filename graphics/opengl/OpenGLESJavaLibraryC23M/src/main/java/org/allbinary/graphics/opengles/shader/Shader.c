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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct Shader Shader;
struct Shader {
    const char* shaderName;
    BasicArrayList* shaderStringList;
    const char* shaderAsString;
    int32_t shaderHandle;
};


Shader* Shader_new(void);

static void Shader_initFields(Shader* this) {
    this->shaderName = StringUtil_getInstance()->EMPTY_STRING;
    this->shaderStringList = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->shaderAsString = StringUtil_getInstance()->EMPTY_STRING;
    this->shaderHandle = 0;
}

void Shader_init(Shader* this) {
    Shader_initFields(this);
}

Shader* Shader_new(void) {
    Shader* this = calloc(1, sizeof(Shader));
    Shader_init(this);
    return this;
}

