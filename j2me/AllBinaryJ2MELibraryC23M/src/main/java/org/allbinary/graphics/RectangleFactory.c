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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RectangleFactory RectangleFactory;
struct RectangleFactory {
    char unused;
};

Rectangle* RectangleFactory_SINGLETON;
Rectangle*** RectangleFactory_ARRAY_OF_ARRAYS;

RectangleFactory* RectangleFactory_new(void);

// Static fields with runtime initializers: call this once at startup
void RectangleFactory_staticInit(void) {
    RectangleFactory_SINGLETON = Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0);
    RectangleFactory_ARRAY_OF_ARRAYS = ((Rectangle***) java_array_new2(sizeof(Rectangle*), 0, 0));
}

void RectangleFactory_init(RectangleFactory* this) {
}

RectangleFactory* RectangleFactory_new(void) {
    RectangleFactory* this = calloc(1, sizeof(RectangleFactory));
    RectangleFactory_init(this);
    return this;
}

