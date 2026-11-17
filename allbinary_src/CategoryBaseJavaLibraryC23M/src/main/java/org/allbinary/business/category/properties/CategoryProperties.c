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
// package org.allbinary.business.category.properties

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/CategoryUtil.h"
#include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlData.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"

typedef struct CategoryProperties CategoryProperties;
struct CategoryProperties {
    CategoryPropertiesInterface CategoryPropertiesInterface_interface;
    LogUtil* logUtil;
    const char* category;
};

static constexpr int32_t CategoryProperties_MAXDEPTH = 100;

CategoryProperties* CategoryProperties_new(const char* name);

void CategoryProperties_init(CategoryProperties* this, const char* name);

CategoryProperties* CategoryProperties_new1(Node* node);
void CategoryProperties_init1(CategoryProperties* this, Node* node);

CategoryProperties* CategoryProperties_new1(HashMap* categoryPropertiesHashMap);
void CategoryProperties_init1(CategoryProperties* this, HashMap* categoryPropertiesHashMap);
bool CategoryProperties_isRealRoot(CategoryProperties* this);
bool CategoryProperties_isRoot(CategoryProperties* this);
Any* CategoryProperties_getKey(CategoryProperties* this);
const char* CategoryProperties_getValue(CategoryProperties* this);
AbPath* CategoryProperties_getPath(CategoryProperties* this, CategoryHierarchyInterface* categoryHierarchyInterface);
const char* CategoryProperties_getFileName(CategoryProperties* this);
AbPath* CategoryProperties_getWebAppPath(CategoryProperties* this);
void CategoryProperties_setValue(CategoryProperties* this, const char* value);
bool CategoryProperties_isValid(CategoryProperties* this);
HashMap* CategoryProperties_toHashMap(CategoryProperties* this);
BasicArrayList* CategoryProperties_toVector(CategoryProperties* this);
Document* CategoryProperties_toValidationInfoDoc(CategoryProperties* this);
Node* CategoryProperties_toValidationInfoNode(CategoryProperties* this, Document* document);
const char* CategoryProperties_validationInfo(CategoryProperties* this);

static void CategoryProperties_initFields(CategoryProperties* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void CategoryProperties_init(CategoryProperties* this, const char* name) {
    CategoryProperties_initFields(this);
        this->category = name;
}

CategoryProperties* CategoryProperties_new(const char* name) {
    CategoryProperties* this = calloc(1, sizeof(CategoryProperties));
    CategoryProperties_init(this, name);
    return this;
}


void CategoryProperties_init1(CategoryProperties* this, Node* node) {
    CategoryProperties_initFields(this);
        this->category = CategoryUtil_getNameFromNode(node);
}

CategoryProperties* CategoryProperties_new1(Node* node) {
    CategoryProperties* this = calloc(1, sizeof(CategoryProperties));
    CategoryProperties_init1(this, node);
    return this;
}


void CategoryProperties_init1(CategoryProperties* this, HashMap* categoryPropertiesHashMap) {
    CategoryProperties_initFields(this);
        this->category = java_string_new(((const char*) HashMap_get(categoryPropertiesHashMap, CategoryData_getInstance()->NAME)));
}

CategoryProperties* CategoryProperties_new1(HashMap* categoryPropertiesHashMap) {
    CategoryProperties* this = calloc(1, sizeof(CategoryProperties));
    CategoryProperties_init1(this, categoryPropertiesHashMap);
    return this;
}


bool CategoryProperties_isRealRoot(CategoryProperties* this) {
        return false;
}


bool CategoryProperties_isRoot(CategoryProperties* this) {
        return false;
}


Any* CategoryProperties_getKey(CategoryProperties* this) {
        return ((Any*) CategoryProperties_getValue(this));
}


const char* CategoryProperties_getValue(CategoryProperties* this) {
        return this->category;
}


// throws Exception
AbPath* CategoryProperties_getPath(CategoryProperties* this, CategoryHierarchyInterface* categoryHierarchyInterface) {
        AbPathData* abPathData = AbPathData_getInstance();
        StringMaker* pathStringBuffer = StringMaker_new();
        BasicArrayList* list = BasicArrayListD_new();
        CategoryInterface* nextParentCategoryInterface = CategoryHierarchyInterface_getParent(categoryHierarchyInterface);
        if (this != CategoryInterface_getProperties(nextParentCategoryInterface)) {
            int32_t depthIndex = 0;
            while (nextParentCategoryInterface != nullptr) {
                if (JAVA_CALL(CategoryInterface_getProperties(nextParentCategoryInterface), isRealRoot)) {
                    break;
                }
                if (JAVA_CALL(CategoryInterface_getProperties(nextParentCategoryInterface), isRoot)) {
                    BasicArrayList_addAt(list, 0, JAVA_CALL(CategoryInterface_getPath(nextParentCategoryInterface), toString));
                } else {
                    StringMaker_delete(pathStringBuffer, 0, StringMaker_length(pathStringBuffer));
                    BasicArrayList_addAt(list, 0, JAVA_CALL(JAVA_CALL(StringMaker_append(pathStringBuffer, abPathData->SEPARATOR), append, JAVA_CALL(CategoryInterface_getProperties(nextParentCategoryInterface), getValue)), toString));
                }
                if (nextParentCategoryInterface == JAVA_CALL(CategoryInterface_getHierarchy(nextParentCategoryInterface), getParent)) {
                    break;
                }
                nextParentCategoryInterface = JAVA_CALL(CategoryInterface_getHierarchy(nextParentCategoryInterface), getParent);
                depthIndex++;
                if (depthIndex > CategoryProperties_MAXDEPTH) {
                    java_throw(java_exception_new("Exception", "Probably Major Error"));
                }
            }
        }
        StringMaker_delete(pathStringBuffer, 0, StringMaker_length(pathStringBuffer));
        JAVA_CALL(StringMaker_append(pathStringBuffer, abPathData->SEPARATOR), append, CategoryProperties_getValue(this));
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            StringMaker_append(pathStringBuffer, ((const char*) BasicArrayList_get(list, index)));
        }
        StringMaker_append(pathStringBuffer, abPathData->SEPARATOR);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, java_concat("path = ", StringMaker_toString(pathStringBuffer)), this, "getPath");
        }
        return AbPath_new(StringMaker_toString(pathStringBuffer), StringUtil_getInstance()->EMPTY_STRING);
}


const char* CategoryProperties_getFileName(CategoryProperties* this) {
        return CategoryProperties_getValue(this) + AbPathData_getInstance()->EXTENSION_SEP + CategoryData_getInstance()->UNCRYPTED_EXTENSION;
}


// throws Exception
AbPath* CategoryProperties_getWebAppPath(CategoryProperties* this) {
        java_throw(java_exception_new("Exception", "Not Root"));
}


void CategoryProperties_setValue(CategoryProperties* this, const char* value) {
        this->category = value;
}


bool CategoryProperties_isValid(CategoryProperties* this) {
        bool returnBoolean = false;
        if (StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), this->category, 1, AbSqlData_MAXSTRING)) {
            returnBoolean = true;
        }
        return returnBoolean;
}


HashMap* CategoryProperties_toHashMap(CategoryProperties* this) {
        HashMap* categoryHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(categoryHashMap, CategoryData_getInstance()->NAME, this->category);
        return categoryHashMap;
}


BasicArrayList* CategoryProperties_toVector(CategoryProperties* this) {
        BasicArrayList* categoryVector = BasicArrayListD_new();
        BasicArrayList_add(categoryVector, this->category);
        return categoryVector;
}


// throws Exception
Document* CategoryProperties_toValidationInfoDoc(CategoryProperties* this) {
        return nullptr;
}


// throws Exception
Node* CategoryProperties_toValidationInfoNode(CategoryProperties* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* CategoryProperties_validationInfo(CategoryProperties* this) {
        return nullptr;
}

