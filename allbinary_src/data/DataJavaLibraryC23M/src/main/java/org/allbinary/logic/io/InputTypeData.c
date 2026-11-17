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

typedef struct InputTypeData InputTypeData;
struct InputTypeData {
    const char* NAME;
};

static InputTypeData* InputTypeData_instance;

InputTypeData* InputTypeData_new(void);
InputTypeData* InputTypeData_getInstance(void);

void InputTypeData_init(InputTypeData* this);

// Static fields with runtime initializers: call this once at startup
void InputTypeData_staticInit(void) {
    InputTypeData_instance = InputTypeData_new();
}

static void InputTypeData_initFields(InputTypeData* this) {
    this->NAME = "INPUT_TYPE_NAME";
}


InputTypeData* InputTypeData_getInstance(void) {
        return InputTypeData_instance;
}


void InputTypeData_init(InputTypeData* this) {
    InputTypeData_initFields(this);
}

InputTypeData* InputTypeData_new(void) {
    InputTypeData* this = calloc(1, sizeof(InputTypeData));
    InputTypeData_init(this);
    return this;
}

