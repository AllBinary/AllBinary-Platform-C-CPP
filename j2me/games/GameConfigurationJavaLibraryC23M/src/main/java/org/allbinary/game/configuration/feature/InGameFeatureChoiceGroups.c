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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct InGameFeatureChoiceGroups InGameFeatureChoiceGroups;
struct InGameFeatureChoiceGroups {
    ABHashtable* hashtable;
};

static InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive;
static InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple;

InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_new(void);

void InGameFeatureChoiceGroups_init(InGameFeatureChoiceGroups* this);
InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getExclusiveInstance(void);
InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getMultipleInstance(void);
ABHashtable* InGameFeatureChoiceGroups_get(InGameFeatureChoiceGroups* this);
void InGameFeatureChoiceGroups_add(InGameFeatureChoiceGroups* this, const char* name, BasicArrayList* list);

// Static fields with runtime initializers: call this once at startup
void InGameFeatureChoiceGroups_staticInit(void) {
    InGameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive = InGameFeatureChoiceGroups_new();
    InGameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple = InGameFeatureChoiceGroups_new();
}

static void InGameFeatureChoiceGroups_initFields(InGameFeatureChoiceGroups* this) {
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


void InGameFeatureChoiceGroups_init(InGameFeatureChoiceGroups* this) {
    InGameFeatureChoiceGroups_initFields(this);
}

InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_new(void) {
    InGameFeatureChoiceGroups* this = calloc(1, sizeof(InGameFeatureChoiceGroups));
    InGameFeatureChoiceGroups_init(this);
    return this;
}


InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getExclusiveInstance(void) {
        return InGameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive;
}


InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getMultipleInstance(void) {
        return InGameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple;
}


ABHashtable* InGameFeatureChoiceGroups_get(InGameFeatureChoiceGroups* this) {
        return this->hashtable;
}


void InGameFeatureChoiceGroups_add(InGameFeatureChoiceGroups* this, const char* name, BasicArrayList* list) {
        ABHashtable_put(this->hashtable, name, list);
}

