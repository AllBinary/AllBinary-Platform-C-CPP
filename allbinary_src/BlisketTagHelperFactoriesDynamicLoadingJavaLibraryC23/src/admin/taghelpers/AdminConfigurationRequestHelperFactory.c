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

typedef struct AdminConfigurationRequestHelperFactory AdminConfigurationRequestHelperFactory;
struct AdminConfigurationRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* AdminConfigurationRequestHelperFactory_CLASSNAME = "admin.taghelpers.AdminConfigurationRequestHelper";
static const char* AdminConfigurationRequestHelperFactory_FACTORYNAME = "AdminConfigurationRequestHelperFactory";

AdminConfigurationRequestHelperFactory* AdminConfigurationRequestHelperFactory_new(void);

void AdminConfigurationRequestHelperFactory_init(AdminConfigurationRequestHelperFactory* this);
Any* AdminConfigurationRequestHelperFactory_getInstance(AdminConfigurationRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void AdminConfigurationRequestHelperFactory_init(AdminConfigurationRequestHelperFactory* this) {
}

AdminConfigurationRequestHelperFactory* AdminConfigurationRequestHelperFactory_new(void) {
    AdminConfigurationRequestHelperFactory* this = calloc(1, sizeof(AdminConfigurationRequestHelperFactory));
    AdminConfigurationRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* AdminConfigurationRequestHelperFactory_getInstance(AdminConfigurationRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(AdminConfigurationRequestHelperFactory_FACTORYNAME, AdminConfigurationRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

