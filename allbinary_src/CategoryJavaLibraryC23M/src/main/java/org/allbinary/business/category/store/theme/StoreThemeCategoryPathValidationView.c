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
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryPathView.h"

typedef struct StoreThemeCategoryPathValidationView StoreThemeCategoryPathValidationView;
struct StoreThemeCategoryPathValidationView {
    StoreThemeCategoryPathView base;
    ValidationInterface ValidationInterface_interface;
};


StoreThemeCategoryPathValidationView* StoreThemeCategoryPathValidationView_new(StoreThemeCategoryInterface* categoryInterface);

void StoreThemeCategoryPathValidationView_init(StoreThemeCategoryPathValidationView* this, StoreThemeCategoryInterface* categoryInterface);
bool StoreThemeCategoryPathValidationView_isValid(StoreThemeCategoryPathValidationView* this);
Document* StoreThemeCategoryPathValidationView_toValidationInfoDoc(StoreThemeCategoryPathValidationView* this);
Node* StoreThemeCategoryPathValidationView_toValidationInfoNode(StoreThemeCategoryPathValidationView* this, Document* document);
const char* StoreThemeCategoryPathValidationView_validationInfo(StoreThemeCategoryPathValidationView* this);


void StoreThemeCategoryPathValidationView_init(StoreThemeCategoryPathValidationView* this, StoreThemeCategoryInterface* categoryInterface) {
        StoreThemeCategoryPathView_init(&this->base, ((StoreThemeCategoryInterface*) categoryInterface));
}

StoreThemeCategoryPathValidationView* StoreThemeCategoryPathValidationView_new(StoreThemeCategoryInterface* categoryInterface) {
    StoreThemeCategoryPathValidationView* this = calloc(1, sizeof(StoreThemeCategoryPathValidationView));
    StoreThemeCategoryPathValidationView_init(this, categoryInterface);
    return this;
}


// throws Exception
bool StoreThemeCategoryPathValidationView_isValid(StoreThemeCategoryPathValidationView* this) {
        return true;
}


// throws Exception
Document* StoreThemeCategoryPathValidationView_toValidationInfoDoc(StoreThemeCategoryPathValidationView* this) {
        return nullptr;
}


// throws Exception
Node* StoreThemeCategoryPathValidationView_toValidationInfoNode(StoreThemeCategoryPathValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* StoreThemeCategoryPathValidationView_validationInfo(StoreThemeCategoryPathValidationView* this) {
        return "Error";
}

