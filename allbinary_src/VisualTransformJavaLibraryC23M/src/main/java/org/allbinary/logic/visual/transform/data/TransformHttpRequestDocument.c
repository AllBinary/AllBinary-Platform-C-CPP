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
// package org.allbinary.logic.visual.transform.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/http/AcceptableResponseGenerator.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"

typedef struct TransformHttpRequestDocument TransformHttpRequestDocument;
struct TransformHttpRequestDocument {
    TransformDocumentInterface TransformDocumentInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Node* baseNode;
    Document* document;
};

static const char* TransformHttpRequestDocument_language = "en";
static const char* TransformHttpRequestDocument_local = "US";

TransformHttpRequestDocument* TransformHttpRequestDocument_new(PageContext* pageContext, WeblisketSession* weblisketSession);

void TransformHttpRequestDocument_init(TransformHttpRequestDocument* this, PageContext* pageContext, WeblisketSession* weblisketSession);

TransformHttpRequestDocument* TransformHttpRequestDocument_new1(SearchRequest* searchRequest);
void TransformHttpRequestDocument_init1(TransformHttpRequestDocument* this, SearchRequest* searchRequest);
Node* TransformHttpRequestDocument_getBaseNode(TransformHttpRequestDocument* this);
Document* TransformHttpRequestDocument_getDoc(TransformHttpRequestDocument* this);
const char* TransformHttpRequestDocument_log(TransformHttpRequestDocument* this);

static void TransformHttpRequestDocument_initFields(TransformHttpRequestDocument* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->baseNode = nullptr;
    this->document = nullptr;
}


void TransformHttpRequestDocument_init(TransformHttpRequestDocument* this, PageContext* pageContext, WeblisketSession* weblisketSession) {
    TransformHttpRequestDocument_initFields(this);
        JAVA_TRY {
            const char* contentType = AcceptableResponseGenerator_get(AcceptableResponseGenerator_getInstance(), ((HttpServletRequest*) PageContext_getRequest(pageContext)));
            this->document = DomDocumentHelper_create();
            Node* contentTypeNode = Document_createElement(this->document, contentType);
            Node* languageTypeNode = Document_createElement(this->document, TransformHttpRequestDocument_language);
            Node* localTypeNode = Document_createElement(this->document, TransformHttpRequestDocument_local);
            this->baseNode = localTypeNode;
            Node_appendChild(languageTypeNode, localTypeNode);
            Node_appendChild(contentTypeNode, languageTypeNode);
            Document_appendChild(this->document, contentTypeNode);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_putF(this->logUtil, TransformHttpRequestDocument_log(this), this, this->commonStrings->CONSTRUCTOR);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

TransformHttpRequestDocument* TransformHttpRequestDocument_new(PageContext* pageContext, WeblisketSession* weblisketSession) {
    TransformHttpRequestDocument* this = calloc(1, sizeof(TransformHttpRequestDocument));
    TransformHttpRequestDocument_init(this, pageContext, weblisketSession);
    return this;
}


void TransformHttpRequestDocument_init1(TransformHttpRequestDocument* this, SearchRequest* searchRequest) {
    TransformHttpRequestDocument_initFields(this);
        JAVA_TRY {
            const char* contentType = SearchRequest_getContentType(searchRequest);
            this->document = DomDocumentHelper_create();
            Node* contentTypeNode = Document_createElement(this->document, contentType);
            Node* languageTypeNode = Document_createElement(this->document, TransformHttpRequestDocument_language);
            Node* localTypeNode = Document_createElement(this->document, TransformHttpRequestDocument_local);
            this->baseNode = localTypeNode;
            Node_appendChild(languageTypeNode, localTypeNode);
            Node_appendChild(contentTypeNode, languageTypeNode);
            Document_appendChild(this->document, contentTypeNode);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

TransformHttpRequestDocument* TransformHttpRequestDocument_new1(SearchRequest* searchRequest) {
    TransformHttpRequestDocument* this = calloc(1, sizeof(TransformHttpRequestDocument));
    TransformHttpRequestDocument_init1(this, searchRequest);
    return this;
}


Node* TransformHttpRequestDocument_getBaseNode(TransformHttpRequestDocument* this) {
        return this->baseNode;
}


Document* TransformHttpRequestDocument_getDoc(TransformHttpRequestDocument* this) {
        return this->document;
}


// throws Exception
const char* TransformHttpRequestDocument_log(TransformHttpRequestDocument* this) {
        StringMaker* stringBuffer = StringMaker_new();
        if (this->baseNode != nullptr) {
            StringMaker_append(stringBuffer, "BaseNode: ");
            StringMaker_append(stringBuffer, Node_getNodeName(this->baseNode));
        } else {
            StringMaker_append(stringBuffer, "Log-Error: BaseNode is Null");
        }
        StringMaker_append(stringBuffer, "\nDocument: ");
        StringMaker_append(stringBuffer, XmlDocumentHelper_toString(this->document));
        return StringMaker_toString(stringBuffer);
}

