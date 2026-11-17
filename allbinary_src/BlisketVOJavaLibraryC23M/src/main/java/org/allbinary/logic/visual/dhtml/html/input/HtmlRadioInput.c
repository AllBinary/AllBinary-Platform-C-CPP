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
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlValueInput.h"

typedef struct HtmlRadioInput HtmlRadioInput;
struct HtmlRadioInput {
    HtmlValueInput base;
    const char* CHECKED;
};


HtmlRadioInput* HtmlRadioInput_new(const char* before, const char* name, const char* value, const char* after);

void HtmlRadioInput_init(HtmlRadioInput* this, const char* before, const char* name, const char* value, const char* after);
void HtmlRadioInput_setSelected(HtmlRadioInput* this);

static void HtmlRadioInput_initFields(HtmlRadioInput* this) {
    this->CHECKED = "checked";
}


void HtmlRadioInput_init(HtmlRadioInput* this, const char* before, const char* name, const char* value, const char* after) {
        HtmlValueInput_init(&this->base, before, HtmlInputData_getInstance()->RADIO, name, value, after);
        HtmlRadioInput_initFields(this);
}

HtmlRadioInput* HtmlRadioInput_new(const char* before, const char* name, const char* value, const char* after) {
    HtmlRadioInput* this = calloc(1, sizeof(HtmlRadioInput));
    HtmlRadioInput_init(this, before, name, value, after);
    return this;
}


void HtmlRadioInput_setSelected(HtmlRadioInput* this) {
        HtmlValueInput_addAttribute((&this->base), this->CHECKED, BooleanFactory_getInstance()->TRUE_STRING);
}

