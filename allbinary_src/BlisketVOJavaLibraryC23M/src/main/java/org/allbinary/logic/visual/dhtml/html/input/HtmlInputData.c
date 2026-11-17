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

typedef struct HtmlInputData HtmlInputData;
struct HtmlInputData {
    const char* TEXT;
    const char* RADIO;
    const char* CHECKBOX;
    const char* HIDDEN;
    const char* IMAGE;
    const char* PASSWORD;
    const char* RESET;
    const char* SUBMIT;
    const char** TYPES;
};

static HtmlInputData* HtmlInputData_instance;

HtmlInputData* HtmlInputData_new(void);
HtmlInputData* HtmlInputData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void HtmlInputData_staticInit(void) {
    HtmlInputData_instance = HtmlInputData_new();
}

static void HtmlInputData_initFields(HtmlInputData* this) {
    this->TEXT = "text";
    this->RADIO = "radio";
    this->CHECKBOX = "checkbox";
    this->HIDDEN = "hidden";
    this->IMAGE = "image";
    this->PASSWORD = "password";
    this->RESET = "reset";
    this->SUBMIT = "submit";
    this->TYPES = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->TEXT, this->RADIO, this->CHECKBOX, this->HIDDEN, this->IMAGE, this->PASSWORD, this->RADIO, this->RESET, this->SUBMIT }) / sizeof(const char*), (const char*[]){ this->TEXT, this->RADIO, this->CHECKBOX, this->HIDDEN, this->IMAGE, this->PASSWORD, this->RADIO, this->RESET, this->SUBMIT }));
}

void HtmlInputData_init(HtmlInputData* this) {
    HtmlInputData_initFields(this);
}

HtmlInputData* HtmlInputData_new(void) {
    HtmlInputData* this = calloc(1, sizeof(HtmlInputData));
    HtmlInputData_init(this);
    return this;
}


HtmlInputData* HtmlInputData_getInstance(void) {
        return HtmlInputData_instance;
}

