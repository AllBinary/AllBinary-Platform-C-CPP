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
// package org.allbinary.logic.communication.smtp.configuration.user.event

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

typedef struct UserEmailEventsConfigurationMapping UserEmailEventsConfigurationMapping;
struct UserEmailEventsConfigurationMapping {
    TableMappingInterface TableMappingInterface_interface;
    UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface;
};


UserEmailEventsConfigurationMapping* UserEmailEventsConfigurationMapping_new(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface);

void UserEmailEventsConfigurationMapping_init(UserEmailEventsConfigurationMapping* this, UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface);
HashMap* UserEmailEventsConfigurationMapping_toHashMap(UserEmailEventsConfigurationMapping* this);
Any* UserEmailEventsConfigurationMapping_getKey(UserEmailEventsConfigurationMapping* this);
BasicArrayList* UserEmailEventsConfigurationMapping_toVector(UserEmailEventsConfigurationMapping* this);

static void UserEmailEventsConfigurationMapping_initFields(UserEmailEventsConfigurationMapping* this) {
    
}


void UserEmailEventsConfigurationMapping_init(UserEmailEventsConfigurationMapping* this, UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface) {
    UserEmailEventsConfigurationMapping_initFields(this);
        this->userEmailEventsConfigurationInterface = userEmailEventsConfigurationInterface;
}

UserEmailEventsConfigurationMapping* UserEmailEventsConfigurationMapping_new(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface) {
    UserEmailEventsConfigurationMapping* this = calloc(1, sizeof(UserEmailEventsConfigurationMapping));
    UserEmailEventsConfigurationMapping_init(this, userEmailEventsConfigurationInterface);
    return this;
}


HashMap* UserEmailEventsConfigurationMapping_toHashMap(UserEmailEventsConfigurationMapping* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        return hashMap;
}


// throws Exception
Any* UserEmailEventsConfigurationMapping_getKey(UserEmailEventsConfigurationMapping* this) {
        return UserEmailEventsConfigurationData_NAME;
}


// throws Exception
BasicArrayList* UserEmailEventsConfigurationMapping_toVector(UserEmailEventsConfigurationMapping* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        return vector;
}

