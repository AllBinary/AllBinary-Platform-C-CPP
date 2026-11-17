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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct PermissionItemsHelperFactory PermissionItemsHelperFactory;
struct PermissionItemsHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* PermissionItemsHelperFactory_CLASSNAME = "admin.taghelpers.PermissionItemsHelper";
static const char* PermissionItemsHelperFactory_FACTORYNAME = "PermissionItemsHelperFactory";

PermissionItemsHelperFactory* PermissionItemsHelperFactory_new(void);

void PermissionItemsHelperFactory_init(PermissionItemsHelperFactory* this);
Any* PermissionItemsHelperFactory_getInstance(PermissionItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void PermissionItemsHelperFactory_init(PermissionItemsHelperFactory* this) {
}

PermissionItemsHelperFactory* PermissionItemsHelperFactory_new(void) {
    PermissionItemsHelperFactory* this = calloc(1, sizeof(PermissionItemsHelperFactory));
    PermissionItemsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* PermissionItemsHelperFactory_getInstance(PermissionItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(PermissionItemsHelperFactory_FACTORYNAME, PermissionItemsHelperFactory_CLASSNAME, hashMap, pageContext);
}

