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
// package org.allbinary.logic.java.number

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LongData LongData;
struct LongData {
    char unused;
};

int32_t LongData_MAX_LONG_LENGTH;

LongData* LongData_new(void);

void LongData_init(LongData* this);

// Static fields with runtime initializers: call this once at startup
void LongData_staticInit(void) {
    LongData_MAX_LONG_LENGTH = ((int32_t) strlen(Long_toString(Long_MAX_VALUE)));
}


void LongData_init(LongData* this) {
}

LongData* LongData_new(void) {
    LongData* this = calloc(1, sizeof(LongData));
    LongData_init(this);
    return this;
}

