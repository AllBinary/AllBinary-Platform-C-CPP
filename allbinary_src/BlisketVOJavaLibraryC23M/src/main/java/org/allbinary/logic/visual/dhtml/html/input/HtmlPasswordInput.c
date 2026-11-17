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
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlLengthInput.h"

typedef struct HtmlPasswordInput HtmlPasswordInput;
struct HtmlPasswordInput {
    HtmlLengthInput base;
};


HtmlPasswordInput* HtmlPasswordInput_new(const char* before, const char* name, const char* value, const char* after);

void HtmlPasswordInput_init(HtmlPasswordInput* this, const char* before, const char* name, const char* value, const char* after);


void HtmlPasswordInput_init(HtmlPasswordInput* this, const char* before, const char* name, const char* value, const char* after) {
        HtmlLengthInput_init(&this->base, before, HtmlInputData_getInstance()->PASSWORD, name, value, after);
        HtmlPasswordInput_setSize(this, 32);
        HtmlPasswordInput_setMaxLength(this, 128);
}

HtmlPasswordInput* HtmlPasswordInput_new(const char* before, const char* name, const char* value, const char* after) {
    HtmlPasswordInput* this = calloc(1, sizeof(HtmlPasswordInput));
    HtmlPasswordInput_init(this, before, name, value, after);
    return this;
}

