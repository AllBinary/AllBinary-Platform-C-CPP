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
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/billing/BillingAddressView.h"

typedef struct AddValidationView AddValidationView;
struct AddValidationView {
    BillingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


AddValidationView* AddValidationView_new(TransformInfoInterface* transformInfoInterface);

void AddValidationView_init(AddValidationView* this, TransformInfoInterface* transformInfoInterface);
bool AddValidationView_isValid(AddValidationView* this);
const char* AddValidationView_validationInfo(AddValidationView* this);
Document* AddValidationView_toValidationInfoDoc(AddValidationView* this);
Node* AddValidationView_toValidationInfoNode(AddValidationView* this, Document* document);
TransformInfoInterface* AddValidationView_getTransformInfoInterface(AddValidationView* this);


void AddValidationView_init(AddValidationView* this, TransformInfoInterface* transformInfoInterface) {
        BillingAddressView_init(&this->base, transformInfoInterface);
}

AddValidationView* AddValidationView_new(TransformInfoInterface* transformInfoInterface) {
    AddValidationView* this = calloc(1, sizeof(AddValidationView));
    AddValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
bool AddValidationView_isValid(AddValidationView* this) {
        this->streetAddress = StreetAddress_new(AddValidationView_getRequest(this));
        if (JAVA_CALL(this->streetAddress, isValid) == false) {
            return false;
        }
        return true;
}


const char* AddValidationView_validationInfo(AddValidationView* this) {
        return JAVA_CALL(this->streetAddress, validationInfo);
}


Document* AddValidationView_toValidationInfoDoc(AddValidationView* this) {
        return nullptr;
}


Node* AddValidationView_toValidationInfoNode(AddValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* AddValidationView_getTransformInfoInterface(AddValidationView* this) {
        return BillingAddressView_getTransformInfoInterface((&this->base));
}

