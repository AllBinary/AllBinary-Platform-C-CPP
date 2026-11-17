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
// package org.allbinary.data.tables.advertisement.sales

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

typedef struct AffiliateSalesEntityFactory AffiliateSalesEntityFactory;
struct AffiliateSalesEntityFactory {
    char unused;
};

static const char* AffiliateSalesEntityFactory_CLASSNAME = "org.allbinary.data.tables.AffiliatesSalesEntity";

AffiliateSalesEntityFactory* AffiliateSalesEntityFactory_new(void);

void AffiliateSalesEntityFactory_init(AffiliateSalesEntityFactory* this);
AffiliateSalesEntityInterface* AffiliateSalesEntityFactory_getInstance(void);


void AffiliateSalesEntityFactory_init(AffiliateSalesEntityFactory* this) {
}

AffiliateSalesEntityFactory* AffiliateSalesEntityFactory_new(void) {
    AffiliateSalesEntityFactory* this = calloc(1, sizeof(AffiliateSalesEntityFactory));
    AffiliateSalesEntityFactory_init(this);
    return this;
}


AffiliateSalesEntityInterface* AffiliateSalesEntityFactory_getInstance(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return ((AffiliateSalesEntityInterface*) AffiliateSalesEntity_new());
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "AffiliateEntityFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

