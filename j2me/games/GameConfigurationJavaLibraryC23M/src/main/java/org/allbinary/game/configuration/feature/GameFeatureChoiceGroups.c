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

typedef struct GameFeatureChoiceGroups GameFeatureChoiceGroups;
struct GameFeatureChoiceGroups {
    ABHashtable* hashtable;
};

static GameFeatureChoiceGroups* GameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive;
static GameFeatureChoiceGroups* GameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple;

GameFeatureChoiceGroups* GameFeatureChoiceGroups_new(void);

void GameFeatureChoiceGroups_init(GameFeatureChoiceGroups* this);
GameFeatureChoiceGroups* GameFeatureChoiceGroups_getExclusiveInstance(void);
GameFeatureChoiceGroups* GameFeatureChoiceGroups_getMultipleInstance(void);
ABHashtable* GameFeatureChoiceGroups_get(GameFeatureChoiceGroups* this);
void GameFeatureChoiceGroups_add(GameFeatureChoiceGroups* this, const char* name, BasicArrayList* list);

// Static fields with runtime initializers: call this once at startup
void GameFeatureChoiceGroups_staticInit(void) {
    GameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive = GameFeatureChoiceGroups_new();
    GameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple = GameFeatureChoiceGroups_new();
}

static void GameFeatureChoiceGroups_initFields(GameFeatureChoiceGroups* this) {
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


void GameFeatureChoiceGroups_init(GameFeatureChoiceGroups* this) {
    GameFeatureChoiceGroups_initFields(this);
}

GameFeatureChoiceGroups* GameFeatureChoiceGroups_new(void) {
    GameFeatureChoiceGroups* this = calloc(1, sizeof(GameFeatureChoiceGroups));
    GameFeatureChoiceGroups_init(this);
    return this;
}


GameFeatureChoiceGroups* GameFeatureChoiceGroups_getExclusiveInstance(void) {
        return GameFeatureChoiceGroups_gameFeatureChoiceGroupsExclusive;
}


GameFeatureChoiceGroups* GameFeatureChoiceGroups_getMultipleInstance(void) {
        return GameFeatureChoiceGroups_gameFeatureChoiceGroupsMultiple;
}


ABHashtable* GameFeatureChoiceGroups_get(GameFeatureChoiceGroups* this) {
        return this->hashtable;
}


void GameFeatureChoiceGroups_add(GameFeatureChoiceGroups* this, const char* name, BasicArrayList* list) {
        ABHashtable_put(this->hashtable, name, list);
}

