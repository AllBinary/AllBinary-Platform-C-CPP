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

typedef struct UpdateValidationView UpdateValidationView;
struct UpdateValidationView {
    BillingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


UpdateValidationView* UpdateValidationView_new(TransformInfoInterface* transformInfoInterface);

void UpdateValidationView_init(UpdateValidationView* this, TransformInfoInterface* transformInfoInterface);
bool UpdateValidationView_isValid(UpdateValidationView* this);
const char* UpdateValidationView_validationInfo(UpdateValidationView* this);
Document* UpdateValidationView_toValidationInfoDoc(UpdateValidationView* this);
Node* UpdateValidationView_toValidationInfoNode(UpdateValidationView* this, Document* document);
TransformInfoInterface* UpdateValidationView_getTransformInfoInterface(UpdateValidationView* this);


void UpdateValidationView_init(UpdateValidationView* this, TransformInfoInterface* transformInfoInterface) {
        BillingAddressView_init(&this->base, transformInfoInterface);
}

UpdateValidationView* UpdateValidationView_new(TransformInfoInterface* transformInfoInterface) {
    UpdateValidationView* this = calloc(1, sizeof(UpdateValidationView));
    UpdateValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
bool UpdateValidationView_isValid(UpdateValidationView* this) {
        this->streetAddress = StreetAddress_new(UpdateValidationView_getRequest(this));
        if (JAVA_CALL(this->streetAddress, isValid) == false) {
            return false;
        }
        return JAVA_CALL(this->streetAddress, isValid);
}


const char* UpdateValidationView_validationInfo(UpdateValidationView* this) {
        return JAVA_CALL(this->streetAddress, validationInfo);
}


Document* UpdateValidationView_toValidationInfoDoc(UpdateValidationView* this) {
        return nullptr;
}


Node* UpdateValidationView_toValidationInfoNode(UpdateValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* UpdateValidationView_getTransformInfoInterface(UpdateValidationView* this) {
        return BillingAddressView_getTransformInfoInterface((&this->base));
}

