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
// package org.allbinary.osgi

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/osgi/framework/BundleContext.h"
#include "org/osgi/framework/NullServiceReferenceFactory.h"
#include "org/osgi/framework/ServiceReference.h"
#include "org/osgi/framework/ServiceRegistration.h"

typedef struct OSGIActivatorUtil OSGIActivatorUtil;
struct OSGIActivatorUtil {
    char unused;
};


OSGIActivatorUtil* OSGIActivatorUtil_new(void);

void OSGIActivatorUtil_init(OSGIActivatorUtil* this);
void OSGIActivatorUtil_registerAsService(BundleContext* bundleContext, Any* anyType, const char* serviceName);
void OSGIActivatorUtil_registerAsService(BundleContext* bundleContext, Any* anyType, const char* serviceName, ABHashtable* properties);


void OSGIActivatorUtil_init(OSGIActivatorUtil* this) {
}

OSGIActivatorUtil* OSGIActivatorUtil_new(void) {
    OSGIActivatorUtil* this = calloc(1, sizeof(OSGIActivatorUtil));
    OSGIActivatorUtil_init(this);
    return this;
}


// throws Exception
void OSGIActivatorUtil_registerAsService(BundleContext* bundleContext, Any* anyType, const char* serviceName) {
        OSGIActivatorUtil_registerAsService(bundleContext, anyType, serviceName, StdUtil_createHashtable(StdUtil_getInstance()));
}


// throws Exception
// Java overloaded method: C needs a different name
void OSGIActivatorUtil_registerAsService(BundleContext* bundleContext, Any* anyType, const char* serviceName, ABHashtable* properties) {
        ServiceRegistration* serviceRegistration = BundleContext_registerService(bundleContext, serviceName, anyType, properties);
        ServiceReference* serviceReference = ServiceRegistration_getReference(serviceRegistration);
        serviceReference = BundleContext_getServiceReference(bundleContext, serviceName);
        if (serviceReference == NullServiceReferenceFactory_getInstance()->NULL_SERVICE_REFERENCE) {
            java_throw(java_exception_new("Exception", "No Such Service Reference"));
        }
}

