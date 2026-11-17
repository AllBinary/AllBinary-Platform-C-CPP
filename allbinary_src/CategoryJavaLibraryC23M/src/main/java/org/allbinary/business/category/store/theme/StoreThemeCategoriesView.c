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
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct StoreThemeCategoriesView StoreThemeCategoriesView;
struct StoreThemeCategoriesView {
    DomNodeInterface DomNodeInterface_interface;
    StoreThemeCategoryInterface* categoryInterface;
};


StoreThemeCategoriesView* StoreThemeCategoriesView_new(StoreThemeCategoryInterface* categoryInterface);

void StoreThemeCategoriesView_init(StoreThemeCategoriesView* this, StoreThemeCategoryInterface* categoryInterface);
Node* StoreThemeCategoriesView_toXmlNode(StoreThemeCategoriesView* this, Document* document);

static void StoreThemeCategoriesView_initFields(StoreThemeCategoriesView* this) {
    
}


void StoreThemeCategoriesView_init(StoreThemeCategoriesView* this, StoreThemeCategoryInterface* categoryInterface) {
    StoreThemeCategoriesView_initFields(this);
        this->categoryInterface = categoryInterface;
}

StoreThemeCategoriesView* StoreThemeCategoriesView_new(StoreThemeCategoryInterface* categoryInterface) {
    StoreThemeCategoriesView* this = calloc(1, sizeof(StoreThemeCategoriesView));
    StoreThemeCategoriesView_init(this, categoryInterface);
    return this;
}


// throws Exception
Node* StoreThemeCategoriesView_toXmlNode(StoreThemeCategoriesView* this, Document* document) {
        Node* node = StoreThemeCategoryView_toXmlNode(StoreThemeCategoryView_new(this->categoryInterface), document);
        Any** childArray = JAVA_CALL(StoreThemeCategoryInterface_getChildNodes(this->categoryInterface), toArray);
        int32_t size = java_array_length(childArray);
        for (int32_t i = 0; i < size; i++) {
            CategoryInterface* childCategoryInterface = ((CategoryInterface*) childArray[i]);
            Node* childCategoryNode = StoreThemeCategoriesView_toXmlNode(StoreThemeCategoriesView_new(((StoreThemeCategoryInterface*) childCategoryInterface)), document);
            Node_appendChild(node, childCategoryNode);
        }
        return node;
}

