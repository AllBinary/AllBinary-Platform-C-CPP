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
// package views.business.context.modules.storefront.customizer.bodies.generic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/page/PageData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/StoreTransformer.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/GenericBodyValidation.h"
#include "org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h"
#include "org/apache/commons/lang3/StringEscapeUtils.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct GenericBodyCustomizerView GenericBodyCustomizerView;
struct GenericBodyCustomizerView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    GenericBodyValidation* body;
};

static const char* GenericBodyCustomizerView_NAME = "None";

GenericBodyCustomizerView* GenericBodyCustomizerView_new(TransformInfoInterface* transformInfoInterface);

void GenericBodyCustomizerView_init(GenericBodyCustomizerView* this, TransformInfoInterface* transformInfoInterface);
void GenericBodyCustomizerView_addDomNodeInterfaces(GenericBodyCustomizerView* this);
Node* GenericBodyCustomizerView_toXmlNode(GenericBodyCustomizerView* this, Document* document);
const char* GenericBodyCustomizerView_view(GenericBodyCustomizerView* this);

static void GenericBodyCustomizerView_initFields(GenericBodyCustomizerView* this) {
    this->logUtil = LogUtil_getInstance();
    this->body = nullptr;
}


void GenericBodyCustomizerView_init(GenericBodyCustomizerView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        GenericBodyCustomizerView_initFields(this);
}

GenericBodyCustomizerView* GenericBodyCustomizerView_new(TransformInfoInterface* transformInfoInterface) {
    GenericBodyCustomizerView* this = calloc(1, sizeof(GenericBodyCustomizerView));
    GenericBodyCustomizerView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
void GenericBodyCustomizerView_addDomNodeInterfaces(GenericBodyCustomizerView* this) {
        GenericBodyCustomizerView_addDomNodeInterface(this, ((DomNodeInterface*) this->body));
        GenericBodyCustomizerView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
Node* GenericBodyCustomizerView_toXmlNode(GenericBodyCustomizerView* this, Document* document) {
        const char* pageName = TransformTemplateCustomizerUtil_getPageNameHack(TransformTemplateCustomizerUtil_getInstance(), JAVA_CALL(GenericBodyCustomizerView_getTransformInfoInterface(this), getName), JAVA_CALL(GenericBodyCustomizerView_getWeblisketSession(this), getStoreName));
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), pageName)) {
            pageName = GenericBodyCustomizerView_NAME;
        }
        return ModDomHelper_createNameValueNodes(document, PageData_getInstance()->NAME, pageName);
}


// throws Exception
const char* GenericBodyCustomizerView_view(GenericBodyCustomizerView* this) {
        JAVA_TRY {
            GenericBodyCustomizerView_addDomNodeInterfaces(this);
            const char* success = XmlDocumentHelper_toString(GenericBodyCustomizerView_getDoc(this));
            const char* result = StoreTransformer_translate(StoreTransformer_new(this->abeClientInformation, GenericBodyCustomizerView_getTransformInfoInterface(this)), success);
            return StringEscapeUtils_unescapeHtml3(result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

