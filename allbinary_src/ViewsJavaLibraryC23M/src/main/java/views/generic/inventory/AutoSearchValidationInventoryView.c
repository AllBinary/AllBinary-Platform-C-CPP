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
// package views.generic.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/inventory/InventorySearch.h"

typedef struct AutoSearchValidationInventoryView AutoSearchValidationInventoryView;
struct AutoSearchValidationInventoryView {
    InventorySearch base;
};


AutoSearchValidationInventoryView* AutoSearchValidationInventoryView_new(SearchRequest* searchRequest);

void AutoSearchValidationInventoryView_init(AutoSearchValidationInventoryView* this, SearchRequest* searchRequest);
bool AutoSearchValidationInventoryView_isValid(AutoSearchValidationInventoryView* this);
Document* AutoSearchValidationInventoryView_toValidationInfoDoc(AutoSearchValidationInventoryView* this);
Node* AutoSearchValidationInventoryView_toValidationInfoNode(AutoSearchValidationInventoryView* this, Document* document);
const char* AutoSearchValidationInventoryView_validationInfo(AutoSearchValidationInventoryView* this);


void AutoSearchValidationInventoryView_init(AutoSearchValidationInventoryView* this, SearchRequest* searchRequest) {
        InventorySearch_init(&this->base, searchRequest);
}

AutoSearchValidationInventoryView* AutoSearchValidationInventoryView_new(SearchRequest* searchRequest) {
    AutoSearchValidationInventoryView* this = calloc(1, sizeof(AutoSearchValidationInventoryView));
    AutoSearchValidationInventoryView_init(this, searchRequest);
    return this;
}


bool AutoSearchValidationInventoryView_isValid(AutoSearchValidationInventoryView* this) {
        return true;
}


Document* AutoSearchValidationInventoryView_toValidationInfoDoc(AutoSearchValidationInventoryView* this) {
        return nullptr;
}


Node* AutoSearchValidationInventoryView_toValidationInfoNode(AutoSearchValidationInventoryView* this, Document* document) {
        return nullptr;
}


const char* AutoSearchValidationInventoryView_validationInfo(AutoSearchValidationInventoryView* this) {
        return nullptr;
}

