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
#include "org/w3c/dom/Node.h"

typedef struct ProfileActionScriptInputFactory ProfileActionScriptInputFactory;
struct ProfileActionScriptInputFactory {
    char unused;
};


ProfileActionScriptInputFactory* ProfileActionScriptInputFactory_new(void);

void ProfileActionScriptInputFactory_init(ProfileActionScriptInputFactory* this);
ProfileActionScriptInputInterface* ProfileActionScriptInputFactory_getInstance(Node* node);


void ProfileActionScriptInputFactory_init(ProfileActionScriptInputFactory* this) {
}

ProfileActionScriptInputFactory* ProfileActionScriptInputFactory_new(void) {
    ProfileActionScriptInputFactory* this = calloc(1, sizeof(ProfileActionScriptInputFactory));
    ProfileActionScriptInputFactory_init(this);
    return this;
}


// throws Exception
ProfileActionScriptInputInterface* ProfileActionScriptInputFactory_getInstance(Node* node) {
        ProfileActionScriptInputInterface* profileActionScriptInputInterface = nullptr;
        if (DomSearchHelper_getNodeNoThrow(KeyboardActionScriptInputData_NAME, Node_getChildNodes(node)) != nullptr) {
            profileActionScriptInputInterface = KeyboardActionScriptInput_new(node);
        } else if (DomSearchHelper_getNodeNoThrow(MouseActionScriptInputData_NAME, Node_getChildNodes(node)) != nullptr) {
            profileActionScriptInputInterface = MouseActionScriptInput_new(node);
        } else {
            java_throw(java_exception_new("Exception", "No Such ActionScript Input"));
        }
        return profileActionScriptInputInterface;
}

