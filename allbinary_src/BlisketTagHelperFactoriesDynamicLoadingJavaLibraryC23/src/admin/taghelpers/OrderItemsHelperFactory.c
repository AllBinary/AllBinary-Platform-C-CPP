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

typedef struct OrderItemsHelperFactory OrderItemsHelperFactory;
struct OrderItemsHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* OrderItemsHelperFactory_CLASSNAME = "admin.taghelpers.OrderItemsHelper";
static const char* OrderItemsHelperFactory_FACTORYNAME = "OrderItemsHelperFactory";

OrderItemsHelperFactory* OrderItemsHelperFactory_new(void);

void OrderItemsHelperFactory_init(OrderItemsHelperFactory* this);
Any* OrderItemsHelperFactory_getInstance(OrderItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void OrderItemsHelperFactory_init(OrderItemsHelperFactory* this) {
}

OrderItemsHelperFactory* OrderItemsHelperFactory_new(void) {
    OrderItemsHelperFactory* this = calloc(1, sizeof(OrderItemsHelperFactory));
    OrderItemsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* OrderItemsHelperFactory_getInstance(OrderItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(OrderItemsHelperFactory_FACTORYNAME, OrderItemsHelperFactory_CLASSNAME, hashMap, pageContext);
}

