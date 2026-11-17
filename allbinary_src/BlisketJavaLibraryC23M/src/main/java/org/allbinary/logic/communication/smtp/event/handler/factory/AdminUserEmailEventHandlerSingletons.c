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
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/EmailEventHandlerUtil.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AdminUserEmailEventHandlerSingletons AdminUserEmailEventHandlerSingletons;
struct AdminUserEmailEventHandlerSingletons {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* userEmailEventHandlerHashMap;
};

static AdminUserEmailEventHandlerSingletons* AdminUserEmailEventHandlerSingletons_instance;

AdminUserEmailEventHandlerSingletons* AdminUserEmailEventHandlerSingletons_new(void);
AdminUserEmailEventHandlerSingletons* AdminUserEmailEventHandlerSingletons_getInstance(void);

void AdminUserEmailEventHandlerSingletons_init(AdminUserEmailEventHandlerSingletons* this);
UserEmailEventHandler* AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData);

// Static fields with runtime initializers: call this once at startup
void AdminUserEmailEventHandlerSingletons_staticInit(void) {
    AdminUserEmailEventHandlerSingletons_instance = AdminUserEmailEventHandlerSingletons_new();
}

static void AdminUserEmailEventHandlerSingletons_initFields(AdminUserEmailEventHandlerSingletons* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->userEmailEventHandlerHashMap = StdUtil_createHashMap(StdUtil_getInstance());
}


AdminUserEmailEventHandlerSingletons* AdminUserEmailEventHandlerSingletons_getInstance(void) {
        return AdminUserEmailEventHandlerSingletons_instance;
}


void AdminUserEmailEventHandlerSingletons_init(AdminUserEmailEventHandlerSingletons* this) {
    AdminUserEmailEventHandlerSingletons_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

AdminUserEmailEventHandlerSingletons* AdminUserEmailEventHandlerSingletons_new(void) {
    AdminUserEmailEventHandlerSingletons* this = calloc(1, sizeof(AdminUserEmailEventHandlerSingletons));
    AdminUserEmailEventHandlerSingletons_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
UserEmailEventHandler* AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->GET_INSTANCE);
        }
        UserEmailEventHandler* userEmailEventHandler = ((UserEmailEventHandler*) HashMap_get(this->userEmailEventHandlerHashMap, userEmailEventNameData));
        if (userEmailEventHandler == nullptr) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Creating New Named UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
            }
            BasicArrayList* userVector = UserEntityFactory_getAdministrators(UserEntityFactory_getInstance());
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

