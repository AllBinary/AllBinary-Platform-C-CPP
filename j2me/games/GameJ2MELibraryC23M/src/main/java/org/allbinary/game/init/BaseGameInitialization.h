#ifndef ORG_ALLBINARY_GAME_INIT_BASEGAMEINITIALIZATION_H
#define ORG_ALLBINARY_GAME_INIT_BASEGAMEINITIALIZATION_H
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
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameInitializationInterface GameInitializationInterface;
typedef struct CommandListener CommandListener;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
typedef struct InputFeatureFactory InputFeatureFactory;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct FeaturedResourceRelativeRelationshipFactory FeaturedResourceRelativeRelationshipFactory;
typedef struct ResourceInitialization ResourceInitialization;
typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct GameFeatureImageCacheFactory GameFeatureImageCacheFactory;
typedef struct CompleteMotionGestureInputToGameMotionGestureInput CompleteMotionGestureInputToGameMotionGestureInput;
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct CancelTouchButtonInputFactory CancelTouchButtonInputFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
#if __has_include("org/allbinary/game/resource/ResourceInitialization.h")
#include "org/allbinary/game/resource/ResourceInitialization.h"
#endif
#include "org/allbinary/game/init/GameInitializationInterface.h"

typedef struct BaseGameInitialization BaseGameInitialization;
struct BaseGameInitialization {
    GameInitializationInterface GameInitializationInterface_interface;
    ResourceInitialization** resourceInitializationArray;
    int32_t portion;
    bool initialized;
    int32_t EARLY_RESOURCES;
    int32_t GAME_RESOURCES;
    int32_t EARLY_CHANGABLE_RESOURCES;
    int32_t GAME_CHANGABLE_RESOURCES;
    bool gameInitialized;
    bool allLoaded;
};

extern BaseGameInitialization* BaseGameInitialization_NULL_BASE_GAME_INITIALIZATION;

BaseGameInitialization* BaseGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion);

void BaseGameInitialization_init(BaseGameInitialization* this, ResourceInitialization** resourceInitializationArray, int32_t portion);

void BaseGameInitialization_initKey(BaseGameInitialization* this, int32_t portion);

void BaseGameInitialization_initKeyMapping(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, int32_t portion);

void BaseGameInitialization_initMethod(BaseGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level);

void BaseGameInitialization_resourceInitialization(BaseGameInitialization* this, int32_t level);

bool BaseGameInitialization_resourceAnimationChange(BaseGameInitialization* this);


void BaseGameInitialization_setGameInitialized(BaseGameInitialization* this, bool gameInitialized);

bool BaseGameInitialization_isGameInitialized(BaseGameInitialization* this);

int32_t BaseGameInitialization_getPortion(BaseGameInitialization* this);

void BaseGameInitialization_setInitialized(BaseGameInitialization* this, bool initialized);

bool BaseGameInitialization_isInitialized(BaseGameInitialization* this);
#define BaseGameInitialization_new2 BaseGameInitialization_new
#define BaseGameInitialization_init2 BaseGameInitialization_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseGameInitialization_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseGameInitialization_register(void);


#endif // ORG_ALLBINARY_GAME_INIT_BASEGAMEINITIALIZATION_H
