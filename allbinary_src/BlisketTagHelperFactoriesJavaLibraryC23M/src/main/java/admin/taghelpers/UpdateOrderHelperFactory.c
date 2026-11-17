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

typedef struct UpdateOrderHelperFactory UpdateOrderHelperFactory;
struct UpdateOrderHelperFactory {
    TagHelperFactory base;
    LogUtil* logUtil;
};


UpdateOrderHelperFactory* UpdateOrderHelperFactory_new(void);

void UpdateOrderHelperFactory_init(UpdateOrderHelperFactory* this);
Any* UpdateOrderHelperFactory_getInstance(UpdateOrderHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void UpdateOrderHelperFactory_initFields(UpdateOrderHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void UpdateOrderHelperFactory_init(UpdateOrderHelperFactory* this) {
    TagHelperFactory_init(&this->base);
    UpdateOrderHelperFactory_initFields(this);
}

UpdateOrderHelperFactory* UpdateOrderHelperFactory_new(void) {
    UpdateOrderHelperFactory* this = calloc(1, sizeof(UpdateOrderHelperFactory));
    UpdateOrderHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* UpdateOrderHelperFactory_getInstance(UpdateOrderHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return UpdateOrderHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

