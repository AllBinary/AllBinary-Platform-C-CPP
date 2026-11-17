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

typedef struct InventoryRequestHelperFactory InventoryRequestHelperFactory;
struct InventoryRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* InventoryRequestHelperFactory_CLASSNAME = "admin.taghelpers.InventoryRequestHelper";
static const char* InventoryRequestHelperFactory_FACTORYNAME = "InventoryRequestHelperFactory";

InventoryRequestHelperFactory* InventoryRequestHelperFactory_new(void);

void InventoryRequestHelperFactory_init(InventoryRequestHelperFactory* this);
Any* InventoryRequestHelperFactory_getInstance(InventoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void InventoryRequestHelperFactory_init(InventoryRequestHelperFactory* this) {
}

InventoryRequestHelperFactory* InventoryRequestHelperFactory_new(void) {
    InventoryRequestHelperFactory* this = calloc(1, sizeof(InventoryRequestHelperFactory));
    InventoryRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* InventoryRequestHelperFactory_getInstance(InventoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(InventoryRequestHelperFactory_FACTORYNAME, InventoryRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

