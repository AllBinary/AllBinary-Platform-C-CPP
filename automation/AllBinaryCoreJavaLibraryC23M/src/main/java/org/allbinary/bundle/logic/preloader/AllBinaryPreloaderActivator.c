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
// package org.allbinary.bundle.logic.preloader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/osgi/framework/BundleActivator.h"
#include "org/osgi/framework/BundleContext.h"
#include "org/osgi/framework/ServiceReference.h"
#include "org/osgi/framework/ServiceRegistration.h"
#include "org/allbinary/bundle/logic/system/loader/CryptServiceFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct AllBinaryPreloaderActivator AllBinaryPreloaderActivator;
struct AllBinaryPreloaderActivator {
    BundleActivator BundleActivator_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static BundleContext* AllBinaryPreloaderActivator_context = nullptr;
static const char* AllBinaryPreloaderActivator_CRYPT_REGISTRY_NAME = "bundle.abcs.logic.system.loader.CryptService";

AllBinaryPreloaderActivator* AllBinaryPreloaderActivator_new(void);

void AllBinaryPreloaderActivator_init(AllBinaryPreloaderActivator* this);
BundleContext* AllBinaryPreloaderActivator_getBundleContext(void);
void AllBinaryPreloaderActivator_start(AllBinaryPreloaderActivator* this, BundleContext* context);
void AllBinaryPreloaderActivator_registerAsService(AllBinaryPreloaderActivator* this);
void AllBinaryPreloaderActivator_stop(AllBinaryPreloaderActivator* this, BundleContext* context);

static void AllBinaryPreloaderActivator_initFields(AllBinaryPreloaderActivator* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void AllBinaryPreloaderActivator_init(AllBinaryPreloaderActivator* this) {
    AllBinaryPreloaderActivator_initFields(this);
}

AllBinaryPreloaderActivator* AllBinaryPreloaderActivator_new(void) {
    AllBinaryPreloaderActivator* this = calloc(1, sizeof(AllBinaryPreloaderActivator));
    AllBinaryPreloaderActivator_init(this);
    return this;
}


BundleContext* AllBinaryPreloaderActivator_getBundleContext(void) {
        return AllBinaryPreloaderActivator_context;
}


// throws Exception
void AllBinaryPreloaderActivator_start(AllBinaryPreloaderActivator* this, BundleContext* context) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "start");
            AllBinaryPreloaderActivator_context = context;
            AllBinaryPreloaderActivator_registerAsService(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "start", e);
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
void AllBinaryPreloaderActivator_registerAsService(AllBinaryPreloaderActivator* this) {
        ABHashtable* properties = StdUtil_createHashtable(StdUtil_getInstance());
        ServiceRegistration* serviceRegistration = JAVA_CALL(AllBinaryPreloaderActivator_context, registerService, AllBinaryPreloaderActivator_CRYPT_REGISTRY_NAME, CryptServiceFactory_new(), properties);
        ServiceReference* serviceReference = ServiceRegistration_getReference(serviceRegistration);
        serviceReference = JAVA_CALL(AllBinaryPreloaderActivator_context, getServiceReference, AllBinaryPreloaderActivator_CRYPT_REGISTRY_NAME);
        if (serviceReference == nullptr) {
            java_throw(java_exception_new("Exception", "No Such Service Reference"));
        }
}


// throws Exception
void AllBinaryPreloaderActivator_stop(AllBinaryPreloaderActivator* this, BundleContext* context) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "stop");
}

