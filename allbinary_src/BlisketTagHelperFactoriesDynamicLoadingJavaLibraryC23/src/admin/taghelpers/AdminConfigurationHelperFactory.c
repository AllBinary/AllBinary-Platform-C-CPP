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

typedef struct AdminConfigurationHelperFactory AdminConfigurationHelperFactory;
struct AdminConfigurationHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* AdminConfigurationHelperFactory_CLASSNAME = "admin.taghelpers.AdminConfigurationHelper";
static const char* AdminConfigurationHelperFactory_FACTORYNAME = "AdminConfigurationHelperFactory";

AdminConfigurationHelperFactory* AdminConfigurationHelperFactory_new(void);

void AdminConfigurationHelperFactory_init(AdminConfigurationHelperFactory* this);
Any* AdminConfigurationHelperFactory_getInstance(AdminConfigurationHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void AdminConfigurationHelperFactory_init(AdminConfigurationHelperFactory* this) {
}

AdminConfigurationHelperFactory* AdminConfigurationHelperFactory_new(void) {
    AdminConfigurationHelperFactory* this = calloc(1, sizeof(AdminConfigurationHelperFactory));
    AdminConfigurationHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* AdminConfigurationHelperFactory_getInstance(AdminConfigurationHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(AdminConfigurationHelperFactory_FACTORYNAME, AdminConfigurationHelperFactory_CLASSNAME, hashMap, pageContext);
}

