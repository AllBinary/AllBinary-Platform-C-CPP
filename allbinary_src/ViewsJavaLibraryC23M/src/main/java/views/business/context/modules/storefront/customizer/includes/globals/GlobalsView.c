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
// package views.business.context.modules.storefront.customizer.includes.globals

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
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/includes/globals/GlobalsValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct GlobalsView GlobalsView;
struct GlobalsView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    GlobalsValidation* globalsValidation;
};


GlobalsView* GlobalsView_new(TransformInfoInterface* transformInfoInterface);

void GlobalsView_init(GlobalsView* this, TransformInfoInterface* transformInfoInterface);
void GlobalsView_addDomNodeInterfaces(GlobalsView* this);
Node* GlobalsView_toXmlNode(GlobalsView* this, Document* document);
const char* GlobalsView_view(GlobalsView* this);

static void GlobalsView_initFields(GlobalsView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GlobalsView_init(GlobalsView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        GlobalsView_initFields(this);
        this->globalsValidation = GlobalsValidation_new(JAVA_CALL(GlobalsView_getWeblisketSession(this), getStoreName));
}

GlobalsView* GlobalsView_new(TransformInfoInterface* transformInfoInterface) {
    GlobalsView* this = calloc(1, sizeof(GlobalsView));
    GlobalsView_init(this, transformInfoInterface);
    return this;
}


void GlobalsView_addDomNodeInterfaces(GlobalsView* this) {
        GlobalsView_addDomNodeInterface(this, ((DomNodeInterface*) this->globalsValidation));
}


// throws Exception
Node* GlobalsView_toXmlNode(GlobalsView* this, Document* document) {
        JAVA_TRY {
            return GlobalsValidation_toXmlNode(this->globalsValidation, document);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
const char* GlobalsView_view(GlobalsView* this) {
        JAVA_TRY {
            GlobalsView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

