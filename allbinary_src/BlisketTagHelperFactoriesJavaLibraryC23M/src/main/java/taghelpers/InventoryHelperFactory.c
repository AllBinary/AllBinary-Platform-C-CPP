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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InventoryHelperFactory InventoryHelperFactory;
struct InventoryHelperFactory {
    LogUtil* logUtil;
};


InventoryHelperFactory* InventoryHelperFactory_new(void);

void InventoryHelperFactory_init(InventoryHelperFactory* this);
Any* InventoryHelperFactory_getInstance(InventoryHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void InventoryHelperFactory_initFields(InventoryHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void InventoryHelperFactory_init(InventoryHelperFactory* this) {
    InventoryHelperFactory_initFields(this);
}

InventoryHelperFactory* InventoryHelperFactory_new(void) {
    InventoryHelperFactory* this = calloc(1, sizeof(InventoryHelperFactory));
    InventoryHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* InventoryHelperFactory_getInstance(InventoryHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return InventoryHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

