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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"

typedef struct UserEmailEventConfiguration UserEmailEventConfiguration;
struct UserEmailEventConfiguration {
    UserEmailEventConfigurationInterface UserEmailEventConfigurationInterface_interface;
    LogUtil* logUtil;
    const char* name;
    const char* eventListenerClassPath;
};


UserEmailEventConfiguration* UserEmailEventConfiguration_new(void);

void UserEmailEventConfiguration_init(UserEmailEventConfiguration* this);

UserEmailEventConfiguration* UserEmailEventConfiguration_new1(HashMap* hashMap);
void UserEmailEventConfiguration_init1(UserEmailEventConfiguration* this, HashMap* hashMap);
const char* UserEmailEventConfiguration_getName(UserEmailEventConfiguration* this);
void UserEmailEventConfiguration_setName(UserEmailEventConfiguration* this, const char* name);
const char* UserEmailEventConfiguration_getEventListenerClassPath(UserEmailEventConfiguration* this);
void UserEmailEventConfiguration_setEventListenerClassPath(UserEmailEventConfiguration* this, const char* eventListenerClassPath);
const char* UserEmailEventConfiguration_log(UserEmailEventConfiguration* this);

static void UserEmailEventConfiguration_initFields(UserEmailEventConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->name = nullptr;
    this->eventListenerClassPath = nullptr;
}


void UserEmailEventConfiguration_init(UserEmailEventConfiguration* this) {
    UserEmailEventConfiguration_initFields(this);
        UserEmailEventConfiguration_setName(this, StringUtil_getInstance()->EMPTY_STRING);
        UserEmailEventConfiguration_setEventListenerClassPath(this, StringUtil_getInstance()->EMPTY_STRING);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, "New", this, " Constructor");
        }
}

UserEmailEventConfiguration* UserEmailEventConfiguration_new(void) {
    UserEmailEventConfiguration* this = calloc(1, sizeof(UserEmailEventConfiguration));
    UserEmailEventConfiguration_init(this);
    return this;
}


void UserEmailEventConfiguration_init1(UserEmailEventConfiguration* this, HashMap* hashMap) {
    UserEmailEventConfiguration_initFields(this);
        UserEmailEventConfiguration_setName(this, ((const char*) HashMap_get(hashMap, UserEmailEventConfigurationData_NAME)));
        UserEmailEventConfiguration_setEventListenerClassPath(this, ((const char*) HashMap_get(hashMap, UserEmailEventConfigurationData_LISTENER_CLASSPATH)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Log: ", java_string_of(UserEmailEventConfiguration_log(this))), this, " Constructor");
        }
}

UserEmailEventConfiguration* UserEmailEventConfiguration_new1(HashMap* hashMap) {
    UserEmailEventConfiguration* this = calloc(1, sizeof(UserEmailEventConfiguration));
    UserEmailEventConfiguration_init1(this, hashMap);
    return this;
}


const char* UserEmailEventConfiguration_getName(UserEmailEventConfiguration* this) {
        return this->name;
}


void UserEmailEventConfiguration_setName(UserEmailEventConfiguration* this, const char* name) {
        this->name = name;
}


const char* UserEmailEventConfiguration_getEventListenerClassPath(UserEmailEventConfiguration* this) {
        return this->eventListenerClassPath;
}


void UserEmailEventConfiguration_setEventListenerClassPath(UserEmailEventConfiguration* this, const char* eventListenerClassPath) {
        this->eventListenerClassPath = eventListenerClassPath;
}


const char* UserEmailEventConfiguration_log(UserEmailEventConfiguration* this) {
        return java_concat(java_concat(java_concat(java_concat("\nUser Email Event Log Info:", "\nName: "), UserEmailEventConfiguration_getName(this)), "\nEventListenerClassPath: "), java_string_of(UserEmailEventConfiguration_getEventListenerClassPath(this)));
}

