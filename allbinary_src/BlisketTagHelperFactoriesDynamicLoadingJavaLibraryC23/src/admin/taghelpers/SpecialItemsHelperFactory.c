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

typedef struct SpecialItemsHelperFactory SpecialItemsHelperFactory;
struct SpecialItemsHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* SpecialItemsHelperFactory_CLASSNAME = "admin.taghelpers.SpecialItemsHelper";
static const char* SpecialItemsHelperFactory_FACTORYNAME = "SpecialItemsHelperFactory";

SpecialItemsHelperFactory* SpecialItemsHelperFactory_new(void);

void SpecialItemsHelperFactory_init(SpecialItemsHelperFactory* this);
Any* SpecialItemsHelperFactory_getInstance(SpecialItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void SpecialItemsHelperFactory_init(SpecialItemsHelperFactory* this) {
}

SpecialItemsHelperFactory* SpecialItemsHelperFactory_new(void) {
    SpecialItemsHelperFactory* this = calloc(1, sizeof(SpecialItemsHelperFactory));
    SpecialItemsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* SpecialItemsHelperFactory_getInstance(SpecialItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(SpecialItemsHelperFactory_FACTORYNAME, SpecialItemsHelperFactory_CLASSNAME, hashMap, pageContext);
}

