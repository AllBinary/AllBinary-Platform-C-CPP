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
// package org.allbinary.business.category.properties.root.store

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
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/CategoryUtil.h"
#include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct RootStoreCategoryProperties RootStoreCategoryProperties;
struct RootStoreCategoryProperties {
    RootCategoryPropertiesInterface RootCategoryPropertiesInterface_interface;
    CategoryPropertiesInterface CategoryPropertiesInterface_interface;
    LogUtil* logUtil;
    AbPathData* pathData;
    AbPath* fileAbPath;
    AbPath* abPath;
    const char* category;
    bool isRealRoot;
    AbPath* webAppAbPath;
    TransformInfoInterface* transformInfoInterface;
};


RootStoreCategoryProperties* RootStoreCategoryProperties_new(TransformInfoInterface* transformInfoInterface);

void RootStoreCategoryProperties_init(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface);

RootStoreCategoryProperties* RootStoreCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, AbPath* categoryAbPath);
void RootStoreCategoryProperties_init2(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface, AbPath* categoryAbPath);

RootStoreCategoryProperties* RootStoreCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, Node* node);
void RootStoreCategoryProperties_init2(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface, Node* node);

RootStoreCategoryProperties* RootStoreCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
void RootStoreCategoryProperties_init2(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
void RootStoreCategoryProperties_initPath(RootStoreCategoryProperties* this);
bool RootStoreCategoryProperties_isRealRoot(RootStoreCategoryProperties* this);
bool RootStoreCategoryProperties_isRoot(RootStoreCategoryProperties* this);
Any* RootStoreCategoryProperties_getKey(RootStoreCategoryProperties* this);
void RootStoreCategoryProperties_setPath(RootStoreCategoryProperties* this, AbPath* path);
void RootStoreCategoryProperties_setRootFilePath(RootStoreCategoryProperties* this, AbPath* value);
AbPath* RootStoreCategoryProperties_getRootFilePath(RootStoreCategoryProperties* this);
const char* RootStoreCategoryProperties_getValue(RootStoreCategoryProperties* this);
AbPath* RootStoreCategoryProperties_getWebAppPath(RootStoreCategoryProperties* this);
AbPath* RootStoreCategoryProperties_getPath(RootStoreCategoryProperties* this, CategoryHierarchyInterface* categoryHierarchyInterface);
const char* RootStoreCategoryProperties_getFileName(RootStoreCategoryProperties* this);
void RootStoreCategoryProperties_setValue(RootStoreCategoryProperties* this, const char* value);
bool RootStoreCategoryProperties_isValid(RootStoreCategoryProperties* this);
HashMap* RootStoreCategoryProperties_toHashMap(RootStoreCategoryProperties* this);
BasicArrayList* RootStoreCategoryProperties_toVector(RootStoreCategoryProperties* this);
Document* RootStoreCategoryProperties_toValidationInfoDoc(RootStoreCategoryProperties* this);
Node* RootStoreCategoryProperties_toValidationInfoNode(RootStoreCategoryProperties* this, Document* document);
const char* RootStoreCategoryProperties_validationInfo(RootStoreCategoryProperties* this);
void RootStoreCategoryProperties_log(RootStoreCategoryProperties* this);

static void RootStoreCategoryProperties_initFields(RootStoreCategoryProperties* this) {
    this->logUtil = LogUtil_getInstance();
    this->pathData = AbPathData_getInstance();
    this->fileAbPath = nullptr;
    
    
    
    this->webAppAbPath = nullptr;
    
}


void RootStoreCategoryProperties_init(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface) {
    RootStoreCategoryProperties_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->abPath = AbPath_createAbPath();
        this->category = CategoryData_getInstance()->ROOTCATEGORY;
        this->isRealRoot = true;
        RootStoreCategoryProperties_initPath(this);
        RootStoreCategoryProperties_log(this);
}

RootStoreCategoryProperties* RootStoreCategoryProperties_new(TransformInfoInterface* transformInfoInterface) {
    RootStoreCategoryProperties* this = calloc(1, sizeof(RootStoreCategoryProperties));
    RootStoreCategoryProperties_init(this, transformInfoInterface);
    return this;
}


void RootStoreCategoryProperties_init2(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface, AbPath* categoryAbPath) {
    RootStoreCategoryProperties_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->abPath = categoryAbPath;
        this->category = AbPathData_getNameFromPath(this->pathData, AbPath_toString(categoryAbPath));
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->category)) {
            this->isRealRoot = true;
            this->category = CategoryData_getInstance()->ROOTCATEGORY;
        }
        RootStoreCategoryProperties_initPath(this);
        RootStoreCategoryProperties_log(this);
}

RootStoreCategoryProperties* RootStoreCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, AbPath* categoryAbPath) {
    RootStoreCategoryProperties* this = calloc(1, sizeof(RootStoreCategoryProperties));
    RootStoreCategoryProperties_init2(this, transformInfoInterface, categoryAbPath);
    return this;
}


void RootStoreCategoryProperties_init2(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface, Node* node) {
    RootStoreCategoryProperties_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        const char* categoryPath = CategoryUtil_getNameFromNode(node);
        this->abPath = AbPath_new(categoryPath, StringUtil_getInstance()->EMPTY_STRING);
        this->category = AbPathData_getNameFromPath(this->pathData, categoryPath);
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->category)) {
            this->isRealRoot = true;
            this->category = CategoryData_getInstance()->ROOTCATEGORY;
        }
        RootStoreCategoryProperties_initPath(this);
        RootStoreCategoryProperties_log(this);
}

RootStoreCategoryProperties* RootStoreCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, Node* node) {
    RootStoreCategoryProperties* this = calloc(1, sizeof(RootStoreCategoryProperties));
    RootStoreCategoryProperties_init2(this, transformInfoInterface, node);
    return this;
}


void RootStoreCategoryProperties_init2(RootStoreCategoryProperties* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
    RootStoreCategoryProperties_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        const char* categoryPath = java_string_new(((const char*) HashMap_get(categoryPropertiesHashMap, CategoryData_getInstance()->NAME)));
        this->abPath = AbPath_new(categoryPath, StringUtil_getInstance()->EMPTY_STRING);
        this->category = AbPathData_getNameFromPath(this->pathData, categoryPath);
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->category)) {
            this->isRealRoot = true;
            this->category = CategoryData_getInstance()->ROOTCATEGORY;
        }
        RootStoreCategoryProperties_initPath(this);
        RootStoreCategoryProperties_log(this);
}

RootStoreCategoryProperties* RootStoreCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
    RootStoreCategoryProperties* this = calloc(1, sizeof(RootStoreCategoryProperties));
    RootStoreCategoryProperties_init2(this, transformInfoInterface, categoryPropertiesHashMap);
    return this;
}


// throws Exception
void RootStoreCategoryProperties_initPath(RootStoreCategoryProperties* this) {
        TransformInfoHttpInterface* transformInfoHttpStoreInterface = ((TransformInfoHttpInterface*) this->transformInfoInterface);
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(TransformInfoHttpInterface_getStoreName(transformInfoHttpStoreInterface));
        const char* postPath = StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface) + StoreFrontInterface_getCategoryPath(storeFrontInterface);
        HttpServletRequest* httpServletRequest = ((HttpServletRequest*) JAVA_CALL(TransformInfoHttpInterface_getPageContext(transformInfoHttpStoreInterface), getRequest));
        this->webAppAbPath = AbPath_new(java_concat(java_string_of(HttpServletRequest_getContextPath(httpServletRequest)), postPath), StringUtil_getInstance()->EMPTY_STRING);
        RootStoreCategoryProperties_setRootFilePath(this, AbPath_new(java_concat(java_string_of(JAVA_CALL(_URLGLOBALS, getMainPath)), postPath), StringUtil_getInstance()->EMPTY_STRING));
}


bool RootStoreCategoryProperties_isRealRoot(RootStoreCategoryProperties* this) {
        return this->isRealRoot;
}


bool RootStoreCategoryProperties_isRoot(RootStoreCategoryProperties* this) {
        return true;
}


Any* RootStoreCategoryProperties_getKey(RootStoreCategoryProperties* this) {
        return ((Any*) RootStoreCategoryProperties_getValue(this));
}


void RootStoreCategoryProperties_setPath(RootStoreCategoryProperties* this, AbPath* path) {
        this->abPath = path;
}


void RootStoreCategoryProperties_setRootFilePath(RootStoreCategoryProperties* this, AbPath* value) {
        this->fileAbPath = value;
}


AbPath* RootStoreCategoryProperties_getRootFilePath(RootStoreCategoryProperties* this) {
        return this->fileAbPath;
}


const char* RootStoreCategoryProperties_getValue(RootStoreCategoryProperties* this) {
        return this->category;
}


// throws Exception
AbPath* RootStoreCategoryProperties_getWebAppPath(RootStoreCategoryProperties* this) {
        return this->webAppAbPath;
}


AbPath* RootStoreCategoryProperties_getPath(RootStoreCategoryProperties* this, CategoryHierarchyInterface* categoryHierarchyInterface) {
        return this->abPath;
}


const char* RootStoreCategoryProperties_getFileName(RootStoreCategoryProperties* this) {
        return RootStoreCategoryProperties_getValue(this) + AbPathData_getInstance()->EXTENSION_SEP + CategoryData_getInstance()->UNCRYPTED_EXTENSION;
}


void RootStoreCategoryProperties_setValue(RootStoreCategoryProperties* this, const char* value) {
        this->category = value;
}


bool RootStoreCategoryProperties_isValid(RootStoreCategoryProperties* this) {
        return true;
}


HashMap* RootStoreCategoryProperties_toHashMap(RootStoreCategoryProperties* this) {
        HashMap* categoryHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(categoryHashMap, CategoryData_getInstance()->NAME, RootStoreCategoryProperties_getValue(this));
        return categoryHashMap;
}


BasicArrayList* RootStoreCategoryProperties_toVector(RootStoreCategoryProperties* this) {
        BasicArrayList* categoryVector = BasicArrayListD_new();
        BasicArrayList_add(categoryVector, RootStoreCategoryProperties_getValue(this));
        return categoryVector;
}


// throws Exception
Document* RootStoreCategoryProperties_toValidationInfoDoc(RootStoreCategoryProperties* this) {
        return nullptr;
}


// throws Exception
Node* RootStoreCategoryProperties_toValidationInfoNode(RootStoreCategoryProperties* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* RootStoreCategoryProperties_validationInfo(RootStoreCategoryProperties* this) {
        return nullptr;
}


void RootStoreCategoryProperties_log(RootStoreCategoryProperties* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "filePath = "), append, AbPath_toString(this->fileAbPath)), append, "\npath = "), append, AbPath_toString(this->abPath)), append, "\ncategory = "), append, this->category), toString), this, "log()");
        }
}

