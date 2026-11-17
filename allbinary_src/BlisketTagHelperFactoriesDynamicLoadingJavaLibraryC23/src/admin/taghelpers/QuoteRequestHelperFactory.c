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

typedef struct QuoteRequestHelperFactory QuoteRequestHelperFactory;
struct QuoteRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* QuoteRequestHelperFactory_CLASSNAME = "admin.taghelpers.QuoteRequestHelper";
static const char* QuoteRequestHelperFactory_FACTORYNAME = "QuodeRequestHelperFactory";

QuoteRequestHelperFactory* QuoteRequestHelperFactory_new(void);

void QuoteRequestHelperFactory_init(QuoteRequestHelperFactory* this);
Any* QuoteRequestHelperFactory_getInstance(QuoteRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void QuoteRequestHelperFactory_init(QuoteRequestHelperFactory* this) {
}

QuoteRequestHelperFactory* QuoteRequestHelperFactory_new(void) {
    QuoteRequestHelperFactory* this = calloc(1, sizeof(QuoteRequestHelperFactory));
    QuoteRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* QuoteRequestHelperFactory_getInstance(QuoteRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(QuoteRequestHelperFactory_FACTORYNAME, QuoteRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

