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
// package org.allbinary.logic.communication.smtp.configuration.user.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"

typedef struct UserEmailEventsConfiguration UserEmailEventsConfiguration;
struct UserEmailEventsConfiguration {
    UserEmailEventsConfigurationInterface UserEmailEventsConfigurationInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* emailEventHashMap;
};


UserEmailEventsConfiguration* UserEmailEventsConfiguration_new(void);

void UserEmailEventsConfiguration_init(UserEmailEventsConfiguration* this);

UserEmailEventsConfiguration* UserEmailEventsConfiguration_new1(HashMap* hashMap);
void UserEmailEventsConfiguration_init1(UserEmailEventsConfiguration* this, HashMap* hashMap);
static void UserEmailEventsConfiguration_init(UserEmailEventsConfiguration* this);
HashMap* UserEmailEventsConfiguration_getEventConfigurationHashMap(UserEmailEventsConfiguration* this);
void UserEmailEventsConfiguration_addUserEmailEventConfiguration(UserEmailEventsConfiguration* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);
UserEmailEventListenerInterface* UserEmailEventsConfiguration_getEventListener(UserEmailEventsConfiguration* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface);

static void UserEmailEventsConfiguration_initFields(UserEmailEventsConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->emailEventHashMap = nullptr;
}


void UserEmailEventsConfiguration_init(UserEmailEventsConfiguration* this) {
    UserEmailEventsConfiguration_initFields(this);
        UserEmailEventsConfiguration_init(this);
}

UserEmailEventsConfiguration* UserEmailEventsConfiguration_new(void) {
    UserEmailEventsConfiguration* this = calloc(1, sizeof(UserEmailEventsConfiguration));
    UserEmailEventsConfiguration_init(this);
    return this;
}


void UserEmailEventsConfiguration_init1(UserEmailEventsConfiguration* this, HashMap* hashMap) {
    UserEmailEventsConfiguration_initFields(this);
        UserEmailEventsConfiguration_init(this);
}

UserEmailEventsConfiguration* UserEmailEventsConfiguration_new1(HashMap* hashMap) {
    UserEmailEventsConfiguration* this = calloc(1, sizeof(UserEmailEventsConfiguration));
    UserEmailEventsConfiguration_init1(this, hashMap);
    return this;
}


static void UserEmailEventsConfiguration_init(UserEmailEventsConfiguration* this) {
        this->emailEventHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, " Constructor");
        }
}


HashMap* UserEmailEventsConfiguration_getEventConfigurationHashMap(UserEmailEventsConfiguration* this) {
        return this->emailEventHashMap;
}


void UserEmailEventsConfiguration_addUserEmailEventConfiguration(UserEmailEventsConfiguration* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Adding: ", java_string_of(UserEmailEventConfigurationInterface_log(userEmailEventConfigurationInterface))), this, "addUserEmailEventConfiguration");
        }
        HashMap_put(this->emailEventHashMap, UserEmailEventConfigurationInterface_getName(userEmailEventConfigurationInterface), userEmailEventConfigurationInterface);
}


// throws Exception
UserEmailEventListenerInterface* UserEmailEventsConfiguration_getEventListener(UserEmailEventsConfiguration* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface) {
        UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface = ((UserEmailEventConfigurationInterface*) HashMap_get(this->emailEventHashMap, UserEmailEventNameData_toString(userEmailEventNameData)));
        return UserEmailEventListenerFactory_getInstance(abeClientInformation, userEmailEventConfigurationInterface, userInterface);
}

