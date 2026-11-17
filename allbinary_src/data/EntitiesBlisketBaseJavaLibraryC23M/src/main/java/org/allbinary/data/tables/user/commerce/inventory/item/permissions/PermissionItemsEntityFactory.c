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
// package org.allbinary.data.tables.user.commerce.inventory.item.permissions

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

typedef struct PermissionItemsEntityFactory PermissionItemsEntityFactory;
struct PermissionItemsEntityFactory {
    LogUtil* logUtil;
};

static PermissionItemsEntityFactory* PermissionItemsEntityFactory_instance;

PermissionItemsEntityFactory* PermissionItemsEntityFactory_new(void);
PermissionItemsEntityFactory* PermissionItemsEntityFactory_getInstance(void);

void PermissionItemsEntityFactory_init(PermissionItemsEntityFactory* this);
PermissionItemsEntity* PermissionItemsEntityFactory_getPermissionItemsEntityInstance(void);

// Static fields with runtime initializers: call this once at startup
void PermissionItemsEntityFactory_staticInit(void) {
    PermissionItemsEntityFactory_instance = PermissionItemsEntityFactory_new();
}

static void PermissionItemsEntityFactory_initFields(PermissionItemsEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


PermissionItemsEntityFactory* PermissionItemsEntityFactory_getInstance(void) {
        return PermissionItemsEntityFactory_instance;
}


void PermissionItemsEntityFactory_init(PermissionItemsEntityFactory* this) {
    PermissionItemsEntityFactory_initFields(this);
}

PermissionItemsEntityFactory* PermissionItemsEntityFactory_new(void) {
    PermissionItemsEntityFactory* this = calloc(1, sizeof(PermissionItemsEntityFactory));
    PermissionItemsEntityFactory_init(this);
    return this;
}


PermissionItemsEntity* PermissionItemsEntityFactory_getPermissionItemsEntityInstance(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return PermissionItemsEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "PermissionItemsEntityFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

