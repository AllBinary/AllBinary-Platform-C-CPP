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
// package views.generic.address.billing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/billing/BillingAddressView.h"

typedef struct EditValidationView EditValidationView;
struct EditValidationView {
    BillingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    const char* value;
};


EditValidationView* EditValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditValidationView_init(EditValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditValidationView_isValid(EditValidationView* this);
const char* EditValidationView_validationInfo(EditValidationView* this);
Document* EditValidationView_toValidationInfoDoc(EditValidationView* this);
Node* EditValidationView_toValidationInfoNode(EditValidationView* this, Document* document);
TransformInfoInterface* EditValidationView_getTransformInfoInterface(EditValidationView* this);

static void EditValidationView_initFields(EditValidationView* this) {
    
}


void EditValidationView_init(EditValidationView* this, TransformInfoInterface* transformInfoInterface) {
        BillingAddressView_init(&this->base, transformInfoInterface);
        EditValidationView_initFields(this);
        this->value = JAVA_CALL(JAVA_CALL(EditValidationView_getPageContext(this), getRequest), getParameter, StreetAddressData_ID);
}

EditValidationView* EditValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditValidationView* this = calloc(1, sizeof(EditValidationView));
    EditValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditValidationView_isValid(EditValidationView* this) {
        if (JAVA_CALL(EditValidationView_getWeblisketSession(this), getUserName) != nullptr) {
            return false;
        }
        BillingAddressesEntity* billingAddressesEntity = BillingAddressesEntity_new(JAVA_CALL(EditValidationView_getWeblisketSession(this), getUserName));
        this->streetAddress = BillingAddressesEntity_get(billingAddressesEntity, this->value);
        if (this->streetAddress == nullptr) {
            return false;
        }
        return JAVA_CALL(this->streetAddress, isValid);
}


const char* EditValidationView_validationInfo(EditValidationView* this) {
        return JAVA_CALL(this->streetAddress, validationInfo);
}


Document* EditValidationView_toValidationInfoDoc(EditValidationView* this) {
        return nullptr;
}


Node* EditValidationView_toValidationInfoNode(EditValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditValidationView_getTransformInfoInterface(EditValidationView* this) {
        return BillingAddressView_getTransformInfoInterface((&this->base));
}

