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

typedef struct PaymentGatewayHelperFactory PaymentGatewayHelperFactory;
struct PaymentGatewayHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* PaymentGatewayHelperFactory_CLASSNAME = "admin.taghelpers.PaymentGatewayHelper";
static const char* PaymentGatewayHelperFactory_FACTORYNAME = "PaymentGatewayFactory";

PaymentGatewayHelperFactory* PaymentGatewayHelperFactory_new(void);

void PaymentGatewayHelperFactory_init(PaymentGatewayHelperFactory* this);
Any* PaymentGatewayHelperFactory_getInstance(PaymentGatewayHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void PaymentGatewayHelperFactory_init(PaymentGatewayHelperFactory* this) {
}

PaymentGatewayHelperFactory* PaymentGatewayHelperFactory_new(void) {
    PaymentGatewayHelperFactory* this = calloc(1, sizeof(PaymentGatewayHelperFactory));
    PaymentGatewayHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* PaymentGatewayHelperFactory_getInstance(PaymentGatewayHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(PaymentGatewayHelperFactory_FACTORYNAME, PaymentGatewayHelperFactory_CLASSNAME, hashMap, pageContext);
}

