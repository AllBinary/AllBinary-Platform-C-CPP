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
// #include "javax/servlet/ServletRequest.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PaymentFactory PaymentFactory;
struct PaymentFactory {
    char unused;
};


PaymentFactory* PaymentFactory_new(void);

void PaymentFactory_init(PaymentFactory* this);
PaymentInterface* PaymentFactory_getInstance(ServletRequest* request);


void PaymentFactory_init(PaymentFactory* this) {
}

PaymentFactory* PaymentFactory_new(void) {
    PaymentFactory* this = calloc(1, sizeof(PaymentFactory));
    PaymentFactory_init(this);
    return this;
}


PaymentInterface* PaymentFactory_getInstance(ServletRequest* request) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return ((PaymentInterface*) Payment_new(request));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->FACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "PaymentFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

