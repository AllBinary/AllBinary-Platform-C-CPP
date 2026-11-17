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
#include "org/allbinary/string/CommonStrings.h"

typedef struct ProductListingFactory ProductListingFactory;
struct ProductListingFactory {
    char unused;
};


ProductListingFactory* ProductListingFactory_new(void);

void ProductListingFactory_init(ProductListingFactory* this);
ProductListingInterface* ProductListingFactory_getInstance(SearchRequest* searchRequest);


void ProductListingFactory_init(ProductListingFactory* this) {
}

ProductListingFactory* ProductListingFactory_new(void) {
    ProductListingFactory* this = calloc(1, sizeof(ProductListingFactory));
    ProductListingFactory_init(this);
    return this;
}


ProductListingInterface* ProductListingFactory_getInstance(SearchRequest* searchRequest) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return ((ProductListingInterface*) ProductListing_new(searchRequest));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->FACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "ProductListingFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

