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
// package org.allbinary.logic.communication.smtp.event.modules.event.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/BasicEmail.h"
#include "org/allbinary/logic/communication/smtp/EmailInterface.h"
#include "org/allbinary/logic/communication/smtp/event/EmailEvent.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h"
#include "org/allbinary/logic/communication/smtp/queue/EmailQueueFactory.h"

typedef struct UserEmailEventListenerModule UserEmailEventListenerModule;
struct UserEmailEventListenerModule {
    UserEmailEventListenerInterface UserEmailEventListenerInterface_interface;
    LogUtil* logUtil;
    UserInterface* userInterface;
};


UserEmailEventListenerModule* UserEmailEventListenerModule_new(UserInterface* userInterface);

void UserEmailEventListenerModule_init(UserEmailEventListenerModule* this, UserInterface* userInterface);
void UserEmailEventListenerModule_onEmailSendFailure(UserEmailEventListenerModule* this, EmailEvent* emailEvent);
void UserEmailEventListenerModule_onEmailSendRequest(UserEmailEventListenerModule* this, EmailEvent* emailEvent);

static void UserEmailEventListenerModule_initFields(UserEmailEventListenerModule* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void UserEmailEventListenerModule_init(UserEmailEventListenerModule* this, UserInterface* userInterface) {
    UserEmailEventListenerModule_initFields(this);
        this->userInterface = userInterface;
}

UserEmailEventListenerModule* UserEmailEventListenerModule_new(UserInterface* userInterface) {
    UserEmailEventListenerModule* this = calloc(1, sizeof(UserEmailEventListenerModule));
    UserEmailEventListenerModule_init(this, userInterface);
    return this;
}


// throws Exception
void UserEmailEventListenerModule_onEmailSendFailure(UserEmailEventListenerModule* this, EmailEvent* emailEvent) {
        const char* to = UserInterface_getSecondaryEmail(this->userInterface);
        BasicEmail* email = BasicEmail_new(EmailEvent_getEmailInfo(emailEvent), to);
        EmailQueueFactory_offer(EmailQueueFactory_getInstance(), ((EmailInterface*) BasicEmail_getEmail(email)));
}


// throws Exception
void UserEmailEventListenerModule_onEmailSendRequest(UserEmailEventListenerModule* this, EmailEvent* emailEvent) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Add Email To Que For Sending: ", EmailEvent_toString(emailEvent)), this, "onEmailSendRequest");
        }
        const char* to = UserInterface_getMainEmail(this->userInterface);
        BasicEmail* email = BasicEmail_new(EmailEvent_getEmailInfo(emailEvent), to);
        EmailQueueFactory_offer(EmailQueueFactory_getInstance(), ((EmailInterface*) BasicEmail_getEmail(email)));
}

