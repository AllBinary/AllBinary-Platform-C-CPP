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
// package org.allbinary.data.tables.user.commerce.inventory.item

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

typedef struct InventoryEntityFactory InventoryEntityFactory;
struct InventoryEntityFactory {
    LogUtil* logUtil;
};

static InventoryEntityFactory* InventoryEntityFactory_instance;

InventoryEntityFactory* InventoryEntityFactory_new(void);
InventoryEntityFactory* InventoryEntityFactory_getInstance(void);

void InventoryEntityFactory_init(InventoryEntityFactory* this);
InventoryEntity* InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void InventoryEntityFactory_staticInit(void) {
    InventoryEntityFactory_instance = InventoryEntityFactory_new();
}

static void InventoryEntityFactory_initFields(InventoryEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


InventoryEntityFactory* InventoryEntityFactory_getInstance(void) {
        return InventoryEntityFactory_instance;
}


void InventoryEntityFactory_init(InventoryEntityFactory* this) {
    InventoryEntityFactory_initFields(this);
}

InventoryEntityFactory* InventoryEntityFactory_new(void) {
    InventoryEntityFactory* this = calloc(1, sizeof(InventoryEntityFactory));
    InventoryEntityFactory_init(this);
    return this;
}


InventoryEntity* InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory* this) {
        JAVA_TRY {
            return InventoryEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getInventoryEntityInstance()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

