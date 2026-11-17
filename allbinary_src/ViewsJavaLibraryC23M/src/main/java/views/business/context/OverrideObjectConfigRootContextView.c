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
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/TransformFactory.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/info/GeneratorTransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/RootTransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct OverrideObjectConfigRootContextView OverrideObjectConfigRootContextView;
struct OverrideObjectConfigRootContextView {
    HttpStoreComponentView base;
    LogUtil* logUtil;
};


OverrideObjectConfigRootContextView* OverrideObjectConfigRootContextView_new(TransformInfoInterface* transformInfoInterface);

void OverrideObjectConfigRootContextView_init(OverrideObjectConfigRootContextView* this, TransformInfoInterface* transformInfoInterface);
const char* OverrideObjectConfigRootContextView_view(OverrideObjectConfigRootContextView* this);

static void OverrideObjectConfigRootContextView_initFields(OverrideObjectConfigRootContextView* this) {
    this->logUtil = LogUtil_getInstance();
}


void OverrideObjectConfigRootContextView_init(OverrideObjectConfigRootContextView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        OverrideObjectConfigRootContextView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "OverrideObjectRootContextView()");
        }
}

OverrideObjectConfigRootContextView* OverrideObjectConfigRootContextView_new(TransformInfoInterface* transformInfoInterface) {
    OverrideObjectConfigRootContextView* this = calloc(1, sizeof(OverrideObjectConfigRootContextView));
    OverrideObjectConfigRootContextView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* OverrideObjectConfigRootContextView_view(OverrideObjectConfigRootContextView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("View Name: ", JAVA_CALL(OverrideObjectConfigRootContextView_getTransformInfoInterface(this), getName)), this, "view()");
            }
            TransformInfoInterface* rootTransformInfoInterface = ((TransformInfoInterface*) TransformInfoHttp_new(((TransformInfoHttp*) OverrideObjectConfigRootContextView_getTransformInfoInterface(this))));
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(OverrideObjectConfigRootContextView_getTransformInfoInterface(this), getStoreName));
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            const char* nameStart = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(JAVA_CALL(OverrideObjectConfigRootContextView_getTransformInfoInterface(this), getName), indexOf, GeneratorTransformInfoData_NAME) > 0) {
                TransformInfoInterface_setName(rootTransformInfoInterface, java_concat(nameStart, java_string_of(GeneratorTransformInfoData_NAME)));
            } else if (JAVA_CALL(JAVA_CALL(OverrideObjectConfigRootContextView_getTransformInfoInterface(this), getName), indexOf, RootTransformInfoData_NAME) > 0) {
                TransformInfoInterface_setName(rootTransformInfoInterface, java_concat(nameStart, java_string_of(RootTransformInfoData_NAME)));
            } else {
                java_throw(java_exception_new("Exception", "Override Currently Not Supported"));
            }
            Document* overrideObjectConfigDocument = JAVA_CALL(JAVA_CALL(OverrideObjectConfigRootContextView_getTransformInfoInterface(this), getObjectConfigInterface), toXmlDoc);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Retrieved OverrideObjectConfig: ", XmlDocumentHelper_toString(overrideObjectConfigDocument)), this, "view()");
            }
            TransformFactory* transformFactory = TransformFactory_getInstance();
            TransformInterface* rootComponentInterface = TransformFactory_getInstance(transformFactory, this->abeClientInformation, TransformInfoInterface_getName(rootTransformInfoInterface), rootTransformInfoInterface);
            TransformTemplateInterface* transformTemplateInterface = ((TransformTemplateInterface*) rootComponentInterface);
            TransformInterface* componentInterface = TransformFactory_getInstance(transformFactory, this->abeClientInformation, TransformTemplateInterface_getName(transformTemplateInterface), TransformInterface_getTransformInfoInterface(rootComponentInterface));
            TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory_getInstance(), this->abeClientInformation, TransformInterface_getTransformInfoInterface(componentInterface), overrideObjectConfigDocument);
            JAVA_CALL(TransformInterface_getTransformInfoInterface(componentInterface), setObjectConfigInterface, transformInfoObjectConfigInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Set OverrideObjectConfig: ", JAVA_CALL(JAVA_CALL(TransformInterface_getTransformInfoInterface(componentInterface), getObjectConfigInterface), toString)), this, "view()");
            }
            return TransformInterface_view(componentInterface);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

