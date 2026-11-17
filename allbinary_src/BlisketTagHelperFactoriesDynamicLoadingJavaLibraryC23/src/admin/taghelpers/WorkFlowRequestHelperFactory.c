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

typedef struct WorkFlowRequestHelperFactory WorkFlowRequestHelperFactory;
struct WorkFlowRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* WorkFlowRequestHelperFactory_CLASSNAME = "admin.taghelpers.WorkFlowHelper";
static const char* WorkFlowRequestHelperFactory_FACTORYNAME = "WorkFlowHelperFactory";

WorkFlowRequestHelperFactory* WorkFlowRequestHelperFactory_new(void);

void WorkFlowRequestHelperFactory_init(WorkFlowRequestHelperFactory* this);
Any* WorkFlowRequestHelperFactory_getInstance(WorkFlowRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void WorkFlowRequestHelperFactory_init(WorkFlowRequestHelperFactory* this) {
}

WorkFlowRequestHelperFactory* WorkFlowRequestHelperFactory_new(void) {
    WorkFlowRequestHelperFactory* this = calloc(1, sizeof(WorkFlowRequestHelperFactory));
    WorkFlowRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* WorkFlowRequestHelperFactory_getInstance(WorkFlowRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(WorkFlowRequestHelperFactory_FACTORYNAME, WorkFlowRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

