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
// package org.allbinary.logic.visual.transform.template.customizer.bodies

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BodyData BodyData;
struct BodyData {
    const char* NAME;
    const char* VIEWNAMEKEY;
    int32_t MIN;
};

static BodyData* BodyData_instance;

BodyData* BodyData_new(void);

void BodyData_init(BodyData* this);
BodyData* BodyData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void BodyData_staticInit(void) {
    BodyData_instance = BodyData_new();
}

static void BodyData_initFields(BodyData* this) {
    this->NAME = "BODY_NAME";
    this->VIEWNAMEKEY = "Body";
    this->MIN = 0;
}


void BodyData_init(BodyData* this) {
    BodyData_initFields(this);
}

BodyData* BodyData_new(void) {
    BodyData* this = calloc(1, sizeof(BodyData));
    BodyData_init(this);
    return this;
}


BodyData* BodyData_getInstance(void) {
        return BodyData_instance;
}

