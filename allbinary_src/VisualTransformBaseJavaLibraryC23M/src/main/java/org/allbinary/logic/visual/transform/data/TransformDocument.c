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
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"

typedef struct TransformDocument TransformDocument;
struct TransformDocument {
    TransformDocumentInterface TransformDocumentInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Node* baseNode;
    Document* document;
};


TransformDocument* TransformDocument_new(void);

void TransformDocument_init(TransformDocument* this);
Node* TransformDocument_getBaseNode(TransformDocument* this);
Document* TransformDocument_getDoc(TransformDocument* this);
const char* TransformDocument_log(TransformDocument* this);

static void TransformDocument_initFields(TransformDocument* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->baseNode = nullptr;
    this->document = nullptr;
}


void TransformDocument_init(TransformDocument* this) {
    TransformDocument_initFields(this);
        JAVA_TRY {
            this->document = DomDocumentHelper_create();
            Node* allbinaryNode = Document_createElement(this->document, "allbinary");
            this->baseNode = allbinaryNode;
            Document_appendChild(this->document, this->baseNode);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_putF(this->logUtil, TransformDocument_log(this), this, this->commonStrings->CONSTRUCTOR);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

TransformDocument* TransformDocument_new(void) {
    TransformDocument* this = calloc(1, sizeof(TransformDocument));
    TransformDocument_init(this);
    return this;
}


Node* TransformDocument_getBaseNode(TransformDocument* this) {
        return this->baseNode;
}


Document* TransformDocument_getDoc(TransformDocument* this) {
        return this->document;
}


// throws Exception
const char* TransformDocument_log(TransformDocument* this) {
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

