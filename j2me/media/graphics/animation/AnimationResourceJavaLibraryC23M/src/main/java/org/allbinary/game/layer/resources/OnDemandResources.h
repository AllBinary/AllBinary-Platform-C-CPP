#ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H
#define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H
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
typedef struct BaseResourceAnimationInterfaceFactoryInterfaceFactory BaseResourceAnimationInterfaceFactoryInterfaceFactory;
typedef struct ImageCache ImageCache;
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct OnDemandResources OnDemandResources;
struct OnDemandResources {
    LogUtil* logUtil;
};

extern OnDemandResources* OnDemandResources_NULL_ON_DEMAND_RESOURCES;

OnDemandResources* OnDemandResources_new(void);

void OnDemandResources_init(OnDemandResources* this);

void OnDemandResources_waitFor(OnDemandResources* this);

void OnDemandResources_initMethod(OnDemandResources* this);

int32_t OnDemandResources_initAt(OnDemandResources* this, ImageCache* imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, const char* loadingString, int32_t index);
#define OnDemandResources_new0 OnDemandResources_new
#define OnDemandResources_init0 OnDemandResources_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OnDemandResources_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OnDemandResources_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H
