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

typedef struct BasicGroupItemsHelperFactory BasicGroupItemsHelperFactory;
struct BasicGroupItemsHelperFactory {
    TagHelperFactory base;
    LogUtil* logUtil;
};


BasicGroupItemsHelperFactory* BasicGroupItemsHelperFactory_new(void);

void BasicGroupItemsHelperFactory_init(BasicGroupItemsHelperFactory* this);
Any* BasicGroupItemsHelperFactory_getInstance(BasicGroupItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void BasicGroupItemsHelperFactory_initFields(BasicGroupItemsHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void BasicGroupItemsHelperFactory_init(BasicGroupItemsHelperFactory* this) {
    TagHelperFactory_init(&this->base);
    BasicGroupItemsHelperFactory_initFields(this);
}

BasicGroupItemsHelperFactory* BasicGroupItemsHelperFactory_new(void) {
    BasicGroupItemsHelperFactory* this = calloc(1, sizeof(BasicGroupItemsHelperFactory));
    BasicGroupItemsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* BasicGroupItemsHelperFactory_getInstance(BasicGroupItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return BasicGroupItemsHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

