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
// package views.business.context

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/TransformFactory.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"
#include "views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h"

typedef struct RootContextView RootContextView;
struct RootContextView {
    HttpStoreComponentView base;
    TransformTemplateInterface TransformTemplateInterface_interface;
    LogUtil* logUtil;
};


RootContextView* RootContextView_new(TransformInfoInterface* transformInfoInterface);

void RootContextView_init(RootContextView* this, TransformInfoInterface* transformInfoInterface);
const char* RootContextView_view(RootContextView* this);
const char* RootContextView_getName(RootContextView* this);

static void RootContextView_initFields(RootContextView* this) {
    this->logUtil = LogUtil_getInstance();
}


void RootContextView_init(RootContextView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        RootContextView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "RootContextView()");
        }
}

RootContextView* RootContextView_new(TransformInfoInterface* transformInfoInterface) {
    RootContextView* this = calloc(1, sizeof(RootContextView));
    RootContextView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* RootContextView_view(RootContextView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("View Name: ", JAVA_CALL(RootContextView_getTransformInfoInterface(this), getName)), this, "view()");
            }
            const char* viewName = RootContextView_getName(this);
            TransformInterface* componentInterface = TransformFactory_getInstance(TransformFactory_getInstance(), this->abeClientInformation, viewName, RootContextView_getTransformInfoInterface(this));
            return TransformInterface_view(componentInterface);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
const char* RootContextView_getName(RootContextView* this) {
        JAVA_TRY {
            NoTemplateTransformInfoObjectConfig* objectConfig = NoTemplateTransformInfoObjectConfig_new(RootContextView_getTransformInfoInterface(this), JAVA_CALL(JAVA_CALL(RootContextView_getTransformInfoInterface(this), getObjectConfigInterface), toXmlDoc));
            BasicArrayList* componentsVector = NoTemplateTransformInfoObjectConfig_getTransforms(objectConfig);
            if (BasicArrayList_size(componentsVector) == 0) {
                java_throw(java_exception_new("Exception", "Template View Not Set - No Components"));
            }
            if (BasicArrayList_size(componentsVector) > 1) {
                java_throw(java_exception_new("Exception", java_concat("To Many Root Template Views: ", java_string_of(BasicArrayList_size(componentsVector)))));
            }
            TransformInfo* transformInfoInterface = ((TransformInfo*) BasicArrayList_get(componentsVector, 0));
            const char* viewName = TransformInfoInterface_getName(transformInfoInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Root Template With View Name: ", viewName), this, "getName()");
            }
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), viewName)) {
                java_throw(java_exception_new("Exception", "Template View Not Set - No View Name"));
            }
            return viewName;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getName()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

