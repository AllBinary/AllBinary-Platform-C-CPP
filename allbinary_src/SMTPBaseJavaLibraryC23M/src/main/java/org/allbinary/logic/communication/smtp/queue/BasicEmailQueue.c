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
// package org.allbinary.logic.communication.smtp.queue

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/mail/Transport.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/EmailInterface.h"
#include "org/allbinary/logic/util/queue/BasicQueue.h"
#include "org/allbinary/logic/communication/smtp/queue/EmailQueueInterface.h"

typedef struct BasicEmailQueue BasicEmailQueue;
struct BasicEmailQueue {
    BasicQueue base;
    EmailQueueInterface EmailQueueInterface_interface;
    LogUtil* logUtil;
};

static BasicEmailQueue* BasicEmailQueue_instance;
static BasicEmailQueue* BasicEmailQueue_basicEmailQueue = nullptr;

BasicEmailQueue* BasicEmailQueue_new(void);

void BasicEmailQueue_init(BasicEmailQueue* this);
BasicEmailQueue* BasicEmailQueue_getInstance(void);
bool BasicEmailQueue_offer(BasicEmailQueue* this, EmailInterface* emailInterface);
static void BasicEmailQueue_remove(BasicEmailQueue* this, EmailInterface* emailInterface);
EmailInterface* BasicEmailQueue_remove(BasicEmailQueue* this);
static void BasicEmailQueue_post(BasicEmailQueue* this, EmailInterface* emailInterface);
void BasicEmailQueue_processAllUnsent(BasicEmailQueue* this);
static bool BasicEmailQueue_send(BasicEmailQueue* this, EmailInterface* emailInterface);

// Static fields with runtime initializers: call this once at startup
void BasicEmailQueue_staticInit(void) {
    BasicEmailQueue_instance = BasicEmailQueue_new();
}

static void BasicEmailQueue_initFields(BasicEmailQueue* this) {
    this->logUtil = LogUtil_getInstance();
}


void BasicEmailQueue_init(BasicEmailQueue* this) {
    BasicQueue_init(&this->base);
    BasicEmailQueue_initFields(this);
}

BasicEmailQueue* BasicEmailQueue_new(void) {
    BasicEmailQueue* this = calloc(1, sizeof(BasicEmailQueue));
    BasicEmailQueue_init(this);
    return this;
}


// synchronized
BasicEmailQueue* BasicEmailQueue_getInstance(void) {
        if (BasicEmailQueue_basicEmailQueue == nullptr) {
            BasicEmailQueue_basicEmailQueue = BasicEmailQueue_new();
        }
        return BasicEmailQueue_basicEmailQueue;
}


// throws Exception
// synchronized
bool BasicEmailQueue_offer(BasicEmailQueue* this, EmailInterface* emailInterface) {
        BasicEmailQueue_offer(this, ((Any*) emailInterface));
        BasicEmailQueue_post(this, emailInterface);
        return true;
}


// synchronized
static void BasicEmailQueue_remove(BasicEmailQueue* this, EmailInterface* emailInterface) {
        BasicEmailQueue_remove(this, ((Any*) emailInterface));
}


// Java overloaded method: C needs a different name
// synchronized
EmailInterface* BasicEmailQueue_remove(BasicEmailQueue* this) {
        return nullptr;
}


// throws Exception
// synchronized
static void BasicEmailQueue_post(BasicEmailQueue* this, EmailInterface* emailInterface) {
        if (BasicEmailQueue_send(this, emailInterface)) {
            BasicEmailQueue_remove(this, emailInterface);
            BasicEmailQueue_processAllUnsent(this);
        }
}


// throws Exception
// synchronized
void BasicEmailQueue_processAllUnsent(BasicEmailQueue* this) {
        int32_t size = JAVA_CALL(this->base.queueVector, size);
        for (int32_t index = 0; index < size; index++) {
            EmailInterface* emailInterface = ((EmailInterface*) JAVA_CALL(this->base.queueVector, get, index));
            if (BasicEmailQueue_send(this, emailInterface)) {
                BasicEmailQueue_remove(this, emailInterface);
                BasicEmailQueue_processAllUnsent(this);
            }
        }
}


// synchronized
static bool BasicEmailQueue_send(BasicEmailQueue* this, EmailInterface* emailInterface) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("Sending: ", java_string_of(EmailInterface_log(emailInterface))), this, "send");
            }
            Transport_send(EmailInterface_getMimeMessage(emailInterface));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("Email Send Debug: ", java_string_of(EmailInterface_getDebugInfo(emailInterface))), this, "send");
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
                LogUtil_put(this->logUtil, java_concat("Failed Email Send Debug: ", java_string_of(EmailInterface_getDebugInfo(emailInterface))), this, "send", e);
            }
            return false;
        } JAVA_END_TRY;
}

