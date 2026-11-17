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
// package org.allbinary.data.tables.user.commerce.money.payment.transaction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h"
#include "org/allbinary/data/tables/BasicDataTableInterface.h"

typedef struct TransactionResultEntityInterface TransactionResultEntityInterface;
struct TransactionResultEntityInterface {
    TransactionResultInterface* (*getTransactionResultInterface)(void* this, const char* orderNumber);
    void (*remove)(void* this, const char* userName, const char* orderNumber);
    void (*add)(void* this, const char* userName, const char* orderNumber, TransactionResultInterface* resultInterface);
};


