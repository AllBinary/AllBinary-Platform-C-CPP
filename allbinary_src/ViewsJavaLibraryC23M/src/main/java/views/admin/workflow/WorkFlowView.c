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
// package views.admin.workflow

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
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct WorkFlowView WorkFlowView;
struct WorkFlowView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    WorkFlowInterface* workFlowInterface;
};


WorkFlowView* WorkFlowView_new(TransformInfoInterface* transformInfoInterface);

void WorkFlowView_init(WorkFlowView* this, TransformInfoInterface* transformInfoInterface);
Node* WorkFlowView_toXmlNode(WorkFlowView* this, Document* document);
void WorkFlowView_addDomNodeInterfaces(WorkFlowView* this);
const char* WorkFlowView_view(WorkFlowView* this);

static void WorkFlowView_initFields(WorkFlowView* this) {
    this->logUtil = LogUtil_getInstance();
    this->workFlowInterface = nullptr;
}


void WorkFlowView_init(WorkFlowView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        WorkFlowView_initFields(this);
}

WorkFlowView* WorkFlowView_new(TransformInfoInterface* transformInfoInterface) {
    WorkFlowView* this = calloc(1, sizeof(WorkFlowView));
    WorkFlowView_init(this, transformInfoInterface);
    return this;
}


Node* WorkFlowView_toXmlNode(WorkFlowView* this, Document* document) {
        JAVA_TRY {
            return nullptr;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void WorkFlowView_addDomNodeInterfaces(WorkFlowView* this) {
        WorkFlowView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* WorkFlowView_view(WorkFlowView* this) {
        JAVA_TRY {
            WorkFlowView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

