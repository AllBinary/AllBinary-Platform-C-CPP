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
// package org.allbinary.business.user.commerce.money.payment.gateway

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct PaymentGatewayPageData PaymentGatewayPageData;
struct PaymentGatewayPageData {
    const char* MAKEPAYMENT;
    const char* CHECKOUT;
    const char* SHIPPING;
    const char* SHIPPINGADDRESS;
    const char* SHIPPINGADDRESSACTION;
    const char* BILLINGADDRESS;
    const char* PAYMENT;
    const char* AUTHORIZE;
    const char* FINISH;
};

static const char* PaymentGatewayPageData_EXTENSION = ".jsp";
static const char* PaymentGatewayPageData_NAME;
const char* PaymentGatewayPageData_FORWARDMAKEPAYMENT = "MakePayment.jsp";
const char* PaymentGatewayPageData_PAYMENTOPTIONS;
const char* PaymentGatewayPageData_STARTCHECKOUT;

PaymentGatewayPageData* PaymentGatewayPageData_new(const char* location, const char* paymentMethod);

void PaymentGatewayPageData_init(PaymentGatewayPageData* this, const char* location, const char* paymentMethod);

// Static fields with runtime initializers: call this once at startup
void PaymentGatewayPageData_staticInit(void) {
    PaymentGatewayPageData_NAME = StringUtil_getInstance()->EMPTY_STRING;
    PaymentGatewayPageData_PAYMENTOPTIONS = java_concat("PaymentOptions", java_string_of(PaymentGatewayPageData_EXTENSION));
    PaymentGatewayPageData_STARTCHECKOUT = java_concat("StartCheckout", java_string_of(PaymentGatewayPageData_EXTENSION));
}

static void PaymentGatewayPageData_initFields(PaymentGatewayPageData* this) {
    
    
    
    
    
    
    
    
    
}


void PaymentGatewayPageData_init(PaymentGatewayPageData* this, const char* location, const char* paymentMethod) {
    PaymentGatewayPageData_initFields(this);
        const char* paymentMethodString = java_concat(java_string_of(PaymentGatewayPageData_NAME), paymentMethod);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, location);
        StringMaker_append(stringBuffer, "MakePayment");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->MAKEPAYMENT = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "Checkout");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->CHECKOUT = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "Shipping");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->SHIPPING = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "ShippingAddress");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->SHIPPINGADDRESS = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "ShippingAddressAction");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->SHIPPINGADDRESSACTION = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "BillingAddress");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->BILLINGADDRESS = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "Payment");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->PAYMENT = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "Authorize");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->AUTHORIZE = StringMaker_toString(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, paymentMethodString);
        StringMaker_append(stringBuffer, "PaymentFinish");
        StringMaker_append(stringBuffer, PaymentGatewayPageData_EXTENSION);
        this->FINISH = StringMaker_toString(stringBuffer);
}

PaymentGatewayPageData* PaymentGatewayPageData_new(const char* location, const char* paymentMethod) {
    PaymentGatewayPageData* this = calloc(1, sizeof(PaymentGatewayPageData));
    PaymentGatewayPageData_init(this, location, paymentMethod);
    return this;
}

