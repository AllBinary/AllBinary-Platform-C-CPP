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

typedef struct HtmlRow HtmlRow;
struct HtmlRow {
    HtmlTag base;
    const char* END;
    const char* START;
    const char* ENDTAG;
    int32_t numberOfColumns;
    const char* before;
    const char* after;
    BasicArrayList* htmlCellsVector;
};


HtmlRow* HtmlRow_new(const char* before, const char* after);

void HtmlRow_init(HtmlRow* this, const char* before, const char* after);
void HtmlRow_addCell(HtmlRow* this, HtmlCell* htmlCell);
int32_t HtmlRow_getNumberOfColumns(HtmlRow* this);
const char* HtmlRow_toString(HtmlRow* this);

static void HtmlRow_initFields(HtmlRow* this) {
    this->END = ">";
    this->START = "<tr ";
    this->ENDTAG = "</tr>";
    this->numberOfColumns = 0;
    
    
    
}


void HtmlRow_init(HtmlRow* this, const char* before, const char* after) {
    HtmlTag_init(&this->base);
    HtmlRow_initFields(this);
        this->before = java_string_new(before);
        this->after = java_string_new(after);
        this->htmlCellsVector = BasicArrayListD_new();
}

HtmlRow* HtmlRow_new(const char* before, const char* after) {
    HtmlRow* this = calloc(1, sizeof(HtmlRow));
    HtmlRow_init(this, before, after);
    return this;
}


void HtmlRow_addCell(HtmlRow* this, HtmlCell* htmlCell) {
        BasicArrayList_add(this->htmlCellsVector, htmlCell);
        this->numberOfColumns++;
}


int32_t HtmlRow_getNumberOfColumns(HtmlRow* this) {
        return this->numberOfColumns;
}


const char* HtmlRow_toString(HtmlRow* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* result = stringUtil->EMPTY_STRING;
        Any** attributeKeys = JAVA_CALL(JAVA_CALL(this->otherAttributes, keySet), toArray);
        int32_t attributeSize = java_array_length(attributeKeys);
        int32_t cellSize = BasicArrayList_size(this->htmlCellsVector);
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
        for (int32_t i = 0; i < cellSize; i++) {
            result = java_concat(result, java_string_of(JAVA_CALL(BasicArrayList_get(this->htmlCellsVector, i), toString)));
            result = java_concat(result, java_string_of(" "));
        }
        result = java_concat(result, java_string_of(this->ENDTAG));
        result = java_concat(result, java_string_of(this->after));
        return result;
}

