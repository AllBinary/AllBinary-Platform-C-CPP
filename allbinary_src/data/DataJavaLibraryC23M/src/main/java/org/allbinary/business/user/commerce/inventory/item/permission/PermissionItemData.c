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
// package org.allbinary.business.user.commerce.inventory.item.permission

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PermissionItemData PermissionItemData;
struct PermissionItemData {
    char unused;
};

const char* PermissionItemData_WHO = "PERMISSIONSITEM_WHO";
const char* PermissionItemData_WHAT = "PERMISSIONSITEM_WHAT";
const char* PermissionItemData_TYPE = "PERMISSIONSITEM_TYPE";
const char* PermissionItemData_START_TIME = "PERMISSIONSITEM_START_TIME";
const char* PermissionItemData_END_TIME = "PERMISSIONSITEM_END_TIME";
const char* PermissionItemData_REMOTE_ADDR = "PERMISSIONSITEM_REMOTE_ADDR";

PermissionItemData* PermissionItemData_new(void);

void PermissionItemData_init(PermissionItemData* this) {
}

PermissionItemData* PermissionItemData_new(void) {
    PermissionItemData* this = calloc(1, sizeof(PermissionItemData));
    PermissionItemData_init(this);
    return this;
}

