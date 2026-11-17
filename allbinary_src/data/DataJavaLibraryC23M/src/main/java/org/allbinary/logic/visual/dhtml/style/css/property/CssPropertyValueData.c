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

typedef struct CssPropertyValueData CssPropertyValueData;
struct CssPropertyValueData {
    const char* NAME;
};

static CssPropertyValueData* CssPropertyValueData_instance;

CssPropertyValueData* CssPropertyValueData_new(void);
CssPropertyValueData* CssPropertyValueData_getInstance(void);

void CssPropertyValueData_init(CssPropertyValueData* this);

// Static fields with runtime initializers: call this once at startup
void CssPropertyValueData_staticInit(void) {
    CssPropertyValueData_instance = CssPropertyValueData_new();
}

static void CssPropertyValueData_initFields(CssPropertyValueData* this) {
    this->NAME = "CSS_PROPERTY_VALUE";
}


CssPropertyValueData* CssPropertyValueData_getInstance(void) {
        return CssPropertyValueData_instance;
}


void CssPropertyValueData_init(CssPropertyValueData* this) {
    CssPropertyValueData_initFields(this);
}

CssPropertyValueData* CssPropertyValueData_new(void) {
    CssPropertyValueData* this = calloc(1, sizeof(CssPropertyValueData));
    CssPropertyValueData_init(this);
    return this;
}

