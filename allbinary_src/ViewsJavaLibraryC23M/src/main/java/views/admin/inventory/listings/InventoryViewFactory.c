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
// package views.admin.inventory.listings

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonStrings.h"
#include "views/generic/inventory/InventorySearch.h"

typedef struct InventoryViewFactory InventoryViewFactory;
struct InventoryViewFactory {
    char unused;
};


InventoryViewFactory* InventoryViewFactory_new(void);

void InventoryViewFactory_init(InventoryViewFactory* this);
InventoryViewSearchInterface* InventoryViewFactory_getInstance(SearchRequest* searchRequest);


void InventoryViewFactory_init(InventoryViewFactory* this) {
}

InventoryViewFactory* InventoryViewFactory_new(void) {
    InventoryViewFactory* this = calloc(1, sizeof(InventoryViewFactory));
    InventoryViewFactory_init(this);
    return this;
}


// throws LicensingException
InventoryViewSearchInterface* InventoryViewFactory_getInstance(SearchRequest* searchRequest) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return InventorySearch_new(searchRequest);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "InventoryViewFactory", "getInstance(SearchRequest)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

