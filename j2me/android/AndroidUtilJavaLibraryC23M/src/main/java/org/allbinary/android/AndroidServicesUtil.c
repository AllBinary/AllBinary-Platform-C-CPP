/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2019 AllBinary 
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
// package org.allbinary.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/List.h"
#include "android/app/ActivityManager.h"
#include "android/app/ActivityManager/RunningServiceInfo.h"
#include "android/content/ComponentName.h"
#include "android/content/Context.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct AndroidServicesUtil AndroidServicesUtil;
struct AndroidServicesUtil {
    LogUtil* logUtil;
    ResourceUtil* resourceUtil;
    int32_t SERVICE_LIMIT_MAX;
    const char* IS_SERVICE_RUNNING;
    const char* SERVICE_NOT_FOUND_RUNNING;
};

static AndroidServicesUtil* AndroidServicesUtil_instance;

AndroidServicesUtil* AndroidServicesUtil_new(void);
AndroidServicesUtil* AndroidServicesUtil_getInstance(void);
bool AndroidServicesUtil_isServiceRunning(AndroidServicesUtil* this, const char* name);

// Static fields with runtime initializers: call this once at startup
void AndroidServicesUtil_staticInit(void) {
    AndroidServicesUtil_instance = AndroidServicesUtil_new();
}

static void AndroidServicesUtil_initFields(AndroidServicesUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->resourceUtil = ResourceUtil_getInstance();
    this->SERVICE_LIMIT_MAX = 1000;
    this->IS_SERVICE_RUNNING = "isServiceRunning";
    this->SERVICE_NOT_FOUND_RUNNING = "Service not found Running: ";
}

void AndroidServicesUtil_init(AndroidServicesUtil* this) {
    AndroidServicesUtil_initFields(this);
}

AndroidServicesUtil* AndroidServicesUtil_new(void) {
    AndroidServicesUtil* this = calloc(1, sizeof(AndroidServicesUtil));
    AndroidServicesUtil_init(this);
    return this;
}


AndroidServicesUtil* AndroidServicesUtil_getInstance(void) {
        return AndroidServicesUtil_instance;
}


bool AndroidServicesUtil_isServiceRunning(AndroidServicesUtil* this, const char* name) {
        ActivityManager* activityManager = ((ActivityManager*) JAVA_CALL(ResourceUtil_getContext(this->resourceUtil), getSystemService, Context_ACTIVITY_SERVICE));
        List* runningServicesList = ActivityManager_getRunningServices(activityManager, this->SERVICE_LIMIT_MAX);
        RunningServiceInfo* runningServiceInfo = nullptr;
        ComponentName* serviceComponent = nullptr;
        const char* serviceName = nullptr;
        int32_t size = List_size(runningServicesList);
        for (int32_t index = 0; index < size; index++) {
            runningServiceInfo = List_get(runningServicesList, index);
            serviceComponent = runningServiceInfo->service;
            serviceName = ComponentName_toString(serviceComponent);
            if (java_string_indexOf(serviceName, name) >= 0) {
                return true;
            }
        }
        LogUtil_putF(this->logUtil, java_concat(this->SERVICE_NOT_FOUND_RUNNING, name), this, this->IS_SERVICE_RUNNING);
        return false;
}

