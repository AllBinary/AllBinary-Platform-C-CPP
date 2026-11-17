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
// package org.allbinary.data.tables.user.commerce.inventory.item.customs

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

typedef struct CustomItemsEntityFactory CustomItemsEntityFactory;
struct CustomItemsEntityFactory {
    LogUtil* logUtil;
};

static CustomItemsEntityFactory* CustomItemsEntityFactory_instance;

CustomItemsEntityFactory* CustomItemsEntityFactory_new(void);
CustomItemsEntityFactory* CustomItemsEntityFactory_getInstance(void);

void CustomItemsEntityFactory_init(CustomItemsEntityFactory* this);
CustomItemsEntity* CustomItemsEntityFactory_getCustomItemsEntityInstance(CustomItemsEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void CustomItemsEntityFactory_staticInit(void) {
    CustomItemsEntityFactory_instance = CustomItemsEntityFactory_new();
}

static void CustomItemsEntityFactory_initFields(CustomItemsEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


CustomItemsEntityFactory* CustomItemsEntityFactory_getInstance(void) {
        return CustomItemsEntityFactory_instance;
}


void CustomItemsEntityFactory_init(CustomItemsEntityFactory* this) {
    CustomItemsEntityFactory_initFields(this);
}

CustomItemsEntityFactory* CustomItemsEntityFactory_new(void) {
    CustomItemsEntityFactory* this = calloc(1, sizeof(CustomItemsEntityFactory));
    CustomItemsEntityFactory_init(this);
    return this;
}


CustomItemsEntity* CustomItemsEntityFactory_getCustomItemsEntityInstance(CustomItemsEntityFactory* this) {
        JAVA_TRY {
            return CustomItemsEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

