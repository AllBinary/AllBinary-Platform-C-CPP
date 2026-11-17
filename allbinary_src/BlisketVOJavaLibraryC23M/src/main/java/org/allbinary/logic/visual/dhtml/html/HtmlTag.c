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
// package org.allbinary.logic.visual.dhtml.html

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct HtmlTag HtmlTag;
struct HtmlTag {
    HashMap* otherAttributes;
};


HtmlTag* HtmlTag_new(void);

void HtmlTag_init(HtmlTag* this);
void HtmlTag_addAttribute(HtmlTag* this, const char* key, const char* value);

static void HtmlTag_initFields(HtmlTag* this) {
    
}


void HtmlTag_init(HtmlTag* this) {
    HtmlTag_initFields(this);
        this->otherAttributes = StdUtil_createHashMap(StdUtil_getInstance());
}

HtmlTag* HtmlTag_new(void) {
    HtmlTag* this = calloc(1, sizeof(HtmlTag));
    HtmlTag_init(this);
    return this;
}


void HtmlTag_addAttribute(HtmlTag* this, const char* key, const char* value) {
        HashMap_put(this->otherAttributes, key, value);
}

