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

typedef struct PaintableFactory PaintableFactory;
struct PaintableFactory {
    char unused;
};


PaintableFactory* PaintableFactory_new(void);
Paintable* PaintableFactory_getInstance(PaintableFactory* this);

void PaintableFactory_init(PaintableFactory* this) {
}

PaintableFactory* PaintableFactory_new(void) {
    PaintableFactory* this = calloc(1, sizeof(PaintableFactory));
    PaintableFactory_init(this);
    return this;
}


Paintable* PaintableFactory_getInstance(PaintableFactory* this) {
        return NullPaintable_getInstance();
}

