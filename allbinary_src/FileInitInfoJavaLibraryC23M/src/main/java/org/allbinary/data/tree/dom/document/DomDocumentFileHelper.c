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
// #include "javax/xml/transform/Transformer.h"
// #include "javax/xml/transform/TransformerFactory.h"
// #include "javax/xml/transform/dom/DOMSource.h"
// #include "javax/xml/transform/stream/StreamResult.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/w3c/dom/Document.h"

typedef struct DomDocumentFileHelper DomDocumentFileHelper;
struct DomDocumentFileHelper {
    char unused;
};


DomDocumentFileHelper* DomDocumentFileHelper_new(void);

void DomDocumentFileHelper_init(DomDocumentFileHelper* this);
Document* DomDocumentFileHelper_createDocument(AbFile* xmlFile);
void DomDocumentFileHelper_save(AbFile* file, Document* document);


void DomDocumentFileHelper_init(DomDocumentFileHelper* this) {
}

DomDocumentFileHelper* DomDocumentFileHelper_new(void) {
    DomDocumentFileHelper* this = calloc(1, sizeof(DomDocumentFileHelper));
    DomDocumentFileHelper_init(this);
    return this;
}


// throws Exception
Document* DomDocumentFileHelper_createDocument(AbFile* xmlFile) {
        JAVA_TRY {
            return DomDocumentHelper_create(AbFileInputStream_createFromAbFile(xmlFile));
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
void DomDocumentFileHelper_save(AbFile* file, Document* document) {
        AbDataOutputStream* dataOutputStream = nullptr;
        JAVA_TRY {
            TransformerFactory* copyTransformerFactory = TransformerFactory_newInstance();
            Transformer* copyTransformer = TransformerFactory_newTransformer(copyTransformerFactory);
            DOMSource* domSource = DOMSource_new(document);
            if (AbFile_isFile(file)) {
                AbFile_delete(file);
            }
            AbFile_createNewFile(file);
            dataOutputStream = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), file);
            StreamResult* streamResult = StreamResult_new(dataOutputStream);
            Transformer_transform(copyTransformer, domSource, streamResult);
            AbDataOutputStream_flush(dataOutputStream);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), dataOutputStream);
        } JAVA_END_TRY;
}

