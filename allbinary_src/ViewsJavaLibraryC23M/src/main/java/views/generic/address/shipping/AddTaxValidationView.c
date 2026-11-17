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
#include "org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/address/shipping/ShippingAddressView.h"

typedef struct AddTaxValidationView AddTaxValidationView;
struct AddTaxValidationView {
    ShippingAddressView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


AddTaxValidationView* AddTaxValidationView_new(TransformInfoInterface* transformInfoInterface);

void AddTaxValidationView_init(AddTaxValidationView* this, TransformInfoInterface* transformInfoInterface);
bool AddTaxValidationView_isValid(AddTaxValidationView* this);
const char* AddTaxValidationView_validationInfo(AddTaxValidationView* this);
Document* AddTaxValidationView_toValidationInfoDoc(AddTaxValidationView* this);
Node* AddTaxValidationView_toValidationInfoNode(AddTaxValidationView* this, Document* document);
TransformInfoInterface* AddTaxValidationView_getTransformInfoInterface(AddTaxValidationView* this);

static void AddTaxValidationView_initFields(AddTaxValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void AddTaxValidationView_init(AddTaxValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ShippingAddressView_init(&this->base, transformInfoInterface);
        AddTaxValidationView_initFields(this);
}

AddTaxValidationView* AddTaxValidationView_new(TransformInfoInterface* transformInfoInterface) {
    AddTaxValidationView* this = calloc(1, sizeof(AddTaxValidationView));
    AddTaxValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
bool AddTaxValidationView_isValid(AddTaxValidationView* this) {
        JAVA_TRY {
            this->streetAddress = StreetAddress_new(AddTaxValidationView_getRequest(this));
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(AddTaxValidationView_getTransformInfoInterface(this), getStoreName));
            TaxModuleInterface* taxInterface = TaxFactory_getInstance(TaxFactory_getInstance(), this->abeClientInformation, storeFrontInterface);
            if (taxInterface == nullptr) {
                return false;
            }
            if (TaxModuleInterface_isValid(taxInterface, this->streetAddress, storeFrontInterface) == false) {
                return false;
            }
            ShippingAddressesEntity* billingAddressesEntity = ShippingAddressesEntity_new(JAVA_CALL(AddTaxValidationView_getWeblisketSession(this), getUserName));
            BasicArrayList* streetAddressList = ShippingAddressesEntity_get(billingAddressesEntity);
            if (streetAddressList == nullptr) {
                return false;
            }
            int32_t size = BasicArrayList_size(streetAddressList);
            for (int32_t index = 0; index < size; index++) {
                StreetAddress* aStreetAddress = ((StreetAddress*) BasicArrayList_get(streetAddressList, index));
                if (JAVA_CALL(StreetAddress_getName(aStreetAddress), compareTo, ShippingAddressData_TAX) == 0) {
                    return false;
                }
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws Exception
const char* AddTaxValidationView_validationInfo(AddTaxValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(AddTaxValidationView_getTransformInfoInterface(this), getStoreName));
            TaxModuleInterface* taxInterface = TaxFactory_getInstance(TaxFactory_getInstance(), this->abeClientInformation, storeFrontInterface);
            if (taxInterface == nullptr) {
                StringMaker_append(stringBuffer, "Unable to Load Tax Component<br/>");
            } else {
                if (TaxModuleInterface_isValid(taxInterface, this->streetAddress, storeFrontInterface) == false) {
                    StringMaker_append(stringBuffer, "Unable to validate address with Tax Component<br/>");
                }
            }
            ShippingAddressesEntity* billingAddressesEntity = ShippingAddressesEntity_new(JAVA_CALL(AddTaxValidationView_getWeblisketSession(this), getUserName));
            BasicArrayList* streetAddressList = ShippingAddressesEntity_get(billingAddressesEntity);
            int32_t size = BasicArrayList_size(streetAddressList);
            for (int32_t index = 0; index < size; index++) {
                StreetAddress* aStreetAddress = ((StreetAddress*) BasicArrayList_get(streetAddressList, index));
                if (JAVA_CALL(StreetAddress_getName(aStreetAddress), compareTo, ShippingAddressData_TAX) == 0) {
                    StringMaker_append(stringBuffer, "Not a valid tax location<br/>");
                }
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to create validateInfo", this, "validationInfo()", e);
            }
            return "Error Creating ValidationInfo";
        } JAVA_END_TRY;
}


Document* AddTaxValidationView_toValidationInfoDoc(AddTaxValidationView* this) {
        return nullptr;
}


Node* AddTaxValidationView_toValidationInfoNode(AddTaxValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* AddTaxValidationView_getTransformInfoInterface(AddTaxValidationView* this) {
        return ShippingAddressView_getTransformInfoInterface((&this->base));
}

