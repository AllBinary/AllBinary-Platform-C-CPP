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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MultipassState MultipassState;
struct MultipassState {
    int32_t step;
    int32_t iteration;
    int32_t iteration2;
};


MultipassState* MultipassState_new(void);

static void MultipassState_initFields(MultipassState* this) {
    this->step = 0;
    this->iteration = 0;
    this->iteration2 = 0;
}

void MultipassState_init(MultipassState* this) {
    MultipassState_initFields(this);
}

MultipassState* MultipassState_new(void) {
    MultipassState* this = calloc(1, sizeof(MultipassState));
    MultipassState_init(this);
    return this;
}

