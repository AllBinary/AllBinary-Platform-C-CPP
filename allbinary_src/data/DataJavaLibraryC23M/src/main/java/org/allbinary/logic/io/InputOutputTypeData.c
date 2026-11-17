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

typedef struct InputOutputTypeData InputOutputTypeData;
struct InputOutputTypeData {
    const char* NAME;
    const char* FILE;
    const char* RESPONSE;
    const char* DB;
    const char* JSP;
    const char* JSP_FRAGMENT;
    const char* PHP;
    const char* ASP;
    const char* PL;
    const char* DEFAULT;
    const char* DEFAULT_FRAGMENT;
};

static InputOutputTypeData* InputOutputTypeData_instance;

InputOutputTypeData* InputOutputTypeData_new(void);
InputOutputTypeData* InputOutputTypeData_getInstance(void);

void InputOutputTypeData_init(InputOutputTypeData* this);

// Static fields with runtime initializers: call this once at startup
void InputOutputTypeData_staticInit(void) {
    InputOutputTypeData_instance = InputOutputTypeData_new();
}

static void InputOutputTypeData_initFields(InputOutputTypeData* this) {
    this->NAME = "INPUT_OUTPUT_TYPE_NAME";
    this->FILE = "INPUT_OUTPUT_TYPE_FILE";
    this->RESPONSE = "INPUT_OUTPUT_TYPE_RESPONSE";
    this->DB = "INPUT_OUTPUT_TYPE_DB";
    this->JSP = "jsp";
    this->JSP_FRAGMENT = "jspf";
    this->PHP = "php";
    this->ASP = "asp";
    this->PL = "pl";
    this->DEFAULT = this->JSP;
    this->DEFAULT_FRAGMENT = this->JSP_FRAGMENT;
}


InputOutputTypeData* InputOutputTypeData_getInstance(void) {
        return InputOutputTypeData_instance;
}


void InputOutputTypeData_init(InputOutputTypeData* this) {
    InputOutputTypeData_initFields(this);
}

InputOutputTypeData* InputOutputTypeData_new(void) {
    InputOutputTypeData* this = calloc(1, sizeof(InputOutputTypeData));
    InputOutputTypeData_init(this);
    return this;
}

