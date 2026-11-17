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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct TouchButtonsPaintableFactory TouchButtonsPaintableFactory;
struct TouchButtonsPaintableFactory {
    char unused;
};


TouchButtonsPaintableFactory* TouchButtonsPaintableFactory_new(void);
Paintable* TouchButtonsPaintableFactory_getInstance(BasicColor* basicColor);

void TouchButtonsPaintableFactory_init(TouchButtonsPaintableFactory* this) {
}

TouchButtonsPaintableFactory* TouchButtonsPaintableFactory_new(void) {
    TouchButtonsPaintableFactory* this = calloc(1, sizeof(TouchButtonsPaintableFactory));
    TouchButtonsPaintableFactory_init(this);
    return this;
}


Paintable* TouchButtonsPaintableFactory_getInstance(BasicColor* basicColor) {
        return Paintable_new();
}

