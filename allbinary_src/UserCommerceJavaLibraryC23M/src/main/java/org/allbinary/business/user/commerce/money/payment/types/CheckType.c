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
// package org.allbinary.business.user.commerce.money.payment.types

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CheckType CheckType;
struct CheckType {
    const char** types;
};


CheckType* CheckType_new(void);

void CheckType_init(CheckType* this);

static void CheckType_initFields(CheckType* this) {
    this->types = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Check", "Money Order", "Cashiers Check" }) / sizeof(const char*), (const char*[]){ "Check", "Money Order", "Cashiers Check" }));
}


void CheckType_init(CheckType* this) {
    CheckType_initFields(this);
}

CheckType* CheckType_new(void) {
    CheckType* this = calloc(1, sizeof(CheckType));
    CheckType_init(this);
    return this;
}

