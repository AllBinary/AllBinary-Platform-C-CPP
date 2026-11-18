#ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H
#define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H
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
// package org.allbinary.game.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Group Group;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/game/identification/Group.h")
#include "org/allbinary/game/identification/Group.h"
#endif

typedef struct GroupFactory GroupFactory;
struct GroupFactory {
    LogUtil* logUtil;
    Group** NULL_GROUP_ARRAY;
    BasicArrayList* list;
    int32_t index;
};


GroupFactory* GroupFactory_new(void);
void GroupFactory_init(GroupFactory* this);

GroupFactory* GroupFactory_getInstance(void);

Group* GroupFactory_getNextGroup(GroupFactory* this);

Group* GroupFactory_getNextGroupByName(GroupFactory* this, const char* name);

void GroupFactory_initMethod(GroupFactory* this, int16_t groups, const char** nameArray);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GroupFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GroupFactory_register(void);


#endif // ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H
