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
// package views.business.context.modules.storefront.customizer.hedges.header

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
#include "org/allbinary/logic/visual/transform/template/customizer/hedges/heading/HeadingValidation.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct TopBarView TopBarView;
struct TopBarView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HeadingValidation* heading;
};


TopBarView* TopBarView_new(TransformInfoInterface* transformInfoInterface);

void TopBarView_init(TopBarView* this, TransformInfoInterface* transformInfoInterface);
void TopBarView_addDomNodeInterfaces(TopBarView* this);
Node* TopBarView_toXmlNode(TopBarView* this, Document* document);
const char* TopBarView_view(TopBarView* this);

static void TopBarView_initFields(TopBarView* this) {
    this->logUtil = LogUtil_getInstance();
    this->heading = nullptr;
}


void TopBarView_init(TopBarView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        TopBarView_initFields(this);
}

TopBarView* TopBarView_new(TransformInfoInterface* transformInfoInterface) {
    TopBarView* this = calloc(1, sizeof(TopBarView));
    TopBarView_init(this, transformInfoInterface);
    return this;
}


void TopBarView_addDomNodeInterfaces(TopBarView* this) {
        TopBarView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
Node* TopBarView_toXmlNode(TopBarView* this, Document* document) {
        JAVA_TRY {
            return HeadingValidation_toXmlNode(this->heading, document);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
const char* TopBarView_view(TopBarView* this) {
        JAVA_TRY {
            TopBarView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

