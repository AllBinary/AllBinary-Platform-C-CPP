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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "admin/taghelpers/PermissionItemsHelperFactory.h"
#include "admin/taghelpers/PermissionItemsRequestHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct PermissionItemsTag PermissionItemsTag;
struct PermissionItemsTag {
    TableTag base;
};


PermissionItemsTag* PermissionItemsTag_new(void);

void PermissionItemsTag_init(PermissionItemsTag* this);


void PermissionItemsTag_init(PermissionItemsTag* this) {
    TableTag_init(&this->base);
        PermissionItemsTag_setTagHelperFactory(this, PermissionItemsHelperFactory_new());
        PermissionItemsTag_setTagRequestHelperFactory(this, PermissionItemsRequestHelperFactory_new());
}

PermissionItemsTag* PermissionItemsTag_new(void) {
    PermissionItemsTag* this = calloc(1, sizeof(PermissionItemsTag));
    PermissionItemsTag_init(this);
    return this;
}

