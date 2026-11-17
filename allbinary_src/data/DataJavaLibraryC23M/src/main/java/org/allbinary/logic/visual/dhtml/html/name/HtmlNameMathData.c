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
// package org.allbinary.logic.visual.dhtml.html.name

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HtmlNameMathData HtmlNameMathData;
struct HtmlNameMathData {
    const char* EQUALS;
    const char* PLUS;
    const char* MINUS;
    const char* DIVIDE;
    const char* MULTIPLY;
};

static HtmlNameMathData* HtmlNameMathData_instance;

HtmlNameMathData* HtmlNameMathData_new(void);
HtmlNameMathData* HtmlNameMathData_getInstance(void);

void HtmlNameMathData_init(HtmlNameMathData* this);

// Static fields with runtime initializers: call this once at startup
void HtmlNameMathData_staticInit(void) {
    HtmlNameMathData_instance = HtmlNameMathData_new();
}

static void HtmlNameMathData_initFields(HtmlNameMathData* this) {
    this->EQUALS = "_EQUALS_";
    this->PLUS = "_PLUS_";
    this->MINUS = "_MINUS_";
    this->DIVIDE = "_DIVIDE_";
    this->MULTIPLY = "_MULTIPLY_";
}


HtmlNameMathData* HtmlNameMathData_getInstance(void) {
        return HtmlNameMathData_instance;
}


void HtmlNameMathData_init(HtmlNameMathData* this) {
    HtmlNameMathData_initFields(this);
}

HtmlNameMathData* HtmlNameMathData_new(void) {
    HtmlNameMathData* this = calloc(1, sizeof(HtmlNameMathData));
    HtmlNameMathData_init(this);
    return this;
}

