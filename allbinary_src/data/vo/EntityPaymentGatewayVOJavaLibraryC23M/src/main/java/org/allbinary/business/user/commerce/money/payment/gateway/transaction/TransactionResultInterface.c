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
// package org.allbinary.business.user.commerce.money.payment.gateway.transaction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct TransactionResultInterface TransactionResultInterface;
struct TransactionResultInterface {
    const char* (*toString)(void* this);
    BasicArrayList* (*getValues)(void* this);
    const char* (*getResult)(void* this);
    const char* (*getPnRef)(void* this);
    const char* (*getRespMsg)(void* this);
    const char* (*getAvsAddr)(void* this);
    const char* (*getAvsZip)(void* this);
    const char* (*getOrigResult)(void* this);
    const char* (*getStatus)(void* this);
    const char* (*getFraudCode)(void* this);
    const char* (*getFraudMsg)(void* this);
    const char* (*getErrCode)(void* this);
    const char* (*getScore)(void* this);
    const char* (*getReason1)(void* this);
    const char* (*getReason2)(void* this);
    const char* (*getReason3)(void* this);
    const char* (*getException1)(void* this);
    const char* (*getException2)(void* this);
    const char* (*getException3)(void* this);
    const char* (*getException4)(void* this);
    const char* (*getException5)(void* this);
    const char* (*getException6)(void* this);
    const char* (*getException7)(void* this);
};


