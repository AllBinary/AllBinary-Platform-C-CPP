#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H
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
typedef struct GameFeatureFactory GameFeatureFactory;
typedef struct GameFeature GameFeature;
typedef struct GameFeatureUtil GameFeatureUtil;
typedef struct ChoiceGroup ChoiceGroup;
typedef struct Item Item;
typedef struct ItemStateListener ItemStateListener;
typedef struct GameConfigurationGauge GameConfigurationGauge;
typedef struct GameConfigurationUtil GameConfigurationUtil;
typedef struct GameOptionsForm GameOptionsForm;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "javax/microedition/lcdui/ItemStateListener.h"
#if __has_include("org/allbinary/game/configuration/GameOptionsForm.h")
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct GameFeatureItemStateListener GameFeatureItemStateListener;
struct GameFeatureItemStateListener {
    ItemStateListener ItemStateListener_interface;
    LogUtil* logUtil;
    GameOptionsForm* gameOptionsForm;
};


GameFeatureItemStateListener* GameFeatureItemStateListener_new(GameOptionsForm* gameOptionsForm);

void GameFeatureItemStateListener_init(GameFeatureItemStateListener* this, GameOptionsForm* gameOptionsForm);

void GameFeatureItemStateListener_add(GameFeature* gameFeature);

void GameFeatureItemStateListener_itemStateChanged(GameFeatureItemStateListener* this, Item* item);
#define GameFeatureItemStateListener_new1 GameFeatureItemStateListener_new
#define GameFeatureItemStateListener_init1 GameFeatureItemStateListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureItemStateListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureItemStateListener_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H
