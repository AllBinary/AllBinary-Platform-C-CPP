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
#include "org/allbinary/string/CommonStrings.h"

typedef struct HtmlTableData HtmlTableData;
struct HtmlTableData {
    const char* LEFT;
    const char* RIGHT;
    const char* NONE;
    const char* TOP;
    const char* BOTTOM;
    const char* TOPBOT;
    const char* SIDES;
    const char* ALL;
    const char* BORDERED;
    const char* BASIC;
    const char* ROWS;
    const char** FRAMES;
};

static HtmlTableData* HtmlTableData_instance;

HtmlTableData* HtmlTableData_new(void);
HtmlTableData* HtmlTableData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void HtmlTableData_staticInit(void) {
    HtmlTableData_instance = HtmlTableData_new();
}

static void HtmlTableData_initFields(HtmlTableData* this) {
    this->LEFT = CommonStrings_getInstance()->LEFT;
    this->RIGHT = CommonStrings_getInstance()->RIGHT;
    this->NONE = "none";
    this->TOP = "top";
    this->BOTTOM = "bottom";
    this->TOPBOT = "topbot";
    this->SIDES = "sides";
    this->ALL = "all";
    this->BORDERED = "border";
    this->BASIC = "basic";
    this->ROWS = "rows";
    this->FRAMES = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->NONE, this->TOP, this->BOTTOM, this->TOPBOT, this->SIDES, this->ALL, this->BORDERED }) / sizeof(const char*), (const char*[]){ this->NONE, this->TOP, this->BOTTOM, this->TOPBOT, this->SIDES, this->ALL, this->BORDERED }));
}

void HtmlTableData_init(HtmlTableData* this) {
    HtmlTableData_initFields(this);
}

HtmlTableData* HtmlTableData_new(void) {
    HtmlTableData* this = calloc(1, sizeof(HtmlTableData));
    HtmlTableData_init(this);
    return this;
}


HtmlTableData* HtmlTableData_getInstance(void) {
        return HtmlTableData_instance;
}

