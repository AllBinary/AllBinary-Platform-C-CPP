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
// package org.allbinary.logic.communication.smtp.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h"
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"

typedef struct AdminEmailInfo AdminEmailInfo;
struct AdminEmailInfo {
    BasicEmailInfo base;
    LogUtil* logUtil;
};


AdminEmailInfo* AdminEmailInfo_new(const char* subject, const char* textBody);

void AdminEmailInfo_init(AdminEmailInfo* this, const char* subject, const char* textBody);
void AdminEmailInfo_init(AdminEmailInfo* this);

static void AdminEmailInfo_initFields(AdminEmailInfo* this) {
    this->logUtil = LogUtil_getInstance();
}


void AdminEmailInfo_init(AdminEmailInfo* this, const char* subject, const char* textBody) {
        BasicEmailInfo_init(&this->base, subject, textBody);
        AdminEmailInfo_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->CONSTRUCTOR);
        }
        AdminEmailInfo_init(this);
}

AdminEmailInfo* AdminEmailInfo_new(const char* subject, const char* textBody) {
    AdminEmailInfo* this = calloc(1, sizeof(AdminEmailInfo));
    AdminEmailInfo_init(this, subject, textBody);
    return this;
}


// throws Exception
void AdminEmailInfo_init(AdminEmailInfo* this) {
        AdminConfigurationInterface* adminConfigurationInterface = ((AdminConfigurationInterface*) AdminConfiguration_new());
        ContextConfigurationInterface* contextConfigurationInterface = AdminConfigurationInterface_getContextConfigurationInterface(adminConfigurationInterface);
        EmailServerConfigurationInterface* emailServerConfigurationInterface = ContextConfigurationInterface_getEmailServerConfigurationInterface(contextConfigurationInterface);
        AdminEmailInfo_setEmailServerConfigurationInterface(this, emailServerConfigurationInterface);
}

