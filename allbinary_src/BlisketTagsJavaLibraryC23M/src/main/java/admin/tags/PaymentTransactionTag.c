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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "admin/taghelpers/PaymentTransactionHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct PaymentTransactionTag PaymentTransactionTag;
struct PaymentTransactionTag {
    TableTag base;
};


PaymentTransactionTag* PaymentTransactionTag_new(void);

void PaymentTransactionTag_init(PaymentTransactionTag* this);


void PaymentTransactionTag_init(PaymentTransactionTag* this) {
    TableTag_init(&this->base);
        PaymentTransactionTag_setTagHelperFactory(this, PaymentTransactionHelperFactory_new());
        PaymentTransactionTag_setTagRequestHelperFactory(this, PaymentTransactionHelperFactory_new());
}

PaymentTransactionTag* PaymentTransactionTag_new(void) {
    PaymentTransactionTag* this = calloc(1, sizeof(PaymentTransactionTag));
    PaymentTransactionTag_init(this);
    return this;
}

