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
// package views.generic.shipping

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
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/tax/TaxFactory.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethods.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h"
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"
#include "org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct ShippingMethodsView ShippingMethodsView;
struct ShippingMethodsView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    ShippingMethods* shippingMethods;
    StoreFrontInterface* storeFrontInterface;
};


ShippingMethodsView* ShippingMethodsView_new(TransformInfoInterface* transformInfoInterface);

void ShippingMethodsView_init(ShippingMethodsView* this, TransformInfoInterface* transformInfoInterface);
Node* ShippingMethodsView_toXmlNode(ShippingMethodsView* this, Document* document);
void ShippingMethodsView_addDomNodeInterfaces(ShippingMethodsView* this);
const char* ShippingMethodsView_view(ShippingMethodsView* this);

static void ShippingMethodsView_initFields(ShippingMethodsView* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void ShippingMethodsView_init(ShippingMethodsView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        ShippingMethodsView_initFields(this);
        this->storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(ShippingMethodsView_getTransformInfoInterface(this), getStoreName));
        this->shippingMethods = ShippingMethods_new(this->abeClientInformation, this->storeFrontInterface);
}

ShippingMethodsView* ShippingMethodsView_new(TransformInfoInterface* transformInfoInterface) {
    ShippingMethodsView* this = calloc(1, sizeof(ShippingMethodsView));
    ShippingMethodsView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* ShippingMethodsView_toXmlNode(ShippingMethodsView* this, Document* document) {
        JAVA_TRY {
            Node* shippingMethodsNode = Document_createElement(document, ShippingMethodsData_SHIPPINGMETHODSORDERSUMMARIES);
            OrderInterface* order = JAVA_CALL(ShippingMethodsView_getWeblisketSession(this), getOrder);
            BasketInterface* basket = JAVA_CALL(JAVA_CALL(ShippingMethodsView_getWeblisketSession(this), getOrder), getBasket);
            StreetAddressesEntityInterface* shippingAddressesEntityInterface = ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory_getInstance(), JAVA_CALL(ShippingMethodsView_getWeblisketSession(this), getUserName));
            StreetAddress* streetAddress = StreetAddressesEntityInterface_getDefault(shippingAddressesEntityInterface);
            BasicArrayList* shippingVector = ShippingMethods_get(this->shippingMethods);
            int32_t size = BasicArrayList_size(shippingVector);
            for (int32_t index = 0; index < size; index++) {
                Node* shippingMethodNode = Document_createElement(document, ShippingMethodsData_SHIPPINGMETHODORDERSUMMARY);
                ShippingInterface* shipping = ((ShippingInterface*) BasicArrayList_get(shippingVector, index));
                DomNodeInterface* shippingView = ((DomNodeInterface*) shipping);
                Node_appendChild(shippingMethodNode, DomNodeInterface_toXmlNode(shippingView, document));
                Money* shippingCost = ShippingInterface_getCost(shipping, order);
                Money* subTotal = BasketInterface_getSubTotal(basket);
                float taxRate = JAVA_CALL(TaxFactory_getInstance(TaxFactory_getInstance(), this->abeClientInformation, this->storeFrontInterface), getTaxRate, streetAddress, this->storeFrontInterface);
                Money* tax = Money_new();
                Money* total = Money_new();
                Money_add(total, Money_toString(shippingCost));
                Money_add(total, Money_toString(subTotal));
                Money_add(tax, Money_toString(total));
                Money_multiply(tax, taxRate);
                Money_add(total, Money_toString(tax));
                Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodsData_SHIPPINGCOST, Money_toString(shippingCost)));
                Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodsData_TAXRATE, Float_toString(taxRate)));
                Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodsData_SUBTOTAL, Money_toString(subTotal)));
                Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodsData_TAX, Money_toString(tax)));
                Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, ShippingMethodsData_TOTAL, Money_toString(total)));
                Node_appendChild(shippingMethodNode, ModDomHelper_createNameValueNodes(document, EntryData_getInstance()->DEFAULT, JAVA_CALL(ShippingMethods_getDefault(this->shippingMethods), getName)));
                Node_appendChild(shippingMethodsNode, shippingMethodNode);
            }
            return shippingMethodsNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void ShippingMethodsView_addDomNodeInterfaces(ShippingMethodsView* this) {
        ShippingMethodsView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


const char* ShippingMethodsView_view(ShippingMethodsView* this) {
        JAVA_TRY {
            ShippingMethodsView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view ShippingMethods";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            return error;
        } JAVA_END_TRY;
}

