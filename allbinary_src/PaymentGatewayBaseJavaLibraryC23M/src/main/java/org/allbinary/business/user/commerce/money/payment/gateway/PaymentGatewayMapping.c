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
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"

typedef struct PaymentGatewayMapping PaymentGatewayMapping;
struct PaymentGatewayMapping {
    TableMappingInterface TableMappingInterface_interface;
    PaymentGatewayInterface* paymentGatewayInterface;
};


PaymentGatewayMapping* PaymentGatewayMapping_new(PaymentGatewayInterface* paymentGatewayInterface);

void PaymentGatewayMapping_init(PaymentGatewayMapping* this, PaymentGatewayInterface* paymentGatewayInterface);
HashMap* PaymentGatewayMapping_toHashMap(PaymentGatewayMapping* this);
BasicArrayList* PaymentGatewayMapping_toVector(PaymentGatewayMapping* this);
Any* PaymentGatewayMapping_getKey(PaymentGatewayMapping* this);

static void PaymentGatewayMapping_initFields(PaymentGatewayMapping* this) {
    
}


void PaymentGatewayMapping_init(PaymentGatewayMapping* this, PaymentGatewayInterface* paymentGatewayInterface) {
    PaymentGatewayMapping_initFields(this);
        this->paymentGatewayInterface = paymentGatewayInterface;
}

PaymentGatewayMapping* PaymentGatewayMapping_new(PaymentGatewayInterface* paymentGatewayInterface) {
    PaymentGatewayMapping* this = calloc(1, sizeof(PaymentGatewayMapping));
    PaymentGatewayMapping_init(this, paymentGatewayInterface);
    return this;
}


// throws Exception
HashMap* PaymentGatewayMapping_toHashMap(PaymentGatewayMapping* this) {
        return PaymentGatewayInterface_toHashMap(this->paymentGatewayInterface, false);
}


BasicArrayList* PaymentGatewayMapping_toVector(PaymentGatewayMapping* this) {
        return PaymentGatewayInterface_toVector(this->paymentGatewayInterface, false);
}


// throws Exception
Any* PaymentGatewayMapping_getKey(PaymentGatewayMapping* this) {
        return ((Any*) PaymentGatewayInterface_getKey(this->paymentGatewayInterface));
}

