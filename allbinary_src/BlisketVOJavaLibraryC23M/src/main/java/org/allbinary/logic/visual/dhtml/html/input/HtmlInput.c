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
#include "org/allbinary/logic/visual/dhtml/html/HtmlTag.h"

typedef struct HtmlInput HtmlInput;
struct HtmlInput {
    HtmlTag base;
    const char* END;
    const char* STARTINPUT;
    const char* ENDINPUT;
    const char* TYPE;
    const char* NAME;
    const char* before;
    const char* type;
    const char* name;
    const char* after;
};


HtmlInput* HtmlInput_new(const char* before, const char* type, const char* name, const char* after);

void HtmlInput_init(HtmlInput* this, const char* before, const char* type, const char* name, const char* after);
const char* HtmlInput_toString(HtmlInput* this);

static void HtmlInput_initFields(HtmlInput* this) {
    this->END = ">";
    this->STARTINPUT = "<INPUT ";
    this->ENDINPUT = "</INPUT>";
    this->TYPE = "TYPE=\"";
    this->NAME = "NAME=\"";
    
    
    
    
}


void HtmlInput_init(HtmlInput* this, const char* before, const char* type, const char* name, const char* after) {
    HtmlTag_init(&this->base);
    HtmlInput_initFields(this);
        this->before = before;
        this->type = type;
        this->name = name;
        this->after = after;
}

HtmlInput* HtmlInput_new(const char* before, const char* type, const char* name, const char* after) {
    HtmlInput* this = calloc(1, sizeof(HtmlInput));
    HtmlInput_init(this, before, type, name, after);
    return this;
}


const char* HtmlInput_toString(HtmlInput* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* result = stringUtil->EMPTY_STRING;
        Any** attributeKeys = JAVA_CALL(JAVA_CALL(this->otherAttributes, keySet), toArray);
        int32_t attributeSize = java_array_length(attributeKeys);
        result = this->before;
        result = java_concat(result, java_string_of(this->STARTINPUT));
        result = java_concat(result, java_string_of(this->TYPE));
        result = java_concat(result, java_string_of(this->type));
        result = java_concat(result, java_string_of("\" "));
        result = java_concat(result, java_string_of(this->NAME));
        result = java_concat(result, java_string_of(this->name));
        result = java_concat(result, java_string_of("\" "));
        for (int32_t i = 0; i < attributeSize; i++) {
            const char* key = ((const char*) attributeKeys[i]);
            const char* value = ((const char*) JAVA_CALL(this->base.otherAttributes, get, key));
            if (value != nullptr && strcmp(value, stringUtil->EMPTY_STRING) != 0) {
                result = java_concat(result, java_string_of(key));
                result = java_concat(result, java_string_of("=\""));
                result = java_concat(result, java_string_of(value));
                result = java_concat(result, java_string_of("\" "));
            }
        }
        result = java_concat(result, java_string_of(this->END));
        result = java_concat(result, java_string_of(this->ENDINPUT));
        result = java_concat(result, java_string_of(this->after));
        return result;
}

