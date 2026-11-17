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
// package org.allbinary.data.tables.context.module.storefronts

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

typedef struct StoreFrontsEntityFactory StoreFrontsEntityFactory;
struct StoreFrontsEntityFactory {
    LogUtil* logUtil;
};

static StoreFrontsEntityFactory* StoreFrontsEntityFactory_instance;

StoreFrontsEntityFactory* StoreFrontsEntityFactory_new(void);
StoreFrontsEntityFactory* StoreFrontsEntityFactory_getInstance(void);

void StoreFrontsEntityFactory_init(StoreFrontsEntityFactory* this);
StoreFrontsEntity* StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void StoreFrontsEntityFactory_staticInit(void) {
    StoreFrontsEntityFactory_instance = StoreFrontsEntityFactory_new();
}

static void StoreFrontsEntityFactory_initFields(StoreFrontsEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


StoreFrontsEntityFactory* StoreFrontsEntityFactory_getInstance(void) {
        return StoreFrontsEntityFactory_instance;
}


void StoreFrontsEntityFactory_init(StoreFrontsEntityFactory* this) {
    StoreFrontsEntityFactory_initFields(this);
}

StoreFrontsEntityFactory* StoreFrontsEntityFactory_new(void) {
    StoreFrontsEntityFactory* this = calloc(1, sizeof(StoreFrontsEntityFactory));
    StoreFrontsEntityFactory_init(this);
    return this;
}


StoreFrontsEntity* StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory* this) {
        JAVA_TRY {
            return StoreFrontsEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

