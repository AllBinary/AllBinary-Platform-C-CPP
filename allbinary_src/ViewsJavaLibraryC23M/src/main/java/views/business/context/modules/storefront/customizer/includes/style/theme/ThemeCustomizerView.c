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
// package views.business.context.modules.storefront.customizer.includes.style.theme

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

typedef struct ThemeCustomizerView ThemeCustomizerView;
struct ThemeCustomizerView {
    HttpStoreComponentView base;
    LogUtil* logUtil;
    ValidationInterface* validationInterface;
};


ThemeCustomizerView* ThemeCustomizerView_new(TransformInfoInterface* transformInfoInterface);

void ThemeCustomizerView_init(ThemeCustomizerView* this, TransformInfoInterface* transformInfoInterface);
void ThemeCustomizerView_addDomNodeInterfaces(ThemeCustomizerView* this);
const char* ThemeCustomizerView_view(ThemeCustomizerView* this);

static void ThemeCustomizerView_initFields(ThemeCustomizerView* this) {
    this->logUtil = LogUtil_getInstance();
    this->validationInterface = nullptr;
}


void ThemeCustomizerView_init(ThemeCustomizerView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        ThemeCustomizerView_initFields(this);
}

ThemeCustomizerView* ThemeCustomizerView_new(TransformInfoInterface* transformInfoInterface) {
    ThemeCustomizerView* this = calloc(1, sizeof(ThemeCustomizerView));
    ThemeCustomizerView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
void ThemeCustomizerView_addDomNodeInterfaces(ThemeCustomizerView* this) {
        ThemeCustomizerView_addDomNodeInterface(this, ((DomNodeInterface*) this->validationInterface));
}


// throws Exception
const char* ThemeCustomizerView_view(ThemeCustomizerView* this) {
        JAVA_TRY {
            ThemeCustomizerView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

