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

typedef struct StoreFrontHelperFactory StoreFrontHelperFactory;
struct StoreFrontHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* StoreFrontHelperFactory_CLASSNAME = "admin.taghelpers.StoreFrontHelper";
static const char* StoreFrontHelperFactory_FACTORYNAME = "StoreFrontHelperFactory";

StoreFrontHelperFactory* StoreFrontHelperFactory_new(void);

void StoreFrontHelperFactory_init(StoreFrontHelperFactory* this);
Any* StoreFrontHelperFactory_getInstance(StoreFrontHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void StoreFrontHelperFactory_init(StoreFrontHelperFactory* this) {
}

StoreFrontHelperFactory* StoreFrontHelperFactory_new(void) {
    StoreFrontHelperFactory* this = calloc(1, sizeof(StoreFrontHelperFactory));
    StoreFrontHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* StoreFrontHelperFactory_getInstance(StoreFrontHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(StoreFrontHelperFactory_FACTORYNAME, StoreFrontHelperFactory_CLASSNAME, hashMap, pageContext);
}

