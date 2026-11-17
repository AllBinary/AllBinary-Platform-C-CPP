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

typedef struct PaymentGatewayEncryptedMapping PaymentGatewayEncryptedMapping;
struct PaymentGatewayEncryptedMapping {
    TableMappingInterface TableMappingInterface_interface;
    PaymentGatewayInterface* paymentGatewayInterface;
};


PaymentGatewayEncryptedMapping* PaymentGatewayEncryptedMapping_new(PaymentGatewayInterface* paymentGatewayInterface);

void PaymentGatewayEncryptedMapping_init(PaymentGatewayEncryptedMapping* this, PaymentGatewayInterface* paymentGatewayInterface);
HashMap* PaymentGatewayEncryptedMapping_toHashMap(PaymentGatewayEncryptedMapping* this);
BasicArrayList* PaymentGatewayEncryptedMapping_toVector(PaymentGatewayEncryptedMapping* this);
Any* PaymentGatewayEncryptedMapping_getKey(PaymentGatewayEncryptedMapping* this);

static void PaymentGatewayEncryptedMapping_initFields(PaymentGatewayEncryptedMapping* this) {
    
}


void PaymentGatewayEncryptedMapping_init(PaymentGatewayEncryptedMapping* this, PaymentGatewayInterface* paymentGatewayInterface) {
    PaymentGatewayEncryptedMapping_initFields(this);
        this->paymentGatewayInterface = paymentGatewayInterface;
}

PaymentGatewayEncryptedMapping* PaymentGatewayEncryptedMapping_new(PaymentGatewayInterface* paymentGatewayInterface) {
    PaymentGatewayEncryptedMapping* this = calloc(1, sizeof(PaymentGatewayEncryptedMapping));
    PaymentGatewayEncryptedMapping_init(this, paymentGatewayInterface);
    return this;
}


// throws Exception
HashMap* PaymentGatewayEncryptedMapping_toHashMap(PaymentGatewayEncryptedMapping* this) {
        return PaymentGatewayInterface_toHashMap(this->paymentGatewayInterface, true);
}


BasicArrayList* PaymentGatewayEncryptedMapping_toVector(PaymentGatewayEncryptedMapping* this) {
        return PaymentGatewayInterface_toVector(this->paymentGatewayInterface, true);
}


// throws Exception
Any* PaymentGatewayEncryptedMapping_getKey(PaymentGatewayEncryptedMapping* this) {
        return ((Any*) PaymentGatewayInterface_getKey(this->paymentGatewayInterface));
}

