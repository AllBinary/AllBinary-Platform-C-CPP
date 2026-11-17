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
// package org.allbinary.graphics.j2me

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct StatusFactory StatusFactory;
struct StatusFactory {
    LogUtil* logUtil;
    const char* SETSTATUS;
    const char* STATUS_LABEL;
};

static StatusFactory* StatusFactory_instance;

StatusFactory* StatusFactory_new(void);
StatusFactory* StatusFactory_getInstance(void);
void StatusFactory_setStatusNoLog(StatusFactory* this, const char* status);
void StatusFactory_setStatus(StatusFactory* this, const char* status);

// Static fields with runtime initializers: call this once at startup
void StatusFactory_staticInit(void) {
    StatusFactory_instance = StatusFactory_new();
}

static void StatusFactory_initFields(StatusFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->SETSTATUS = "setStatus";
    this->STATUS_LABEL = "Status: ";
}

void StatusFactory_init(StatusFactory* this) {
    StatusFactory_initFields(this);
}

StatusFactory* StatusFactory_new(void) {
    StatusFactory* this = calloc(1, sizeof(StatusFactory));
    StatusFactory_init(this);
    return this;
}


StatusFactory* StatusFactory_getInstance(void) {
        return StatusFactory_instance;
}


void StatusFactory_setStatusNoLog(StatusFactory* this, const char* status) {
        JAVA_CALL(MyFrame_statusJLabel, setText, status);
}


void StatusFactory_setStatus(StatusFactory* this, const char* status) {
        StatusFactory_setStatusNoLog(this, status);
        LogUtil_putF(this->logUtil, java_concat(this->STATUS_LABEL, status), this, this->SETSTATUS);
}

