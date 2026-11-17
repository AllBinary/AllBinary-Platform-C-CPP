#ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H
#define ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H
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

typedef struct AdminRoleFactory AdminRoleFactory;
struct AdminRoleFactory {
    BasicArrayList* adminRoles;
    BasicArrayList* storeAdminRoles;
    BasicArrayList* storeManagementRoles;
    BasicArrayList* productManagementRoles;
    BasicArrayList* reviewManagementRoles;
    BasicArrayList* customerManagementRoles;
    BasicArrayList* workflowManagementRoles;
    BasicArrayList* orderManagementRoles;
    BasicArrayList* adjusterManagementRoles;
    BasicArrayList* shippingManagementRoles;
    BasicArrayList* webManagementRoles;
};


AdminRoleFactory* AdminRoleFactory_new(void);

AdminRoleFactory* AdminRoleFactory_getInstance(void);

void AdminRoleFactory_init(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getProductManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getAdminRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getStoreAdminRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getStoreManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getReviewManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getCustomerManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getWorkflowManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getWebManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getShippingManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getAdjusterManagementRoles(AdminRoleFactory* this);

BasicArrayList* AdminRoleFactory_getOrderManagementRoles(AdminRoleFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdminRoleFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdminRoleFactory_register(void);


#endif // ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H
