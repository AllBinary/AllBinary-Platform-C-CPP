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
// package org.allbinary.logic.visual.dhtml.style

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StylesData StylesData;
struct StylesData {
    const char* NAME;
};

static StylesData* StylesData_instance;

StylesData* StylesData_new(void);
StylesData* StylesData_getInstance(void);

void StylesData_init(StylesData* this);

// Static fields with runtime initializers: call this once at startup
void StylesData_staticInit(void) {
    StylesData_instance = StylesData_new();
}

static void StylesData_initFields(StylesData* this) {
    this->NAME = "STYLES_NAME";
}


StylesData* StylesData_getInstance(void) {
        return StylesData_instance;
}


void StylesData_init(StylesData* this) {
    StylesData_initFields(this);
}

StylesData* StylesData_new(void) {
    StylesData* this = calloc(1, sizeof(StylesData));
    StylesData_init(this);
    return this;
}

