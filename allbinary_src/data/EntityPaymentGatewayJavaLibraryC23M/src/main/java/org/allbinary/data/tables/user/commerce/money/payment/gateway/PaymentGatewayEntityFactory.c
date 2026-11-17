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
// package org.allbinary.data.tables.user.commerce.money.payment.gateway

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

typedef struct PaymentGatewayEntityFactory PaymentGatewayEntityFactory;
struct PaymentGatewayEntityFactory {
    char unused;
};


PaymentGatewayEntityFactory* PaymentGatewayEntityFactory_new(void);

void PaymentGatewayEntityFactory_init(PaymentGatewayEntityFactory* this);
PaymentGatewayEntity* PaymentGatewayEntityFactory_getInstance(void);


void PaymentGatewayEntityFactory_init(PaymentGatewayEntityFactory* this) {
}

PaymentGatewayEntityFactory* PaymentGatewayEntityFactory_new(void) {
    PaymentGatewayEntityFactory* this = calloc(1, sizeof(PaymentGatewayEntityFactory));
    PaymentGatewayEntityFactory_init(this);
    return this;
}


// throws Exception
PaymentGatewayEntity* PaymentGatewayEntityFactory_getInstance(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return PaymentGatewayEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "PaymentGatewayEntityFactory", commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

