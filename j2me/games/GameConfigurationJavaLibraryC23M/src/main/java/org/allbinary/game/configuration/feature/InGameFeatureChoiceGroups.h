#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H
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
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

typedef struct InGameFeatureChoiceGroups InGameFeatureChoiceGroups;
struct InGameFeatureChoiceGroups {
    ABHashtable* hashtable;
};


InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_new(void);

void InGameFeatureChoiceGroups_init(InGameFeatureChoiceGroups* this);

InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getExclusiveInstance(void);

InGameFeatureChoiceGroups* InGameFeatureChoiceGroups_getMultipleInstance(void);

ABHashtable* InGameFeatureChoiceGroups_get(InGameFeatureChoiceGroups* this);

void InGameFeatureChoiceGroups_add(InGameFeatureChoiceGroups* this, const char* name, BasicArrayList* list);
#define InGameFeatureChoiceGroups_new0 InGameFeatureChoiceGroups_new
#define InGameFeatureChoiceGroups_init0 InGameFeatureChoiceGroups_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InGameFeatureChoiceGroups_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InGameFeatureChoiceGroups_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H
