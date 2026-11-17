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
#include "org/allbinary/logic/NullUtil.h"

typedef struct ModelViewProjection ModelViewProjection;
struct ModelViewProjection {
    char unused;
};

static ModelViewProjection* ModelViewProjection_instance;

ModelViewProjection* ModelViewProjection_new(void);
ModelViewProjection* ModelViewProjection_getInstance(void);
float* ModelViewProjection_get(ModelViewProjection* this);

// Static fields with runtime initializers: call this once at startup
void ModelViewProjection_staticInit(void) {
    ModelViewProjection_instance = ModelViewProjection_new();
}

void ModelViewProjection_init(ModelViewProjection* this) {
}

ModelViewProjection* ModelViewProjection_new(void) {
    ModelViewProjection* this = calloc(1, sizeof(ModelViewProjection));
    ModelViewProjection_init(this);
    return this;
}


ModelViewProjection* ModelViewProjection_getInstance(void) {
        return ModelViewProjection_instance;
}


float* ModelViewProjection_get(ModelViewProjection* this) {
        return NullUtil_getInstance()->NULL_FLOAT_ARRAY;
}

