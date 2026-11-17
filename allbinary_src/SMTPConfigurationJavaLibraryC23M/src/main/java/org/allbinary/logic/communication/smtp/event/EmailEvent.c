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
// package org.allbinary.logic.communication.smtp.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/EventObject.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct EmailEvent EmailEvent;
struct EmailEvent {
    EventObject base;
    EmailInfo* emailInfo;
    UserEmailEventNameData* userEmailEventNameData;
    int32_t attempts;
};


EmailEvent* EmailEvent_new(Any* emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts);

void EmailEvent_init(EmailEvent* this, Any* emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts);
EmailInfo* EmailEvent_getEmailInfo(EmailEvent* this);
int32_t EmailEvent_getAttempts(EmailEvent* this);
void EmailEvent_setAttempts(EmailEvent* this, int32_t attempts);
const char* EmailEvent_toString(EmailEvent* this);

static void EmailEvent_initFields(EmailEvent* this) {
    
    
    this->attempts = 0;
}


void EmailEvent_init(EmailEvent* this, Any* emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts) {
        EventObject_init(&this->base, emailEventHandler);
        EmailEvent_initFields(this);
        this->userEmailEventNameData = userEmailEventNameData;
        this->emailInfo = emailInfo;
}

EmailEvent* EmailEvent_new(Any* emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts) {
    EmailEvent* this = calloc(1, sizeof(EmailEvent));
    EmailEvent_init(this, emailEventHandler, userEmailEventNameData, emailInfo, attempts);
    return this;
}


EmailInfo* EmailEvent_getEmailInfo(EmailEvent* this) {
        return this->emailInfo;
}


int32_t EmailEvent_getAttempts(EmailEvent* this) {
        return this->attempts;
}


void EmailEvent_setAttempts(EmailEvent* this, int32_t attempts) {
        this->attempts = attempts;
}


const char* EmailEvent_toString(EmailEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "EmailEvent Log: \n");
        StringMaker_append(stringBuffer, "Event Name: ");
        StringMaker_append(stringBuffer, UserEmailEventNameData_toString(this->userEmailEventNameData));
        StringMaker_append(stringBuffer, JAVA_CALL(EmailEvent_getEmailInfo(this), toString));
        StringMaker_append(stringBuffer, "\nNumber of Attempts: ");
        StringMaker_appendint(stringBuffer, EmailEvent_getAttempts(this));
        return StringMaker_toString(stringBuffer);
}

