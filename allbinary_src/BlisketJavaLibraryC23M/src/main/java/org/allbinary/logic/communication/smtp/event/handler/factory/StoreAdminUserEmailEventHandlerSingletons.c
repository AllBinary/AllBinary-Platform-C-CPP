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
// package org.allbinary.logic.communication.smtp.event.handler.factory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/EmailEventHandlerUtil.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct StoreAdminUserEmailEventHandlerSingletons StoreAdminUserEmailEventHandlerSingletons;
struct StoreAdminUserEmailEventHandlerSingletons {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* userEmailEventHandlerHashMap;
};

static StoreAdminUserEmailEventHandlerSingletons* StoreAdminUserEmailEventHandlerSingletons_instance;

StoreAdminUserEmailEventHandlerSingletons* StoreAdminUserEmailEventHandlerSingletons_new(void);
StoreAdminUserEmailEventHandlerSingletons* StoreAdminUserEmailEventHandlerSingletons_getInstance(void);

void StoreAdminUserEmailEventHandlerSingletons_init(StoreAdminUserEmailEventHandlerSingletons* this);
UserEmailEventHandler* StoreAdminUserEmailEventHandlerSingletons_getInstance(StoreAdminUserEmailEventHandlerSingletons* this, UserEmailEventNameData* userEmailEventNameData, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);

// Static fields with runtime initializers: call this once at startup
void StoreAdminUserEmailEventHandlerSingletons_staticInit(void) {
    StoreAdminUserEmailEventHandlerSingletons_instance = StoreAdminUserEmailEventHandlerSingletons_new();
}

static void StoreAdminUserEmailEventHandlerSingletons_initFields(StoreAdminUserEmailEventHandlerSingletons* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->userEmailEventHandlerHashMap = StdUtil_createHashMap(StdUtil_getInstance());
}


StoreAdminUserEmailEventHandlerSingletons* StoreAdminUserEmailEventHandlerSingletons_getInstance(void) {
        return StoreAdminUserEmailEventHandlerSingletons_instance;
}


void StoreAdminUserEmailEventHandlerSingletons_init(StoreAdminUserEmailEventHandlerSingletons* this) {
    StoreAdminUserEmailEventHandlerSingletons_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

StoreAdminUserEmailEventHandlerSingletons* StoreAdminUserEmailEventHandlerSingletons_new(void) {
    StoreAdminUserEmailEventHandlerSingletons* this = calloc(1, sizeof(StoreAdminUserEmailEventHandlerSingletons));
    StoreAdminUserEmailEventHandlerSingletons_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
UserEmailEventHandler* StoreAdminUserEmailEventHandlerSingletons_getInstance(StoreAdminUserEmailEventHandlerSingletons* this, UserEmailEventNameData* userEmailEventNameData, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->GET_INSTANCE);
        }
        UserEmailEventHandler* userEmailEventHandler = ((UserEmailEventHandler*) HashMap_get(this->userEmailEventHandlerHashMap, userEmailEventNameData));
        if (userEmailEventHandler == nullptr) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Creating New Named UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
            }
            BasicArrayList* userVector = UserEntityFactory_getStoreManagers(UserEntityFactory_getInstance(), storeFrontInterface);
            UserEmailEventHandler* newUserEmailEventHandler = EmailEventHandlerUtil_getEventHandler(EmailEventHandlerUtil_getInstance(), abeClientInformation, userEmailEventNameData, userVector);
            HashMap_put(this->userEmailEventHandlerHashMap, userEmailEventNameData, newUserEmailEventHandler);
            return newUserEmailEventHandler;
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Returning existing UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
            }
            return userEmailEventHandler;
        }
}

