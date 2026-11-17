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
// package org.allbinary.business.user.commerce.inventory.basket

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasketData BasketData;
struct BasketData {
    char unused;
};

const char* BasketData_BASKET = "BASKET";
const char* BasketData_NAME = "NAME";
const char* BasketData_BASKETREVIEW = "BASKET_REVIEW";
const char* BasketData_TOTALWEIGHT = "BASKET_TOTALWEIGTH";
const char* BasketData_ITEMTOTAL = "BASKET_ITEMTOTAL";
const char* BasketData_ITEMTOTALINBASKET = "BASKET_ITEMTOTALINBASKET";
const char* BasketData_SUBTOTAL = "BASKET_SUBTOTAL";
const char* BasketData_ISEMPTY = "BASKET_ISEMPTY";
const char* BasketData_INSERT = "BASKET_INSERT";
const char* BasketData_DELETE = "BASKET_DELETE";
const char* BasketData_ADJUST = "BASKET_ADJUST";

BasketData* BasketData_new(void);

void BasketData_init(BasketData* this);


void BasketData_init(BasketData* this) {
}

BasketData* BasketData_new(void) {
    BasketData* this = calloc(1, sizeof(BasketData));
    BasketData_init(this);
    return this;
}

