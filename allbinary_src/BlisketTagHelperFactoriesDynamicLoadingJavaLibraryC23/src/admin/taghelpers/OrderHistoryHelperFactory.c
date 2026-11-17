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

typedef struct OrderHistoryHelperFactory OrderHistoryHelperFactory;
struct OrderHistoryHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* OrderHistoryHelperFactory_CLASSNAME = "admin.taghelpers.OrderHistoryHelper";
static const char* OrderHistoryHelperFactory_FACTORYNAME = "OrderHistoryHelperFactory";

OrderHistoryHelperFactory* OrderHistoryHelperFactory_new(void);

void OrderHistoryHelperFactory_init(OrderHistoryHelperFactory* this);
Any* OrderHistoryHelperFactory_getInstance(OrderHistoryHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void OrderHistoryHelperFactory_init(OrderHistoryHelperFactory* this) {
}

OrderHistoryHelperFactory* OrderHistoryHelperFactory_new(void) {
    OrderHistoryHelperFactory* this = calloc(1, sizeof(OrderHistoryHelperFactory));
    OrderHistoryHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* OrderHistoryHelperFactory_getInstance(OrderHistoryHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(OrderHistoryHelperFactory_FACTORYNAME, OrderHistoryHelperFactory_CLASSNAME, hashMap, pageContext);
}

