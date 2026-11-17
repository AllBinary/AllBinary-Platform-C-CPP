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
#include "org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputInterface.h"

typedef struct BasicProfileActionScriptOutput BasicProfileActionScriptOutput;
struct BasicProfileActionScriptOutput {
    BasicProfileActionScriptProcessor base;
    ProfileActionScriptOutputInterface ProfileActionScriptOutputInterface_interface;
};


BasicProfileActionScriptOutput* BasicProfileActionScriptOutput_new(const char* label, Node* node);

void BasicProfileActionScriptOutput_init(BasicProfileActionScriptOutput* this, const char* label, Node* node);

BasicProfileActionScriptOutput* BasicProfileActionScriptOutput_new1(const char* label);
void BasicProfileActionScriptOutput_init1(BasicProfileActionScriptOutput* this, const char* label);
Node* BasicProfileActionScriptOutput_toXmlNode(BasicProfileActionScriptOutput* this, Document* document);


void BasicProfileActionScriptOutput_init(BasicProfileActionScriptOutput* this, const char* label, Node* node) {
        BasicProfileActionScriptProcessor_init(&this->base, label, node);
}

BasicProfileActionScriptOutput* BasicProfileActionScriptOutput_new(const char* label, Node* node) {
    BasicProfileActionScriptOutput* this = calloc(1, sizeof(BasicProfileActionScriptOutput));
    BasicProfileActionScriptOutput_init(this, label, node);
    return this;
}


void BasicProfileActionScriptOutput_init1(BasicProfileActionScriptOutput* this, const char* label) {
        BasicProfileActionScriptProcessor_init(&this->base, label);
}

BasicProfileActionScriptOutput* BasicProfileActionScriptOutput_new1(const char* label) {
    BasicProfileActionScriptOutput* this = calloc(1, sizeof(BasicProfileActionScriptOutput));
    BasicProfileActionScriptOutput_init1(this, label);
    return this;
}


// throws Exception
Node* BasicProfileActionScriptOutput_toXmlNode(BasicProfileActionScriptOutput* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionScriptOutputData_NAME);
        return node;
}

