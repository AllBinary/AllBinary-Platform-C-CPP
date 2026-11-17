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
// package tags.admin.storefront.statistics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct StoreFrontStatisticsTag StoreFrontStatisticsTag;
struct StoreFrontStatisticsTag {
    StoreValidationTransformTag base;
};


StoreFrontStatisticsTag* StoreFrontStatisticsTag_new(void);

void StoreFrontStatisticsTag_init(StoreFrontStatisticsTag* this);
int32_t StoreFrontStatisticsTag_doStartTag(StoreFrontStatisticsTag* this);


void StoreFrontStatisticsTag_init(StoreFrontStatisticsTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

StoreFrontStatisticsTag* StoreFrontStatisticsTag_new(void) {
    StoreFrontStatisticsTag* this = calloc(1, sizeof(StoreFrontStatisticsTag));
    StoreFrontStatisticsTag_init(this);
    return this;
}


// throws JspTagException
int32_t StoreFrontStatisticsTag_doStartTag(StoreFrontStatisticsTag* this) {
        JAVA_TRY {
            if (StoreFrontStatisticsTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(StoreFrontStatisticsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    StoreFrontStatisticsTag_setName(this, "Validation StoreFrontStatistics View");
                    StoreFrontStatisticsTag_setObjectFile(this, "views.admin.storefront.statistics.ValidationStoreFrontStatisticsView");
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(StoreFrontStatisticsTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

