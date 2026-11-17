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
// package taghelpers

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
#include "admin/taghelpers/HelperFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct StoreTagWorkFlowHelperFactory StoreTagWorkFlowHelperFactory;
struct StoreTagWorkFlowHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* StoreTagWorkFlowHelperFactory_CLASSNAME = "taghelpers.StoreTagWorkFlowHelper";
static const char* StoreTagWorkFlowHelperFactory_FACTORYNAME = "taghelpers.StoreTagWorkFlowHelperFactory";

StoreTagWorkFlowHelperFactory* StoreTagWorkFlowHelperFactory_new(void);

void StoreTagWorkFlowHelperFactory_init(StoreTagWorkFlowHelperFactory* this);
Any* StoreTagWorkFlowHelperFactory_getInstance(StoreTagWorkFlowHelperFactory* this, HashMap* propertiesHashMap, PageContext* pageContext);


void StoreTagWorkFlowHelperFactory_init(StoreTagWorkFlowHelperFactory* this) {
}

StoreTagWorkFlowHelperFactory* StoreTagWorkFlowHelperFactory_new(void) {
    StoreTagWorkFlowHelperFactory* this = calloc(1, sizeof(StoreTagWorkFlowHelperFactory));
    StoreTagWorkFlowHelperFactory_init(this);
    return this;
}


// throws Exception, LicensingException
Any* StoreTagWorkFlowHelperFactory_getInstance(StoreTagWorkFlowHelperFactory* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(StoreTagWorkFlowHelperFactory_FACTORYNAME, StoreTagWorkFlowHelperFactory_CLASSNAME, propertiesHashMap, pageContext);
}

