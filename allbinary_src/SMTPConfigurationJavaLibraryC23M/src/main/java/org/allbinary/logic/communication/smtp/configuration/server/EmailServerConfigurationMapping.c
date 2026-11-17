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
// package org.allbinary.logic.communication.smtp.configuration.server

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct EmailServerConfigurationMapping EmailServerConfigurationMapping;
struct EmailServerConfigurationMapping {
    TableMappingInterface TableMappingInterface_interface;
    EmailServerConfigurationInterface* emailServerConfigurationInterface;
};


EmailServerConfigurationMapping* EmailServerConfigurationMapping_new(EmailServerConfigurationInterface* emailServerConfigurationInterface);

void EmailServerConfigurationMapping_init(EmailServerConfigurationMapping* this, EmailServerConfigurationInterface* emailServerConfigurationInterface);
HashMap* EmailServerConfigurationMapping_toHashMap(EmailServerConfigurationMapping* this);
Any* EmailServerConfigurationMapping_getKey(EmailServerConfigurationMapping* this);
BasicArrayList* EmailServerConfigurationMapping_toVector(EmailServerConfigurationMapping* this);

static void EmailServerConfigurationMapping_initFields(EmailServerConfigurationMapping* this) {
    
}


void EmailServerConfigurationMapping_init(EmailServerConfigurationMapping* this, EmailServerConfigurationInterface* emailServerConfigurationInterface) {
    EmailServerConfigurationMapping_initFields(this);
        this->emailServerConfigurationInterface = emailServerConfigurationInterface;
}

EmailServerConfigurationMapping* EmailServerConfigurationMapping_new(EmailServerConfigurationInterface* emailServerConfigurationInterface) {
    EmailServerConfigurationMapping* this = calloc(1, sizeof(EmailServerConfigurationMapping));
    EmailServerConfigurationMapping_init(this, emailServerConfigurationInterface);
    return this;
}


HashMap* EmailServerConfigurationMapping_toHashMap(EmailServerConfigurationMapping* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, EmailServerConfigurationData_SERVER, EmailServerConfigurationInterface_getSmtpServer(this->emailServerConfigurationInterface));
        HashMap_put(hashMap, EmailServerConfigurationData_ACCOUNT, EmailServerConfigurationInterface_getAccountName(this->emailServerConfigurationInterface));
        HashMap_put(hashMap, EmailServerConfigurationData_PASSWORD, EmailServerConfigurationInterface_getPassword(this->emailServerConfigurationInterface));
        return hashMap;
}


// throws Exception
Any* EmailServerConfigurationMapping_getKey(EmailServerConfigurationMapping* this) {
        return EmailServerConfigurationData_NAME;
}


// throws Exception
BasicArrayList* EmailServerConfigurationMapping_toVector(EmailServerConfigurationMapping* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, EmailServerConfigurationInterface_getSmtpServer(this->emailServerConfigurationInterface));
        return vector;
}

