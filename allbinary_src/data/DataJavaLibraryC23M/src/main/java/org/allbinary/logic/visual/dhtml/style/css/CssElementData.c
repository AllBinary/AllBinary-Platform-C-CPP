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
// package org.allbinary.logic.visual.dhtml.style.css

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CssElementData CssElementData;
struct CssElementData {
    const char* NAME;
};

static CssElementData* CssElementData_instance;

CssElementData* CssElementData_new(void);
CssElementData* CssElementData_getInstance(void);

void CssElementData_init(CssElementData* this);

// Static fields with runtime initializers: call this once at startup
void CssElementData_staticInit(void) {
    CssElementData_instance = CssElementData_new();
}

static void CssElementData_initFields(CssElementData* this) {
    this->NAME = "CSS_ELEMENT_NAME";
}


CssElementData* CssElementData_getInstance(void) {
        return CssElementData_instance;
}


void CssElementData_init(CssElementData* this) {
    CssElementData_initFields(this);
}

CssElementData* CssElementData_new(void) {
    CssElementData* this = calloc(1, sizeof(CssElementData));
    CssElementData_init(this);
    return this;
}

