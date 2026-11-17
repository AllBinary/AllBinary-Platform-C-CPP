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
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"

typedef struct SimpleCompositeShaderUpdater SimpleCompositeShaderUpdater;
struct SimpleCompositeShaderUpdater {
    CompositeShaderUpdater base;
};


SimpleCompositeShaderUpdater* SimpleCompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);

void SimpleCompositeShaderUpdater_init(SimpleCompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);


void SimpleCompositeShaderUpdater_init(SimpleCompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
        CompositeShaderUpdater_init(&this->base, uniformBlockArray, uniformArray, attributeArray, attributeHandleArray);
}

SimpleCompositeShaderUpdater* SimpleCompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
    SimpleCompositeShaderUpdater* this = calloc(1, sizeof(SimpleCompositeShaderUpdater));
    SimpleCompositeShaderUpdater_init(this, uniformBlockArray, uniformArray, attributeArray, attributeHandleArray);
    return this;
}

