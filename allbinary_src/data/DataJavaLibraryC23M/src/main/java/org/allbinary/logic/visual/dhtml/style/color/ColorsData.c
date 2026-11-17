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
// package org.allbinary.logic.visual.dhtml.style.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ColorsData ColorsData;
struct ColorsData {
    const char* NAME;
};

static ColorsData* ColorsData_instance;

ColorsData* ColorsData_new(void);
ColorsData* ColorsData_getInstance(void);

void ColorsData_init(ColorsData* this);

// Static fields with runtime initializers: call this once at startup
void ColorsData_staticInit(void) {
    ColorsData_instance = ColorsData_new();
}

static void ColorsData_initFields(ColorsData* this) {
    this->NAME = "COLORS_NAME";
}


ColorsData* ColorsData_getInstance(void) {
        return ColorsData_instance;
}


void ColorsData_init(ColorsData* this) {
    ColorsData_initFields(this);
}

ColorsData* ColorsData_new(void) {
    ColorsData* this = calloc(1, sizeof(ColorsData));
    ColorsData_init(this);
    return this;
}

