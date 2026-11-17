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
// package org.allbinary.business.category

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
#include "org/allbinary/business/category/hierarchy/CategoryHierarchy.h"
#include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/category/CategoryInterface.h"

typedef struct Category Category;
struct Category {
    CategoryInterface CategoryInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CategoryHierarchyInterface* categoryHierarchyInterface;
    CategoryPropertiesInterface* categoryPropertiesInterface;
    BasicArrayList* childCategoryVector;
    BasicArrayList* typeVector;
    int32_t PROPERTIES;
    int32_t CATEGORY;
};

static const char* Category_NOT_ROOT = "This is not the root so it has no file path.";

Category* Category_new(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

void Category_init(Category* this, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

Category* Category_new2(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);
void Category_init2(Category* this, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

Category* Category_new3(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);
void Category_init3(Category* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);
Any* Category_getKey(Category* this);
AbPath* Category_getRootFilePath(Category* this);
AbPath* Category_getFilePath(Category* this);
AbPath* Category_getWebAppPath(Category* this);
AbPath* Category_getPath(Category* this);
bool Category_addChildProperty(Category* this, CategoryPropertiesInterface* categoryPropertiesInterface);
bool Category_addChild(Category* this, CategoryInterface* categoryInterface);
BasicArrayList* Category_getChildNodes(Category* this);
bool Category_removeChild(Category* this, CategoryInterface* categoryInterface);
static void Category_removal(Category* this, BasicArrayList* removalVector);
static bool Category_removeDuplicateChild(Category* this, CategoryInterface* categoryInterface);
bool Category_isLeaf(Category* this);
CategoryPropertiesInterface* Category_getProperties(Category* this);
void Category_setProperties(Category* this, CategoryPropertiesInterface* categoryPropertiesInterface);
CategoryHierarchyInterface* Category_getHierarchy(Category* this);
void Category_setHierarchy(Category* this, CategoryHierarchyInterface* categoryHierarchyInterface);
bool Category_isValid(Category* this);
Document* Category_toValidationInfoDoc(Category* this);
Node* Category_toValidationInfoNode(Category* this, Document* document);
const char* Category_validationInfo(Category* this);
HashMap* Category_toHashMap(Category* this);
BasicArrayList* Category_toVector(Category* this);
void Category_log(Category* this);

static void Category_initFields(Category* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->childCategoryVector = BasicArrayListD_new();
    this->typeVector = BasicArrayListD_new();
    this->PROPERTIES = 1;
    this->CATEGORY = 0;
}


void Category_init(Category* this, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
    Category_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, "Category(CategoryPropertiesFactoryInterface)");
        }
        this->categoryPropertiesInterface = CategoryPropertiesFactoryInterface_getInstance(categoryPropertiesFactoryInterface);
        this->categoryHierarchyInterface = ((CategoryHierarchyInterface*) CategoryHierarchy_new(this, this));
        Category_log(this);
}

Category* Category_new(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
    Category* this = calloc(1, sizeof(Category));
    Category_init(this, categoryPropertiesFactoryInterface);
    return this;
}


void Category_init2(Category* this, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) {
    Category_initFields(this);
        this->categoryPropertiesInterface = CategoryPropertiesFactoryInterface_getInstance(categoryPropertiesFactoryInterface);
        this->categoryHierarchyInterface = ((CategoryHierarchyInterface*) CategoryHierarchy_new(this, this, level));
        Category_log(this);
}

Category* Category_new2(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) {
    Category* this = calloc(1, sizeof(Category));
    Category_init2(this, categoryPropertiesFactoryInterface, level);
    return this;
}


void Category_init3(Category* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
    Category_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) CategoryPropertiesFactoryInterface_getInstance(categoryPropertiesFactoryInterface));
        this->categoryHierarchyInterface = ((CategoryHierarchyInterface*) CategoryHierarchy_new(rootCategoryInterface, parentCategoryInterface));
        Category_log(this);
}

Category* Category_new3(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
    Category* this = calloc(1, sizeof(Category));
    Category_init3(this, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
    return this;
}


// throws Exception
Any* Category_getKey(Category* this) {
        return CategoryPropertiesInterface_getKey(this->categoryPropertiesInterface);
}


// throws Exception
AbPath* Category_getRootFilePath(Category* this) {
        AbPath* rootAbPath = AbPath_new(Category_NOT_ROOT, StringUtil_getInstance()->EMPTY_STRING);
        CategoryInterface* categoryInterface = CategoryHierarchyInterface_getRoot(this->categoryHierarchyInterface);
        if (JAVA_CALL(CategoryInterface_getProperties(categoryInterface), isRoot)) {
            RootCategoryPropertiesInterface* rootCategoryPropertiesInterface = ((RootCategoryPropertiesInterface*) CategoryInterface_getProperties(categoryInterface));
            rootAbPath = RootCategoryPropertiesInterface_getRootFilePath(rootCategoryPropertiesInterface);
        }
        return rootAbPath;
}


// throws Exception
AbPath* Category_getFilePath(Category* this) {
        return AbPath_new(java_concat(JAVA_CALL(Category_getRootFilePath(this), toString), JAVA_CALL(JAVA_CALL(Category_getProperties(this), getPath, Category_getHierarchy(this)), toString)), JAVA_CALL(Category_getProperties(this), getFileName));
}


// throws Exception
AbPath* Category_getWebAppPath(Category* this) {
        CategoryInterface* categoryInterface = CategoryHierarchyInterface_getRoot(this->categoryHierarchyInterface);
        return JAVA_CALL(CategoryInterface_getProperties(categoryInterface), getWebAppPath);
}


// throws Exception
AbPath* Category_getPath(Category* this) {
        return CategoryPropertiesInterface_getPath(this->categoryPropertiesInterface, this->categoryHierarchyInterface);
}


// synchronized
bool Category_addChildProperty(Category* this, CategoryPropertiesInterface* categoryPropertiesInterface) {
        BasicArrayList_add(this->typeVector, this->PROPERTIES);
        return BasicArrayList_add(this->childCategoryVector, categoryPropertiesInterface);
}


// synchronized
bool Category_addChild(Category* this, CategoryInterface* categoryInterface) {
        Category_removeDuplicateChild(this, categoryInterface);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, "adding", this, "addChild");
        }
        CategoryHierarchyInterface* childCategoryHierarchyInterface = CategoryInterface_getHierarchy(categoryInterface);
        CategoryHierarchyInterface_setParent(childCategoryHierarchyInterface, this);
        CategoryHierarchyInterface_setRoot(childCategoryHierarchyInterface, JAVA_CALL(Category_getHierarchy(this), getRoot));
        CategoryInterface_setHierarchy(categoryInterface, childCategoryHierarchyInterface);
        BasicArrayList_add(this->typeVector, this->CATEGORY);
        return BasicArrayList_add(this->childCategoryVector, categoryInterface);
}


BasicArrayList* Category_getChildNodes(Category* this) {
        return this->childCategoryVector;
}


// synchronized
bool Category_removeChild(Category* this, CategoryInterface* categoryInterface) {
        BasicArrayList* removalVector = BasicArrayListD_new();
        bool bool_return = false;
        int32_t size = BasicArrayList_size(this->childCategoryVector);
        for (int32_t index = 0; index < size; index++) {
            if (this->CATEGORY == BasicArrayList_get(this->typeVector, index)) {
                Any* anyType = BasicArrayList_get(this->childCategoryVector, index);
                CategoryInterface* currentCategoryInterface = ((CategoryInterface*) anyType);
                if (JAVA_CALL(JAVA_CALL(CategoryInterface_getProperties(currentCategoryInterface), getValue), compareTo, JAVA_CALL(CategoryInterface_getProperties(categoryInterface), getValue)) == 0) {
                    BasicArrayList_add(removalVector, currentCategoryInterface);
                    bool_return = true;
                }
            }
        }
        Category_removal(this, removalVector);
        return bool_return;
}


static void Category_removal(Category* this, BasicArrayList* removalVector) {
        int32_t removalSize = BasicArrayList_size(removalVector);
        for (int32_t index = 0; index < removalSize; index++) {
            Any* anyType = BasicArrayList_get(removalVector, index);
            int32_t objectIndex = BasicArrayList_indexOf(this->childCategoryVector, anyType);
            BasicArrayList_remove(this->typeVector, objectIndex);
            BasicArrayList_remove(this->childCategoryVector, objectIndex);
        }
}


// synchronized
static bool Category_removeDuplicateChild(Category* this, CategoryInterface* categoryInterface) {
        BasicArrayList* removalVector = BasicArrayListD_new();
        bool bool_return = false;
        int32_t size = BasicArrayList_size(this->childCategoryVector);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = BasicArrayList_get(this->childCategoryVector, index);
            if (this->PROPERTIES == BasicArrayList_get(this->typeVector, index)) {
                CategoryPropertiesInterface* categoryPropertiesInterface = ((CategoryPropertiesInterface*) anyType);
                if (JAVA_CALL(JAVA_CALL(CategoryInterface_getProperties(categoryInterface), getValue), compareTo, CategoryPropertiesInterface_getValue(categoryPropertiesInterface)) == 0) {
                    BasicArrayList_add(removalVector, categoryPropertiesInterface);
                    bool_return = true;
                    break;
                }
            } else if (this->CATEGORY == BasicArrayList_get(this->typeVector, index)) {
                CategoryInterface* existingCategoryInterface = ((CategoryInterface*) anyType);
                CategoryPropertiesInterface* categoryPropertiesInterface = CategoryInterface_getProperties(existingCategoryInterface);
                if (JAVA_CALL(JAVA_CALL(CategoryInterface_getProperties(categoryInterface), getValue), compareTo, CategoryPropertiesInterface_getValue(categoryPropertiesInterface)) == 0) {
                    BasicArrayList_add(removalVector, existingCategoryInterface);
                    bool_return = true;
                    break;
                }
            }
        }
        Category_removal(this, removalVector);
        return bool_return;
}


// throws Exception
bool Category_isLeaf(Category* this) {
        if (this->childCategoryVector == nullptr) {
            java_throw(java_exception_new("Exception", "Category Error"));
        }
        if (BasicArrayList_size(this->childCategoryVector) == 0) {
            return true;
        } else {
            return false;
        }
}


CategoryPropertiesInterface* Category_getProperties(Category* this) {
        return this->categoryPropertiesInterface;
}


void Category_setProperties(Category* this, CategoryPropertiesInterface* categoryPropertiesInterface) {
        this->categoryPropertiesInterface = categoryPropertiesInterface;
}


CategoryHierarchyInterface* Category_getHierarchy(Category* this) {
        return this->categoryHierarchyInterface;
}


void Category_setHierarchy(Category* this, CategoryHierarchyInterface* categoryHierarchyInterface) {
        this->categoryHierarchyInterface = categoryHierarchyInterface;
}


// throws Exception
// synchronized
bool Category_isValid(Category* this) {
        if (!JAVA_CALL(CategoryPropertiesInterface_isValid(this->categoryPropertiesInterface), booleanValue)) {
            return false;
        }
        int32_t size = BasicArrayList_size(this->childCategoryVector);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = BasicArrayList_get(this->childCategoryVector, index);
            if (this->PROPERTIES == BasicArrayList_get(this->typeVector, index)) {
                CategoryPropertiesInterface* categoryPropertiesInterface = ((CategoryPropertiesInterface*) anyType);
                if (!JAVA_CALL(CategoryPropertiesInterface_isValid(categoryPropertiesInterface), booleanValue)) {
                    return false;
                }
            } else if (this->CATEGORY == BasicArrayList_get(this->typeVector, index)) {
                CategoryInterface* categoryInterface = ((CategoryInterface*) anyType);
                if (!JAVA_CALL(CategoryInterface_isValid(categoryInterface), booleanValue)) {
                    return false;
                }
            }
        }
        return true;
}


// throws Exception
Document* Category_toValidationInfoDoc(Category* this) {
        return nullptr;
}


// throws Exception
Node* Category_toValidationInfoNode(Category* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* Category_validationInfo(Category* this) {
        return nullptr;
}


// throws Exception
HashMap* Category_toHashMap(Category* this) {
        HashMap* categoryHashMap = CategoryPropertiesInterface_toHashMap(this->categoryPropertiesInterface);
        return categoryHashMap;
}


// throws Exception
BasicArrayList* Category_toVector(Category* this) {
        BasicArrayList* categoryVector = CategoryPropertiesInterface_toVector(this->categoryPropertiesInterface);
        BasicArrayList_add(categoryVector, this->childCategoryVector);
        return categoryVector;
}


// throws Exception
void Category_log(Category* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Category Name: ");
            StringMaker_append(stringBuffer, CategoryPropertiesInterface_getValue(this->categoryPropertiesInterface));
            StringMaker_append(stringBuffer, "\nPath = ");
            StringMaker_append(stringBuffer, JAVA_CALL(Category_getPath(this), toString));
            StringMaker_append(stringBuffer, "\nFile Path: ");
            StringMaker_append(stringBuffer, JAVA_CALL(Category_getFilePath(this), toString));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "log()");
        }
}

