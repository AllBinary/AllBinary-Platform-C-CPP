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

typedef struct CustomItemsRequestHelperFactory CustomItemsRequestHelperFactory;
struct CustomItemsRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* CustomItemsRequestHelperFactory_CLASSNAME = "admin.taghelpers.CustomItemsRequestHelper";
static const char* CustomItemsRequestHelperFactory_FACTORYNAME = "CustomItemsRequestHelperFactory";

CustomItemsRequestHelperFactory* CustomItemsRequestHelperFactory_new(void);

void CustomItemsRequestHelperFactory_init(CustomItemsRequestHelperFactory* this);
Any* CustomItemsRequestHelperFactory_getInstance(CustomItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void CustomItemsRequestHelperFactory_init(CustomItemsRequestHelperFactory* this) {
}

CustomItemsRequestHelperFactory* CustomItemsRequestHelperFactory_new(void) {
    CustomItemsRequestHelperFactory* this = calloc(1, sizeof(CustomItemsRequestHelperFactory));
    CustomItemsRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* CustomItemsRequestHelperFactory_getInstance(CustomItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(CustomItemsRequestHelperFactory_FACTORYNAME, CustomItemsRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

