#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_H
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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct CountedPickedUpLayerInterfaceFactoryPool CountedPickedUpLayerInterfaceFactoryPool;
struct CountedPickedUpLayerInterfaceFactoryPool {
    BasicArrayList* list;
};


CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_new(void);

void CountedPickedUpLayerInterfaceFactoryPool_init(CountedPickedUpLayerInterfaceFactoryPool* this);

BasicArrayList* CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool* this);

CountedPickedUpLayerInterfaceFactoryPool* CountedPickedUpLayerInterfaceFactoryPool_getInstance(void);

void CountedPickedUpLayerInterfaceFactoryPool_initMethod(void);
#define CountedPickedUpLayerInterfaceFactoryPool_new0 CountedPickedUpLayerInterfaceFactoryPool_new
#define CountedPickedUpLayerInterfaceFactoryPool_init0 CountedPickedUpLayerInterfaceFactoryPool_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CountedPickedUpLayerInterfaceFactoryPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CountedPickedUpLayerInterfaceFactoryPool_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_H
