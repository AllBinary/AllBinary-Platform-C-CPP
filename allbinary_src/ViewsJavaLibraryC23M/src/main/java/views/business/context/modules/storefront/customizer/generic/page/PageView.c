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
// package views.business.context.modules.storefront.customizer.generic.page

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

//implements DomNodeInterface
typedef struct PageView PageView;
struct PageView {
    HttpStoreComponentView base;
    LogUtil* logUtil;
};


PageView* PageView_new(TransformInfoInterface* transformInfoInterface);

void PageView_init(PageView* this, TransformInfoInterface* transformInfoInterface);
const char* PageView_view(PageView* this);

static void PageView_initFields(PageView* this) {
    this->logUtil = LogUtil_getInstance();
}


void PageView_init(PageView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        PageView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
}

PageView* PageView_new(TransformInfoInterface* transformInfoInterface) {
    PageView* this = calloc(1, sizeof(PageView));
    PageView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* PageView_view(PageView* this) {
        JAVA_TRY {
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

