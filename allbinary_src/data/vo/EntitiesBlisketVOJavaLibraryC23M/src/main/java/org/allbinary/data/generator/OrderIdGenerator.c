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
// package org.allbinary.data.generator

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/data/generator/UniqueIdGenerator.h"

typedef struct OrderIdGenerator OrderIdGenerator;
struct OrderIdGenerator {
    UniqueIdGenerator base;
    const char* IDFILE;
};


OrderIdGenerator* OrderIdGenerator_new(void);

void OrderIdGenerator_init(OrderIdGenerator* this);

static void OrderIdGenerator_initFields(OrderIdGenerator* this) {
    this->IDFILE = "orderId";
}


void OrderIdGenerator_init(OrderIdGenerator* this) {
    UniqueIdGenerator_init(&this->base);
    OrderIdGenerator_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(UniqueIdGenerator_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(UniqueIdGenerator_PATH_GLOBALS, getInstance)->INIT_PATH);
        StringMaker_append(stringBuffer, this->IDFILE);
        StringMaker_append(stringBuffer, UniqueIdGenerator_EXT);
        UniqueIdGenerator_setFile((&this->base), StringMaker_toString(stringBuffer), this->IDFILE);
}

OrderIdGenerator* OrderIdGenerator_new(void) {
    OrderIdGenerator* this = calloc(1, sizeof(OrderIdGenerator));
    OrderIdGenerator_init(this);
    return this;
}

