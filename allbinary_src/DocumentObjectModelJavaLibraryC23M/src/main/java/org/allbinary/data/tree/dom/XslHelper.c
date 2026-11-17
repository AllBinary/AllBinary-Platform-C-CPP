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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/File.h"
// #include "java/io/OutputStream.h"
// #include "java/io/StringBufferInputStream.h"
// #include "javax/xml/transform/Templates.h"
// #include "javax/xml/transform/Transformer.h"
// #include "javax/xml/transform/TransformerFactory.h"
// #include "javax/xml/transform/URIResolver.h"
// #include "javax/xml/transform/stream/StreamResult.h"
// #include "javax/xml/transform/stream/StreamSource.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/w3c/dom/Document.h"

//import org.allbinary.data.tree.dom.document.DomDocumentHelper;
typedef struct XslHelper XslHelper;
struct XslHelper {
    char unused;
};

static XslHelper* XslHelper_instance;

XslHelper* XslHelper_new(void);
XslHelper* XslHelper_getInstance(void);

void XslHelper_init(XslHelper* this);
OutputStream* XslHelper_translate(XslHelper* this, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult);
OutputStream* XslHelper_translate(XslHelper* this, URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult);
const char* XslHelper_translateTemplate(XslHelper* this, Templates* templates, StreamSource* xmlStreamSource);
const char* XslHelper_translate(XslHelper* this, StreamSource* xsltStreamSource, Document* xmlDocument);
const char* XslHelper_translate(XslHelper* this, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource);
const char* XslHelper_translate(XslHelper* this, URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource);
void XslHelper_export(XslHelper* this, File* outputFile, const char* xsltFilePath, Document* xmlDocument);

// Static fields with runtime initializers: call this once at startup
void XslHelper_staticInit(void) {
    XslHelper_instance = XslHelper_new();
}


XslHelper* XslHelper_getInstance(void) {
        return XslHelper_instance;
}


void XslHelper_init(XslHelper* this) {
}

XslHelper* XslHelper_new(void) {
    XslHelper* this = calloc(1, sizeof(XslHelper));
    XslHelper_init(this);
    return this;
}


// throws Exception
OutputStream* XslHelper_translate(XslHelper* this, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult) {
        JAVA_TRY {
            TransformerFactory* transformerFactory = TransformerFactory_newInstance();
            Transformer* transformer = TransformerFactory_newTransformer(transformerFactory, xsltStreamSource);
            Transformer_transform(transformer, xmlStreamSource, streamResult);
            return StreamResult_getOutputStream(streamResult);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
OutputStream* XslHelper_translate(XslHelper* this, URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource, StreamResult* streamResult) {
        JAVA_TRY {
            TransformerFactory* tFactory = TransformerFactory_newInstance();
            TransformerFactory_setURIResolver(tFactory, resolver);
            Transformer* transformer = TransformerFactory_newTransformer(tFactory, xsltStreamSource);
            Transformer_transform(transformer, xmlStreamSource, streamResult);
            return StreamResult_getOutputStream(streamResult);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
const char* XslHelper_translateTemplate(XslHelper* this, Templates* templates, StreamSource* xmlStreamSource) {
        JAVA_TRY {
            ByteArrayOutputStream* outputStream = ByteArrayOutputStream_new();
            StreamResult* streamResult = StreamResult_new(outputStream);
            JAVA_CALL(Templates_newTransformer(templates), transform, xmlStreamSource, streamResult);
            return JAVA_CALL(StreamResult_getOutputStream(streamResult), toString);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
const char* XslHelper_translate(XslHelper* this, StreamSource* xsltStreamSource, Document* xmlDocument) {
        JAVA_TRY {
            ByteArrayOutputStream* outputStream = ByteArrayOutputStream_new();
            return JAVA_CALL(XslHelper_translate(this, xsltStreamSource, StreamSource_new(StringBufferInputStream_new(XmlDocumentHelper_toString(xmlDocument))), StreamResult_new(outputStream)), toString);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
const char* XslHelper_translate(XslHelper* this, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource) {
        JAVA_TRY {
            ByteArrayOutputStream* outputStream = ByteArrayOutputStream_new();
            return JAVA_CALL(XslHelper_translate(this, xsltStreamSource, xmlStreamSource, StreamResult_new(outputStream)), toString);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
const char* XslHelper_translate(XslHelper* this, URIResolver* resolver, StreamSource* xsltStreamSource, StreamSource* xmlStreamSource) {
        JAVA_TRY {
            ByteArrayOutputStream* outputStream = ByteArrayOutputStream_new();
            return JAVA_CALL(XslHelper_translate(this, resolver, xsltStreamSource, xmlStreamSource, StreamResult_new(outputStream)), toString);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
void XslHelper_export(XslHelper* this, File* outputFile, const char* xsltFilePath, Document* xmlDocument) {
        JAVA_TRY {
            File_createNewFile(outputFile);
            XslHelper_translate(this, StreamSource_new(xsltFilePath), StreamSource_new(StringBufferInputStream_new(XmlDocumentHelper_toString(xmlDocument))), StreamResult_new(outputFile));
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

