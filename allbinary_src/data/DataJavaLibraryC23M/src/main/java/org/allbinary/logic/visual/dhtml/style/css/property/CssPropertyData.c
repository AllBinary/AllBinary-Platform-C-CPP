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
// package org.allbinary.logic.visual.dhtml.style.css.property

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CssPropertyData CssPropertyData;
struct CssPropertyData {
    const char* NAME;
    const char* VALUES;
};

static CssPropertyData* CssPropertyData_instance;

CssPropertyData* CssPropertyData_new(void);
CssPropertyData* CssPropertyData_getInstance(void);

void CssPropertyData_init(CssPropertyData* this);

// Static fields with runtime initializers: call this once at startup
void CssPropertyData_staticInit(void) {
    CssPropertyData_instance = CssPropertyData_new();
}

static void CssPropertyData_initFields(CssPropertyData* this) {
    this->NAME = "CSS_PROPERTY_NAME";
    this->VALUES = "CSS_PROPERTY_VALUES";
}


CssPropertyData* CssPropertyData_getInstance(void) {
        return CssPropertyData_instance;
}


void CssPropertyData_init(CssPropertyData* this) {
    CssPropertyData_initFields(this);
}

CssPropertyData* CssPropertyData_new(void) {
    CssPropertyData* this = calloc(1, sizeof(CssPropertyData));
    CssPropertyData_init(this);
    return this;
}

