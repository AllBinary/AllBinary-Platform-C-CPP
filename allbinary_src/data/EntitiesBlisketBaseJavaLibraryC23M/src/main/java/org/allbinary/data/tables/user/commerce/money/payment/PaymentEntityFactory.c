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
// package org.allbinary.data.tables.user.commerce.money.payment

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

typedef struct PaymentEntityFactory PaymentEntityFactory;
struct PaymentEntityFactory {
    LogUtil* logUtil;
};

static PaymentEntityFactory* PaymentEntityFactory_instance;

PaymentEntityFactory* PaymentEntityFactory_new(void);
PaymentEntityFactory* PaymentEntityFactory_getInstance(void);

void PaymentEntityFactory_init(PaymentEntityFactory* this);
PaymentEntity* PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void PaymentEntityFactory_staticInit(void) {
    PaymentEntityFactory_instance = PaymentEntityFactory_new();
}

static void PaymentEntityFactory_initFields(PaymentEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


PaymentEntityFactory* PaymentEntityFactory_getInstance(void) {
        return PaymentEntityFactory_instance;
}


void PaymentEntityFactory_init(PaymentEntityFactory* this) {
    PaymentEntityFactory_initFields(this);
}

PaymentEntityFactory* PaymentEntityFactory_new(void) {
    PaymentEntityFactory* this = calloc(1, sizeof(PaymentEntityFactory));
    PaymentEntityFactory_init(this);
    return this;
}


PaymentEntity* PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory* this) {
        JAVA_TRY {
            return PaymentEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

