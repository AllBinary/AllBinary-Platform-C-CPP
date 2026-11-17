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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BasicEmailInfo BasicEmailInfo;
struct BasicEmailInfo {
    LogUtil* logUtil;
    const char* subject;
    const char* textBody;
    EmailServerConfigurationInterface* emailServerConfigurationInterface;
};


BasicEmailInfo* BasicEmailInfo_new(const char* subject, const char* textBody);

void BasicEmailInfo_init(BasicEmailInfo* this, const char* subject, const char* textBody);
const char* BasicEmailInfo_getSubject(BasicEmailInfo* this);
const char* BasicEmailInfo_getTextBody(BasicEmailInfo* this);
EmailServerConfigurationInterface* BasicEmailInfo_getEmailServerConfigurationInterface(BasicEmailInfo* this);
void BasicEmailInfo_setEmailServerConfigurationInterface(BasicEmailInfo* this, EmailServerConfigurationInterface* emailServerConfigurationInterface);
const char* BasicEmailInfo_toString(BasicEmailInfo* this);
void BasicEmailInfo_init(BasicEmailInfo* this);

static void BasicEmailInfo_initFields(BasicEmailInfo* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    this->emailServerConfigurationInterface = nullptr;
}


void BasicEmailInfo_init(BasicEmailInfo* this, const char* subject, const char* textBody) {
    BasicEmailInfo_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->CONSTRUCTOR);
        }
        this->subject = subject;
        this->textBody = textBody;
}

BasicEmailInfo* BasicEmailInfo_new(const char* subject, const char* textBody) {
    BasicEmailInfo* this = calloc(1, sizeof(BasicEmailInfo));
    BasicEmailInfo_init(this, subject, textBody);
    return this;
}


const char* BasicEmailInfo_getSubject(BasicEmailInfo* this) {
        return this->subject;
}


const char* BasicEmailInfo_getTextBody(BasicEmailInfo* this) {
        return this->textBody;
}


EmailServerConfigurationInterface* BasicEmailInfo_getEmailServerConfigurationInterface(BasicEmailInfo* this) {
        return this->emailServerConfigurationInterface;
}


void BasicEmailInfo_setEmailServerConfigurationInterface(BasicEmailInfo* this, EmailServerConfigurationInterface* emailServerConfigurationInterface) {
        this->emailServerConfigurationInterface = emailServerConfigurationInterface;
}


const char* BasicEmailInfo_toString(BasicEmailInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(BasicEmailInfo_getEmailServerConfigurationInterface(this), toString));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "Subject: \n");
        StringMaker_append(stringBuffer, BasicEmailInfo_getSubject(this));
        StringMaker_append(stringBuffer, "\nText Body: \n");
        StringMaker_append(stringBuffer, BasicEmailInfo_getTextBody(this));
        return StringMaker_toString(stringBuffer);
}


// throws Exception
void BasicEmailInfo_init(BasicEmailInfo* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

