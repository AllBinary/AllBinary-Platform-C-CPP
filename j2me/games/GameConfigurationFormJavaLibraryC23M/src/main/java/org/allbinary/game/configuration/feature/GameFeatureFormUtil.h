#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H
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
typedef struct GameFeatureUtil GameFeatureUtil;
typedef struct ChoiceGroup ChoiceGroup;
typedef struct Item Item;
typedef struct NullImage NullImage;
typedef struct MIDPUtil MIDPUtil;
typedef struct GameConfigurationGauge GameConfigurationGauge;
typedef struct GameConfigurationUtil GameConfigurationUtil;
typedef struct CommandForm CommandForm;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct HashtableUtil HashtableUtil;
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct GameFeatureFormUtil GameFeatureFormUtil;
struct GameFeatureFormUtil {
    LogUtil* logUtil;
    MIDPUtil* meUtil;
};


GameFeatureFormUtil* GameFeatureFormUtil_new(void);
void GameFeatureFormUtil_init(GameFeatureFormUtil* this);

GameFeatureFormUtil* GameFeatureFormUtil_getInstance(void);

ChoiceGroup* GameFeatureFormUtil_getChoiceGroup(GameFeatureFormUtil* this, ABHashtable* hashtable, const char* name, int32_t option);

void GameFeatureFormUtil_addChoiceGroup(GameFeatureFormUtil* this, CommandForm* form, ABHashtable* hashtable, int32_t option);

void GameFeatureFormUtil_setDefault(GameFeatureFormUtil* this, CommandForm* form);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureFormUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureFormUtil_register(void);

#if __has_include("javax/microedition/lcdui/ChoiceGroup.h")
#include "javax/microedition/lcdui/ChoiceGroup.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H
