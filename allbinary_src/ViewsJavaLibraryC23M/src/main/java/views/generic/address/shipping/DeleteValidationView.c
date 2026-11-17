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
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/shipping/ShippingAddressView.h"

typedef struct DeleteValidationView DeleteValidationView;
struct DeleteValidationView {
    ShippingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    const char* value;
};


DeleteValidationView* DeleteValidationView_new(TransformInfoInterface* transformInfoInterface);

void DeleteValidationView_init(DeleteValidationView* this, TransformInfoInterface* transformInfoInterface);
bool DeleteValidationView_isValid(DeleteValidationView* this);
const char* DeleteValidationView_validationInfo(DeleteValidationView* this);
Document* DeleteValidationView_toValidationInfoDoc(DeleteValidationView* this);
Node* DeleteValidationView_toValidationInfoNode(DeleteValidationView* this, Document* document);
TransformInfoInterface* DeleteValidationView_getTransformInfoInterface(DeleteValidationView* this);

static void DeleteValidationView_initFields(DeleteValidationView* this) {
    
}


void DeleteValidationView_init(DeleteValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ShippingAddressView_init(&this->base, transformInfoInterface);
        DeleteValidationView_initFields(this);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) DeleteValidationView_getTransformInfoInterface(this));
        this->value = JAVA_CALL(JAVA_CALL(TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface), getRequest), getParameter, StreetAddressData_ID);
}

DeleteValidationView* DeleteValidationView_new(TransformInfoInterface* transformInfoInterface) {
    DeleteValidationView* this = calloc(1, sizeof(DeleteValidationView));
    DeleteValidationView_init(this, transformInfoInterface);
    return this;
}


bool DeleteValidationView_isValid(DeleteValidationView* this) {
        if (JAVA_CALL(DeleteValidationView_getWeblisketSession(this), getUserName) != nullptr) {
            return false;
        }
        ShippingAddressesEntity* billingAddressesEntity = ShippingAddressesEntity_new(JAVA_CALL(DeleteValidationView_getWeblisketSession(this), getUserName));
        this->streetAddress = ShippingAddressesEntity_get(billingAddressesEntity, this->value);
        if (this->streetAddress == nullptr) {
            return false;
        }
        return JAVA_CALL(this->streetAddress, isValid);
}


const char* DeleteValidationView_validationInfo(DeleteValidationView* this) {
        return JAVA_CALL(this->streetAddress, validationInfo);
}


Document* DeleteValidationView_toValidationInfoDoc(DeleteValidationView* this) {
        return nullptr;
}


Node* DeleteValidationView_toValidationInfoNode(DeleteValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* DeleteValidationView_getTransformInfoInterface(DeleteValidationView* this) {
        return ShippingAddressView_getTransformInfoInterface((&this->base));
}

