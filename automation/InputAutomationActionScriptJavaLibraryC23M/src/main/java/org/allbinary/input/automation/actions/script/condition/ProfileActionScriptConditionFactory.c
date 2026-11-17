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
// package org.allbinary.input.automation.actions.script.condition

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

typedef struct ProfileActionScriptConditionFactory ProfileActionScriptConditionFactory;
struct ProfileActionScriptConditionFactory {
    char unused;
};


ProfileActionScriptConditionFactory* ProfileActionScriptConditionFactory_new(void);

void ProfileActionScriptConditionFactory_init(ProfileActionScriptConditionFactory* this);
ProfileActionScriptConditionInterface* ProfileActionScriptConditionFactory_getInstance(Node* node);


void ProfileActionScriptConditionFactory_init(ProfileActionScriptConditionFactory* this) {
}

ProfileActionScriptConditionFactory* ProfileActionScriptConditionFactory_new(void) {
    ProfileActionScriptConditionFactory* this = calloc(1, sizeof(ProfileActionScriptConditionFactory));
    ProfileActionScriptConditionFactory_init(this);
    return this;
}


// throws Exception
ProfileActionScriptConditionInterface* ProfileActionScriptConditionFactory_getInstance(Node* node) {
        ProfileActionScriptConditionInterface* profileActionScriptConditionInterface = nullptr;
        if (DomSearchHelper_getNodeNoThrow(ColorAtActionScriptConditionData_NAME, Node_getChildNodes(node)) != nullptr) {
            profileActionScriptConditionInterface = ColorAtActionScriptCondition_new(node);
        } else if (DomSearchHelper_getNodeNoThrow(TimeIntervalActionScriptConditionData_NAME, Node_getChildNodes(node)) != nullptr) {
            profileActionScriptConditionInterface = TimeIntervalActionScriptCondition_new(node);
        } else if (DomSearchHelper_getNodeNoThrow(AlwaysActionScriptConditionData_NAME, Node_getChildNodes(node)) != nullptr) {
            profileActionScriptConditionInterface = AlwaysActionScriptCondition_new(node);
        }
        return profileActionScriptConditionInterface;
}

