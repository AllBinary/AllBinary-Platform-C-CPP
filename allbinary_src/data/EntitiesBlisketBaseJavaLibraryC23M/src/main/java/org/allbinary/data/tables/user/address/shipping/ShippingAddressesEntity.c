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
// package org.allbinary.data.tables.user.address.shipping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tables/user/address/StreetAddressesEntity.h"

typedef struct ShippingAddressesEntity ShippingAddressesEntity;
struct ShippingAddressesEntity {
    StreetAddressesEntity base;
    const char* TABLENAME;
};


ShippingAddressesEntity* ShippingAddressesEntity_new(const char* userName);

void ShippingAddressesEntity_init(ShippingAddressesEntity* this, const char* userName);

static void ShippingAddressesEntity_initFields(ShippingAddressesEntity* this) {
    this->TABLENAME = "shipping";
}


void ShippingAddressesEntity_init(ShippingAddressesEntity* this, const char* userName) {
        StreetAddressesEntity_init(&this->base, userName);
        ShippingAddressesEntity_initFields(this);
        ShippingAddressesEntity_setTableName(this, this->TABLENAME);
}

ShippingAddressesEntity* ShippingAddressesEntity_new(const char* userName) {
    ShippingAddressesEntity* this = calloc(1, sizeof(ShippingAddressesEntity));
    ShippingAddressesEntity_init(this, userName);
    return this;
}

