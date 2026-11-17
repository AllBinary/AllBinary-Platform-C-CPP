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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/w3c/dom/Attr.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/NamedNodeMap.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"

typedef struct TransformInfoDomNodeView TransformInfoDomNodeView;
struct TransformInfoDomNodeView {
    TransformInfoDomNode base;
    DomNodeInterface DomNodeInterface_interface;
};


TransformInfoDomNodeView* TransformInfoDomNodeView_new(TransformInfoInterface* transformInfoInterface, const char* mapping);

void TransformInfoDomNodeView_init(TransformInfoDomNodeView* this, TransformInfoInterface* transformInfoInterface, const char* mapping);

TransformInfoDomNodeView* TransformInfoDomNodeView_new1(TransformInfoInterface* transformInfoInterface);
void TransformInfoDomNodeView_init1(TransformInfoDomNodeView* this, TransformInfoInterface* transformInfoInterface);

TransformInfoDomNodeView* TransformInfoDomNodeView_new2(const char* name, const char* mappedName);
void TransformInfoDomNodeView_init2(TransformInfoDomNodeView* this, const char* name, const char* mappedName);

TransformInfoDomNodeView* TransformInfoDomNodeView_new1(const char* name);
void TransformInfoDomNodeView_init1(TransformInfoDomNodeView* this, const char* name);
Node* TransformInfoDomNodeView_toXmlNode(TransformInfoDomNodeView* this, Document* document);


void TransformInfoDomNodeView_init(TransformInfoDomNodeView* this, TransformInfoInterface* transformInfoInterface, const char* mapping) {
        TransformInfoDomNode_init(&this->base, transformInfoInterface, mapping);
}

TransformInfoDomNodeView* TransformInfoDomNodeView_new(TransformInfoInterface* transformInfoInterface, const char* mapping) {
    TransformInfoDomNodeView* this = calloc(1, sizeof(TransformInfoDomNodeView));
    TransformInfoDomNodeView_init(this, transformInfoInterface, mapping);
    return this;
}


void TransformInfoDomNodeView_init1(TransformInfoDomNodeView* this, TransformInfoInterface* transformInfoInterface) {
        TransformInfoDomNode_init(&this->base, transformInfoInterface);
}

TransformInfoDomNodeView* TransformInfoDomNodeView_new1(TransformInfoInterface* transformInfoInterface) {
    TransformInfoDomNodeView* this = calloc(1, sizeof(TransformInfoDomNodeView));
    TransformInfoDomNodeView_init1(this, transformInfoInterface);
    return this;
}


void TransformInfoDomNodeView_init2(TransformInfoDomNodeView* this, const char* name, const char* mappedName) {
        TransformInfoDomNode_init(&this->base, name, mappedName);
}

TransformInfoDomNodeView* TransformInfoDomNodeView_new2(const char* name, const char* mappedName) {
    TransformInfoDomNodeView* this = calloc(1, sizeof(TransformInfoDomNodeView));
    TransformInfoDomNodeView_init2(this, name, mappedName);
    return this;
}


void TransformInfoDomNodeView_init1(TransformInfoDomNodeView* this, const char* name) {
        TransformInfoDomNode_init(&this->base, name, nullptr);
}

TransformInfoDomNodeView* TransformInfoDomNodeView_new1(const char* name) {
    TransformInfoDomNodeView* this = calloc(1, sizeof(TransformInfoDomNodeView));
    TransformInfoDomNodeView_init1(this, name);
    return this;
}


// throws Exception
Node* TransformInfoDomNodeView_toXmlNode(TransformInfoDomNodeView* this, Document* document) {
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        Node* subViewNode = Document_createElement(document, transformInfoData->NAME);
        Attr* viewNameAttr = Document_createAttribute(document, transformInfoData->NAME);
        Attr_setValue(viewNameAttr, JAVA_CALL(TransformInfoDomNodeView_getTransformInfoInterface(this), getName));
        NamedNodeMap* componentNodeAttributes = Node_getAttributes(subViewNode);
        NamedNodeMap_setNamedItem(componentNodeAttributes, viewNameAttr);
        if (TransformInfoDomNodeView_getMappedName(this) != nullptr) {
            Attr* mappedNameAttr = Document_createAttribute(document, transformInfoData->MAPPED);
            Attr_setValue(mappedNameAttr, TransformInfoDomNodeView_getMappedName(this));
            NamedNodeMap_setNamedItem(componentNodeAttributes, mappedNameAttr);
        }
        return subViewNode;
}

