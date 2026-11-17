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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicViewData BasicViewData;
struct BasicViewData {
    const char* GENERICDIR;
    const char* USERDIR;
    const char* ADDRESSDIR;
    const char* BILLINGADDRESSDIR;
    const char* SHIPPINGADDRESSDIR;
    const char* COMMERCEDIR;
    const char* INVENTORYDIR;
    const char* BASKETDIR;
    const char* ITEMDIR;
    const char* MONEYDIR;
    const char* SHIPPINGDIR;
    const char* ORDERDIR;
    const char* ORDEREMAILDIR;
    const char* ORDERHISTORYDIR;
    const char* ORDERREVIEWDIR;
    const char* PAYMENTDIR;
    const char* GENERATIONDIR;
    const char* PRODUCTSDIR;
    const char* IGNOREXMLXSL;
    const char* REVIEWORDERVIEWXSL;
    const char* ORDERVIEWXSL;
    const char* INVENTORYXSL;
    const char* BASKETXSL;
    const char* CHECKOUTBASKETXSL;
    const char* MINIBASKETXSL;
    const char* BILLINGADDRESSCHANGEFORMXSL;
    const char* BILLINGADDRESSINPUTFORMXSL;
    const char* BILLINGADDRESSVIEWXSL;
    const char* SHIPPINGADDRESSCHANGEFORMXSL;
    const char* SHIPPINGADDRESSINPUTFORMXSL;
    const char* SHIPPINGADDRESSVIEWXSL;
    const char* NEWTAXADDRESSXSL;
    const char* EDITTAXADDRESSXSL;
    const char* SHIPPINGMETHODSXSL;
    const char* ORDERCUSTOMEREMAILVIEWXSL;
    const char* ORDERMANAGEREMAILVIEWXSL;
    const char* EDITCUSTOMERXSL;
    const char* ORDERHISTORYXSL;
    const char* PAYMENTVIEWXSL;
    const char* SUMMARYXSL;
    const char* PAYMENTGATEWAYOPTIONSXSL;
    const char* MAKEPAYMENTVIEWXSL;
};

static BasicViewData* BasicViewData_instance;

BasicViewData* BasicViewData_new(void);
BasicViewData* BasicViewData_getInstance(void);

void BasicViewData_init(BasicViewData* this);

// Static fields with runtime initializers: call this once at startup
void BasicViewData_staticInit(void) {
    BasicViewData_instance = BasicViewData_new();
}

static void BasicViewData_initFields(BasicViewData* this) {
    this->GENERICDIR = "generic/";
    this->USERDIR = java_concat(this->GENERICDIR, "user/");
    this->ADDRESSDIR = java_concat(this->USERDIR, "address/");
    this->BILLINGADDRESSDIR = java_concat(this->ADDRESSDIR, "billing/");
    this->SHIPPINGADDRESSDIR = java_concat(this->ADDRESSDIR, "shipping/");
    this->COMMERCEDIR = java_concat(this->USERDIR, "commerce/");
    this->INVENTORYDIR = java_concat(this->COMMERCEDIR, "inventory/");
    this->BASKETDIR = java_concat(this->INVENTORYDIR, "basket/");
    this->ITEMDIR = java_concat(this->INVENTORYDIR, "item/");
    this->MONEYDIR = java_concat(this->COMMERCEDIR, "money/");
    this->SHIPPINGDIR = java_concat(this->COMMERCEDIR, "shipping/");
    this->ORDERDIR = java_concat(this->INVENTORYDIR, "order/");
    this->ORDEREMAILDIR = java_concat(this->ORDERDIR, "email/");
    this->ORDERHISTORYDIR = java_concat(this->ORDERDIR, "history/");
    this->ORDERREVIEWDIR = java_concat(this->ORDERDIR, "review/");
    this->PAYMENTDIR = java_concat(this->MONEYDIR, "payment/");
    this->GENERATIONDIR = java_concat(this->GENERICDIR, "generation/");
    this->PRODUCTSDIR = java_concat(this->GENERICDIR, "products/");
    this->IGNOREXMLXSL = java_concat(this->GENERICDIR, "ignoreXmlView.xsl");
    this->REVIEWORDERVIEWXSL = java_concat(this->ORDERREVIEWDIR, "reviewOrderView.xsl");
    this->ORDERVIEWXSL = this->REVIEWORDERVIEWXSL;
    this->INVENTORYXSL = java_concat(this->INVENTORYDIR, "inventory.xsl");
    this->BASKETXSL = java_concat(this->BASKETDIR, "basket.xsl");
    this->CHECKOUTBASKETXSL = java_concat(this->BASKETDIR, "staticBasket.xsl");
    this->MINIBASKETXSL = java_concat(this->BASKETDIR, "miniBasket.xsl");
    this->BILLINGADDRESSCHANGEFORMXSL = java_concat(this->BILLINGADDRESSDIR, "billingAddressChangeForm.xsl");
    this->BILLINGADDRESSINPUTFORMXSL = java_concat(this->BILLINGADDRESSDIR, "billingAddressInputForm.xsl");
    this->BILLINGADDRESSVIEWXSL = java_concat(this->BILLINGADDRESSDIR, "billingAddressView.xsl");
    this->SHIPPINGADDRESSCHANGEFORMXSL = java_concat(this->SHIPPINGADDRESSDIR, "shippingAddressChangeForm.xsl");
    this->SHIPPINGADDRESSINPUTFORMXSL = java_concat(this->SHIPPINGADDRESSDIR, "shippingAddressInputForm.xsl");
    this->SHIPPINGADDRESSVIEWXSL = java_concat(this->SHIPPINGADDRESSDIR, "shippingAddressView.xsl");
    this->NEWTAXADDRESSXSL = java_concat(this->SHIPPINGADDRESSDIR, "newTaxAddressView.xsl");
    this->EDITTAXADDRESSXSL = java_concat(this->SHIPPINGADDRESSDIR, "editTaxAddressView.xsl");
    this->SHIPPINGMETHODSXSL = java_concat(this->SHIPPINGDIR, "shippingMethods.xsl");
    this->ORDERCUSTOMEREMAILVIEWXSL = java_concat(this->ORDEREMAILDIR, "orderCustomerEmailView.xsl");
    this->ORDERMANAGEREMAILVIEWXSL = java_concat(this->ORDEREMAILDIR, "orderManagerEmailView.xsl");
    this->EDITCUSTOMERXSL = java_concat(this->USERDIR, "editCustomerInputForm.xsl");
    this->ORDERHISTORYXSL = java_concat(this->ORDERHISTORYDIR, "orderHistory.xsl");
    this->PAYMENTVIEWXSL = java_concat(this->PAYMENTDIR, "paymentView.xsl");
    this->SUMMARYXSL = java_concat(this->ITEMDIR, "summary/summary.xsl");
    this->PAYMENTGATEWAYOPTIONSXSL = java_concat(this->PAYMENTDIR, "paymentGatewayOptions.xsl");
    this->MAKEPAYMENTVIEWXSL = java_concat(java_concat(this->PAYMENTDIR, "invoice/"), "makePayment.xsl");
}


BasicViewData* BasicViewData_getInstance(void) {
        return BasicViewData_instance;
}


void BasicViewData_init(BasicViewData* this) {
    BasicViewData_initFields(this);
}

BasicViewData* BasicViewData_new(void) {
    BasicViewData* this = calloc(1, sizeof(BasicViewData));
    BasicViewData_init(this);
    return this;
}

