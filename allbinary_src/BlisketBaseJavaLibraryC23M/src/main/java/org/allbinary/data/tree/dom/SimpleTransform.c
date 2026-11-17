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
// #include "java/io/StringBufferInputStream.h"
// #include "javax/xml/transform/stream/StreamSource.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/io/AbFileLocalInputStream.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/w3c/dom/Document.h"

typedef struct SimpleTransform SimpleTransform;
struct SimpleTransform {
    AbPath* xsltFilePath;
    AbPath* dataFilePath;
};


SimpleTransform* SimpleTransform_new(AbPath* xsltFilePath, AbPath* dataFilePath);

void SimpleTransform_init(SimpleTransform* this, AbPath* xsltFilePath, AbPath* dataFilePath);
const char* SimpleTransform_transform(SimpleTransform* this);

static void SimpleTransform_initFields(SimpleTransform* this) {
    
    
}


void SimpleTransform_init(SimpleTransform* this, AbPath* xsltFilePath, AbPath* dataFilePath) {
    SimpleTransform_initFields(this);
        this->xsltFilePath = xsltFilePath;
        this->dataFilePath = dataFilePath;
}

SimpleTransform* SimpleTransform_new(AbPath* xsltFilePath, AbPath* dataFilePath) {
    SimpleTransform* this = calloc(1, sizeof(SimpleTransform));
    SimpleTransform_init(this, xsltFilePath, dataFilePath);
    return this;
}


// throws Exception
const char* SimpleTransform_transform(SimpleTransform* this) {
        AbFileLocalInputStream* inputStream = AbFileLocalInputStream_new(AbFile_createAbFileFromAbPath(this->xsltFilePath));
        Document* document = DomDocumentHelper_create(AbFileLocalInputStream_new(AbFile_createAbFileFromAbPath(this->dataFilePath)));
        const char* result = XslHelper_translate(XslHelper_getInstance(), StreamSource_new(inputStream), StreamSource_new(StringBufferInputStream_new(XmlDocumentHelper_toString(document))));
        return result;
}

