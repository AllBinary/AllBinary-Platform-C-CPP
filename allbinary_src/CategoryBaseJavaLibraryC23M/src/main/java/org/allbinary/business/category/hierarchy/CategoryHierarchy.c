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
// package org.allbinary.business.category.hierarchy

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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"

typedef struct CategoryHierarchy CategoryHierarchy;
struct CategoryHierarchy {
    CategoryHierarchyInterface CategoryHierarchyInterface_interface;
    CategoryInterface* rootCategoryInterface;
    CategoryInterface* parentCategoryInterface;
    int32_t level;
};


CategoryHierarchy* CategoryHierarchy_new(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface);

void CategoryHierarchy_init(CategoryHierarchy* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface);

CategoryHierarchy* CategoryHierarchy_new3(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, int32_t level);
void CategoryHierarchy_init3(CategoryHierarchy* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, int32_t level);

CategoryHierarchy* CategoryHierarchy_new3(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap);
void CategoryHierarchy_init3(CategoryHierarchy* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap);
int32_t CategoryHierarchy_getLevel(CategoryHierarchy* this);
const char* CategoryHierarchy_getLevelString(CategoryHierarchy* this);
void CategoryHierarchy_setLevel(CategoryHierarchy* this, int32_t level);
void CategoryHierarchy_setParent(CategoryHierarchy* this, CategoryInterface* categoryInterface);
void CategoryHierarchy_setRoot(CategoryHierarchy* this, CategoryInterface* categoryInterface);
CategoryInterface* CategoryHierarchy_getRoot(CategoryHierarchy* this);
CategoryInterface* CategoryHierarchy_getParent(CategoryHierarchy* this);

static void CategoryHierarchy_initFields(CategoryHierarchy* this) {
    this->rootCategoryInterface = nullptr;
    this->parentCategoryInterface = nullptr;
    
}


void CategoryHierarchy_init(CategoryHierarchy* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface) {
    CategoryHierarchy_initFields(this);
        this->level = 0;
        CategoryHierarchy_setRoot(this, rootCategoryInterface);
        CategoryHierarchy_setParent(this, parentCategoryInterface);
}

CategoryHierarchy* CategoryHierarchy_new(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface) {
    CategoryHierarchy* this = calloc(1, sizeof(CategoryHierarchy));
    CategoryHierarchy_init(this, rootCategoryInterface, parentCategoryInterface);
    return this;
}


void CategoryHierarchy_init3(CategoryHierarchy* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, int32_t level) {
    CategoryHierarchy_initFields(this);
        this->level = level;
        CategoryHierarchy_setRoot(this, rootCategoryInterface);
        CategoryHierarchy_setParent(this, parentCategoryInterface);
}

CategoryHierarchy* CategoryHierarchy_new3(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, int32_t level) {
    CategoryHierarchy* this = calloc(1, sizeof(CategoryHierarchy));
    CategoryHierarchy_init3(this, rootCategoryInterface, parentCategoryInterface, level);
    return this;
}


void CategoryHierarchy_init3(CategoryHierarchy* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap) {
    CategoryHierarchy_initFields(this);
        const char* levelString = StringUtil_getNonNull(StringUtil_getInstance(), ((const char*) HashMap_get(categoryPropertiesHashMap, CategoryData_getInstance()->LEVEL)));
        this->level = JAVA_CALL(java_string_of(levelString), intValue);
        CategoryHierarchy_setRoot(this, rootCategoryInterface);
        CategoryHierarchy_setParent(this, parentCategoryInterface);
}

CategoryHierarchy* CategoryHierarchy_new3(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap) {
    CategoryHierarchy* this = calloc(1, sizeof(CategoryHierarchy));
    CategoryHierarchy_init3(this, rootCategoryInterface, parentCategoryInterface, categoryPropertiesHashMap);
    return this;
}


int32_t CategoryHierarchy_getLevel(CategoryHierarchy* this) {
        return this->level;
}


const char* CategoryHierarchy_getLevelString(CategoryHierarchy* this) {
        return java_string_of(this->level);
}


void CategoryHierarchy_setLevel(CategoryHierarchy* this, int32_t level) {
        this->level = level;
}


void CategoryHierarchy_setParent(CategoryHierarchy* this, CategoryInterface* categoryInterface) {
        this->parentCategoryInterface = categoryInterface;
}


void CategoryHierarchy_setRoot(CategoryHierarchy* this, CategoryInterface* categoryInterface) {
        this->rootCategoryInterface = categoryInterface;
}


CategoryInterface* CategoryHierarchy_getRoot(CategoryHierarchy* this) {
        return this->rootCategoryInterface;
}


CategoryInterface* CategoryHierarchy_getParent(CategoryHierarchy* this) {
        return this->parentCategoryInterface;
}

