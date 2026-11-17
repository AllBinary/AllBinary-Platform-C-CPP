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
#include "android/content/Context.h"
#include "android/os/Build.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AndroidSystemProperties AndroidSystemProperties;
struct AndroidSystemProperties {
    CommonStrings* commonStrings;
};

static AndroidSystemProperties* AndroidSystemProperties_SINGLETON;

AndroidSystemProperties* AndroidSystemProperties_new(Context* context);
AndroidSystemProperties* AndroidSystemProperties_getInstance(void);

void AndroidSystemProperties_init(AndroidSystemProperties* this, Context* context);
const char* AndroidSystemProperties_getDeviceId(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getDeviceSoftwareVersion(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getLine1Number(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getNetworkCountryIso(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getNetworkOperator(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getNetworkOperatorName(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getSimCountryIso(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getSimOperator(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getSimOperatorName(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getSimSerialNumber(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getSubscriberId(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getVoiceMailAlphaTag(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getVoiceMailNumber(AndroidSystemProperties* this);
int32_t AndroidSystemProperties_getNetworkType(AndroidSystemProperties* this);
int32_t AndroidSystemProperties_getPhoneType(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getBoard(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getBrand(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getDevice(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getFingerprint(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getHost(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getId(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getModel(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getProduct(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getTags(AndroidSystemProperties* this);
int64_t AndroidSystemProperties_getTime(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getType(AndroidSystemProperties* this);
const char* AndroidSystemProperties_getUser(AndroidSystemProperties* this);

// Static fields with runtime initializers: call this once at startup
void AndroidSystemProperties_staticInit(void) {
    AndroidSystemProperties_SINGLETON = AndroidSystemProperties_new(ResourceUtil_getContext(ResourceUtil_getInstance()));
}

static void AndroidSystemProperties_initFields(AndroidSystemProperties* this) {
    this->commonStrings = CommonStrings_getInstance();
}


AndroidSystemProperties* AndroidSystemProperties_getInstance(void) {
        return AndroidSystemProperties_SINGLETON;
}


void AndroidSystemProperties_init(AndroidSystemProperties* this, Context* context) {
    AndroidSystemProperties_initFields(this);
}

AndroidSystemProperties* AndroidSystemProperties_new(Context* context) {
    AndroidSystemProperties* this = calloc(1, sizeof(AndroidSystemProperties));
    AndroidSystemProperties_init(this, context);
    return this;
}


const char* AndroidSystemProperties_getDeviceId(AndroidSystemProperties* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


const char* AndroidSystemProperties_getDeviceSoftwareVersion(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getLine1Number(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getNetworkCountryIso(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getNetworkOperator(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getNetworkOperatorName(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getSimCountryIso(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getSimOperator(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getSimOperatorName(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getSimSerialNumber(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getSubscriberId(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getVoiceMailAlphaTag(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


const char* AndroidSystemProperties_getVoiceMailNumber(AndroidSystemProperties* this) {
        return this->commonStrings->DISABLE;
}


int32_t AndroidSystemProperties_getNetworkType(AndroidSystemProperties* this) {
        return -1;
}


int32_t AndroidSystemProperties_getPhoneType(AndroidSystemProperties* this) {
        return -1;
}


const char* AndroidSystemProperties_getBoard(AndroidSystemProperties* this) {
        return Build_BOARD;
}


const char* AndroidSystemProperties_getBrand(AndroidSystemProperties* this) {
        return Build_BRAND;
}


const char* AndroidSystemProperties_getDevice(AndroidSystemProperties* this) {
        return Build_DEVICE;
}


const char* AndroidSystemProperties_getFingerprint(AndroidSystemProperties* this) {
        return Build_FINGERPRINT;
}


const char* AndroidSystemProperties_getHost(AndroidSystemProperties* this) {
        return Build_HOST;
}


const char* AndroidSystemProperties_getId(AndroidSystemProperties* this) {
        return Build_ID;
}


const char* AndroidSystemProperties_getModel(AndroidSystemProperties* this) {
        return Build_MODEL;
}


const char* AndroidSystemProperties_getProduct(AndroidSystemProperties* this) {
        return Build_PRODUCT;
}


const char* AndroidSystemProperties_getTags(AndroidSystemProperties* this) {
        return Build_TAGS;
}


int64_t AndroidSystemProperties_getTime(AndroidSystemProperties* this) {
        return Build_TIME;
}


const char* AndroidSystemProperties_getType(AndroidSystemProperties* this) {
        return Build_TYPE;
}


const char* AndroidSystemProperties_getUser(AndroidSystemProperties* this) {
        return Build_USER;
}

