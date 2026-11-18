#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H
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
// package org.allbinary.game.configuration.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameFeatureListenerInterface GameFeatureListenerInterface;
typedef struct GameFeatureEvent GameFeatureEvent;
typedef struct Feature Feature;
typedef struct Features Features;
typedef struct GameFeatureUtil GameFeatureUtil;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureUtil.h")
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"

typedef struct BaseChangedGameFeatureListener BaseChangedGameFeatureListener;
struct BaseChangedGameFeatureListener {
    GameFeatureListenerInterface GameFeatureListenerInterface_interface;
    LogUtil* logUtil;
    GameFeatureUtil* gameFeatureUtil;
    BasicArrayList* list;
    bool changed;
};


BaseChangedGameFeatureListener* BaseChangedGameFeatureListener_new(void);
void BaseChangedGameFeatureListener_init(BaseChangedGameFeatureListener* this);

void BaseChangedGameFeatureListener_onEvent(BaseChangedGameFeatureListener* this, AllBinaryEventObject* eventObject);

void BaseChangedGameFeatureListener_onGameFeatureChange(BaseChangedGameFeatureListener* this, GameFeatureEvent* gameFeatureEvent);

void BaseChangedGameFeatureListener_add(BaseChangedGameFeatureListener* this, Feature* gameFeature);

void BaseChangedGameFeatureListener_remove(BaseChangedGameFeatureListener* this, Feature* gameFeature);

void BaseChangedGameFeatureListener_setChanged(BaseChangedGameFeatureListener* this, bool initialized);

bool BaseChangedGameFeatureListener_isChangedFeature(BaseChangedGameFeatureListener* this, Feature* gameFeature);

bool BaseChangedGameFeatureListener_isChanged(BaseChangedGameFeatureListener* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseChangedGameFeatureListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseChangedGameFeatureListener_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H
