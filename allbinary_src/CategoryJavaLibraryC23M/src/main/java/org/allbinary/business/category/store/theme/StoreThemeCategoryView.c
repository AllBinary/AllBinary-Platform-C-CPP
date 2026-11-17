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
// #include "java/util/Arrays.h"
#include "org/allbinary/business/category/CategoryView.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/visual/theme/ThemeValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct StoreThemeCategoryView StoreThemeCategoryView;
struct StoreThemeCategoryView {
    CategoryView base;
    DomNodeInterface DomNodeInterface_interface;
};


StoreThemeCategoryView* StoreThemeCategoryView_new(StoreThemeCategoryInterface* categoryInterface);

void StoreThemeCategoryView_init(StoreThemeCategoryView* this, StoreThemeCategoryInterface* categoryInterface);
Node* StoreThemeCategoryView_toXmlNode(StoreThemeCategoryView* this, Document* document);


void StoreThemeCategoryView_init(StoreThemeCategoryView* this, StoreThemeCategoryInterface* categoryInterface) {
        CategoryView_init(&this->base, ((StoreThemeCategoryInterface*) categoryInterface));
}

StoreThemeCategoryView* StoreThemeCategoryView_new(StoreThemeCategoryInterface* categoryInterface) {
    StoreThemeCategoryView* this = calloc(1, sizeof(StoreThemeCategoryView));
    StoreThemeCategoryView_init(this, categoryInterface);
    return this;
}


// throws Exception
Node* StoreThemeCategoryView_toXmlNode(StoreThemeCategoryView* this, Document* document) {
        Node* node = CategoryView_toXmlNode((&this->base), document);
        StoreThemeCategoryInterface* storeThemeCategoryInterface = ((StoreThemeCategoryInterface*) StoreThemeCategoryView_getCategoryInterface(this));
        ThemeValidation** themeValidationArray = ((ThemeValidation**) JAVA_CALL(StoreThemeCategoryInterface_getThemes(storeThemeCategoryInterface), toArray));
        Arrays_sort(themeValidationArray, ThemeComparator_new());
        int32_t size = java_array_length(themeValidationArray);
        for (int32_t index = 0; index < size; index++) {
            ThemeValidation* themeValidation = ((ThemeValidation*) themeValidationArray[index]);
            Node_appendChild(node, ThemeValidation_toXmlNode(themeValidation, document));
        }
        return node;
}

