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
// #include "java/awt/event/ActionEvent.h"
#include "org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h"
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h"
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h"

typedef struct BasicProfileActionScriptProcessor BasicProfileActionScriptProcessor;
struct BasicProfileActionScriptProcessor {
    ProfileActionScriptItem base;
    ProfileActionScriptProcessorInterface ProfileActionScriptProcessorInterface_interface;
};


BasicProfileActionScriptProcessor* BasicProfileActionScriptProcessor_new(const char* label, Node* node);

void BasicProfileActionScriptProcessor_init(BasicProfileActionScriptProcessor* this, const char* label, Node* node);

BasicProfileActionScriptProcessor* BasicProfileActionScriptProcessor_new1(const char* label);
void BasicProfileActionScriptProcessor_init1(BasicProfileActionScriptProcessor* this, const char* label);
void BasicProfileActionScriptProcessor_actionPerformed(BasicProfileActionScriptProcessor* this, ActionEvent* actionEvent);
Node* BasicProfileActionScriptProcessor_toXmlNode(BasicProfileActionScriptProcessor* this, Document* document);


void BasicProfileActionScriptProcessor_init(BasicProfileActionScriptProcessor* this, const char* label, Node* node) {
        ProfileActionScriptItem_init(&this->base, label, node);
}

BasicProfileActionScriptProcessor* BasicProfileActionScriptProcessor_new(const char* label, Node* node) {
    BasicProfileActionScriptProcessor* this = calloc(1, sizeof(BasicProfileActionScriptProcessor));
    BasicProfileActionScriptProcessor_init(this, label, node);
    return this;
}


void BasicProfileActionScriptProcessor_init1(BasicProfileActionScriptProcessor* this, const char* label) {
        ProfileActionScriptItem_init(&this->base, label);
}

BasicProfileActionScriptProcessor* BasicProfileActionScriptProcessor_new1(const char* label) {
    BasicProfileActionScriptProcessor* this = calloc(1, sizeof(BasicProfileActionScriptProcessor));
    BasicProfileActionScriptProcessor_init1(this, label);
    return this;
}


void BasicProfileActionScriptProcessor_actionPerformed(BasicProfileActionScriptProcessor* this, ActionEvent* actionEvent) {
        ProfileActionScriptItem_actionPerformed((&this->base), actionEvent);
        if (JAVA_CALL(ActionEvent_getActionCommand(actionEvent), compareTo, ProfileActionScriptItem_DELETE) == 0) {
            if (java_instanceof(BasicProfileActionScriptProcessor_getParent(this), "ProfileActionScriptConditionInterface")) {
                ProfileActionScriptConditionInterface* profileActionScriptConditionInterface = ((ProfileActionScriptConditionInterface*) BasicProfileActionScriptProcessor_getParent(this));
                ProfileActionScriptConditionInterface_removeProcessor(profileActionScriptConditionInterface, ((ProfileActionScriptProcessorInterface*) this));
                JAVA_CALL(JTreeInterfaceFactory_getJTreeInterface(JTreeInterfaceFactory_getInstance()), updateJTree);
            }
        }
}


// throws Exception
Node* BasicProfileActionScriptProcessor_toXmlNode(BasicProfileActionScriptProcessor* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionScriptProcessorData_NAME);
        return node;
}

