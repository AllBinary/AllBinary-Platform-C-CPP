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

typedef struct HtmlMetaAttributeDataFactory HtmlMetaAttributeDataFactory;
struct HtmlMetaAttributeDataFactory {
    HtmlMetaAttributeData* NAME;
    HtmlMetaAttributeData* HTTP_EQUIV;
    HtmlMetaAttributeData* CONTENT;
};

static HtmlMetaAttributeDataFactory* HtmlMetaAttributeDataFactory_instance;

HtmlMetaAttributeDataFactory* HtmlMetaAttributeDataFactory_new(void);
HtmlMetaAttributeDataFactory* HtmlMetaAttributeDataFactory_getInstance(void);

void HtmlMetaAttributeDataFactory_init(HtmlMetaAttributeDataFactory* this);

// Static fields with runtime initializers: call this once at startup
void HtmlMetaAttributeDataFactory_staticInit(void) {
    HtmlMetaAttributeDataFactory_instance = HtmlMetaAttributeDataFactory_new();
}

static void HtmlMetaAttributeDataFactory_initFields(HtmlMetaAttributeDataFactory* this) {
    this->NAME = HtmlMetaAttributeData_new(0, "HTMLMETA_ATTRIBUTE_NAME");
    this->HTTP_EQUIV = HtmlMetaAttributeData_new(1, "HTMLMETA_ATTRIBUTE_HTTPEQUIV");
    this->CONTENT = HtmlMetaAttributeData_new(2, "HTMLMETA_ATTRIBUTE_CONTENT");
}


HtmlMetaAttributeDataFactory* HtmlMetaAttributeDataFactory_getInstance(void) {
        return HtmlMetaAttributeDataFactory_instance;
}


void HtmlMetaAttributeDataFactory_init(HtmlMetaAttributeDataFactory* this) {
    HtmlMetaAttributeDataFactory_initFields(this);
}

HtmlMetaAttributeDataFactory* HtmlMetaAttributeDataFactory_new(void) {
    HtmlMetaAttributeDataFactory* this = calloc(1, sizeof(HtmlMetaAttributeDataFactory));
    HtmlMetaAttributeDataFactory_init(this);
    return this;
}

