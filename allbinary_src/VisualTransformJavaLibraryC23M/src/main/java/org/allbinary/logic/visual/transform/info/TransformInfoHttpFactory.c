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
// package org.allbinary.logic.visual.transform.info

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TransformInfoHttpFactory TransformInfoHttpFactory;
struct TransformInfoHttpFactory {
    char unused;
};


TransformInfoHttpFactory* TransformInfoHttpFactory_new(void);

void TransformInfoHttpFactory_init(TransformInfoHttpFactory* this);
TransformInfoInterface* TransformInfoHttpFactory_getInstance(HashMap* propertiesHashMap, PageContext* pageContext);


void TransformInfoHttpFactory_init(TransformInfoHttpFactory* this) {
}

TransformInfoHttpFactory* TransformInfoHttpFactory_new(void) {
    TransformInfoHttpFactory* this = calloc(1, sizeof(TransformInfoHttpFactory));
    TransformInfoHttpFactory_init(this);
    return this;
}


// throws Exception
TransformInfoInterface* TransformInfoHttpFactory_getInstance(HashMap* propertiesHashMap, PageContext* pageContext) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            WeblisketSession* weblisketSession = WeblisketSession_new(propertiesHashMap, pageContext);
            if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), WeblisketSession_getStoreName(weblisketSession))) {
                StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(WeblisketSession_getStoreName(weblisketSession));
                if (storeFrontInterface != nullptr) {
                    return ((TransformInfoInterface*) TransformInfoHttpStore_new(storeFrontInterface, propertiesHashMap, pageContext));
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No StoreFront with: ", java_string_of(WeblisketSession_getStoreName(weblisketSession)))));
                }
            } else {
                return ((TransformInfoInterface*) TransformInfoHttpContext_new(propertiesHashMap, pageContext));
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "TransformInfoFactory", commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

