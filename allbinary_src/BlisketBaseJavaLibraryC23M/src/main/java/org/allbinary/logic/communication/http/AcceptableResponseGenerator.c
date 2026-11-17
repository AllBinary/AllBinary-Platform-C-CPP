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
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AcceptableResponseGenerator AcceptableResponseGenerator;
struct AcceptableResponseGenerator {
    LogUtil* logUtil;
};

static AcceptableResponseGenerator* AcceptableResponseGenerator_instance;

AcceptableResponseGenerator* AcceptableResponseGenerator_new(void);
AcceptableResponseGenerator* AcceptableResponseGenerator_getInstance(void);

void AcceptableResponseGenerator_init(AcceptableResponseGenerator* this);
const char* AcceptableResponseGenerator_get(AcceptableResponseGenerator* this, HttpServletRequest* httpServletRequest);

// Static fields with runtime initializers: call this once at startup
void AcceptableResponseGenerator_staticInit(void) {
    AcceptableResponseGenerator_instance = AcceptableResponseGenerator_new();
}

static void AcceptableResponseGenerator_initFields(AcceptableResponseGenerator* this) {
    this->logUtil = LogUtil_getInstance();
}


AcceptableResponseGenerator* AcceptableResponseGenerator_getInstance(void) {
        return AcceptableResponseGenerator_instance;
}


void AcceptableResponseGenerator_init(AcceptableResponseGenerator* this) {
    AcceptableResponseGenerator_initFields(this);
}

AcceptableResponseGenerator* AcceptableResponseGenerator_new(void) {
    AcceptableResponseGenerator* this = calloc(1, sizeof(AcceptableResponseGenerator));
    AcceptableResponseGenerator_init(this);
    return this;
}


// throws Exception
const char* AcceptableResponseGenerator_get(AcceptableResponseGenerator* this, HttpServletRequest* httpServletRequest) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            AcceptableResponseUtil* acceptableResponseUtil = AcceptableResponseUtil_getInstance();
            const char* acceptable = HttpServletRequest_getHeader(httpServletRequest, "accept");
            const char* result = AcceptableResponseUtil_getTagName(acceptableResponseUtil, 0);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTP)) {
                LogUtil_putF(this->logUtil, java_concat("Request Type: ", acceptable), this, commonStrings->GET);
            }
            if (acceptable != nullptr) {
                int32_t size = AcceptableResponseUtil_size(acceptableResponseUtil);
                for (int32_t index = 0; index < size; index++) {
                    if (strcmp(acceptable, AcceptableResponseUtil_get(acceptableResponseUtil, index)) == 0) {
                        result = AcceptableResponseUtil_getTagName(acceptableResponseUtil, index);
                    }
                }
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTP)) {
                LogUtil_putF(this->logUtil, java_concat("Response Type: ", result), this, commonStrings->GET);
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

