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
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/business/category/CategoryView.h"

typedef struct CategoryComponent CategoryComponent;
struct CategoryComponent {
    CategoryView base;
    TransformInterface TransformInterface_interface;
    int32_t NO_TYPE;
};


CategoryComponent* CategoryComponent_new(CategoryInterface* categoryInterface);

void CategoryComponent_init(CategoryComponent* this, CategoryInterface* categoryInterface);
int32_t CategoryComponent_getTypeId(CategoryComponent* this);
TransformDocumentInterface* CategoryComponent_getTransformDocumentInterface(CategoryComponent* this);
TransformInfoInterface* CategoryComponent_getTransformInfoInterface(CategoryComponent* this);
void CategoryComponent_setTransformDocumentInterface(CategoryComponent* this, TransformDocumentInterface* viewDocumentInterface);
Document* CategoryComponent_toXmlDoc(CategoryComponent* this);
const char* CategoryComponent_view(CategoryComponent* this);

static void CategoryComponent_initFields(CategoryComponent* this) {
    this->NO_TYPE = 0;
}


void CategoryComponent_init(CategoryComponent* this, CategoryInterface* categoryInterface) {
        CategoryView_init(&this->base, categoryInterface);
        CategoryComponent_initFields(this);
}

CategoryComponent* CategoryComponent_new(CategoryInterface* categoryInterface) {
    CategoryComponent* this = calloc(1, sizeof(CategoryComponent));
    CategoryComponent_init(this, categoryInterface);
    return this;
}


int32_t CategoryComponent_getTypeId(CategoryComponent* this) {
        return this->NO_TYPE;
}


TransformDocumentInterface* CategoryComponent_getTransformDocumentInterface(CategoryComponent* this) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* CategoryComponent_getTransformInfoInterface(CategoryComponent* this) {
        return nullptr;
}


void CategoryComponent_setTransformDocumentInterface(CategoryComponent* this, TransformDocumentInterface* viewDocumentInterface) {
}


// throws Exception
Document* CategoryComponent_toXmlDoc(CategoryComponent* this) {
        Document* document = DomDocumentHelper_create();
        Document_appendChild(document, CategoryView_toXmlNode(CategoryView_new(CategoryComponent_getCategoryInterface(this)), document));
        return document;
}


// throws Exception
const char* CategoryComponent_view(CategoryComponent* this) {
        return nullptr;
}

