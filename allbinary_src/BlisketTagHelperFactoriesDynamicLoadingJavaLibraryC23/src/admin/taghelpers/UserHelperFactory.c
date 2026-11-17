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

typedef struct UserHelperFactory UserHelperFactory;
struct UserHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* UserHelperFactory_CLASSNAME = "admin.taghelpers.UserHelper";
static const char* UserHelperFactory_FACTORYNAME = "UserHelperFactory";

UserHelperFactory* UserHelperFactory_new(void);

void UserHelperFactory_init(UserHelperFactory* this);
Any* UserHelperFactory_getInstance(UserHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void UserHelperFactory_init(UserHelperFactory* this) {
}

UserHelperFactory* UserHelperFactory_new(void) {
    UserHelperFactory* this = calloc(1, sizeof(UserHelperFactory));
    UserHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* UserHelperFactory_getInstance(UserHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(UserHelperFactory_FACTORYNAME, UserHelperFactory_CLASSNAME, hashMap, pageContext);
}

