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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/AbContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"

//Hack class should not exist
typedef struct TransformInfoBasic TransformInfoBasic;
struct TransformInfoBasic {
    AbContext base;
    TransformInfoHttpInterface TransformInfoHttpInterface_interface;
    StoreFrontInterface* storeFrontInterface;
};


TransformInfoBasic* TransformInfoBasic_new(StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext);

void TransformInfoBasic_init(TransformInfoBasic* this, StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext);
const char* TransformInfoBasic_getStoreName(TransformInfoBasic* this);
const char* TransformInfoBasic_log(TransformInfoBasic* this);
void TransformInfoBasic_override(TransformInfoBasic* this, HashMap* hashMap);
const char* TransformInfoBasic_getName(TransformInfoBasic* this);
const char* TransformInfoBasic_getObjectFile(TransformInfoBasic* this);
Any* TransformInfoBasic_getObject(TransformInfoBasic* this);
TransformInfoObjectConfigInterface* TransformInfoBasic_getObjectConfigInterface(TransformInfoBasic* this);
void TransformInfoBasic_setObjectConfigInterface(TransformInfoBasic* this, TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface);
AbPath* TransformInfoBasic_getTemplateFilePath(TransformInfoBasic* this);
const char* TransformInfoBasic_getTemplateFile(TransformInfoBasic* this);
const char* TransformInfoBasic_getTemplate(TransformInfoBasic* this);
AbPath* TransformInfoBasic_getDataFilePath(TransformInfoBasic* this);
const char* TransformInfoBasic_getDataFile(TransformInfoBasic* this);
Document* TransformInfoBasic_getDataDocument(TransformInfoBasic* this);
void TransformInfoBasic_setName(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setStoreName(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setObjectFile(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setObject(TransformInfoBasic* this, Any* anyType);
void TransformInfoBasic_setObjectConfigFile(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setTemplateFile(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setTemplate(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setDataFile(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setData(TransformInfoBasic* this, const char* value);
void TransformInfoBasic_setChild(TransformInfoBasic* this);
bool TransformInfoBasic_isChild(TransformInfoBasic* this);
const char* TransformInfoBasic_getImportUriPath(TransformInfoBasic* this);
void TransformInfoBasic_setImportUriPath(TransformInfoBasic* this, const char* importUriPath);
Any* TransformInfoBasic_getKey(TransformInfoBasic* this);
BasicArrayList* TransformInfoBasic_toVector(TransformInfoBasic* this);
HashMap* TransformInfoBasic_toHashMap(TransformInfoBasic* this);
WeblisketSessionInterface* TransformInfoBasic_getWeblisketSession(TransformInfoBasic* this);
PageContext* TransformInfoBasic_getPageContext(TransformInfoBasic* this);
HashMap* TransformInfoBasic_getPropertiesHashMap(TransformInfoBasic* this);

static void TransformInfoBasic_initFields(TransformInfoBasic* this) {
    
}


void TransformInfoBasic_init(TransformInfoBasic* this, StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext) {
        AbContext_init(&this->base, propertiesHashMap, pageContext);
        TransformInfoBasic_initFields(this);
        this->storeFrontInterface = storeFrontInterface;
}

TransformInfoBasic* TransformInfoBasic_new(StoreFrontInterface* storeFrontInterface, HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoBasic* this = calloc(1, sizeof(TransformInfoBasic));
    TransformInfoBasic_init(this, storeFrontInterface, propertiesHashMap, pageContext);
    return this;
}


const char* TransformInfoBasic_getStoreName(TransformInfoBasic* this) {
        return StoreFrontInterface_getName(this->storeFrontInterface);
}


const char* TransformInfoBasic_log(TransformInfoBasic* this) {
        return this->base.commonStrings->NOT_IMPLEMENTED;
}


void TransformInfoBasic_override(TransformInfoBasic* this, HashMap* hashMap) {
}


const char* TransformInfoBasic_getName(TransformInfoBasic* this) {
        return nullptr;
}


const char* TransformInfoBasic_getObjectFile(TransformInfoBasic* this) {
        return nullptr;
}


Any* TransformInfoBasic_getObject(TransformInfoBasic* this) {
        return nullptr;
}


TransformInfoObjectConfigInterface* TransformInfoBasic_getObjectConfigInterface(TransformInfoBasic* this) {
        return nullptr;
}


void TransformInfoBasic_setObjectConfigInterface(TransformInfoBasic* this, TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface) {
}


AbPath* TransformInfoBasic_getTemplateFilePath(TransformInfoBasic* this) {
        return nullptr;
}


const char* TransformInfoBasic_getTemplateFile(TransformInfoBasic* this) {
        return nullptr;
}


const char* TransformInfoBasic_getTemplate(TransformInfoBasic* this) {
        return nullptr;
}


AbPath* TransformInfoBasic_getDataFilePath(TransformInfoBasic* this) {
        return nullptr;
}


const char* TransformInfoBasic_getDataFile(TransformInfoBasic* this) {
        return nullptr;
}


// throws Exception
Document* TransformInfoBasic_getDataDocument(TransformInfoBasic* this) {
        java_throw(java_exception_new("Exception", this->base.commonStrings->NOT_IMPLEMENTED));
}


void TransformInfoBasic_setName(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setStoreName(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setObjectFile(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setObject(TransformInfoBasic* this, Any* anyType) {
}


void TransformInfoBasic_setObjectConfigFile(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setTemplateFile(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setTemplate(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setDataFile(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setData(TransformInfoBasic* this, const char* value) {
}


void TransformInfoBasic_setChild(TransformInfoBasic* this) {
}


bool TransformInfoBasic_isChild(TransformInfoBasic* this) {
        return true;
}


const char* TransformInfoBasic_getImportUriPath(TransformInfoBasic* this) {
        return nullptr;
}


void TransformInfoBasic_setImportUriPath(TransformInfoBasic* this, const char* importUriPath) {
}


// throws Exception
Any* TransformInfoBasic_getKey(TransformInfoBasic* this) {
        return nullptr;
}


// throws Exception
BasicArrayList* TransformInfoBasic_toVector(TransformInfoBasic* this) {
        return nullptr;
}


// throws Exception
HashMap* TransformInfoBasic_toHashMap(TransformInfoBasic* this) {
        return nullptr;
}


WeblisketSessionInterface* TransformInfoBasic_getWeblisketSession(TransformInfoBasic* this) {
        return AbContext_getWeblisketSession((&this->base));
}


PageContext* TransformInfoBasic_getPageContext(TransformInfoBasic* this) {
        return AbContext_getPageContext((&this->base));
}


HashMap* TransformInfoBasic_getPropertiesHashMap(TransformInfoBasic* this) {
        return AbContext_getPropertiesHashMap((&this->base));
}

