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

typedef struct BasicOptionItemsRequestHelperFactory BasicOptionItemsRequestHelperFactory;
struct BasicOptionItemsRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* BasicOptionItemsRequestHelperFactory_CLASSNAME = "admin.taghelpers.BasicOptionItemsRequestHelper";
static const char* BasicOptionItemsRequestHelperFactory_FACTORYNAME = "BasicOptionItemsRequestHelperFactory";

BasicOptionItemsRequestHelperFactory* BasicOptionItemsRequestHelperFactory_new(void);

void BasicOptionItemsRequestHelperFactory_init(BasicOptionItemsRequestHelperFactory* this);
Any* BasicOptionItemsRequestHelperFactory_getInstance(BasicOptionItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void BasicOptionItemsRequestHelperFactory_init(BasicOptionItemsRequestHelperFactory* this) {
}

BasicOptionItemsRequestHelperFactory* BasicOptionItemsRequestHelperFactory_new(void) {
    BasicOptionItemsRequestHelperFactory* this = calloc(1, sizeof(BasicOptionItemsRequestHelperFactory));
    BasicOptionItemsRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* BasicOptionItemsRequestHelperFactory_getInstance(BasicOptionItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(BasicOptionItemsRequestHelperFactory_FACTORYNAME, BasicOptionItemsRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

