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

typedef struct PaymentGatewayData PaymentGatewayData;
struct PaymentGatewayData {
    const char* key;
};

constexpr int32_t PaymentGatewayData_CRYPTNUM = 5;
PaymentGatewayData* PaymentGatewayData_ID;
PaymentGatewayData* PaymentGatewayData_NAME;
PaymentGatewayData* PaymentGatewayData_VALUE;
PaymentGatewayData* PaymentGatewayData_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE;
PaymentGatewayData* PaymentGatewayData_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE;
PaymentGatewayData* PaymentGatewayData_MODE;
PaymentGatewayData* PaymentGatewayData_SERVERPROTOCOL;
PaymentGatewayData* PaymentGatewayData_SERVER;
PaymentGatewayData* PaymentGatewayData_SERVERPORT;
PaymentGatewayData* PaymentGatewayData_SERVERPATH;
PaymentGatewayData* PaymentGatewayData_TESTPROTOCOL;
PaymentGatewayData* PaymentGatewayData_TESTSERVER;
PaymentGatewayData* PaymentGatewayData_TESTPORT;
PaymentGatewayData* PaymentGatewayData_TESTPATH;
PaymentGatewayData* PaymentGatewayData_TIMEOUT;
PaymentGatewayData* PaymentGatewayData_PROXYPROTOCOL;
PaymentGatewayData* PaymentGatewayData_PROXYSERVER;
PaymentGatewayData* PaymentGatewayData_PROXYPATH;
PaymentGatewayData* PaymentGatewayData_PROXYUSERNAME;
PaymentGatewayData* PaymentGatewayData_PROXYPASSWORD;
PaymentGatewayData* PaymentGatewayData_PROXYPORT;
PaymentGatewayData* PaymentGatewayData_PROXYTIMEOUT;
PaymentGatewayData* PaymentGatewayData_SPECIAL1;
PaymentGatewayData* PaymentGatewayData_SPECIAL2;
PaymentGatewayData* PaymentGatewayData_SPECIAL3;
PaymentGatewayData* PaymentGatewayData_SPECIAL4;
PaymentGatewayData* PaymentGatewayData_SPECIAL5;
PaymentGatewayData* PaymentGatewayData_SPECIAL6;
PaymentGatewayData* PaymentGatewayData_SPECIAL7;
PaymentGatewayData* PaymentGatewayData_SPECIAL8;
PaymentGatewayData* PaymentGatewayData_SPECIAL9;

PaymentGatewayData* PaymentGatewayData_new(const char* value);

void PaymentGatewayData_init(PaymentGatewayData* this, const char* value);
const char* PaymentGatewayData_toString(PaymentGatewayData* this);

// Static fields with runtime initializers: call this once at startup
void PaymentGatewayData_staticInit(void) {
    PaymentGatewayData_ID = PaymentGatewayData_new("PAYMENTGATEWAY_ID");
    PaymentGatewayData_NAME = PaymentGatewayData_new("PAYMENTGATEWAY_NAME");
    PaymentGatewayData_VALUE = PaymentGatewayData_new("PAYMENTGATEWAY_VALUE");
    PaymentGatewayData_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE = PaymentGatewayData_new("PAYMENTGATEWAY_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE");
    PaymentGatewayData_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE = PaymentGatewayData_new("PAYMENTGATEWAY_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE");
    PaymentGatewayData_MODE = PaymentGatewayData_new("MODE");
    PaymentGatewayData_SERVERPROTOCOL = PaymentGatewayData_new("SERVERPROTOCOL");
    PaymentGatewayData_SERVER = PaymentGatewayData_new("SERVER");
    PaymentGatewayData_SERVERPORT = PaymentGatewayData_new("SERVERPORT");
    PaymentGatewayData_SERVERPATH = PaymentGatewayData_new("SERVERPATH");
    PaymentGatewayData_TESTPROTOCOL = PaymentGatewayData_new("TESTSERVERPROTOCOL");
    PaymentGatewayData_TESTSERVER = PaymentGatewayData_new("TESTSERVER");
    PaymentGatewayData_TESTPORT = PaymentGatewayData_new("TESTPORT");
    PaymentGatewayData_TESTPATH = PaymentGatewayData_new("TESTSERVERPATH");
    PaymentGatewayData_TIMEOUT = PaymentGatewayData_new("TIMEOUT");
    PaymentGatewayData_PROXYPROTOCOL = PaymentGatewayData_new("PROXYPROTOCOL");
    PaymentGatewayData_PROXYSERVER = PaymentGatewayData_new("PROXYSERVER");
    PaymentGatewayData_PROXYPATH = PaymentGatewayData_new("PROXYPATH");
    PaymentGatewayData_PROXYUSERNAME = PaymentGatewayData_new("PROXYUSERNAME");
    PaymentGatewayData_PROXYPASSWORD = PaymentGatewayData_new("PROXYPASSWORD");
    PaymentGatewayData_PROXYPORT = PaymentGatewayData_new("PROXYPORT");
    PaymentGatewayData_PROXYTIMEOUT = PaymentGatewayData_new("PROXYTIMEOUT");
    PaymentGatewayData_SPECIAL1 = PaymentGatewayData_new("SPECIAL1");
    PaymentGatewayData_SPECIAL2 = PaymentGatewayData_new("SPECIAL2");
    PaymentGatewayData_SPECIAL3 = PaymentGatewayData_new("SPECIAL3");
    PaymentGatewayData_SPECIAL4 = PaymentGatewayData_new("SPECIAL4");
    PaymentGatewayData_SPECIAL5 = PaymentGatewayData_new("SPECIAL5");
    PaymentGatewayData_SPECIAL6 = PaymentGatewayData_new("SPECIAL6");
    PaymentGatewayData_SPECIAL7 = PaymentGatewayData_new("SPECIAL7");
    PaymentGatewayData_SPECIAL8 = PaymentGatewayData_new("SPECIAL8");
    PaymentGatewayData_SPECIAL9 = PaymentGatewayData_new("SPECIAL9");
}

static void PaymentGatewayData_initFields(PaymentGatewayData* this) {
    
}


void PaymentGatewayData_init(PaymentGatewayData* this, const char* value) {
    PaymentGatewayData_initFields(this);
        this->key = value;
}

PaymentGatewayData* PaymentGatewayData_new(const char* value) {
    PaymentGatewayData* this = calloc(1, sizeof(PaymentGatewayData));
    PaymentGatewayData_init(this, value);
    return this;
}


const char* PaymentGatewayData_toString(PaymentGatewayData* this) {
        return this->key;
}

