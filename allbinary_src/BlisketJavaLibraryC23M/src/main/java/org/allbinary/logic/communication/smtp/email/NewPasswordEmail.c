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
// package org.allbinary.logic.communication.smtp.email

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
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct NewPasswordEmail NewPasswordEmail;
struct NewPasswordEmail {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbeClientInformationInterface* abeClientInformation;
    UserInterface* userInterface;
    const char* newPassword;
};


NewPasswordEmail* NewPasswordEmail_new(AbeClientInformationInterface* abeClientInformation, UserInterface* userInterface, const char* newPassword);

void NewPasswordEmail_init(NewPasswordEmail* this, AbeClientInformationInterface* abeClientInformation, UserInterface* userInterface, const char* newPassword);
void NewPasswordEmail_process(NewPasswordEmail* this);
static void NewPasswordEmail_notifyStoreAdmin(NewPasswordEmail* this);
static void NewPasswordEmail_notifyUser(NewPasswordEmail* this);

static void NewPasswordEmail_initFields(NewPasswordEmail* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void NewPasswordEmail_init(NewPasswordEmail* this, AbeClientInformationInterface* abeClientInformation, UserInterface* userInterface, const char* newPassword) {
    NewPasswordEmail_initFields(this);
        this->abeClientInformation = abeClientInformation;
        this->userInterface = userInterface;
        this->newPassword = newPassword;
}

NewPasswordEmail* NewPasswordEmail_new(AbeClientInformationInterface* abeClientInformation, UserInterface* userInterface, const char* newPassword) {
    NewPasswordEmail* this = calloc(1, sizeof(NewPasswordEmail));
    NewPasswordEmail_init(this, abeClientInformation, userInterface, newPassword);
    return this;
}


// throws Exception
void NewPasswordEmail_process(NewPasswordEmail* this) {
        NewPasswordEmail_notifyStoreAdmin(this);
        NewPasswordEmail_notifyUser(this);
}


// throws Exception
static void NewPasswordEmail_notifyStoreAdmin(NewPasswordEmail* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "notifyStoreAdmin", this, "notifyStoreAdmin");
            }
            const char* emailSubject = java_concat("New Password For User: ", java_string_of(UserInterface_getUserName(this->userInterface)));
            const char* emailBody = java_concat("New Password: ", this->newPassword);
            BasicEmailInfo* basicEmailInfo = ((BasicEmailInfo*) AdminEmailInfo_new(emailSubject, emailBody));
            EmailInfo* emailInfo = EmailInfo_new(basicEmailInfo);
            UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, UserEmailEventNameData_NEWPASSWORD);
            UserEmailEventHandler_receiveEmailInfo(adminUserEmailEventHandler, UserEmailEventNameData_NEWPASSWORD, emailInfo);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "emailAdmin", e);
            }
        } JAVA_END_TRY;
}


// throws Exception
static void NewPasswordEmail_notifyUser(NewPasswordEmail* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, "Email User", this, "notifyUser()");
            }
            const char* subject = "New Password";
            const char* body = java_concat("New Password: ", this->newPassword);
            BasicEmailInfo* basicEmailInfo = ((BasicEmailInfo*) AdminEmailInfo_new(subject, body));
            EmailInfo* emailInfo = EmailInfo_new(basicEmailInfo);
            UserEmailEventHandler* userEmailEventHandler = UserEmailEventHandlerSingletons_getInstance(UserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, UserEmailEventNameData_NEWPASSWORD, this->userInterface);
            UserEmailEventHandler_receiveEmailInfo(userEmailEventHandler, UserEmailEventNameData_NEWPASSWORD, emailInfo);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "notifyUser", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

