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
// package org.allbinary.data.tables.user

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/data/tables/BasicDataTableInterface.h"

typedef struct UserEntityInterface UserEntityInterface;
struct UserEntityInterface {
    BasicArrayList* (*getAdministrators)(void* this);
    BasicArrayList* (*getStoreManagers)(void* this, StoreFrontInterface* storeFrontInterface);
    BasicArrayList* (*getCustomers)(void* this);
    BasicArrayList* (*getUsersWithRole)(void* this, UserRole* userRole);
    BasicArrayList* (*getUsers)(void* this, StoreFrontInterface* storeFrontInterface);
    UserInterface* (*getUser)(void* this, const char* userName);
    const char* (*login)(void* this, const char* userName, const char* password);
    void (*deleteWhere)(void* this, const char* key, const char* value);
    void (*insert)(void* this, BasicArrayList* values);
    void (*update)(void* this, const char* userName, HashMap* updatedValues);
};


