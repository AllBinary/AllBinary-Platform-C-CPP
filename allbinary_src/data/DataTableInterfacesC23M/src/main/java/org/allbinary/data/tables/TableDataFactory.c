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
// package org.allbinary.data.tables

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonPhoneStrings.h"

typedef struct TableDataFactory TableDataFactory;
struct TableDataFactory {
    const char* INTEGER_MAX_VALUE_STRING;
    const char* ZERO_STRING;
};

static TableDataFactory* TableDataFactory_instance;

TableDataFactory* TableDataFactory_new(void);
TableDataFactory* TableDataFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void TableDataFactory_staticInit(void) {
    TableDataFactory_instance = TableDataFactory_new();
}

static void TableDataFactory_initFields(TableDataFactory* this) {
    this->INTEGER_MAX_VALUE_STRING = java_string_of(Integer_MAX_VALUE);
    this->ZERO_STRING = CommonPhoneStrings_getInstance()->ZERO;
}

void TableDataFactory_init(TableDataFactory* this) {
    TableDataFactory_initFields(this);
}

TableDataFactory* TableDataFactory_new(void) {
    TableDataFactory* this = calloc(1, sizeof(TableDataFactory));
    TableDataFactory_init(this);
    return this;
}


TableDataFactory* TableDataFactory_getInstance(void) {
        return TableDataFactory_instance;
}

