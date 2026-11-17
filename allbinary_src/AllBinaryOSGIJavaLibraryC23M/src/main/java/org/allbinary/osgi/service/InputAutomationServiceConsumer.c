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
#include "org/osgi/framework/BundleContext.h"
#include "org/osgi/framework/ServiceReference.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/osgi/OSGIServiceInterface.h"
#include "org/allbinary/osgi/OSGIServiceVisitorInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationServiceConsumer InputAutomationServiceConsumer;
struct InputAutomationServiceConsumer {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    OSGIServiceUtil* osgiServiceUtil;
    const char* registryName;
    BundleContext* bundleContext;
    OSGIServiceVisitorInterface* osgiServiceVisitorInterface;
};


InputAutomationServiceConsumer* InputAutomationServiceConsumer_new(const char* registryName, BundleContext* bundleContext, OSGIServiceVisitorInterface* osgiServiceVisitorInterface);

void InputAutomationServiceConsumer_init(InputAutomationServiceConsumer* this, const char* registryName, BundleContext* bundleContext, OSGIServiceVisitorInterface* osgiServiceVisitorInterface);
void InputAutomationServiceConsumer_process(InputAutomationServiceConsumer* this);
static ServiceReference** InputAutomationServiceConsumer_getServiceReferences(InputAutomationServiceConsumer* this);
BundleContext* InputAutomationServiceConsumer_getBundleContext(InputAutomationServiceConsumer* this);
void InputAutomationServiceConsumer_setBundleContext(InputAutomationServiceConsumer* this, BundleContext* aBundleContext);
const char* InputAutomationServiceConsumer_getRegistryName(InputAutomationServiceConsumer* this);
void InputAutomationServiceConsumer_setRegistryName(InputAutomationServiceConsumer* this, const char* registryName);
OSGIServiceVisitorInterface* InputAutomationServiceConsumer_getOsgiServiceVisitorInterface(InputAutomationServiceConsumer* this);
void InputAutomationServiceConsumer_setOsgiServiceVisitorInterface(InputAutomationServiceConsumer* this, OSGIServiceVisitorInterface* osgiServiceVisitorInterface);

static void InputAutomationServiceConsumer_initFields(InputAutomationServiceConsumer* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->osgiServiceUtil = OSGIServiceUtil_getInstance();
    this->registryName = nullptr;
    this->bundleContext = nullptr;
    this->osgiServiceVisitorInterface = nullptr;
}


void InputAutomationServiceConsumer_init(InputAutomationServiceConsumer* this, const char* registryName, BundleContext* bundleContext, OSGIServiceVisitorInterface* osgiServiceVisitorInterface) {
    InputAutomationServiceConsumer_initFields(this);
        InputAutomationServiceConsumer_setRegistryName(this, registryName);
        InputAutomationServiceConsumer_setBundleContext(this, bundleContext);
        InputAutomationServiceConsumer_setOsgiServiceVisitorInterface(this, osgiServiceVisitorInterface);
}

InputAutomationServiceConsumer* InputAutomationServiceConsumer_new(const char* registryName, BundleContext* bundleContext, OSGIServiceVisitorInterface* osgiServiceVisitorInterface) {
    InputAutomationServiceConsumer* this = calloc(1, sizeof(InputAutomationServiceConsumer));
    InputAutomationServiceConsumer_init(this, registryName, bundleContext, osgiServiceVisitorInterface);
    return this;
}


// throws Exception
void InputAutomationServiceConsumer_process(InputAutomationServiceConsumer* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->PROCESS);
        BasicArrayList* vector = OSGIServiceUtil_getServicesObjectVector(this->osgiServiceUtil, InputAutomationServiceConsumer_getBundleContext(this), InputAutomationServiceConsumer_getServiceReferences(this));
        LogUtil_putF(this->logUtil, java_concat(java_concat("Processing ", java_string_of(BasicArrayList_size(vector))), " Services"), this, this->commonStrings->PROCESS);
        int32_t size = BasicArrayList_size(vector);
        OSGIServiceInterface* osgiServiceInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            osgiServiceInterface = ((OSGIServiceInterface*) BasicArrayList_get(vector, index));
            if (!JAVA_CALL(InputAutomationServiceConsumer_getOsgiServiceVisitorInterface(this), visit, osgiServiceInterface)) {
                java_throw(java_exception_new("Exception", java_concat("Unable to process service: ", java_string_of(osgiServiceInterface))));
            }
        }
}


// throws Exception
static ServiceReference** InputAutomationServiceConsumer_getServiceReferences(InputAutomationServiceConsumer* this) {
        return JAVA_CALL(InputAutomationServiceConsumer_getBundleContext(this), getServiceReferences, InputAutomationServiceConsumer_getRegistryName(this), nullptr);
}


BundleContext* InputAutomationServiceConsumer_getBundleContext(InputAutomationServiceConsumer* this) {
        return this->bundleContext;
}


void InputAutomationServiceConsumer_setBundleContext(InputAutomationServiceConsumer* this, BundleContext* aBundleContext) {
        this->bundleContext = aBundleContext;
}


const char* InputAutomationServiceConsumer_getRegistryName(InputAutomationServiceConsumer* this) {
        return this->registryName;
}


void InputAutomationServiceConsumer_setRegistryName(InputAutomationServiceConsumer* this, const char* registryName) {
        this->registryName = registryName;
}


OSGIServiceVisitorInterface* InputAutomationServiceConsumer_getOsgiServiceVisitorInterface(InputAutomationServiceConsumer* this) {
        return this->osgiServiceVisitorInterface;
}


void InputAutomationServiceConsumer_setOsgiServiceVisitorInterface(InputAutomationServiceConsumer* this, OSGIServiceVisitorInterface* osgiServiceVisitorInterface) {
        this->osgiServiceVisitorInterface = osgiServiceVisitorInterface;
}

