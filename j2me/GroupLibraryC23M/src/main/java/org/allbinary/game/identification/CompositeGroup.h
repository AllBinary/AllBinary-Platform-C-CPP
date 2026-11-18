#ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H
#define ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H
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
typedef struct GroupCommonFactory GroupCommonFactory;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
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

typedef struct CompositeGroup CompositeGroup;
struct CompositeGroup {
    LogUtil* logUtil;
    Group* groupInterface;
    BasicArrayList* list;
};


CompositeGroup* CompositeGroup_new(Group* groupInterface);

void CompositeGroup_init(CompositeGroup* this, Group* groupInterface);

void CompositeGroup_clear(CompositeGroup* this);

void CompositeGroup_add(CompositeGroup* this, Group* groupInterface);

bool CompositeGroup_isInGroup(CompositeGroup* this, Group* groupInterface);

Group* CompositeGroup_getGroup(CompositeGroup* this);
#define CompositeGroup_new1 CompositeGroup_new
#define CompositeGroup_init1 CompositeGroup_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompositeGroup_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompositeGroup_register(void);


#endif // ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H
