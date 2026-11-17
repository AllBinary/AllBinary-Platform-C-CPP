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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/shipping/ShippingAddressView.h"

typedef struct TaxValidationView TaxValidationView;
struct TaxValidationView {
    ShippingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


TaxValidationView* TaxValidationView_new(TransformInfoInterface* transformInfoInterface);

void TaxValidationView_init(TaxValidationView* this, TransformInfoInterface* transformInfoInterface);
bool TaxValidationView_isValid(TaxValidationView* this);
const char* TaxValidationView_validationInfo(TaxValidationView* this);
Document* TaxValidationView_toValidationInfoDoc(TaxValidationView* this);
Node* TaxValidationView_toValidationInfoNode(TaxValidationView* this, Document* document);
TransformInfoInterface* TaxValidationView_getTransformInfoInterface(TaxValidationView* this);


void TaxValidationView_init(TaxValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ShippingAddressView_init(&this->base, transformInfoInterface);
}

TaxValidationView* TaxValidationView_new(TransformInfoInterface* transformInfoInterface) {
    TaxValidationView* this = calloc(1, sizeof(TaxValidationView));
    TaxValidationView_init(this, transformInfoInterface);
    return this;
}


bool TaxValidationView_isValid(TaxValidationView* this) {
        ShippingAddressesEntity* billingAddressesEntity = ShippingAddressesEntity_new(JAVA_CALL(TaxValidationView_getWeblisketSession(this), getUserName));
        BasicArrayList* streetAddressList = ShippingAddressesEntity_get(billingAddressesEntity);
        if (streetAddressList == nullptr) {
            return false;
        }
        int32_t size = BasicArrayList_size(streetAddressList);
        for (int32_t index = 0; index < size; index++) {
            StreetAddress* aStreetAddress = ((StreetAddress*) BasicArrayList_get(streetAddressList, index));
            if (JAVA_CALL(StreetAddress_getName(aStreetAddress), compareTo, ShippingAddressData_TAX) == 0) {
                this->streetAddress = aStreetAddress;
                return true;
            }
        }
        return false;
}


const char* TaxValidationView_validationInfo(TaxValidationView* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


Document* TaxValidationView_toValidationInfoDoc(TaxValidationView* this) {
        return nullptr;
}


Node* TaxValidationView_toValidationInfoNode(TaxValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* TaxValidationView_getTransformInfoInterface(TaxValidationView* this) {
        return ShippingAddressView_getTransformInfoInterface((&this->base));
}

