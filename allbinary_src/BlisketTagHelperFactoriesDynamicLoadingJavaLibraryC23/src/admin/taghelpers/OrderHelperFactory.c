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

typedef struct OrderHelperFactory OrderHelperFactory;
struct OrderHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* OrderHelperFactory_CLASSNAME = "admin.taghelpers.OrderHelper";
static const char* OrderHelperFactory_FACTORYNAME = "OrderHelperFactory";

OrderHelperFactory* OrderHelperFactory_new(void);

void OrderHelperFactory_init(OrderHelperFactory* this);
Any* OrderHelperFactory_getInstance(OrderHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void OrderHelperFactory_init(OrderHelperFactory* this) {
}

OrderHelperFactory* OrderHelperFactory_new(void) {
    OrderHelperFactory* this = calloc(1, sizeof(OrderHelperFactory));
    OrderHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* OrderHelperFactory_getInstance(OrderHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(OrderHelperFactory_FACTORYNAME, OrderHelperFactory_CLASSNAME, hashMap, pageContext);
}

