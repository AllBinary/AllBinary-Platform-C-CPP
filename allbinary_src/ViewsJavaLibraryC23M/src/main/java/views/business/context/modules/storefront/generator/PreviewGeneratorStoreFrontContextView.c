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
// package views.business.context.modules.storefront.generator

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfosData.h"
#include "org/allbinary/string/CommonSeps.h"
#include "views/business/context/modules/storefront/generator/GeneratorStoreFrontContextView.h"

typedef struct PreviewGeneratorStoreFrontContextView PreviewGeneratorStoreFrontContextView;
struct PreviewGeneratorStoreFrontContextView {
    GeneratorStoreFrontContextView base;
    LogUtil* logUtil;
};


PreviewGeneratorStoreFrontContextView* PreviewGeneratorStoreFrontContextView_new(TransformInfoInterface* transformInfoInterface);

void PreviewGeneratorStoreFrontContextView_init(PreviewGeneratorStoreFrontContextView* this, TransformInfoInterface* transformInfoInterface);
const char* PreviewGeneratorStoreFrontContextView_view(PreviewGeneratorStoreFrontContextView* this);

static void PreviewGeneratorStoreFrontContextView_initFields(PreviewGeneratorStoreFrontContextView* this) {
    this->logUtil = LogUtil_getInstance();
}


void PreviewGeneratorStoreFrontContextView_init(PreviewGeneratorStoreFrontContextView* this, TransformInfoInterface* transformInfoInterface) {
        GeneratorStoreFrontContextView_init(&this->base, transformInfoInterface);
        PreviewGeneratorStoreFrontContextView_initFields(this);
}

PreviewGeneratorStoreFrontContextView* PreviewGeneratorStoreFrontContextView_new(TransformInfoInterface* transformInfoInterface) {
    PreviewGeneratorStoreFrontContextView* this = calloc(1, sizeof(PreviewGeneratorStoreFrontContextView));
    PreviewGeneratorStoreFrontContextView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* PreviewGeneratorStoreFrontContextView_view(PreviewGeneratorStoreFrontContextView* this) {
        JAVA_TRY {
            TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) PreviewGeneratorStoreFrontContextView_getTransformInfoInterface(this));
            JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), put, TransformInfoData_getInstance()->PARTIAL, CommonSeps_getInstance()->SPACE + TransformInfosData_getInstance()->PREVIEW);
            return PreviewGeneratorStoreFrontContextView_view(this, TransformInfosData_getInstance()->PREVIEW);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

