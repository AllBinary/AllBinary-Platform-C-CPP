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
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlValueInput.h"

typedef struct HtmlLengthInput HtmlLengthInput;
struct HtmlLengthInput {
    HtmlValueInput base;
    const char* MAXLENGTH;
    const char* SIZE;
    const char* length;
    const char* size;
};


HtmlLengthInput* HtmlLengthInput_new(const char* before, const char* type, const char* name, const char* value, const char* after);

void HtmlLengthInput_init(HtmlLengthInput* this, const char* before, const char* type, const char* name, const char* value, const char* after);
void HtmlLengthInput_setMaxLength(HtmlLengthInput* this, int32_t length);
void HtmlLengthInput_setSize(HtmlLengthInput* this, int32_t size);

static void HtmlLengthInput_initFields(HtmlLengthInput* this) {
    this->MAXLENGTH = "MAXLENGTH";
    this->SIZE = "SIZE";
    this->length = nullptr;
    this->size = nullptr;
}


void HtmlLengthInput_init(HtmlLengthInput* this, const char* before, const char* type, const char* name, const char* value, const char* after) {
        HtmlValueInput_init(&this->base, before, type, name, value, after);
        HtmlLengthInput_initFields(this);
}

HtmlLengthInput* HtmlLengthInput_new(const char* before, const char* type, const char* name, const char* value, const char* after) {
    HtmlLengthInput* this = calloc(1, sizeof(HtmlLengthInput));
    HtmlLengthInput_init(this, before, type, name, value, after);
    return this;
}


void HtmlLengthInput_setMaxLength(HtmlLengthInput* this, int32_t length) {
        java_array_length(this) = java_string_new(length);
        HtmlLengthInput_addAttribute(this, this->MAXLENGTH, java_array_length(this));
}


void HtmlLengthInput_setSize(HtmlLengthInput* this, int32_t size) {
        this->size = java_string_new(size);
        HtmlLengthInput_addAttribute(this, this->MAXLENGTH, this->size);
}

