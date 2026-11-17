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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct HtmlTags HtmlTags;
struct HtmlTags {
    BasicArrayList* htmlTagVector;
};


HtmlTags* HtmlTags_new(void);

void HtmlTags_init(HtmlTags* this);
HtmlTag* HtmlTags_get(HtmlTags* this, int32_t index);
void HtmlTags_add(HtmlTags* this, HtmlTag* htmlTag);
int32_t HtmlTags_size(HtmlTags* this);

static void HtmlTags_initFields(HtmlTags* this) {
    
}


void HtmlTags_init(HtmlTags* this) {
    HtmlTags_initFields(this);
        this->htmlTagVector = BasicArrayListD_new();
}

HtmlTags* HtmlTags_new(void) {
    HtmlTags* this = calloc(1, sizeof(HtmlTags));
    HtmlTags_init(this);
    return this;
}


HtmlTag* HtmlTags_get(HtmlTags* this, int32_t index) {
        return ((HtmlTag*) BasicArrayList_get(this->htmlTagVector, index));
}


void HtmlTags_add(HtmlTags* this, HtmlTag* htmlTag) {
        BasicArrayList_add(this->htmlTagVector, htmlTag);
}


int32_t HtmlTags_size(HtmlTags* this) {
        return BasicArrayList_size(this->htmlTagVector);
}

