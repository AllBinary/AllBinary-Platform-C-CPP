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
// package views.business.context.modules.storefront.customizer.includes.style.css

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct CssCustomizerView CssCustomizerView;
struct CssCustomizerView {
    HttpStoreComponentView base;
    LogUtil* logUtil;
    ValidationInterface* styleValidationInterface;
};


CssCustomizerView* CssCustomizerView_new(TransformInfoInterface* transformInfoInterface);

void CssCustomizerView_init(CssCustomizerView* this, TransformInfoInterface* transformInfoInterface);
void CssCustomizerView_addDomNodeInterfaces(CssCustomizerView* this);
const char* CssCustomizerView_view(CssCustomizerView* this);

static void CssCustomizerView_initFields(CssCustomizerView* this) {
    this->logUtil = LogUtil_getInstance();
    this->styleValidationInterface = nullptr;
}


void CssCustomizerView_init(CssCustomizerView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        CssCustomizerView_initFields(this);
}

CssCustomizerView* CssCustomizerView_new(TransformInfoInterface* transformInfoInterface) {
    CssCustomizerView* this = calloc(1, sizeof(CssCustomizerView));
    CssCustomizerView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
void CssCustomizerView_addDomNodeInterfaces(CssCustomizerView* this) {
        CssCustomizerView_addDomNodeInterface(this, ((DomNodeInterface*) this->styleValidationInterface));
}


// throws Exception
const char* CssCustomizerView_view(CssCustomizerView* this) {
        JAVA_TRY {
            CssCustomizerView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

