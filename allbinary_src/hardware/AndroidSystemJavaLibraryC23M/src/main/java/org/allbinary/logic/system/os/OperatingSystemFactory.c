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
// package org.allbinary.logic.system.os

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/os/android/AndroidOperatingSystemFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct OperatingSystemFactory OperatingSystemFactory;
struct OperatingSystemFactory {
    LogUtil* logUtil;
    GenericOperatingSystem* genericOperatingSystem;
    bool hasDetected;
};

static OperatingSystemFactory* OperatingSystemFactory_instance;

OperatingSystemFactory* OperatingSystemFactory_new(void);
OperatingSystemFactory* OperatingSystemFactory_getInstance(void);

void OperatingSystemFactory_init(OperatingSystemFactory* this);
GenericOperatingSystem* OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory* this);

// Static fields with runtime initializers: call this once at startup
void OperatingSystemFactory_staticInit(void) {
    OperatingSystemFactory_instance = OperatingSystemFactory_new();
}

static void OperatingSystemFactory_initFields(OperatingSystemFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->genericOperatingSystem = NoOperatingSystem_NO_OPERATING_SYSTEM;
    this->hasDetected = false;
}


OperatingSystemFactory* OperatingSystemFactory_getInstance(void) {
        return OperatingSystemFactory_instance;
}


void OperatingSystemFactory_init(OperatingSystemFactory* this) {
    OperatingSystemFactory_initFields(this);
}

OperatingSystemFactory* OperatingSystemFactory_new(void) {
    OperatingSystemFactory* this = calloc(1, sizeof(OperatingSystemFactory));
    OperatingSystemFactory_init(this);
    return this;
}


// synchronized
GenericOperatingSystem* OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            SystemProperties* systemProperties = SystemProperties_getInstance();
            const char* osName = SystemProperties_getName(systemProperties);
            if (!this->hasDetected) {
                this->hasDetected = true;
                if (java_string_indexOf(osName, OperatingSystems_getInstance()->ANDROID) >= 0) {
                    LogUtil_putF(this->logUtil, "Found a Android OS", this, commonStrings->GET_INSTANCE);
                    this->genericOperatingSystem = AndroidOperatingSystemFactory_getOperatingSystemInstance(AndroidOperatingSystemFactory_getInstance());
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Operating System Info: "), append, GenericOperatingSystem_toString(this->genericOperatingSystem)), toString), this, commonStrings->GET_INSTANCE);
                } else if (java_string_indexOf(osName, OperatingSystems_getInstance()->HARMONY) >= 0) {
                    LogUtil_putF(this->logUtil, "Found a Harmony OS", this, commonStrings->GET_INSTANCE);
                    this->genericOperatingSystem = AndroidOperatingSystemFactory_getOperatingSystemInstance(AndroidOperatingSystemFactory_getInstance());
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Operating System Info: "), append, GenericOperatingSystem_toString(this->genericOperatingSystem)), toString), this, commonStrings->GET_INSTANCE);
                } else {
                    java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "OS Not Supported: "), append, osName), toString)));
                }
            }
        } JAVA_CATCH(Exception, e) {
            this->genericOperatingSystem = NoOperatingSystem_NO_OPERATING_SYSTEM;
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
        return this->genericOperatingSystem;
}

