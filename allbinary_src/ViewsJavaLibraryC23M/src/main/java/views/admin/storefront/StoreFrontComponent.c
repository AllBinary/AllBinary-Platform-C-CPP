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
// package views.admin.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct StoreFrontComponent StoreFrontComponent;
struct StoreFrontComponent {
    HttpStoreComponentView base;
    LogUtil* logUtil;
    StoreFrontInterface* newStoreFrontInterface;
};


StoreFrontComponent* StoreFrontComponent_new(TransformInfoInterface* transformInfoInterface);

void StoreFrontComponent_init(StoreFrontComponent* this, TransformInfoInterface* transformInfoInterface);
const char* StoreFrontComponent_view(StoreFrontComponent* this);

static void StoreFrontComponent_initFields(StoreFrontComponent* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void StoreFrontComponent_init(StoreFrontComponent* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        StoreFrontComponent_initFields(this);
        this->newStoreFrontInterface = ((StoreFrontInterface*) StoreFront_new(((HttpServletRequest*) JAVA_CALL(StoreFrontComponent_getPageContext(this), getRequest))));
        if (StoreFrontInterface_getName(this->newStoreFrontInterface) == nullptr) {
            StoreFrontInterface_setName(this->newStoreFrontInterface, JAVA_CALL(StoreFrontComponent_getWeblisketSession(this), getStoreName));
        }
}

StoreFrontComponent* StoreFrontComponent_new(TransformInfoInterface* transformInfoInterface) {
    StoreFrontComponent* this = calloc(1, sizeof(StoreFrontComponent));
    StoreFrontComponent_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* StoreFrontComponent_view(StoreFrontComponent* this) {
        JAVA_TRY {
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

