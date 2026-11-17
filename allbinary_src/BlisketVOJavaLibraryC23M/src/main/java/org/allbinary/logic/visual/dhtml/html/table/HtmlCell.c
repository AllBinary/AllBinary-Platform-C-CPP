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
// package org.allbinary.logic.visual.dhtml.html.table

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

typedef struct HtmlCell HtmlCell;
struct HtmlCell {
    HtmlTag base;
    const char* END;
    const char* START;
    const char* ENDTAG;
    const char* HEIGHT;
    const char* WIDTH;
    const char* height;
    const char* width;
    const char* before;
    const char* body;
    const char* after;
};


HtmlCell* HtmlCell_new(const char* before, const char* width, const char* height, const char* after);

void HtmlCell_init(HtmlCell* this, const char* before, const char* width, const char* height, const char* after);
void HtmlCell_addText(HtmlCell* this, const char* body);
const char* HtmlCell_toString(HtmlCell* this);

static void HtmlCell_initFields(HtmlCell* this) {
    this->END = ">";
    this->START = "<td ";
    this->ENDTAG = "</td>";
    this->HEIGHT = "height";
    this->WIDTH = "width";
    
    
    
    this->body = nullptr;
    
}


void HtmlCell_init(HtmlCell* this, const char* before, const char* width, const char* height, const char* after) {
    HtmlTag_init(&this->base);
    HtmlCell_initFields(this);
        this->before = java_string_new(before);
        this->after = java_string_new(after);
        this->height = java_string_new(height);
        this->width = java_string_new(width);
        HtmlCell_addAttribute(this, this->HEIGHT, this->height);
        HtmlCell_addAttribute(this, this->WIDTH, this->width);
}

HtmlCell* HtmlCell_new(const char* before, const char* width, const char* height, const char* after) {
    HtmlCell* this = calloc(1, sizeof(HtmlCell));
    HtmlCell_init(this, before, width, height, after);
    return this;
}


void HtmlCell_addText(HtmlCell* this, const char* body) {
        this->body = body;
}


const char* HtmlCell_toString(HtmlCell* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* result = stringUtil->EMPTY_STRING;
        Any** attributeKeys = JAVA_CALL(JAVA_CALL(this->otherAttributes, keySet), toArray);
        int32_t attributeSize = java_array_length(attributeKeys);
        result = this->before;
        result = java_concat(result, java_string_of(this->START));
        result = java_concat(result, java_string_of(" "));
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
        result = java_concat(result, java_string_of(this->body));
        result = java_concat(result, java_string_of(this->ENDTAG));
        result = java_concat(result, java_string_of(this->after));
        return result;
}

