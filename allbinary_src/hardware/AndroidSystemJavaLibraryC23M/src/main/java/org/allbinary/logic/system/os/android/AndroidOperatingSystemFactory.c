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
// package org.allbinary.logic.system.os.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AndroidOperatingSystemFactory AndroidOperatingSystemFactory;
struct AndroidOperatingSystemFactory {
    LogUtil* logUtil;
    TsUtil* tsUtil;
};

static AndroidOperatingSystemFactory* AndroidOperatingSystemFactory_instance;

AndroidOperatingSystemFactory* AndroidOperatingSystemFactory_new(void);
AndroidOperatingSystemFactory* AndroidOperatingSystemFactory_getInstance(void);

void AndroidOperatingSystemFactory_init(AndroidOperatingSystemFactory* this);
GenericOperatingSystem* AndroidOperatingSystemFactory_getOperatingSystemInstance(AndroidOperatingSystemFactory* this);

// Static fields with runtime initializers: call this once at startup
void AndroidOperatingSystemFactory_staticInit(void) {
    AndroidOperatingSystemFactory_instance = AndroidOperatingSystemFactory_new();
}

static void AndroidOperatingSystemFactory_initFields(AndroidOperatingSystemFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
}


AndroidOperatingSystemFactory* AndroidOperatingSystemFactory_getInstance(void) {
        return AndroidOperatingSystemFactory_instance;
}


void AndroidOperatingSystemFactory_init(AndroidOperatingSystemFactory* this) {
    AndroidOperatingSystemFactory_initFields(this);
}

AndroidOperatingSystemFactory* AndroidOperatingSystemFactory_new(void) {
    AndroidOperatingSystemFactory* this = calloc(1, sizeof(AndroidOperatingSystemFactory));
    AndroidOperatingSystemFactory_init(this);
    return this;
}


// throws Exception
GenericOperatingSystem* AndroidOperatingSystemFactory_getOperatingSystemInstance(AndroidOperatingSystemFactory* this) {
        JAVA_TRY {
            GenericOperatingSystem* GenericOperatingSystem = nullptr;
            SystemProperties* systemProperties = SystemProperties_getInstance();
            const char* osName = SystemProperties_getName(systemProperties);
            if (TsUtil_compareTo(this->tsUtil, osName, OperatingSystems_getInstance()->ANDROID) == 0) {
                GenericOperatingSystem = AndroidOS_new();
            } else {
                if (OperatingSystems_isUnknownSpecificOSAllowed(OperatingSystems_getInstance())) {
                    GenericOperatingSystem = AndroidOS_new();
                } else {
                    java_throw(java_exception_new("Exception", java_concat("Specific Android OS Not Supported: ", osName)));
                }
            }
            return GenericOperatingSystem;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, "Failed to get OperatingSystem returning NoOperatingSystem", this, commonStrings->GET_INSTANCE, e);
            return NoOperatingSystem_NO_OPERATING_SYSTEM;
        } JAVA_END_TRY;
}

