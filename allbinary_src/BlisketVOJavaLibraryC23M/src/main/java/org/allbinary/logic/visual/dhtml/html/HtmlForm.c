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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/dhtml/html/input/HtmlInput.h"
#include "org/allbinary/logic/visual/dhtml/html/table/HtmlTable.h"

typedef struct HtmlForm HtmlForm;
struct HtmlForm {
    const char* FORMBEGIN;
    const char* END;
    const char* FORMEND;
    const char* ACTION;
    const char* GET;
    const char* POST;
    const char** METHODS;
    const char* METHOD;
    const char* method;
    const char* action;
    BasicArrayList* inputs;
};


HtmlForm* HtmlForm_new(const char* action);

void HtmlForm_init(HtmlForm* this, const char* action);
void HtmlForm_setPost(HtmlForm* this);
void HtmlForm_setGet(HtmlForm* this);
void HtmlForm_addInput(HtmlForm* this, HtmlInput* htmlInput);
void HtmlForm_addTable(HtmlForm* this, HtmlTable* htmlTable);
const char* HtmlForm_toString(HtmlForm* this);

static void HtmlForm_initFields(HtmlForm* this) {
    this->FORMBEGIN = "<form ";
    this->END = ">";
    this->FORMEND = "</form>";
    this->ACTION = "ACTION=\"";
    this->GET = "GET\"";
    this->POST = "POST\"";
    this->METHODS = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->GET, this->POST }) / sizeof(const char*), (const char*[]){ this->GET, this->POST }));
    this->METHOD = "METHOD=\"";
    this->method = nullptr;
    
    
}


void HtmlForm_init(HtmlForm* this, const char* action) {
    HtmlForm_initFields(this);
        this->action = action;
        this->inputs = BasicArrayListD_new();
}

HtmlForm* HtmlForm_new(const char* action) {
    HtmlForm* this = calloc(1, sizeof(HtmlForm));
    HtmlForm_init(this, action);
    return this;
}


void HtmlForm_setPost(HtmlForm* this) {
        this->method = this->POST;
}


void HtmlForm_setGet(HtmlForm* this) {
        this->method = this->GET;
}


void HtmlForm_addInput(HtmlForm* this, HtmlInput* htmlInput) {
        BasicArrayList_add(this->inputs, htmlInput);
}


void HtmlForm_addTable(HtmlForm* this, HtmlTable* htmlTable) {
        BasicArrayList_add(this->inputs, htmlTable);
}


const char* HtmlForm_toString(HtmlForm* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* result = stringUtil->EMPTY_STRING;
        Any** inputArray = BasicArrayList_toArray(this->inputs);
        int32_t inputSize = java_array_length(inputArray);
        result = this->FORMBEGIN;
        result = java_concat(result, java_string_of(this->METHOD));
        result = java_concat(result, java_string_of(this->method));
        result = java_concat(result, java_string_of("\" "));
        result = java_concat(result, java_string_of(this->ACTION));
        result = java_concat(result, java_string_of(this->action));
        result = java_concat(result, java_string_of("\" "));
        result = java_concat(result, java_string_of(this->END));
        for (int32_t i = 0; i < inputSize; i++) {
            result = java_concat(result, java_string_of(JAVA_CALL(inputArray[i], toString)));
            result = java_concat(result, java_string_of(" "));
        }
        result = java_concat(result, java_string_of(this->FORMEND));
        return result;
}

