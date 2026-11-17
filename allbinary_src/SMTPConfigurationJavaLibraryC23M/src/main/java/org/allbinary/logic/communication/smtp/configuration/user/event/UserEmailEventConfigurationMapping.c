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

typedef struct UserEmailEventConfigurationMapping UserEmailEventConfigurationMapping;
struct UserEmailEventConfigurationMapping {
    TableMappingInterface TableMappingInterface_interface;
    UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface;
};


UserEmailEventConfigurationMapping* UserEmailEventConfigurationMapping_new(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);

void UserEmailEventConfigurationMapping_init(UserEmailEventConfigurationMapping* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);
HashMap* UserEmailEventConfigurationMapping_toHashMap(UserEmailEventConfigurationMapping* this);
Any* UserEmailEventConfigurationMapping_getKey(UserEmailEventConfigurationMapping* this);
BasicArrayList* UserEmailEventConfigurationMapping_toVector(UserEmailEventConfigurationMapping* this);

static void UserEmailEventConfigurationMapping_initFields(UserEmailEventConfigurationMapping* this) {
    
}


void UserEmailEventConfigurationMapping_init(UserEmailEventConfigurationMapping* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) {
    UserEmailEventConfigurationMapping_initFields(this);
        this->userEmailEventConfigurationInterface = userEmailEventConfigurationInterface;
}

UserEmailEventConfigurationMapping* UserEmailEventConfigurationMapping_new(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) {
    UserEmailEventConfigurationMapping* this = calloc(1, sizeof(UserEmailEventConfigurationMapping));
    UserEmailEventConfigurationMapping_init(this, userEmailEventConfigurationInterface);
    return this;
}


HashMap* UserEmailEventConfigurationMapping_toHashMap(UserEmailEventConfigurationMapping* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, UserEmailEventConfigurationData_NAME, UserEmailEventConfigurationInterface_getName(this->userEmailEventConfigurationInterface));
        HashMap_put(hashMap, UserEmailEventConfigurationData_LISTENER_CLASSPATH, UserEmailEventConfigurationInterface_getEventListenerClassPath(this->userEmailEventConfigurationInterface));
        return hashMap;
}


// throws Exception
Any* UserEmailEventConfigurationMapping_getKey(UserEmailEventConfigurationMapping* this) {
        return UserEmailEventConfigurationData_NAME;
}


// throws Exception
BasicArrayList* UserEmailEventConfigurationMapping_toVector(UserEmailEventConfigurationMapping* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, UserEmailEventConfigurationInterface_getName(this->userEmailEventConfigurationInterface));
        BasicArrayList_add(vector, UserEmailEventConfigurationInterface_getEventListenerClassPath(this->userEmailEventConfigurationInterface));
        return vector;
}

