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
// package org.allbinary.logic.control.search

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/data/tree/dom/ToDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct SearchParams SearchParams;
struct SearchParams {
    HashMap* columnsAndSearchValues;
    const char* order;
    const char* sortBy;
    const char* listLength;
    const char* startPage;
    const char* endPage;
};


SearchParams* SearchParams_new(HttpServletRequest* request);

void SearchParams_init(SearchParams* this, HttpServletRequest* request);
void SearchParams_add(SearchParams* this, const char* column, const char* value);
void SearchParams_setOrder(SearchParams* this, const char* value);
void SearchParams_setSortBy(SearchParams* this, const char* value);
void SearchParams_setLength(SearchParams* this, const char* value);
void SearchParams_setStartPage(SearchParams* this, const char* value);
void SearchParams_setEndPage(SearchParams* this, const char* value);
HashMap* SearchParams_get(SearchParams* this);
const char* SearchParams_getOrder(SearchParams* this);
const char* SearchParams_getSortBy(SearchParams* this);
const char* SearchParams_getLength(SearchParams* this);
int32_t SearchParams_getLengthInt(SearchParams* this);
const char* SearchParams_getStartPage(SearchParams* this);
const char* SearchParams_getEndPage(SearchParams* this);
int32_t SearchParams_getStartPageInt(SearchParams* this);
int32_t SearchParams_getEndPageInt(SearchParams* this);
Node* SearchParams_getParamsNode(SearchParams* this, Document* document);
static Node* SearchParams_getFieldsNode(SearchParams* this, Document* document);
static Node* SearchParams_getOrderNode(SearchParams* this, Document* document);
static Node* SearchParams_getSortByNode(SearchParams* this, Document* document);
static Node* SearchParams_getLengthNode(SearchParams* this, Document* document);

static void SearchParams_initFields(SearchParams* this) {
    
    this->order = nullptr;
    this->sortBy = nullptr;
    this->listLength = nullptr;
    this->startPage = nullptr;
    this->endPage = nullptr;
}


void SearchParams_init(SearchParams* this, HttpServletRequest* request) {
    SearchParams_initFields(this);
        this->columnsAndSearchValues = StdUtil_createHashMap(StdUtil_getInstance());
        SearchParams_setLength(this, HttpServletRequest_getParameter(request, SearchData_LENGTH));
        SearchParams_setOrder(this, HttpServletRequest_getParameter(request, SearchData_ORDER));
        const char* page = HttpServletRequest_getParameter(request, SearchData_PAGE);
        SearchParams_setStartPage(this, page);
        SearchParams_setEndPage(this, page);
        SearchParams_setSortBy(this, HttpServletRequest_getParameter(request, SearchData_SORTBY));
        int32_t index = 0;
        const char* columnName = HttpServletRequest_getParameter(request, java_concat(java_string_of(SearchData_COLUMNNAME), "[0]"));
        const char* columnValue = HttpServletRequest_getParameter(request, java_concat(java_string_of(SearchData_COLUMNVALUE), "[0]"));
        while (columnName != nullptr) {
            SearchParams_add(this, columnName, columnValue);
            index++;
            columnName = HttpServletRequest_getParameter(request, java_concat(java_concat(java_concat(java_string_of(SearchData_COLUMNNAME), "["), java_string_of(index)), "]"));
            columnValue = HttpServletRequest_getParameter(request, java_concat(java_concat(java_concat(java_string_of(SearchData_COLUMNVALUE), "["), java_string_of(index)), "]"));
        }
}

SearchParams* SearchParams_new(HttpServletRequest* request) {
    SearchParams* this = calloc(1, sizeof(SearchParams));
    SearchParams_init(this, request);
    return this;
}


void SearchParams_add(SearchParams* this, const char* column, const char* value) {
        HashMap_put(this->columnsAndSearchValues, column, value);
}


void SearchParams_setOrder(SearchParams* this, const char* value) {
        this->order = value;
}


void SearchParams_setSortBy(SearchParams* this, const char* value) {
        this->sortBy = value;
}


void SearchParams_setLength(SearchParams* this, const char* value) {
        this->listLength = value;
}


void SearchParams_setStartPage(SearchParams* this, const char* value) {
        this->startPage = value;
}


void SearchParams_setEndPage(SearchParams* this, const char* value) {
        this->endPage = value;
}


HashMap* SearchParams_get(SearchParams* this) {
        return this->columnsAndSearchValues;
}


const char* SearchParams_getOrder(SearchParams* this) {
        return this->order;
}


const char* SearchParams_getSortBy(SearchParams* this) {
        return this->sortBy;
}


const char* SearchParams_getLength(SearchParams* this) {
        return this->listLength;
}


int32_t SearchParams_getLengthInt(SearchParams* this) {
        if (this->listLength != nullptr) {
            return this->listLength;
        } else {
            return 0;
        }
}


const char* SearchParams_getStartPage(SearchParams* this) {
        return this->startPage;
}


const char* SearchParams_getEndPage(SearchParams* this) {
        return this->endPage;
}


int32_t SearchParams_getStartPageInt(SearchParams* this) {
        if (this->startPage != nullptr) {
            return this->startPage;
        } else {
            return 0;
        }
}


int32_t SearchParams_getEndPageInt(SearchParams* this) {
        if (this->endPage != nullptr) {
            return this->endPage;
        } else {
            return 0;
        }
}


// throws Exception
Node* SearchParams_getParamsNode(SearchParams* this, Document* document) {
        Node* paramsNode = ModDomHelper_createNameValueNodes(document, SearchData_PARAMS, SearchData_PARAMS);
        Node_appendChild(paramsNode, SearchParams_getFieldsNode(this, document));
        Node_appendChild(paramsNode, SearchParams_getOrderNode(this, document));
        Node_appendChild(paramsNode, SearchParams_getSortByNode(this, document));
        Node_appendChild(paramsNode, SearchParams_getLengthNode(this, document));
        return paramsNode;
}


// throws Exception
static Node* SearchParams_getFieldsNode(SearchParams* this, Document* document) {
        Node* fieldsNode = ModDomHelper_createNameValueNodes(document, SearchData_FIELDS, Integer_toString(HashMap_size(this->columnsAndSearchValues)));
        Set* set = HashMap_keySet(this->columnsAndSearchValues);
        Any** searchValueArray = Set_toArray(set);
        int32_t size = java_array_length(searchValueArray);
        for (int32_t index = 0; index < size; index++) {
            const char* key = ((const char*) searchValueArray[index]);
            const char* searchValue = ((const char*) HashMap_get(this->columnsAndSearchValues, key));
            Node_appendChild(fieldsNode, ModDomHelper_createNameValueNodes(document, SearchData_FIELD, key, ToDomHelper_convertNull(searchValue)));
        }
        return fieldsNode;
}


// throws Exception
static Node* SearchParams_getOrderNode(SearchParams* this, Document* document) {
        return ModDomHelper_createNameValueNodes(document, SearchData_ORDER, ToDomHelper_convertNull(SearchParams_getOrder(this)));
}


// throws Exception
static Node* SearchParams_getSortByNode(SearchParams* this, Document* document) {
        return ModDomHelper_createNameValueNodes(document, SearchData_SORTBY, ToDomHelper_convertNull(SearchParams_getSortBy(this)));
}


// throws Exception
static Node* SearchParams_getLengthNode(SearchParams* this, Document* document) {
        return ModDomHelper_createNameValueNodes(document, SearchData_LENGTH, ToDomHelper_convertNull(SearchParams_getLength(this)));
}

