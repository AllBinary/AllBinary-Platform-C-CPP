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
// package org.allbinary.logic.communication.smtp.configuration.user

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

typedef struct UserEmailConfigurationMapping UserEmailConfigurationMapping;
struct UserEmailConfigurationMapping {
    TableMappingInterface TableMappingInterface_interface;
    UserEmailConfigurationInterface* userEmailConfigurationInterface;
};


UserEmailConfigurationMapping* UserEmailConfigurationMapping_new(UserEmailConfigurationInterface* userEmailConfigurationInterface);

void UserEmailConfigurationMapping_init(UserEmailConfigurationMapping* this, UserEmailConfigurationInterface* userEmailConfigurationInterface);
HashMap* UserEmailConfigurationMapping_toHashMap(UserEmailConfigurationMapping* this);
Any* UserEmailConfigurationMapping_getKey(UserEmailConfigurationMapping* this);
BasicArrayList* UserEmailConfigurationMapping_toVector(UserEmailConfigurationMapping* this);

static void UserEmailConfigurationMapping_initFields(UserEmailConfigurationMapping* this) {
    
}


void UserEmailConfigurationMapping_init(UserEmailConfigurationMapping* this, UserEmailConfigurationInterface* userEmailConfigurationInterface) {
    UserEmailConfigurationMapping_initFields(this);
        this->userEmailConfigurationInterface = userEmailConfigurationInterface;
}

UserEmailConfigurationMapping* UserEmailConfigurationMapping_new(UserEmailConfigurationInterface* userEmailConfigurationInterface) {
    UserEmailConfigurationMapping* this = calloc(1, sizeof(UserEmailConfigurationMapping));
    UserEmailConfigurationMapping_init(this, userEmailConfigurationInterface);
    return this;
}


HashMap* UserEmailConfigurationMapping_toHashMap(UserEmailConfigurationMapping* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        return hashMap;
}


// throws Exception
Any* UserEmailConfigurationMapping_getKey(UserEmailConfigurationMapping* this) {
        return UserEmailConfigurationData_NAME;
}


// throws Exception
BasicArrayList* UserEmailConfigurationMapping_toVector(UserEmailConfigurationMapping* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        return vector;
}

