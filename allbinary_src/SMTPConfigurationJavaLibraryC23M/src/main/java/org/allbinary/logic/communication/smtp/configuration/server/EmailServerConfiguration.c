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
// package org.allbinary.logic.communication.smtp.configuration.server

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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"

typedef struct EmailServerConfiguration EmailServerConfiguration;
struct EmailServerConfiguration {
    EmailServerConfigurationInterface EmailServerConfigurationInterface_interface;
    LogUtil* logUtil;
    const char* accountName;
    const char* password;
    const char* smtpServer;
};


EmailServerConfiguration* EmailServerConfiguration_new(void);

void EmailServerConfiguration_init(EmailServerConfiguration* this);

EmailServerConfiguration* EmailServerConfiguration_new1(HashMap* hashMap);
void EmailServerConfiguration_init1(EmailServerConfiguration* this, HashMap* hashMap);

EmailServerConfiguration* EmailServerConfiguration_new3(const char* account, const char* password, const char* server);
void EmailServerConfiguration_init3(EmailServerConfiguration* this, const char* account, const char* password, const char* server);
void EmailServerConfiguration_setSmtpServer(EmailServerConfiguration* this, const char* value);
const char* EmailServerConfiguration_getSmtpServer(EmailServerConfiguration* this);
const char* EmailServerConfiguration_getAccountName(EmailServerConfiguration* this);
void EmailServerConfiguration_setAccountName(EmailServerConfiguration* this, const char* accountName);
const char* EmailServerConfiguration_getPassword(EmailServerConfiguration* this);
void EmailServerConfiguration_setPassword(EmailServerConfiguration* this, const char* password);
void EmailServerConfiguration_log(EmailServerConfiguration* this);
const char* EmailServerConfiguration_toString(EmailServerConfiguration* this);

static void EmailServerConfiguration_initFields(EmailServerConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->accountName = nullptr;
    this->password = nullptr;
    this->smtpServer = nullptr;
}


void EmailServerConfiguration_init(EmailServerConfiguration* this) {
    EmailServerConfiguration_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->CONSTRUCTOR);
        }
        EmailServerConfiguration_setSmtpServer(this, StringUtil_getInstance()->EMPTY_STRING);
}

EmailServerConfiguration* EmailServerConfiguration_new(void) {
    EmailServerConfiguration* this = calloc(1, sizeof(EmailServerConfiguration));
    EmailServerConfiguration_init(this);
    return this;
}


void EmailServerConfiguration_init1(EmailServerConfiguration* this, HashMap* hashMap) {
    EmailServerConfiguration_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, "EmailServerConfiguration(HashMap)");
        }
        EmailServerConfiguration_setAccountName(this, ((const char*) HashMap_get(hashMap, EmailServerConfigurationData_ACCOUNT)));
        EmailServerConfiguration_setPassword(this, ((const char*) HashMap_get(hashMap, EmailServerConfigurationData_PASSWORD)));
        EmailServerConfiguration_setSmtpServer(this, ((const char*) HashMap_get(hashMap, EmailServerConfigurationData_SERVER)));
        EmailServerConfiguration_log(this);
}

EmailServerConfiguration* EmailServerConfiguration_new1(HashMap* hashMap) {
    EmailServerConfiguration* this = calloc(1, sizeof(EmailServerConfiguration));
    EmailServerConfiguration_init1(this, hashMap);
    return this;
}


void EmailServerConfiguration_init3(EmailServerConfiguration* this, const char* account, const char* password, const char* server) {
    EmailServerConfiguration_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, "EmailServerConfiguration(HashMap)");
        }
        EmailServerConfiguration_setAccountName(this, account);
        EmailServerConfiguration_setPassword(this, password);
        EmailServerConfiguration_setSmtpServer(this, server);
        EmailServerConfiguration_log(this);
}

EmailServerConfiguration* EmailServerConfiguration_new3(const char* account, const char* password, const char* server) {
    EmailServerConfiguration* this = calloc(1, sizeof(EmailServerConfiguration));
    EmailServerConfiguration_init3(this, account, password, server);
    return this;
}


void EmailServerConfiguration_setSmtpServer(EmailServerConfiguration* this, const char* value) {
        this->smtpServer = value;
}


const char* EmailServerConfiguration_getSmtpServer(EmailServerConfiguration* this) {
        return this->smtpServer;
}


const char* EmailServerConfiguration_getAccountName(EmailServerConfiguration* this) {
        return this->accountName;
}


void EmailServerConfiguration_setAccountName(EmailServerConfiguration* this, const char* accountName) {
        this->accountName = accountName;
}


const char* EmailServerConfiguration_getPassword(EmailServerConfiguration* this) {
        return this->password;
}


void EmailServerConfiguration_setPassword(EmailServerConfiguration* this, const char* password) {
        this->password = password;
}


void EmailServerConfiguration_log(EmailServerConfiguration* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, EmailServerConfiguration_toString(this), this, "EmailServerConfiguration");
        }
}


const char* EmailServerConfiguration_toString(EmailServerConfiguration* this) {
        return java_concat(java_concat(java_concat(java_concat(java_concat(java_concat("Email Server Configuration:\n", "Smtp Server: \n"), java_string_of(EmailServerConfiguration_getSmtpServer(this))), "\nAccount Name: "), java_string_of(EmailServerConfiguration_getAccountName(this))), "\nPassword: "), java_string_of(EmailServerConfiguration_getPassword(this)));
}

