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
// package org.allbinary.data.tables.advertisement.areas

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

typedef struct AdvertisementAreasEntityFactory AdvertisementAreasEntityFactory;
struct AdvertisementAreasEntityFactory {
    char unused;
};

static const char* AdvertisementAreasEntityFactory_CLASSNAME = "org.allbinary.data.tables.AdvertisementEntity";

AdvertisementAreasEntityFactory* AdvertisementAreasEntityFactory_new(void);

void AdvertisementAreasEntityFactory_init(AdvertisementAreasEntityFactory* this);
AdvertisementAreasEntityInterface* AdvertisementAreasEntityFactory_getInstance(void);


void AdvertisementAreasEntityFactory_init(AdvertisementAreasEntityFactory* this) {
}

AdvertisementAreasEntityFactory* AdvertisementAreasEntityFactory_new(void) {
    AdvertisementAreasEntityFactory* this = calloc(1, sizeof(AdvertisementAreasEntityFactory));
    AdvertisementAreasEntityFactory_init(this);
    return this;
}


AdvertisementAreasEntityInterface* AdvertisementAreasEntityFactory_getInstance(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return ((AdvertisementAreasEntityInterface*) AdvertisementAreasEntity_new());
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "AdvertisementAreasEntityFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

