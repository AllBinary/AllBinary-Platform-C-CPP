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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OutputTypeData OutputTypeData;
struct OutputTypeData {
    const char* NAME;
};

static OutputTypeData* OutputTypeData_instance;

OutputTypeData* OutputTypeData_new(void);

void OutputTypeData_init(OutputTypeData* this);
OutputTypeData* OutputTypeData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OutputTypeData_staticInit(void) {
    OutputTypeData_instance = OutputTypeData_new();
}

static void OutputTypeData_initFields(OutputTypeData* this) {
    this->NAME = "OUTPUT_TYPE_NAME";
}


void OutputTypeData_init(OutputTypeData* this) {
    OutputTypeData_initFields(this);
}

OutputTypeData* OutputTypeData_new(void) {
    OutputTypeData* this = calloc(1, sizeof(OutputTypeData));
    OutputTypeData_init(this);
    return this;
}


OutputTypeData* OutputTypeData_getInstance(void) {
        return OutputTypeData_instance;
}

