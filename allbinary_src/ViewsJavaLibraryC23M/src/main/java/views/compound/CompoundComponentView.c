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
// package views.compound

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct CompoundComponentView CompoundComponentView;
struct CompoundComponentView {
    HttpStoreComponentView base;
    LogUtil* logUtil;
};


CompoundComponentView* CompoundComponentView_new(TransformInfoInterface* transformInfoInterface);

void CompoundComponentView_init(CompoundComponentView* this, TransformInfoInterface* transformInfoInterface);
const char* CompoundComponentView_view(CompoundComponentView* this);

static void CompoundComponentView_initFields(CompoundComponentView* this) {
    this->logUtil = LogUtil_getInstance();
}


void CompoundComponentView_init(CompoundComponentView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        CompoundComponentView_initFields(this);
}

CompoundComponentView* CompoundComponentView_new(TransformInfoInterface* transformInfoInterface) {
    CompoundComponentView* this = calloc(1, sizeof(CompoundComponentView));
    CompoundComponentView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* CompoundComponentView_view(CompoundComponentView* this) {
        JAVA_TRY {
            const char* success = XmlDocumentHelper_toString(CompoundComponentView_getDoc(this));
            const char* result = CompoundTransform_translate(CompoundTransform_new(CompoundComponentView_getTransformInfoInterface(this)), success);
            return result;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

