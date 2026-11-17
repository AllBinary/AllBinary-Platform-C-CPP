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
#include "admin/taghelpers/AdminConfigurationHelperFactory.h"
#include "admin/taghelpers/AdminConfigurationRequestHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct AdminConfigurationTag AdminConfigurationTag;
struct AdminConfigurationTag {
    TableTag base;
};


AdminConfigurationTag* AdminConfigurationTag_new(void);

void AdminConfigurationTag_init(AdminConfigurationTag* this);


void AdminConfigurationTag_init(AdminConfigurationTag* this) {
    TableTag_init(&this->base);
        AdminConfigurationTag_setTagHelperFactory(this, AdminConfigurationHelperFactory_new());
        AdminConfigurationTag_setTagRequestHelperFactory(this, AdminConfigurationRequestHelperFactory_new());
}

AdminConfigurationTag* AdminConfigurationTag_new(void) {
    AdminConfigurationTag* this = calloc(1, sizeof(AdminConfigurationTag));
    AdminConfigurationTag_init(this);
    return this;
}

