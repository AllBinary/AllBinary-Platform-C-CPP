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
// package org.allbinary.business.context.modules.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct StoreFrontFactory StoreFrontFactory;
struct StoreFrontFactory {
    char unused;
};


StoreFrontFactory* StoreFrontFactory_new(void);

void StoreFrontFactory_init(StoreFrontFactory* this);
StoreFront* StoreFrontFactory_getInstance(const char* storeName);


void StoreFrontFactory_init(StoreFrontFactory* this) {
}

StoreFrontFactory* StoreFrontFactory_new(void) {
    StoreFrontFactory* this = calloc(1, sizeof(StoreFrontFactory));
    StoreFrontFactory_init(this);
    return this;
}


StoreFront* StoreFrontFactory_getInstance(const char* storeName) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            StoreFrontsEntity* storeFronts = StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance());
            return StoreFrontsEntity_getStoreFrontInterface(storeFronts, storeName);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->FACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "StoreFrontFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

