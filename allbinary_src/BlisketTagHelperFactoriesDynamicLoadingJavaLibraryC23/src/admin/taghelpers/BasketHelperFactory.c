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

typedef struct BasketHelperFactory BasketHelperFactory;
struct BasketHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* BasketHelperFactory_CLASSNAME = "admin.taghelpers.BasketHelper";
static const char* BasketHelperFactory_FACTORYNAME = "BasketHelperFactory";

BasketHelperFactory* BasketHelperFactory_new(void);

void BasketHelperFactory_init(BasketHelperFactory* this);
Any* BasketHelperFactory_getInstance(BasketHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void BasketHelperFactory_init(BasketHelperFactory* this) {
}

BasketHelperFactory* BasketHelperFactory_new(void) {
    BasketHelperFactory* this = calloc(1, sizeof(BasketHelperFactory));
    BasketHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* BasketHelperFactory_getInstance(BasketHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(BasketHelperFactory_FACTORYNAME, BasketHelperFactory_CLASSNAME, hashMap, pageContext);
}

