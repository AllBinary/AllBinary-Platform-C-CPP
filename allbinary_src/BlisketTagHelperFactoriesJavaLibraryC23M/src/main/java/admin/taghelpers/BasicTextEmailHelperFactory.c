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

typedef struct BasicTextEmailHelperFactory BasicTextEmailHelperFactory;
struct BasicTextEmailHelperFactory {
    TagHelperFactory base;
    LogUtil* logUtil;
};


BasicTextEmailHelperFactory* BasicTextEmailHelperFactory_new(void);

void BasicTextEmailHelperFactory_init(BasicTextEmailHelperFactory* this);
Any* BasicTextEmailHelperFactory_getInstance(BasicTextEmailHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void BasicTextEmailHelperFactory_initFields(BasicTextEmailHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void BasicTextEmailHelperFactory_init(BasicTextEmailHelperFactory* this) {
    TagHelperFactory_init(&this->base);
    BasicTextEmailHelperFactory_initFields(this);
}

BasicTextEmailHelperFactory* BasicTextEmailHelperFactory_new(void) {
    BasicTextEmailHelperFactory* this = calloc(1, sizeof(BasicTextEmailHelperFactory));
    BasicTextEmailHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* BasicTextEmailHelperFactory_getInstance(BasicTextEmailHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return BasicTextEmailHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

