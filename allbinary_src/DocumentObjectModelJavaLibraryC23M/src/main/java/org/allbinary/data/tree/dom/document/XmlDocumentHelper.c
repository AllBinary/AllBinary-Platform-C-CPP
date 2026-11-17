/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.data.tree.dom.document

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/StringReader.h"
// #include "java/io/StringWriter.h"
// #include "java/io/Writer.h"
// #include "javax/xml/parsers/DocumentBuilderFactory.h"
// #include "javax/xml/transform/OutputKeys.h"
// #include "javax/xml/transform/Transformer.h"
// #include "javax/xml/transform/TransformerConfigurationException.h"
// #include "javax/xml/transform/TransformerFactory.h"
// #include "javax/xml/transform/dom/DOMSource.h"
// #include "javax/xml/transform/stream/StreamResult.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/java/characters/CharacterSetData.h"
#include "org/w3c/dom/Document.h"
#include "org/xml/sax/InputSource.h"

typedef struct XmlDocumentHelper XmlDocumentHelper;
struct XmlDocumentHelper {
    LogUtil* logUtil;
    const char* INDENT_NUMBER;
    int32_t indent;
    bool ignoreDeclaration;
};

static XmlDocumentHelper* XmlDocumentHelper_instance;

XmlDocumentHelper* XmlDocumentHelper_new(void);
XmlDocumentHelper* XmlDocumentHelper_getInstance(void);

void XmlDocumentHelper_init(XmlDocumentHelper* this);
void XmlDocumentHelper_init(XmlDocumentHelper* this, int32_t indent, bool ignoreDeclaration);
static Transformer* XmlDocumentHelper_createTransformer(XmlDocumentHelper* this, int32_t indent, bool ignoreDeclaration);
Transformer* XmlDocumentHelper_createTransformer(XmlDocumentHelper* this);
const char* XmlDocumentHelper_format(XmlDocumentHelper* this, const char* xmlString);
const char* XmlDocumentHelper_formatWithTransformer(XmlDocumentHelper* this, const char* xmlString, Transformer* transformer);
const char* XmlDocumentHelper_toString(Document* document);

// Static fields with runtime initializers: call this once at startup
void XmlDocumentHelper_staticInit(void) {
    XmlDocumentHelper_instance = XmlDocumentHelper_new();
}

static void XmlDocumentHelper_initFields(XmlDocumentHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->INDENT_NUMBER = "indent-number";
    this->indent = 0;
    this->ignoreDeclaration = false;
}


XmlDocumentHelper* XmlDocumentHelper_getInstance(void) {
        return XmlDocumentHelper_instance;
}


void XmlDocumentHelper_init(XmlDocumentHelper* this) {
    XmlDocumentHelper_initFields(this);
        XmlDocumentHelper_init(this, 4, true);
}

XmlDocumentHelper* XmlDocumentHelper_new(void) {
    XmlDocumentHelper* this = calloc(1, sizeof(XmlDocumentHelper));
    XmlDocumentHelper_init(this);
    return this;
}


// synchronized
void XmlDocumentHelper_init(XmlDocumentHelper* this, int32_t indent, bool ignoreDeclaration) {
        this->indent = indent;
        this->ignoreDeclaration = ignoreDeclaration;
}


// throws TransformerConfigurationException
static Transformer* XmlDocumentHelper_createTransformer(XmlDocumentHelper* this, int32_t indent, bool ignoreDeclaration) {
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        TransformerFactory* transformerFactory = TransformerFactory_newInstance();
        TransformerFactory_setAttribute(transformerFactory, this->INDENT_NUMBER, indent);
        Transformer* transformer = TransformerFactory_newTransformer(transformerFactory);
        Transformer_setOutputProperty(transformer, OutputKeys_ENCODING, CharacterSetData_getInstance()->UTF_8);
        Transformer_setOutputProperty(transformer, OutputKeys_OMIT_XML_DECLARATION, (ignoreDeclaration ? booleanFactory->YES : booleanFactory->NO));
        Transformer_setOutputProperty(transformer, OutputKeys_INDENT, booleanFactory->YES);
        return transformer;
}


// throws TransformerConfigurationException
// Java overloaded method: C needs a different name
Transformer* XmlDocumentHelper_createTransformer(XmlDocumentHelper* this) {
        int32_t currentIndent = 0;
        bool currentIgnoreDeclaration = false;
        java_monitor_enter(this);
        {
            currentIndent = this->indent;
            currentIgnoreDeclaration = this->ignoreDeclaration;
        }
        java_monitor_exit(this);
        return XmlDocumentHelper_createTransformer(this, currentIndent, currentIgnoreDeclaration);
}


// throws Exception
const char* XmlDocumentHelper_format(XmlDocumentHelper* this, const char* xmlString) {
        return XmlDocumentHelper_formatWithTransformer(this, xmlString, XmlDocumentHelper_createTransformer(this));
}


// throws Exception
const char* XmlDocumentHelper_formatWithTransformer(XmlDocumentHelper* this, const char* xmlString, Transformer* transformer) {
        InputSource* src = InputSource_new(StringReader_new(xmlString));
        Document* document = JAVA_CALL(JAVA_CALL(DocumentBuilderFactory_newInstance(), newDocumentBuilder), parse, src);
        Writer* out = StringWriter_new();
        Transformer_transform(transformer, DOMSource_new(document), StreamResult_new(out));
        return Writer_toString(out);
}


// throws Exception
const char* XmlDocumentHelper_toString(Document* document) {
        JAVA_TRY {
            DOMSource* domSource = DOMSource_new(document);
            ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
            StreamResult* streamResult = StreamResult_new(byteArrayOutputStream);
            TransformerFactory* copyTransformerFactory = TransformerFactory_newInstance();
            Transformer* copyTransformer = TransformerFactory_newTransformer(copyTransformerFactory);
            Transformer_transform(copyTransformer, domSource, streamResult);
            return ByteArrayOutputStream_toString(byteArrayOutputStream);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

