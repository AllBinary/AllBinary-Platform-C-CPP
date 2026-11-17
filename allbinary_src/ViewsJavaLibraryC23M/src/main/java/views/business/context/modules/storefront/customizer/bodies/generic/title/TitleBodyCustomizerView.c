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
// package views.business.context.modules.storefront.customizer.bodies.generic.title

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
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/title/TitleBodyValidation.h"
#include "org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h"
#include "org/apache/commons/lang3/StringEscapeUtils.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct TitleBodyCustomizerView TitleBodyCustomizerView;
struct TitleBodyCustomizerView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    TitleBodyValidation* titleBody;
};

static const char* TitleBodyCustomizerView_NAME = "None";

TitleBodyCustomizerView* TitleBodyCustomizerView_new(TransformInfoInterface* transformInfoInterface);

void TitleBodyCustomizerView_init(TitleBodyCustomizerView* this, TransformInfoInterface* transformInfoInterface);
void TitleBodyCustomizerView_addDomNodeInterfaces(TitleBodyCustomizerView* this);
Node* TitleBodyCustomizerView_toXmlNode(TitleBodyCustomizerView* this, Document* document);
const char* TitleBodyCustomizerView_view(TitleBodyCustomizerView* this);

static void TitleBodyCustomizerView_initFields(TitleBodyCustomizerView* this) {
    this->logUtil = LogUtil_getInstance();
    this->titleBody = nullptr;
}


void TitleBodyCustomizerView_init(TitleBodyCustomizerView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        TitleBodyCustomizerView_initFields(this);
}

TitleBodyCustomizerView* TitleBodyCustomizerView_new(TransformInfoInterface* transformInfoInterface) {
    TitleBodyCustomizerView* this = calloc(1, sizeof(TitleBodyCustomizerView));
    TitleBodyCustomizerView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
void TitleBodyCustomizerView_addDomNodeInterfaces(TitleBodyCustomizerView* this) {
        TitleBodyCustomizerView_addDomNodeInterface(this, ((DomNodeInterface*) this->titleBody));
        TitleBodyCustomizerView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
Node* TitleBodyCustomizerView_toXmlNode(TitleBodyCustomizerView* this, Document* document) {
        const char* pageName = TransformTemplateCustomizerUtil_getPageNameHack(TransformTemplateCustomizerUtil_getInstance(), JAVA_CALL(TitleBodyCustomizerView_getTransformInfoInterface(this), getName), JAVA_CALL(TitleBodyCustomizerView_getWeblisketSession(this), getStoreName));
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), pageName)) {
            pageName = TitleBodyCustomizerView_NAME;
        }
        return ModDomHelper_createNameValueNodes(document, PageData_getInstance()->NAME, pageName);
}


// throws Exception
const char* TitleBodyCustomizerView_view(TitleBodyCustomizerView* this) {
        JAVA_TRY {
            const char* success = XmlDocumentHelper_toString(TitleBodyCustomizerView_getDoc(this));
            const char* result = StoreTransformer_translate(StoreTransformer_new(this->abeClientInformation, TitleBodyCustomizerView_getTransformInfoInterface(this)), success);
            return StringEscapeUtils_unescapeHtml3(result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

