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
// package org.allbinary.data.tables.user.quoterequest

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

typedef struct QuoteRequestEntityFactory QuoteRequestEntityFactory;
struct QuoteRequestEntityFactory {
    LogUtil* logUtil;
};

static QuoteRequestEntityFactory* QuoteRequestEntityFactory_instance;

QuoteRequestEntityFactory* QuoteRequestEntityFactory_new(void);
QuoteRequestEntityFactory* QuoteRequestEntityFactory_getInstance(void);

void QuoteRequestEntityFactory_init(QuoteRequestEntityFactory* this);
QuoteRequestEntity* QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void QuoteRequestEntityFactory_staticInit(void) {
    QuoteRequestEntityFactory_instance = QuoteRequestEntityFactory_new();
}

static void QuoteRequestEntityFactory_initFields(QuoteRequestEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


QuoteRequestEntityFactory* QuoteRequestEntityFactory_getInstance(void) {
        return QuoteRequestEntityFactory_instance;
}


void QuoteRequestEntityFactory_init(QuoteRequestEntityFactory* this) {
    QuoteRequestEntityFactory_initFields(this);
}

QuoteRequestEntityFactory* QuoteRequestEntityFactory_new(void) {
    QuoteRequestEntityFactory* this = calloc(1, sizeof(QuoteRequestEntityFactory));
    QuoteRequestEntityFactory_init(this);
    return this;
}


QuoteRequestEntity* QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory* this) {
        JAVA_TRY {
            return QuoteRequestEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

