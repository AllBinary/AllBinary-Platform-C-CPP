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

typedef struct HtmlMetaData HtmlMetaData;
struct HtmlMetaData {
    const char* NAME;
    const char* LABEL;
    const char* VALUE;
};

static HtmlMetaData* HtmlMetaData_instance;

HtmlMetaData* HtmlMetaData_new(void);

void HtmlMetaData_init(HtmlMetaData* this);
HtmlMetaData* HtmlMetaData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void HtmlMetaData_staticInit(void) {
    HtmlMetaData_instance = HtmlMetaData_new();
}

static void HtmlMetaData_initFields(HtmlMetaData* this) {
    this->NAME = "HTMLMETA_NAME";
    this->LABEL = "HTMLMETA_LABEL";
    this->VALUE = "meta";
}


void HtmlMetaData_init(HtmlMetaData* this) {
    HtmlMetaData_initFields(this);
}

HtmlMetaData* HtmlMetaData_new(void) {
    HtmlMetaData* this = calloc(1, sizeof(HtmlMetaData));
    HtmlMetaData_init(this);
    return this;
}


HtmlMetaData* HtmlMetaData_getInstance(void) {
        return HtmlMetaData_instance;
}

