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
// package org.allbinary.data.tables.user.commerce.inventory.item.special

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

typedef struct SpecialItemsEntityFactory SpecialItemsEntityFactory;
struct SpecialItemsEntityFactory {
    LogUtil* logUtil;
};

static SpecialItemsEntityFactory* SpecialItemsEntityFactory_instance;

SpecialItemsEntityFactory* SpecialItemsEntityFactory_new(void);
SpecialItemsEntityFactory* SpecialItemsEntityFactory_getInstance(void);

void SpecialItemsEntityFactory_init(SpecialItemsEntityFactory* this);
SpecialItemsEntity* SpecialItemsEntityFactory_getSpecialItemsEntityInstance(SpecialItemsEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void SpecialItemsEntityFactory_staticInit(void) {
    SpecialItemsEntityFactory_instance = SpecialItemsEntityFactory_new();
}

static void SpecialItemsEntityFactory_initFields(SpecialItemsEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


SpecialItemsEntityFactory* SpecialItemsEntityFactory_getInstance(void) {
        return SpecialItemsEntityFactory_instance;
}


void SpecialItemsEntityFactory_init(SpecialItemsEntityFactory* this) {
    SpecialItemsEntityFactory_initFields(this);
}

SpecialItemsEntityFactory* SpecialItemsEntityFactory_new(void) {
    SpecialItemsEntityFactory* this = calloc(1, sizeof(SpecialItemsEntityFactory));
    SpecialItemsEntityFactory_init(this);
    return this;
}


SpecialItemsEntity* SpecialItemsEntityFactory_getSpecialItemsEntityInstance(SpecialItemsEntityFactory* this) {
        JAVA_TRY {
            return SpecialItemsEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

