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
// package org.allbinary.logic.communication.smtp.event.handler

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct EmailEventHandlerUtil EmailEventHandlerUtil;
struct EmailEventHandlerUtil {
    LogUtil* logUtil;
};

static EmailEventHandlerUtil* EmailEventHandlerUtil_instance;

EmailEventHandlerUtil* EmailEventHandlerUtil_new(void);
EmailEventHandlerUtil* EmailEventHandlerUtil_getInstance(void);

void EmailEventHandlerUtil_init(EmailEventHandlerUtil* this);
UserEmailEventHandler* EmailEventHandlerUtil_getEventHandler(EmailEventHandlerUtil* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, BasicArrayList* userVector);
BasicArrayList* EmailEventHandlerUtil_getUserEmailEventListenerVector(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface);

// Static fields with runtime initializers: call this once at startup
void EmailEventHandlerUtil_staticInit(void) {
    EmailEventHandlerUtil_instance = EmailEventHandlerUtil_new();
}

static void EmailEventHandlerUtil_initFields(EmailEventHandlerUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


EmailEventHandlerUtil* EmailEventHandlerUtil_getInstance(void) {
        return EmailEventHandlerUtil_instance;
}


void EmailEventHandlerUtil_init(EmailEventHandlerUtil* this) {
    EmailEventHandlerUtil_initFields(this);
}

EmailEventHandlerUtil* EmailEventHandlerUtil_new(void) {
    EmailEventHandlerUtil* this = calloc(1, sizeof(EmailEventHandlerUtil));
    EmailEventHandlerUtil_init(this);
    return this;
}


// throws Exception
UserEmailEventHandler* EmailEventHandlerUtil_getEventHandler(EmailEventHandlerUtil* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, BasicArrayList* userVector) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Returning UserEmailEventHandler for ");
            StringMaker_appendint(stringBuffer, BasicArrayList_size(userVector));
            StringMaker_append(stringBuffer, " users.");
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "getEventHandler");
        }
        UserEmailEventHandler* userEmailEventHandler = UserEmailEventHandler_new();
        UserEmailEventHandler_addListener(userEmailEventHandler, LogUserEmailEventListenerModule_new());
        int32_t size = BasicArrayList_size(userVector);
        for (int32_t index = 0; index < size; index++) {
            UserInterface* userInterface = ((UserInterface*) BasicArrayList_get(userVector, index));
            BasicArrayList* vector = EmailEventHandlerUtil_getUserEmailEventListenerVector(abeClientInformation, userEmailEventNameData, userInterface);
            UserEmailEventHandler_addListener(userEmailEventHandler, vector);
        }
        return userEmailEventHandler;
}


// throws Exception
BasicArrayList* EmailEventHandlerUtil_getUserEmailEventListenerVector(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface) {
        UserConfigurationInterface* userConfigurationInterface = UserInterface_getUserConfigurationInterface(userInterface);
        UserEmailConfigurationInterface* userEmailConfigurationInterface = UserConfigurationInterface_getUserEmailConfigurationInterface(userConfigurationInterface);
        UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface = UserEmailConfigurationInterface_getUserEmailEventsConfigurationInterface(userEmailConfigurationInterface);
        UserEmailEventListenerInterface* userEmailEventListenerInterface = UserEmailEventsConfigurationInterface_getEventListener(userEmailEventsConfigurationInterface, abeClientInformation, userEmailEventNameData, userInterface);
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, userEmailEventListenerInterface);
        return vector;
}

