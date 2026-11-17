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
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/address/ShippingAddressData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/money/tax/TaxFactory.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/shipping/ShippingAddressView.h"

typedef struct UpdateTaxValidationView UpdateTaxValidationView;
struct UpdateTaxValidationView {
    ShippingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
};


UpdateTaxValidationView* UpdateTaxValidationView_new(TransformInfoInterface* transformInfoInterface);

void UpdateTaxValidationView_init(UpdateTaxValidationView* this, TransformInfoInterface* transformInfoInterface);
bool UpdateTaxValidationView_isValid(UpdateTaxValidationView* this);
const char* UpdateTaxValidationView_validationInfo(UpdateTaxValidationView* this);
Document* UpdateTaxValidationView_toValidationInfoDoc(UpdateTaxValidationView* this);
Node* UpdateTaxValidationView_toValidationInfoNode(UpdateTaxValidationView* this, Document* document);
TransformInfoInterface* UpdateTaxValidationView_getTransformInfoInterface(UpdateTaxValidationView* this);


void UpdateTaxValidationView_init(UpdateTaxValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ShippingAddressView_init(&this->base, transformInfoInterface);
}

UpdateTaxValidationView* UpdateTaxValidationView_new(TransformInfoInterface* transformInfoInterface) {
    UpdateTaxValidationView* this = calloc(1, sizeof(UpdateTaxValidationView));
    UpdateTaxValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
bool UpdateTaxValidationView_isValid(UpdateTaxValidationView* this) {
        this->streetAddress = StreetAddress_new(UpdateTaxValidationView_getRequest(this));
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(UpdateTaxValidationView_getTransformInfoInterface(this), getStoreName));
        if (JAVA_CALL(TaxFactory_getInstance(TaxFactory_getInstance(), this->abeClientInformation, storeFrontInterface), isValid, this->streetAddress, storeFrontInterface) == false) {
            return false;
        }
        ShippingAddressesEntity* billingAddressesEntity = ShippingAddressesEntity_new(JAVA_CALL(UpdateTaxValidationView_getWeblisketSession(this), getUserName));
        BasicArrayList* streetAddressList = ShippingAddressesEntity_get(billingAddressesEntity);
        if (streetAddressList == nullptr) {
            return false;
        }
        int32_t count = 0;
        int32_t size = BasicArrayList_size(streetAddressList);
        for (int32_t index = 0; index < size; index++) {
            StreetAddress* aStreetAddress = ((StreetAddress*) BasicArrayList_get(streetAddressList, index));
            if (JAVA_CALL(StreetAddress_getName(aStreetAddress), compareTo, ShippingAddressData_TAX) == 0) {
                count++;
            }
        }
        if (count != 1) {
            return false;
        }
        return true;
}


const char* UpdateTaxValidationView_validationInfo(UpdateTaxValidationView* this) {
        return "Unable to update tax location.";
}


Document* UpdateTaxValidationView_toValidationInfoDoc(UpdateTaxValidationView* this) {
        return nullptr;
}


Node* UpdateTaxValidationView_toValidationInfoNode(UpdateTaxValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* UpdateTaxValidationView_getTransformInfoInterface(UpdateTaxValidationView* this) {
        return ShippingAddressView_getTransformInfoInterface((&this->base));
}

