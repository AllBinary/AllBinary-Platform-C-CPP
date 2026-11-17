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
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/EmailEventHandlerUtil.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct UserEmailEventHandlerSingletons UserEmailEventHandlerSingletons;
struct UserEmailEventHandlerSingletons {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* userEmailEventHandlerHashMap;
};

static UserEmailEventHandlerSingletons* UserEmailEventHandlerSingletons_instance;

UserEmailEventHandlerSingletons* UserEmailEventHandlerSingletons_new(void);
UserEmailEventHandlerSingletons* UserEmailEventHandlerSingletons_getInstance(void);

void UserEmailEventHandlerSingletons_init(UserEmailEventHandlerSingletons* this);
UserEmailEventHandler* UserEmailEventHandlerSingletons_getInstance(UserEmailEventHandlerSingletons* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface);

// Static fields with runtime initializers: call this once at startup
void UserEmailEventHandlerSingletons_staticInit(void) {
    UserEmailEventHandlerSingletons_instance = UserEmailEventHandlerSingletons_new();
}

static void UserEmailEventHandlerSingletons_initFields(UserEmailEventHandlerSingletons* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->userEmailEventHandlerHashMap = StdUtil_createHashMap(StdUtil_getInstance());
}


UserEmailEventHandlerSingletons* UserEmailEventHandlerSingletons_getInstance(void) {
        return UserEmailEventHandlerSingletons_instance;
}


void UserEmailEventHandlerSingletons_init(UserEmailEventHandlerSingletons* this) {
    UserEmailEventHandlerSingletons_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

UserEmailEventHandlerSingletons* UserEmailEventHandlerSingletons_new(void) {
    UserEmailEventHandlerSingletons* this = calloc(1, sizeof(UserEmailEventHandlerSingletons));
    UserEmailEventHandlerSingletons_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
UserEmailEventHandler* UserEmailEventHandlerSingletons_getInstance(UserEmailEventHandlerSingletons* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->GET_INSTANCE);
        }
        UserEmailEventHandler* userEmailEventHandler = ((UserEmailEventHandler*) HashMap_get(this->userEmailEventHandlerHashMap, userEmailEventNameData));
        if (userEmailEventHandler == nullptr) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Creating New Named UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
            }
            UserEmailEventHandler* newUserEmailEventHandler = UserEmailEventHandler_new();
            BasicArrayList* vector = EmailEventHandlerUtil_getUserEmailEventListenerVector(abeClientInformation, userEmailEventNameData, userInterface);
            UserEmailEventHandler_addListener(newUserEmailEventHandler, vector);
            UserEmailEventHandler_addListener(newUserEmailEventHandler, LogUserEmailEventListenerModule_new());
            HashMap_put(this->userEmailEventHandlerHashMap, userEmailEventNameData, newUserEmailEventHandler);
            return newUserEmailEventHandler;
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Returning existing UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
            }
            return userEmailEventHandler;
        }
}

