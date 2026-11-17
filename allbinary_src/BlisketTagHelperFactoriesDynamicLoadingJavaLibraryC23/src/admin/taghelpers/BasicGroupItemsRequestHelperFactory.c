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

typedef struct BasicGroupItemsRequestHelperFactory BasicGroupItemsRequestHelperFactory;
struct BasicGroupItemsRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* BasicGroupItemsRequestHelperFactory_CLASSNAME = "admin.taghelpers.BasicGroupItemsRequestHelper";
static const char* BasicGroupItemsRequestHelperFactory_FACTORYNAME = "BasicGroupItemsRequestHelperFactory";

BasicGroupItemsRequestHelperFactory* BasicGroupItemsRequestHelperFactory_new(void);

void BasicGroupItemsRequestHelperFactory_init(BasicGroupItemsRequestHelperFactory* this);
Any* BasicGroupItemsRequestHelperFactory_getInstance(BasicGroupItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void BasicGroupItemsRequestHelperFactory_init(BasicGroupItemsRequestHelperFactory* this) {
}

BasicGroupItemsRequestHelperFactory* BasicGroupItemsRequestHelperFactory_new(void) {
    BasicGroupItemsRequestHelperFactory* this = calloc(1, sizeof(BasicGroupItemsRequestHelperFactory));
    BasicGroupItemsRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* BasicGroupItemsRequestHelperFactory_getInstance(BasicGroupItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(BasicGroupItemsRequestHelperFactory_FACTORYNAME, BasicGroupItemsRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

