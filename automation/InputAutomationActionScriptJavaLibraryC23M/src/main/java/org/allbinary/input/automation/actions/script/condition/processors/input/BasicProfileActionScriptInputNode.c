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
// package org.allbinary.input.automation.actions.script.condition.processors.input

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

typedef struct BasicProfileActionScriptInputNode BasicProfileActionScriptInputNode;
struct BasicProfileActionScriptInputNode {
    char unused;
};


BasicProfileActionScriptInputNode* BasicProfileActionScriptInputNode_new(Node* node);

void BasicProfileActionScriptInputNode_init(BasicProfileActionScriptInputNode* this, Node* node);

BasicProfileActionScriptInputNode* BasicProfileActionScriptInputNode_new0();
void BasicProfileActionScriptInputNode_init0(BasicProfileActionScriptInputNode* this);
Node* BasicProfileActionScriptInputNode_toXmlNode(BasicProfileActionScriptInputNode* this, Document* document);


void BasicProfileActionScriptInputNode_init(BasicProfileActionScriptInputNode* this, Node* node) {
        Node* actionNode = DomSearchHelper_getNode(GenericProfileActionScriptInputData_NAME, Node_getChildNodes(node));
}

BasicProfileActionScriptInputNode* BasicProfileActionScriptInputNode_new(Node* node) {
    BasicProfileActionScriptInputNode* this = calloc(1, sizeof(BasicProfileActionScriptInputNode));
    BasicProfileActionScriptInputNode_init(this, node);
    return this;
}


void BasicProfileActionScriptInputNode_init0(BasicProfileActionScriptInputNode* this) {
}

BasicProfileActionScriptInputNode* BasicProfileActionScriptInputNode_new0(void) {
    BasicProfileActionScriptInputNode* this = calloc(1, sizeof(BasicProfileActionScriptInputNode));
    BasicProfileActionScriptInputNode_init0(this);
    return this;
}


// throws Exception
Node* BasicProfileActionScriptInputNode_toXmlNode(BasicProfileActionScriptInputNode* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionScriptInputData_NAME);
        return node;
}

