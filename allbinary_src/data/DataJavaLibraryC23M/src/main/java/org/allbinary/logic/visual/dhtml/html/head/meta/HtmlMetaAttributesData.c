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

typedef struct HtmlMetaAttributesData HtmlMetaAttributesData;
struct HtmlMetaAttributesData {
    const char* NAME_VALUE;
    const char* HTTP_EQUIV_VALUE;
};

static HtmlMetaAttributesData* HtmlMetaAttributesData_instance;

HtmlMetaAttributesData* HtmlMetaAttributesData_new(void);
HtmlMetaAttributesData* HtmlMetaAttributesData_getInstance(void);

void HtmlMetaAttributesData_init(HtmlMetaAttributesData* this);

// Static fields with runtime initializers: call this once at startup
void HtmlMetaAttributesData_staticInit(void) {
    HtmlMetaAttributesData_instance = HtmlMetaAttributesData_new();
}

static void HtmlMetaAttributesData_initFields(HtmlMetaAttributesData* this) {
    this->NAME_VALUE = "name";
    this->HTTP_EQUIV_VALUE = "http-equiv";
}


HtmlMetaAttributesData* HtmlMetaAttributesData_getInstance(void) {
        return HtmlMetaAttributesData_instance;
}


void HtmlMetaAttributesData_init(HtmlMetaAttributesData* this) {
    HtmlMetaAttributesData_initFields(this);
}

HtmlMetaAttributesData* HtmlMetaAttributesData_new(void) {
    HtmlMetaAttributesData* this = calloc(1, sizeof(HtmlMetaAttributesData));
    HtmlMetaAttributesData_init(this);
    return this;
}

