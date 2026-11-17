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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct FullScreenPaintableFactory FullScreenPaintableFactory;
struct FullScreenPaintableFactory {
    Paintable* paintable;
};

static FullScreenPaintableFactory* FullScreenPaintableFactory_instance;

FullScreenPaintableFactory* FullScreenPaintableFactory_new(void);
FullScreenPaintableFactory* FullScreenPaintableFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void FullScreenPaintableFactory_staticInit(void) {
    FullScreenPaintableFactory_instance = FullScreenPaintableFactory_new();
}

static void FullScreenPaintableFactory_initFields(FullScreenPaintableFactory* this) {
    this->paintable = NullPaintable_getInstance();
}

void FullScreenPaintableFactory_init(FullScreenPaintableFactory* this) {
    FullScreenPaintableFactory_initFields(this);
}

FullScreenPaintableFactory* FullScreenPaintableFactory_new(void) {
    FullScreenPaintableFactory* this = calloc(1, sizeof(FullScreenPaintableFactory));
    FullScreenPaintableFactory_init(this);
    return this;
}


FullScreenPaintableFactory* FullScreenPaintableFactory_getInstance(void) {
        return FullScreenPaintableFactory_instance;
}

