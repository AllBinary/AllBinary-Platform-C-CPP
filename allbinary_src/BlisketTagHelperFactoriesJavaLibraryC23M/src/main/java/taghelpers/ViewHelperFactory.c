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
#include "admin/taghelpers/TagHelperFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"

typedef struct ViewHelperFactory ViewHelperFactory;
struct ViewHelperFactory {
    TagHelperFactory base;
    LogUtil* logUtil;
};


ViewHelperFactory* ViewHelperFactory_new(void);

void ViewHelperFactory_init(ViewHelperFactory* this);
Any* ViewHelperFactory_getInstance(ViewHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void ViewHelperFactory_initFields(ViewHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void ViewHelperFactory_init(ViewHelperFactory* this) {
    TagHelperFactory_init(&this->base);
    ViewHelperFactory_initFields(this);
}

ViewHelperFactory* ViewHelperFactory_new(void) {
    ViewHelperFactory* this = calloc(1, sizeof(ViewHelperFactory));
    ViewHelperFactory_init(this);
    return this;
}


// throws Exception, LicensingException
Any* ViewHelperFactory_getInstance(ViewHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return ViewHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

