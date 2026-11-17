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
#include "admin/taghelpers/PaymentTransactionResultHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct PaymentTransactionResultTag PaymentTransactionResultTag;
struct PaymentTransactionResultTag {
    TableTag base;
};


PaymentTransactionResultTag* PaymentTransactionResultTag_new(void);

void PaymentTransactionResultTag_init(PaymentTransactionResultTag* this);


void PaymentTransactionResultTag_init(PaymentTransactionResultTag* this) {
    TableTag_init(&this->base);
        PaymentTransactionResultTag_setTagHelperFactory(this, PaymentTransactionResultHelperFactory_new());
        PaymentTransactionResultTag_setTagRequestHelperFactory(this, PaymentTransactionResultHelperFactory_new());
}

PaymentTransactionResultTag* PaymentTransactionResultTag_new(void) {
    PaymentTransactionResultTag* this = calloc(1, sizeof(PaymentTransactionResultTag));
    PaymentTransactionResultTag_init(this);
    return this;
}

