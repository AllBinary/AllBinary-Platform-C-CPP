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
// package org.allbinary.business.user.commerce.money

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/money/Exception.h"

typedef struct MoneyException MoneyException;
struct MoneyException {
    Exception base;
};


MoneyException* MoneyException_new(void);

void MoneyException_init(MoneyException* this);


void MoneyException_init(MoneyException* this) {
    Exception_init(&this->base);
}

MoneyException* MoneyException_new(void) {
    MoneyException* this = calloc(1, sizeof(MoneyException));
    MoneyException_init(this);
    return this;
}

