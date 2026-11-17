/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer.capital.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/identification/Group.h"

typedef struct CapitalEventHandlerFactory CapitalEventHandlerFactory;
struct CapitalEventHandlerFactory {
    char unused;
};

static CapitalEventHandler** CapitalEventHandlerFactory_capitalEventHandlerArray;

CapitalEventHandlerFactory* CapitalEventHandlerFactory_new(void);
CapitalEventHandler* CapitalEventHandlerFactory_getInstance(Group* groupInterface);
void CapitalEventHandlerFactory_removeAll(void);

// Static fields with runtime initializers: call this once at startup
void CapitalEventHandlerFactory_staticInit(void) {
    CapitalEventHandlerFactory_capitalEventHandlerArray = ((CapitalEventHandler**) java_array_new(sizeof(CapitalEventHandler*), 10));
}

void CapitalEventHandlerFactory_init(CapitalEventHandlerFactory* this) {
}

CapitalEventHandlerFactory* CapitalEventHandlerFactory_new(void) {
    CapitalEventHandlerFactory* this = calloc(1, sizeof(CapitalEventHandlerFactory));
    CapitalEventHandlerFactory_init(this);
    return this;
}


// Java static initializer: call this once at startup
void CapitalEventHandlerFactory_staticInitializer(void) {
        for (int32_t index = java_array_length(CapitalEventHandlerFactory_capitalEventHandlerArray) - 1; index >= 0; index--) {
            CapitalEventHandlerFactory_capitalEventHandlerArray[index] = CapitalEventHandler_new();
        }
}


CapitalEventHandler* CapitalEventHandlerFactory_getInstance(Group* groupInterface) {
        int32_t groupId = ((int32_t) Group_getGroupId(groupInterface));
        return CapitalEventHandlerFactory_capitalEventHandlerArray[groupId];
}


void CapitalEventHandlerFactory_removeAll(void) {
        for (int32_t index = java_array_length(CapitalEventHandlerFactory_capitalEventHandlerArray) - 1; index >= 0; index--) {
            JAVA_CALL(CapitalEventHandlerFactory_capitalEventHandlerArray[index], removeAllListeners);
        }
}

