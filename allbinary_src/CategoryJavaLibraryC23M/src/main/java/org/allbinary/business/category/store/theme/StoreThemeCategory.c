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
// package org.allbinary.business.category.store.theme

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
#include "org/allbinary/business/category/Category.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/visual/theme/ThemeData.h"
#include "org/allbinary/logic/visual/theme/ThemeValidation.h"
#include "org/allbinary/logic/visual/theme/ThemesData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"

typedef struct StoreThemeCategory StoreThemeCategory;
struct StoreThemeCategory {
    Category base;
    StoreThemeCategoryInterface StoreThemeCategoryInterface_interface;
    TransformInfoInterface* transformInfoInterface;
    BasicArrayList* themeVector;
};


StoreThemeCategory* StoreThemeCategory_new(TransformInfoInterface* transformInfoInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

void StoreThemeCategory_init(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

StoreThemeCategory* StoreThemeCategory_new4(TransformInfoInterface* transformInfoInterface, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);
void StoreThemeCategory_init4(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);

StoreThemeCategory* StoreThemeCategory_new4(TransformInfoInterface* transformInfoInterface, Node* node, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);
void StoreThemeCategory_init4(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, Node* node, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level);

StoreThemeCategory* StoreThemeCategory_new5(TransformInfoInterface* transformInfoInterface, Node* node, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);
void StoreThemeCategory_init5(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, Node* node, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface);
TransformInfoInterface* StoreThemeCategory_getTransformInfoInterface(StoreThemeCategory* this);
void StoreThemeCategory_addThemes(StoreThemeCategory* this, Node* node);
void StoreThemeCategory_addTheme(StoreThemeCategory* this, ThemeValidation* themeValidation);
BasicArrayList* StoreThemeCategory_getThemes(StoreThemeCategory* this);
bool StoreThemeCategory_isValid(StoreThemeCategory* this);
HashMap* StoreThemeCategory_toHashMap(StoreThemeCategory* this);
BasicArrayList* StoreThemeCategory_toVector(StoreThemeCategory* this);

static void StoreThemeCategory_initFields(StoreThemeCategory* this) {
    
    
}


void StoreThemeCategory_init(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) {
        Category_init(&this->base, categoryPropertiesFactoryInterface, level);
        StoreThemeCategory_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->themeVector = BasicArrayListD_new();
}

StoreThemeCategory* StoreThemeCategory_new(TransformInfoInterface* transformInfoInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) {
    StoreThemeCategory* this = calloc(1, sizeof(StoreThemeCategory));
    StoreThemeCategory_init(this, transformInfoInterface, categoryPropertiesFactoryInterface, level);
    return this;
}


void StoreThemeCategory_init4(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
        Category_init(&this->base, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
        StoreThemeCategory_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->themeVector = BasicArrayListD_new();
}

StoreThemeCategory* StoreThemeCategory_new4(TransformInfoInterface* transformInfoInterface, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
    StoreThemeCategory* this = calloc(1, sizeof(StoreThemeCategory));
    StoreThemeCategory_init4(this, transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
    return this;
}


void StoreThemeCategory_init4(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, Node* node, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) {
        Category_init(&this->base, categoryPropertiesFactoryInterface, level);
        StoreThemeCategory_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->themeVector = BasicArrayListD_new();
        StoreThemeCategory_addThemes(this, node);
}

StoreThemeCategory* StoreThemeCategory_new4(TransformInfoInterface* transformInfoInterface, Node* node, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) {
    StoreThemeCategory* this = calloc(1, sizeof(StoreThemeCategory));
    StoreThemeCategory_init4(this, transformInfoInterface, node, categoryPropertiesFactoryInterface, level);
    return this;
}


void StoreThemeCategory_init5(StoreThemeCategory* this, TransformInfoInterface* transformInfoInterface, Node* node, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
        Category_init(&this->base, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
        StoreThemeCategory_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        this->themeVector = BasicArrayListD_new();
        StoreThemeCategory_addThemes(this, node);
}

StoreThemeCategory* StoreThemeCategory_new5(TransformInfoInterface* transformInfoInterface, Node* node, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) {
    StoreThemeCategory* this = calloc(1, sizeof(StoreThemeCategory));
    StoreThemeCategory_init5(this, transformInfoInterface, node, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
    return this;
}


TransformInfoInterface* StoreThemeCategory_getTransformInfoInterface(StoreThemeCategory* this) {
        return this->transformInfoInterface;
}


// throws Exception
void StoreThemeCategory_addThemes(StoreThemeCategory* this, Node* node) {
        Node* themesNode = DomSearchHelper_getNode(ThemesData_getInstance()->NAME, Node_getChildNodes(node));
        NodeList* nodeList = Node_getChildNodes(themesNode);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* themeNode = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(themeNode), compareTo, ThemeData_getInstance()->NAME) == 0) {
                BasicArrayList_add(this->themeVector, ThemeValidation_new(this, themeNode));
            }
        }
}


void StoreThemeCategory_addTheme(StoreThemeCategory* this, ThemeValidation* themeValidation) {
        BasicArrayList_add(this->themeVector, themeValidation);
}


BasicArrayList* StoreThemeCategory_getThemes(StoreThemeCategory* this) {
        return this->themeVector;
}


// throws Exception
bool StoreThemeCategory_isValid(StoreThemeCategory* this) {
        if (!JAVA_CALL(Category_isValid((&this->base)), booleanValue)) {
            return false;
        }
        return true;
}


// throws Exception
HashMap* StoreThemeCategory_toHashMap(StoreThemeCategory* this) {
        HashMap* categoryHashMap = Category_toHashMap((&this->base));
        HashMap_put(categoryHashMap, ThemesData_getInstance()->NAME, this->themeVector);
        return categoryHashMap;
}


// throws Exception
BasicArrayList* StoreThemeCategory_toVector(StoreThemeCategory* this) {
        BasicArrayList* categoryVector = Category_toVector((&this->base));
        return categoryVector;
}

