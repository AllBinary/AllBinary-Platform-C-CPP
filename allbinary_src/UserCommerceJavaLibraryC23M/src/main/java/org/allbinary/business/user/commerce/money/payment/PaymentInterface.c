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
// package org.allbinary.business.user.commerce.money.payment

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PaymentInterface PaymentInterface;
struct PaymentInterface {
    void (*setName)(void* this, const char* value);
    void (*setType)(void* this, const char* value);
    void (*setExpiration)(void* this, const char* value);
    void (*setNumber)(void* this, const char* value);
    const char* (*getId)(void* this);
    const char* (*getName)(void* this);
    const char* (*getType)(void* this);
    const char* (*getExpiration)(void* this);
    const char* (*getEncryption)(void* this);
    const char* (*getNumber)(void* this);
    const char* (*getLastFour)(void* this);
    bool (*isDefault)(void* this);
};


