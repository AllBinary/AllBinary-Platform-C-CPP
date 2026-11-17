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

typedef struct StoreFrontsRequestHelperFactory StoreFrontsRequestHelperFactory;
struct StoreFrontsRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* StoreFrontsRequestHelperFactory_CLASSNAME = "admin.taghelpers.StoreFrontsRequestHelper";
static const char* StoreFrontsRequestHelperFactory_FACTORYNAME = "StoreFrontsRequestHelperFactory";

StoreFrontsRequestHelperFactory* StoreFrontsRequestHelperFactory_new(void);

void StoreFrontsRequestHelperFactory_init(StoreFrontsRequestHelperFactory* this);
Any* StoreFrontsRequestHelperFactory_getInstance(StoreFrontsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void StoreFrontsRequestHelperFactory_init(StoreFrontsRequestHelperFactory* this) {
}

StoreFrontsRequestHelperFactory* StoreFrontsRequestHelperFactory_new(void) {
    StoreFrontsRequestHelperFactory* this = calloc(1, sizeof(StoreFrontsRequestHelperFactory));
    StoreFrontsRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* StoreFrontsRequestHelperFactory_getInstance(StoreFrontsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(StoreFrontsRequestHelperFactory_FACTORYNAME, StoreFrontsRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

