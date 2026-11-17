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
#include "org/allbinary/globals/MESSAGES.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/billing/BillingAddressView.h"

typedef struct SelectValidationView SelectValidationView;
struct SelectValidationView {
    BillingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


SelectValidationView* SelectValidationView_new(TransformInfoInterface* transformInfoInterface);

void SelectValidationView_init(SelectValidationView* this, TransformInfoInterface* transformInfoInterface);
bool SelectValidationView_isValid(SelectValidationView* this);
const char* SelectValidationView_validationInfo(SelectValidationView* this);
Document* SelectValidationView_toValidationInfoDoc(SelectValidationView* this);
Node* SelectValidationView_toValidationInfoNode(SelectValidationView* this, Document* document);
TransformInfoInterface* SelectValidationView_getTransformInfoInterface(SelectValidationView* this);


void SelectValidationView_init(SelectValidationView* this, TransformInfoInterface* transformInfoInterface) {
        BillingAddressView_init(&this->base, transformInfoInterface);
}

SelectValidationView* SelectValidationView_new(TransformInfoInterface* transformInfoInterface) {
    SelectValidationView* this = calloc(1, sizeof(SelectValidationView));
    SelectValidationView_init(this, transformInfoInterface);
    return this;
}


bool SelectValidationView_isValid(SelectValidationView* this) {
        return true;
}


const char* SelectValidationView_validationInfo(SelectValidationView* this) {
        return BillingAddressView_MESSAGES->CONTACTADMIN;
}


Document* SelectValidationView_toValidationInfoDoc(SelectValidationView* this) {
        return nullptr;
}


Node* SelectValidationView_toValidationInfoNode(SelectValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* SelectValidationView_getTransformInfoInterface(SelectValidationView* this) {
        return BillingAddressView_getTransformInfoInterface((&this->base));
}

