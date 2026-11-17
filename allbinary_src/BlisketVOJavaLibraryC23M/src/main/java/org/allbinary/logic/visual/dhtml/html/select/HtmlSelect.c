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
// package org.allbinary.logic.visual.dhtml.html.select

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
#include "org/allbinary/logic/io/LineReader.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/dhtml/html/HtmlTag.h"

typedef struct HtmlSelect HtmlSelect;
struct HtmlSelect {
    HtmlTag base;
    const char* END;
    const char* STARTSELECT;
    const char* ENDSELECT;
    const char* SIZE;
    const char* NAME;
    const char* STARTOPTION;
    const char* SELETED;
    const char* ENDOPTION;
    const char* before;
    const char* name;
    const char* after;
    const char* size;
    const char* selected;
    BasicArrayList* options;
    const char* multiple;
    bool isMultipleSelect;
};


HtmlSelect* HtmlSelect_new(const char* before, const char* size, const char* name, const char* after);

void HtmlSelect_init(HtmlSelect* this, const char* before, const char* size, const char* name, const char* after);
void HtmlSelect_addOption(HtmlSelect* this, const char* key);
void HtmlSelect_addOptions(HtmlSelect* this, const char* fileName);
void HtmlSelect_setSelected(HtmlSelect* this, const char* selected);
bool HtmlSelect_isMultiple(HtmlSelect* this);
void HtmlSelect_setMultiple(HtmlSelect* this, bool value);
static const char* HtmlSelect_getOptions(HtmlSelect* this);
const char* HtmlSelect_toString(HtmlSelect* this);

static void HtmlSelect_initFields(HtmlSelect* this) {
    this->END = ">";
    this->STARTSELECT = "<SELECT ";
    this->ENDSELECT = "</SELECT>";
    this->SIZE = "SIZE=\"";
    this->NAME = "NAME=\"";
    this->STARTOPTION = "<OPTION";
    this->SELETED = "SELECTED";
    this->ENDOPTION = "</OPTION>";
    
    
    
    
    this->selected = nullptr;
    
    this->multiple = "multiple";
    this->isMultipleSelect = false;
}


void HtmlSelect_init(HtmlSelect* this, const char* before, const char* size, const char* name, const char* after) {
    HtmlTag_init(&this->base);
    HtmlSelect_initFields(this);
        this->before = before;
        this->size = size;
        this->name = name;
        this->after = after;
        this->options = BasicArrayListD_new();
}

HtmlSelect* HtmlSelect_new(const char* before, const char* size, const char* name, const char* after) {
    HtmlSelect* this = calloc(1, sizeof(HtmlSelect));
    HtmlSelect_init(this, before, size, name, after);
    return this;
}


void HtmlSelect_addOption(HtmlSelect* this, const char* key) {
        BasicArrayList_add(this->options, key);
}


void HtmlSelect_addOptions(HtmlSelect* this, const char* fileName) {
        JAVA_TRY {
            LineReader* lineReader = LineReader_new(fileName);
            while (LineReader_hasNext(lineReader)) {
                const char* option = LineReader_next(lineReader);
                HtmlSelect_addOption(this, option);
            }
        } JAVA_CATCH(Exception, e) {
            HtmlSelect_addOption(this, "Error");
        } JAVA_END_TRY;
}


void HtmlSelect_setSelected(HtmlSelect* this, const char* selected) {
        this->selected = selected;
}


bool HtmlSelect_isMultiple(HtmlSelect* this) {
        return this->isMultipleSelect;
}


void HtmlSelect_setMultiple(HtmlSelect* this, bool value) {
        this->isMultipleSelect = value;
}


static const char* HtmlSelect_getOptions(HtmlSelect* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* result = stringUtil->EMPTY_STRING;
        Any** optionsArray = BasicArrayList_toArray(this->options);
        int32_t optionsSize = java_array_length(optionsArray);
        for (int32_t i = 0; i < optionsSize; i++) {
            const char* value = ((const char*) optionsArray[i]);
            if (value != nullptr && BOOLEAN_compareTo(value, stringUtil->EMPTY_STRING) != 0) {
                result = java_concat(result, java_string_of(this->STARTOPTION));
                result = java_concat(result, java_string_of(this->END));
                result = java_concat(result, java_string_of(value));
                result = java_concat(result, java_string_of(this->ENDOPTION));
            }
        }
        return result;
}


const char* HtmlSelect_toString(HtmlSelect* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* result = stringUtil->EMPTY_STRING;
        Any** attributeKeys = JAVA_CALL(JAVA_CALL(this->otherAttributes, keySet), toArray);
        int32_t attributeSize = java_array_length(attributeKeys);
        result = this->before;
        result = java_concat(result, java_string_of(this->STARTSELECT));
        result = java_concat(result, java_string_of(this->NAME));
        result = java_concat(result, java_string_of(this->name));
        result = java_concat(result, java_string_of("\" "));
        result = java_concat(result, java_string_of(this->SIZE));
        result = java_concat(result, java_string_of(this->size));
        result = java_concat(result, java_string_of("\" "));
        for (int32_t i = 0; i < attributeSize; i++) {
            const char* key = ((const char*) attributeKeys[i]);
            const char* value = ((const char*) JAVA_CALL(this->base.otherAttributes, get, key));
            if (value != nullptr && BOOLEAN_compareTo(value, stringUtil->EMPTY_STRING) != 0) {
                result = java_concat(result, java_string_of(key));
                result = java_concat(result, java_string_of("=\""));
                result = java_concat(result, java_string_of(value));
                result = java_concat(result, java_string_of("\" "));
            }
        }
        if (HtmlSelect_isMultiple(this)) {
            result = java_concat(result, java_string_of(java_concat(java_concat(" ", this->multiple), " ")));
        }
        result = java_concat(result, java_string_of(this->END));
        result = java_concat(result, java_string_of(HtmlSelect_getOptions(this)));
        result = java_concat(result, java_string_of(this->ENDSELECT));
        result = java_concat(result, java_string_of(this->after));
        return result;
}

