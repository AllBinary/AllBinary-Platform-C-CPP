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

typedef struct ShapeTypeFactory ShapeTypeFactory;
struct ShapeTypeFactory {
    const char* KEY_LINE;
    const char* KEY_CIRCLE;
    const char* KEY_RECTANGLE;
    const char* KEY_RECT;
    ShapeType* LINE;
    ShapeType* CIRCLE;
    ShapeType* RECTANGLE;
};

static ShapeTypeFactory* ShapeTypeFactory_instance;

ShapeTypeFactory* ShapeTypeFactory_new(void);
ShapeTypeFactory* ShapeTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ShapeTypeFactory_staticInit(void) {
    ShapeTypeFactory_instance = ShapeTypeFactory_new();
}

static void ShapeTypeFactory_initFields(ShapeTypeFactory* this) {
    this->KEY_LINE = "line";
    this->KEY_CIRCLE = "circle";
    this->KEY_RECTANGLE = "rectangle";
    this->KEY_RECT = "rect";
    this->LINE = ShapeType_new(this->KEY_LINE);
    this->CIRCLE = ShapeType_new(this->KEY_CIRCLE);
    this->RECTANGLE = ShapeType_new(this->KEY_RECTANGLE);
}

void ShapeTypeFactory_init(ShapeTypeFactory* this) {
    ShapeTypeFactory_initFields(this);
}

ShapeTypeFactory* ShapeTypeFactory_new(void) {
    ShapeTypeFactory* this = calloc(1, sizeof(ShapeTypeFactory));
    ShapeTypeFactory_init(this);
    return this;
}


ShapeTypeFactory* ShapeTypeFactory_getInstance(void) {
        return ShapeTypeFactory_instance;
}

