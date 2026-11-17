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
#include "org/allbinary/android/AndroidInfoFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct AndroidOS AndroidOS;
struct AndroidOS {
    GenericOperatingSystem base;
    StringMaker* stringBuffer;
    const char* DEVICE_ID;
    const char* DEVICE_SOFTWARE_VERSION;
    const char* LINE_1_NUMBER;
    const char* OUYA;
};


AndroidOS* AndroidOS_new(void);

void AndroidOS_init(AndroidOS* this);
bool AndroidOS_isOverScan(AndroidOS* this);
int32_t AndroidOS_getOverScanXPercent(AndroidOS* this);
int32_t AndroidOS_getOverScanYPercent(AndroidOS* this);
const char* AndroidOS_toString(AndroidOS* this);

static void AndroidOS_initFields(AndroidOS* this) {
    this->stringBuffer = StringMaker_new();
    this->DEVICE_ID = "DeviceId";
    this->DEVICE_SOFTWARE_VERSION = "DeviceSoftwareVersion";
    this->LINE_1_NUMBER = "Line1Number";
    this->OUYA = "ouya";
}


void AndroidOS_init(AndroidOS* this) {
    GenericOperatingSystem_init(&this->base);
    AndroidOS_initFields(this);
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        if (SDK_VERSION > 10) {
            this->scalable = true;
        }
        AndroidSystemProperties* properties = AndroidSystemProperties_getInstance();
        CommonSeps* commonStrings = CommonSeps_getInstance();
        StringMaker_append(this->stringBuffer, this->DEVICE_ID);
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getDeviceId(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, this->DEVICE_SOFTWARE_VERSION);
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getDeviceSoftwareVersion(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, this->LINE_1_NUMBER);
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getLine1Number(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "NetworkCountryIso");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getNetworkCountryIso(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "NetworkOperator");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getNetworkOperator(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "NetworkOperatorName");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getNetworkOperatorName(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "NetworkType");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(this->stringBuffer, ((int32_t) AndroidSystemProperties_getNetworkType(properties)));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "PhoneType");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(this->stringBuffer, ((int32_t) AndroidSystemProperties_getPhoneType(properties)));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "SimCountryIso");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getSimCountryIso(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "SimOperator");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getSimOperator(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "SimOperatorName");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getSimOperatorName(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "SimSerialNumber");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getSimSerialNumber(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "SubscriberId");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getSubscriberId(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "VoiceMailAlphaTag");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getVoiceMailAlphaTag(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
        StringMaker_append(this->stringBuffer, "VoiceMailNumber");
        StringMaker_append(this->stringBuffer, commonStrings->EQUALS);
        StringMaker_append(this->stringBuffer, AndroidSystemProperties_getVoiceMailNumber(properties));
        StringMaker_append(this->stringBuffer, commonStrings->SPACE);
}

AndroidOS* AndroidOS_new(void) {
    AndroidOS* this = calloc(1, sizeof(AndroidOS));
    AndroidOS_init(this);
    return this;
}


bool AndroidOS_isOverScan(AndroidOS* this) {
        AndroidSystemProperties* properties = AndroidSystemProperties_getInstance();
        if (java_string_indexOf(JAVA_CALL(AndroidSystemProperties_getDevice(properties), toLowerCase), this->OUYA) >= 0) {
            return true;
        }
        return false;
}


int32_t AndroidOS_getOverScanXPercent(AndroidOS* this) {
        return 90;
}


int32_t AndroidOS_getOverScanYPercent(AndroidOS* this) {
        return 90;
}


const char* AndroidOS_toString(AndroidOS* this) {
        StringMaker* osBuffer = StringMaker_new();
        StringMaker_append(osBuffer, GenericOperatingSystem_toString((&this->base)));
        StringMaker_append(osBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(osBuffer, "Other System Info: \n");
        StringMaker_append(osBuffer, StringMaker_toString(this->stringBuffer));
        return StringMaker_toString(osBuffer);
}

