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
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Element.h"
#include "org/w3c/dom/Node.h"

typedef struct CategoryPropertiesView CategoryPropertiesView;
struct CategoryPropertiesView {
    DomNodeInterface DomNodeInterface_interface;
    CategoryPropertiesInterface* categoryPropertiesInterface;
};


CategoryPropertiesView* CategoryPropertiesView_new(CategoryPropertiesInterface* categoryPropertiesInterface);

void CategoryPropertiesView_init(CategoryPropertiesView* this, CategoryPropertiesInterface* categoryPropertiesInterface);
Node* CategoryPropertiesView_toXmlNode(CategoryPropertiesView* this, Document* document);

static void CategoryPropertiesView_initFields(CategoryPropertiesView* this) {
    
}


void CategoryPropertiesView_init(CategoryPropertiesView* this, CategoryPropertiesInterface* categoryPropertiesInterface) {
    CategoryPropertiesView_initFields(this);
        this->categoryPropertiesInterface = categoryPropertiesInterface;
}

CategoryPropertiesView* CategoryPropertiesView_new(CategoryPropertiesInterface* categoryPropertiesInterface) {
    CategoryPropertiesView* this = calloc(1, sizeof(CategoryPropertiesView));
    CategoryPropertiesView_init(this, categoryPropertiesInterface);
    return this;
}


// throws Exception
Node* CategoryPropertiesView_toXmlNode(CategoryPropertiesView* this, Document* document) {
        Node* categoryNode = Document_createElement(document, CategoryData_getInstance()->NAME);
        Element* newCategoryNode = ((Element*) categoryNode);
        Element_setAttribute(newCategoryNode, CategoryData_getInstance()->LABEL, CategoryPropertiesInterface_getValue(this->categoryPropertiesInterface));
        return categoryNode;
}

