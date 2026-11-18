#ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_H
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
// package org.allbinary.game.layer.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif

typedef struct DropLayerFactory DropLayerFactory;
struct DropLayerFactory {
    BasicArrayList* list;
    BasicArrayListUtil* basicArrayListUtil;
};


DropLayerFactory* DropLayerFactory_new(void);

void DropLayerFactory_init(DropLayerFactory* this);

void DropLayerFactory_clear(DropLayerFactory* this);

DropLayerFactory* DropLayerFactory_getInstance(void);

int32_t DropLayerFactory_getSize(DropLayerFactory* this);

PickedUpLayerInterfaceFactoryInterface* DropLayerFactory_getRandomInstance(DropLayerFactory* this);

void DropLayerFactory_add(DropLayerFactory* this, PickedUpLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

BasicArrayList* DropLayerFactory_getList(DropLayerFactory* this);
#define DropLayerFactory_new0 DropLayerFactory_new
#define DropLayerFactory_init0 DropLayerFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DropLayerFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DropLayerFactory_register(void);

#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERFACTORY_H
