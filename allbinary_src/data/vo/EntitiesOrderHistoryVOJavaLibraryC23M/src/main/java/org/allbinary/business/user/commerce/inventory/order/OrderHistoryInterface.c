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
// package org.allbinary.business.user.commerce.inventory.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/payment/Payment.h"

typedef struct OrderHistoryInterface OrderHistoryInterface;
struct OrderHistoryInterface {
    void (*setUserName)(void* this, const char* value);
    void (*setDefaultShippingAddress)(void* this, StreetAddress* shippingAddress);
    void (*setBillingAddress)(void* this, StreetAddress* billingAddress);
    void (*setPaymentInfo)(void* this, Payment* payment);
    void (*setShipDate)(void* this, const char* value);
    void (*setOrderDate)(void* this, const char* value);
    void (*setTransDate)(void* this, const char* value);
    void (*setCancelDate)(void* this, const char* value);
    void (*setStatus)(void* this, const char* value);
    void (*setSubTotal)(void* this, Money* value);
    void (*setShippingCost)(void* this, Money* value);
    void (*setTaxes)(void* this, Money* value);
    void (*setTotal)(void* this, Money* value);
    const char* (*getUserName)(void* this);
    StreetAddress* (*getShippingAddress)(void* this);
    StreetAddress* (*getBillingAddress)(void* this);
    Payment* (*getPaymentInfo)(void* this);
    const char* (*getShipDate)(void* this);
    const char* (*getOrderDate)(void* this);
    const char* (*getTransDate)(void* this);
    const char* (*getCancelDate)(void* this);
    const char* (*getStatus)(void* this);
    Money* (*getSubTotal)(void* this);
    Money* (*getShippingCost)(void* this);
    Money* (*getTaxes)(void* this);
    Money* (*getTotal)(void* this);
    const char* (*getPaymentMethod)(void* this);
};


