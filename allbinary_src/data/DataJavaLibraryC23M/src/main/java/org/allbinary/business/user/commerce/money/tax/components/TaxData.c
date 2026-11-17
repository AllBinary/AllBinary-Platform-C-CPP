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
// package org.allbinary.business.user.commerce.money.tax.components

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TaxData TaxData;
struct TaxData {
    char unused;
};

const char* TaxData_NAME = "TAX_NAME";
const char* TaxData_RATE = "TAX_RATE";

TaxData* TaxData_new(void);

void TaxData_init(TaxData* this);


void TaxData_init(TaxData* this) {
}

TaxData* TaxData_new(void) {
    TaxData* this = calloc(1, sizeof(TaxData));
    TaxData_init(this);
    return this;
}

