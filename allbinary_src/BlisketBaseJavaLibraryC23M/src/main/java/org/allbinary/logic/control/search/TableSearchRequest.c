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
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct TableSearchRequest TableSearchRequest;
struct TableSearchRequest {
    const char* xslFile;
    const char* pageName;
    const char* contentType;
    const char* keywords;
    SearchParams* searchParams;
};


TableSearchRequest* TableSearchRequest_new(const char* keywords, SearchParams* searchParams, const char* xslFile, const char* contentType);

void TableSearchRequest_init(TableSearchRequest* this, const char* keywords, SearchParams* searchParams, const char* xslFile, const char* contentType);
void TableSearchRequest_setKeywords(TableSearchRequest* this, const char* value);
void TableSearchRequest_setParams(TableSearchRequest* this, SearchParams* searchParams);
void TableSearchRequest_setXslFile(TableSearchRequest* this, const char* value);
void TableSearchRequest_setFileBaseName(TableSearchRequest* this, const char* value);
void TableSearchRequest_setContentType(TableSearchRequest* this, const char* value);
const char* TableSearchRequest_getKeywords(TableSearchRequest* this);
SearchParams* TableSearchRequest_getParams(TableSearchRequest* this);
const char* TableSearchRequest_getXslFile(TableSearchRequest* this);
const char* TableSearchRequest_getFileBaseName(TableSearchRequest* this);
const char* TableSearchRequest_getContentType(TableSearchRequest* this);
Node* TableSearchRequest_getFileBaseNameNode(TableSearchRequest* this, Document* document);

static void TableSearchRequest_initFields(TableSearchRequest* this) {
    
    
    
    
    
}


void TableSearchRequest_init(TableSearchRequest* this, const char* keywords, SearchParams* searchParams, const char* xslFile, const char* contentType) {
    TableSearchRequest_initFields(this);
        this->keywords = keywords;
        this->searchParams = searchParams;
        this->xslFile = xslFile;
        this->pageName = this->pageName;
        this->contentType = contentType;
}

TableSearchRequest* TableSearchRequest_new(const char* keywords, SearchParams* searchParams, const char* xslFile, const char* contentType) {
    TableSearchRequest* this = calloc(1, sizeof(TableSearchRequest));
    TableSearchRequest_init(this, keywords, searchParams, xslFile, contentType);
    return this;
}


void TableSearchRequest_setKeywords(TableSearchRequest* this, const char* value) {
        this->keywords = value;
}


void TableSearchRequest_setParams(TableSearchRequest* this, SearchParams* searchParams) {
        this->searchParams = searchParams;
}


void TableSearchRequest_setXslFile(TableSearchRequest* this, const char* value) {
        this->xslFile = value;
}


void TableSearchRequest_setFileBaseName(TableSearchRequest* this, const char* value) {
        this->pageName = value;
}


void TableSearchRequest_setContentType(TableSearchRequest* this, const char* value) {
        this->contentType = value;
}


const char* TableSearchRequest_getKeywords(TableSearchRequest* this) {
        return this->keywords;
}


SearchParams* TableSearchRequest_getParams(TableSearchRequest* this) {
        return this->searchParams;
}


// throws Exception
const char* TableSearchRequest_getXslFile(TableSearchRequest* this) {
        const char* path = java_concat(java_string_of(JAVA_CALL(_URLGLOBALS, getMainPath) + JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH), this->xslFile);
        return path;
}


const char* TableSearchRequest_getFileBaseName(TableSearchRequest* this) {
        return this->pageName;
}


const char* TableSearchRequest_getContentType(TableSearchRequest* this) {
        return this->contentType;
}


// throws Exception
Node* TableSearchRequest_getFileBaseNameNode(TableSearchRequest* this, Document* document) {
        return ModDomHelper_createNameValueNodes(document, SearchData_FILENAME, TableSearchRequest_getFileBaseName(this));
}

