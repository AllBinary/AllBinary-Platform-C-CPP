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

typedef struct OrderHistoryRequestHelperFactory OrderHistoryRequestHelperFactory;
struct OrderHistoryRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* OrderHistoryRequestHelperFactory_CLASSNAME = "admin.taghelpers.OrderHistoryRequestHelper";
static const char* OrderHistoryRequestHelperFactory_FACTORYNAME = "OrderHistoryRequestHelperFactory";

OrderHistoryRequestHelperFactory* OrderHistoryRequestHelperFactory_new(void);

void OrderHistoryRequestHelperFactory_init(OrderHistoryRequestHelperFactory* this);
Any* OrderHistoryRequestHelperFactory_getInstance(OrderHistoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void OrderHistoryRequestHelperFactory_init(OrderHistoryRequestHelperFactory* this) {
}

OrderHistoryRequestHelperFactory* OrderHistoryRequestHelperFactory_new(void) {
    OrderHistoryRequestHelperFactory* this = calloc(1, sizeof(OrderHistoryRequestHelperFactory));
    OrderHistoryRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* OrderHistoryRequestHelperFactory_getInstance(OrderHistoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(OrderHistoryRequestHelperFactory_FACTORYNAME, OrderHistoryRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

