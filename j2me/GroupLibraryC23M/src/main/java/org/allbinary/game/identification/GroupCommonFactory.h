#ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H
#define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H
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
typedef struct NullUtil NullUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
#include "java/lang/Integer.h"

typedef struct GroupCommonFactory GroupCommonFactory;
struct GroupCommonFactory {
    int32_t ID;
    const char* GROUP_NAME_LABEL;
    const char* ID_LABEL;
    const char* ADDING_LABEL;
    const char* TO_LABEL;
};


GroupCommonFactory* GroupCommonFactory_new(void);
void GroupCommonFactory_init(GroupCommonFactory* this);

GroupCommonFactory* GroupCommonFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GroupCommonFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GroupCommonFactory_register(void);


#endif // ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H
