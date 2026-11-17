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
// package views.generic.address.shipping

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
#include "views/generic/address/shipping/ShippingAddressView.h"

typedef struct NewValidationView NewValidationView;
struct NewValidationView {
    ShippingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


NewValidationView* NewValidationView_new(TransformInfoInterface* transformInfoInterface);

void NewValidationView_init(NewValidationView* this, TransformInfoInterface* transformInfoInterface);
bool NewValidationView_isValid(NewValidationView* this);
const char* NewValidationView_validationInfo(NewValidationView* this);
Document* NewValidationView_toValidationInfoDoc(NewValidationView* this);
Node* NewValidationView_toValidationInfoNode(NewValidationView* this, Document* document);
TransformInfoInterface* NewValidationView_getTransformInfoInterface(NewValidationView* this);


void NewValidationView_init(NewValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ShippingAddressView_init(&this->base, transformInfoInterface);
}

NewValidationView* NewValidationView_new(TransformInfoInterface* transformInfoInterface) {
    NewValidationView* this = calloc(1, sizeof(NewValidationView));
    NewValidationView_init(this, transformInfoInterface);
    return this;
}


bool NewValidationView_isValid(NewValidationView* this) {
        this->streetAddress = StreetAddress_new();
        return true;
}


const char* NewValidationView_validationInfo(NewValidationView* this) {
        return "Please contact the administrator.";
}


Document* NewValidationView_toValidationInfoDoc(NewValidationView* this) {
        return nullptr;
}


Node* NewValidationView_toValidationInfoNode(NewValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* NewValidationView_getTransformInfoInterface(NewValidationView* this) {
        return ShippingAddressView_getTransformInfoInterface((&this->base));
}

