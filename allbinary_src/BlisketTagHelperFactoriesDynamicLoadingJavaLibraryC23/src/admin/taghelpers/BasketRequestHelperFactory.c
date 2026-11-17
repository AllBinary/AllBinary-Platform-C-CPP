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

typedef struct BasketRequestHelperFactory BasketRequestHelperFactory;
struct BasketRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* BasketRequestHelperFactory_CLASSNAME = "admin.taghelpers.BasketRequestHelper";
static const char* BasketRequestHelperFactory_FACTORYNAME = "BasketRequestHelperFactory";

BasketRequestHelperFactory* BasketRequestHelperFactory_new(void);

void BasketRequestHelperFactory_init(BasketRequestHelperFactory* this);
Any* BasketRequestHelperFactory_getInstance(BasketRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void BasketRequestHelperFactory_init(BasketRequestHelperFactory* this) {
}

BasketRequestHelperFactory* BasketRequestHelperFactory_new(void) {
    BasketRequestHelperFactory* this = calloc(1, sizeof(BasketRequestHelperFactory));
    BasketRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* BasketRequestHelperFactory_getInstance(BasketRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(BasketRequestHelperFactory_FACTORYNAME, BasketRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

