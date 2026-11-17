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

typedef struct ShippingHelperFactory ShippingHelperFactory;
struct ShippingHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* ShippingHelperFactory_CLASSNAME = "admin.taghelpers.ShippingHelper";
static const char* ShippingHelperFactory_FACTORYNAME = "ShippingHelperFactory";

ShippingHelperFactory* ShippingHelperFactory_new(void);

void ShippingHelperFactory_init(ShippingHelperFactory* this);
Any* ShippingHelperFactory_getInstance(ShippingHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void ShippingHelperFactory_init(ShippingHelperFactory* this) {
}

ShippingHelperFactory* ShippingHelperFactory_new(void) {
    ShippingHelperFactory* this = calloc(1, sizeof(ShippingHelperFactory));
    ShippingHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* ShippingHelperFactory_getInstance(ShippingHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(ShippingHelperFactory_FACTORYNAME, ShippingHelperFactory_CLASSNAME, hashMap, pageContext);
}

