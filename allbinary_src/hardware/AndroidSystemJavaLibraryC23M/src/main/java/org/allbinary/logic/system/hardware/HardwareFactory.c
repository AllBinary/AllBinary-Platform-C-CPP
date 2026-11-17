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
// package org.allbinary.logic.system.hardware

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
#include "org/allbinary/logic/system/hardware/android/AndroidHardware.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct HardwareFactory HardwareFactory;
struct HardwareFactory {
    LogUtil* logUtil;
    TsUtil* tsUtil;
};

static HardwareFactory* HardwareFactory_instance;

HardwareFactory* HardwareFactory_new(void);
HardwareFactory* HardwareFactory_getInstance(void);

void HardwareFactory_init(HardwareFactory* this);
HardwareInterface* HardwareFactory_getInstance(HardwareFactory* this, GenericOperatingSystem* os);

// Static fields with runtime initializers: call this once at startup
void HardwareFactory_staticInit(void) {
    HardwareFactory_instance = HardwareFactory_new();
}

static void HardwareFactory_initFields(HardwareFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
}


HardwareFactory* HardwareFactory_getInstance(void) {
        return HardwareFactory_instance;
}


void HardwareFactory_init(HardwareFactory* this) {
    HardwareFactory_initFields(this);
}

HardwareFactory* HardwareFactory_new(void) {
    HardwareFactory* this = calloc(1, sizeof(HardwareFactory));
    HardwareFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
HardwareInterface* HardwareFactory_getInstance(HardwareFactory* this, GenericOperatingSystem* os) {
        JAVA_TRY {
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            if (TsUtil_compareTo(this->tsUtil, GenericOperatingSystem_getName(os), operatingSystems->ANDROID) == 0) {
                return AndroidHardware_new();
            } else if (TsUtil_compareTo(this->tsUtil, GenericOperatingSystem_getName(os), operatingSystems->HARMONY) == 0) {
                return AndroidHardware_new();
            }
            java_throw(java_exception_new("Exception", java_concat("No Hardware Imp for: ", GenericOperatingSystem_getName(os))));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, "Ignoring Exception Returning NoHardware", this, commonStrings->GET_INSTANCE, e);
            return NoHardware_new();
        } JAVA_END_TRY;
}

