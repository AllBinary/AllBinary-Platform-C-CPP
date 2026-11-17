#ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H
#define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H
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
typedef struct BasicUserRoles BasicUserRoles;
#include "java/io/Serializable.h"

typedef struct BasicUserRole BasicUserRole;
struct BasicUserRole {
    Serializable Serializable_interface;
    int32_t m_int_RoleId;
    const char* role;
    const char* displayValue;
    int64_t sessionTimeout;
    int64_t sessionInactivityTimeout;
};


BasicUserRole* BasicUserRole_new(const char* aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);

void BasicUserRole_init(BasicUserRole* this, const char* aRole, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);

BasicUserRole* BasicUserRole_new5(const char* aRole, const char* aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);
void BasicUserRole_init5(BasicUserRole* this, const char* aRole, const char* aDisplayValue, int32_t a_int_RoleId, int64_t aSessionTimeout, int64_t aSessionInactivityTimeout);


const char* BasicUserRole_getRole(BasicUserRole* this);

int64_t BasicUserRole_getSessionTimeout(BasicUserRole* this);

int64_t BasicUserRole_getSessionInactivityTimeout(BasicUserRole* this);

bool BasicUserRole_equals(BasicUserRole* this, BasicUserRole* basicUserRole);

const char* BasicUserRole_toString(BasicUserRole* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicUserRole_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicUserRole_register(void);


#endif // ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLE_H
