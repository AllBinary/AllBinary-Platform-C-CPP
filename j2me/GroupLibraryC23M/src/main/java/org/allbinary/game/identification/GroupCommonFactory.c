/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"

typedef struct GroupCommonFactory GroupCommonFactory;
struct GroupCommonFactory {
    int32_t ID;
    const char* GROUP_NAME_LABEL;
    const char* ID_LABEL;
    const char* ADDING_LABEL;
    const char* TO_LABEL;
};

static Any* GroupCommonFactory_instance;

GroupCommonFactory* GroupCommonFactory_new(void);
GroupCommonFactory* GroupCommonFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GroupCommonFactory_staticInit(void) {
    GroupCommonFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GroupCommonFactory_initFields(GroupCommonFactory* this) {
    this->ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 10);
    this->GROUP_NAME_LABEL = "Group Name: ";
    this->ID_LABEL = " Id: ";
    this->ADDING_LABEL = "Adding: ";
    this->TO_LABEL = " to: ";
}

void GroupCommonFactory_init(GroupCommonFactory* this) {
    GroupCommonFactory_initFields(this);
}

GroupCommonFactory* GroupCommonFactory_new(void) {
    GroupCommonFactory* this = calloc(1, sizeof(GroupCommonFactory));
    GroupCommonFactory_init(this);
    return this;
}


GroupCommonFactory* GroupCommonFactory_getInstance(void) {
        if (GroupCommonFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GroupCommonFactory_instance = GroupCommonFactory_new();
        }
        return ((GroupCommonFactory*) GroupCommonFactory_instance);
}

