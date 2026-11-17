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
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/shipping/ShippingAddressesView.h"

typedef struct ValidationView ValidationView;
struct ValidationView {
    ShippingAddressesView base;
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
        ShippingAddressesView_init(&this->base, transformInfoInterface);
}

ValidationView* ValidationView_new(TransformInfoInterface* transformInfoInterface) {
    ValidationView* this = calloc(1, sizeof(ValidationView));
    ValidationView_init(this, transformInfoInterface);
    return this;
}


bool ValidationView_isValid(ValidationView* this) {
        ShippingAddressesEntity* billingAddressesEntity = ShippingAddressesEntity_new(JAVA_CALL(ValidationView_getWeblisketSession(this), getUserName));
        this->streetAddressList = ShippingAddressesEntity_get(billingAddressesEntity);
        if (this->streetAddressList == nullptr) {
            return false;
        }
        int32_t size = JAVA_CALL(this->streetAddressList, size);
        for (int32_t index = 0; index < size; index++) {
            StreetAddress* streetAddress = ((StreetAddress*) JAVA_CALL(this->base.streetAddressList, get, index));
            if (StreetAddress_isValid(streetAddress) == false) {
                JAVA_CALL(this->base.streetAddressList, remove, streetAddress);
            }
        }
        if (JAVA_CALL(this->streetAddressList, size) < 1) {
            return false;
        }
        return true;
}


const char* ValidationView_validationInfo(ValidationView* this) {
        return "No Shipping Addresses to display.<br />";
}


Document* ValidationView_toValidationInfoDoc(ValidationView* this) {
        return nullptr;
}


Node* ValidationView_toValidationInfoNode(ValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* ValidationView_getTransformInfoInterface(ValidationView* this) {
        return ShippingAddressesView_getTransformInfoInterface((&this->base));
}

