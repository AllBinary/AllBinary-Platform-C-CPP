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
// package org.allbinary.business.user.commerce.inventory.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntity.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

//Retrieves a single order for a user
typedef struct OrderHistoryFactory OrderHistoryFactory;
struct OrderHistoryFactory {
    LogUtil* logUtil;
};


OrderHistoryFactory* OrderHistoryFactory_new(void);

void OrderHistoryFactory_init(OrderHistoryFactory* this);
OrderHistory* OrderHistoryFactory_getInstance(const char* id);

static void OrderHistoryFactory_initFields(OrderHistoryFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void OrderHistoryFactory_init(OrderHistoryFactory* this) {
    OrderHistoryFactory_initFields(this);
}

OrderHistoryFactory* OrderHistoryFactory_new(void) {
    OrderHistoryFactory* this = calloc(1, sizeof(OrderHistoryFactory));
    OrderHistoryFactory_init(this);
    return this;
}


OrderHistory* OrderHistoryFactory_getInstance(const char* id) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            OrderHistoryEntity* orderHistoryEntityInterface = OrderHistoryEntity_new();
            return ((OrderHistory*) OrderHistoryEntity_getOrder(orderHistoryEntityInterface, id));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->FACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "OrderHistoryFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

