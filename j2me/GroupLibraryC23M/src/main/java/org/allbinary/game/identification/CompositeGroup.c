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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

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

static void CompositeGroup_initFields(CompositeGroup* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->list = BasicArrayListD_new();
}


void CompositeGroup_init(CompositeGroup* this, Group* groupInterface) {
    CompositeGroup_initFields(this);
        this->groupInterface = groupInterface;
}

CompositeGroup* CompositeGroup_new(Group* groupInterface) {
    CompositeGroup* this = calloc(1, sizeof(CompositeGroup));
    CompositeGroup_init(this, groupInterface);
    return this;
}


void CompositeGroup_clear(CompositeGroup* this) {
        BasicArrayList_clear(this->list);
}


void CompositeGroup_add(CompositeGroup* this, Group* groupInterface) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        GroupCommonFactory* groupCommonFactory = GroupCommonFactory_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, groupCommonFactory->ADDING_LABEL);
        StringMaker_append(stringBuffer, Group_toString(groupInterface));
        StringMaker_append(stringBuffer, groupCommonFactory->TO_LABEL);
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), this->groupInterface));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->ADD);
        BasicArrayList_add(this->list, groupInterface);
}


bool CompositeGroup_isInGroup(CompositeGroup* this, Group* groupInterface) {
        if (BasicArrayList_contains(this->list, groupInterface)) {
            return true;
        } else {
            return false;
        }
}


Group* CompositeGroup_getGroup(CompositeGroup* this) {
        return this->groupInterface;
}

