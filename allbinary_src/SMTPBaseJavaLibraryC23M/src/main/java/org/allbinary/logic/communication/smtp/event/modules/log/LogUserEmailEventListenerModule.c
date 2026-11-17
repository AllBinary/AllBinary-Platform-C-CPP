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
// package org.allbinary.logic.communication.smtp.event.modules.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/EmailEvent.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h"

typedef struct LogUserEmailEventListenerModule LogUserEmailEventListenerModule;
struct LogUserEmailEventListenerModule {
    UserEmailEventListenerInterface UserEmailEventListenerInterface_interface;
    LogUtil* logUtil;
};


LogUserEmailEventListenerModule* LogUserEmailEventListenerModule_new(void);

void LogUserEmailEventListenerModule_init(LogUserEmailEventListenerModule* this);
void LogUserEmailEventListenerModule_onEmailSendRequest(LogUserEmailEventListenerModule* this, EmailEvent* userEmailInfoEvent);

static void LogUserEmailEventListenerModule_initFields(LogUserEmailEventListenerModule* this) {
    this->logUtil = LogUtil_getInstance();
}


void LogUserEmailEventListenerModule_init(LogUserEmailEventListenerModule* this) {
    LogUserEmailEventListenerModule_initFields(this);
}

LogUserEmailEventListenerModule* LogUserEmailEventListenerModule_new(void) {
    LogUserEmailEventListenerModule* this = calloc(1, sizeof(LogUserEmailEventListenerModule));
    LogUserEmailEventListenerModule_init(this);
    return this;
}


// throws Exception
void LogUserEmailEventListenerModule_onEmailSendRequest(LogUserEmailEventListenerModule* this, EmailEvent* userEmailInfoEvent) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            const char* message = java_concat("Logging EmailEvent - Temporary Listener for debugging.\n\n", EmailEvent_toString(userEmailInfoEvent));
            LogUtil_putF(this->logUtil, message, this, "onEmailSendRequest");
        }
}

