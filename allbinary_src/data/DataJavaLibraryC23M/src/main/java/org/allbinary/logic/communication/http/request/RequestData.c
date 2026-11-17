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
// package org.allbinary.logic.communication.http.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RequestData RequestData;
struct RequestData {
    char unused;
};

const char* RequestData_REQUEST = "REQUESTDATA_REQUEST";
const char* RequestData_PARAMETER = "REQUESTDATA_PARAMETER";
const char* RequestData_VIEWS = "REQUESTDATA_VIEWS";
const char* RequestData_VISITORS = "REQUESTDATA_VISITORS";

RequestData* RequestData_new(void);

void RequestData_init(RequestData* this);


void RequestData_init(RequestData* this) {
}

RequestData* RequestData_new(void) {
    RequestData* this = calloc(1, sizeof(RequestData));
    RequestData_init(this);
    return this;
}

