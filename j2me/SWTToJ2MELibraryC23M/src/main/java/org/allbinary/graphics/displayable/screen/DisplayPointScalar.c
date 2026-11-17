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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"

typedef struct DisplayPointScalar DisplayPointScalar;
struct DisplayPointScalar {
    char unused;
};

static DisplayPointScalar* DisplayPointScalar_instance;

DisplayPointScalar* DisplayPointScalar_new(void);
DisplayPointScalar* DisplayPointScalar_getInstance(void);

void DisplayPointScalar_init(DisplayPointScalar* this);
int32_t DisplayPointScalar_processX(DisplayPointScalar* this, int32_t value);
int32_t DisplayPointScalar_processY(DisplayPointScalar* this, int32_t value);
GPoint* DisplayPointScalar_process(DisplayPointScalar* this, GPoint* point);

// Static fields with runtime initializers: call this once at startup
void DisplayPointScalar_staticInit(void) {
    DisplayPointScalar_instance = DisplayPointScalar_new();
}


DisplayPointScalar* DisplayPointScalar_getInstance(void) {
        return DisplayPointScalar_instance;
}


void DisplayPointScalar_init(DisplayPointScalar* this) {
}

DisplayPointScalar* DisplayPointScalar_new(void) {
    DisplayPointScalar* this = calloc(1, sizeof(DisplayPointScalar));
    DisplayPointScalar_init(this);
    return this;
}


int32_t DisplayPointScalar_processX(DisplayPointScalar* this, int32_t value) {
        return value;
}


int32_t DisplayPointScalar_processY(DisplayPointScalar* this, int32_t value) {
        return value;
}


GPoint* DisplayPointScalar_process(DisplayPointScalar* this, GPoint* point) {
        return point;
}

