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

typedef struct OrderItemIdGenerator OrderItemIdGenerator;
struct OrderItemIdGenerator {
    UniqueIdGenerator base;
    const char* IDFILE;
};


OrderItemIdGenerator* OrderItemIdGenerator_new(void);

void OrderItemIdGenerator_init(OrderItemIdGenerator* this);

static void OrderItemIdGenerator_initFields(OrderItemIdGenerator* this) {
    this->IDFILE = "orderitemId.unq";
}


void OrderItemIdGenerator_init(OrderItemIdGenerator* this) {
    UniqueIdGenerator_init(&this->base);
    OrderItemIdGenerator_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(UniqueIdGenerator_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(UniqueIdGenerator_PATH_GLOBALS, getInstance)->INIT_PATH);
        StringMaker_append(stringBuffer, this->IDFILE);
        StringMaker_append(stringBuffer, UniqueIdGenerator_EXT);
        UniqueIdGenerator_setFile((&this->base), StringMaker_toString(stringBuffer), this->IDFILE);
}

OrderItemIdGenerator* OrderItemIdGenerator_new(void) {
    OrderItemIdGenerator* this = calloc(1, sizeof(OrderItemIdGenerator));
    OrderItemIdGenerator_init(this);
    return this;
}

