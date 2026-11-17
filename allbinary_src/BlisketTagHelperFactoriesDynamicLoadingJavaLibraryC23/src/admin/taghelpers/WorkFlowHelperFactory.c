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

typedef struct WorkFlowHelperFactory WorkFlowHelperFactory;
struct WorkFlowHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* WorkFlowHelperFactory_CLASSNAME = "admin.taghelpers.WorkFlowHelper";
static const char* WorkFlowHelperFactory_FACTORYNAME = "WorkFlowHelperFactory";

WorkFlowHelperFactory* WorkFlowHelperFactory_new(void);

void WorkFlowHelperFactory_init(WorkFlowHelperFactory* this);
Any* WorkFlowHelperFactory_getInstance(WorkFlowHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void WorkFlowHelperFactory_init(WorkFlowHelperFactory* this) {
}

WorkFlowHelperFactory* WorkFlowHelperFactory_new(void) {
    WorkFlowHelperFactory* this = calloc(1, sizeof(WorkFlowHelperFactory));
    WorkFlowHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* WorkFlowHelperFactory_getInstance(WorkFlowHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(WorkFlowHelperFactory_FACTORYNAME, WorkFlowHelperFactory_CLASSNAME, hashMap, pageContext);
}

