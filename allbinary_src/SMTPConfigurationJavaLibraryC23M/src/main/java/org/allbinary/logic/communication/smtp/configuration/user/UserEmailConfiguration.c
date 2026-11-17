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
// package org.allbinary.logic.communication.smtp.configuration.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"

typedef struct UserEmailConfiguration UserEmailConfiguration;
struct UserEmailConfiguration {
    UserEmailConfigurationInterface UserEmailConfigurationInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface;
};


UserEmailConfiguration* UserEmailConfiguration_new(void);

void UserEmailConfiguration_init(UserEmailConfiguration* this);

UserEmailConfiguration* UserEmailConfiguration_new1(HashMap* hashMap);
void UserEmailConfiguration_init1(UserEmailConfiguration* this, HashMap* hashMap);
UserEmailEventsConfigurationInterface* UserEmailConfiguration_getUserEmailEventsConfigurationInterface(UserEmailConfiguration* this);
void UserEmailConfiguration_setUserEmailEventsConfigurationInterface(UserEmailConfiguration* this, UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface);

static void UserEmailConfiguration_initFields(UserEmailConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->userEmailEventsConfigurationInterface = nullptr;
}


void UserEmailConfiguration_init(UserEmailConfiguration* this) {
    UserEmailConfiguration_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        }
        UserEmailConfiguration_setUserEmailEventsConfigurationInterface(this, UserEmailEventsConfiguration_new());
}

UserEmailConfiguration* UserEmailConfiguration_new(void) {
    UserEmailConfiguration* this = calloc(1, sizeof(UserEmailConfiguration));
    UserEmailConfiguration_init(this);
    return this;
}


void UserEmailConfiguration_init1(UserEmailConfiguration* this, HashMap* hashMap) {
    UserEmailConfiguration_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        }
        UserEmailConfiguration_setUserEmailEventsConfigurationInterface(this, UserEmailEventsConfiguration_new(hashMap));
}

UserEmailConfiguration* UserEmailConfiguration_new1(HashMap* hashMap) {
    UserEmailConfiguration* this = calloc(1, sizeof(UserEmailConfiguration));
    UserEmailConfiguration_init1(this, hashMap);
    return this;
}


UserEmailEventsConfigurationInterface* UserEmailConfiguration_getUserEmailEventsConfigurationInterface(UserEmailConfiguration* this) {
        return this->userEmailEventsConfigurationInterface;
}


void UserEmailConfiguration_setUserEmailEventsConfigurationInterface(UserEmailConfiguration* this, UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface) {
        this->userEmailEventsConfigurationInterface = userEmailEventsConfigurationInterface;
}

