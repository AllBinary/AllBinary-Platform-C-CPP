#ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
#define ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
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
// package org.allbinary.business.user.role

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicUserRoleFactory BasicUserRoleFactory;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct StoreRoleFactory StoreRoleFactory;
struct StoreRoleFactory {
    BasicArrayList* roles;
    BasicArrayList* subscriberRoles;
    BasicArrayList* wholesaleRoles;
};


StoreRoleFactory* StoreRoleFactory_new(void);

StoreRoleFactory* StoreRoleFactory_getInstance(void);

void StoreRoleFactory_init(StoreRoleFactory* this);

BasicArrayList* StoreRoleFactory_getRoles(StoreRoleFactory* this);

BasicArrayList* StoreRoleFactory_getSubscriberRoles(StoreRoleFactory* this);

BasicArrayList* StoreRoleFactory_getWholesaleRoles(StoreRoleFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StoreRoleFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StoreRoleFactory_register(void);


#endif // ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
