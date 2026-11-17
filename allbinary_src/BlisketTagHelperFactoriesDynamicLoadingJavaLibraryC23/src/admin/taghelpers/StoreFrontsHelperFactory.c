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

typedef struct StoreFrontsHelperFactory StoreFrontsHelperFactory;
struct StoreFrontsHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* StoreFrontsHelperFactory_CLASSNAME = "admin.taghelpers.StoreFrontsHelper";
static const char* StoreFrontsHelperFactory_FACTORYNAME = "StoreFrontsHelperFactory";

StoreFrontsHelperFactory* StoreFrontsHelperFactory_new(void);

void StoreFrontsHelperFactory_init(StoreFrontsHelperFactory* this);
Any* StoreFrontsHelperFactory_getInstance(StoreFrontsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void StoreFrontsHelperFactory_init(StoreFrontsHelperFactory* this) {
}

StoreFrontsHelperFactory* StoreFrontsHelperFactory_new(void) {
    StoreFrontsHelperFactory* this = calloc(1, sizeof(StoreFrontsHelperFactory));
    StoreFrontsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* StoreFrontsHelperFactory_getInstance(StoreFrontsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(StoreFrontsHelperFactory_FACTORYNAME, StoreFrontsHelperFactory_CLASSNAME, hashMap, pageContext);
}

