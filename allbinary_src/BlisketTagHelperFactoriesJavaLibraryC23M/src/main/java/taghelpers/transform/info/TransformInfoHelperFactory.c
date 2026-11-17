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
// package taghelpers.transform.info

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

typedef struct TransformInfoHelperFactory TransformInfoHelperFactory;
struct TransformInfoHelperFactory {
    TagHelperFactory base;
    LogUtil* logUtil;
};


TransformInfoHelperFactory* TransformInfoHelperFactory_new(void);

void TransformInfoHelperFactory_init(TransformInfoHelperFactory* this);
Any* TransformInfoHelperFactory_getInstance(TransformInfoHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void TransformInfoHelperFactory_initFields(TransformInfoHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void TransformInfoHelperFactory_init(TransformInfoHelperFactory* this) {
    TagHelperFactory_init(&this->base);
    TransformInfoHelperFactory_initFields(this);
}

TransformInfoHelperFactory* TransformInfoHelperFactory_new(void) {
    TransformInfoHelperFactory* this = calloc(1, sizeof(TransformInfoHelperFactory));
    TransformInfoHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* TransformInfoHelperFactory_getInstance(TransformInfoHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return TransformInfoHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

