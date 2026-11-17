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
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryView.h"

typedef struct StoreThemeCategoryValidationView StoreThemeCategoryValidationView;
struct StoreThemeCategoryValidationView {
    StoreThemeCategoryView base;
    ValidationInterface ValidationInterface_interface;
};


StoreThemeCategoryValidationView* StoreThemeCategoryValidationView_new(StoreThemeCategoryInterface* categoryInterface);

void StoreThemeCategoryValidationView_init(StoreThemeCategoryValidationView* this, StoreThemeCategoryInterface* categoryInterface);
bool StoreThemeCategoryValidationView_isValid(StoreThemeCategoryValidationView* this);
Document* StoreThemeCategoryValidationView_toValidationInfoDoc(StoreThemeCategoryValidationView* this);
Node* StoreThemeCategoryValidationView_toValidationInfoNode(StoreThemeCategoryValidationView* this, Document* document);
const char* StoreThemeCategoryValidationView_validationInfo(StoreThemeCategoryValidationView* this);


void StoreThemeCategoryValidationView_init(StoreThemeCategoryValidationView* this, StoreThemeCategoryInterface* categoryInterface) {
        StoreThemeCategoryView_init(&this->base, ((StoreThemeCategoryInterface*) categoryInterface));
}

StoreThemeCategoryValidationView* StoreThemeCategoryValidationView_new(StoreThemeCategoryInterface* categoryInterface) {
    StoreThemeCategoryValidationView* this = calloc(1, sizeof(StoreThemeCategoryValidationView));
    StoreThemeCategoryValidationView_init(this, categoryInterface);
    return this;
}


// throws Exception
bool StoreThemeCategoryValidationView_isValid(StoreThemeCategoryValidationView* this) {
        return true;
}


// throws Exception
Document* StoreThemeCategoryValidationView_toValidationInfoDoc(StoreThemeCategoryValidationView* this) {
        return nullptr;
}


// throws Exception
Node* StoreThemeCategoryValidationView_toValidationInfoNode(StoreThemeCategoryValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* StoreThemeCategoryValidationView_validationInfo(StoreThemeCategoryValidationView* this) {
        return "Error";
}

