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
// package org.allbinary.logic.visual.dhtml.html.head.meta

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HtmlMetasData HtmlMetasData;
struct HtmlMetasData {
    const char* NAME;
};

static HtmlMetasData* HtmlMetasData_instance;

HtmlMetasData* HtmlMetasData_new(void);

void HtmlMetasData_init(HtmlMetasData* this);
HtmlMetasData* HtmlMetasData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void HtmlMetasData_staticInit(void) {
    HtmlMetasData_instance = HtmlMetasData_new();
}

static void HtmlMetasData_initFields(HtmlMetasData* this) {
    this->NAME = "HTMLMETAS_NAME";
}


void HtmlMetasData_init(HtmlMetasData* this) {
    HtmlMetasData_initFields(this);
}

HtmlMetasData* HtmlMetasData_new(void) {
    HtmlMetasData* this = calloc(1, sizeof(HtmlMetasData));
    HtmlMetasData_init(this);
    return this;
}


HtmlMetasData* HtmlMetasData_getInstance(void) {
        return HtmlMetasData_instance;
}

