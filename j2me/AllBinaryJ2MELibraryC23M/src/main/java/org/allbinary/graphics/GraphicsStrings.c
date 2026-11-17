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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GraphicsStrings GraphicsStrings;
struct GraphicsStrings {
    const char* ANIMATION;
    const char* ANGLE;
    const char* MOVEMENT_ANGLE;
    const char* ROTATION;
    const char* OPACITY;
    const char* HTML;
    const char* WIDTH;
    const char* HEIGHT;
};

static GraphicsStrings* GraphicsStrings_instance;

GraphicsStrings* GraphicsStrings_new(void);
GraphicsStrings* GraphicsStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GraphicsStrings_staticInit(void) {
    GraphicsStrings_instance = GraphicsStrings_new();
}

static void GraphicsStrings_initFields(GraphicsStrings* this) {
    this->ANIMATION = "animation";
    this->ANGLE = "angle";
    this->MOVEMENT_ANGLE = "movement_angle";
    this->ROTATION = "rotation";
    this->OPACITY = "opacity";
    this->HTML = "HTML";
    this->WIDTH = "width";
    this->HEIGHT = "height";
}

void GraphicsStrings_init(GraphicsStrings* this) {
    GraphicsStrings_initFields(this);
}

GraphicsStrings* GraphicsStrings_new(void) {
    GraphicsStrings* this = calloc(1, sizeof(GraphicsStrings));
    GraphicsStrings_init(this);
    return this;
}


GraphicsStrings* GraphicsStrings_getInstance(void) {
        return GraphicsStrings_instance;
}

