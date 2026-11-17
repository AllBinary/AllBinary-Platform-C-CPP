/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"

typedef struct ModifierOpenGLESImageProcessor ModifierOpenGLESImageProcessor;
struct ModifierOpenGLESImageProcessor {
    OpenGLESImageProcessor base;
};

static ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_instanceC;

ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_new(void);
ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ModifierOpenGLESImageProcessor_staticInit(void) {
    ModifierOpenGLESImageProcessor_instanceC = ModifierOpenGLESImageProcessor_new();
}

void ModifierOpenGLESImageProcessor_init(ModifierOpenGLESImageProcessor* this) {
    OpenGLESImageProcessor_init(&this->base);
}

ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_new(void) {
    ModifierOpenGLESImageProcessor* this = calloc(1, sizeof(ModifierOpenGLESImageProcessor));
    ModifierOpenGLESImageProcessor_init(this);
    return this;
}


ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_getInstance(void) {
        return ModifierOpenGLESImageProcessor_instanceC;
}

