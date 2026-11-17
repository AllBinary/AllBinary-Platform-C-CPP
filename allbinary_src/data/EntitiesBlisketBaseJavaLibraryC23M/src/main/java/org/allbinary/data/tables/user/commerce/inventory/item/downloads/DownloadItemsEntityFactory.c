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
// package org.allbinary.data.tables.user.commerce.inventory.item.downloads

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

typedef struct DownloadItemsEntityFactory DownloadItemsEntityFactory;
struct DownloadItemsEntityFactory {
    LogUtil* logUtil;
};

static DownloadItemsEntityFactory* DownloadItemsEntityFactory_instance;

DownloadItemsEntityFactory* DownloadItemsEntityFactory_new(void);
DownloadItemsEntityFactory* DownloadItemsEntityFactory_getInstance(void);

void DownloadItemsEntityFactory_init(DownloadItemsEntityFactory* this);
DownloadItemsEntity* DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void DownloadItemsEntityFactory_staticInit(void) {
    DownloadItemsEntityFactory_instance = DownloadItemsEntityFactory_new();
}

static void DownloadItemsEntityFactory_initFields(DownloadItemsEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


DownloadItemsEntityFactory* DownloadItemsEntityFactory_getInstance(void) {
        return DownloadItemsEntityFactory_instance;
}


void DownloadItemsEntityFactory_init(DownloadItemsEntityFactory* this) {
    DownloadItemsEntityFactory_initFields(this);
}

DownloadItemsEntityFactory* DownloadItemsEntityFactory_new(void) {
    DownloadItemsEntityFactory* this = calloc(1, sizeof(DownloadItemsEntityFactory));
    DownloadItemsEntityFactory_init(this);
    return this;
}


DownloadItemsEntity* DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory* this) {
        JAVA_TRY {
            return DownloadItemsEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

