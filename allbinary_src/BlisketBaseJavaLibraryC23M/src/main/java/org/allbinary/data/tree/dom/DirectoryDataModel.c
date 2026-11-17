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
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"

typedef struct DirectoryDataModel DirectoryDataModel;
struct DirectoryDataModel {
    DomNodeInterface DomNodeInterface_interface;
    TransformInterface TransformInterface_interface;
    BasicArrayList* fileBasicArrayList;
    TransformDocumentInterface* transformDocumentInterface;
    int32_t NO_TYPE;
};


DirectoryDataModel* DirectoryDataModel_new(AbFile* file);

void DirectoryDataModel_init(DirectoryDataModel* this, AbFile* file);
int32_t DirectoryDataModel_getTypeId(DirectoryDataModel* this);
TransformInfoInterface* DirectoryDataModel_getTransformInfoInterface(DirectoryDataModel* this);
void DirectoryDataModel_setTransformDocumentInterface(DirectoryDataModel* this, TransformDocumentInterface* transformDocumentInterface);
TransformDocumentInterface* DirectoryDataModel_getTransformDocumentInterface(DirectoryDataModel* this);
Node* DirectoryDataModel_toXmlNode(DirectoryDataModel* this, Document* document);
Document* DirectoryDataModel_toXmlDoc(DirectoryDataModel* this);
const char* DirectoryDataModel_view(DirectoryDataModel* this);

static void DirectoryDataModel_initFields(DirectoryDataModel* this) {
    
    
    this->NO_TYPE = 0;
}


void DirectoryDataModel_init(DirectoryDataModel* this, AbFile* file) {
    DirectoryDataModel_initFields(this);
        this->fileBasicArrayList = Directory_search(Directory_getInstance(), file);
        this->transformDocumentInterface = ((TransformDocumentInterface*) TransformDocumentFactory_getInstance());
}

DirectoryDataModel* DirectoryDataModel_new(AbFile* file) {
    DirectoryDataModel* this = calloc(1, sizeof(DirectoryDataModel));
    DirectoryDataModel_init(this, file);
    return this;
}


int32_t DirectoryDataModel_getTypeId(DirectoryDataModel* this) {
        return this->NO_TYPE;
}


// throws Exception
TransformInfoInterface* DirectoryDataModel_getTransformInfoInterface(DirectoryDataModel* this) {
        return nullptr;
}


void DirectoryDataModel_setTransformDocumentInterface(DirectoryDataModel* this, TransformDocumentInterface* transformDocumentInterface) {
        this->transformDocumentInterface = transformDocumentInterface;
}


TransformDocumentInterface* DirectoryDataModel_getTransformDocumentInterface(DirectoryDataModel* this) {
        return this->transformDocumentInterface;
}


// throws Exception
Node* DirectoryDataModel_toXmlNode(DirectoryDataModel* this, Document* document) {
        Node* dirNode = Document_createElement(document, "dir");
        int32_t size = BasicArrayList_size(this->fileBasicArrayList);
        AbFile* nextFile = nullptr;
        Node* fileNode = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextFile = ((AbFile*) BasicArrayList_get(this->fileBasicArrayList, index));
            fileNode = FileDomDataModel_toXmlNode(FileDomDataModel_new(nextFile), document);
            Node_appendChild(dirNode, fileNode);
        }
        return dirNode;
}


// throws Exception
Document* DirectoryDataModel_toXmlDoc(DirectoryDataModel* this) {
        return JAVA_CALL(DirectoryDataModel_getTransformDocumentInterface(this), getDoc);
}


// throws Exception
const char* DirectoryDataModel_view(DirectoryDataModel* this) {
        Node* node = DirectoryDataModel_toXmlNode(this, JAVA_CALL(DirectoryDataModel_getTransformDocumentInterface(this), getDoc));
        JAVA_CALL(JAVA_CALL(DirectoryDataModel_getTransformDocumentInterface(this), getBaseNode), appendChild, node);
        return XmlDocumentHelper_toString(JAVA_CALL(DirectoryDataModel_getTransformDocumentInterface(this), getDoc));
}

