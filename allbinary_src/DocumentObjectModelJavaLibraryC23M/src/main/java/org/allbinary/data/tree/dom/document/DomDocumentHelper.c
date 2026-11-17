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
// package org.allbinary.data.tree.dom.document

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
// #include "java/io/StringBufferInputStream.h"
// #include "javax/xml/parsers/DocumentBuilder.h"
// #include "javax/xml/parsers/DocumentBuilderFactory.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/w3c/dom/Document.h"

typedef struct DomDocumentHelper DomDocumentHelper;
struct DomDocumentHelper {
    char unused;
};


DomDocumentHelper* DomDocumentHelper_new(void);

void DomDocumentHelper_init(DomDocumentHelper* this);
void DomDocumentHelper_init(void);
Document* DomDocumentHelper_create(void);
Document* DomDocumentHelper_create(InputStream* inputStream);
Document* DomDocumentHelper_create(const char* xmlString);


void DomDocumentHelper_init(DomDocumentHelper* this) {
}

DomDocumentHelper* DomDocumentHelper_new(void) {
    DomDocumentHelper* this = calloc(1, sizeof(DomDocumentHelper));
    DomDocumentHelper_init(this);
    return this;
}


void DomDocumentHelper_init(void) {
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        System_setProperty("jdk.xml.maxElementDepth", commonPhoneStrings->ZERO);
        System_setProperty("jdk.xml.xpathExprOpLimit", commonPhoneStrings->ZERO);
        System_setProperty("jdk.xml.xpathTotalOpLimit", commonPhoneStrings->ZERO);
        const char* LIMIT = "500000";
        System_setProperty("jdk.xml.maxGeneralEntitySizeLimit", LIMIT);
        System_setProperty("jdk.xml.totalEntitySizeLimit", LIMIT);
}


Document* DomDocumentHelper_create(void) {
        JAVA_TRY {
            DocumentBuilderFactory* factory = DocumentBuilderFactory_newInstance();
            DocumentBuilder* builder = DocumentBuilderFactory_newDocumentBuilder(factory);
            Document* document = DocumentBuilder_newDocument(builder);
            return document;
        } JAVA_CATCH(Exception, e) {
            return nullptr;
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
Document* DomDocumentHelper_create(InputStream* inputStream) {
        JAVA_TRY {
            DocumentBuilderFactory* factory = DocumentBuilderFactory_newInstance();
            DocumentBuilder* builder = DocumentBuilderFactory_newDocumentBuilder(factory);
            Document* document = DocumentBuilder_parse(builder, inputStream);
            return document;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
Document* DomDocumentHelper_create(const char* xmlString) {
        JAVA_TRY {
            DocumentBuilderFactory* factory = DocumentBuilderFactory_newInstance();
            DocumentBuilder* builder = DocumentBuilderFactory_newDocumentBuilder(factory);
            Document* document = DocumentBuilder_parse(builder, StringBufferInputStream_new(xmlString));
            return document;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

