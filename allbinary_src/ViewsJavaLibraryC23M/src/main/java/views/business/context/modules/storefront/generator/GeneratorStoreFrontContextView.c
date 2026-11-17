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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/generator/TransformsGeneratorUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfosData.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct GeneratorStoreFrontContextView GeneratorStoreFrontContextView;
struct GeneratorStoreFrontContextView {
    HttpStoreComponentView base;
    LogUtil* logUtil;
};


GeneratorStoreFrontContextView* GeneratorStoreFrontContextView_new(TransformInfoInterface* transformInfoInterface);

void GeneratorStoreFrontContextView_init(GeneratorStoreFrontContextView* this, TransformInfoInterface* transformInfoInterface);
const char* GeneratorStoreFrontContextView_view(GeneratorStoreFrontContextView* this, const char* group);
const char* GeneratorStoreFrontContextView_view(GeneratorStoreFrontContextView* this);

static void GeneratorStoreFrontContextView_initFields(GeneratorStoreFrontContextView* this) {
    this->logUtil = LogUtil_getInstance();
}


void GeneratorStoreFrontContextView_init(GeneratorStoreFrontContextView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        GeneratorStoreFrontContextView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
}

GeneratorStoreFrontContextView* GeneratorStoreFrontContextView_new(TransformInfoInterface* transformInfoInterface) {
    GeneratorStoreFrontContextView* this = calloc(1, sizeof(GeneratorStoreFrontContextView));
    GeneratorStoreFrontContextView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* GeneratorStoreFrontContextView_view(GeneratorStoreFrontContextView* this, const char* group) {
        const char* result = TransformsGeneratorUtil_generateComponentsFromObjectConfig(TransformsGeneratorUtil_getInstance(), this->abeClientInformation, GeneratorStoreFrontContextView_getTransformInfoInterface(this), group);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPEXTRAOUTPUT)) {
            return result;
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}


// throws Exception
// Java overloaded method: C needs a different name
const char* GeneratorStoreFrontContextView_view(GeneratorStoreFrontContextView* this) {
        JAVA_TRY {
            return GeneratorStoreFrontContextView_view(this, TransformInfosData_getInstance()->ALL);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

