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
// package org.allbinary.graphics.j2me.workarea

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/dom/DomHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct WorkAreaDom WorkAreaDom;
struct WorkAreaDom {
    const char* name;
    BasicArrayList* canvasNodeList;
};

const char* WorkAreaDom_WORKAREA = "workArea";
const char* WorkAreaDom_NAME = "name";
const char* WorkAreaDom_FRAMES = "frames";

WorkAreaDom* WorkAreaDom_new(Document* document);

void WorkAreaDom_init(WorkAreaDom* this, Document* document);
const char* WorkAreaDom_getName(WorkAreaDom* this);
BasicArrayList* WorkAreaDom_getCanvasNodes(WorkAreaDom* this);

static void WorkAreaDom_initFields(WorkAreaDom* this) {
    this->name = nullptr;
    this->canvasNodeList = nullptr;
}


void WorkAreaDom_init(WorkAreaDom* this, Document* document) {
    WorkAreaDom_initFields(this);
        NodeList* workAreaNodeList = Document_getElementsByTagName(document, WorkAreaDom_WORKAREA);
        if (workAreaNodeList != nullptr) {
            int32_t numberOfworkAreas = NodeList_getLength(workAreaNodeList);
            if (numberOfworkAreas == 1) {
                int32_t numberOfNodes = NodeList_getLength(workAreaNodeList);
                Node* nameNode = DomHelper_searchNodeList(DomHelper_getInstance(), WorkAreaDom_NAME, JAVA_CALL(NodeList_item(workAreaNodeList, 0), getChildNodes));
                Node* nameTextNode = Node_getFirstChild(nameNode);
                this->name = Node_getNodeValue(nameTextNode);
            } else {
                java_throw(java_exception_new("Exception", java_concat("Wrong Number of WorkAreas: ", java_string_of(numberOfworkAreas))));
            }
            this->canvasNodeList = DomHelper_getChildrenWithoutTextNodes(DomHelper_getInstance(), WorkAreaDom_FRAMES, JAVA_CALL(NodeList_item(workAreaNodeList, 0), getChildNodes));
        } else {
            java_throw(java_exception_new("Exception", "workArea Node Not Found"));
        }
}

WorkAreaDom* WorkAreaDom_new(Document* document) {
    WorkAreaDom* this = calloc(1, sizeof(WorkAreaDom));
    WorkAreaDom_init(this, document);
    return this;
}


const char* WorkAreaDom_getName(WorkAreaDom* this) {
        return this->name;
}


BasicArrayList* WorkAreaDom_getCanvasNodes(WorkAreaDom* this) {
        return this->canvasNodeList;
}

