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
// package org.allbinary.business.category.properties.root

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
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h"

typedef struct RootCategoryPropertiesAbstract RootCategoryPropertiesAbstract;
struct RootCategoryPropertiesAbstract {
    RootCategoryPropertiesInterface RootCategoryPropertiesInterface_interface;
    const char* category;
    const char* fileName;
};


RootCategoryPropertiesAbstract* RootCategoryPropertiesAbstract_new(void);

void RootCategoryPropertiesAbstract_init(RootCategoryPropertiesAbstract* this);
Any* RootCategoryPropertiesAbstract_getKey(RootCategoryPropertiesAbstract* this);
const char* RootCategoryPropertiesAbstract_getValue(RootCategoryPropertiesAbstract* this);
void RootCategoryPropertiesAbstract_setValue(RootCategoryPropertiesAbstract* this, const char* value);
void RootCategoryPropertiesAbstract_setRootFilePath(RootCategoryPropertiesAbstract* this, AbPath* value);
void RootCategoryPropertiesAbstract_setRootFilePath(RootCategoryPropertiesAbstract* this, const char* value);
AbPath* RootCategoryPropertiesAbstract_getRootFilePath(RootCategoryPropertiesAbstract* this);
bool RootCategoryPropertiesAbstract_isRealRoot(RootCategoryPropertiesAbstract* this);
bool RootCategoryPropertiesAbstract_isRoot(RootCategoryPropertiesAbstract* this);
const char* RootCategoryPropertiesAbstract_getWebAppPath(RootCategoryPropertiesAbstract* this, CategoryHierarchyInterface* categoryHierarchyInterface);
AbPath* RootCategoryPropertiesAbstract_getPath(RootCategoryPropertiesAbstract* this, CategoryHierarchyInterface* categoryHierarchyInterface);
const char* RootCategoryPropertiesAbstract_getFileName(RootCategoryPropertiesAbstract* this);
bool RootCategoryPropertiesAbstract_isValid(RootCategoryPropertiesAbstract* this);
HashMap* RootCategoryPropertiesAbstract_toHashMap(RootCategoryPropertiesAbstract* this);
BasicArrayList* RootCategoryPropertiesAbstract_toVector(RootCategoryPropertiesAbstract* this);
Document* RootCategoryPropertiesAbstract_toValidationInfoDoc(RootCategoryPropertiesAbstract* this);
Node* RootCategoryPropertiesAbstract_toValidationInfoNode(RootCategoryPropertiesAbstract* this, Document* document);
const char* RootCategoryPropertiesAbstract_validationInfo(RootCategoryPropertiesAbstract* this);

static void RootCategoryPropertiesAbstract_initFields(RootCategoryPropertiesAbstract* this) {
    this->category = CategoryData_getInstance()->ROOTCATEGORY;
    this->fileName = java_concat(java_concat(this->category, java_string_of(AbPathData_getInstance()->EXTENSION_SEP)), java_string_of(CategoryData_getInstance()->UNCRYPTED_EXTENSION));
}


void RootCategoryPropertiesAbstract_init(RootCategoryPropertiesAbstract* this) {
    RootCategoryPropertiesAbstract_initFields(this);
}

RootCategoryPropertiesAbstract* RootCategoryPropertiesAbstract_new(void) {
    RootCategoryPropertiesAbstract* this = calloc(1, sizeof(RootCategoryPropertiesAbstract));
    RootCategoryPropertiesAbstract_init(this);
    return this;
}


Any* RootCategoryPropertiesAbstract_getKey(RootCategoryPropertiesAbstract* this) {
        return ((Any*) RootCategoryPropertiesAbstract_getValue(this));
}


const char* RootCategoryPropertiesAbstract_getValue(RootCategoryPropertiesAbstract* this) {
        return this->category;
}


// throws Exception
void RootCategoryPropertiesAbstract_setValue(RootCategoryPropertiesAbstract* this, const char* value) {
        java_throw(java_exception_new("Exception", "No Value Allowed"));
}


// throws Exception
void RootCategoryPropertiesAbstract_setRootFilePath(RootCategoryPropertiesAbstract* this, AbPath* value) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
// Java overloaded method: C needs a different name
void RootCategoryPropertiesAbstract_setRootFilePath(RootCategoryPropertiesAbstract* this, const char* value) {
        java_throw(java_exception_new("Exception", "No Value Allowed"));
}


// throws Exception
AbPath* RootCategoryPropertiesAbstract_getRootFilePath(RootCategoryPropertiesAbstract* this) {
        java_throw(java_exception_new("Exception", "No Value Allowed"));
}


// throws Exception
bool RootCategoryPropertiesAbstract_isRealRoot(RootCategoryPropertiesAbstract* this) {
        java_throw(java_exception_new("Exception", "No A Real Root"));
}


// throws Exception
bool RootCategoryPropertiesAbstract_isRoot(RootCategoryPropertiesAbstract* this) {
        java_throw(java_exception_new("Exception", "Root but not implemented"));
}


// throws Exception
const char* RootCategoryPropertiesAbstract_getWebAppPath(RootCategoryPropertiesAbstract* this, CategoryHierarchyInterface* categoryHierarchyInterface) {
        java_throw(java_exception_new("Exception", "Not Root"));
}


AbPath* RootCategoryPropertiesAbstract_getPath(RootCategoryPropertiesAbstract* this, CategoryHierarchyInterface* categoryHierarchyInterface) {
        return AbPath_createAbPath();
}


const char* RootCategoryPropertiesAbstract_getFileName(RootCategoryPropertiesAbstract* this) {
        return this->fileName;
}


bool RootCategoryPropertiesAbstract_isValid(RootCategoryPropertiesAbstract* this) {
        return true;
}


HashMap* RootCategoryPropertiesAbstract_toHashMap(RootCategoryPropertiesAbstract* this) {
        HashMap* categoryHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(categoryHashMap, CategoryData_getInstance()->NAME, this->category);
        return categoryHashMap;
}


BasicArrayList* RootCategoryPropertiesAbstract_toVector(RootCategoryPropertiesAbstract* this) {
        BasicArrayList* categoryVector = BasicArrayListD_new();
        BasicArrayList_add(categoryVector, this->category);
        return categoryVector;
}


// throws Exception
Document* RootCategoryPropertiesAbstract_toValidationInfoDoc(RootCategoryPropertiesAbstract* this) {
        return nullptr;
}


// throws Exception
Node* RootCategoryPropertiesAbstract_toValidationInfoNode(RootCategoryPropertiesAbstract* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* RootCategoryPropertiesAbstract_validationInfo(RootCategoryPropertiesAbstract* this) {
        return nullptr;
}

