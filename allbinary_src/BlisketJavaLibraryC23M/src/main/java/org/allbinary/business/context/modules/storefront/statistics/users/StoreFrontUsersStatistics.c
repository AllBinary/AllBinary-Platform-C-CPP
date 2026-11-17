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
// package org.allbinary.business.context.modules.storefront.statistics.users

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/data/tables/user/UserEntityInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h"

typedef struct StoreFrontUsersStatistics StoreFrontUsersStatistics;
struct StoreFrontUsersStatistics {
    StoreFrontUsersStatisticsInterface StoreFrontUsersStatisticsInterface_interface;
    int64_t totalNumberOfUsers;
    HashMap* totalUsersByRoleHashMap;
};


StoreFrontUsersStatistics* StoreFrontUsersStatistics_new(StoreFrontInterface* storeFrontInterface);

void StoreFrontUsersStatistics_init(StoreFrontUsersStatistics* this, StoreFrontInterface* storeFrontInterface);
static int64_t StoreFrontUsersStatistics_getNewTotal(StoreFrontUsersStatistics* this, UserRole* userRole);
int64_t StoreFrontUsersStatistics_getNumberOfUsers(StoreFrontUsersStatistics* this);
int64_t StoreFrontUsersStatistics_getNumberOfUsersByRole(StoreFrontUsersStatistics* this, const char* role);
HashMap* StoreFrontUsersStatistics_toHashMap(StoreFrontUsersStatistics* this);
BasicArrayList* StoreFrontUsersStatistics_toVector(StoreFrontUsersStatistics* this);
Any* StoreFrontUsersStatistics_getKey(StoreFrontUsersStatistics* this);

static void StoreFrontUsersStatistics_initFields(StoreFrontUsersStatistics* this) {
    
    
}


void StoreFrontUsersStatistics_init(StoreFrontUsersStatistics* this, StoreFrontInterface* storeFrontInterface) {
    StoreFrontUsersStatistics_initFields(this);
        this->totalUsersByRoleHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        UserEntityInterface* userEntityInterface = UserEntityFactory_getInstance();
        BasicArrayList* userVector = UserEntityInterface_getCustomers(userEntityInterface);
        this->totalNumberOfUsers = BasicArrayList_size(userVector);
        int32_t size = BasicArrayList_size(userVector);
        for (int32_t index = 0; index < size; index++) {
            UserInterface* userInterface = ((UserInterface*) BasicArrayList_get(userVector, index));
            UserRole* nextUserRole = UserInterface_getRole(userInterface);
            int64_t currentNumberOfUsersForRole = StoreFrontUsersStatistics_getNewTotal(this, nextUserRole);
            HashMap_put(this->totalUsersByRoleHashMap, nextUserRole, currentNumberOfUsersForRole);
        }
}

StoreFrontUsersStatistics* StoreFrontUsersStatistics_new(StoreFrontInterface* storeFrontInterface) {
    StoreFrontUsersStatistics* this = calloc(1, sizeof(StoreFrontUsersStatistics));
    StoreFrontUsersStatistics_init(this, storeFrontInterface);
    return this;
}


static int64_t StoreFrontUsersStatistics_getNewTotal(StoreFrontUsersStatistics* this, UserRole* userRole) {
        int64_t numberOfUsersForRoleLong = ((int64_t) HashMap_get(this->totalUsersByRoleHashMap, userRole));
        if (numberOfUsersForRoleLong == nullptr) {
            numberOfUsersForRoleLong = 0;
        }
        return Long_longValue(numberOfUsersForRoleLong) + 1;
}


int64_t StoreFrontUsersStatistics_getNumberOfUsers(StoreFrontUsersStatistics* this) {
        return this->totalNumberOfUsers;
}


int64_t StoreFrontUsersStatistics_getNumberOfUsersByRole(StoreFrontUsersStatistics* this, const char* role) {
        int64_t totalForRole = ((int64_t) HashMap_get(this->totalUsersByRoleHashMap, role));
        return totalForRole;
}


HashMap* StoreFrontUsersStatistics_toHashMap(StoreFrontUsersStatistics* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, StoreFrontUsersStatisticsData_getInstance()->NUMBEROFUSERS, JAVA_CALL(StoreFrontUsersStatistics_getNumberOfUsers(this), toString));
        Set* setOfUserRoles = HashMap_keySet(this->totalUsersByRoleHashMap);
        UserRole* nextUserRole = nullptr;
        Any** userRoleArray = Set_toArray(setOfUserRoles);
        int32_t size = java_array_length(userRoleArray);
        for (int32_t index = 0; index < size; index++) {
            nextUserRole = ((UserRole*) userRoleArray[index]);
            int64_t totalForRole = ((int64_t) HashMap_get(this->totalUsersByRoleHashMap, nextUserRole));
            HashMap_put(hashMap, UserRole_toString(nextUserRole), Long_toString(totalForRole));
        }
        return hashMap;
}


BasicArrayList* StoreFrontUsersStatistics_toVector(StoreFrontUsersStatistics* this) {
        return nullptr;
}


Any* StoreFrontUsersStatistics_getKey(StoreFrontUsersStatistics* this) {
        return nullptr;
}

