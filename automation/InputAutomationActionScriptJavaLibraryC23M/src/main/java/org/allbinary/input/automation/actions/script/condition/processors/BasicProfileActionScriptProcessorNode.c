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
// package org.allbinary.input.automation.actions.script.condition.processors

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct BasicProfileActionScriptProcessorNode BasicProfileActionScriptProcessorNode;
struct BasicProfileActionScriptProcessorNode {
    char unused;
};


BasicProfileActionScriptProcessorNode* BasicProfileActionScriptProcessorNode_new(Node* node);

void BasicProfileActionScriptProcessorNode_init(BasicProfileActionScriptProcessorNode* this, Node* node);

BasicProfileActionScriptProcessorNode* BasicProfileActionScriptProcessorNode_new0();
void BasicProfileActionScriptProcessorNode_init0(BasicProfileActionScriptProcessorNode* this);
Node* BasicProfileActionScriptProcessorNode_toXmlNode(BasicProfileActionScriptProcessorNode* this, Document* document);


void BasicProfileActionScriptProcessorNode_init(BasicProfileActionScriptProcessorNode* this, Node* node) {
        Node* actionNode = DomSearchHelper_getNode(GenericProfileActionScriptProcessorData_NAME, Node_getChildNodes(node));
}

BasicProfileActionScriptProcessorNode* BasicProfileActionScriptProcessorNode_new(Node* node) {
    BasicProfileActionScriptProcessorNode* this = calloc(1, sizeof(BasicProfileActionScriptProcessorNode));
    BasicProfileActionScriptProcessorNode_init(this, node);
    return this;
}


void BasicProfileActionScriptProcessorNode_init0(BasicProfileActionScriptProcessorNode* this) {
}

BasicProfileActionScriptProcessorNode* BasicProfileActionScriptProcessorNode_new0(void) {
    BasicProfileActionScriptProcessorNode* this = calloc(1, sizeof(BasicProfileActionScriptProcessorNode));
    BasicProfileActionScriptProcessorNode_init0(this);
    return this;
}


// throws Exception
Node* BasicProfileActionScriptProcessorNode_toXmlNode(BasicProfileActionScriptProcessorNode* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionScriptProcessorData_NAME);
        return node;
}

