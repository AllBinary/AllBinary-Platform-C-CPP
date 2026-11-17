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
// package org.allbinary.logic.communication.http

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AcceptableResponse AcceptableResponse;
struct AcceptableResponse {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


AcceptableResponse* AcceptableResponse_new(const char* candidate, const char* tagName, int32_t index);

void AcceptableResponse_init(AcceptableResponse* this, const char* candidate, const char* tagName, int32_t index);

static void AcceptableResponse_initFields(AcceptableResponse* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void AcceptableResponse_init(AcceptableResponse* this, const char* candidate, const char* tagName, int32_t index) {
    AcceptableResponse_initFields(this);
        LogUtil_putF(this->logUtil, tagName, this, this->commonStrings->CONSTRUCTOR);
        AcceptableResponseUtil* acceptableResponseUtil = AcceptableResponseUtil_getInstance();
        JAVA_CALL(acceptableResponseUtil->candidateVector, addAt, index, candidate);
        JAVA_CALL(acceptableResponseUtil->tagNameVector, addAt, index, tagName);
}

AcceptableResponse* AcceptableResponse_new(const char* candidate, const char* tagName, int32_t index) {
    AcceptableResponse* this = calloc(1, sizeof(AcceptableResponse));
    AcceptableResponse_init(this, candidate, tagName, index);
    return this;
}

