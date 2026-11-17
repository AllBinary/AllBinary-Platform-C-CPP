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
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/smtp/event/EmailEvent.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"

typedef struct UserEmailEventHandler UserEmailEventHandler;
struct UserEmailEventHandler {
    BasicArrayList* emailVector;
    EmailInfo* emailInfo;
    UserEmailEventNameData* userEmailEventNameData;
};


UserEmailEventHandler* UserEmailEventHandler_new(void);

void UserEmailEventHandler_init(UserEmailEventHandler* this);
void UserEmailEventHandler_receiveEmailInfo(UserEmailEventHandler* this, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo);
void UserEmailEventHandler_addListener(UserEmailEventHandler* this, BasicArrayList* vector);
void UserEmailEventHandler_addListener(UserEmailEventHandler* this, UserEmailEventListenerInterface* emailEventListenerInterface);
void UserEmailEventHandler_removeListener(UserEmailEventHandler* this, UserEmailEventListenerInterface* emailEventListenerInterface);
void UserEmailEventHandler_fireEmailEvent(UserEmailEventHandler* this);

static void UserEmailEventHandler_initFields(UserEmailEventHandler* this) {
    
    this->emailInfo = nullptr;
    this->userEmailEventNameData = nullptr;
}


void UserEmailEventHandler_init(UserEmailEventHandler* this) {
    UserEmailEventHandler_initFields(this);
        this->emailVector = BasicArrayListD_new();
}

UserEmailEventHandler* UserEmailEventHandler_new(void) {
    UserEmailEventHandler* this = calloc(1, sizeof(UserEmailEventHandler));
    UserEmailEventHandler_init(this);
    return this;
}


// throws Exception
// synchronized
void UserEmailEventHandler_receiveEmailInfo(UserEmailEventHandler* this, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo) {
        this->userEmailEventNameData = userEmailEventNameData;
        this->emailInfo = emailInfo;
        UserEmailEventHandler_fireEmailEvent(this);
}


// synchronized
void UserEmailEventHandler_addListener(UserEmailEventHandler* this, BasicArrayList* vector) {
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            UserEmailEventListenerInterface* userEmailEventListenerInterface = ((UserEmailEventListenerInterface*) BasicArrayList_get(vector, index));
            UserEmailEventHandler_addListener(this, userEmailEventListenerInterface);
        }
}


// Java overloaded method: C needs a different name
// synchronized
void UserEmailEventHandler_addListener(UserEmailEventHandler* this, UserEmailEventListenerInterface* emailEventListenerInterface) {
        BasicArrayList_add(this->emailVector, emailEventListenerInterface);
}


// synchronized
void UserEmailEventHandler_removeListener(UserEmailEventHandler* this, UserEmailEventListenerInterface* emailEventListenerInterface) {
        BasicArrayList_remove(this->emailVector, emailEventListenerInterface);
}


// throws Exception
// synchronized
void UserEmailEventHandler_fireEmailEvent(UserEmailEventHandler* this) {
        EmailEvent* emailEvent = EmailEvent_new(this, this->userEmailEventNameData, this->emailInfo, 0);
        int32_t size = BasicArrayList_size(this->emailVector);
        for (int32_t index = 0; index < size; index++) {
            UserEmailEventListenerInterface* emailEventListenerInterface = ((UserEmailEventListenerInterface*) BasicArrayList_get(this->emailVector, index));
            UserEmailEventListenerInterface_onEmailSendRequest(emailEventListenerInterface, emailEvent);
        }
}

