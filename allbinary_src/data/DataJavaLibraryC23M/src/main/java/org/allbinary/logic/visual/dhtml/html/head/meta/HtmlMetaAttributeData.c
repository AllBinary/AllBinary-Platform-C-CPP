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

typedef struct HtmlMetaAttributeData HtmlMetaAttributeData;
struct HtmlMetaAttributeData {
    int32_t id;
    const char* name;
};


HtmlMetaAttributeData* HtmlMetaAttributeData_new(int32_t id, const char* value);

void HtmlMetaAttributeData_init(HtmlMetaAttributeData* this, int32_t id, const char* value);
bool HtmlMetaAttributeData_equals(HtmlMetaAttributeData* this, HtmlMetaAttributeData* htmlMetaAttributeData);
const char* HtmlMetaAttributeData_toString(HtmlMetaAttributeData* this);

static void HtmlMetaAttributeData_initFields(HtmlMetaAttributeData* this) {
    
    
}


void HtmlMetaAttributeData_init(HtmlMetaAttributeData* this, int32_t id, const char* value) {
    HtmlMetaAttributeData_initFields(this);
        this->name = value;
        this->id = id;
}

HtmlMetaAttributeData* HtmlMetaAttributeData_new(int32_t id, const char* value) {
    HtmlMetaAttributeData* this = calloc(1, sizeof(HtmlMetaAttributeData));
    HtmlMetaAttributeData_init(this, id, value);
    return this;
}


bool HtmlMetaAttributeData_equals(HtmlMetaAttributeData* this, HtmlMetaAttributeData* htmlMetaAttributeData) {
        if (htmlMetaAttributeData->id == this->id) {
            return true;
        } else {
            return false;
        }
}


const char* HtmlMetaAttributeData_toString(HtmlMetaAttributeData* this) {
        return this->name;
}

