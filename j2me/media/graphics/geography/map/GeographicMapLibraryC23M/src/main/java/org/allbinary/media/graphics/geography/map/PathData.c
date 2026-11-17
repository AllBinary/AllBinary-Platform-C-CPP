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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PathData PathData;
struct PathData {
    int32_t OFFSET;
};

static PathData* PathData_instance;

PathData* PathData_new(void);
PathData* PathData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PathData_staticInit(void) {
    PathData_instance = PathData_new();
}

static void PathData_initFields(PathData* this) {
    this->OFFSET = 400;
}

void PathData_init(PathData* this) {
    PathData_initFields(this);
}

PathData* PathData_new(void) {
    PathData* this = calloc(1, sizeof(PathData));
    PathData_init(this);
    return this;
}


PathData* PathData_getInstance(void) {
        return PathData_instance;
}

