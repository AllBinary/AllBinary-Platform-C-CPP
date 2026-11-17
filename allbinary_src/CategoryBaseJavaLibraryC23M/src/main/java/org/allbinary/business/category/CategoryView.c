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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesView.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/anyType/InterfaceUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct CategoryView CategoryView;
struct CategoryView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CategoryInterface* categoryInterface;
};


CategoryView* CategoryView_new(CategoryInterface* categoryInterface);

void CategoryView_init(CategoryView* this, CategoryInterface* categoryInterface);
CategoryInterface* CategoryView_getCategoryInterface(CategoryView* this);
Node* CategoryView_toXmlNode(CategoryView* this, Document* document);

static void CategoryView_initFields(CategoryView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void CategoryView_init(CategoryView* this, CategoryInterface* categoryInterface) {
    CategoryView_initFields(this);
        this->categoryInterface = categoryInterface;
}

CategoryView* CategoryView_new(CategoryInterface* categoryInterface) {
    CategoryView* this = calloc(1, sizeof(CategoryView));
    CategoryView_init(this, categoryInterface);
    return this;
}


CategoryInterface* CategoryView_getCategoryInterface(CategoryView* this) {
        return this->categoryInterface;
}


// throws Exception
Node* CategoryView_toXmlNode(CategoryView* this, Document* document) {
        Node* node = Document_createElement(document, CategoryData_getInstance()->NAME);
        BasicArrayList* childCategoryVector = CategoryInterface_getChildNodes(this->categoryInterface);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, java_concat("Number Of Children: ", java_string_of(BasicArrayList_size(childCategoryVector))), this, "toXmlNode");
        }
        int32_t size = BasicArrayList_size(childCategoryVector);
        for (int32_t i = 0; i < size; i++) {
            Any* anyType = BasicArrayList_get(childCategoryVector, i);
            CategoryPropertiesInterface* categoryPropertiesInterface = nullptr;
            if (InterfaceUtil_isImplemented("CategoryPropertiesInterface", anyType)) {
                categoryPropertiesInterface = ((CategoryPropertiesInterface*) anyType);
            } else if (InterfaceUtil_isImplemented("CategoryInterface", anyType)) {
                CategoryInterface* categoryInterface = ((CategoryInterface*) anyType);
                categoryPropertiesInterface = CategoryInterface_getProperties(categoryInterface);
            } else {
                const char* isImpl = InterfaceUtil_viewAll(java_class_of(anyType), CommonSeps_getInstance()->NEW_LINE);
                java_throw(java_exception_new("Exception", java_concat(java_concat("CategoryView found unknown object.\n", "Show Testing:"), isImpl)));
            }
            Node* childCategoryNode = CategoryPropertiesView_toXmlNode(CategoryPropertiesView_new(categoryPropertiesInterface), document);
            Node_appendChild(node, childCategoryNode);
        }
        return node;
}

