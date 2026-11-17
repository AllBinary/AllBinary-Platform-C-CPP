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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/TagHelperFactory.h"

typedef struct OrderHistoryRequestHelperFactory OrderHistoryRequestHelperFactory;
struct OrderHistoryRequestHelperFactory {
    TagHelperFactory base;
    LogUtil* logUtil;
};


OrderHistoryRequestHelperFactory* OrderHistoryRequestHelperFactory_new(void);

void OrderHistoryRequestHelperFactory_init(OrderHistoryRequestHelperFactory* this);
Any* OrderHistoryRequestHelperFactory_getInstance(OrderHistoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void OrderHistoryRequestHelperFactory_initFields(OrderHistoryRequestHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void OrderHistoryRequestHelperFactory_init(OrderHistoryRequestHelperFactory* this) {
    TagHelperFactory_init(&this->base);
    OrderHistoryRequestHelperFactory_initFields(this);
}

OrderHistoryRequestHelperFactory* OrderHistoryRequestHelperFactory_new(void) {
    OrderHistoryRequestHelperFactory* this = calloc(1, sizeof(OrderHistoryRequestHelperFactory));
    OrderHistoryRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* OrderHistoryRequestHelperFactory_getInstance(OrderHistoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return OrderHistoryRequestHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

