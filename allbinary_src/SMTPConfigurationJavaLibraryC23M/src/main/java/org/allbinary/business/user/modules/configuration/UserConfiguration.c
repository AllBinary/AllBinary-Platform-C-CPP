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
// package org.allbinary.business.user.modules.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/time/created/TimeCreated.h"
#include "org/allbinary/business/time/modified/TimeLastModified.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"

typedef struct UserConfiguration UserConfiguration;
struct UserConfiguration {
    UserConfigurationInterface UserConfigurationInterface_interface;
    UserEmailConfigurationInterface* userEmailConfigurationInterface;
    TimeCreated* timeCreated;
    TimeLastModified* timeLastModified;
};


UserConfiguration* UserConfiguration_new(void);

void UserConfiguration_init(UserConfiguration* this);

UserConfiguration* UserConfiguration_new1(HashMap* hashMap);
void UserConfiguration_init1(UserConfiguration* this, HashMap* hashMap);
UserEmailConfigurationInterface* UserConfiguration_getUserEmailConfigurationInterface(UserConfiguration* this);
void UserConfiguration_setUserEmailConfigurationInterface(UserConfiguration* this, UserEmailConfigurationInterface* userEmailConfigurationInterface);
TimeCreated* UserConfiguration_getTimeCreated(UserConfiguration* this);
TimeLastModified* UserConfiguration_getTimeLastModified(UserConfiguration* this);
void UserConfiguration_setTimeCreated(UserConfiguration* this, TimeCreated* timeCreated);
void UserConfiguration_setTimeLastModified(UserConfiguration* this, TimeLastModified* timeLastModified);

static void UserConfiguration_initFields(UserConfiguration* this) {
    
    
    
}


void UserConfiguration_init(UserConfiguration* this) {
    UserConfiguration_initFields(this);
        this->userEmailConfigurationInterface = ((UserEmailConfigurationInterface*) UserEmailConfiguration_new());
        this->timeCreated = TimeCreated_new(0);
        this->timeLastModified = TimeLastModified_new(0);
}

UserConfiguration* UserConfiguration_new(void) {
    UserConfiguration* this = calloc(1, sizeof(UserConfiguration));
    UserConfiguration_init(this);
    return this;
}


void UserConfiguration_init1(UserConfiguration* this, HashMap* hashMap) {
    UserConfiguration_initFields(this);
        this->userEmailConfigurationInterface = ((UserEmailConfigurationInterface*) UserEmailConfiguration_new(hashMap));
        this->timeCreated = TimeCreated_new(((const char*) HashMap_get(hashMap, EntryData_getInstance()->TIMECREATED)));
        this->timeLastModified = TimeLastModified_new(((const char*) HashMap_get(hashMap, EntryData_getInstance()->LASTMODIFIED)));
}

UserConfiguration* UserConfiguration_new1(HashMap* hashMap) {
    UserConfiguration* this = calloc(1, sizeof(UserConfiguration));
    UserConfiguration_init1(this, hashMap);
    return this;
}


UserEmailConfigurationInterface* UserConfiguration_getUserEmailConfigurationInterface(UserConfiguration* this) {
        return this->userEmailConfigurationInterface;
}


void UserConfiguration_setUserEmailConfigurationInterface(UserConfiguration* this, UserEmailConfigurationInterface* userEmailConfigurationInterface) {
        this->userEmailConfigurationInterface = userEmailConfigurationInterface;
}


TimeCreated* UserConfiguration_getTimeCreated(UserConfiguration* this) {
        return this->timeCreated;
}


TimeLastModified* UserConfiguration_getTimeLastModified(UserConfiguration* this) {
        return this->timeLastModified;
}


void UserConfiguration_setTimeCreated(UserConfiguration* this, TimeCreated* timeCreated) {
        this->timeCreated = timeCreated;
}


void UserConfiguration_setTimeLastModified(UserConfiguration* this, TimeLastModified* timeLastModified) {
        this->timeLastModified = timeLastModified;
}

