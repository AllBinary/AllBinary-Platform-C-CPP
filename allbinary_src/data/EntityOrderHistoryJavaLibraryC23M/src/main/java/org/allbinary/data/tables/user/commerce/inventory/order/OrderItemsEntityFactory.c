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
// package org.allbinary.data.tables.user.commerce.inventory.order

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

typedef struct OrderItemsEntityFactory OrderItemsEntityFactory;
struct OrderItemsEntityFactory {
    char unused;
};


OrderItemsEntityFactory* OrderItemsEntityFactory_new(void);

void OrderItemsEntityFactory_init(OrderItemsEntityFactory* this);
OrderItemsEntity* OrderItemsEntityFactory_getInstance(void);


void OrderItemsEntityFactory_init(OrderItemsEntityFactory* this) {
}

OrderItemsEntityFactory* OrderItemsEntityFactory_new(void) {
    OrderItemsEntityFactory* this = calloc(1, sizeof(OrderItemsEntityFactory));
    OrderItemsEntityFactory_init(this);
    return this;
}


OrderItemsEntity* OrderItemsEntityFactory_getInstance(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return OrderItemsEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "OrderItemsEntityFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

