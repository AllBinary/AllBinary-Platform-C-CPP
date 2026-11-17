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
// package views.business.context.modules.storefront.customizer.includes.meta

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
#include "org/allbinary/logic/visual/transform/template/customizer/includes/meta/MetasValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct MetaView MetaView;
struct MetaView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    MetasValidation* metasValidation;
};


MetaView* MetaView_new(TransformInfoInterface* transformInfoInterface);

void MetaView_init(MetaView* this, TransformInfoInterface* transformInfoInterface);
void MetaView_addDomNodeInterfaces(MetaView* this);
Node* MetaView_toXmlNode(MetaView* this, Document* document);
const char* MetaView_view(MetaView* this);

static void MetaView_initFields(MetaView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void MetaView_init(MetaView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        MetaView_initFields(this);
        this->metasValidation = MetasValidation_new(JAVA_CALL(MetaView_getWeblisketSession(this), getStoreName));
}

MetaView* MetaView_new(TransformInfoInterface* transformInfoInterface) {
    MetaView* this = calloc(1, sizeof(MetaView));
    MetaView_init(this, transformInfoInterface);
    return this;
}


void MetaView_addDomNodeInterfaces(MetaView* this) {
        MetaView_addDomNodeInterface(this, ((DomNodeInterface*) this->metasValidation));
}


// throws Exception
Node* MetaView_toXmlNode(MetaView* this, Document* document) {
        JAVA_TRY {
            return MetasValidation_toXmlNode(this->metasValidation, document);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
const char* MetaView_view(MetaView* this) {
        JAVA_TRY {
            MetaView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

