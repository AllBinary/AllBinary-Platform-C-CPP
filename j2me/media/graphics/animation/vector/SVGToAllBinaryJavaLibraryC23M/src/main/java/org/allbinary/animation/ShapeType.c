/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ShapeType ShapeType;
struct ShapeType {
    const char* name;
};


ShapeType* ShapeType_new(const char* name);

void ShapeType_init(ShapeType* this, const char* name);
const char* ShapeType_getName(ShapeType* this);

static void ShapeType_initFields(ShapeType* this) {
    
}


void ShapeType_init(ShapeType* this, const char* name) {
    ShapeType_initFields(this);
        this->name = name;
}

ShapeType* ShapeType_new(const char* name) {
    ShapeType* this = calloc(1, sizeof(ShapeType));
    ShapeType_init(this, name);
    return this;
}


const char* ShapeType_getName(ShapeType* this) {
        return this->name;
}

