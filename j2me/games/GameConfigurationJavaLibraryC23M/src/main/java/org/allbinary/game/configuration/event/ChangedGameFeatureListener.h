#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H
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
typedef struct BaseChangedGameFeatureListener BaseChangedGameFeatureListener;
typedef struct GameConfiguration GameConfiguration;
#include "org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h"

typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
struct ChangedGameFeatureListener {
    BaseChangedGameFeatureListener base;
};


ChangedGameFeatureListener* ChangedGameFeatureListener_new(void);
void ChangedGameFeatureListener_init(ChangedGameFeatureListener* this);

ChangedGameFeatureListener* ChangedGameFeatureListener_getInstance(void);

bool ChangedGameFeatureListener_isChangedGameConfiguration(ChangedGameFeatureListener* this, GameConfiguration* gameConfiguration);
#ifndef ChangedGameFeatureListener_onEvent
#define ChangedGameFeatureListener_onEvent BaseChangedGameFeatureListener_onEvent
#endif
#ifndef ChangedGameFeatureListener_onGameFeatureChange
#define ChangedGameFeatureListener_onGameFeatureChange BaseChangedGameFeatureListener_onGameFeatureChange
#endif
#ifndef ChangedGameFeatureListener_add
#define ChangedGameFeatureListener_add BaseChangedGameFeatureListener_add
#endif
#ifndef ChangedGameFeatureListener_remove
#define ChangedGameFeatureListener_remove BaseChangedGameFeatureListener_remove
#endif
#ifndef ChangedGameFeatureListener_setChanged
#define ChangedGameFeatureListener_setChanged BaseChangedGameFeatureListener_setChanged
#endif
#ifndef ChangedGameFeatureListener_isChangedFeature
#define ChangedGameFeatureListener_isChangedFeature BaseChangedGameFeatureListener_isChangedFeature
#endif
#ifndef ChangedGameFeatureListener_isChanged
#define ChangedGameFeatureListener_isChanged BaseChangedGameFeatureListener_isChanged
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ChangedGameFeatureListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ChangedGameFeatureListener_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H
