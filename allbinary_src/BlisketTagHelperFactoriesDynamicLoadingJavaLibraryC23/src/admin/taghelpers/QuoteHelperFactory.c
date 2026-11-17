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

typedef struct QuoteHelperFactory QuoteHelperFactory;
struct QuoteHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* QuoteHelperFactory_CLASSNAME = "admin.taghelpers.QuoteHelper";
static const char* QuoteHelperFactory_FACTORYNAME = "QuoteHelperFactory";

QuoteHelperFactory* QuoteHelperFactory_new(void);

void QuoteHelperFactory_init(QuoteHelperFactory* this);
Any* QuoteHelperFactory_getInstance(QuoteHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void QuoteHelperFactory_init(QuoteHelperFactory* this) {
}

QuoteHelperFactory* QuoteHelperFactory_new(void) {
    QuoteHelperFactory* this = calloc(1, sizeof(QuoteHelperFactory));
    QuoteHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* QuoteHelperFactory_getInstance(QuoteHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(QuoteHelperFactory_FACTORYNAME, QuoteHelperFactory_CLASSNAME, hashMap, pageContext);
}

