#ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H
#define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H
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
// package org.allbinary.game.layer.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct OnDemandResourcesFactory OnDemandResourcesFactory;
typedef struct OnDemandResources OnDemandResources;
typedef struct BaseResourceAnimationInterfaceFactoryInterfaceFactory BaseResourceAnimationInterfaceFactoryInterfaceFactory;
typedef struct Features Features;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
typedef struct LayerPlacementInterfaceBasicArrayListFactoryInterface LayerPlacementInterfaceBasicArrayListFactoryInterface;
typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
typedef struct ImageCache ImageCache;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory.h")
#include "org/allbinary/game/layer/GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/resources/OnDemandResourcesFactory.h")
#include "org/allbinary/game/layer/resources/OnDemandResourcesFactory.h"
#endif

typedef struct OnDemandLoader OnDemandLoader;
struct OnDemandLoader {
    OnDemandResourcesFactory* onDemandResourcesFactory;
    GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory;
    BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory;
};


OnDemandLoader* OnDemandLoader_new(OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory);

void OnDemandLoader_init(OnDemandLoader* this, OnDemandResourcesFactory* onDemandResourcesFactory, GameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory* gameLayerPlacementInterfaceBasicArrayListFactoryInterfaceFactory, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory);

void OnDemandLoader_initMethod(OnDemandLoader* this, ImageCache* imageCache, int32_t level, const char* loadingString);


#define OnDemandLoader_new3 OnDemandLoader_new
#define OnDemandLoader_init3 OnDemandLoader_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OnDemandLoader_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OnDemandLoader_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDLOADER_H
