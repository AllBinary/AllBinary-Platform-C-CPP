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
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct NullPaintable NullPaintable;
struct NullPaintable {
    Paintable base;
};

static NullPaintable* NullPaintable_SINGLETON;

NullPaintable* NullPaintable_new(void);

void NullPaintable_init(NullPaintable* this);
Paintable* NullPaintable_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullPaintable_staticInit(void) {
    NullPaintable_SINGLETON = NullPaintable_new();
}


void NullPaintable_init(NullPaintable* this) {
    Paintable_init(&this->base);
}

NullPaintable* NullPaintable_new(void) {
    NullPaintable* this = calloc(1, sizeof(NullPaintable));
    NullPaintable_init(this);
    return this;
}


Paintable* NullPaintable_getInstance(void) {
        return NullPaintable_SINGLETON;
}

