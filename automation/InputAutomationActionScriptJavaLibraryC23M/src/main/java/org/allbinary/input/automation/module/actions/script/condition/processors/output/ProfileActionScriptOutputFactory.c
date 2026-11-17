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
#include "org/w3c/dom/Node.h"

typedef struct ProfileActionScriptOutputFactory ProfileActionScriptOutputFactory;
struct ProfileActionScriptOutputFactory {
    char unused;
};


ProfileActionScriptOutputFactory* ProfileActionScriptOutputFactory_new(void);

void ProfileActionScriptOutputFactory_init(ProfileActionScriptOutputFactory* this);
ProfileActionScriptOutputInterface* ProfileActionScriptOutputFactory_getInstance(Node* node);


void ProfileActionScriptOutputFactory_init(ProfileActionScriptOutputFactory* this) {
}

ProfileActionScriptOutputFactory* ProfileActionScriptOutputFactory_new(void) {
    ProfileActionScriptOutputFactory* this = calloc(1, sizeof(ProfileActionScriptOutputFactory));
    ProfileActionScriptOutputFactory_init(this);
    return this;
}


// throws Exception
ProfileActionScriptOutputInterface* ProfileActionScriptOutputFactory_getInstance(Node* node) {
        ProfileActionScriptOutputInterface* profileActionScriptOutputInterface = nullptr;
        if (DomSearchHelper_getNodeNoThrow(ImageActionScriptOutputData_NAME, Node_getChildNodes(node)) != nullptr) {
            profileActionScriptOutputInterface = ImageActionScriptOutput_new(node);
        } else {
            java_throw(java_exception_new("Exception", "No Such ActionScript Output"));
        }
        return profileActionScriptOutputInterface;
}

