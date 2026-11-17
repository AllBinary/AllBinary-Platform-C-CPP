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
// package org.allbinary.media.graphics.geography.map.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/graphics/geography/map/drop/BaseDropCellPositionGenerator.h"

typedef struct NullDropCellPositionGenerator NullDropCellPositionGenerator;
struct NullDropCellPositionGenerator {
    BaseDropCellPositionGenerator base;
};

static NullDropCellPositionGenerator* NullDropCellPositionGenerator_instance;

NullDropCellPositionGenerator* NullDropCellPositionGenerator_new(void);
NullDropCellPositionGenerator* NullDropCellPositionGenerator_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullDropCellPositionGenerator_staticInit(void) {
    NullDropCellPositionGenerator_instance = NullDropCellPositionGenerator_new();
}

void NullDropCellPositionGenerator_init(NullDropCellPositionGenerator* this) {
    BaseDropCellPositionGenerator_init(&this->base);
}

NullDropCellPositionGenerator* NullDropCellPositionGenerator_new(void) {
    NullDropCellPositionGenerator* this = calloc(1, sizeof(NullDropCellPositionGenerator));
    NullDropCellPositionGenerator_init(this);
    return this;
}


NullDropCellPositionGenerator* NullDropCellPositionGenerator_getInstance(void) {
        return NullDropCellPositionGenerator_instance;
}

