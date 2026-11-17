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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/dhtml/html/HtmlTag.h"
#include "org/allbinary/string/CommonPhoneStrings.h"

typedef struct HtmlTable HtmlTable;
struct HtmlTable {
    HtmlTag base;
    const char* END;
    const char* START;
    const char* ENDTAG;
    const char* CLASS;
    const char* DIRECTION;
    const char* ID;
    const char* LANG;
    const char* UNITS;
    const char* BORDER;
    const char* CELLPADDING;
    const char* CELLSPACING;
    const char* COLS;
    const char* FLOAT;
    const char* FRAME;
    const char* RULES;
    const char* STYLE;
    const char* BORDERCOLLAPSE;
    int32_t numberOfColumns;
    const char* before;
    const char* border;
    const char* cellpadding;
    const char* cellspacing;
    const char* style;
    const char* name;
    const char* after;
    BasicArrayList* htmlRowsVector;
};


HtmlTable* HtmlTable_new(const char* before, const char* cellpadding, const char* cellspacing, const char* after);

void HtmlTable_init(HtmlTable* this, const char* before, const char* cellpadding, const char* cellspacing, const char* after);
void HtmlTable_addRow(HtmlTable* this, HtmlRow* htmlRow);
const char* HtmlTable_toString(HtmlTable* this);

static void HtmlTable_initFields(HtmlTable* this) {
    this->END = ">";
    this->START = "<table ";
    this->ENDTAG = "</table>";
    this->CLASS = "class";
    this->DIRECTION = "dir";
    this->ID = "id";
    this->LANG = "lang";
    this->UNITS = "units";
    this->BORDER = "border";
    this->CELLPADDING = "cellpadding";
    this->CELLSPACING = "cellspacing";
    this->COLS = "cols";
    this->FLOAT = "float";
    this->FRAME = "frame";
    this->RULES = "rules";
    this->STYLE = "style";
    this->BORDERCOLLAPSE = "border-collapse: collapse";
    this->numberOfColumns = 0;
    
    this->border = nullptr;
    
    
    this->style = nullptr;
    this->name = nullptr;
    
    
}


void HtmlTable_init(HtmlTable* this, const char* before, const char* cellpadding, const char* cellspacing, const char* after) {
    HtmlTag_init(&this->base);
    HtmlTable_initFields(this);
        this->before = before;
        this->cellpadding = cellpadding;
        this->cellspacing = cellspacing;
        this->after = after;
        this->htmlRowsVector = BasicArrayListD_new();
        HtmlTable_addAttribute(this, this->BORDER, CommonPhoneStrings_getInstance()->ZERO);
        HtmlTable_addAttribute(this, this->CELLPADDING, this->cellpadding);
        HtmlTable_addAttribute(this, this->CELLSPACING, this->cellspacing);
        HtmlTable_addAttribute(this, this->STYLE, this->BORDERCOLLAPSE);
}

HtmlTable* HtmlTable_new(const char* before, const char* cellpadding, const char* cellspacing, const char* after) {
    HtmlTable* this = calloc(1, sizeof(HtmlTable));
    HtmlTable_init(this, before, cellpadding, cellspacing, after);
    return this;
}


void HtmlTable_addRow(HtmlTable* this, HtmlRow* htmlRow) {
        if (this->numberOfColumns < HtmlRow_getNumberOfColumns(htmlRow)) {
            this->numberOfColumns = HtmlRow_getNumberOfColumns(htmlRow);
        }
        BasicArrayList_add(this->htmlRowsVector, htmlRow);
}


const char* HtmlTable_toString(HtmlTable* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* result = stringUtil->EMPTY_STRING;
        Any** attributeKeys = JAVA_CALL(JAVA_CALL(this->otherAttributes, keySet), toArray);
        result = this->before;
        result = java_concat(result, java_string_of(this->START));
        result = java_concat(result, java_string_of(" "));
        for (int32_t i = 0; i < java_array_length(attributeKeys); i++) {
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
        int32_t size = BasicArrayList_size(this->htmlRowsVector);
        for (int32_t i = 0; i < size; i++) {
            result = java_concat(result, java_string_of(JAVA_CALL(BasicArrayList_get(this->htmlRowsVector, i), toString)));
            result = java_concat(result, java_string_of(" "));
        }
        result = java_concat(result, java_string_of(this->ENDTAG));
        result = java_concat(result, java_string_of(this->after));
        return result;
}

