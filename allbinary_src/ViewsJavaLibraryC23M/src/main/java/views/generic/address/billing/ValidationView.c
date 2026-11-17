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
#include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/billing/BillingAddressesView.h"

typedef struct ValidationView ValidationView;
struct ValidationView {
    BillingAddressesView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


ValidationView* ValidationView_new(TransformInfoInterface* transformInfoInterface);

void ValidationView_init(ValidationView* this, TransformInfoInterface* transformInfoInterface);
bool ValidationView_isValid(ValidationView* this);
const char* ValidationView_validationInfo(ValidationView* this);
Document* ValidationView_toValidationInfoDoc(ValidationView* this);
Node* ValidationView_toValidationInfoNode(ValidationView* this, Document* document);
TransformInfoInterface* ValidationView_getTransformInfoInterface(ValidationView* this);


void ValidationView_init(ValidationView* this, TransformInfoInterface* transformInfoInterface) {
        BillingAddressesView_init(&this->base, transformInfoInterface);
}

ValidationView* ValidationView_new(TransformInfoInterface* transformInfoInterface) {
    ValidationView* this = calloc(1, sizeof(ValidationView));
    ValidationView_init(this, transformInfoInterface);
    return this;
}


bool ValidationView_isValid(ValidationView* this) {
        BillingAddressesEntity* billingAddressesEntity = BillingAddressesEntity_new(JAVA_CALL(ValidationView_getWeblisketSession(this), getUserName));
        this->streetAddresses = BillingAddressesEntity_get(billingAddressesEntity);
        if (this->streetAddresses == nullptr) {
            return false;
        }
        if (JAVA_CALL(this->streetAddresses, size) < 1) {
            return false;
        }
        return true;
}


const char* ValidationView_validationInfo(ValidationView* this) {
        return "No Billing Addresses to display.<br />";
}


Document* ValidationView_toValidationInfoDoc(ValidationView* this) {
        return nullptr;
}


Node* ValidationView_toValidationInfoNode(ValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* ValidationView_getTransformInfoInterface(ValidationView* this) {
        return BillingAddressesView_getTransformInfoInterface((&this->base));
}

