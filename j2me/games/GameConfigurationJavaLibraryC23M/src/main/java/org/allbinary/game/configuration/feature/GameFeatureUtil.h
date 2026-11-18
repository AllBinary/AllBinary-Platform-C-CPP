#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H
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
typedef struct Features Features;
typedef struct Feature Feature;
typedef struct GameFeatureChoiceGroups GameFeatureChoiceGroups;
typedef struct ChoiceGroup ChoiceGroup;
typedef struct TsUtil TsUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct EnumerationUtil EnumerationUtil;
typedef struct HashtableUtil HashtableUtil;
#include "java/util/Enumeration.h"
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/EnumerationUtil.h")
#include "org/allbinary/util/EnumerationUtil.h"
#endif

typedef struct GameFeatureUtil GameFeatureUtil;
struct GameFeatureUtil {
    LogUtil* logUtil;
    TsUtil* tsUtil;
    EnumerationUtil* enumerationUtil;
    const char* ON_GAME_FEATURE_CHANGE;
    const char* GAME_FEATURE_CHANGED;
};


GameFeatureUtil* GameFeatureUtil_new(void);
void GameFeatureUtil_init(GameFeatureUtil* this);

GameFeatureUtil* GameFeatureUtil_getInstance(void);

void GameFeatureUtil_setDefault(GameFeatureUtil* this, ChoiceGroup* choiceGroup);

void GameFeatureUtil_updateMultiple(GameFeatureUtil* this, ChoiceGroup* choiceGroup);

void GameFeatureUtil_updateExclusiveForChoiceGroup(GameFeatureUtil* this, ChoiceGroup* choiceGroup);

bool GameFeatureUtil_isExclusive(GameFeatureUtil* this, const char* itemLabel);


void GameFeatureUtil_updateExclusiveList(GameFeatureUtil* this, Feature* gameFeature, BasicArrayList* list);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureUtil_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H
