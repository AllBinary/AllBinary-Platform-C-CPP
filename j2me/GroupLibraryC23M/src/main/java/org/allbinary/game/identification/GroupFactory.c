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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GroupFactory GroupFactory;
struct GroupFactory {
    LogUtil* logUtil;
    Group** NULL_GROUP_ARRAY;
    BasicArrayList* list;
    int32_t index;
};

static GroupFactory* GroupFactory_instance;

GroupFactory* GroupFactory_new(void);
GroupFactory* GroupFactory_getInstance(void);
Group* GroupFactory_getNextGroup(GroupFactory* this);
Group* GroupFactory_getNextGroupByName(GroupFactory* this, const char* name);
void GroupFactory_init(GroupFactory* this, int16_t groups, const char** nameArray);

// Static fields with runtime initializers: call this once at startup
void GroupFactory_staticInit(void) {
    GroupFactory_instance = GroupFactory_new();
}

static void GroupFactory_initFields(GroupFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->NULL_GROUP_ARRAY = ((Group**) java_array_new(sizeof(Group*), 0));
    this->list = BasicArrayListD_new();
    this->index = 0;
}

void GroupFactory_init(GroupFactory* this) {
    GroupFactory_initFields(this);
}

GroupFactory* GroupFactory_new(void) {
    GroupFactory* this = calloc(1, sizeof(GroupFactory));
    GroupFactory_init(this);
    return this;
}


GroupFactory* GroupFactory_getInstance(void) {
        return GroupFactory_instance;
}


Group* GroupFactory_getNextGroup(GroupFactory* this) {
        Group* group = ((Group*) this->list->objectArray[this->index]);
        this->index++;
        return group;
}


Group* GroupFactory_getNextGroupByName(GroupFactory* this, const char* name) {
        Group* group = GroupFactory_getNextGroup(this);
        Group_setName(group, name);
        return group;
}


void GroupFactory_init(GroupFactory* this, int16_t groups, const char** nameArray) {
        StringMaker* stringMaker = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* TEAM = "Team ";
        BasicArrayList_clear(this->list);
        this->index = 0;
        int32_t size = BasicArrayList_size(this->list);
        const char* name = nullptr;
        while (size < ((int32_t) groups)) {
            name = stringUtil->EMPTY_STRING;
            if (size < java_array_length(nameArray)) {
                name = nameArray[size];
            } else {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                name = JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, TEAM), appendint, size), toString);
            }
            BasicArrayList_add(this->list, Group_new(name, ((int16_t) (size + 3))));
            size++;
        }
}

