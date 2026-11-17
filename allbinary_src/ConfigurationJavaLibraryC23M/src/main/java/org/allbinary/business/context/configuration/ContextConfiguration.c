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
// package org.allbinary.business.context.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfiguration.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"

typedef struct ContextConfiguration ContextConfiguration;
struct ContextConfiguration {
    ContextConfigurationInterface ContextConfigurationInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    EmailServerConfigurationInterface* emailServerConfigurationInterface;
};


ContextConfiguration* ContextConfiguration_new(void);

void ContextConfiguration_init(ContextConfiguration* this);

ContextConfiguration* ContextConfiguration_new1(HashMap* hashMap);
void ContextConfiguration_init1(ContextConfiguration* this, HashMap* hashMap);
EmailServerConfigurationInterface* ContextConfiguration_getEmailServerConfigurationInterface(ContextConfiguration* this);
void ContextConfiguration_setEmailServerConfigurationInterface(ContextConfiguration* this, EmailServerConfigurationInterface* emailServerConfigurationInterface);

static void ContextConfiguration_initFields(ContextConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->emailServerConfigurationInterface = nullptr;
}


void ContextConfiguration_init(ContextConfiguration* this) {
    ContextConfiguration_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "ContextConfiguration");
        ContextConfiguration_setEmailServerConfigurationInterface(this, ((EmailServerConfigurationInterface*) EmailServerConfiguration_new()));
}

ContextConfiguration* ContextConfiguration_new(void) {
    ContextConfiguration* this = calloc(1, sizeof(ContextConfiguration));
    ContextConfiguration_init(this);
    return this;
}


void ContextConfiguration_init1(ContextConfiguration* this, HashMap* hashMap) {
    ContextConfiguration_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "ContextConfiguration(HashMap)");
        ContextConfiguration_setEmailServerConfigurationInterface(this, ((EmailServerConfigurationInterface*) EmailServerConfiguration_new(hashMap)));
}

ContextConfiguration* ContextConfiguration_new1(HashMap* hashMap) {
    ContextConfiguration* this = calloc(1, sizeof(ContextConfiguration));
    ContextConfiguration_init1(this, hashMap);
    return this;
}


EmailServerConfigurationInterface* ContextConfiguration_getEmailServerConfigurationInterface(ContextConfiguration* this) {
        return this->emailServerConfigurationInterface;
}


void ContextConfiguration_setEmailServerConfigurationInterface(ContextConfiguration* this, EmailServerConfigurationInterface* emailServerConfigurationInterface) {
        this->emailServerConfigurationInterface = emailServerConfigurationInterface;
}

