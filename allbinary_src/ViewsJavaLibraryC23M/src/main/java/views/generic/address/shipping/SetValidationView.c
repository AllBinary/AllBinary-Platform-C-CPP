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
#include "org/allbinary/globals/MESSAGES.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/shipping/ShippingAddressView.h"

typedef struct SetValidationView SetValidationView;
struct SetValidationView {
    ShippingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


SetValidationView* SetValidationView_new(TransformInfoInterface* transformInfoInterface);

void SetValidationView_init(SetValidationView* this, TransformInfoInterface* transformInfoInterface);
bool SetValidationView_isValid(SetValidationView* this);
const char* SetValidationView_validationInfo(SetValidationView* this);
Document* SetValidationView_toValidationInfoDoc(SetValidationView* this);
Node* SetValidationView_toValidationInfoNode(SetValidationView* this, Document* document);
TransformInfoInterface* SetValidationView_getTransformInfoInterface(SetValidationView* this);


void SetValidationView_init(SetValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ShippingAddressView_init(&this->base, transformInfoInterface);
}

SetValidationView* SetValidationView_new(TransformInfoInterface* transformInfoInterface) {
    SetValidationView* this = calloc(1, sizeof(SetValidationView));
    SetValidationView_init(this, transformInfoInterface);
    return this;
}


bool SetValidationView_isValid(SetValidationView* this) {
        return true;
}


const char* SetValidationView_validationInfo(SetValidationView* this) {
        return ShippingAddressView_MESSAGES->CONTACTADMIN;
}


Document* SetValidationView_toValidationInfoDoc(SetValidationView* this) {
        return nullptr;
}


Node* SetValidationView_toValidationInfoNode(SetValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* SetValidationView_getTransformInfoInterface(SetValidationView* this) {
        return ShippingAddressView_getTransformInfoInterface((&this->base));
}

