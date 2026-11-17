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
// package org.allbinary.osgi.service

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
#include "org/osgi/framework/BundleContext.h"
#include "org/osgi/framework/ServiceReference.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/osgi/OSGIServiceInterface.h"

typedef struct OSGIServiceUtil OSGIServiceUtil;
struct OSGIServiceUtil {
    LogUtil* logUtil;
};

static OSGIServiceUtil* OSGIServiceUtil_instance;

OSGIServiceUtil* OSGIServiceUtil_new(void);
OSGIServiceUtil* OSGIServiceUtil_getInstance(void);

void OSGIServiceUtil_init(OSGIServiceUtil* this);
BasicArrayList* OSGIServiceUtil_getServicesObjectVector(OSGIServiceUtil* this, BundleContext* bundleContext, ServiceReference** serviceReferences);

// Static fields with runtime initializers: call this once at startup
void OSGIServiceUtil_staticInit(void) {
    OSGIServiceUtil_instance = OSGIServiceUtil_new();
}

static void OSGIServiceUtil_initFields(OSGIServiceUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


OSGIServiceUtil* OSGIServiceUtil_getInstance(void) {
        return OSGIServiceUtil_instance;
}


void OSGIServiceUtil_init(OSGIServiceUtil* this) {
    OSGIServiceUtil_initFields(this);
}

OSGIServiceUtil* OSGIServiceUtil_new(void) {
    OSGIServiceUtil* this = calloc(1, sizeof(OSGIServiceUtil));
    OSGIServiceUtil_init(this);
    return this;
}


// throws Exception
BasicArrayList* OSGIServiceUtil_getServicesObjectVector(OSGIServiceUtil* this, BundleContext* bundleContext, ServiceReference** serviceReferences) {
        BasicArrayList* vector = BasicArrayListD_new();
        if (serviceReferences != nullptr) {
            int32_t size = java_array_length(serviceReferences);
            LogUtil_putF(this->logUtil, java_concat("Service References: ", java_string_of(size)), this, "getServicesObjectVector");
            for (int32_t index = 0; index < size; index++) {
                ServiceReference* serviceReference = serviceReferences[index];
                if (serviceReference != nullptr) {
                    OSGIServiceInterface* osgiServiceInterface = ((OSGIServiceInterface*) BundleContext_getService(bundleContext, serviceReference));
                    if (osgiServiceInterface == nullptr) {
                        java_throw(java_exception_new("Exception", "No Service For Reference"));
                    }
                    BasicArrayList_add(vector, osgiServiceInterface);
                }
            }
        }
        return vector;
}

