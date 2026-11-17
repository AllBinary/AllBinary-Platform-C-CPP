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
#include "org/allbinary/business/category/CategoryView.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/visual/theme/ThemeInterface.h"
#include "org/allbinary/logic/visual/theme/ThemePropertiesView.h"
#include "org/allbinary/logic/visual/theme/ThemeValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct StoreThemeCategoryPathView StoreThemeCategoryPathView;
struct StoreThemeCategoryPathView {
    CategoryView base;
    DomNodeInterface DomNodeInterface_interface;
};


StoreThemeCategoryPathView* StoreThemeCategoryPathView_new(StoreThemeCategoryInterface* categoryInterface);

void StoreThemeCategoryPathView_init(StoreThemeCategoryPathView* this, StoreThemeCategoryInterface* categoryInterface);
Node* StoreThemeCategoryPathView_toXmlNode(StoreThemeCategoryPathView* this, Document* document);


void StoreThemeCategoryPathView_init(StoreThemeCategoryPathView* this, StoreThemeCategoryInterface* categoryInterface) {
        CategoryView_init(&this->base, ((StoreThemeCategoryInterface*) categoryInterface));
}

StoreThemeCategoryPathView* StoreThemeCategoryPathView_new(StoreThemeCategoryInterface* categoryInterface) {
    StoreThemeCategoryPathView* this = calloc(1, sizeof(StoreThemeCategoryPathView));
    StoreThemeCategoryPathView_init(this, categoryInterface);
    return this;
}


// throws Exception
Node* StoreThemeCategoryPathView_toXmlNode(StoreThemeCategoryPathView* this, Document* document) {
        Node* node = CategoryView_toXmlNode((&this->base), document);
        StoreThemeCategoryInterface* storeThemeCategoryInterface = ((StoreThemeCategoryInterface*) StoreThemeCategoryPathView_getCategoryInterface(this));
        Any** themeArray = JAVA_CALL(StoreThemeCategoryInterface_getThemes(storeThemeCategoryInterface), toArray);
        int32_t size = java_array_length(themeArray);
        for (int32_t i = 0; i < size; i++) {
            ThemeValidation* themeValidation = ((ThemeValidation*) themeArray[i]);
            DomNodeInterface* domNodeInterface = ((DomNodeInterface*) ThemePropertiesView_new(((ThemeInterface*) themeValidation)));
            Node_appendChild(node, DomNodeInterface_toXmlNode(domNodeInterface, document));
        }
        return node;
}

