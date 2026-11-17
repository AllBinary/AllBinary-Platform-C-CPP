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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
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

static void Group_initFields(Group* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    
    this->string = StringUtil_getInstance()->EMPTY_STRING;
}


void Group_init(Group* this, const char* teamName, int16_t teamId) {
    Group_initFields(this);
        this->teamId = teamId;
        Group_setName(this, teamName);
}

Group* Group_new(const char* teamName, int16_t teamId) {
    Group* this = calloc(1, sizeof(Group));
    Group_init(this, teamName, teamId);
    return this;
}


const char* Group_getGroupName(Group* this) {
        return this->name;
}


void Group_setName(Group* this, const char* name) {
        this->name = name;
        GroupCommonFactory* groupCommonFactory = GroupCommonFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, groupCommonFactory->GROUP_NAME_LABEL);
        StringMaker_append(stringBuffer, this->name);
        StringMaker_append(stringBuffer, groupCommonFactory->ID_LABEL);
        StringMaker_appendshort(stringBuffer, this->teamId);
        this->string = StringMaker_toString(stringBuffer);
}


int16_t Group_getGroupId(Group* this) {
        return this->teamId;
}


const char* Group_toString(Group* this) {
        return this->string;
}

