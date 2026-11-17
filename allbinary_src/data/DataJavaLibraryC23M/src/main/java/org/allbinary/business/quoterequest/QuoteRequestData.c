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
// package org.allbinary.business.quoterequest

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct QuoteRequestData QuoteRequestData;
struct QuoteRequestData {
    const char* ID;
    const char* PROJECT_INFO;
    const char* CUSTOMER_COMMENTS;
    const char* BUDGET;
    const char* TIMEFRAME;
    const char* COMMENTS;
};

static QuoteRequestData* QuoteRequestData_instance;

QuoteRequestData* QuoteRequestData_new(void);
QuoteRequestData* QuoteRequestData_getInstance(void);

void QuoteRequestData_init(QuoteRequestData* this);

// Static fields with runtime initializers: call this once at startup
void QuoteRequestData_staticInit(void) {
    QuoteRequestData_instance = QuoteRequestData_new();
}

static void QuoteRequestData_initFields(QuoteRequestData* this) {
    this->ID = "QUOTEREQUEST_ID";
    this->PROJECT_INFO = "QUOTEREQUEST_PROJECT_INFO";
    this->CUSTOMER_COMMENTS = "QUOTEREQUEST_CUSTOMER_COMMENTS";
    this->BUDGET = "QUOTEREQUEST_BUDGET";
    this->TIMEFRAME = "QUOTEREQUEST_TIMEFRAME";
    this->COMMENTS = "QUOTEREQUEST_COMMENTS";
}


QuoteRequestData* QuoteRequestData_getInstance(void) {
        return QuoteRequestData_instance;
}


void QuoteRequestData_init(QuoteRequestData* this) {
    QuoteRequestData_initFields(this);
}

QuoteRequestData* QuoteRequestData_new(void) {
    QuoteRequestData* this = calloc(1, sizeof(QuoteRequestData));
    QuoteRequestData_init(this);
    return this;
}

