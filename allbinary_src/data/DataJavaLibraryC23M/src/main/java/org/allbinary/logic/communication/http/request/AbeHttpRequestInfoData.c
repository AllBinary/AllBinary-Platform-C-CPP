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

typedef struct AbeHttpRequestInfoData AbeHttpRequestInfoData;
struct AbeHttpRequestInfoData {
    const char* HTTP_USER_AGENT;
    const char* REMOTE_ADDRESS;
    const char* REMOTE_HOST;
    const char* REMOTE_HOST_BY_ADDRESS;
    const char* REMOTE_PORT;
    const char* REQUEST_FILE_PATH;
};

static AbeHttpRequestInfoData* AbeHttpRequestInfoData_instance;

AbeHttpRequestInfoData* AbeHttpRequestInfoData_new(void);
AbeHttpRequestInfoData* AbeHttpRequestInfoData_getInstance(void);

void AbeHttpRequestInfoData_init(AbeHttpRequestInfoData* this);

// Static fields with runtime initializers: call this once at startup
void AbeHttpRequestInfoData_staticInit(void) {
    AbeHttpRequestInfoData_instance = AbeHttpRequestInfoData_new();
}

static void AbeHttpRequestInfoData_initFields(AbeHttpRequestInfoData* this) {
    this->HTTP_USER_AGENT = "HTTP_USER_AGENT";
    this->REMOTE_ADDRESS = "REMOTE_ADDRESS";
    this->REMOTE_HOST = "REMOTE_HOST";
    this->REMOTE_HOST_BY_ADDRESS = "REMOTE_HOST_BY_ADDRESS";
    this->REMOTE_PORT = "REMOTE_PORT";
    this->REQUEST_FILE_PATH = "REQUEST_FILE_PATH";
}


AbeHttpRequestInfoData* AbeHttpRequestInfoData_getInstance(void) {
        return AbeHttpRequestInfoData_instance;
}


void AbeHttpRequestInfoData_init(AbeHttpRequestInfoData* this) {
    AbeHttpRequestInfoData_initFields(this);
}

AbeHttpRequestInfoData* AbeHttpRequestInfoData_new(void) {
    AbeHttpRequestInfoData* this = calloc(1, sizeof(AbeHttpRequestInfoData));
    AbeHttpRequestInfoData_init(this);
    return this;
}

