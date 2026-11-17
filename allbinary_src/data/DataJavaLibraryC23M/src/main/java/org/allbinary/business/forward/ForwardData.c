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
// package org.allbinary.business.forward

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ForwardData ForwardData;
struct ForwardData {
    const char* PAGE;
    const char* NAME;
    const char* VALUE;
};

static ForwardData* ForwardData_instance;

ForwardData* ForwardData_new(void);

void ForwardData_init(ForwardData* this);
ForwardData* ForwardData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ForwardData_staticInit(void) {
    ForwardData_instance = ForwardData_new();
}

static void ForwardData_initFields(ForwardData* this) {
    this->PAGE = "FORWARD_PAGE";
    this->NAME = "FORWARD_NAME";
    this->VALUE = "FORWARD_VALUE";
}


void ForwardData_init(ForwardData* this) {
    ForwardData_initFields(this);
}

ForwardData* ForwardData_new(void) {
    ForwardData* this = calloc(1, sizeof(ForwardData));
    ForwardData_init(this);
    return this;
}


ForwardData* ForwardData_getInstance(void) {
        return ForwardData_instance;
}

