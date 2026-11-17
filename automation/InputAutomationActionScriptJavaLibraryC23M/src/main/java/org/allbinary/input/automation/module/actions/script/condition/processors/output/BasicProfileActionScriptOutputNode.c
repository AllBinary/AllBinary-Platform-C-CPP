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
// package org.allbinary.input.automation.module.actions.script.condition.processors.output

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

typedef struct BasicProfileActionScriptOutputNode BasicProfileActionScriptOutputNode;
struct BasicProfileActionScriptOutputNode {
    char unused;
};


BasicProfileActionScriptOutputNode* BasicProfileActionScriptOutputNode_new(Node* node);

void BasicProfileActionScriptOutputNode_init(BasicProfileActionScriptOutputNode* this, Node* node);

BasicProfileActionScriptOutputNode* BasicProfileActionScriptOutputNode_new0();
void BasicProfileActionScriptOutputNode_init0(BasicProfileActionScriptOutputNode* this);
Node* BasicProfileActionScriptOutputNode_toXmlNode(BasicProfileActionScriptOutputNode* this, Document* document);


void BasicProfileActionScriptOutputNode_init(BasicProfileActionScriptOutputNode* this, Node* node) {
        Node* actionNode = DomSearchHelper_getNode(GenericProfileActionScriptOutputData_NAME, Node_getChildNodes(node));
}

BasicProfileActionScriptOutputNode* BasicProfileActionScriptOutputNode_new(Node* node) {
    BasicProfileActionScriptOutputNode* this = calloc(1, sizeof(BasicProfileActionScriptOutputNode));
    BasicProfileActionScriptOutputNode_init(this, node);
    return this;
}


void BasicProfileActionScriptOutputNode_init0(BasicProfileActionScriptOutputNode* this) {
}

BasicProfileActionScriptOutputNode* BasicProfileActionScriptOutputNode_new0(void) {
    BasicProfileActionScriptOutputNode* this = calloc(1, sizeof(BasicProfileActionScriptOutputNode));
    BasicProfileActionScriptOutputNode_init0(this);
    return this;
}


// throws Exception
Node* BasicProfileActionScriptOutputNode_toXmlNode(BasicProfileActionScriptOutputNode* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionScriptOutputData_NAME);
        return node;
}

