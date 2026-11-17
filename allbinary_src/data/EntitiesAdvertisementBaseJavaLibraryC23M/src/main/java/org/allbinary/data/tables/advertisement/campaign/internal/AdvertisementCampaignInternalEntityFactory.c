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
// package org.allbinary.data.tables.advertisement.campaign.internal

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

typedef struct AdvertisementCampaignInternalEntityFactory AdvertisementCampaignInternalEntityFactory;
struct AdvertisementCampaignInternalEntityFactory {
    char unused;
};

static const char* AdvertisementCampaignInternalEntityFactory_CLASSNAME = "org.allbinary.data.tables.AdvertisementCampaignEntity";

AdvertisementCampaignInternalEntityFactory* AdvertisementCampaignInternalEntityFactory_new(void);

void AdvertisementCampaignInternalEntityFactory_init(AdvertisementCampaignInternalEntityFactory* this);
AdvertisementCampaignInternalEntityInterface* AdvertisementCampaignInternalEntityFactory_getInstance(void);


void AdvertisementCampaignInternalEntityFactory_init(AdvertisementCampaignInternalEntityFactory* this) {
}

AdvertisementCampaignInternalEntityFactory* AdvertisementCampaignInternalEntityFactory_new(void) {
    AdvertisementCampaignInternalEntityFactory* this = calloc(1, sizeof(AdvertisementCampaignInternalEntityFactory));
    AdvertisementCampaignInternalEntityFactory_init(this);
    return this;
}


AdvertisementCampaignInternalEntityInterface* AdvertisementCampaignInternalEntityFactory_getInstance(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return ((AdvertisementCampaignInternalEntityInterface*) AdvertisementCampaignInternalEntity_new());
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "AdvertisementCampaignEntityFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

