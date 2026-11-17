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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RendererStateFactory RendererStateFactory;
struct RendererStateFactory {
    bool loaded;
    bool surfaceChanged;
};

static RendererStateFactory* RendererStateFactory_instance;

RendererStateFactory* RendererStateFactory_new(void);
RendererStateFactory* RendererStateFactory_getInstance(void);
void RendererStateFactory_setLoaded(RendererStateFactory* this, bool loaded);
bool RendererStateFactory_isLoaded(RendererStateFactory* this);
void RendererStateFactory_setSurfaceChanged(RendererStateFactory* this, bool initialized);
bool RendererStateFactory_isSurfaceChanged(RendererStateFactory* this);

// Static fields with runtime initializers: call this once at startup
void RendererStateFactory_staticInit(void) {
    RendererStateFactory_instance = RendererStateFactory_new();
}

static void RendererStateFactory_initFields(RendererStateFactory* this) {
    this->loaded = false;
    this->surfaceChanged = false;
}

void RendererStateFactory_init(RendererStateFactory* this) {
    RendererStateFactory_initFields(this);
}

RendererStateFactory* RendererStateFactory_new(void) {
    RendererStateFactory* this = calloc(1, sizeof(RendererStateFactory));
    RendererStateFactory_init(this);
    return this;
}


RendererStateFactory* RendererStateFactory_getInstance(void) {
        return RendererStateFactory_instance;
}


void RendererStateFactory_setLoaded(RendererStateFactory* this, bool loaded) {
        this->loaded = loaded;
}


bool RendererStateFactory_isLoaded(RendererStateFactory* this) {
        return this->loaded;
}


void RendererStateFactory_setSurfaceChanged(RendererStateFactory* this, bool initialized) {
        this->surfaceChanged = initialized;
}


bool RendererStateFactory_isSurfaceChanged(RendererStateFactory* this) {
        return this->surfaceChanged;
}

