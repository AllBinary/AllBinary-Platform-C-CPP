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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct CategoriesView CategoriesView;
struct CategoriesView {
    DomNodeInterface DomNodeInterface_interface;
    CategoryInterface* categoryInterface;
};


CategoriesView* CategoriesView_new(CategoryInterface* categoryInterface);

void CategoriesView_init(CategoriesView* this, CategoryInterface* categoryInterface);
Node* CategoriesView_toXmlNode(CategoriesView* this, Document* document);

static void CategoriesView_initFields(CategoriesView* this) {
    
}


void CategoriesView_init(CategoriesView* this, CategoryInterface* categoryInterface) {
    CategoriesView_initFields(this);
        this->categoryInterface = categoryInterface;
}

CategoriesView* CategoriesView_new(CategoryInterface* categoryInterface) {
    CategoriesView* this = calloc(1, sizeof(CategoriesView));
    CategoriesView_init(this, categoryInterface);
    return this;
}


// throws Exception
Node* CategoriesView_toXmlNode(CategoriesView* this, Document* document) {
        Node* node = CategoryView_toXmlNode(CategoryView_new(this->categoryInterface), document);
        Any** childArray = JAVA_CALL(CategoryInterface_getChildNodes(this->categoryInterface), toArray);
        int32_t size = java_array_length(childArray);
        for (int32_t i = 0; i < size; i++) {
            CategoryInterface* childCategoryInterface = ((CategoryInterface*) childArray[i]);
            Node* childCategoryNode = CategoriesView_toXmlNode(CategoriesView_new(childCategoryInterface), document);
            Node_appendChild(node, childCategoryNode);
        }
        return node;
}

