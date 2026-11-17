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
#include "org/allbinary/string/CommonStrings.h"

typedef struct EmailInfo EmailInfo;
struct EmailInfo {
    LogUtil* logUtil;
    BasicEmailInfo* basicEmailInfo;
    const char* htmlAttachment;
    const char* contentBase;
};


EmailInfo* EmailInfo_new(BasicEmailInfo* basicEmailInfo);

void EmailInfo_init(EmailInfo* this, BasicEmailInfo* basicEmailInfo);

EmailInfo* EmailInfo_new3(BasicEmailInfo* basicEmailInfo, const char* htmlAttachment, const char* contentBase);
void EmailInfo_init3(EmailInfo* this, BasicEmailInfo* basicEmailInfo, const char* htmlAttachment, const char* contentBase);
static void EmailInfo_init(EmailInfo* this, BasicEmailInfo* basicEmailInfo, const char* htmlAttachment, const char* contentBase);
BasicEmailInfo* EmailInfo_getBasicEmailInfo(EmailInfo* this);
const char* EmailInfo_getHtmlAttachment(EmailInfo* this);
const char* EmailInfo_getContentBase(EmailInfo* this);
const char* EmailInfo_toString(EmailInfo* this);

static void EmailInfo_initFields(EmailInfo* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicEmailInfo = nullptr;
    this->htmlAttachment = nullptr;
    this->contentBase = nullptr;
}


void EmailInfo_init(EmailInfo* this, BasicEmailInfo* basicEmailInfo) {
    EmailInfo_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->CONSTRUCTOR);
        }
        EmailInfo_init(this, basicEmailInfo, nullptr, nullptr);
}

EmailInfo* EmailInfo_new(BasicEmailInfo* basicEmailInfo) {
    EmailInfo* this = calloc(1, sizeof(EmailInfo));
    EmailInfo_init(this, basicEmailInfo);
    return this;
}


void EmailInfo_init3(EmailInfo* this, BasicEmailInfo* basicEmailInfo, const char* htmlAttachment, const char* contentBase) {
    EmailInfo_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->CONSTRUCTOR);
        }
        EmailInfo_init(this, basicEmailInfo, nullptr, nullptr);
}

EmailInfo* EmailInfo_new3(BasicEmailInfo* basicEmailInfo, const char* htmlAttachment, const char* contentBase) {
    EmailInfo* this = calloc(1, sizeof(EmailInfo));
    EmailInfo_init3(this, basicEmailInfo, htmlAttachment, contentBase);
    return this;
}


static void EmailInfo_init(EmailInfo* this, BasicEmailInfo* basicEmailInfo, const char* htmlAttachment, const char* contentBase) {
        this->basicEmailInfo = basicEmailInfo;
        this->htmlAttachment = htmlAttachment;
        this->contentBase = contentBase;
}


BasicEmailInfo* EmailInfo_getBasicEmailInfo(EmailInfo* this) {
        return this->basicEmailInfo;
}


const char* EmailInfo_getHtmlAttachment(EmailInfo* this) {
        return this->htmlAttachment;
}


const char* EmailInfo_getContentBase(EmailInfo* this) {
        return this->contentBase;
}


const char* EmailInfo_toString(EmailInfo* this) {
        return java_concat("Email Info: \n ", JAVA_CALL(EmailInfo_getBasicEmailInfo(this), toString));
}

