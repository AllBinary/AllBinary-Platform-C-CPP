#ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H
#define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H
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
typedef struct GroupInterface GroupInterface;
typedef struct GroupCommonFactory GroupCommonFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#include "org/allbinary/game/identification/GroupInterface.h"

typedef struct Group Group;
struct Group {
    GroupInterface GroupInterface_interface;
    const char* name;
    int16_t teamId;
    const char* string;
};


Group* Group_new(const char* teamName, int16_t teamId);

void Group_init(Group* this, const char* teamName, int16_t teamId);

const char* Group_getGroupName(Group* this);

void Group_setName(Group* this, const char* name);

int16_t Group_getGroupId(Group* this);

const char* Group_toString(Group* this);
#define Group_new2 Group_new
#define Group_init2 Group_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Group_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Group_register(void);


#endif // ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H
