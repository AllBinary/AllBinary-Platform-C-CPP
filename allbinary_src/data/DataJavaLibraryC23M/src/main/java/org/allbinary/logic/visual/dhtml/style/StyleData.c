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

typedef struct StyleData StyleData;
struct StyleData {
    const char* NAME;
    int32_t NAMEMAXLEN;
};

static StyleData* StyleData_instance;

StyleData* StyleData_new(void);
StyleData* StyleData_getInstance(void);

void StyleData_init(StyleData* this);

// Static fields with runtime initializers: call this once at startup
void StyleData_staticInit(void) {
    StyleData_instance = StyleData_new();
}

static void StyleData_initFields(StyleData* this) {
    this->NAME = "STYLE_NAME";
    this->NAMEMAXLEN = 255;
}


StyleData* StyleData_getInstance(void) {
        return StyleData_instance;
}


void StyleData_init(StyleData* this) {
    StyleData_initFields(this);
}

StyleData* StyleData_new(void) {
    StyleData* this = calloc(1, sizeof(StyleData));
    StyleData_init(this);
    return this;
}

