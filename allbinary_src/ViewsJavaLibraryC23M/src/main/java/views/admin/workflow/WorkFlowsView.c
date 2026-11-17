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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct WorkFlowsView WorkFlowsView;
struct WorkFlowsView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* workFlowsVector;
};


WorkFlowsView* WorkFlowsView_new(TransformInfoInterface* transformInfoInterface);

void WorkFlowsView_init(WorkFlowsView* this, TransformInfoInterface* transformInfoInterface);
void WorkFlowsView_addDomNodeInterfaces(WorkFlowsView* this);
const char* WorkFlowsView_view(WorkFlowsView* this);
Node* WorkFlowsView_toXmlNode(WorkFlowsView* this, Document* document);

static void WorkFlowsView_initFields(WorkFlowsView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void WorkFlowsView_init(WorkFlowsView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        WorkFlowsView_initFields(this);
        this->workFlowsVector = JAVA_CALL(WorkFlowEntityFactory_create2(WorkFlowEntityFactory_getInstance()), get, JAVA_CALL(WorkFlowsView_getWeblisketSession(this), getStoreName));
}

WorkFlowsView* WorkFlowsView_new(TransformInfoInterface* transformInfoInterface) {
    WorkFlowsView* this = calloc(1, sizeof(WorkFlowsView));
    WorkFlowsView_init(this, transformInfoInterface);
    return this;
}


void WorkFlowsView_addDomNodeInterfaces(WorkFlowsView* this) {
        WorkFlowsView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* WorkFlowsView_view(WorkFlowsView* this) {
        JAVA_TRY {
            WorkFlowsView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


Node* WorkFlowsView_toXmlNode(WorkFlowsView* this, Document* document) {
        JAVA_TRY {
            Node* node = Document_createElement(document, WorkFlowData_getInstance()->WORKFLOWS);
            int32_t size = BasicArrayList_size(this->workFlowsVector);
            for (int32_t index = 0; index < size; index++) {
                WorkFlowInterface* workFlowInterface = ((WorkFlowInterface*) BasicArrayList_get(this->workFlowsVector, index));
            }
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

