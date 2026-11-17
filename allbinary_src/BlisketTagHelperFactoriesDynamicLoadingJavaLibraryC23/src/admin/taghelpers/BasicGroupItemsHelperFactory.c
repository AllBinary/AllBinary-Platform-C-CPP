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

typedef struct BasicGroupItemsHelperFactory BasicGroupItemsHelperFactory;
struct BasicGroupItemsHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* BasicGroupItemsHelperFactory_CLASSNAME = "admin.taghelpers.BasicGroupItemsHelper";
static const char* BasicGroupItemsHelperFactory_FACTORYNAME = "BasicGroupItemsHelperFactory";

BasicGroupItemsHelperFactory* BasicGroupItemsHelperFactory_new(void);

void BasicGroupItemsHelperFactory_init(BasicGroupItemsHelperFactory* this);
Any* BasicGroupItemsHelperFactory_getInstance(BasicGroupItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void BasicGroupItemsHelperFactory_init(BasicGroupItemsHelperFactory* this) {
}

BasicGroupItemsHelperFactory* BasicGroupItemsHelperFactory_new(void) {
    BasicGroupItemsHelperFactory* this = calloc(1, sizeof(BasicGroupItemsHelperFactory));
    BasicGroupItemsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* BasicGroupItemsHelperFactory_getInstance(BasicGroupItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(BasicGroupItemsHelperFactory_FACTORYNAME, BasicGroupItemsHelperFactory_CLASSNAME, hashMap, pageContext);
}

