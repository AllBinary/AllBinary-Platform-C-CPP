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

typedef struct PaymentTransactionResultHelperFactory PaymentTransactionResultHelperFactory;
struct PaymentTransactionResultHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* PaymentTransactionResultHelperFactory_CLASSNAME = "admin.taghelpers.PaymentTransactionResultHelper";
static const char* PaymentTransactionResultHelperFactory_FACTORYNAME = "PaymentTransactionResultFactory";

PaymentTransactionResultHelperFactory* PaymentTransactionResultHelperFactory_new(void);

void PaymentTransactionResultHelperFactory_init(PaymentTransactionResultHelperFactory* this);
Any* PaymentTransactionResultHelperFactory_getInstance(PaymentTransactionResultHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void PaymentTransactionResultHelperFactory_init(PaymentTransactionResultHelperFactory* this) {
}

PaymentTransactionResultHelperFactory* PaymentTransactionResultHelperFactory_new(void) {
    PaymentTransactionResultHelperFactory* this = calloc(1, sizeof(PaymentTransactionResultHelperFactory));
    PaymentTransactionResultHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* PaymentTransactionResultHelperFactory_getInstance(PaymentTransactionResultHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(PaymentTransactionResultHelperFactory_FACTORYNAME, PaymentTransactionResultHelperFactory_CLASSNAME, hashMap, pageContext);
}

