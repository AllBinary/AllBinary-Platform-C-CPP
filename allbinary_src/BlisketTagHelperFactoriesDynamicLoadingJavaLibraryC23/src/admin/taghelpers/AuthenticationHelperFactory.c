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
// #include "javax/servlet/http/HttpServletRequest.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct AuthenticationHelperFactory AuthenticationHelperFactory;
struct AuthenticationHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* AuthenticationHelperFactory_CLASSNAME = "admin.taghelpers.AuthenticationHelper";
static const char* AuthenticationHelperFactory_FACTORYNAME = "AuthenticationHelperFactory";

AuthenticationHelperFactory* AuthenticationHelperFactory_new(void);

void AuthenticationHelperFactory_init(AuthenticationHelperFactory* this);
Any* AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory* this, HashMap* hashMap, PageContext* pageContext);
Any* AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory* this, HashMap* hashMap, HttpServletRequest* httpServletRequest);


void AuthenticationHelperFactory_init(AuthenticationHelperFactory* this) {
}

AuthenticationHelperFactory* AuthenticationHelperFactory_new(void) {
    AuthenticationHelperFactory* this = calloc(1, sizeof(AuthenticationHelperFactory));
    AuthenticationHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(AuthenticationHelperFactory_FACTORYNAME, AuthenticationHelperFactory_CLASSNAME, hashMap, pageContext);
}


// throws LicensingException
// Java overloaded method: C needs a different name
Any* AuthenticationHelperFactory_getInstance(AuthenticationHelperFactory* this, HashMap* hashMap, HttpServletRequest* httpServletRequest) {
        return HelperFactory_getInstance(AuthenticationHelperFactory_FACTORYNAME, AuthenticationHelperFactory_CLASSNAME, hashMap, httpServletRequest);
}

