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
// package org.allbinary.logic.visual.dhtml.html.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h"

typedef struct HtmlValueInput HtmlValueInput;
struct HtmlValueInput {
    HtmlInput base;
    const char* value;
    const char* VALUE;
};


HtmlValueInput* HtmlValueInput_new(const char* before, const char* type, const char* name, const char* value, const char* after);

void HtmlValueInput_init(HtmlValueInput* this, const char* before, const char* type, const char* name, const char* value, const char* after);

static void HtmlValueInput_initFields(HtmlValueInput* this) {
    
    this->VALUE = "VALUE";
}


void HtmlValueInput_init(HtmlValueInput* this, const char* before, const char* type, const char* name, const char* value, const char* after) {
        HtmlInput_init(&this->base, before, type, name, after);
        HtmlValueInput_initFields(this);
        StringUtil* stringUtil = StringUtil_getInstance();
        this->value = stringUtil->EMPTY_STRING;
        HtmlValueInput_addAttribute(this, this->VALUE, value);
}

HtmlValueInput* HtmlValueInput_new(const char* before, const char* type, const char* name, const char* value, const char* after) {
    HtmlValueInput* this = calloc(1, sizeof(HtmlValueInput));
    HtmlValueInput_init(this, before, type, name, value, after);
    return this;
}

