/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/paint/LocationPaintable.h"

typedef struct NullLocationPaintable NullLocationPaintable;
struct NullLocationPaintable {
    LocationPaintable base;
};

static NullLocationPaintable* NullLocationPaintable_instanceC;

NullLocationPaintable* NullLocationPaintable_new(void);
NullLocationPaintable* NullLocationPaintable_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullLocationPaintable_staticInit(void) {
    NullLocationPaintable_instanceC = NullLocationPaintable_new();
}

void NullLocationPaintable_init(NullLocationPaintable* this) {
    LocationPaintable_init(&this->base);
}

NullLocationPaintable* NullLocationPaintable_new(void) {
    NullLocationPaintable* this = calloc(1, sizeof(NullLocationPaintable));
    NullLocationPaintable_init(this);
    return this;
}


NullLocationPaintable* NullLocationPaintable_getInstance(void) {
        return NullLocationPaintable_instanceC;
}

