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

typedef struct HtmlMetaAttributeValuesData HtmlMetaAttributeValuesData;
struct HtmlMetaAttributeValuesData {
    const char* ABSTRACT;
    const char* DESCRIPTION;
    const char* KEYWORDS;
};

static HtmlMetaAttributeValuesData* HtmlMetaAttributeValuesData_instance;

HtmlMetaAttributeValuesData* HtmlMetaAttributeValuesData_new(void);
HtmlMetaAttributeValuesData* HtmlMetaAttributeValuesData_getInstance(void);

void HtmlMetaAttributeValuesData_init(HtmlMetaAttributeValuesData* this);

// Static fields with runtime initializers: call this once at startup
void HtmlMetaAttributeValuesData_staticInit(void) {
    HtmlMetaAttributeValuesData_instance = HtmlMetaAttributeValuesData_new();
}

static void HtmlMetaAttributeValuesData_initFields(HtmlMetaAttributeValuesData* this) {
    this->ABSTRACT = "abstract";
    this->DESCRIPTION = "description";
    this->KEYWORDS = "keywords";
}


HtmlMetaAttributeValuesData* HtmlMetaAttributeValuesData_getInstance(void) {
        return HtmlMetaAttributeValuesData_instance;
}


void HtmlMetaAttributeValuesData_init(HtmlMetaAttributeValuesData* this) {
    HtmlMetaAttributeValuesData_initFields(this);
}

HtmlMetaAttributeValuesData* HtmlMetaAttributeValuesData_new(void) {
    HtmlMetaAttributeValuesData* this = calloc(1, sizeof(HtmlMetaAttributeValuesData));
    HtmlMetaAttributeValuesData_init(this);
    return this;
}

