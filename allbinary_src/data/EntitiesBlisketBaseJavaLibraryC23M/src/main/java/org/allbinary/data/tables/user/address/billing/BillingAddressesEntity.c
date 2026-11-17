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
// package org.allbinary.data.tables.user.address.billing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tables/user/address/StreetAddressesEntity.h"

typedef struct BillingAddressesEntity BillingAddressesEntity;
struct BillingAddressesEntity {
    StreetAddressesEntity base;
    const char* TABLENAME;
};


BillingAddressesEntity* BillingAddressesEntity_new(const char* userName);

void BillingAddressesEntity_init(BillingAddressesEntity* this, const char* userName);

static void BillingAddressesEntity_initFields(BillingAddressesEntity* this) {
    this->TABLENAME = "billing";
}


void BillingAddressesEntity_init(BillingAddressesEntity* this, const char* userName) {
        StreetAddressesEntity_init(&this->base, userName);
        BillingAddressesEntity_initFields(this);
        BillingAddressesEntity_setTableName(this, this->TABLENAME);
}

BillingAddressesEntity* BillingAddressesEntity_new(const char* userName) {
    BillingAddressesEntity* this = calloc(1, sizeof(BillingAddressesEntity));
    BillingAddressesEntity_init(this, userName);
    return this;
}

