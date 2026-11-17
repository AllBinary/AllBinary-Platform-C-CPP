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

typedef struct EmailQueueFactory EmailQueueFactory;
struct EmailQueueFactory {
    char unused;
};

static EmailQueueInterface* EmailQueueFactory_emailQueueInterface;

EmailQueueFactory* EmailQueueFactory_new(void);

void EmailQueueFactory_init(EmailQueueFactory* this);
EmailQueueInterface* EmailQueueFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void EmailQueueFactory_staticInit(void) {
    EmailQueueFactory_emailQueueInterface = ((EmailQueueInterface*) BasicEmailQueue_getInstance());
}


void EmailQueueFactory_init(EmailQueueFactory* this) {
}

EmailQueueFactory* EmailQueueFactory_new(void) {
    EmailQueueFactory* this = calloc(1, sizeof(EmailQueueFactory));
    EmailQueueFactory_init(this);
    return this;
}


EmailQueueInterface* EmailQueueFactory_getInstance(void) {
        return EmailQueueFactory_emailQueueInterface;
}

