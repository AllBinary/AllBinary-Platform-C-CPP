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
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/AbContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct SearchRequest SearchRequest;
struct SearchRequest {
    AbContext base;
    const char* xslFile;
    const char* pageName;
    const char* contentType;
    SearchParams* searchParams;
    StoreFrontInterface* storeFront;
};


SearchRequest* SearchRequest_new(StoreFrontInterface* storeFront, SearchParams* searchParams, const char* xslFile, const char* contentType, HashMap* propertiesHashMap, PageContext* pageContext);

void SearchRequest_init(SearchRequest* this, StoreFrontInterface* storeFront, SearchParams* searchParams, const char* xslFile, const char* contentType, HashMap* propertiesHashMap, PageContext* pageContext);
void SearchRequest_setStoreFront(SearchRequest* this, StoreFrontInterface* storeFront);
void SearchRequest_setParams(SearchRequest* this, SearchParams* searchParams);
void SearchRequest_setXslFile(SearchRequest* this, const char* value);
void SearchRequest_setFileBaseName(SearchRequest* this, const char* value);
void SearchRequest_setContentType(SearchRequest* this, const char* value);
StoreFrontInterface* SearchRequest_getStoreFront(SearchRequest* this);
SearchParams* SearchRequest_getParams(SearchRequest* this);
const char* SearchRequest_getXslFile(SearchRequest* this);
const char* SearchRequest_getFileBaseName(SearchRequest* this);
const char* SearchRequest_getContentType(SearchRequest* this);
Node* SearchRequest_getFileBaseNameNode(SearchRequest* this, Document* document);

static void SearchRequest_initFields(SearchRequest* this) {
    
    
    
    
    
}


void SearchRequest_init(SearchRequest* this, StoreFrontInterface* storeFront, SearchParams* searchParams, const char* xslFile, const char* contentType, HashMap* propertiesHashMap, PageContext* pageContext) {
        AbContext_init(&this->base, propertiesHashMap, pageContext);
        SearchRequest_initFields(this);
        this->storeFront = storeFront;
        this->searchParams = searchParams;
        this->xslFile = xslFile;
        this->pageName = this->pageName;
        this->contentType = contentType;
}

SearchRequest* SearchRequest_new(StoreFrontInterface* storeFront, SearchParams* searchParams, const char* xslFile, const char* contentType, HashMap* propertiesHashMap, PageContext* pageContext) {
    SearchRequest* this = calloc(1, sizeof(SearchRequest));
    SearchRequest_init(this, storeFront, searchParams, xslFile, contentType, propertiesHashMap, pageContext);
    return this;
}


void SearchRequest_setStoreFront(SearchRequest* this, StoreFrontInterface* storeFront) {
        this->storeFront = storeFront;
}


void SearchRequest_setParams(SearchRequest* this, SearchParams* searchParams) {
        this->searchParams = searchParams;
}


void SearchRequest_setXslFile(SearchRequest* this, const char* value) {
        this->xslFile = value;
}


void SearchRequest_setFileBaseName(SearchRequest* this, const char* value) {
        this->pageName = value;
}


void SearchRequest_setContentType(SearchRequest* this, const char* value) {
        this->contentType = value;
}


StoreFrontInterface* SearchRequest_getStoreFront(SearchRequest* this) {
        return this->storeFront;
}


SearchParams* SearchRequest_getParams(SearchRequest* this) {
        return this->searchParams;
}


const char* SearchRequest_getXslFile(SearchRequest* this) {
        return this->xslFile;
}


const char* SearchRequest_getFileBaseName(SearchRequest* this) {
        return this->pageName;
}


const char* SearchRequest_getContentType(SearchRequest* this) {
        return this->contentType;
}


// throws Exception
Node* SearchRequest_getFileBaseNameNode(SearchRequest* this, Document* document) {
        return ModDomHelper_createNameValueNodes(document, SearchData_FILENAME, SearchRequest_getFileBaseName(this));
}

