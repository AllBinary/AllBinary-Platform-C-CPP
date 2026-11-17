#ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H
#define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H
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
typedef struct BasicUserRole BasicUserRole;
#if __has_include("org/allbinary/business/user/role/BasicUserRole.h")
#include "org/allbinary/business/user/role/BasicUserRole.h"
#endif

typedef struct BasicUserRoleFactory BasicUserRoleFactory;
struct BasicUserRoleFactory {
    int64_t INACTIVITYTIMEOUT;
    int64_t CUSTOMERTIMEOUT;
    int64_t CUSTOMERMAXSESSIONTIME;
    int64_t MAXSESSIONTIME;
    BasicUserRole* INSTALLER;
    BasicUserRole* ADMINISTRATOR;
    BasicUserRole* CUSTOMER;
    BasicUserRole* SUBSCRIBERCUSTOMER;
    BasicUserRole* WHOLESALECUSTOMER;
    BasicUserRole* STOREMANAGER;
    BasicUserRole* PRODUCTMANAGER;
    BasicUserRole* CUSTOMERMANAGER;
    BasicUserRole* PAYMENTMANAGER;
    BasicUserRole* ORDERMANAGER;
    BasicUserRole* WEBMANAGER;
    BasicUserRole* REVIEWER;
    BasicUserRole* SHIPPING;
    BasicUserRole* ADJUSTER;
    BasicUserRole* WORKFLOWEDITOR;
    BasicUserRole* WIZARD;
    BasicUserRole* VIEWEDITOR;
};


BasicUserRoleFactory* BasicUserRoleFactory_new(void);
void BasicUserRoleFactory_init(BasicUserRoleFactory* this);

BasicUserRoleFactory* BasicUserRoleFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicUserRoleFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicUserRoleFactory_register(void);


#endif // ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H
