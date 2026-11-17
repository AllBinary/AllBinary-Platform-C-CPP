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
// package workflows.template.data

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/control/workflow/StoreWorkFlowInterface.h"
#include "workflows/template/data/BasicWorkFlow.h"

typedef struct BasicStoreWorkFlow BasicStoreWorkFlow;
struct BasicStoreWorkFlow {
    BasicWorkFlow base;
    StoreWorkFlowInterface StoreWorkFlowInterface_interface;
};


BasicStoreWorkFlow* BasicStoreWorkFlow_new(HashMap* propertiesHashMap, PageContext* pageContext);

void BasicStoreWorkFlow_init(BasicStoreWorkFlow* this, HashMap* propertiesHashMap, PageContext* pageContext);
const char* BasicStoreWorkFlow_getStoreName(BasicStoreWorkFlow* this);


void BasicStoreWorkFlow_init(BasicStoreWorkFlow* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        BasicWorkFlow_init(&this->base, propertiesHashMap, pageContext);
}

BasicStoreWorkFlow* BasicStoreWorkFlow_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    BasicStoreWorkFlow* this = calloc(1, sizeof(BasicStoreWorkFlow));
    BasicStoreWorkFlow_init(this, propertiesHashMap, pageContext);
    return this;
}


// throws Exception
const char* BasicStoreWorkFlow_getStoreName(BasicStoreWorkFlow* this) {
        return ((const char*) JAVA_CALL(BasicStoreWorkFlow_getPropertiesHashMap(this), get, StoreFrontData_getInstance()->NAME));
}

